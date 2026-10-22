/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f53440 (ELF vaddr 0x9e53440)
 * Label: caller-of-callee
 * Body:  [[09f53440, 09f54621] [09f54630, 09f549d8] [09f549e0, 09f555dd] [09f555e0, 09f56450] [09f56460, 09f56f8a] [09f56f90, 09f57445] [09f57450, 09f57501] [09f57510, 09f57869] [09f57870, 09f59d47] [09f59d4b, 09f59d5b] [09f5a664, 09f5a67f] [09f5abe8, 09f5abf9] [09f5acd5, 09f5acfc] [09f5aea1, 09f5af1f] [09f5af22, 09f5af58]]
 * Ghidra: FUN_09f53440
 */


/* WARNING: Removing unreachable block (ram,0x09f55280) */
/* WARNING: Removing unreachable block (ram,0x09f5529a) */
/* WARNING: Removing unreachable block (ram,0x09f57eb6) */
/* WARNING: Removing unreachable block (ram,0x09f57ec8) */
/* WARNING: Removing unreachable block (ram,0x09f57edf) */
/* WARNING: Removing unreachable block (ram,0x09f556d9) */
/* WARNING: Removing unreachable block (ram,0x09f556f3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_09f53440(undefined8 param_1,uint *******param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint ****ppppuVar2;
  uint *puVar3;
  uint ******ppppppuVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  char cVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  int iVar18;
  uint *******pppppppuVar19;
  uint *******pppppppuVar20;
  uint ******ppppppuVar21;
  uint *****pppppuVar22;
  uint *****pppppuVar23;
  undefined8 *puVar24;
  uint *******pppppppuVar25;
  long lVar26;
  uint ******ppppppuVar27;
  long *plVar28;
  undefined8 uVar29;
  uint *******pppppppuVar30;
  uint *******pppppppuVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  long *plVar35;
  byte *pbVar36;
  ulong uVar37;
  long *plVar38;
  undefined4 uVar39;
  undefined *puVar40;
  ulong uVar41;
  undefined1 auVar42 [8];
  byte bVar43;
  uint uVar44;
  uint uVar45;
  uint ****ppppuVar46;
  ulong uVar47;
  uint uVar48;
  uint *******pppppppuVar49;
  bool bVar50;
  uint *******pppppppuStack_1618;
  uint *******pppppppuStack_1610;
  uint *******pppppppuStack_1608;
  uint *******pppppppuStack_1600;
  undefined1 auStack_15f8 [8];
  uint ******ppppppuStack_15f0;
  uint *******pppppppuStack_15e8;
  uint uStack_15e0;
  undefined4 uStack_15dc;
  undefined8 uStack_15d0;
  undefined1 auStack_15c8 [8];
  uint *******pppppppuStack_15c0;
  uint *******pppppppuStack_15b8;
  byte bStack_15b0;
  undefined7 uStack_15af;
  uint *******pppppppuStack_15a0;
  uint *******pppppppuStack_1590;
  long *plStack_1588;
  uint *******pppppppuStack_1580;
  undefined1 auStack_1578 [8];
  uint *******pppppppuStack_1570;
  uint *******pppppppuStack_1568;
  uint *******pppppppuStack_1560;
  undefined4 uStack_1558;
  undefined1 auStack_1548 [8];
  uint *******pppppppuStack_1540;
  uint *******pppppppuStack_1538;
  undefined8 uStack_1530;
  undefined4 uStack_1528;
  undefined4 uStack_1524;
  undefined4 uStack_1520;
  undefined4 uStack_151c;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  undefined4 uStack_1510;
  undefined4 uStack_150c;
  byte bStack_1508;
  undefined8 uStack_14f8;
  uint *******pppppppuStack_14f0;
  uint *******pppppppuStack_14e8;
  uint *******pppppppuStack_14e0;
  long *plStack_14d8;
  uint *******pppppppuStack_14d0;
  long *plStack_14c8;
  uint *******pppppppuStack_14c0;
  byte bStack_14b8;
  undefined1 uStack_14b7;
  undefined6 uStack_14b6;
  undefined8 uStack_14a8;
  undefined1 auStack_14a0 [24];
  long *plStack_1488;
  uint ******ppppppuStack_1480;
  undefined8 uStack_1478;
  undefined4 uStack_1470;
  char cStack_1468;
  byte *pbStack_1460;
  uint *******pppppppuStack_1458;
  uint *******pppppppuStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  uint uStack_1438;
  undefined4 uStack_1434;
  undefined4 uStack_1430;
  undefined4 uStack_142c;
  uint ******ppppppuStack_1428;
  char cStack_1420;
  uint uStack_1418;
  undefined4 uStack_1414;
  undefined4 uStack_1410;
  undefined4 uStack_140c;
  uint ******ppppppuStack_1408;
  char cStack_1400;
  uint uStack_13f8;
  undefined4 uStack_13f4;
  undefined4 uStack_13f0;
  undefined4 uStack_13ec;
  uint ******ppppppuStack_13e8;
  char cStack_13e0;
  uint uStack_13d8;
  undefined4 uStack_13d4;
  undefined4 uStack_13d0;
  undefined4 uStack_13cc;
  uint ******ppppppuStack_13c8;
  char cStack_13c0;
  uint uStack_13b8;
  undefined4 uStack_13b4;
  undefined4 uStack_13b0;
  undefined4 uStack_13ac;
  uint ******ppppppuStack_13a8;
  char cStack_13a0;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  long lStack_1380;
  long lStack_1378;
  long lStack_1370;
  uint uStack_1368;
  undefined4 uStack_1364;
  undefined4 uStack_1360;
  undefined4 uStack_135c;
  undefined4 uStack_1358;
  undefined4 uStack_1354;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  ulong uStack_1348;
  uint uStack_1338;
  undefined4 uStack_1334;
  undefined4 uStack_1330;
  undefined4 uStack_132c;
  long lStack_1320;
  uint *******pppppppuStack_1318;
  uint *******pppppppuStack_1310;
  uint *******pppppppuStack_1308;
  uint *******pppppppuStack_1300;
  uint *******pppppppuStack_12f8;
  uint *******pppppppuStack_12f0;
  undefined1 auStack_12e8 [2];
  undefined2 uStack_12e6;
  uint uStack_12e4;
  uint uStack_12e0;
  uint uStack_12dc;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  uint *******pppppppuStack_12c0;
  uint *******pppppppuStack_12b8;
  uint *******pppppppuStack_12b0;
  undefined1 auStack_12a8 [16];
  undefined8 uStack_1298;
  long lStack_1290;
  undefined8 uStack_1288;
  undefined1 auStack_1280 [8];
  undefined *puStack_1278;
  undefined1 *puStack_1270;
  undefined *puStack_1268;
  undefined1 *puStack_1260;
  undefined *puStack_1258;
  uint *******pppppppuStack_1250;
  undefined *puStack_1248;
  undefined1 *puStack_1240;
  undefined8 uStack_ee8;
  undefined8 uStack_e50;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined8 uStack_e38;
  undefined1 auStack_e30 [80];
  undefined8 uStack_de0;
  undefined7 uStack_dd8;
  undefined4 uStack_dd1;
  uint ******ppppppuStack_dc8;
  undefined8 uStack_dc0;
  undefined4 uStack_db8;
  undefined1 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined1 uStack_d98;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  uint uStack_d48;
  undefined4 uStack_d44;
  undefined4 uStack_d40;
  undefined4 uStack_d3c;
  undefined1 *puStack_d30;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  uint *******pppppppuStack_d20;
  undefined8 uStack_d18;
  uint *******pppppppuStack_d10;
  undefined8 uStack_d08;
  undefined1 auStack_d00 [24];
  undefined1 auStack_ce8 [24];
  undefined1 auStack_cd0 [24];
  uint ******ppppppuStack_cb8;
  undefined4 *puStack_cb0;
  uint *******pppppppuStack_c98;
  ulong uStack_c88;
  undefined3 uStack_c80;
  undefined5 uStack_c7d;
  undefined3 uStack_c78;
  undefined8 uStack_c75;
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  uint uStack_c50;
  undefined4 uStack_c4c;
  undefined4 uStack_c48;
  undefined4 uStack_c44;
  undefined8 uStack_c40;
  char cStack_c38;
  uint auStack_c28 [8];
  uint *puStack_c08;
  uint *****apppppuStack_bf8 [4];
  uint ******ppppppuStack_bd8;
  undefined8 uStack_bc8;
  ulong uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined *puStack_ba8;
  uint *******pppppppuStack_ba0;
  undefined1 auStack_b98 [16];
  undefined *puStack_b68;
  uint *******pppppppuStack_b60;
  uint *******pppppppuStack_b58;
  undefined1 auStack_b28 [4];
  undefined4 uStack_b24;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  ulong uStack_b10;
  byte bStack_ae8;
  undefined8 uStack_728;
  undefined1 auStack_718 [48];
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 uStack_648;
  undefined4 uStack_640;
  undefined8 uStack_638;
  uint *******pppppppuStack_630;
  uint *******pppppppuStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined1 uStack_60c;
  long alStack_608 [4];
  long *plStack_5e8;
  uint *******apppppppuStack_5d8 [2];
  undefined1 auStack_5c8 [48];
  uint uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  uint ******ppppppuStack_588;
  long alStack_578 [4];
  long *plStack_558;
  undefined1 auStack_548 [48];
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined4 uStack_470;
  undefined8 uStack_468;
  uint *******pppppppuStack_460;
  uint *******pppppppuStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined1 uStack_43c;
  uint ******ppppppuStack_438;
  long lStack_430;
  undefined8 uStack_428;
  uint *******pppppppuStack_38;
  
  uStack_14f8 = param_1;
  pppppppuVar19 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
  if (pppppppuVar19 == (uint *******)0x0) goto LAB_09f598a2;
  do {
    pppppppuVar19[0x1e] = (uint ******)0x0;
    pppppppuVar19[0x1f] = (uint ******)0x0;
    pppppppuVar19[0x1c] = (uint ******)0x0;
    pppppppuVar19[0x1d] = (uint ******)0x0;
    pppppppuVar19[0x1a] = (uint ******)0x0;
    pppppppuVar19[0x1b] = (uint ******)0x0;
    pppppppuVar19[0x18] = (uint ******)0x0;
    pppppppuVar19[0x19] = (uint ******)0x0;
    pppppppuVar19[0x16] = (uint ******)0x0;
    pppppppuVar19[0x17] = (uint ******)0x0;
    pppppppuVar19[0x14] = (uint ******)0x0;
    pppppppuVar19[0x15] = (uint ******)0x0;
    pppppppuVar19[0x12] = (uint ******)0x0;
    pppppppuVar19[0x13] = (uint ******)0x0;
    pppppppuVar19[0x10] = (uint ******)0x0;
    pppppppuVar19[0x11] = (uint ******)0x0;
    pppppppuVar19[0xe] = (uint ******)0x0;
    pppppppuVar19[0xf] = (uint ******)0x0;
    pppppppuVar19[0xc] = (uint ******)0x0;
    pppppppuVar19[0xd] = (uint ******)0x0;
    pppppppuVar19[10] = (uint ******)0x0;
    pppppppuVar19[0xb] = (uint ******)0x0;
    pppppppuVar19[8] = (uint ******)0x0;
    pppppppuVar19[9] = (uint ******)0x0;
    pppppppuVar19[6] = (uint ******)0x0;
    pppppppuVar19[7] = (uint ******)0x0;
    pppppppuVar19[4] = (uint ******)0x0;
    pppppppuVar19[5] = (uint ******)0x0;
    pppppppuVar19[2] = (uint ******)0x0;
    pppppppuVar19[3] = (uint ******)0x0;
    pppppppuVar19[0x20] = (uint ******)0x0;
    *pppppppuVar19 = (uint ******)&UNK_0f1f7bb8;
    pppppppuVar19[1] = (uint ******)0x0;
    if ((_DAT_0f728590 == (char *)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*_DAT_0f728590 == '\0') &&
       (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppppppuVar25 = _DAT_0f7285a0;
    pppppppuVar20 = _DAT_0f7280e0;
    if (_DAT_0f7280e0 != (uint *******)0x0) goto LAB_09f535ea;
    pppppppuVar20 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (pppppppuVar20 == (uint *******)0x0) goto LAB_09f59939;
    while( true ) {
      func_0x0ee29760(pppppppuVar20,&UNK_01302b9e,0xb,0x3c);
      if (_DAT_0f7280e0 != (uint *******)0x0) {
        ppppppuVar21 = *_DAT_0f7280e0;
        _DAT_0f7280e0 = pppppppuVar20;
        (*(code *)ppppppuVar21[1])();
        pppppppuVar20 = _DAT_0f7280e0;
      }
LAB_09f535ea:
      _DAT_0f7280e0 = pppppppuVar20;
      auStack_12e8[0] = 0x16;
      auStack_12e8[1] = 0x73;
      uStack_12e6 = 0x7265;
      uStack_12e4 = 0x20726576;
      uStack_12e0 = 0x74696e69;
      uStack_12dc = uStack_12dc & 0xffffff00;
      func_0x0ee2a680(pppppppuVar19 + 2,pppppppuVar25,_DAT_0f7280e0,auStack_12e8);
      if ((auStack_12e8[0] & 1) != 0) {
        func_0x0412a280(uStack_12d8,
                        CONCAT44(uStack_12e4,
                                 CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))) &
                        0xfffffffffffffffe);
      }
      ppppppuVar21 = param_2[0x69];
      param_2[0x69] = (uint ******)pppppppuVar19;
      if (ppppppuVar21 != (uint ******)0x0) {
        (*(code *)(*ppppppuVar21)[1])();
      }
      pppppppuVar19 = (uint *******)(param_3 + 0x114);
      pppppppuVar20 = param_2 + 0x5e;
      if (pppppppuVar20 != pppppppuVar19) {
        if (*pppppppuVar20 != (uint ******)0x0) {
          (*(code *)(*pppppppuVar20)[1])(pppppppuVar20);
        }
        if (*pppppppuVar19 == (uint ******)0x0) {
          ppppppuVar21 = (uint ******)0x0;
        }
        else {
          (*(code *)**pppppppuVar19)(pppppppuVar19,pppppppuVar20);
          ppppppuVar21 = *pppppppuVar19;
        }
        *pppppppuVar19 = (uint ******)0x0;
        *pppppppuVar20 = ppppppuVar21;
      }
      ppppppuVar21 = param_2[0x53];
      param_2[0x52] = (uint ******)0x0;
      param_2[0x53] = (uint ******)0x0;
      if (ppppppuVar21 != (uint ******)0x0) {
        LOCK();
        ppppppuVar27 = ppppppuVar21 + 1;
        pppppuVar22 = *ppppppuVar27;
        *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
        UNLOCK();
        if (pppppuVar22 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
          func_0x0412c2d0(ppppppuVar21);
        }
      }
      param_2[0x54] = (uint ******)0x0;
      uVar39 = param_3[0xca];
      uVar7 = param_3[0xcb];
      uVar8 = param_3[0xcc];
      uVar9 = param_3[0xcd];
      if (*(long *)(param_3 + 0xcc) != 0) {
        LOCK();
        plVar38 = (long *)(*(long *)(param_3 + 0xcc) + 8);
        *plVar38 = *plVar38 + 1;
        UNLOCK();
      }
      ppppppuVar21 = param_2[0x53];
      *(undefined4 *)(param_2 + 0x52) = uVar39;
      *(undefined4 *)((long)param_2 + 0x294) = uVar7;
      *(undefined4 *)(param_2 + 0x53) = uVar8;
      *(undefined4 *)((long)param_2 + 0x29c) = uVar9;
      if (ppppppuVar21 != (uint ******)0x0) {
        LOCK();
        ppppppuVar27 = ppppppuVar21 + 1;
        pppppuVar22 = *ppppppuVar27;
        *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
        UNLOCK();
        if (pppppuVar22 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
          func_0x0412c2d0(ppppppuVar21);
        }
      }
      param_2[0x54] = *(uint *******)(param_3 + 0xce);
      param_2[0x55] = (uint ******)0x0;
      ppppppuVar21 = param_2[0x56];
      param_2[0x56] = (uint ******)0x0;
      if (ppppppuVar21 != (uint ******)0x0) {
        LOCK();
        ppppppuVar27 = ppppppuVar21 + 1;
        pppppuVar22 = *ppppppuVar27;
        *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
        UNLOCK();
        if (pppppuVar22 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
          func_0x0412c2d0(ppppppuVar21);
        }
      }
      param_2[0x57] = (uint ******)0x0;
      uVar39 = param_3[0xd0];
      uVar7 = param_3[0xd1];
      uVar8 = param_3[0xd2];
      uVar9 = param_3[0xd3];
      if (*(long *)(param_3 + 0xd2) != 0) {
        LOCK();
        plVar38 = (long *)(*(long *)(param_3 + 0xd2) + 8);
        *plVar38 = *plVar38 + 1;
        UNLOCK();
      }
      ppppppuVar21 = param_2[0x56];
      *(undefined4 *)(param_2 + 0x55) = uVar39;
      *(undefined4 *)((long)param_2 + 0x2ac) = uVar7;
      *(undefined4 *)(param_2 + 0x56) = uVar8;
      *(undefined4 *)((long)param_2 + 0x2b4) = uVar9;
      if (ppppppuVar21 != (uint ******)0x0) {
        LOCK();
        ppppppuVar27 = ppppppuVar21 + 1;
        pppppuVar22 = *ppppppuVar27;
        *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
        UNLOCK();
        if (pppppuVar22 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
          func_0x0412c2d0(ppppppuVar21);
        }
      }
      param_2[0x57] = *(uint *******)(param_3 + 0xd4);
      if (*(char *)((long)param_3 + 0x441) == '\x01') {
        *(byte *)(param_2 + 0x5c) = *(byte *)(param_3 + 0x110);
      }
      ppppppuVar21 = (uint ******)func_0x0417cc60();
      param_2[0x10] = ppppppuVar21;
      DAT_0f6e8ef8 = *(undefined1 *)((long)param_3 + 0x301);
      if ((DAT_0f7ba1c0 == '\0') && (iVar18 = FUN_04108328(&DAT_0f7ba1c0), iVar18 != 0)) {
        _DAT_0f7ba1b0 = 0;
        uRam000000000f7ba1b8 = 0;
        _DAT_0f7ba1a0 = 0;
        uRam000000000f7ba1a8 = 0;
        _DAT_0f7ba190 = 0;
        uRam000000000f7ba198 = 0;
        _DAT_0f7ba180 = 0;
        uRam000000000f7ba188 = 0;
        _DAT_0f7ba170 = 0;
        uRam000000000f7ba178 = 0;
        func_0x0410844d(&DAT_0f7ba1c0);
      }
      pppppuVar22 = (uint *****)func_0x0eee2fc0();
      auStack_12e8[0] = (byte)pppppuVar22;
      auStack_12e8[1] = (undefined1)((ulong)pppppuVar22 >> 8);
      uStack_12e6 = (undefined2)((ulong)pppppuVar22 >> 0x10);
      uStack_12e4 = (uint)((ulong)pppppuVar22 >> 0x20);
      func_0x0eee0090(&DAT_0f7ba170,auStack_12e8);
      pppppppuStack_14f0 = param_2 + 0x22;
      if ((param_2[0x22] == (uint ******)0x0) &&
         (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014b8a2c),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(char *)*pppppppuStack_14f0 == '\0') &&
         (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014b8a2c),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      ppppppuVar21 = param_2[0x24];
      if (*(char *)(ppppppuVar21 + 0xc) == '\0') {
        *(undefined1 *)(ppppppuVar21 + 0xc) = 1;
      }
      ppppppuVar21[0xb] = pppppuVar22;
      pppppuVar22 = *(uint ******)(param_3 + 0x80);
      ppppppuVar21 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (ppppppuVar21 == (uint ******)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      *ppppppuVar21 = (uint *****)&UNK_0f534768;
      pppppuVar23 = (uint *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pppppuVar23 == (uint *****)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      pppppuVar23[1] = (uint ****)0x0;
      pppppuVar23[2] = (uint ****)0x0;
      plVar38 = (long *)&UNK_0ef44a60;
      *pppppuVar23 = (uint ****)&UNK_0ef44a60;
      *(undefined1 *)(pppppuVar23 + 3) = 1;
      ppppppuVar21[1] = pppppuVar23 + 3;
      ppppppuVar21[2] = pppppuVar23;
      ppppppuVar21[4] = pppppuVar22;
      *(undefined1 *)(ppppppuVar21 + 5) = 0;
      *ppppppuVar21 = (uint *****)&UNK_0f1f70d8;
      ppppppuVar21[3] = (uint *****)&UNK_0f1f7128;
      if ((DAT_0f64ae50 == '\0') && (iVar18 = FUN_04108328(&DAT_0f64ae50), iVar18 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f64ae48 = _DAT_0f5523e8;
        _DAT_0f5523e8 = _DAT_0f5523e8 + 1;
        func_0x0410844d(&DAT_0f64ae50);
      }
      auStack_12e8[0] = (byte)_DAT_0f64ae48;
      auStack_12e8[1] = (undefined1)((ushort)_DAT_0f64ae48 >> 8);
      pppppppuVar19 = (uint *******)auStack_12e8;
      func_0x0eeb8400(ppppppuVar21,pppppppuVar19);
      ppppppuVar27 = param_2[0x49];
      param_2[0x49] = ppppppuVar21;
      if (ppppppuVar27 != (uint ******)0x0) {
        (*(code *)(*ppppppuVar27)[1])();
        ppppppuVar21 = param_2[0x49];
      }
      (*(code *)(*ppppppuVar21)[6])(ppppppuVar21,*(undefined1 *)(param_3 + 0xba));
      *(byte *)((long)param_2 + 0x271) = *(byte *)((long)param_3 + 0x302);
      func_0x0d5d4d00(&lStack_1380,*(undefined8 *)(param_3 + 0xc6));
      if (lStack_1380 != lStack_1378) {
        func_0x04a782c0(&ppppppuStack_438,lStack_1380,lStack_1378,&UNK_0121f022,2);
        puVar24 = (undefined8 *)func_0x0412f0e0(&ppppppuStack_438,0,&UNK_013cf63d,0x16);
        uStack_12d8 = (uint *******)puVar24[2];
        uVar29 = *puVar24;
        auStack_12e8[0] = (byte)uVar29;
        auStack_12e8[1] = (undefined1)((ulong)uVar29 >> 8);
        uStack_12e6 = (undefined2)((ulong)uVar29 >> 0x10);
        uStack_12e4 = (uint)((ulong)uVar29 >> 0x20);
        uStack_12e0 = (uint)puVar24[1];
        uStack_12dc = (uint)((ulong)puVar24[1] >> 0x20);
        *puVar24 = 0;
        puVar24[1] = 0;
        puVar24[2] = 0;
        if (((ulong)ppppppuStack_438 & 1) != 0) {
          func_0x0412a280(uStack_428,(ulong)ppppppuStack_438 & 0xfffffffffffffffe);
        }
        pppppppuVar20 = uStack_12d8;
        if ((auStack_12e8[0] & 1) == 0) {
          pppppppuVar20 = (uint *******)(auStack_12e8 + 1);
        }
        func_0x0eede920(0,1,0,0xc,2,&UNK_01483143,0x169,pppppppuVar20);
        if ((auStack_12e8[0] & 1) != 0) {
          func_0x0412a280(uStack_12d8,
                          CONCAT44(uStack_12e4,
                                   CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0])))
                          & 0xfffffffffffffffe);
        }
      }
      FUN_0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      func_0x0412d610(0xf5522b8);
      pppppppuVar25 = _DAT_0f5523a0;
      pbVar1 = _DAT_0f552398;
      if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
        uVar29 = func_0x0eee02f0(0xf5522b8);
        func_0x0ee386e0(0xf5522b8);
        func_0x0ee386e0(pppppppuVar19);
        func_0x0ee386e0(&uStack_1390);
        func_0x0ee386e0(&uStack_1388);
        func_0x041084d6(&DAT_0f64ae30);
        func_0x09ad9940(auStack_1548);
        pppppppuVar19 = pppppppuStack_14c0;
        pppppppuStack_14c0 = (uint *******)0x0;
        if (pppppppuVar19 != (uint *******)0x0) {
          (*(code *)(*pppppppuVar19)[1])();
        }
        func_0x0491f640(&pbStack_1460);
        pppppppuVar19 = pppppppuStack_1610;
        if (pppppppuStack_1610 == (uint *******)0x0) goto LAB_09f5a664;
        do {
          pppppppuStack_1610 = (uint *******)0x0;
          (*(code *)(*pppppppuVar19)[1])();
          pppppppuVar19 = pppppppuStack_1618;
          while( true ) {
            pppppppuStack_1618 = (uint *******)0x0;
            if (pppppppuVar19 != (uint *******)0x0) {
              pppppppuStack_1618 = (uint *******)0x0;
              (*(code *)(*pppppppuVar19)[1])();
            }
            func_0x04886070(&lStack_1380);
            uVar29 = func_0x0eee2d70(uVar29);
            func_0x048c3ac0(auStack_12e8);
            func_0x04886070(&lStack_1380);
            uVar29 = func_0x0eee2d70(uVar29);
            func_0x04886070(&lStack_1380);
            uVar29 = func_0x0eee2d70(uVar29);
            pppppppuVar19 = pppppppuStack_1610;
            if (pppppppuStack_1610 != (uint *******)0x0) break;
LAB_09f5a664:
            pppppppuStack_1610 = (uint *******)0x0;
            pppppppuVar19 = pppppppuStack_1618;
          }
        } while( true );
      }
      bVar15 = 1;
      if (_DAT_0f5523a0 != (uint *******)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = (uint ******)((long)_DAT_0f5523a0[1] + 1);
        UNLOCK();
        bVar15 = *pbVar1;
      }
      pppppppuVar20 = _DAT_0f5523a8;
      auStack_12e8[0] = 0xb8;
      auStack_12e8[1] = 0x22;
      uStack_12e6 = 0xf55;
      uStack_12e4 = 0;
      uStack_12e0 = CONCAT31(uStack_12e0._1_3_,1);
      uStack_12d8 = (uint *******)pbVar1;
      uStack_12d0 = (undefined1  [8])pppppppuVar25;
      uStack_12c8 = _DAT_0f5523a8;
      if (((bVar15 & 1) == 0) &&
         (cVar14 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar14 = (*(code *)(*pppppppuVar20)[0xd2])(pppppppuVar20);
      if (cVar14 == '\0') break;
      cVar14 = *(char *)(param_3 + 0x124);
      uStack_12d8 = (uint *******)0x0;
      uStack_12d0 = (undefined1  [8])0x0;
      if (pppppppuVar25 != (uint *******)0x0) {
        LOCK();
        pppppppuVar31 = pppppppuVar25 + 1;
        ppppppuVar21 = *pppppppuVar31;
        *pppppppuVar31 = (uint ******)((long)*pppppppuVar31 + -1);
        UNLOCK();
        if (ppppppuVar21 == (uint ******)0x0) {
          (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
          func_0x0412c2d0(pppppppuVar25);
        }
        ppppppuVar21 = (uint ******)uStack_12d0;
        uStack_12c8 = (uint *******)0x0;
        if (uStack_12d0 != (undefined1  [8])0x0) {
          LOCK();
          ppppppuVar27 = (uint ******)((long)uStack_12d0 + 8);
          pppppuVar22 = *ppppppuVar27;
          *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
          UNLOCK();
          if (pppppuVar22 == (uint *****)0x0) {
            (*(code *)(*(uint ******)uStack_12d0)[2])(uStack_12d0);
            func_0x0412c2d0(ppppppuVar21);
          }
        }
      }
      if ((char)uStack_12e0 == '\x01') {
        func_0x0eee02f0(CONCAT44(uStack_12e4,
                                 CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))));
      }
      if (cVar14 == '\0') goto LAB_09f53e85;
      pppppppuVar25 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x270);
      if (pppppppuVar25 == (uint *******)0x0) {
        func_0x0eec74c0(0x270,0);
      }
      func_0x0b714e50(pppppppuVar25);
      ppppppuVar21 = param_2[0x66];
      param_2[0x66] = (uint ******)pppppppuVar25;
      if (ppppppuVar21 != (uint ******)0x0) {
        func_0x0b7159c0(ppppppuVar21);
        func_0x0412a280(ppppppuVar21,0x270);
      }
      if ((*pppppppuStack_14f0 == (uint ******)0x0) &&
         (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014b8a2c),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(char *)*pppppppuStack_14f0 == '\0') &&
         (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014b8a2c),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if (param_2[0x66] != (uint ******)0x0) {
        func_0x09f5b000(param_2[0x24]);
        goto LAB_09f53e85;
      }
LAB_09f59934:
      func_0x04890760();
LAB_09f59939:
      func_0x0eec74c0(0x68,0);
    }
    uStack_12d8 = (uint *******)0x0;
    uStack_12d0 = (undefined1  [8])0x0;
    if (pppppppuVar25 != (uint *******)0x0) {
      LOCK();
      pppppppuVar31 = pppppppuVar25 + 1;
      ppppppuVar21 = *pppppppuVar31;
      *pppppppuVar31 = (uint ******)((long)*pppppppuVar31 + -1);
      UNLOCK();
      if (ppppppuVar21 == (uint ******)0x0) {
        (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
        func_0x0412c2d0(pppppppuVar25);
      }
      ppppppuVar21 = (uint ******)uStack_12d0;
      uStack_12c8 = (uint *******)0x0;
      if (uStack_12d0 != (undefined1  [8])0x0) {
        LOCK();
        ppppppuVar27 = (uint ******)((long)uStack_12d0 + 8);
        pppppuVar22 = *ppppppuVar27;
        *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
        UNLOCK();
        if (pppppuVar22 == (uint *****)0x0) {
          (*(code *)(*(uint ******)uStack_12d0)[2])(uStack_12d0);
          func_0x0412c2d0(ppppppuVar21);
        }
      }
    }
    if ((char)uStack_12e0 == '\x01') {
      func_0x0eee02f0(CONCAT44(uStack_12e4,
                               CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))));
    }
LAB_09f53e85:
    pppppppuStack_1600 = param_2 + 0x43;
    if (((ulong)param_2[0x43] & 1) != 0) {
      func_0x0412a280(param_2[0x45],(ulong)param_2[0x43] & 0xfffffffffffffffe);
    }
    pppppppuStack_1600[2] = *(uint *******)(param_3 + 4);
    uVar39 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    *(undefined4 *)pppppppuStack_1600 = *param_3;
    *(undefined4 *)((long)pppppppuStack_1600 + 4) = uVar39;
    *(undefined4 *)(pppppppuStack_1600 + 1) = uVar7;
    *(undefined4 *)((long)pppppppuStack_1600 + 0xc) = uVar8;
    *(undefined2 *)param_3 = 0;
    pppppppuVar25 = param_2 + 0x46;
    if (((ulong)param_2[0x46] & 1) != 0) {
      func_0x0412a280(param_2[0x48],(ulong)param_2[0x46] & 0xfffffffffffffffe);
    }
    param_2[0x48] = *(uint *******)(param_3 + 0x10);
    uVar39 = param_3[0xd];
    uVar7 = param_3[0xe];
    uVar8 = param_3[0xf];
    *(undefined4 *)pppppppuVar25 = param_3[0xc];
    *(undefined4 *)((long)param_2 + 0x234) = uVar39;
    *(undefined4 *)(param_2 + 0x47) = uVar7;
    *(undefined4 *)((long)param_2 + 0x23c) = uVar8;
    *(undefined2 *)(param_3 + 0xc) = 0;
    ppppppuVar21 = *(uint *******)(param_3 + 0x9c);
    *(undefined8 *)(param_3 + 0x9c) = 0;
    ppppppuVar27 = param_2[0x19];
    param_2[0x19] = ppppppuVar21;
    if (ppppppuVar27 != (uint ******)0x0) {
      (*(code *)(*ppppppuVar27)[1])();
    }
    LOCK();
    *(undefined4 *)(param_2 + 0x25) = 4;
    UNLOCK();
    if ((param_2[0x22] == (uint ******)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014b8a2c),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*(char *)*pppppppuStack_14f0 == '\0') &&
       (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014b8a2c),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_12e8[0] = 0x28;
    auStack_12e8[1] = 0x8c;
    uStack_12e6 = 0xf39;
    uStack_12e4 = 0;
    uStack_12e0 = (uint)param_2;
    uVar12 = uStack_12e0;
    uStack_12dc = (uint)((ulong)param_2 >> 0x20);
    uVar13 = uStack_12dc;
    uStack_12c8 = pppppppuVar19;
    func_0x0c5e4710(param_2[0x24],pppppppuVar19);
    if (uStack_12c8 == pppppppuVar19) {
      lVar26 = 0x20;
LAB_09f5404b:
      (**(code **)((long)*uStack_12c8 + lVar26))();
      pppppppuVar19 = (uint *******)param_2[0x19];
    }
    else {
      lVar26 = 0x28;
      if (uStack_12c8 != (uint *******)0x0) goto LAB_09f5404b;
      pppppppuVar19 = (uint *******)param_2[0x19];
    }
    if ((pppppppuVar19 != (uint *******)0x0) && (*(byte *)(param_2 + 0x11) == 0)) {
      if ((*(long *)(param_3 + 0x96) == 0) &&
         (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f91c7),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_3 + 0x96) == '\0') &&
         (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f91c7),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar26 = *(long *)(param_3 + 0x9a);
      bVar15 = *(char *)(lVar26 + 0x438) * '\x02' | *(byte *)(pppppppuVar19 + 5) & 0xfd;
      *(byte *)(pppppppuVar19 + 5) = bVar15;
      lVar32 = *(long *)(lVar26 + 0xb0);
      if ((lVar32 == 0) ||
         ((int)((ulong)(*(long *)(lVar26 + 0xb8) - lVar32) >> 4) * -0x11111111 < 0x2b)) {
LAB_09f54165:
        bVar15 = (*(int *)(lVar26 + 0x3a8) == 0) << 3 | bVar15 & 0xf3;
      }
      else {
        if (*(int *)(lVar32 + 0x2768) != 1) goto LAB_09f59b6b;
        if (*(char *)(lVar32 + 0x2764) != '\x01') goto LAB_09f54165;
        bVar15 = bVar15 | 0xc;
      }
      *(byte *)(pppppppuVar19 + 5) = bVar15;
    }
    ppppppuVar21 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (ppppppuVar21 == (uint ******)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    func_0x0ee29760(ppppppuVar21,&UNK_013e98b5,0x15,0x14);
    ppppppuVar27 = param_2[0x18];
    param_2[0x18] = ppppppuVar21;
    if (ppppppuVar27 != (uint ******)0x0) {
      (*(code *)(*ppppppuVar27)[1])();
    }
    uStack_c88 = uStack_c88 & 0xffffffffffffff00;
    cStack_c38 = *(char *)(param_3 + 0xec) == '\x01';
    if ((bool)cStack_c38) {
      uStack_c75 = *(undefined8 *)((long)param_3 + 0x373);
      uStack_c78 = (undefined3)((ulong)*(undefined8 *)((long)param_3 + 0x36b) >> 0x28);
      uStack_c88 = *(ulong *)(param_3 + 0xd8);
      uStack_c80 = (undefined3)*(undefined8 *)(param_3 + 0xda);
      uStack_c7d = (undefined5)((ulong)*(undefined8 *)(param_3 + 0xda) >> 0x18);
      uStack_c58 = *(undefined8 *)(param_3 + 0xe4);
      uStack_c68 = *(ulong *)(param_3 + 0xe0);
      uStack_c60 = *(undefined8 *)(param_3 + 0xe2);
      *(undefined8 *)(param_3 + 0xe0) = 0;
      *(undefined8 *)(param_3 + 0xe2) = 0;
      *(undefined8 *)(param_3 + 0xe4) = 0;
      uStack_c40 = *(undefined8 *)(param_3 + 0xea);
      uStack_c50 = param_3[0xe6];
      uStack_c4c = param_3[0xe7];
      uStack_c48 = param_3[0xe8];
      uStack_c44 = param_3[0xe9];
      *(undefined8 *)(param_3 + 0xe6) = 0;
      *(undefined8 *)(param_3 + 0xe8) = 0;
      *(undefined8 *)(param_3 + 0xea) = 0;
    }
    puVar3 = *(uint **)(param_3 + 0xf8);
    if (puVar3 == (uint *)0x0) {
      puStack_c08 = (uint *)0x0;
    }
    else if (puVar3 == param_3 + 0xf0) {
      puStack_c08 = auStack_c28;
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,auStack_c28);
    }
    else {
      *(undefined8 *)(param_3 + 0xf8) = 0;
      puStack_c08 = puVar3;
    }
    ppppppuVar21 = apppppuStack_bf8;
    ppppppuVar27 = *(uint *******)(param_3 + 0x104);
    if (ppppppuVar27 == (uint ******)0x0) {
      ppppppuStack_bd8 = (uint ******)0x0;
    }
    else if (ppppppuVar27 == (uint ******)(param_3 + 0xfc)) {
      ppppppuStack_bd8 = ppppppuVar21;
      (*(code *)(*ppppppuVar27)[3])(ppppppuVar27,ppppppuVar21);
    }
    else {
      *(undefined8 *)(param_3 + 0x104) = 0;
      ppppppuStack_bd8 = ppppppuVar27;
    }
    uStack_bc8 = *(undefined8 *)(param_3 + 0x108);
    uStack_bc0 = *(ulong *)(param_3 + 0x10a);
    uStack_bb8 = *(undefined8 *)(param_3 + 0x10c);
    uStack_bb0 = *(undefined8 *)(param_3 + 0x10e);
    *(undefined8 *)(param_3 + 0x10a) = 0;
    *(undefined8 *)(param_3 + 0x10c) = 0;
    *(undefined8 *)(param_3 + 0x10e) = 0;
    if ((uStack_bc0 & 1) != 0) {
      func_0x0412a280(uStack_bb0,uStack_bc0 & 0xfffffffffffffffe);
    }
    if (ppppppuStack_bd8 == ppppppuVar21) {
      lVar26 = 0x20;
LAB_09f543d1:
      (**(code **)((long)*ppppppuStack_bd8 + lVar26))();
      if (puStack_c08 != auStack_c28) goto LAB_09f543b6;
LAB_09f543e4:
      lVar26 = 0x20;
LAB_09f543e9:
      (**(code **)(*(long *)puStack_c08 + lVar26))();
    }
    else {
      lVar26 = 0x28;
      if (ppppppuStack_bd8 != (uint ******)0x0) goto LAB_09f543d1;
      if (puStack_c08 == auStack_c28) goto LAB_09f543e4;
LAB_09f543b6:
      lVar26 = 0x28;
      if (puStack_c08 != (uint *)0x0) goto LAB_09f543e9;
    }
    if (cStack_c38 == '\x01') {
      if ((uStack_c50 & 1) != 0) {
        func_0x0412a280(uStack_c40,CONCAT44(uStack_c4c,uStack_c50) & 0xfffffffffffffffe);
      }
      if ((uStack_c68 & 1) != 0) {
        func_0x0412a280(uStack_c58,uStack_c68 & 0xfffffffffffffffe);
      }
    }
    ppppppuVar27 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
    if (ppppppuVar27 == (uint ******)0x0) {
      func_0x0eec74c0(0x108,0);
    }
    *ppppppuVar27 = (uint *****)&UNK_0f534768;
    pppppuVar22 = (uint *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pppppuVar22 == (uint *****)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    pppppuVar22[1] = (uint ****)0x0;
    pppppuVar22[2] = (uint ****)0x0;
    *pppppuVar22 = (uint ****)&UNK_0ef44a60;
    *(undefined1 *)(pppppuVar22 + 3) = 1;
    ppppppuVar27[1] = pppppuVar22 + 3;
    ppppppuVar27[2] = pppppuVar22;
    *ppppppuVar27 = (uint *****)&UNK_0f1cc338;
    ppppppuVar27[4] = (uint *****)(ppppppuVar27 + 4);
    ppppppuVar27[5] = (uint *****)(ppppppuVar27 + 4);
    *(undefined4 *)(ppppppuVar27 + 6) = 0;
    ppppppuVar27[3] = (uint *****)&UNK_0f02e910;
    ppppppuVar27[7] = (uint *****)&UNK_0f02e940;
    ppppppuVar27[9] = (uint *****)(ppppppuVar27 + 9);
    ppppppuVar27[10] = (uint *****)(ppppppuVar27 + 9);
    *(undefined4 *)(ppppppuVar27 + 0xb) = 0;
    ppppppuVar27[8] = (uint *****)&UNK_0ef513e0;
    ppppppuVar27[0xc] = (uint *****)&UNK_0ef51410;
    ppppppuVar27[0xe] = (uint *****)(ppppppuVar27 + 0xe);
    ppppppuVar27[0xf] = (uint *****)(ppppppuVar27 + 0xe);
    *(undefined4 *)(ppppppuVar27 + 0x10) = 0;
    ppppppuVar27[0xd] = (uint *****)&UNK_0f1cd180;
    ppppppuVar27[0x11] = (uint *****)&UNK_0f1cd1b0;
    ppppppuVar27[0x13] = (uint *****)(ppppppuVar27 + 0x13);
    ppppppuVar27[0x14] = (uint *****)(ppppppuVar27 + 0x13);
    *(undefined4 *)(ppppppuVar27 + 0x15) = 0;
    ppppppuVar27[0x12] = (uint *****)&UNK_0ef513e0;
    ppppppuVar27[0x16] = (uint *****)&UNK_0ef51410;
    ppppppuVar27[0x17] = (uint *****)0x0;
    ppppppuVar27[0x18] = (uint *****)0x0;
    ppppppuVar27[0x19] = (uint *****)0x0;
    ppppppuVar27[0x1a] = (uint *****)0x0;
    ppppppuVar27[0x1b] = (uint *****)0x0;
    ppppppuVar27[0x1c] = (uint *****)0x0;
    ppppppuVar27[0x1d] = (uint *****)0x0;
    ppppppuVar27[0x1e] = (uint *****)0x0;
    *(undefined8 *)((long)ppppppuVar27 + 0xf1) = 0;
    *(undefined8 *)((long)ppppppuVar27 + 0xf9) = 0;
    ppppppuVar4 = param_2[0x6a];
    param_2[0x6a] = ppppppuVar27;
    if (ppppppuVar4 == (uint ******)0x0) {
LAB_09f545b8:
      cVar14 = func_0x0412d4f0(0xf618588);
      if (cVar14 == '\0') {
LAB_09f545ed:
        auStack_12e8[0] = 0x88;
        auStack_12e8[1] = 0x85;
        uStack_12e6 = 0xf61;
        uStack_12e4 = 0;
        uStack_12e0 = CONCAT31(uStack_12e0._1_3_,1);
        func_0x0412d450(0xf618588);
        if (_DAT_0f618658 != 0) {
          ppppppuVar21 = (uint ******)0xf618618;
          pppppppuVar20 = (uint *******)auStack_12e8;
          uVar34 = _DAT_0f618658;
          do {
            LOCK();
            bVar50 = uVar34 == _DAT_0f618658;
            uVar41 = uVar34 | 0x8000000000000000;
            if (!bVar50) {
              uVar34 = _DAT_0f618658;
              uVar41 = _DAT_0f618658;
            }
            _DAT_0f618658 = uVar41;
            UNLOCK();
            if (bVar50) {
              func_0x0eee0430(0xf618618,pppppppuVar20);
              uVar34 = _DAT_0f618658;
            }
          } while (uVar34 != 0);
        }
      }
      else if (_DAT_0f618658 != 0) {
        func_0x0412d520(0xf618588);
        goto LAB_09f545ed;
      }
      pppppuVar22 = _DAT_0f618670;
      _DAT_0f618668 = (uint *****)0x0;
      _DAT_0f618670 = (uint *****)0x0;
      if (pppppuVar22 != (uint *****)0x0) {
        LOCK();
        pppppuVar23 = pppppuVar22 + 1;
        ppppuVar2 = *pppppuVar23;
        *pppppuVar23 = (uint ****)((long)*pppppuVar23 + -1);
        UNLOCK();
        if (ppppuVar2 == (uint ****)0x0) {
          (*(code *)(*pppppuVar22)[2])(pppppuVar22);
          func_0x0412c2d0(pppppuVar22);
        }
      }
      _DAT_0f618678 = (uint ******)0x0;
      _DAT_0f618668 = ppppppuVar27[1];
      pppppuVar22 = ppppppuVar27[2];
      if (pppppuVar22 != (uint *****)0x0) {
        LOCK();
        pppppuVar22[1] = (uint ****)((long)pppppuVar22[1] + 1);
        UNLOCK();
      }
      plVar28 = (long *)_DAT_0f618670;
      if (_DAT_0f618670 != (uint *****)0x0) {
        LOCK();
        plVar35 = (long *)(_DAT_0f618670 + 1);
        lVar26 = *plVar35;
        _DAT_0f618670 = pppppuVar22;
        *plVar35 = *plVar35 + -1;
        UNLOCK();
        pppppuVar22 = _DAT_0f618670;
        if (lVar26 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          func_0x0412c2d0(plVar28);
          pppppuVar22 = _DAT_0f618670;
        }
      }
      _DAT_0f618670 = pppppuVar22;
      if (((_DAT_0f618668 != (uint *****)0x0) &&
          (_DAT_0f618678 = ppppppuVar27, *(char *)_DAT_0f618668 == '\0')) &&
         (cVar14 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_013e765d),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      ppppppuVar27 = _DAT_0f618678;
      ppppppuStack_438 = _DAT_0f618678;
      func_0x0412d520(0xf618588);
      if (param_2[0x6b] != (uint ******)0x0) {
        func_0x09f8b910();
        param_2[0x6b] = (uint ******)0x0;
      }
      param_2[0x6b] = ppppppuVar27;
      ppppppuVar27 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3e0);
      if (ppppppuVar27 == (uint ******)0x0) {
        func_0x0eec74c0(0x3e0,0);
      }
      *ppppppuVar27 = (uint *****)&UNK_0f534768;
      pppppuVar22 = (uint *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pppppuVar22 == (uint *****)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      pppppuVar22[1] = (uint ****)0x0;
      pppppuVar22[2] = (uint ****)0x0;
      *pppppuVar22 = (uint ****)&UNK_0ef44a60;
      *(undefined1 *)(pppppuVar22 + 3) = 1;
      ppppppuVar27[1] = pppppuVar22 + 3;
      ppppppuVar27[2] = pppppuVar22;
      *ppppppuVar27 = (uint *****)&UNK_0f1f6308;
      ppppppuVar27[0x2e] = (uint *****)0x0;
      ppppppuVar27[0x2f] = (uint *****)0x0;
      memset(ppppppuVar27 + 3,0,0x150);
      ppppppuVar27[0x2d] = (uint *****)(ppppppuVar27 + 0x2e);
      ppppppuVar27[0x30] = (uint *****)0x0;
      ppppppuVar27[0x31] = (uint *****)0x0;
      ppppppuVar27[0x32] = (uint *****)0x0;
      ppppppuVar27[0x33] = (uint *****)0x0;
      ppppppuVar27[0x34] = (uint *****)0x0;
      ppppppuVar27[0x35] = (uint *****)0x0;
      *(undefined4 *)(ppppppuVar27 + 0x36) = 0;
      ppppppuVar27[0x37] = (uint *****)0x0;
      ppppppuVar27[0x38] = (uint *****)0x0;
      ppppppuVar27[0x39] = (uint *****)0x0;
      ppppppuVar27[0x3a] = (uint *****)0x0;
      ppppppuVar27[0x3b] = (uint *****)0x0;
      ppppppuVar27[0x3c] = (uint *****)0x0;
      ppppppuVar27[0x3d] = (uint *****)0x0;
      ppppppuVar27[0x3e] = (uint *****)0x0;
      ppppppuVar27[0x3f] = (uint *****)0x0;
      ppppppuVar27[0x40] = (uint *****)0x0;
      ppppppuVar27[0x41] = (uint *****)0x0;
      ppppppuVar27[0x42] = (uint *****)0x0;
      ppppppuVar27[0x43] = (uint *****)0x0;
      ppppppuVar27[0x44] = (uint *****)0x0;
      ppppppuVar27[0x45] = (uint *****)0x0;
      ppppppuVar27[0x46] = (uint *****)0x0;
      ppppppuVar27[0x47] = (uint *****)0x0;
      ppppppuVar27[0x48] = (uint *****)0x0;
      ppppppuVar27[0x49] = (uint *****)0x0;
      ppppppuVar27[0x4a] = (uint *****)0x0;
      ppppppuVar27[0x4b] = (uint *****)0x0;
      ppppppuVar27[0x4c] = (uint *****)0x0;
      *(undefined4 *)(ppppppuVar27 + 0x4d) = 0;
      ppppppuVar27[0x62] = (uint *****)0x0;
      ppppppuVar27[99] = (uint *****)0x0;
      ppppppuVar27[0x60] = (uint *****)0x0;
      ppppppuVar27[0x61] = (uint *****)0x0;
      ppppppuVar27[0x5e] = (uint *****)0x0;
      ppppppuVar27[0x5f] = (uint *****)0x0;
      ppppppuVar27[0x5c] = (uint *****)0x0;
      ppppppuVar27[0x5d] = (uint *****)0x0;
      ppppppuVar27[0x5a] = (uint *****)0x0;
      ppppppuVar27[0x5b] = (uint *****)0x0;
      ppppppuVar27[0x58] = (uint *****)0x0;
      ppppppuVar27[0x59] = (uint *****)0x0;
      ppppppuVar27[0x56] = (uint *****)0x0;
      ppppppuVar27[0x57] = (uint *****)0x0;
      ppppppuVar27[0x54] = (uint *****)0x0;
      ppppppuVar27[0x55] = (uint *****)0x0;
      ppppppuVar27[0x52] = (uint *****)0x0;
      ppppppuVar27[0x53] = (uint *****)0x0;
      ppppppuVar27[0x50] = (uint *****)0x0;
      ppppppuVar27[0x51] = (uint *****)0x0;
      ppppppuVar27[0x4e] = (uint *****)0x0;
      ppppppuVar27[0x4f] = (uint *****)0x0;
      *(undefined4 *)(ppppppuVar27 + 100) = 0;
      ppppppuVar27[0x79] = (uint *****)0x0;
      ppppppuVar27[0x7a] = (uint *****)0x0;
      ppppppuVar27[0x77] = (uint *****)0x0;
      ppppppuVar27[0x78] = (uint *****)0x0;
      ppppppuVar27[0x75] = (uint *****)0x0;
      ppppppuVar27[0x76] = (uint *****)0x0;
      ppppppuVar27[0x73] = (uint *****)0x0;
      ppppppuVar27[0x74] = (uint *****)0x0;
      ppppppuVar27[0x71] = (uint *****)0x0;
      ppppppuVar27[0x72] = (uint *****)0x0;
      ppppppuVar27[0x6f] = (uint *****)0x0;
      ppppppuVar27[0x70] = (uint *****)0x0;
      ppppppuVar27[0x6d] = (uint *****)0x0;
      ppppppuVar27[0x6e] = (uint *****)0x0;
      ppppppuVar27[0x6b] = (uint *****)0x0;
      ppppppuVar27[0x6c] = (uint *****)0x0;
      ppppppuVar27[0x69] = (uint *****)0x0;
      ppppppuVar27[0x6a] = (uint *****)0x0;
      ppppppuVar27[0x67] = (uint *****)0x0;
      ppppppuVar27[0x68] = (uint *****)0x0;
      ppppppuVar27[0x65] = (uint *****)0x0;
      ppppppuVar27[0x66] = (uint *****)0x0;
      ppppppuVar27[0x7b] = (uint *****)0x0;
      ppppppuVar4 = param_2[0x6c];
      param_2[0x6c] = ppppppuVar27;
      if (ppppppuVar4 != (uint ******)0x0) {
        (*(code *)(*ppppppuVar4)[1])();
        ppppppuVar27 = param_2[0x6c];
        if (ppppppuVar27 == (uint ******)0x0) goto LAB_09f59898;
      }
      cVar14 = func_0x0412d4f0(0xf5508c0);
      if (cVar14 == '\0') {
LAB_09f549a4:
        auStack_12e8[0] = 0xc0;
        auStack_12e8[1] = 8;
        uStack_12e6 = 0xf55;
        uStack_12e4 = 0;
        uStack_12e0 = CONCAT31(uStack_12e0._1_3_,1);
        func_0x0412d450(0xf5508c0);
        if (_DAT_0f550990 != 0) {
          ppppppuVar21 = (uint ******)0xf550950;
          pppppppuVar20 = (uint *******)auStack_12e8;
          uVar34 = _DAT_0f550990;
          do {
            LOCK();
            bVar50 = uVar34 == _DAT_0f550990;
            uVar41 = uVar34 | 0x8000000000000000;
            if (!bVar50) {
              uVar34 = _DAT_0f550990;
              uVar41 = _DAT_0f550990;
            }
            _DAT_0f550990 = uVar41;
            UNLOCK();
            if (bVar50) {
              func_0x0eee0430(0xf550950,pppppppuVar20);
              uVar34 = _DAT_0f550990;
            }
          } while (uVar34 != 0);
        }
      }
      else if (_DAT_0f550990 != 0) {
        func_0x0412d520(0xf5508c0);
        goto LAB_09f549a4;
      }
      pppppuVar22 = _DAT_0f5509a8;
      _DAT_0f5509a0 = (uint *****)0x0;
      _DAT_0f5509a8 = (uint *****)0x0;
      if (pppppuVar22 != (uint *****)0x0) {
        LOCK();
        pppppuVar23 = pppppuVar22 + 1;
        ppppuVar2 = *pppppuVar23;
        *pppppuVar23 = (uint ****)((long)*pppppuVar23 + -1);
        UNLOCK();
        if (ppppuVar2 == (uint ****)0x0) {
          (*(code *)(*pppppuVar22)[2])(pppppuVar22);
          func_0x0412c2d0(pppppuVar22);
        }
      }
      _DAT_0f5509b0 = (uint ******)0x0;
      _DAT_0f5509a0 = ppppppuVar27[1];
      pppppuVar22 = ppppppuVar27[2];
      if (pppppuVar22 != (uint *****)0x0) {
        LOCK();
        pppppuVar22[1] = (uint ****)((long)pppppuVar22[1] + 1);
        UNLOCK();
      }
      plVar28 = (long *)_DAT_0f5509a8;
      if (_DAT_0f5509a8 != (uint *****)0x0) {
        LOCK();
        plVar35 = (long *)(_DAT_0f5509a8 + 1);
        lVar26 = *plVar35;
        _DAT_0f5509a8 = pppppuVar22;
        *plVar35 = *plVar35 + -1;
        UNLOCK();
        pppppuVar22 = _DAT_0f5509a8;
        if (lVar26 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          func_0x0412c2d0(plVar28);
          pppppuVar22 = _DAT_0f5509a8;
        }
      }
      _DAT_0f5509a8 = pppppuVar22;
      if (((_DAT_0f5509a0 != (uint *****)0x0) &&
          (_DAT_0f5509b0 = ppppppuVar27, *(char *)_DAT_0f5509a0 == '\0')) &&
         (cVar14 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_01330b20),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      ppppppuVar27 = _DAT_0f5509b0;
      ppppppuStack_438 = _DAT_0f5509b0;
      func_0x0412d520(0xf5508c0);
      if (param_2[0x6d] != (uint ******)0x0) {
        func_0x09f8ba90();
        param_2[0x6d] = (uint ******)0x0;
      }
      param_2[0x6d] = ppppppuVar27;
      uVar39 = param_3[0xbc];
      uVar7 = param_3[0xbd];
      uVar8 = param_3[0xbe];
      uVar9 = param_3[0xbf];
      *(undefined8 *)(param_3 + 0xbc) = 0;
      *(undefined8 *)(param_3 + 0xbe) = 0;
      ppppppuVar27 = param_2[0x4b];
      *(undefined4 *)(param_2 + 0x4a) = uVar39;
      *(undefined4 *)((long)param_2 + 0x254) = uVar7;
      *(undefined4 *)(param_2 + 0x4b) = uVar8;
      *(undefined4 *)((long)param_2 + 0x25c) = uVar9;
      if (ppppppuVar27 != (uint ******)0x0) {
        LOCK();
        ppppppuVar4 = ppppppuVar27 + 1;
        pppppuVar22 = *ppppppuVar4;
        *ppppppuVar4 = (uint *****)((long)*ppppppuVar4 + -1);
        UNLOCK();
        if (pppppuVar22 == (uint *****)0x0) {
          (*(code *)(*ppppppuVar27)[2])(ppppppuVar27);
          func_0x0412c2d0(ppppppuVar27);
        }
      }
      (*(code *)(*param_2[0x4a])[0x18])(param_2[0x4a],1);
      uStack_1338 = *(uint *)(param_2 + 0x4a);
      uStack_1334 = *(undefined4 *)((long)param_2 + 0x254);
      uStack_1330 = *(undefined4 *)(param_2 + 0x4b);
      uStack_132c = *(undefined4 *)((long)param_2 + 0x25c);
      if (param_2[0x4b] != (uint ******)0x0) {
        LOCK();
        ppppppuVar27 = param_2[0x4b] + 1;
        *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + 1);
        UNLOCK();
      }
      func_0x0ee51d80(param_2 + 8,&uStack_1338);
      pppppppuVar25 = (uint *******)CONCAT44(uStack_132c,uStack_1330);
      if (pppppppuVar25 != (uint *******)0x0) {
        LOCK();
        pppppppuVar19 = pppppppuVar25 + 1;
        ppppppuVar27 = *pppppppuVar19;
        *pppppppuVar19 = (uint ******)((long)*pppppppuVar19 + -1);
        UNLOCK();
        if (ppppppuVar27 == (uint ******)0x0) {
          (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
          func_0x0412c2d0(pppppppuVar25);
        }
      }
      plVar28 = *(long **)(param_3 + 0x90);
      if (plVar28 == (long *)0x0) {
        func_0x04891200();
LAB_09f59b2b:
        pppppppuVar19 = pppppppuVar25;
        func_0x0eee02f0(0xf5522b8);
LAB_09f59b37:
        func_0x04890760();
        break;
      }
      (**(code **)(*plVar28 + 0x30))(&pppppppuStack_1618,plVar28,param_2[0x18]);
      if (pppppppuStack_1610 == (uint *******)0x0) {
        puVar40 = &UNK_01a46310;
      }
      else {
        (*(code *)(*pppppppuStack_1610)[0x16])(auStack_12e8);
        iVar18 = CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]));
        if ((uStack_12e0 & 1) != 0) {
          func_0x0412a280(uStack_12d0,CONCAT44(uStack_12dc,uStack_12e0) & 0xfffffffffffffffe);
        }
        if (iVar18 == 0) {
          FUN_0412d550(0xf5522b8);
          LOCK();
          _DAT_0f552388 = _DAT_0f552388 + 1;
          UNLOCK();
          func_0x0412d610(0xf5522b8);
          pppppppuVar19 = _DAT_0f5523a0;
          pbVar1 = _DAT_0f552398;
          pppppppuVar25 = (uint *******)0x0;
          if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_09f59b2b;
          if (_DAT_0f5523a0 == (uint *******)0x0) {
            pbStack_1460 = _DAT_0f552398;
            pppppppuStack_1458 = (uint *******)0x0;
            pppppppuStack_1450 = _DAT_0f5523a8;
          }
          else {
            LOCK();
            _DAT_0f5523a0[1] = (uint ******)((long)_DAT_0f5523a0[1] + 1);
            pppppppuStack_1450 = _DAT_0f5523a8;
            UNLOCK();
            LOCK();
            pppppppuVar19[1] = (uint ******)((long)pppppppuVar19[1] + 1);
            UNLOCK();
            pbStack_1460 = pbVar1;
            pppppppuStack_1458 = pppppppuVar19;
            if (*pbVar1 == 0) goto LAB_09f59b37;
            LOCK();
            pppppppuVar20 = pppppppuVar19 + 1;
            ppppppuVar21 = *pppppppuVar20;
            *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
            UNLOCK();
            if (ppppppuVar21 == (uint ******)0x0) {
              (*(code *)(*pppppppuVar19)[2])(pppppppuVar19);
              func_0x0412c2d0(pppppppuVar19);
            }
          }
          func_0x0eee02f0(0xf5522b8);
          ppppppuStack_438 = param_2[0x18];
          (**(code **)(param_3 + 0x12e))
                    (auStack_12e8,*(undefined8 *)(param_3 + 0x130),&ppppppuStack_438);
          ppppppuVar21 = (uint ******)
                         CONCAT44(uStack_12e4,
                                  CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0])));
          if (ppppppuVar21 == (uint ******)0x0) {
            ppppppuVar27 = (uint ******)0x0;
          }
          else {
            ppppppuVar27 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (ppppppuVar27 == (uint ******)0x0) {
              func_0x0eec74c0(0x20,0);
            }
            ppppppuVar27[1] = (uint *****)0x0;
            ppppppuVar27[2] = (uint *****)0x0;
            *ppppppuVar27 = (uint *****)&UNK_0f1f81c8;
            ppppppuVar27[3] = (uint *****)ppppppuVar21;
          }
          auStack_12e8[0] = 0;
          auStack_12e8[1] = 0;
          uStack_12e6 = 0;
          uStack_12e4 = 0;
          param_2[0x13] = ppppppuVar21;
          ppppppuVar21 = param_2[0x14];
          param_2[0x14] = ppppppuVar27;
          if (ppppppuVar21 != (uint ******)0x0) {
            LOCK();
            ppppppuVar27 = ppppppuVar21 + 1;
            pppppuVar22 = *ppppppuVar27;
            *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
            UNLOCK();
            if (pppppuVar22 == (uint *****)0x0) {
              (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
              func_0x0412c2d0(ppppppuVar21);
            }
          }
          plVar38 = (long *)CONCAT44(uStack_12e4,
                                     CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))
                                    );
          auStack_12e8[0] = 0;
          auStack_12e8[1] = 0;
          uStack_12e6 = 0;
          uStack_12e4 = 0;
          if (plVar38 != (long *)0x0) {
            (**(code **)(*plVar38 + 8))();
          }
          plVar38 = *(long **)(param_3 + 0x80);
          func_0x08a2d7f0(auStack_12e8,param_2[0x13]);
          lVar26 = *(long *)(param_3 + 0x12);
          if ((*(char *)(lVar26 + 0x200) == '\0') && ((*(byte *)(lVar26 + 0x1ee) & 1) != 0)) {
            func_0x0ee34300(&ppppppuStack_438,lVar26 + 0x1e8);
          }
          else {
            ppppppuStack_438 = (uint ******)0x0;
            lStack_430 = 0;
            uStack_428 = 0;
          }
          pppppppuVar19 = (uint *******)auStack_12e8;
          (**(code **)(*plVar38 + 0x400))(plVar38,pppppppuVar19,&ppppppuStack_438,param_3 + 0x62);
          if (((ulong)ppppppuStack_438 & 1) != 0) {
            func_0x0412a280(uStack_428,(ulong)ppppppuStack_438 & 0xfffffffffffffffe);
          }
          if ((auStack_12e8[0] & 1) != 0) {
            func_0x0412a280(uStack_12d8,
                            CONCAT44(uStack_12e4,
                                     CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))
                                    ) & 0xfffffffffffffffe);
          }
          ppppppuVar21 = param_2[0x13];
          ppppppuVar27 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
          if (ppppppuVar27 == (uint ******)0x0) {
            func_0x0eec74c0(0x68,0);
          }
          *ppppppuVar27 = (uint *****)&UNK_0f534768;
          pppppuVar22 = (uint *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (pppppuVar22 == (uint *****)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          pppppuVar22[1] = (uint ****)0x0;
          pppppuVar22[2] = (uint ****)0x0;
          *pppppuVar22 = (uint ****)&UNK_0ef44a60;
          *(undefined1 *)(pppppuVar22 + 3) = 1;
          ppppppuVar27[1] = pppppuVar22 + 3;
          ppppppuVar27[2] = pppppuVar22;
          *(undefined1 *)(ppppppuVar27 + 3) = 0;
          *ppppppuVar27 = (uint *****)&UNK_0f146d58;
          ppppppuVar27[4] = (uint *****)ppppppuVar21;
          *(undefined4 *)(ppppppuVar27 + 5) = 1;
          ppppppuVar27[6] = (uint *****)0x0;
          ppppppuVar27[7] = (uint *****)0x0;
          ppppppuVar27[8] = (uint *****)0x0;
          ppppppuVar27[9] = (uint *****)0x0;
          ppppppuVar27[10] = (uint *****)0x0;
          ppppppuVar27[0xb] = (uint *****)0x0;
          ppppppuVar27[0xc] = (uint *****)0x0;
          ppppppuVar21 = param_2[0x15];
          param_2[0x15] = ppppppuVar27;
          if (ppppppuVar21 != (uint ******)0x0) {
            (*(code *)(*ppppppuVar21)[1])();
          }
          ppppppuVar21 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
          if (ppppppuVar21 == (uint ******)0x0) {
            func_0x0eec74c0(0x70,0);
          }
          auStack_12e8[0] = 0x20;
          auStack_12e8[1] = 0x97;
          uStack_12e6 = 0xf1f;
          uStack_12e4 = 0;
          plVar38 = (long *)&UNK_0b5cf200;
          uStack_12e0 = 0xb5cf200;
          uStack_12dc = 0;
          *ppppppuVar21 = (uint *****)0x41a00000;
          ppppppuVar21[1] = _DAT_014e9660;
          ppppppuVar21[2] = (uint *****)0x0;
          ppppppuVar21[3] = (uint *****)0x0;
          ppppppuVar21[7] = _DAT_014e8e60;
          pppppppuVar20 = (uint *******)(ppppppuVar21 + 8);
          uStack_12c8 = pppppppuVar19;
          if (pppppppuVar19 == (uint *******)0x0) goto LAB_09f59b41;
          ppppppuVar21[0xc] = (uint *****)pppppppuVar20;
          (*_UNK_0f1f9738)(pppppppuVar19,pppppppuVar20);
          if (ppppppuVar21[0xc] == (uint *****)0x0) goto LAB_09f59b51;
          pppppuVar22 = (uint *****)(*(code *)(*ppppppuVar21[0xc])[6])();
          ppppppuVar21[4] = pppppuVar22;
          ppppppuVar21[5] = pppppuVar22;
          ppppppuVar21[6] = pppppuVar22;
          if (uStack_12c8 == pppppppuVar19) {
            lVar26 = 0x20;
LAB_09f552f5:
            (**(code **)((long)*uStack_12c8 + lVar26))();
          }
          else {
            lVar26 = 0x28;
            if (uStack_12c8 != (uint *******)0x0) goto LAB_09f552f5;
          }
          ppppppuVar27 = param_2[0x16];
          param_2[0x16] = ppppppuVar21;
          if (ppppppuVar27 != (uint ******)0x0) {
            ppppppuVar21 = (uint ******)ppppppuVar27[0xc];
            if (ppppppuVar21 == ppppppuVar27 + 8) {
              lVar26 = 0x20;
LAB_09f55642:
              (**(code **)((long)*ppppppuVar21 + lVar26))();
            }
            else {
              lVar26 = 0x28;
              if (ppppppuVar21 != (uint ******)0x0) goto LAB_09f55642;
            }
            func_0x0412a280(ppppppuVar27,0x70);
          }
          ppppppuVar21 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
          if (ppppppuVar21 == (uint ******)0x0) {
            func_0x0eec74c0(0x70,0);
          }
          auStack_12e8[0] = 0x20;
          auStack_12e8[1] = 0x97;
          uStack_12e6 = 0xf1f;
          uStack_12e4 = 0;
          uStack_12e0 = 0xb5cf200;
          uStack_12dc = 0;
          *ppppppuVar21 = (uint *****)0x41a00000;
          ppppppuVar21[1] = _DAT_014e9660;
          ppppppuVar21[2] = (uint *****)0x0;
          ppppppuVar21[3] = (uint *****)0x0;
          ppppppuVar21[7] = _DAT_014e8e60;
          pppppppuVar20 = (uint *******)(ppppppuVar21 + 8);
          uStack_12c8 = pppppppuVar19;
          if (pppppppuVar19 == (uint *******)0x0) goto LAB_09f59b56;
          ppppppuVar21[0xc] = (uint *****)pppppppuVar20;
          (*_UNK_0f1f9738)(pppppppuVar19,pppppppuVar20);
          if (ppppppuVar21[0xc] == (uint *****)0x0) goto LAB_09f59b66;
          pppppppuVar25 = (uint *******)(ppppppuVar21 + 0xc);
          pppppuVar22 = (uint *****)(*(code *)(*ppppppuVar21[0xc])[6])();
          ppppppuVar21[4] = pppppuVar22;
          ppppppuVar21[5] = pppppuVar22;
          ppppppuVar21[6] = pppppuVar22;
          if (uStack_12c8 == pppppppuVar19) {
            lVar26 = 0x20;
LAB_09f5574e:
            (**(code **)((long)*uStack_12c8 + lVar26))();
          }
          else {
            lVar26 = 0x28;
            if (uStack_12c8 != (uint *******)0x0) goto LAB_09f5574e;
          }
          ppppppuVar27 = param_2[0x17];
          param_2[0x17] = ppppppuVar21;
          if (ppppppuVar27 != (uint ******)0x0) {
            ppppppuVar21 = (uint ******)ppppppuVar27[0xc];
            if (ppppppuVar21 == ppppppuVar27 + 8) {
              lVar26 = 0x20;
LAB_09f5578a:
              (**(code **)((long)*ppppppuVar21 + lVar26))();
            }
            else {
              lVar26 = 0x28;
              if (ppppppuVar21 != (uint ******)0x0) goto LAB_09f5578a;
            }
            func_0x0412a280(ppppppuVar27,0x70);
          }
          (**(code **)(param_3 + 0x136))(*(undefined8 *)(param_3 + 0x138));
          uVar39 = *(undefined4 *)(param_2 + 0x16);
          uStack_12e4 = *(uint *)((long)param_2 + 0xb4);
          uStack_12e0 = *(uint *)(param_2 + 0x17);
          uStack_12dc = *(uint *)((long)param_2 + 0xbc);
          auStack_12e8[0] = (byte)uVar39;
          auStack_12e8[1] = (undefined1)((uint)uVar39 >> 8);
          uStack_12e6 = (undefined2)((uint)uVar39 >> 0x10);
          (**(code **)(param_3 + 0x126))
                    (&ppppppuStack_438,*(undefined8 *)(param_3 + 0x128),auStack_12e8);
          ppppppuVar27 = ppppppuStack_438;
          ppppppuStack_438 = (uint ******)0x0;
          ppppppuVar21 = param_2[0x12];
          param_2[0x12] = ppppppuVar27;
          if (ppppppuVar21 != (uint ******)0x0) {
            (*(code *)(*ppppppuVar21)[1])();
            ppppppuVar21 = ppppppuStack_438;
            ppppppuStack_438 = (uint ******)0x0;
            if (ppppppuVar21 != (uint ******)0x0) {
              (*(code *)(*ppppppuVar21)[1])();
            }
          }
          pppppppuVar19 = (uint *******)param_2[0x12][5];
          plVar28 = *(long **)(param_3 + 0x82);
          if ((*plVar28 == 0) &&
             (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014adc19),
             cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)*plVar28 == '\0') &&
             (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014adc19
                                      ), cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar28 = (long *)(**(code **)(*(long *)plVar28[2] + 0x60))();
          if (plVar28 != (long *)0x0) {
            lVar26 = *plVar28;
            pppppppuStack_1580 = pppppppuVar19;
            lVar32 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
            if (lVar32 == 0) {
              func_0x0eec74c0(0x40,0);
            }
            func_0x0d67d820(lVar32,lVar26);
            *(undefined8 *)(lVar32 + 0x28) = 0;
            *(undefined8 *)(lVar32 + 0x30) = 0;
            *(undefined8 *)(lVar32 + 0x38) = 0;
            func_0x0d67e550(lVar32 + 0x28,*(long *)(lVar26 + 0x28),*(long *)(lVar26 + 0x30),
                            (*(long *)(lVar26 + 0x30) - *(long *)(lVar26 + 0x28) >> 5) *
                            0x6db6db6db6db6db7);
            pppppppuVar31 = pppppppuStack_1580;
            auStack_12e8[0] = (byte)lVar32;
            auStack_12e8[1] = (undefined1)((ulong)lVar32 >> 8);
            uStack_12e6 = (undefined2)((ulong)lVar32 >> 0x10);
            uStack_12e4 = (uint)((ulong)lVar32 >> 0x20);
            func_0x09ae14c0(pppppppuStack_1580,auStack_12e8);
            lVar26 = CONCAT44(uStack_12e4,
                              CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0])));
            auStack_12e8[0] = 0;
            auStack_12e8[1] = 0;
            uStack_12e6 = 0;
            uStack_12e4 = 0;
            if (lVar26 != 0) {
              func_0x0d67d500(lVar26);
              func_0x0412a280(lVar26,0x40);
            }
            pppppppuVar20 = (uint *******)0xf0f0f0f0f0f0f0f1;
            if (*(long *)(param_3 + 0x9e) == 0) goto LAB_09f55c12;
            pppppppuVar25 = *(uint ********)(*(long *)(param_3 + 0x9e) + 0x78);
            pppppppuVar19 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (pppppppuVar19 == (uint *******)0x0) goto LAB_09f599f2;
            do {
              *pppppppuVar19 = (uint ******)&UNK_0f47b808;
              pppppppuVar19[1] = (uint ******)0x0;
              pppppppuVar19[2] = (uint ******)0x0;
              pppppppuVar19[3] = (uint ******)0x0;
              pppppppuVar19[4] = (uint ******)0x0;
              if (pppppppuVar19 != pppppppuVar25) {
                func_0x09f850a0(pppppppuVar19 + 1,pppppppuVar25[1],pppppppuVar25[2],
                                ((long)pppppppuVar25[2] - (long)pppppppuVar25[1] >> 4) *
                                (long)pppppppuVar20);
              }
              pppppppuStack_1608 = pppppppuVar19;
              func_0x09adf7e0(pppppppuVar31,&pppppppuStack_1608,0);
              pppppppuVar19 = pppppppuStack_1608;
              pppppppuStack_1608 = (uint *******)0x0;
              if (pppppppuVar19 != (uint *******)0x0) {
                (*(code *)(*pppppppuVar19)[1])();
              }
              ppppppuVar21 = *(uint *******)(*(long *)(param_3 + 0x9e) + 0x80);
              ppppppuVar27 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
              if (ppppppuVar27 == (uint ******)0x0) {
                func_0x0eec74c0(0x28,0);
              }
              *ppppppuVar27 = (uint *****)&UNK_0f47b808;
              ppppppuVar27[1] = (uint *****)0x0;
              ppppppuVar27[2] = (uint *****)0x0;
              ppppppuVar27[3] = (uint *****)0x0;
              ppppppuVar27[4] = (uint *****)0x0;
              if (ppppppuVar27 != ppppppuVar21) {
                func_0x09f850a0(ppppppuVar27 + 1,ppppppuVar21[1],ppppppuVar21[2],
                                ((long)ppppppuVar21[2] - (long)ppppppuVar21[1] >> 4) *
                                (long)pppppppuVar20);
              }
              pppppppuStack_1608 = (uint *******)ppppppuVar27;
              func_0x09adf7e0(pppppppuVar31,&pppppppuStack_1608,1);
              pppppppuVar19 = pppppppuStack_1608;
              pppppppuStack_1608 = (uint *******)0x0;
              if (pppppppuVar19 != (uint *******)0x0) {
                (*(code *)(*pppppppuVar19)[1])();
              }
              ppppppuVar21 = *(uint *******)(*(long *)(param_3 + 0x9e) + 0x88);
              ppppppuVar27 = (uint ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
              if (ppppppuVar27 == (uint ******)0x0) {
                func_0x0eec74c0(0x28,0);
              }
              *ppppppuVar27 = (uint *****)&UNK_0f47b808;
              ppppppuVar27[1] = (uint *****)0x0;
              ppppppuVar27[2] = (uint *****)0x0;
              ppppppuVar27[3] = (uint *****)0x0;
              ppppppuVar27[4] = (uint *****)0x0;
              if (ppppppuVar27 != ppppppuVar21) {
                func_0x09f850a0(ppppppuVar27 + 1,ppppppuVar21[1],ppppppuVar21[2],
                                ((long)ppppppuVar21[2] - (long)ppppppuVar21[1] >> 4) *
                                (long)pppppppuVar20);
              }
              pppppppuStack_1608 = (uint *******)ppppppuVar27;
              func_0x09adf7e0(pppppppuVar31,&pppppppuStack_1608,2);
              pppppppuVar19 = pppppppuStack_1608;
              pppppppuStack_1608 = (uint *******)0x0;
              if (pppppppuVar19 != (uint *******)0x0) {
                (*(code *)(*pppppppuVar19)[1])();
              }
              pppppppuVar25 = *(uint ********)(*(long *)(param_3 + 0x9e) + 0x90);
              pppppppuVar19 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
              if (pppppppuVar19 == (uint *******)0x0) {
                func_0x0eec74c0(0x28,0);
              }
              *pppppppuVar19 = (uint ******)&UNK_0f47b808;
              pppppppuVar19[1] = (uint ******)0x0;
              pppppppuVar19[2] = (uint ******)0x0;
              pppppppuVar19[3] = (uint ******)0x0;
              pppppppuVar19[4] = (uint ******)0x0;
              if (pppppppuVar19 != pppppppuVar25) {
                func_0x09f850a0(pppppppuVar19 + 1,pppppppuVar25[1],pppppppuVar25[2],
                                ((long)pppppppuVar25[2] - (long)pppppppuVar25[1] >> 4) *
                                (long)pppppppuVar20);
              }
              pppppppuStack_1608 = pppppppuVar19;
              func_0x09adf7e0(pppppppuVar31,&pppppppuStack_1608,3);
              pppppppuVar19 = pppppppuStack_1608;
              pppppppuStack_1608 = (uint *******)0x0;
              if (pppppppuVar19 != (uint *******)0x0) {
                (*(code *)(*pppppppuVar19)[1])();
              }
LAB_09f55c12:
              pbVar1 = *(byte **)(param_3 + 0x94);
              bVar50 = (*pbVar1 & 1) != 0;
              pbVar36 = pbVar1 + 1;
              if (bVar50) {
                pbVar36 = *(byte **)(pbVar1 + 0x10);
              }
              uVar34 = (ulong)(*pbVar1 >> 1);
              if (bVar50) {
                uVar34 = *(ulong *)(pbVar1 + 8);
              }
              auStack_12e8[0] = (byte)pbVar36;
              auStack_12e8[1] = (undefined1)((ulong)pbVar36 >> 8);
              uStack_12e6 = (undefined2)((ulong)pbVar36 >> 0x10);
              uStack_12e4 = (uint)((ulong)pbVar36 >> 0x20);
              uStack_12e0 = (uint)uVar34;
              uStack_12dc = (uint)(uVar34 >> 0x20);
              bVar50 = (*(byte *)(param_2 + 0x43) & 1) != 0;
              uStack_12d8 = (uint *******)((long)param_2 + 0x219);
              if (bVar50) {
                uStack_12d8 = (uint *******)param_2[0x45];
              }
              uStack_12d0 = (undefined1  [8])(ulong)(*(byte *)(param_2 + 0x43) >> 1);
              if (bVar50) {
                uStack_12d0 = (undefined1  [8])param_2[0x44];
              }
              func_0x049151c0(&ppppppuStack_438,auStack_12e8,2,0x2f);
              pppppppuVar19 = *(uint ********)(param_3 + 0x82);
              if ((*pppppppuVar19 == (uint ******)0x0) &&
                 (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                           &UNK_014adc19), cVar14 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              if ((*(char *)*pppppppuVar19 == '\0') &&
                 (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                           &UNK_014adc19), cVar14 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              uVar29 = (*(code *)(*pppppppuVar19[2])[0x29])();
              pppppppuVar31 = pppppppuStack_38;
              if ((uint *******)0xfffffffffffffff7 < pppppppuStack_38) goto LAB_09f59b70;
              if (pppppppuStack_38 < (uint *******)0x17) {
                auStack_12e8[0] = (char)pppppppuStack_38 * '\x02';
                pppppppuVar19 = (uint *******)(auStack_12e8 + 1);
                if (pppppppuStack_38 != (uint *******)0x0) goto LAB_09f55dff;
              }
              else {
                lVar26 = 0x1a;
                if (((ulong)pppppppuStack_38 | 7) != 0x17) {
                  lVar26 = ((ulong)pppppppuStack_38 | 7) + 1;
                }
                pppppppuVar19 =
                     (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
                if (pppppppuVar19 == (uint *******)0x0) {
                  func_0x0eec74c0(lVar26,0);
                }
                auStack_12e8[0] = (byte)lVar26 | 1;
                auStack_12e8[1] = (undefined1)((ulong)lVar26 >> 8);
                uStack_12e6 = (undefined2)((ulong)lVar26 >> 0x10);
                uStack_12e4 = (uint)((ulong)lVar26 >> 0x20);
                uStack_12e0 = (uint)pppppppuVar31;
                uStack_12dc = (uint)((ulong)pppppppuVar31 >> 0x20);
                uStack_12d8 = pppppppuVar19;
LAB_09f55dff:
                func_0x0eee2f00(pppppppuVar19,&ppppppuStack_438,pppppppuVar31);
              }
              *(byte *)((long)pppppppuVar19 + (long)pppppppuVar31) = 0;
              func_0x0d623630(uVar29,pppppppuStack_1600,auStack_12e8);
              if ((auStack_12e8[0] & 1) != 0) {
                func_0x0412a280(uStack_12d8,
                                CONCAT44(uStack_12e4,
                                         CONCAT22(uStack_12e6,
                                                  CONCAT11(auStack_12e8[1],auStack_12e8[0]))) &
                                0xfffffffffffffffe);
              }
              plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
              if (plVar28 == (long *)0x0) {
                func_0x0eec74c0(0x28,0);
              }
              *plVar28 = (long)&UNK_0f47b808;
              plVar28[1] = 0;
              plVar28[2] = 0;
              plVar28[3] = 0;
              plVar28[4] = 0;
              pppppppuVar20 = (uint *******)param_2[0x12][7];
              pppppppuVar25 = *(uint ********)(param_3 + 0xc6);
              lVar26 = *(long *)(param_3 + 0x12);
              plVar38 = *(long **)(param_3 + 0x82);
              iVar18 = *(int *)(lVar26 + 100);
              if (((ulong)param_2[0x43] & 1) == 0) {
                ppppppuStack_13a8 = pppppppuStack_1600[2];
                uStack_13b8 = *(uint *)pppppppuStack_1600;
                uStack_13b4 = *(undefined4 *)((long)pppppppuStack_1600 + 4);
                uStack_13b0 = *(undefined4 *)(pppppppuStack_1600 + 1);
                uStack_13ac = *(undefined4 *)((long)pppppppuStack_1600 + 0xc);
              }
              else {
                func_0x0412e5e0(&uStack_13b8,param_2[0x45],param_2[0x44]);
              }
              cStack_13a0 = '\x01';
              (*(code *)(*pppppppuVar20)[4])
                        (pppppppuVar20,pppppppuVar25,plVar38,plVar28,lVar26 + 0x1e8,iVar18 == 1,
                         &uStack_13b8);
              pppppppuVar19 = pppppppuStack_1580;
              if ((cStack_13a0 == '\x01') && ((uStack_13b8 & 1) != 0)) {
                func_0x0412a280(ppppppuStack_13a8,
                                CONCAT44(uStack_13b4,uStack_13b8) & 0xfffffffffffffffe);
              }
              plStack_14c8 = plVar28;
              func_0x09adf7e0(pppppppuVar19,&plStack_14c8,3);
              plVar28 = plStack_14c8;
              plStack_14c8 = (long *)0x0;
              if (plVar28 != (long *)0x0) {
                (**(code **)(*plVar28 + 8))();
              }
              if (*(byte *)(param_2 + 0x11) != 1) {
                if (*(byte *)((long)pppppppuVar19 + 0xc1) == 1) {
                  func_0x09ae0170(pppppppuVar19);
                }
                func_0x0b3b4df0(param_2[0x12]);
                goto LAB_09f57706;
              }
              _auStack_b28 = &ppppppuStack_438;
              uStack_b20 = pppppppuStack_38;
              uStack_b18 = (uint *******)&UNK_014af2c8;
              uStack_b10 = 0x19;
              pppppppuVar19 = (uint *******)auStack_12e8;
              func_0x049151c0(pppppppuVar19,auStack_b28,2,0x2f);
              if (DAT_0f7b8fb8 != '\0') goto LAB_09f56028;
LAB_09f59b75:
              iVar18 = FUN_04108328(&DAT_0f7b8fb8);
              if (iVar18 != 0) {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
              }
LAB_09f56028:
              uStack_d08 = uStack_ee8;
              pppppppuStack_d10 = pppppppuVar19;
              (**(code **)(_DAT_0f7b8f98 + 0x60))(auStack_b28,&DAT_0f7b8f98,&pppppppuStack_d10);
              auStack_1548 = (undefined1  [8])0x817ff4e88cc42e7;
              pppppppuStack_1540 = (uint *******)&UNK_0140f690;
              pppppppuStack_1538 = (uint *******)0x1;
              uStack_1530 = CONCAT44(uStack_1530._4_4_,0x20c);
              if (bStack_ae8 == 0) {
                func_0x0eedea30(auStack_15f8);
                func_0x0eedeb80(2,0x2d,auStack_b28,auStack_15f8,auStack_1548);
                if (((ulong)auStack_15f8 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_15e8,(ulong)auStack_15f8 & 0xfffffffffffffffe);
                }
              }
              pppppppuVar19 = _auStack_b28;
              if ((bStack_ae8 & 1) == 0) {
                auStack_15c8 = (undefined1  [8])((ulong)auStack_15c8 & 0xffffffffffff0000);
                bVar15 = 0;
              }
              else {
                auStack_15c8 = (undefined1  [8])_auStack_b28;
                auVar42 = auStack_15c8;
                pppppppuStack_15c0 = uStack_b20;
                pppppppuStack_15b8 = uStack_b18;
                _auStack_b28 = (uint *******)0x0;
                uStack_b20 = (uint *******)0x0;
                uStack_b18 = (uint *******)0x0;
                auStack_15c8[0] = (byte)pppppppuVar19;
                bVar15 = auStack_15c8[0];
                auStack_15c8 = auVar42;
              }
              bVar50 = (bVar15 & 1) != 0;
              pppppppuVar19 = (uint *******)(auStack_15c8 + 1);
              if (bVar50) {
                pppppppuVar19 = pppppppuStack_15b8;
              }
              pppppppuVar31 = (uint *******)(ulong)(bVar15 >> 1);
              if (bVar50) {
                pppppppuVar31 = pppppppuStack_15c0;
              }
              puVar24 = *(undefined8 **)(param_3 + 0x82);
              auStack_1548 = (undefined1  [8])*puVar24;
              pppppppuStack_1540 = (uint *******)puVar24[1];
              if (pppppppuStack_1540 != (uint *******)0x0) {
                LOCK();
                pppppppuStack_1540[1] = (uint ******)((long)pppppppuStack_1540[1] + 1);
                UNLOCK();
              }
              pppppppuStack_1538 = (uint *******)puVar24[2];
              if ((auStack_1548 == (undefined1  [8])0x0) || (*(byte *)auStack_1548 == 0)) {
                func_0x04890760();
                goto LAB_09f599d7;
              }
              if (((ulong)*pppppppuStack_1600 & 1) == 0) {
                ppppppuStack_13c8 = pppppppuStack_1600[2];
                uStack_13d8 = *(uint *)pppppppuStack_1600;
                uStack_13d4 = *(undefined4 *)((long)pppppppuStack_1600 + 4);
                uStack_13d0 = *(undefined4 *)(pppppppuStack_1600 + 1);
                uStack_13cc = *(undefined4 *)((long)pppppppuStack_1600 + 0xc);
              }
              else {
                func_0x0412e5e0(&uStack_13d8,param_2[0x45],param_2[0x44]);
              }
              cStack_13c0 = '\x01';
              func_0x0d62d820(&pppppppuStack_14c0,pppppppuVar19,pppppppuVar31,auStack_1548,
                              &uStack_13d8);
              if ((cStack_13c0 == '\x01') && ((uStack_13d8 & 1) != 0)) {
                func_0x0412a280(ppppppuStack_13c8,
                                CONCAT44(uStack_13d4,uStack_13d8) & 0xfffffffffffffffe);
              }
              pppppppuVar19 = pppppppuStack_1540;
              auStack_1548 = (undefined1  [8])0x0;
              pppppppuStack_1540 = (uint *******)0x0;
              if (pppppppuVar19 != (uint *******)0x0) {
                LOCK();
                pppppppuVar20 = pppppppuVar19 + 1;
                ppppppuVar21 = *pppppppuVar20;
                *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                UNLOCK();
                if (ppppppuVar21 == (uint ******)0x0) {
                  (*(code *)(*pppppppuVar19)[2])(pppppppuVar19);
                  func_0x0412c2d0(pppppppuVar19);
                }
                pppppppuVar19 = pppppppuStack_1540;
                pppppppuStack_1538 = (uint *******)0x0;
                if (pppppppuStack_1540 != (uint *******)0x0) {
                  LOCK();
                  pppppppuVar20 = pppppppuStack_1540 + 1;
                  ppppppuVar21 = *pppppppuVar20;
                  *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                  UNLOCK();
                  if (ppppppuVar21 == (uint ******)0x0) {
                    (*(code *)(*pppppppuStack_1540)[2])(pppppppuStack_1540);
                    func_0x0412c2d0(pppppppuVar19);
                  }
                }
              }
              if (((ulong)auStack_15c8 & 1) != 0) {
                func_0x0412a280(pppppppuStack_15b8,(ulong)auStack_15c8 & 0xfffffffffffffffe);
              }
              if (bStack_ae8 == 1) {
                if (((ulong)_auStack_b28 & 1) != 0) {
                  func_0x0412a280(uStack_b18,(ulong)_auStack_b28 & 0xfffffffffffffffe);
                }
              }
              else {
                func_0x048e6d60(auStack_b28);
              }
              lVar26 = *(long *)(param_3 + 0x12);
              if (*(char *)(lVar26 + 0x7c) == '\x01') {
                pppppppuStack_1590 = (uint *******)CONCAT71(pppppppuStack_1590._1_7_,1);
                if (*(char *)(lVar26 + 0x1ef) == '\0') {
                  pppppppuStack_1590 =
                       (uint *******)
                       (CONCAT71(pppppppuStack_1590._1_7_,
                                 *(byte *)(lVar26 + 0x1ee) | *(byte *)(lVar26 + 0x200)) ^ 1);
                }
                plVar38 = *(long **)(param_3 + 0x82);
                if ((*plVar38 == 0) &&
                   (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                             &UNK_014adc19), cVar14 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(char *)*plVar38 == '\0') &&
                   (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                             &UNK_014adc19), cVar14 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                (**(code **)(*(long *)plVar38[2] + 0x168))(auStack_1548,(long *)plVar38[2],6);
                if ((undefined1  [8])pppppppuStack_1540 != auStack_1548) {
                  lVar26 = lVar26 + 0x1e8;
                  pppppppuStack_14e8 = (uint *******)&UNK_01254d89;
                  pppppppuVar19 = pppppppuStack_1540;
                  lStack_1320 = lVar26;
                  do {
                    pppppppuVar31 = (uint *******)pppppppuVar19[-2];
                    pppppppuVar25 = (uint *******)pppppppuVar19[-1];
                    if (pppppppuVar25 != (uint *******)0x0) {
                      LOCK();
                      pppppppuVar25[1] = (uint ******)((long)pppppppuVar25[1] + 1);
                      UNLOCK();
                    }
                    auStack_15c8 = (undefined1  [8])pppppppuVar31;
                    pppppppuStack_15c0 = pppppppuVar25;
                    if (pppppppuVar31 == (uint *******)0x0) goto LAB_09f5989d;
                    if (((ulong)pppppppuStack_1590 & 1) == 0) {
                      _auStack_b28 = (uint *******)
                                     CONCAT26(1,*(undefined6 *)(*(*pppppppuVar31)[1] + 0x27));
                      uStack_b20 = pppppppuStack_14e8;
                      uStack_b18 = pppppppuStack_14e8;
                      uStack_b10 = uStack_b10 & 0xffffffffffffff00;
                      cVar14 = func_0x04fa7a10(lVar26,auStack_b28);
                      if (((ulong)uStack_b18 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))
                                  (&DAT_0f5463b0,((ulong)uStack_b18 & 0xff00ffffffffffff) - 8);
                      }
                      uStack_b18 = (uint *******)0x0;
                      if (((ulong)uStack_b20 & 0x80000000000000) != 0) {
                        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
                      }
                      if (cVar14 == '\0') goto LAB_09f5658f;
                    }
                    else {
LAB_09f5658f:
                      pppppppuVar20 = pppppppuStack_14c0;
                      if (*(char *)((long)*(*pppppppuVar31)[1] + 0x159) == '\x04') {
                        if (pppppppuVar25 != (uint *******)0x0) {
                          LOCK();
                          pppppppuVar25[1] = (uint ******)((long)pppppppuVar25[1] + 1);
                          UNLOCK();
                        }
                        plVar38 = *(long **)(param_3 + 0x82);
                        pppppppuStack_12f8 = pppppppuVar31;
                        pppppppuStack_12f0 = pppppppuVar25;
                        if ((*plVar38 == 0) &&
                           (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                                     &UNK_014adc19), cVar14 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        if ((*(char *)*plVar38 == '\0') &&
                           (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41
                                                     ,&UNK_014adc19), cVar14 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        uVar29 = (**(code **)(*(long *)plVar38[2] + 0x148))();
                        ppppuVar2 = *(*pppppppuVar31)[1];
                        if (((ulong)*pppppppuStack_1600 & 1) == 0) {
                          ppppppuStack_13e8 = pppppppuStack_1600[2];
                          uStack_13f8 = *(uint *)pppppppuStack_1600;
                          uStack_13f4 = *(undefined4 *)((long)pppppppuStack_1600 + 4);
                          uStack_13f0 = *(undefined4 *)(pppppppuStack_1600 + 1);
                          uStack_13ec = *(undefined4 *)((long)pppppppuStack_1600 + 0xc);
                        }
                        else {
                          func_0x0412e5e0(&uStack_13f8,param_2[0x45],param_2[0x44]);
                        }
                        cStack_13e0 = '\x01';
                        uVar29 = func_0x0d621770(uVar29,ppppuVar2,&uStack_13f8);
                        _auStack_b28 = (uint *******)&UNK_017224f1;
                        uStack_b20 = (uint *******)0x0;
                        func_0x0ee35680(auStack_548,auStack_b28);
                        uStack_470 = 0;
                        uStack_488 = 0;
                        uStack_480 = 0;
                        uStack_498 = 0;
                        uStack_490 = 0;
                        uStack_4a8 = 0;
                        uStack_4a0 = 0;
                        uStack_4b8 = 0;
                        uStack_4b0 = 0;
                        uStack_4c8 = 0;
                        uStack_4c0 = 0;
                        uStack_4d8 = 0;
                        uStack_4d0 = 0;
                        uStack_4e8 = 0;
                        uStack_4e0 = 0;
                        uStack_4f8 = 0;
                        uStack_4f0 = 0;
                        uStack_508 = 0;
                        uStack_500 = 0;
                        uStack_518 = 0;
                        uStack_510 = 0;
                        uStack_478 = 0;
                        uStack_468 = 0;
                        pppppppuStack_460 = pppppppuVar31;
                        pppppppuStack_458 = pppppppuVar25;
                        if (pppppppuVar25 == (uint *******)0x0) {
LAB_09f5678a:
                          uStack_450 = 0;
                          uStack_448 = 0;
                          uStack_440 = 0xffffffff;
                          pppppuVar22 = (*pppppppuVar31)[1];
                          uStack_43c = *(undefined1 *)(pppppuVar22 + 7);
                          ppppuVar2 = pppppuVar22[2];
                          if (ppppuVar2 != pppppuVar22[3]) {
                            uVar34 = ((long)pppppuVar22[3] - (long)ppppuVar2 >> 3) *
                                     0x6db6db6db6db6db7;
                            uVar48 = (uint)uVar34;
                            if ((int)uVar48 < 1) {
                              uStack_440 = 0xffffffff;
                            }
                            else {
                              if ((uVar48 & 0x7fffffff) == 1) {
                                uVar39 = 0xffffffff;
                                uVar37 = 0;
                                bVar43 = 0;
                              }
                              else {
                                ppppuVar46 = ppppuVar2 + 0xd;
                                uVar41 = 0xffffffff;
                                uVar37 = 0;
                                uVar44 = 0;
                                do {
                                  bVar15 = (byte)*(uint *)(ppppuVar46 + -7);
                                  uVar45 = uVar44 & 0xff;
                                  if ((byte)uVar44 < bVar15) {
                                    uVar45 = *(uint *)(ppppuVar46 + -7);
                                  }
                                  uVar47 = uVar41;
                                  if ((byte)uVar44 <= bVar15) {
                                    uVar47 = uVar37 & 0xffffffff;
                                  }
                                  bVar15 = (byte)*(uint *)ppppuVar46;
                                  uVar44 = uVar45;
                                  if ((byte)uVar45 < bVar15) {
                                    uVar44 = *(uint *)ppppuVar46;
                                  }
                                  bVar43 = (byte)uVar44;
                                  uVar41 = (ulong)((int)uVar37 + 1);
                                  if (bVar15 < (byte)uVar45) {
                                    uVar41 = uVar47;
                                  }
                                  uVar39 = (undefined4)uVar41;
                                  uVar37 = uVar37 + 2;
                                  ppppuVar46 = ppppuVar46 + 0xe;
                                } while (uVar37 != (uVar48 & 0x7ffffffe));
                              }
                              uStack_440 = uVar39;
                              if (((uVar34 & 1) != 0) &&
                                 (uStack_440 = (int)uVar37,
                                 *(byte *)(ppppuVar2 + uVar37 * 7 + 6) < bVar43)) {
                                uStack_440 = uVar39;
                              }
                            }
                          }
                          puVar24 = *(undefined8 **)(param_3 + 0x82);
                          auStack_15f8 = (undefined1  [8])*puVar24;
                          ppppppuVar21 = (uint ******)puVar24[1];
                          if (ppppppuVar21 != (uint ******)0x0) {
                            LOCK();
                            ppppppuVar21[1] = (uint *****)((long)ppppppuVar21[1] + 1);
                            UNLOCK();
                          }
                          pppppppuStack_15e8 = (uint *******)puVar24[2];
                          ppppppuStack_15f0 = ppppppuVar21;
                          uStack_468 = uVar29;
                          if ((auStack_15f8 != (undefined1  [8])0x0) &&
                             (*(char *)auStack_15f8 != '\0')) {
                            _auStack_b28 = (uint *******)((ulong)_auStack_b28 & 0xffffffffffffff00);
                            uStack_b10 = uStack_b10 & 0xffffffffffffff00;
                            func_0x0d62d100(pppppppuVar20 + 1,auStack_548,auStack_15f8,0,auStack_b28
                                           );
                            lVar26 = lStack_1320;
                            auStack_15f8 = (undefined1  [8])0x0;
                            ppppppuStack_15f0 = (uint ******)0x0;
                            if (ppppppuVar21 != (uint ******)0x0) {
                              LOCK();
                              ppppppuVar27 = ppppppuVar21 + 1;
                              pppppuVar22 = *ppppppuVar27;
                              *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
                              UNLOCK();
                              if (pppppuVar22 == (uint *****)0x0) {
                                (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
                                func_0x0412c2d0(ppppppuVar21);
                              }
                              ppppppuVar21 = ppppppuStack_15f0;
                              pppppppuStack_15e8 = (uint *******)0x0;
                              if (ppppppuStack_15f0 != (uint ******)0x0) {
                                LOCK();
                                ppppppuVar27 = ppppppuStack_15f0 + 1;
                                pppppuVar22 = *ppppppuVar27;
                                *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
                                UNLOCK();
                                if (pppppuVar22 == (uint *****)0x0) {
                                  (*(code *)(*ppppppuStack_15f0)[2])(ppppppuStack_15f0);
                                  func_0x0412c2d0(ppppppuVar21);
                                }
                              }
                            }
                            pppppppuVar20 = pppppppuStack_458;
                            if (pppppppuStack_458 != (uint *******)0x0) {
                              LOCK();
                              pppppppuVar25 = pppppppuStack_458 + 1;
                              ppppppuVar21 = *pppppppuVar25;
                              *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
                              UNLOCK();
                              if (ppppppuVar21 == (uint ******)0x0) {
                                (*(code *)(*pppppppuStack_458)[2])(pppppppuStack_458);
                                func_0x0412c2d0(pppppppuVar20);
                              }
                            }
                            func_0x048fac00(auStack_548);
                            if ((cStack_13e0 == '\x01') && ((uStack_13f8 & 1) != 0)) {
                              func_0x0412a280(ppppppuStack_13e8);
                            }
                            pppppppuVar20 = pppppppuStack_12f0;
                            if (pppppppuStack_12f0 != (uint *******)0x0) {
                              LOCK();
                              pppppppuVar25 = pppppppuStack_12f0 + 1;
                              ppppppuVar21 = *pppppppuVar25;
                              *pppppppuVar25 = (uint ******)((long)*pppppppuVar25 + -1);
                              UNLOCK();
                              if (ppppppuVar21 == (uint ******)0x0) {
                                (*(code *)(*pppppppuStack_12f0)[2])(pppppppuStack_12f0);
                                func_0x0412c2d0(pppppppuVar20);
                              }
                            }
                            goto LAB_09f56a00;
                          }
                        }
                        else {
                          LOCK();
                          pppppppuVar25[1] = (uint ******)((long)pppppppuVar25[1] + 1);
                          UNLOCK();
                          if (pppppppuVar31 != (uint *******)0x0) goto LAB_09f5678a;
                          func_0x04890760();
                        }
                        func_0x04890760();
                        goto LAB_09f59934;
                      }
                    }
LAB_09f56a00:
                    pppppppuVar25 = pppppppuStack_15c0;
                    if (pppppppuStack_15c0 != (uint *******)0x0) {
                      LOCK();
                      pppppppuVar20 = pppppppuStack_15c0 + 1;
                      ppppppuVar21 = *pppppppuVar20;
                      *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                      UNLOCK();
                      if (ppppppuVar21 == (uint ******)0x0) {
                        (*(code *)(*pppppppuStack_15c0)[2])(pppppppuStack_15c0);
                        func_0x0412c2d0(pppppppuVar25);
                      }
                    }
                    pppppppuVar19 = pppppppuVar19 + -2;
                  } while ((undefined1  [8])pppppppuVar19 != auStack_1548);
                }
                if (DAT_0f64ae30 == '\0') {
                  iVar18 = FUN_04108328(&DAT_0f64ae30);
                  if (iVar18 != 0) {
                    _auStack_15f8 = func_0x0eedb4e0(&UNK_0145e94c,0x24);
                    _auStack_b28 = (uint *******)0x1000100000000;
                    uStack_b20 = (uint *******)&UNK_01254d89;
                    uStack_1388 = 0;
                    pppppppuVar25 = (uint *******)&uStack_b18;
                    uStack_b18 = (uint *******)&UNK_01254d89;
                    uStack_1390 = 0;
                    func_0x0ee33d90(0xf64ae00,auStack_15f8,auStack_b28,0);
                    func_0x0ee386e0(pppppppuVar25);
                    func_0x0ee386e0(&uStack_b20);
                    func_0x0ee386e0(&uStack_1390);
                    func_0x0ee386e0(&uStack_1388);
                    __cxa_atexit(&UNK_09b933d0,0xf64ae00,0xf53dab8);
                    func_0x0410844d(&DAT_0f64ae30);
                  }
                }
                plVar38 = *(long **)(param_3 + 0x82);
                if (*plVar38 == 0) {
                  cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                           &UNK_014adc19);
                  if (cVar14 != '\0') {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                }
                if (*(char *)*plVar38 == '\0') {
                  cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                           &UNK_014adc19);
                  if (cVar14 != '\0') {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                }
                (**(code **)(*(long *)plVar38[2] + 0x18))(auStack_15c8,(long *)plVar38[2],0xf64ae00)
                ;
                pppppppuVar19 = pppppppuStack_14c0;
                pppppppuVar20 = pppppppuStack_15c0;
                auVar42 = auStack_15c8;
                if (auStack_15c8 != (undefined1  [8])0x0) {
                  if (pppppppuStack_15c0 != (uint *******)0x0) {
                    LOCK();
                    pppppppuStack_15c0[1] = (uint ******)((long)pppppppuStack_15c0[1] + 1);
                    UNLOCK();
                  }
                  pppppppuStack_1308 = (uint *******)auStack_15c8;
                  pppppppuStack_1300 = pppppppuStack_15c0;
                  plVar38 = *(long **)(param_3 + 0x82);
                  if (*plVar38 == 0) {
                    cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                             &UNK_014adc19);
                    if (cVar14 != '\0') {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                  }
                  if (*(char *)*plVar38 == '\0') {
                    cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                             &UNK_014adc19);
                    if (cVar14 != '\0') {
                      _DAT_00000000 = 0xdeadc0de;
                    }
                  }
                  uVar29 = (**(code **)(*(long *)plVar38[2] + 0x148))();
                  pppppppuVar25 = (uint *******)*(*(uint *******)auStack_15c8)[1];
                  if (((ulong)*pppppppuStack_1600 & 1) == 0) {
                    ppppppuStack_1408 = pppppppuStack_1600[2];
                    uStack_1418 = *(uint *)pppppppuStack_1600;
                    uStack_1414 = *(undefined4 *)((long)pppppppuStack_1600 + 4);
                    uStack_1410 = *(undefined4 *)(pppppppuStack_1600 + 1);
                    uStack_140c = *(undefined4 *)((long)pppppppuStack_1600 + 0xc);
                  }
                  else {
                    func_0x0412e5e0(&uStack_1418,param_2[0x45],param_2[0x44]);
                  }
                  cStack_1400 = '\x01';
                  uVar29 = func_0x0d621770(uVar29,pppppppuVar25,&uStack_1418);
                  _auStack_b28 = (uint *******)&UNK_017224f1;
                  uStack_b20 = (uint *******)0x0;
                  func_0x0ee35680(auStack_718,auStack_b28);
                  uStack_640 = 0;
                  uStack_6e8 = 0;
                  uStack_6e0 = 0;
                  uStack_6d8 = 0;
                  uStack_6d0 = 0;
                  uStack_6c8 = 0;
                  uStack_6c0 = 0;
                  uStack_6b8 = 0;
                  uStack_6b0 = 0;
                  uStack_6a8 = 0;
                  uStack_6a0 = 0;
                  uStack_698 = 0;
                  uStack_690 = 0;
                  uStack_688 = 0;
                  uStack_680 = 0;
                  uStack_678 = 0;
                  uStack_670 = 0;
                  uStack_668 = 0;
                  uStack_660 = 0;
                  uStack_658 = 0;
                  uStack_650 = 0;
                  uStack_648 = 0;
                  uStack_638 = 0;
                  pppppppuStack_630 = (uint *******)auVar42;
                  pppppppuStack_628 = pppppppuVar20;
                  if (pppppppuVar20 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20[1] = (uint ******)((long)pppppppuVar20[1] + 1);
                    UNLOCK();
                    if (auVar42 == (undefined1  [8])0x0) {
                      func_0x04890760();
                      auVar10 = _auStack_15f8;
                      goto LAB_09f59a7d;
                    }
                  }
                  uStack_620 = 0;
                  uStack_618 = 0;
                  uStack_610 = 0xffffffff;
                  pppppuVar22 = (*(uint *******)auVar42)[1];
                  uStack_60c = *(undefined1 *)(pppppuVar22 + 7);
                  ppppuVar2 = pppppuVar22[2];
                  if (ppppuVar2 != pppppuVar22[3]) {
                    uVar34 = ((long)pppppuVar22[3] - (long)ppppuVar2 >> 3) * 0x6db6db6db6db6db7;
                    uVar48 = (uint)uVar34;
                    if ((int)uVar48 < 1) {
                      uStack_610 = 0xffffffff;
                    }
                    else {
                      if ((uVar48 & 0x7fffffff) == 1) {
                        uVar39 = 0xffffffff;
                        uVar37 = 0;
                        bVar43 = 0;
                      }
                      else {
                        ppppuVar46 = ppppuVar2 + 0xd;
                        uVar41 = 0xffffffff;
                        uVar37 = 0;
                        uVar44 = 0;
                        do {
                          bVar15 = (byte)*(uint *)(ppppuVar46 + -7);
                          uVar45 = uVar44 & 0xff;
                          if ((byte)uVar44 < bVar15) {
                            uVar45 = *(uint *)(ppppuVar46 + -7);
                          }
                          uVar47 = uVar41;
                          if ((byte)uVar44 <= bVar15) {
                            uVar47 = uVar37 & 0xffffffff;
                          }
                          bVar15 = (byte)*(uint *)ppppuVar46;
                          uVar44 = uVar45;
                          if ((byte)uVar45 < bVar15) {
                            uVar44 = *(uint *)ppppuVar46;
                          }
                          bVar43 = (byte)uVar44;
                          uVar41 = (ulong)((int)uVar37 + 1);
                          if (bVar15 < (byte)uVar45) {
                            uVar41 = uVar47;
                          }
                          uVar39 = (undefined4)uVar41;
                          uVar37 = uVar37 + 2;
                          ppppuVar46 = ppppuVar46 + 0xe;
                        } while (uVar37 != (uVar48 & 0x7ffffffe));
                      }
                      uStack_610 = uVar39;
                      if (((uVar34 & 1) != 0) &&
                         (uStack_610 = (int)uVar37, *(byte *)(ppppuVar2 + uVar37 * 7 + 6) < bVar43))
                      {
                        uStack_610 = uVar39;
                      }
                    }
                  }
                  pauVar5 = *(undefined1 (**) [16])(param_3 + 0x82);
                  auStack_15f8 = *(undefined1 (*) [8])*pauVar5;
                  plVar38 = *(long **)(*pauVar5 + 8);
                  auVar11 = *pauVar5;
                  auVar10 = *pauVar5;
                  if (plVar38 != (long *)0x0) {
                    LOCK();
                    plVar38[1] = plVar38[1] + 1;
                    UNLOCK();
                  }
                  pppppppuStack_15e8 = *(uint ********)pauVar5[1];
                  uStack_638 = uVar29;
                  if ((auStack_15f8 == (undefined1  [8])0x0) ||
                     (auVar10 = auVar11, *(char *)auStack_15f8 == '\0')) {
LAB_09f59a7d:
                    _auStack_15f8 = auVar10;
                    func_0x04890760();
LAB_09f59a82:
                    func_0x04890760();
LAB_09f59a87:
                    func_0x04890760();
                    goto LAB_09f59a8c;
                  }
                  _auStack_b28 = (uint *******)((ulong)_auStack_b28 & 0xffffffffffffff00);
                  uStack_b10 = uStack_b10 & 0xffffffffffffff00;
                  ppppppuStack_15f0 = (uint ******)plVar38;
                  func_0x0d62d100(pppppppuVar19 + 1,auStack_718,auStack_15f8,0,auStack_b28);
                  auStack_15f8 = (undefined1  [8])0x0;
                  ppppppuStack_15f0 = (uint ******)0x0;
                  if (plVar38 != (long *)0x0) {
                    LOCK();
                    plVar28 = plVar38 + 1;
                    lVar26 = *plVar28;
                    *plVar28 = *plVar28 + -1;
                    UNLOCK();
                    if (lVar26 == 0) {
                      (**(code **)(*plVar38 + 0x10))(plVar38);
                      func_0x0412c2d0(plVar38);
                    }
                    ppppppuVar21 = ppppppuStack_15f0;
                    pppppppuStack_15e8 = (uint *******)0x0;
                    if (ppppppuStack_15f0 != (uint ******)0x0) {
                      LOCK();
                      plVar38 = (long *)(ppppppuStack_15f0 + 1);
                      lVar26 = *plVar38;
                      *plVar38 = *plVar38 + -1;
                      UNLOCK();
                      if (lVar26 == 0) {
                        (**(code **)((long)*ppppppuStack_15f0 + 0x10))(ppppppuStack_15f0);
                        func_0x0412c2d0(ppppppuVar21);
                      }
                    }
                  }
                  pppppppuVar19 = pppppppuStack_628;
                  if (pppppppuStack_628 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20 = pppppppuStack_628 + 1;
                    ppppppuVar21 = *pppppppuVar20;
                    *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                    UNLOCK();
                    if (ppppppuVar21 == (uint ******)0x0) {
                      (*(code *)(*pppppppuStack_628)[2])(pppppppuStack_628);
                      func_0x0412c2d0(pppppppuVar19);
                    }
                  }
                  func_0x048fac00(auStack_718);
                  if ((cStack_1400 == '\x01') && ((uStack_1418 & 1) != 0)) {
                    func_0x0412a280(ppppppuStack_1408,
                                    CONCAT44(uStack_1414,uStack_1418) & 0xfffffffffffffffe);
                  }
                  pppppppuVar19 = pppppppuStack_1300;
                  auVar10._8_8_ = ppppppuStack_15f0;
                  auVar10._0_8_ = auStack_15f8;
                  if (pppppppuStack_1300 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20 = pppppppuStack_1300 + 1;
                    ppppppuVar21 = *pppppppuVar20;
                    *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                    UNLOCK();
                    _auStack_15f8 = auVar10;
                    if (ppppppuVar21 == (uint ******)0x0) {
                      (*(code *)(*pppppppuStack_1300)[2])(pppppppuStack_1300);
                      func_0x0412c2d0(pppppppuVar19);
                    }
                  }
                }
                pppppppuVar19 = pppppppuStack_15c0;
                if (pppppppuStack_15c0 != (uint *******)0x0) {
                  LOCK();
                  pppppppuVar20 = pppppppuStack_15c0 + 1;
                  ppppppuVar21 = *pppppppuVar20;
                  *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                  UNLOCK();
                  if (ppppppuVar21 == (uint ******)0x0) {
                    (*(code *)(*pppppppuStack_15c0)[2])(pppppppuStack_15c0);
                    func_0x0412c2d0(pppppppuVar19);
                  }
                }
                auVar42 = auStack_1548;
                pppppppuVar19 = pppppppuStack_1540;
                if (auStack_1548 != (undefined1  [8])0x0) {
                  while (pppppppuVar25 = pppppppuVar19, auVar42 != (undefined1  [8])pppppppuVar25) {
                    ppppppuVar21 = pppppppuVar25[-1];
                    if (ppppppuVar21 != (uint ******)0x0) {
                      LOCK();
                      ppppppuVar27 = ppppppuVar21 + 1;
                      pppppuVar22 = *ppppppuVar27;
                      *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
                      UNLOCK();
                      if (pppppuVar22 == (uint *****)0x0) {
                        (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
                        func_0x0412c2d0(ppppppuVar21);
                      }
                    }
                    pppppppuVar19 = pppppppuVar25 + -2;
                  }
                  pppppppuStack_1540 = (uint *******)auVar42;
                  func_0x0412a280(auStack_1548,(long)pppppppuStack_1538 - (long)auStack_1548);
                }
              }
              pppppppuVar49 = (uint *******)0x817ff4e88cc42e7;
              pppppppuVar19 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
              if (pppppppuVar19 == (uint *******)0x0) {
                func_0x0eec74c0(0x28,0);
              }
              *pppppppuVar19 = (uint ******)&UNK_0f47b808;
              pppppppuVar19[1] = (uint ******)0x0;
              pppppppuVar19[2] = (uint ******)0x0;
              pppppppuVar19[3] = (uint ******)0x0;
              pppppppuVar19[4] = (uint ******)0x0;
              plVar38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
              if (plVar38 == (long *)0x0) {
                func_0x0eec74c0(0x28,0);
              }
              *plVar38 = (long)&UNK_0f47b808;
              plVar38[1] = 0;
              plVar38[2] = 0;
              plVar38[3] = 0;
              plVar38[4] = 0;
              func_0x0d62e5e0(pppppppuStack_14c0,pppppppuVar19,plVar38);
              auStack_1548 = (undefined1  [8])&ppppppuStack_438;
              pppppppuStack_1540 = pppppppuStack_38;
              pppppppuStack_1538 = (uint *******)&UNK_012d82f4;
              uStack_1530 = 0x19;
              pppppppuVar31 = (uint *******)auStack_b28;
              func_0x049151c0(pppppppuVar31,auStack_1548,2,0x2f);
              if (DAT_0f7b8fb8 == '\0') goto LAB_09f59bc5;
LAB_09f570df:
              uStack_d18 = uStack_728;
              pppppppuStack_d20 = pppppppuVar31;
              (**(code **)(_DAT_0f7b8f98 + 0x60))(auStack_1548,&DAT_0f7b8f98,&pppppppuStack_d20);
              ppppppuStack_15f0 = (uint ******)&UNK_0140f690;
              pppppppuStack_15e8 = (uint *******)0x1;
              uStack_15e0 = 0x251;
              if (bStack_1508 == 0) {
                pppppppuVar25 = (uint *******)auStack_15c8;
                auStack_15f8 = (undefined1  [8])pppppppuVar49;
                func_0x0eedea30(pppppppuVar25);
                func_0x0eedeb80(2,0x2d,auStack_1548,pppppppuVar25,auStack_15f8);
                if (((ulong)auStack_15c8 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_15b8,(ulong)auStack_15c8 & 0xfffffffffffffffe);
                }
              }
              auVar42 = auStack_1548;
              if ((bStack_1508 & 1) == 0) {
                auStack_1578 = (undefined1  [8])((ulong)auStack_1578 & 0xffffffffffff0000);
                bVar15 = 0;
              }
              else {
                auStack_1578 = auStack_1548;
                pppppppuStack_1570 = pppppppuStack_1540;
                pppppppuStack_1568 = pppppppuStack_1538;
                auStack_1548 = (undefined1  [8])0x0;
                pppppppuStack_1540 = (uint *******)0x0;
                pppppppuStack_1538 = (uint *******)0x0;
                auStack_1578[0] = auVar42[0];
                bVar15 = auStack_1578[0];
                auStack_1578 = auVar42;
              }
              bVar50 = (bVar15 & 1) != 0;
              pppppppuVar31 = (uint *******)(auStack_1578 + 1);
              if (bVar50) {
                pppppppuVar31 = pppppppuStack_1568;
              }
              pppppppuVar20 = (uint *******)(ulong)(bVar15 >> 1);
              if (bVar50) {
                pppppppuVar20 = pppppppuStack_1570;
              }
              puVar24 = *(undefined8 **)(param_3 + 0x82);
              auStack_15f8 = (undefined1  [8])*puVar24;
              ppppppuStack_15f0 = (uint ******)puVar24[1];
              if (ppppppuStack_15f0 != (uint ******)0x0) {
                LOCK();
                ppppppuStack_15f0[1] = (uint *****)((long)ppppppuStack_15f0[1] + 1);
                UNLOCK();
              }
              pppppppuStack_15e8 = (uint *******)puVar24[2];
              if ((auStack_15f8 != (undefined1  [8])0x0) && (*(char *)auStack_15f8 != '\0')) {
                if (((ulong)*pppppppuStack_1600 & 1) == 0) {
                  ppppppuStack_1428 = pppppppuStack_1600[2];
                  uStack_1438 = *(uint *)pppppppuStack_1600;
                  uStack_1434 = *(undefined4 *)((long)pppppppuStack_1600 + 4);
                  uStack_1430 = *(undefined4 *)(pppppppuStack_1600 + 1);
                  uStack_142c = *(undefined4 *)((long)pppppppuStack_1600 + 0xc);
                }
                else {
                  func_0x0412e5e0(&uStack_1438,param_2[0x45],param_2[0x44]);
                }
                cStack_1420 = '\x01';
                func_0x0d62d820(&ppppppuStack_1480,pppppppuVar31,pppppppuVar20,auStack_15f8,
                                &uStack_1438);
                ppppppuVar21 = ppppppuStack_1480;
                pppppppuVar25 = pppppppuStack_14c0;
                ppppppuStack_1480 = (uint ******)0x0;
                pppppppuStack_14c0 = (uint *******)ppppppuVar21;
                if (pppppppuVar25 != (uint *******)0x0) {
                  (*(code *)(*pppppppuVar25)[1])();
                  ppppppuVar21 = ppppppuStack_1480;
                  ppppppuStack_1480 = (uint ******)0x0;
                  if (ppppppuVar21 != (uint ******)0x0) {
                    (*(code *)(*ppppppuVar21)[1])();
                  }
                }
                if ((cStack_1420 == '\x01') && ((uStack_1438 & 1) != 0)) {
                  func_0x0412a280(ppppppuStack_1428,
                                  CONCAT44(uStack_1434,uStack_1438) & 0xfffffffffffffffe);
                }
                ppppppuVar21 = ppppppuStack_15f0;
                auStack_15f8 = (undefined1  [8])0x0;
                ppppppuStack_15f0 = (uint ******)0x0;
                if (ppppppuVar21 != (uint ******)0x0) {
                  LOCK();
                  ppppppuVar27 = ppppppuVar21 + 1;
                  pppppuVar22 = *ppppppuVar27;
                  *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
                  UNLOCK();
                  if (pppppuVar22 == (uint *****)0x0) {
                    (*(code *)(*ppppppuVar21)[2])(ppppppuVar21);
                    func_0x0412c2d0(ppppppuVar21);
                  }
                  ppppppuVar21 = ppppppuStack_15f0;
                  pppppppuStack_15e8 = (uint *******)0x0;
                  if (ppppppuStack_15f0 != (uint ******)0x0) {
                    LOCK();
                    ppppppuVar27 = ppppppuStack_15f0 + 1;
                    pppppuVar22 = *ppppppuVar27;
                    *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + -1);
                    UNLOCK();
                    if (pppppuVar22 == (uint *****)0x0) {
                      (*(code *)(*ppppppuStack_15f0)[2])(ppppppuStack_15f0);
                      func_0x0412c2d0(ppppppuVar21);
                    }
                  }
                }
                if (((ulong)auStack_1578 & 1) != 0) {
                  func_0x0412a280(pppppppuStack_1568,(ulong)auStack_1578 & 0xfffffffffffffffe);
                }
                if (bStack_1508 == 1) {
                  if (((ulong)auStack_1548 & 1) != 0) {
                    func_0x0412a280(pppppppuStack_1538,(ulong)auStack_1548 & 0xfffffffffffffffe);
                  }
                }
                else {
                  func_0x048e6d60(auStack_1548);
                }
                func_0x0d62e5e0(pppppppuStack_14c0,pppppppuVar19,plVar38);
                uVar48 = (int)((long)pppppppuVar19[2] - (long)pppppppuVar19[1] >> 4) * -0xf0f0f0f;
                if (0 < (int)uVar48) {
                  uVar48 = uVar48 & 0x7fffffff;
                  iVar18 = -uVar48;
                  pppppppuVar25 = (uint *******)(ulong)uVar48;
                  do {
                    pppppppuVar20 = pppppppuVar25;
                    ppppppuVar21 = pppppppuVar19[1];
                    ppppppuVar27 = pppppppuVar19[2] +
                                   (long)((int)((ulong)((long)pppppppuVar19[2] - (long)ppppppuVar21)
                                               >> 4) * -0xf0f0f0f + iVar18) * -0x22 + -0x27;
                    do {
                      if (ppppppuVar27 + 5 == ppppppuVar21) goto LAB_09f57450;
                      pppppuVar22 = *ppppppuVar27;
                      ppppppuVar27 = ppppppuVar27 + -0x22;
                    } while (ppppppuVar21[((long)pppppppuVar20 + -1) * 0x22 + 0x1d] != pppppuVar22);
                    func_0x0d62e890(pppppppuVar19 + 1);
LAB_09f57450:
                    iVar18 = iVar18 + 1;
                    pppppppuVar25 = (uint *******)((long)pppppppuVar20 + -1);
                  } while (1 < (long)pppppppuVar20);
                }
                uVar48 = (int)(plVar38[2] - plVar38[1] >> 4) * -0xf0f0f0f;
                if (0 < (int)uVar48) {
                  uVar48 = uVar48 & 0x7fffffff;
                  iVar18 = -uVar48;
                  pppppppuVar25 = (uint *******)(ulong)uVar48;
                  do {
                    pppppppuVar20 = pppppppuVar25;
                    plVar28 = (long *)plVar38[1];
                    plVar35 = (long *)(plVar38[2] +
                                       (long)((int)((ulong)(plVar38[2] - (long)plVar28) >> 4) *
                                              -0xf0f0f0f + iVar18) * -0x110 + -0x138);
                    do {
                      if (plVar35 + 5 == plVar28) goto LAB_09f57510;
                      lVar26 = *plVar35;
                      plVar35 = plVar35 + -0x22;
                    } while (plVar28[((long)pppppppuVar20 + -1) * 0x22 + 0x1d] != lVar26);
                    func_0x0d62e890(plVar38 + 1);
LAB_09f57510:
                    iVar18 = iVar18 + 1;
                    pppppppuVar25 = (uint *******)((long)pppppppuVar20 + -1);
                  } while (1 < (long)pppppppuVar20);
                }
                pppppppuStack_14d0 = pppppppuVar19;
                func_0x09adf7e0(*(undefined8 *)(param_3 + 0x84),&pppppppuStack_14d0,0);
                pppppppuVar19 = pppppppuStack_14d0;
                pppppppuStack_14d0 = (uint *******)0x0;
                if (pppppppuVar19 != (uint *******)0x0) {
                  (*(code *)(*pppppppuVar19)[1])();
                }
                if (*(char *)(*(long *)(param_3 + 0x84) + 0xc1) == '\x01') {
                  func_0x09ae0170();
                }
                pppppppuVar19 = pppppppuStack_1580;
                plStack_14d8 = plVar38;
                func_0x09adf7e0(pppppppuStack_1580,&plStack_14d8,0);
                plVar28 = plStack_14d8;
                plStack_14d8 = (long *)0x0;
                if (plVar28 != (long *)0x0) {
                  (**(code **)(*plVar28 + 8))();
                }
                if (*(byte *)((long)pppppppuVar19 + 0xc1) == 1) {
                  func_0x09ae0170(pppppppuVar19);
                }
                func_0x0b3b4c60(param_2[0x12]);
                if ((param_2[0x58] == (uint ******)0x0) &&
                   (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                             &UNK_013484d2), cVar14 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(char *)param_2[0x58] == '\0') &&
                   (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                             &UNK_013484d2), cVar14 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                func_0x0b68da30(param_2[0x5a]);
                pppppppuVar19 = pppppppuStack_14c0;
                pppppppuStack_14c0 = (uint *******)0x0;
                if (pppppppuVar19 != (uint *******)0x0) {
                  (*(code *)(*pppppppuVar19)[1])();
                }
LAB_09f57706:
                ppppppuStack_cb8 = (uint ******)&UNK_0f1f8218;
                pppppppuStack_c98 = &ppppppuStack_cb8;
                puStack_cb0 = param_3;
                pppppppuVar25 =
                     (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
                if (pppppppuVar25 == (uint *******)0x0) {
LAB_09f599d7:
                  func_0x0eec74c0(0x38,0);
                }
                auStack_12e8[0] = 0x39;
                auStack_12e8[1] = 0;
                uStack_12e6 = 0;
                uStack_12e4 = 0;
                uStack_12e0 = 0x37;
                uStack_12dc = 0;
                pppppppuVar25[4] = _DAT_01248589;
                pppppppuVar25[5] = _UNK_01248591;
                pppppppuVar25[2] = _DAT_01248579;
                pppppppuVar25[3] = _UNK_01248581;
                *(undefined4 *)pppppppuVar25 = _DAT_01248569;
                *(undefined4 *)((long)pppppppuVar25 + 4) = _UNK_0124856d;
                *(undefined4 *)(pppppppuVar25 + 1) = _UNK_01248571;
                *(undefined4 *)((long)pppppppuVar25 + 0xc) = _UNK_01248575;
                pbVar1 = (byte *)((long)pppppppuVar25 + 0x2f);
                pbVar1[0] = 0x69;
                pbVar1[1] = 0x6f;
                pbVar1[2] = 0x6e;
                pbVar1[3] = 0x43;
                pbVar1[4] = 0x68;
                pbVar1[5] = 0x65;
                pbVar1[6] = 99;
                pbVar1[7] = 0x6b;
                *(byte *)((long)pppppppuVar25 + 0x37) = 0;
                pppppppuVar31 = &ppppppuStack_cb8;
                uStack_12d8 = pppppppuVar25;
                uVar48 = func_0x09adc2b0(pppppppuStack_1580,pppppppuVar31,auStack_12e8);
                pppppppuVar19 = (uint *******)(ulong)uVar48;
                if ((auStack_12e8[0] & 1) != 0) {
                  func_0x0412a280(uStack_12d8,
                                  CONCAT44(uStack_12e4,
                                           CONCAT22(uStack_12e6,
                                                    CONCAT11(auStack_12e8[1],auStack_12e8[0]))) &
                                  0xfffffffffffffffe);
                }
                if (pppppppuStack_c98 == pppppppuVar31) {
                  (*(code *)(*pppppppuStack_c98)[4])();
joined_r0x09f5782c:
                  if ((char)uVar48 != '\0') goto LAB_09f5782e;
LAB_09f57813:
                  if ((*(byte *)(param_3 + 6) & 1) == 0) {
                    lVar26 = (long)param_3 + 0x19;
                  }
                  else {
                    lVar26 = *(long *)(param_3 + 10);
                  }
                  func_0x0eede920(0,1,0,0xc,8,&UNK_01483143,0x277,&UNK_013b6d6d,lVar26);
                  if (pppppppuStack_1610 != (uint *******)0x0) {
                    (*(code *)(*pppppppuStack_1610)[0x12])();
                    cVar14 = (*(code *)(*pppppppuStack_1610)[0x14])();
                    if (cVar14 == '\0') {
                      do {
                        auStack_12e8[0] = 0x80;
                        auStack_12e8[1] = 0xf0;
                        uStack_12e6 = 0x2fa;
                        uStack_12e4 = 0;
                        func_0x04136c40(auStack_12e8);
                        cVar14 = (*(code *)(*pppppppuStack_1610)[0x14])();
                      } while (cVar14 == '\0');
                    }
                    pppppppuVar19 = pppppppuStack_1618;
                    pppppppuStack_1618 = (uint *******)0x0;
                    if (pppppppuVar19 != (uint *******)0x0) {
                      (*(code *)(*pppppppuVar19)[1])();
                    }
                    pppppppuVar19 = pppppppuStack_1610;
                    pppppppuStack_1610 = (uint *******)0x0;
                    if (pppppppuVar19 != (uint *******)0x0) {
                      (*(code *)(*pppppppuVar19)[1])();
                    }
                  }
                  (**(code **)(**(long **)(param_3 + 0x80) + 0x960))
                            (*(long **)(param_3 + 0x80),&UNK_01a46340,0,0);
                  (*(code *)(*param_2[0x69])[7])(uStack_14f8);
                  goto LAB_09f597fe;
                }
                if (pppppppuStack_c98 == (uint *******)0x0) goto joined_r0x09f5782c;
                (*(code *)(*pppppppuStack_c98)[5])();
                if ((char)uVar48 == '\0') goto LAB_09f57813;
LAB_09f5782e:
                pppppppuVar49 = (uint *******)param_2[0x12][5][0x13][1];
                pppppppuVar25 = (uint *******)param_2[0x12][5][0x13][2];
                if (pppppppuVar49 == pppppppuVar25) {
LAB_09f57d8c:
                  func_0x0eede920(0,1,0,0xc,2,&UNK_013c1f41,0x297,&UNK_012e2063);
                }
                else {
                  plVar38 = (long *)0x0;
                  pppppppuStack_1580 = pppppppuVar25;
                  do {
                    pppppuVar22 = *pppppppuVar49[0x1d];
                    if ((*(char *)(pppppuVar22 + 0x11) == '\0') &&
                       (*(char *)((long)pppppuVar22 + 0x89) == '\0')) {
                      pppppppuStack_1590 =
                           (uint *******)CONCAT44(pppppppuStack_1590._4_4_,(int)plVar38);
                      pppppppuVar20 = (uint *******)*pppppuVar22[1];
                      uVar29 = (*(code *)(*pppppuVar22[1][1])[3])();
                      func_0x0ee35a00(auStack_12e8,uVar29);
                      bVar15 = auStack_12e8[0];
                      ppppppuVar21 = (uint ******)(ulong)(auStack_12e8[0] & 1);
                      pppppppuVar19 = (uint *******)(auStack_12e8 + 1);
                      if ((auStack_12e8[0] & 1) != 0) {
                        pppppppuVar19 = uStack_12d8;
                      }
                      pppppppuVar30 = (uint *******)func_0x0eee2e90(pppppppuVar19);
                      if ((uint *******)0xfffffffffffffff7 < pppppppuVar30) goto LAB_09f59b3c;
                      if (pppppppuVar30 < (uint *******)0x17) {
                        _auStack_b28 = (uint *******)
                                       CONCAT71(stack0xfffffffffffff4d9,(char)pppppppuVar30 * '\x02'
                                               );
                        pppppppuVar31 = (uint *******)(auStack_b28 + 1);
                        if (pppppppuVar30 != (uint *******)0x0) goto LAB_09f57a05;
                    /* WARNING: Ignoring partial resolution of indirect */
                        auStack_b28[1] = 0;
                      }
                      else {
                        pppppppuStack_14e8 =
                             (uint *******)
                             (CONCAT71(pppppppuStack_14e8._1_7_,bVar15) & 0xffffffffffffff01);
                        uVar34 = ((ulong)pppppppuVar30 | 7) + 1;
                        if (((ulong)pppppppuVar30 | 7) == 0x17) {
                          uVar34 = 0x1a;
                        }
                        pppppppuVar31 =
                             (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34)
                        ;
                        if (pppppppuVar31 == (uint *******)0x0) {
                          func_0x0eec74c0(uVar34,0);
                        }
                        _auStack_b28 = (uint *******)(uVar34 | 1);
                        pppppppuVar25 = pppppppuStack_1580;
                        uStack_b20 = pppppppuVar30;
                        uStack_b18 = pppppppuVar31;
LAB_09f57a05:
                        memmove(pppppppuVar31,pppppppuVar19,pppppppuVar30);
                        *(byte *)((long)pppppppuVar31 + (long)pppppppuVar30) = 0;
                      }
                      if ((auStack_12e8[0] & 1) != 0) {
                        func_0x0412a280(uStack_12d8,
                                        CONCAT44(uStack_12e4,
                                                 CONCAT22(uStack_12e6,
                                                          CONCAT11(auStack_12e8[1],auStack_12e8[0]))
                                                ) & 0xfffffffffffffffe);
                      }
                      if ((DAT_0f5ea4a0 == '\0') &&
                         (iVar18 = FUN_04108328(&DAT_0f5ea4a0), iVar18 != 0)) {
                        func_0x08b670e0(&DAT_0f5ea138);
                        __cxa_atexit(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                        func_0x0410844d(&DAT_0f5ea4a0);
                      }
                      pppppppuVar19 = pppppppuVar20 + 0x1f;
                      cVar14 = (**(code **)(_DAT_0f5ea138 + 0xe8))(&DAT_0f5ea138,pppppppuVar19);
                      if (cVar14 == '\0') {
                        if (((ulong)*pppppppuVar19 & 1) == 0) {
                          pppppppuStack_15e8 = (uint *******)pppppppuVar20[0x21];
                          auStack_15f8 = (undefined1  [8])*pppppppuVar19;
                          ppppppuStack_15f0 = pppppppuVar20[0x20];
                        }
                        else {
                          func_0x0412e5e0(auStack_15f8,pppppppuVar20[0x21],pppppppuVar20[0x20]);
                        }
                      }
                      else {
                        (**(code **)(_DAT_0f5ea138 + 0x98))
                                  (auStack_15f8,&DAT_0f5ea138,pppppppuVar20,pppppppuVar19);
                      }
                      ppppppuVar21 = pppppppuVar20[0x25];
                      ppppppuVar27 = pppppppuVar20[0x26];
                      auStack_12e8[0] = (byte)((ulong)ppppppuVar21 >> 0x20);
                      auStack_12e8[1] = (undefined1)((ulong)ppppppuVar21 >> 0x28);
                      uStack_12e6 = (undefined2)((ulong)ppppppuVar21 >> 0x30);
                      uStack_12d8 = (uint *******)
                                    (CONCAT44(uStack_12d8._4_4_,(int)((ulong)ppppppuVar21 >> 0x10))
                                    & 0xffffffff0000ffff);
                      uStack_12c8 = (uint *******)
                                    (CONCAT44(uStack_12c8._4_4_,(int)ppppppuVar21) &
                                    0xffffffff0000ffff);
                      pppppppuStack_12b8 =
                           (uint *******)
                           CONCAT44(pppppppuStack_12b8._4_4_,
                                    (uint)(ushort)((ulong)ppppppuVar27 >> 0x30));
                      auStack_12a8._0_4_ = (int)((ulong)ppppppuVar27 >> 0x10);
                      uStack_1298 = (char *)(CONCAT44(uStack_1298._4_4_,(int)ppppppuVar27) &
                                            0xffffffff0000ffff);
                      func_0x0470d9a0(auStack_15c8,&UNK_01287ba2,0x28,0x122112,auStack_12e8);
                      pppppppuVar20 = pppppppuVar20 + 0x27;
                      func_0x0ee34300(auStack_1578,pppppppuVar20);
                      iVar18 = (int)pppppppuStack_1590;
                      auStack_12e8[0] = (byte)pppppppuStack_1590;
                      auStack_12e8[1] = (undefined1)((ulong)pppppppuStack_1590 >> 8);
                      uStack_12e6 = (undefined2)((ulong)pppppppuStack_1590 >> 0x10);
                      uStack_12d8 = pppppppuStack_15e8;
                      uStack_12d0 = (undefined1  [8])ppppppuStack_15f0;
                      if (((ulong)auStack_15f8 & 1) == 0) {
                        uStack_12d8 = (uint *******)(auStack_15f8 + 1);
                        uStack_12d0 = (undefined1  [8])((ulong)auStack_15f8 >> 1 & 0x7f);
                      }
                      uStack_12c8 = pppppppuStack_15b8;
                      pppppppuStack_12c0 = pppppppuStack_15c0;
                      if (((ulong)auStack_15c8 & 1) == 0) {
                        uStack_12c8 = (uint *******)(auStack_15c8 + 1);
                        pppppppuStack_12c0 = (uint *******)((ulong)auStack_15c8 >> 1 & 0x7f);
                      }
                      pppppppuStack_12b8 = pppppppuStack_1568;
                      pppppppuStack_12b0 = pppppppuStack_1570;
                      if (((ulong)auStack_1578 & 1) == 0) {
                        pppppppuStack_12b8 = (uint *******)(auStack_1578 + 1);
                        pppppppuStack_12b0 = (uint *******)((ulong)auStack_1578 >> 1 & 0x7f);
                      }
                      auStack_12a8._0_8_ = uStack_b18;
                      auStack_12a8._8_8_ = uStack_b20;
                      if (((ulong)_auStack_b28 & 1) == 0) {
                        auStack_12a8._0_8_ = auStack_b28 + 1;
                        auStack_12a8._8_8_ = (uint *******)((ulong)_auStack_b28 >> 1 & 0x7f);
                      }
                      func_0x0470d9a0(auStack_1548,&UNK_01367e08,0x32,0xdddd1,auStack_12e8);
                      if (((ulong)auStack_1578 & 1) == 0) {
                        if (((ulong)auStack_15c8 & 1) != 0) goto LAB_09f57c48;
LAB_09f57c00:
                        if (((ulong)auStack_15f8 & 1) != 0) goto LAB_09f57c62;
LAB_09f57c07:
                        if (((ulong)auStack_1548 & 1) == 0) goto LAB_09f57c84;
LAB_09f57c16:
                        uVar34 = (ulong)pppppppuStack_1540 & 0xffffffff;
                        pppppppuVar19 = pppppppuStack_1538;
                      }
                      else {
                        func_0x0412a280(pppppppuStack_1568,(ulong)auStack_1578 & 0xfffffffffffffffe)
                        ;
                        if (((ulong)auStack_15c8 & 1) == 0) goto LAB_09f57c00;
LAB_09f57c48:
                        func_0x0412a280(pppppppuStack_15b8,(ulong)auStack_15c8 & 0xfffffffffffffffe)
                        ;
                        if (((ulong)auStack_15f8 & 1) == 0) goto LAB_09f57c07;
LAB_09f57c62:
                        func_0x0412a280(pppppppuStack_15e8,(ulong)auStack_15f8 & 0xfffffffffffffffe)
                        ;
                        if (((ulong)auStack_1548 & 1) != 0) goto LAB_09f57c16;
LAB_09f57c84:
                        uVar34 = (ulong)(auStack_1548[0] >> 1);
                        pppppppuVar19 = (uint *******)(auStack_1548 + 1);
                      }
                      func_0x0eede920(0,1,0,0xc,2,&UNK_013c1f41,0x293,&UNK_01322732,uVar34,
                                      pppppppuVar19);
                      if (((ulong)auStack_1548 & 1) != 0) {
                        func_0x0412a280(pppppppuStack_1538,(ulong)auStack_1548 & 0xfffffffffffffffe)
                        ;
                      }
                      if (((ulong)_auStack_b28 & 1) != 0) {
                        func_0x0412a280(uStack_b18,(ulong)_auStack_b28 & 0xfffffffffffffffe);
                      }
                      plVar38 = (long *)(ulong)(iVar18 + 1);
                    }
                    pppppppuVar19 = (uint *******)auStack_12e8;
                    pppppppuVar49 = pppppppuVar49 + 0x22;
                  } while (pppppppuVar49 != pppppppuVar25);
                  if ((int)plVar38 == 0) goto LAB_09f57d8c;
                }
                if ((*pppppppuStack_14f0 == (uint ******)0x0) &&
                   (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                             &UNK_014b8a2c), cVar14 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                if ((*(char *)*pppppppuStack_14f0 == '\0') &&
                   (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                             &UNK_014b8a2c), cVar14 != '\0')) {
                  _DAT_00000000 = 0xdeadc0de;
                }
                pppppppuVar49 = (uint *******)param_2[0x12];
                if (pppppppuVar49 == (uint *******)0x0) {
                  func_0x04890760();
                  goto LAB_09f599ed;
                }
                ppppppuVar21 = param_2[0x24];
                uStack_b18 = (uint *******)0x0;
                _auStack_b28 = (uint *******)pppppppuVar49[1];
                uStack_b20 = (uint *******)pppppppuVar49[2];
                if (uStack_b20 == (uint *******)0x0) {
                  uStack_b20 = (uint *******)0x0;
                }
                else {
                  LOCK();
                  uStack_b20[1] = (uint ******)((long)uStack_b20[1] + 1);
                  UNLOCK();
                  pppppppuVar19 = (uint *******)0x0;
                }
                if ((_auStack_b28 == (uint *******)0x0) ||
                   (uStack_b18 = pppppppuVar49, *(byte *)_auStack_b28 == 0)) goto LAB_09f59bc0;
                auStack_12e8[0] = 0x28;
                auStack_12e8[1] = 0x8d;
                uStack_12e6 = 0xf39;
                uStack_12e4 = 0;
                uStack_12e0 = uVar12;
                uStack_12dc = uVar13;
                uStack_12d8 = (uint *******)auStack_b28;
                uStack_12c8 = (uint *******)auStack_12e8;
                func_0x0c5e4710(ppppppuVar21,auStack_12e8);
                if (uStack_12c8 == (uint *******)auStack_12e8) {
                  lVar26 = 0x20;
LAB_09f58086:
                  (**(code **)((long)*uStack_12c8 + lVar26))();
                }
                else {
                  lVar26 = 0x28;
                  if (uStack_12c8 != (uint *******)0x0) goto LAB_09f58086;
                }
                pppppppuVar19 = uStack_b20;
                _auStack_b28 = (uint *******)0x0;
                uStack_b20 = (uint *******)0x0;
                if (pppppppuVar19 != (uint *******)0x0) {
                  LOCK();
                  pppppppuVar20 = pppppppuVar19 + 1;
                  ppppppuVar21 = *pppppppuVar20;
                  *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                  UNLOCK();
                  if (ppppppuVar21 == (uint ******)0x0) {
                    (*(code *)(*pppppppuVar19)[2])(pppppppuVar19);
                    func_0x0412c2d0(pppppppuVar19);
                  }
                  pppppppuVar19 = uStack_b20;
                  uStack_b18 = (uint *******)0x0;
                  if (uStack_b20 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20 = uStack_b20 + 1;
                    ppppppuVar21 = *pppppppuVar20;
                    *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                    UNLOCK();
                    if (ppppppuVar21 == (uint ******)0x0) {
                      (*(code *)(*uStack_b20)[2])(uStack_b20);
                      func_0x0412c2d0(pppppppuVar19);
                    }
                  }
                }
                if (pppppppuStack_1610 == (uint *******)0x0) {
                  pppppppuStack_14c0 = (uint *******)CONCAT44(pppppppuStack_14c0._4_4_,6);
                  bStack_14b8 = 0;
                  uStack_14b7 = 0;
                  uVar34 = 6;
                }
                else {
                  (*(code *)(*pppppppuStack_1610)[0x16])(&pppppppuStack_14c0);
                  uVar34 = (ulong)pppppppuStack_14c0 & 0xffffffff;
                }
                (**(code **)(**(long **)(param_3 + 0x80) + 0x398))
                          (*(long **)(param_3 + 0x80),uVar34,&bStack_14b8);
                pppppppuVar19 = pppppppuStack_1610;
                if ((int)pppppppuStack_14c0 == 0) {
                  param_2[0x1a] = (uint ******)pppppppuStack_1610;
                  if (*(long *)(param_3 + 0xa8) != 0) {
                    func_0x09f5b400(alStack_578,param_3 + 0xa0);
                    (*(code *)(*pppppppuVar19)[0x20])(pppppppuVar19,alStack_578);
                    if (plStack_558 == alStack_578) {
                      lVar26 = 0x20;
                    }
                    else {
                      lVar26 = 0x28;
                      if (plStack_558 == (long *)0x0) goto LAB_09f58411;
                    }
                    (**(code **)(*plStack_558 + lVar26))();
                  }
LAB_09f58411:
                  if (*(long *)(param_3 + 0xb4) != 0) {
                    ppppppuVar21 = param_2[0x1a];
                    apppppppuStack_5d8[0] = param_2;
                    func_0x09f5b400(auStack_5c8,param_3 + 0xac);
                    if (((ulong)param_2[0x43] & 1) == 0) {
                      ppppppuStack_588 = pppppppuStack_1600[2];
                      uStack_598 = *(uint *)pppppppuStack_1600;
                      uStack_594 = *(undefined4 *)((long)pppppppuStack_1600 + 4);
                      uStack_590 = *(undefined4 *)(pppppppuStack_1600 + 1);
                      uStack_58c = *(undefined4 *)((long)pppppppuStack_1600 + 0xc);
                    }
                    else {
                      func_0x0412e5e0(&uStack_598,param_2[0x45],param_2[0x44]);
                    }
                    func_0x09f5b450(alStack_608,apppppppuStack_5d8);
                    (*(code *)(*ppppppuVar21)[0x1f])(ppppppuVar21,alStack_608);
                    if (plStack_5e8 == alStack_608) {
                      lVar26 = 0x20;
LAB_09f584d6:
                      (**(code **)(*plStack_5e8 + lVar26))();
                    }
                    else {
                      lVar26 = 0x28;
                      if (plStack_5e8 != (long *)0x0) goto LAB_09f584d6;
                    }
                    func_0x09f5b530(apppppppuStack_5d8);
                  }
                  ppppppuStack_1480 = (uint ******)((ulong)ppppppuStack_1480 & 0xffffffffffffff00);
                  cStack_1468 = '\0';
                  (*(code *)(*param_2[0x12])[2])(auStack_1548);
                  auVar42 = auStack_1548;
                  if (auStack_1548 == (undefined1  [8])0x0) {
                    (**(code **)(**(long **)(param_3 + 0x80) + 0x960))
                              (*(long **)(param_3 + 0x80),&UNK_01a46370,0,0);
                    (*(code *)(*param_2[0x69])[7])(uStack_14f8);
                  }
                  else {
                    func_0x0d87c4c0(auStack_b28,auStack_1548);
                    auStack_12e8[0] = (byte)_auStack_b28;
                    auStack_12e8[1] = (undefined1)((ulong)_auStack_b28 >> 8);
                    uStack_12e6 = (undefined2)((ulong)_auStack_b28 >> 0x10);
                    uStack_12e4 = uStack_b24;
                    uStack_12e0 = (uint)uStack_b20;
                    uStack_12dc = uStack_b20._4_4_;
                    uStack_12d8 = (uint *******)CONCAT44(uStack_12d8._4_4_,(undefined4)uStack_b18);
                    uStack_12d0 = (undefined1  [8])CONCAT71(uStack_12d0._1_7_,1);
                    func_0x0d87c880(&ppppppuStack_1480,auStack_12e8);
                    func_0x0d87ba30(auStack_12e8);
                  }
                  pppppppuVar19 = pppppppuStack_1540;
                  if (pppppppuStack_1540 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20 = pppppppuStack_1540 + 1;
                    ppppppuVar21 = *pppppppuVar20;
                    *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
                    UNLOCK();
                    if (ppppppuVar21 == (uint ******)0x0) {
                      (*(code *)(*pppppppuStack_1540)[2])(pppppppuStack_1540);
                      func_0x0412c2d0(pppppppuVar19);
                    }
                  }
                  if (auVar42 == (undefined1  [8])0x0) goto LAB_09f597a2;
                  if (*(byte *)(param_2 + 0x11) == 0) {
                    puVar6 = param_3 + 0x96;
                    lVar26 = func_0x09f5b580(puVar6);
                    if (*(char *)(lVar26 + 0x18) == '\0') {
                      uVar29 = func_0x09f5b580(puVar6);
                      iVar18 = func_0x0d213120(uVar29);
                      if (iVar18 != 0) {
                        uVar29 = func_0x09f5b580(puVar6);
                        iVar18 = func_0x0d213120(uVar29);
                        if (iVar18 != 2) {
                          uVar29 = func_0x09f5b580(puVar6);
                          iVar18 = func_0x0d213120(uVar29);
                          if (iVar18 != 5) goto LAB_09f58661;
                        }
                      }
                    }
                    *(undefined2 *)(param_3 + 0xc9) = 0x100;
                  }
LAB_09f58661:
                  if (*(char *)((long)param_3 + 0x325) == '\x01') {
                    uVar16 = *(undefined1 *)(param_3 + 0xc9);
                  }
                  else {
                    uVar29 = func_0x09f5b840(param_3 + 0x96);
                    uVar16 = func_0x09f5b610(uVar29);
                  }
                  if (*(char *)((long)param_3 + 0x326) == '\0') {
                    func_0x09f493c0(auStack_12e8);
                    if ((uStack_12d8 == (uint *******)0x0) || (*(byte *)uStack_12d8 != 1)) {
                      uVar17 = 0;
                    }
                    else {
                      uVar29 = func_0x09f49470(auStack_12e8);
                      uVar17 = func_0x09b9c480(uVar29,0x36);
                    }
                    func_0x06d03310(auStack_12e8);
                  }
                  else if (*(char *)((long)param_3 + 0x326) == '\x02') {
                    uVar17 = 1;
                  }
                  else {
                    uVar17 = 0;
                  }
                  func_0x09f90a60(auStack_12e8);
                  func_0x09f5b8a0(param_2 + 0x4c,auStack_12e8);
                  func_0x04a21d70(auStack_12e8);
                  ppppppuVar21 = param_2[0x4d];
                  uStack_d48 = *(uint *)(param_2 + 0x4c);
                  uStack_d44 = *(undefined4 *)((long)param_2 + 0x264);
                  uStack_d40 = *(undefined4 *)(param_2 + 0x4d);
                  uStack_d3c = *(undefined4 *)((long)param_2 + 0x26c);
                  if (ppppppuVar21 == (uint ******)0x0) {
                    func_0x0ca11570(auStack_cd0,&uStack_d48);
                  }
                  else {
                    LOCK();
                    ppppppuVar21[2] = (uint *****)((long)ppppppuVar21[2] + 1);
                    UNLOCK();
                    func_0x0ca11570(auStack_cd0,&uStack_d48);
                    func_0x0412c2d0(ppppppuVar21);
                  }
                  pppppppuStack_1600 = (uint *******)param_2[0x4c];
                  pppppppuVar20 = (uint *******)param_2[0x4d];
                  if (pppppppuVar20 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20[2] = (uint ******)((long)pppppppuVar20[2] + 1);
                    UNLOCK();
                    LOCK();
                    pppppppuVar20[2] = (uint ******)((long)pppppppuVar20[2] + 1);
                    UNLOCK();
                    func_0x0412c2d0(pppppppuVar20);
                  }
                  pppppppuStack_1318 = pppppppuStack_1600;
                  pppppppuVar19 = (uint *******)auStack_1548;
                  pppppppuStack_1310 = pppppppuVar20;
                  if (param_2[0x12] == (uint ******)0x0) goto LAB_09f59a82;
                  ppppppuVar21 = param_2[0x15];
                  pppppppuStack_1590 = pppppppuVar20;
                  func_0x09f5b900(&uStack_1358);
                  func_0x0d87cac0(auStack_12e8,&ppppppuStack_1480);
                  pppppppuStack_12b8 = pppppppuStack_1610;
                  pppppppuStack_12c0 = pppppppuStack_1618;
                  uStack_12d0._0_2_ = CONCAT11(uVar17,uVar16);
                  auStack_1548 = (undefined1  [8])pppppppuStack_1600;
                  if (pppppppuVar20 != (uint *******)0x0) {
                    LOCK();
                    pppppppuVar20[2] = (uint ******)((long)pppppppuVar20[2] + 1);
                    UNLOCK();
                  }
                  pppppppuStack_1618 = (uint *******)0x0;
                  pppppppuStack_1610 = (uint *******)0x0;
                  pppppppuVar19 = (uint *******)&pppppppuStack_12b0;
                  pppppppuStack_1540 = pppppppuVar20;
                  uStack_12c8 = (uint *******)auStack_1548;
                  func_0x09f5b9a0(pppppppuVar19,param_2[0x5b]);
                  auVar11._8_8_ = ppppppuStack_15f0;
                  auVar11._0_8_ = auStack_15f8;
                  uStack_1298 = *(char **)(param_3 + 0x96);
                  lStack_1290 = *(long *)(param_3 + 0x98);
                  if (lStack_1290 != 0) {
                    LOCK();
                    *(long *)(lStack_1290 + 8) = *(long *)(lStack_1290 + 8) + 1;
                    UNLOCK();
                  }
                  uStack_1288 = *(undefined8 *)(param_3 + 0x9a);
                  if ((uStack_1298 == (char *)0x0) ||
                     (_auStack_15f8 = auVar11, *uStack_1298 == '\0')) goto LAB_09f59a87;
                  func_0x09f5ba30(auStack_1280,param_2[0x12][0x17]);
                  puStack_1278 = &UNK_09f855e0;
                  puStack_1270 = auStack_15f8;
                  auStack_1578 = (undefined1  [8])((ulong)auStack_1578 & 0xffffffffffff0000);
                  puStack_1268 = &UNK_09f85ab0;
                  puStack_1260 = auStack_1578;
                  _auStack_b28 = (uint *******)((ulong)_auStack_b28 & 0xffffffffffff0000);
                  uStack_b20 = (uint *******)CONCAT44(uStack_1354,uStack_1358);
                  uStack_b18 = (uint *******)CONCAT44(uStack_134c,uStack_1350);
                  if (CONCAT44(uStack_134c,uStack_1350) != 0) {
                    LOCK();
                    plVar38 = (long *)(CONCAT44(uStack_134c,uStack_1350) + 8);
                    *plVar38 = *plVar38 + 1;
                    UNLOCK();
                  }
                  uStack_b10 = uStack_1348;
                  puStack_1258 = &UNK_09f85b20;
                  puStack_1248 = &UNK_09f85ea0;
                  puStack_1240 = auStack_15c8;
                  auStack_15f8 = (undefined1  [8])ppppppuVar21;
                  auStack_15c8 = (undefined1  [8])param_2;
                  pppppppuStack_1250 = (uint *******)auStack_b28;
                  (**(code **)(param_3 + 0x12a))
                            (&plStack_1588,*(undefined8 *)(param_3 + 300),auStack_12e8);
                  func_0x09f5ba80(auStack_12e8);
                  func_0x09f5bc10(auStack_b28);
                  if (pppppppuStack_1540 != (uint *******)0x0) {
                    func_0x0412c2d0();
                  }
                  func_0x09f5bd30(auStack_14a0,plStack_1588);
                  uVar29 = func_0x09f4fd00(auStack_14a0);
                  func_0x0c98aae0(auStack_12e8,uVar29);
                  if (CONCAT44(uStack_12e4,
                               CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))) != 0
                     ) {
                    func_0x09f5bdd0(auStack_b28,auStack_14a0);
                    pppppppuVar19 = _auStack_b28;
                    _auStack_b28 = (uint *******)0x0;
                    func_0x09f5bec0(auStack_b28);
                    uVar29 = CONCAT44(uStack_12e4,
                                      CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0])
                                              ));
                    pppppppuStack_14e0 = pppppppuVar19;
                    func_0x0c994b90(uVar29);
                    func_0x0d2b8c50(uVar29,&pppppppuStack_14e0);
                    pppppppuVar19 = pppppppuStack_14e0;
                    pppppppuStack_14e0 = (uint *******)0x0;
                    if (pppppppuVar19 != (uint *******)0x0) {
                      (*(code *)(*pppppppuVar19)[1])();
                    }
                  }
                  func_0x0495e910(auStack_12e8);
                  plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                  plVar38 = (long *)(**(code **)(*plVar38 + 0xb0))(plVar38);
                  func_0x0c944c10(auStack_12e8,*(undefined8 *)(param_3 + 0x12));
                  (**(code **)(*plVar38 + 0x20))(plVar38,auStack_12e8);
                  if ((uStack_12e0 & 1) != 0) {
                    func_0x0412a280(uStack_12d0,
                                    CONCAT44(uStack_12dc,uStack_12e0) & 0xfffffffffffffffe);
                  }
                  plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                  (**(code **)(*plVar38 + 0x110))
                            (plVar38,*(undefined1 *)(*(long *)(param_3 + 0x12) + 0x95));
                  puVar24 = *(undefined8 **)(param_3 + 0xc2);
                  if (*(char *)(puVar24 + 8) == '\0') {
                    plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                    puVar24 = (undefined8 *)(**(code **)(*plVar38 + 0x988))(plVar38);
                  }
                  auStack_1548 = (undefined1  [8])*puVar24;
                  pppppppuStack_1540 = (uint *******)puVar24[1];
                  pppppppuStack_1538 = (uint *******)puVar24[2];
                  uStack_1530 = puVar24[3];
                  uStack_1528 = *(undefined4 *)(puVar24 + 4);
                  uStack_1524 = *(undefined4 *)((long)puVar24 + 0x24);
                  uStack_1520 = *(undefined4 *)(puVar24 + 5);
                  uStack_151c = *(undefined4 *)((long)puVar24 + 0x2c);
                  uStack_1518 = *(undefined4 *)(puVar24 + 6);
                  uStack_1514 = *(undefined4 *)((long)puVar24 + 0x34);
                  uStack_1510 = *(undefined4 *)(puVar24 + 7);
                  uStack_150c = *(undefined4 *)((long)puVar24 + 0x3c);
                  plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                  (**(code **)(*plVar38 + 0x990))(plVar38,auStack_1548);
                  ppppppuVar21 = param_2[0x12];
                  uVar29 = func_0x09f5bf60(auStack_14a0);
                  func_0x0b3b78d0(ppppppuVar21,uVar29,*(undefined8 *)(param_3 + 0xc6));
                  plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                  lVar26 = (**(code **)(*plVar38 + 0x568))(plVar38);
                  if (*(int *)(lVar26 + 0x398) == 1) {
                    (**(code **)(param_3 + 0x132))(auStack_12e8,*(undefined8 *)(param_3 + 0x134));
                    ppppppuVar27 = (uint ******)
                                   CONCAT44(uStack_12e4,
                                            CONCAT22(uStack_12e6,
                                                     CONCAT11(auStack_12e8[1],auStack_12e8[0])));
                    auStack_12e8[0] = 0;
                    auStack_12e8[1] = 0;
                    uStack_12e6 = 0;
                    uStack_12e4 = 0;
                    ppppppuVar21 = param_2[0x51];
                    param_2[0x51] = ppppppuVar27;
                    if (ppppppuVar21 != (uint ******)0x0) {
                      (*(code *)(*ppppppuVar21)[1])();
                      plVar38 = (long *)CONCAT44(uStack_12e4,
                                                 CONCAT22(uStack_12e6,
                                                          CONCAT11(auStack_12e8[1],auStack_12e8[0]))
                                                );
                      auStack_12e8[0] = 0;
                      auStack_12e8[1] = 0;
                      uStack_12e6 = 0;
                      uStack_12e4 = 0;
                      if (plVar38 != (long *)0x0) {
                        (**(code **)(*plVar38 + 8))();
                      }
                    }
                  }
                  uStack_1448 = 0;
                  uStack_1440 = 0;
                  func_0x09f5bff0(auStack_b28,*(long *)(param_3 + 0xc4) + 0x110);
                  if (*(char *)(*(long *)(param_3 + 0xc4) + 0x178) == '\x01') {
                    plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                    lVar32 = (**(code **)(*plVar38 + 0x568))(plVar38);
                    lVar26 = *(long *)(param_3 + 0xc4);
                    *(bool *)(lVar26 + 0x179) = *(int *)(lVar32 + 0x398) == 1;
                    func_0x09f5c0c0(lVar26 + 0x180,*(long *)(param_3 + 0x12) + 0x1e8);
                    if (*(long *)(param_3 + 0xc4) + 0x218 != *(long *)(param_3 + 0x12) + 0x440) {
                      func_0x048f99a0();
                    }
                    func_0x09f5c2d0(auStack_12e8);
                    func_0x09f5c3b0(param_2 + 0x32,auStack_12e8);
                    func_0x09f52cf0(auStack_12e8);
                    lVar26 = (**(code **)(*plStack_1588 + 0x8d8))();
                    func_0x09f5c400(auStack_12e8,*(long *)(lVar26 + 0x98) + 8);
                    func_0x09f5c4b0(&uStack_1448,auStack_12e8);
                    func_0x08a01b70(auStack_12e8);
                    pppppppuVar19 =
                         (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                    if (pppppppuVar19 == (uint *******)0x0) goto LAB_09f59a91;
                    while( true ) {
                      pppppppuVar19[0xe] = (uint ******)0x0;
                      pppppppuVar19[0xf] = (uint ******)0x0;
                      pppppppuVar19[0xc] = (uint ******)0x0;
                      pppppppuVar19[0xd] = (uint ******)0x0;
                      pppppppuVar19[10] = (uint ******)0x0;
                      pppppppuVar19[0xb] = (uint ******)0x0;
                      pppppppuVar19[8] = (uint ******)0x0;
                      pppppppuVar19[9] = (uint ******)0x0;
                      pppppppuVar19[6] = (uint ******)0x0;
                      pppppppuVar19[7] = (uint ******)0x0;
                      pppppppuVar19[4] = (uint ******)0x0;
                      pppppppuVar19[5] = (uint ******)0x0;
                      pppppppuVar19[2] = (uint ******)0x0;
                      pppppppuVar19[3] = (uint ******)0x0;
                      *pppppppuVar19 = (uint ******)0x0;
                      pppppppuVar19[1] = (uint ******)0x0;
                      auStack_12e8[0] = (byte)pppppppuVar19;
                      auStack_12e8[1] = (undefined1)((ulong)pppppppuVar19 >> 8);
                      uStack_12e6 = (undefined2)((ulong)pppppppuVar19 >> 0x10);
                      uStack_12e4 = (uint)((ulong)pppppppuVar19 >> 0x20);
                      func_0x09f5c510(param_2 + 0x67,auStack_12e8);
                      func_0x09f5c620(auStack_12e8);
                      plVar38 = plStack_1588;
                      pppppppuStack_1580 = *(uint ********)(param_3 + 0xc4);
                      func_0x09f5c9b0(auStack_12e8,param_2[0x18]);
                      ppppppuVar21 = param_2[0x32];
                      pppppuVar22 = param_2[0x12][0x17];
                      pppppppuStack_14e8 = *(uint ********)(param_3 + 0x80);
                      func_0x09f5ca40(auStack_15f8,param_2 + 0x67);
                      func_0x09f5cad0(&plStack_1488,param_2[0x12]);
                      func_0x09f5cb40(auStack_15c8,param_2[0x6a]);
                      func_0x09f5c650(auStack_1578,pppppppuStack_1580,plVar38,&uStack_1448,
                                      auStack_12e8,pppppuVar22,pppppppuStack_14e8,pppppppuStack_1600
                                      ,pppppppuStack_1590,param_2,ppppppuVar21,auStack_15f8,
                                      &plStack_1488,auStack_15c8);
                      ppppppuVar21 = param_2[0x33];
                      param_2[0x33] = (uint ******)auStack_1578;
                      if (ppppppuVar21 != (uint ******)0x0) {
                        (*(code *)(*ppppppuVar21)[1])();
                      }
                      func_0x090b3d50(auStack_15c8);
                      plVar38 = plStack_1488;
                      plStack_1488 = (long *)0x0;
                      if (plVar38 != (long *)0x0) {
                        (**(code **)(*plVar38 + 0x18))();
                      }
                      func_0x09f5cbd0(auStack_15f8);
                      func_0x09978a40(auStack_12e8);
                      uVar29 = func_0x09f5af70(pppppppuStack_14f0);
                      pppppppuVar19 = param_2;
                      if (param_2[0x33] != (uint ******)0x0) break;
LAB_09f59a8c:
                      func_0x04890760();
LAB_09f59a91:
                      func_0x0eec74c0(0x80,0);
                    }
                    func_0x09f5b000(uVar29);
                  }
                  else {
                    func_0x0eede920(0,1,0,0xc,2,&UNK_01483143,0x370,&UNK_01295ab2);
                  }
                  func_0x0b3b7b40(auStack_12e8,param_2[0x12]);
                  uVar29 = func_0x04a918e0(auStack_12e8);
                  plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                  (**(code **)(*plVar38 + 0x9e8))(auStack_ce8,plVar38);
                  func_0x0d356930(uVar29,auStack_ce8);
                  func_0x05d644e0(auStack_ce8);
                  func_0x04985d60(auStack_12e8);
                  pppppppuStack_1568 = (uint *******)0x0;
                  pppppppuStack_1560 = (uint *******)0x0;
                  auStack_1578 = (undefined1  [8])0x0;
                  pppppppuStack_1570 = (uint *******)0x0;
                  uStack_1558 = 0x3f800000;
                  pppppuVar22 = param_2[0x12][7];
                  puStack_d30 = auStack_1578;
                  uStack_d28 = CONCAT31(uStack_d28._1_3_,1);
                  (*(code *)(*pppppuVar22)[5])
                            (pppppuVar22,auStack_14a0,*(undefined8 *)(param_3 + 0xc6),
                             param_2[0x12][5],*(long *)(param_3 + 0x12) + 0x1e8,param_2[0x33],
                             puStack_d30,CONCAT44(uStack_d24,uStack_d28));
                  uVar29 = *(undefined8 *)(param_3 + 0xc6);
                  lVar26 = *(long *)(param_3 + 0x12);
                  pppppuVar22 = param_2[0x12][5];
                  uVar33 = func_0x09f4fd00(auStack_14a0);
                  uVar33 = func_0x0c9a3240(uVar33);
                  func_0x09f5cc70(auStack_d00,uVar33);
                  plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                  uVar33 = (**(code **)(*plVar38 + 0x270))(plVar38);
                  func_0x0ca11940(&pppppppuStack_1318,uVar29,lVar26 + 0x1e8,pppppuVar22,auStack_d00,
                                  uVar33);
                  func_0x049858d0(auStack_d00);
                  if (*(byte *)(param_2 + 0x11) == 0) {
                    func_0x06cfd9a0(auStack_12e8,1,0x12,0,0,0);
                    lVar26 = func_0x09f5b580(param_3 + 0x96);
                    func_0x09f5cd00(auStack_15f8,lVar26 + 0x340);
                    func_0x06cfd9a0(auStack_15c8,1,0x1a,0x34,3,0);
                    cVar14 = func_0x06cfe590(auStack_15c8,auStack_12e8);
                    if (cVar14 == '\0') {
                      if ((bStack_15b0 & 1) != 0) {
                        auVar42 = (undefined1  [8])CONCAT71(uStack_15af,bStack_15b0);
LAB_09f592f7:
                        func_0x0412a280(pppppppuStack_15a0,(ulong)auVar42 & 0xfffffffffffffffe);
                      }
                    }
                    else {
                      cVar14 = func_0x06cfe550(auStack_15f8,auStack_12e8);
                      if ((bStack_15b0 & 1) != 0) {
                        func_0x0412a280(pppppppuStack_15a0,
                                        CONCAT71(uStack_15af,bStack_15b0) & 0xfffffffffffffffe);
                      }
                      if (cVar14 != '\0') {
                        lVar26 = *(long *)(param_3 + 0x12);
                        bVar15 = func_0x04fa7a10(lVar26 + 0x1e8,0xf5a2840);
                        plVar38 = (long *)func_0x09f4fd00(auStack_14a0);
                        plVar38 = (long *)(**(code **)(*plVar38 + 0x270))(plVar38);
                        if ((*(char *)(lVar26 + 0x200) == '\0') &&
                           ((*(byte *)(lVar26 + 0x1ee) & 1) != 0)) {
                          func_0x0ee34300(auStack_15c8,lVar26 + 0x1e8);
                        }
                        else {
                          auStack_15c8 = (undefined1  [8])0x0;
                          pppppppuStack_15c0 = (uint *******)0x0;
                          pppppppuStack_15b8 = (uint *******)0x0;
                        }
                        (**(code **)(*plVar38 + 0x4f8))
                                  (param_3[200],plVar38,bVar15 ^ 1,auStack_15c8,
                                   *(undefined8 *)(param_3 + 0xc6),&uStack_15e0,
                                   **(undefined8 **)(param_3 + 0x12));
                        auVar42 = auStack_15c8;
                        pppppppuStack_15a0 = pppppppuStack_15b8;
                        if (((ulong)auStack_15c8 & 1) != 0) goto LAB_09f592f7;
                      }
                    }
                    if ((uStack_15e0 & 1) != 0) {
                      func_0x0412a280(uStack_15d0,
                                      CONCAT44(uStack_15dc,uStack_15e0) & 0xfffffffffffffffe);
                    }
                    if (((ulong)uStack_12d0 & 1) != 0) {
                      func_0x0412a280(pppppppuStack_12c0,(ulong)uStack_12d0 & 0xfffffffffffffffe);
                    }
                  }
                  plVar38 = plStack_1588;
                  plStack_1588 = (long *)0x0;
                  auStack_12e8[0] = (byte)plVar38;
                  auStack_12e8[1] = (undefined1)((ulong)plVar38 >> 8);
                  uStack_12e6 = (undefined2)((ulong)plVar38 >> 0x10);
                  uStack_12e4 = (uint)((ulong)plVar38 >> 0x20);
                  func_0x09f5d090(&uStack_12e0,*(undefined8 *)(param_3 + 0xc6));
                  func_0x07f20760(auStack_12a8,*(undefined8 *)(param_3 + 0x12));
                  uStack_e50 = *(undefined8 *)(param_3 + 0x84);
                  puVar6 = *(undefined4 **)(param_3 + 0x82);
                  uStack_e48 = *puVar6;
                  uStack_e44 = puVar6[1];
                  uStack_e40 = puVar6[2];
                  uStack_e3c = puVar6[3];
                  if (*(long *)(puVar6 + 2) != 0) {
                    LOCK();
                    plVar38 = (long *)(*(long *)(puVar6 + 2) + 8);
                    *plVar38 = *plVar38 + 1;
                    UNLOCK();
                  }
                  uStack_e38 = *(undefined8 *)(puVar6 + 4);
                  func_0x09f5d0e0(auStack_e30,auStack_b28);
                  pppppppuVar19 = pppppppuStack_1590;
                  uStack_de0 = *(undefined8 *)(param_3 + 0x7a);
                  uStack_dd8 = (undefined7)*(undefined8 *)(param_3 + 0x7c);
                  uStack_dd1._1_3_ = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x1f7) >> 8)
                  ;
                  uStack_dd1._0_1_ = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x7c) >> 0x38);
                  ppppppuStack_dc8 = (uint ******)((ulong)ppppppuStack_dc8 & 0xffffffffffffff00);
                  uStack_db0 = cStack_1468 == '\x01';
                  if ((bool)uStack_db0) {
                    ppppppuStack_dc8 = ppppppuStack_1480;
                    uStack_dc0 = uStack_1478;
                    uStack_db8 = uStack_1470;
                    cStack_1468 = '\0';
                  }
                  uStack_da8 = uStack_1448;
                  uStack_da0 = uStack_1440;
                  uStack_1448 = 0;
                  uStack_1440 = 0;
                  uStack_d98 = *(undefined1 *)(param_3 + 0xc0);
                  puVar24 = (undefined8 *)(param_3 + 0x13c);
                  uStack_d88 = 0;
                  uStack_d80 = 0;
                  if (*(undefined8 **)(param_3 + 0x13c) == (undefined8 *)0x0) {
                    uStack_d88 = 0;
                  }
                  else {
                    (*(code *)**(undefined8 **)(param_3 + 0x13c))(puVar24,&uStack_d88);
                    uStack_d88 = *puVar24;
                  }
                  *puVar24 = 0;
                  func_0x09f5cd40(auStack_15f8,auStack_12e8);
                  func_0x09f5d290(auStack_12e8);
                  if ((*(byte *)(param_3 + 6) & 1) == 0) {
                    uStack_12d8 = *(uint ********)(param_3 + 10);
                    uVar29 = *(undefined8 *)(param_3 + 6);
                    auStack_12e8[0] = (byte)uVar29;
                    auStack_12e8[1] = (undefined1)((ulong)uVar29 >> 8);
                    uStack_12e6 = (undefined2)((ulong)uVar29 >> 0x10);
                    uStack_12e4 = (uint)((ulong)uVar29 >> 0x20);
                    uStack_12e0 = (uint)*(undefined8 *)(param_3 + 8);
                    uStack_12dc = (uint)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
                    auStack_b98 = _auStack_15f8;
                  }
                  else {
                    func_0x0412e5e0(auStack_12e8,*(undefined8 *)(param_3 + 10),
                                    *(undefined8 *)(param_3 + 8));
                    auStack_b98 = _auStack_15f8;
                  }
                  uStack_12c8 = pppppppuStack_1570;
                  uStack_12d0 = auStack_1578;
                  ppppppuStack_15f0 = auStack_b98._8_8_;
                  auStack_1578 = (undefined1  [8])0x0;
                  pppppppuStack_1570 = (uint *******)0x0;
                  pppppppuStack_12c0 = pppppppuStack_1568;
                  pppppppuStack_12b8 = pppppppuStack_1560;
                  pppppppuStack_12b0 = (uint *******)CONCAT44(pppppppuStack_12b0._4_4_,uStack_1558);
                  if (pppppppuStack_1560 != (uint *******)0x0) {
                    pppppppuVar20 = (uint *******)pppppppuStack_1568[1];
                    if (((ulong)uStack_12c8 & (long)uStack_12c8 - 1U) == 0) {
                      pppppppuVar20 =
                           (uint *******)((ulong)pppppppuVar20 & (ulong)((long)uStack_12c8 - 1U));
                    }
                    else if (uStack_12c8 <= pppppppuVar20) {
                      if (((ulong)pppppppuVar20 | (ulong)uStack_12c8) >> 0x20 == 0) {
                        pppppppuVar20 =
                             (uint *******)
                             (((ulong)pppppppuVar20 & 0xffffffff) %
                             ((ulong)uStack_12c8 & 0xffffffff));
                      }
                      else {
                        pppppppuVar20 = (uint *******)((ulong)pppppppuVar20 % (ulong)uStack_12c8);
                      }
                    }
                    *(uint *********)((long)uStack_12d0 + pppppppuVar20 * 8) = &pppppppuStack_12c0;
                    pppppppuStack_1568 = (uint *******)0x0;
                    pppppppuStack_1560 = (uint *******)0x0;
                  }
                  if (ppppppuStack_15f0 != (uint ******)0x0) {
                    LOCK();
                    *(long *)((long)ppppppuStack_15f0 + 8) =
                         *(long *)((long)ppppppuStack_15f0 + 8) + 1;
                    UNLOCK();
                  }
                  _auStack_15f8 = auStack_b98;
                  auStack_12a8 = auStack_b98;
                  func_0x09f5d500(auStack_15c8,auStack_12e8);
                  func_0x09f5d610(auStack_12e8);
                  pppppppuStack_b58 = (uint *******)auStack_15c8;
                  auStack_12e8[0] = (byte)param_2;
                  auStack_12e8[1] = (undefined1)((ulong)param_2 >> 8);
                  uStack_12e6 = (undefined2)((ulong)param_2 >> 0x10);
                  auStack_15c8 = (undefined1  [8])0x0;
                  auStack_15f8 = (undefined1  [8])0x0;
                  ppppppuStack_15f0 = (uint ******)0x0;
                  ppppppuVar21 = param_2[0x69];
                  puStack_b68 = &UNK_0f1f8418;
                  uStack_12e0 = 0;
                  uStack_12dc = 0;
                  puStack_ba8 = &UNK_0f1f8430;
                  uStack_1368 = *(uint *)(param_2 + 0x13);
                  uStack_1364 = *(undefined4 *)((long)param_2 + 0x9c);
                  uStack_1360 = *(undefined4 *)(param_2 + 0x14);
                  uStack_135c = *(undefined4 *)((long)param_2 + 0xa4);
                  if (param_2[0x14] != (uint ******)0x0) {
                    LOCK();
                    ppppppuVar27 = param_2[0x14] + 1;
                    *ppppppuVar27 = (uint *****)((long)*ppppppuVar27 + 1);
                    UNLOCK();
                  }
                  uStack_12e4 = uVar13;
                  pppppppuStack_ba0 = param_2;
                  pppppppuStack_b60 = param_2;
                  func_0x09f50eb0(uStack_14f8,ppppppuVar21,&puStack_b68,&puStack_ba8,&uStack_1368);
                  func_0x04902db0(&uStack_1368);
                  if (puStack_ba8 != (undefined *)0x0) {
                    (**(code **)(puStack_ba8 + 8))(&puStack_ba8);
                  }
                  if (puStack_b68 != (undefined *)0x0) {
                    (**(code **)(puStack_b68 + 8))(&puStack_b68);
                  }
                  func_0x09f5d6f0(auStack_12e8);
                  func_0x09f5d720(auStack_15c8);
                  func_0x09f5d750(0);
                  func_0x09f5d780(auStack_1578);
                  func_0x09f5d1b0(auStack_b28);
                  func_0x08a01b70(&uStack_1448);
                  func_0x09f5d820(auStack_14a0);
                  plVar38 = plStack_1588;
                  plStack_1588 = (long *)0x0;
                  if (plVar38 != (long *)0x0) {
                    (**(code **)(*plVar38 + 8))();
                  }
                  func_0x05f43c40(&uStack_1358);
                  if (pppppppuVar19 != (uint *******)0x0) {
                    func_0x0412c2d0(pppppppuVar19);
                  }
                  func_0x0ca115f0(auStack_cd0);
LAB_09f597a2:
                  if (cStack_1468 == '\x01') {
                    cStack_1468 = '\0';
                    auStack_12e8[0] = (byte)uStack_1470;
                    auStack_12e8[1] = (undefined1)((uint)uStack_1470 >> 8);
                    uStack_12e6 = (undefined2)((uint)uStack_1470 >> 0x10);
                    func_0x0d87c640(ppppppuStack_1480 + 5,auStack_12e8);
                  }
                }
                else {
                  lVar26 = (*(code *)(*pppppppuStack_1610)[0x11])();
                  if ((lVar26 != 0) && (*(char *)(lVar26 + 0x10) == '\x01')) {
                    plVar38 = (long *)func_0x09f5b2e0(*(undefined8 *)(param_3 + 0x82));
                    (**(code **)(*plVar38 + 0x138))(auStack_b28,plVar38);
                    plVar38 = (long *)func_0x09f5b370(auStack_b28);
                    (**(code **)(*plVar38 + 0x10))(auStack_12e8,plVar38,lVar26);
                    func_0x048dc960(auStack_b28);
                    bVar15 = auStack_12e8[0] & 1;
                    if (bVar15 == 0) {
                      uVar34 = (ulong)(auStack_12e8[0] >> 1);
                    }
                    else {
                      uVar34 = CONCAT44(uStack_12dc,uStack_12e0);
                    }
                    if (uVar34 != 0) {
                      plVar38 = *(long **)(param_3 + 0x80);
                      func_0x0ee32b90(auStack_b28,lVar26);
                      func_0x04160690(auStack_1548,&UNK_014b8982);
                      (**(code **)(*plVar38 + 0x4e0))(plVar38,auStack_b28,auStack_12e8,auStack_1548)
                      ;
                      if (((ulong)auStack_1548 & 1) != 0) {
                        func_0x0412a280(pppppppuStack_1538,(ulong)auStack_1548 & 0xfffffffffffffffe)
                        ;
                      }
                      if (((ulong)_auStack_b28 & 1) != 0) {
                        func_0x0412a280(uStack_b18,(ulong)_auStack_b28 & 0xfffffffffffffffe);
                      }
                      bVar15 = auStack_12e8[0] & 1;
                    }
                    if (bVar15 != 0) {
                      func_0x0412a280(uStack_12d8,
                                      CONCAT44(uStack_12e4,
                                               CONCAT22(uStack_12e6,
                                                        CONCAT11(auStack_12e8[1],auStack_12e8[0])))
                                      & 0xfffffffffffffffe);
                    }
                  }
                  if (pppppppuStack_1610 != (uint *******)0x0) {
                    (*(code *)(*pppppppuStack_1610)[0x12])();
                    cVar14 = (*(code *)(*pppppppuStack_1610)[0x14])();
                    if (cVar14 == '\0') {
                      do {
                        auStack_12e8[0] = 0x80;
                        auStack_12e8[1] = 0xf0;
                        uStack_12e6 = 0x2fa;
                        uStack_12e4 = 0;
                        func_0x04136c40(auStack_12e8);
                        cVar14 = (*(code *)(*pppppppuStack_1610)[0x14])();
                      } while (cVar14 == '\0');
                    }
                    pppppppuVar19 = pppppppuStack_1618;
                    pppppppuStack_1618 = (uint *******)0x0;
                    if (pppppppuVar19 != (uint *******)0x0) {
                      (*(code *)(*pppppppuVar19)[1])();
                    }
                    pppppppuVar19 = pppppppuStack_1610;
                    pppppppuStack_1610 = (uint *******)0x0;
                    if (pppppppuVar19 != (uint *******)0x0) {
                      (*(code *)(*pppppppuVar19)[1])();
                    }
                  }
                  (**(code **)(**(long **)(param_3 + 0x80) + 0x960))
                            (*(long **)(param_3 + 0x80),&UNK_01a46358,0,0);
                  (*(code *)(*param_2[0x69])[7])(uStack_14f8);
                }
                if ((bStack_14b8 & 1) != 0) {
                  func_0x0412a280(uStack_14a8,
                                  CONCAT62(uStack_14b6,CONCAT11(uStack_14b7,bStack_14b8)) &
                                  0xfffffffffffffffe);
                }
                goto LAB_09f597fe;
              }
LAB_09f599ed:
              func_0x04890760();
LAB_09f599f2:
              func_0x0eec74c0(0x28,0);
            } while( true );
          }
          (**(code **)(**(long **)(param_3 + 0x80) + 0x960))
                    (*(long **)(param_3 + 0x80),&UNK_01a46328,0,0);
          (*(code *)(*param_2[0x69])[7])(uStack_14f8);
LAB_09f597fe:
          pppppppuVar19 = pppppppuStack_1458;
          pbStack_1460 = (byte *)0x0;
          pppppppuStack_1458 = (uint *******)0x0;
          if (pppppppuVar19 == (uint *******)0x0) {
            pppppppuStack_1450 = (uint *******)0x0;
          }
          else {
            LOCK();
            pppppppuVar20 = pppppppuVar19 + 1;
            ppppppuVar21 = *pppppppuVar20;
            *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
            UNLOCK();
            if (ppppppuVar21 == (uint ******)0x0) {
              (*(code *)(*pppppppuVar19)[2])(pppppppuVar19);
              func_0x0412c2d0(pppppppuVar19);
            }
            pppppppuVar19 = pppppppuStack_1458;
            pppppppuStack_1450 = (uint *******)0x0;
            if (pppppppuStack_1458 != (uint *******)0x0) {
              LOCK();
              pppppppuVar20 = pppppppuStack_1458 + 1;
              ppppppuVar21 = *pppppppuVar20;
              *pppppppuVar20 = (uint ******)((long)*pppppppuVar20 + -1);
              UNLOCK();
              if (ppppppuVar21 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_1458)[2])(pppppppuStack_1458);
                func_0x0412c2d0(pppppppuVar19);
              }
            }
          }
          goto LAB_09f5558d;
        }
        puVar24 = (undefined8 *)(*(code *)(*pppppppuStack_1610)[0x11])();
        if ((puVar24 != (undefined8 *)0x0) && (*(char *)(puVar24 + 2) == '\x01')) {
          plVar38 = *(long **)(param_3 + 0x82);
          if ((*plVar38 == 0) &&
             (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014adc19),
             cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)*plVar38 == '\0') &&
             (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014adc19
                                      ), cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(*(long *)plVar38[2] + 0x138))(auStack_12e8);
          if ((CONCAT44(uStack_12e4,CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0])))
               == 0) &&
             (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e904a),
             cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)CONCAT44(uStack_12e4,
                                 CONCAT22(uStack_12e6,CONCAT11(auStack_12e8[1],auStack_12e8[0]))) ==
               '\0') &&
             (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013e904a
                                      ), cVar14 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (*(code *)(*uStack_12d8)[2])(&ppppppuStack_438,uStack_12d8,puVar24);
          plVar38 = (long *)CONCAT44(uStack_12dc,uStack_12e0);
          auStack_12e8[0] = 0;
          auStack_12e8[1] = 0;
          uStack_12e6 = 0;
          uStack_12e4 = 0;
          uStack_12e0 = 0;
          uStack_12dc = 0;
          if (plVar38 != (long *)0x0) {
            LOCK();
            plVar28 = plVar38 + 1;
            lVar26 = *plVar28;
            *plVar28 = *plVar28 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plVar38 + 0x10))(plVar38);
              func_0x0412c2d0(plVar38);
            }
            plVar38 = (long *)CONCAT44(uStack_12dc,uStack_12e0);
            uStack_12d8 = (uint *******)0x0;
            if (plVar38 != (long *)0x0) {
              LOCK();
              plVar28 = plVar38 + 1;
              lVar26 = *plVar28;
              *plVar28 = *plVar28 + -1;
              UNLOCK();
              if (lVar26 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
                func_0x0412c2d0(plVar38);
              }
            }
          }
          bVar15 = (byte)ppppppuStack_438 & 1;
          if (((ulong)ppppppuStack_438 & 1) == 0) {
            if ((byte)ppppppuStack_438 >> 1 != 0) goto LAB_09f55346;
          }
          else if (lStack_430 != 0) {
LAB_09f55346:
            plVar38 = *(long **)(param_3 + 0x80);
            uVar29 = *puVar24;
            uVar33 = puVar24[1];
            auStack_12e8[0] = (byte)((ulong)uVar29 >> 0x20);
            auStack_12e8[1] = (undefined1)((ulong)uVar29 >> 0x28);
            uStack_12e6 = (undefined2)((ulong)uVar29 >> 0x30);
            uStack_12d8 = (uint *******)
                          (CONCAT44(uStack_12d8._4_4_,(int)((ulong)uVar29 >> 0x10)) &
                          0xffffffff0000ffff);
            uStack_12c8 = (uint *******)
                          (CONCAT44(uStack_12c8._4_4_,(int)uVar29) & 0xffffffff0000ffff);
            pppppppuStack_12b8 =
                 (uint *******)
                 CONCAT44(pppppppuStack_12b8._4_4_,(uint)(ushort)((ulong)uVar33 >> 0x30));
            auStack_12a8._0_4_ = (int)((ulong)uVar33 >> 0x10);
            uStack_1298 = (char *)(CONCAT44(uStack_1298._4_4_,(int)uVar33) & 0xffffffff0000ffff);
            func_0x0470d9a0(auStack_b28,&UNK_01287ba2,0x28,0x122112,auStack_12e8);
            pppppppuVar19 = (uint *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
            if (pppppppuVar19 == (uint *******)0x0) {
              func_0x0eec74c0(0x38,0);
            }
            ppppppuVar21 = _UNK_014d3dfd;
            auStack_12e8[0] = 0x39;
            auStack_12e8[1] = 0;
            uStack_12e6 = 0;
            uStack_12e4 = 0;
            uStack_12e0 = 0x34;
            uStack_12dc = 0;
            pppppppuVar19[4] = _DAT_014d3df5;
            pppppppuVar19[5] = ppppppuVar21;
            ppppppuVar21 = _UNK_014d3ded;
            pppppppuVar19[2] = _DAT_014d3de5;
            pppppppuVar19[3] = ppppppuVar21;
            uVar8 = _UNK_014d3de1;
            uVar7 = _UNK_014d3ddd;
            uVar39 = _UNK_014d3dd9;
            *(undefined4 *)pppppppuVar19 = _DAT_014d3dd5;
            *(undefined4 *)((long)pppppppuVar19 + 4) = uVar39;
            *(undefined4 *)(pppppppuVar19 + 1) = uVar7;
            *(undefined4 *)((long)pppppppuVar19 + 0xc) = uVar8;
            *(undefined4 *)(pppppppuVar19 + 6) = 0x6b636568;
            *(byte *)((long)pppppppuVar19 + 0x34) = 0;
            uStack_12d8 = pppppppuVar19;
            (**(code **)(*plVar38 + 0x4e0))(plVar38,auStack_b28,&ppppppuStack_438,auStack_12e8);
            if ((auStack_12e8[0] & 1) != 0) {
              func_0x0412a280(uStack_12d8,
                              CONCAT44(uStack_12e4,
                                       CONCAT22(uStack_12e6,
                                                CONCAT11(auStack_12e8[1],auStack_12e8[0]))) &
                              0xfffffffffffffffe);
            }
            if (((ulong)_auStack_b28 & 1) != 0) {
              func_0x0412a280(uStack_b18,(ulong)_auStack_b28 & 0xfffffffffffffffe);
            }
            bVar15 = (byte)ppppppuStack_438 & 1;
          }
          if (bVar15 != 0) {
            func_0x0412a280(uStack_428,(ulong)ppppppuStack_438 & 0xfffffffffffffffe);
          }
        }
        puVar40 = (undefined *)0xf64ade8;
        if (pppppppuStack_1610 != (uint *******)0x0) {
          (*(code *)(*pppppppuStack_1610)[0x12])(pppppppuStack_1610,0xf64ade8);
          cVar14 = (*(code *)(*pppppppuStack_1610)[0x14])();
          if (cVar14 == '\0') {
            do {
              auStack_12e8[0] = 0x80;
              auStack_12e8[1] = 0xf0;
              uStack_12e6 = 0x2fa;
              uStack_12e4 = 0;
              func_0x04136c40(auStack_12e8);
              cVar14 = (*(code *)(*pppppppuStack_1610)[0x14])();
            } while (cVar14 == '\0');
          }
          pppppppuVar19 = pppppppuStack_1618;
          pppppppuStack_1618 = (uint *******)0x0;
          if (pppppppuVar19 != (uint *******)0x0) {
            (*(code *)(*pppppppuVar19)[1])();
          }
          pppppppuVar19 = pppppppuStack_1610;
          pppppppuStack_1610 = (uint *******)0x0;
          if (pppppppuVar19 != (uint *******)0x0) {
            (*(code *)(*pppppppuVar19)[1])();
          }
          puVar40 = (undefined *)0xf64ade8;
        }
      }
      (**(code **)(**(long **)(param_3 + 0x80) + 0x960))(*(long **)(param_3 + 0x80),puVar40,0,0);
      (*(code *)(*param_2[0x69])[7])(uStack_14f8);
LAB_09f5558d:
      pppppppuVar19 = pppppppuStack_1610;
      pppppppuStack_1610 = (uint *******)0x0;
      if (pppppppuVar19 != (uint *******)0x0) {
        (*(code *)(*pppppppuVar19)[1])();
      }
      pppppppuVar19 = pppppppuStack_1618;
      pppppppuStack_1618 = (uint *******)0x0;
      if (pppppppuVar19 != (uint *******)0x0) {
        (*(code *)(*pppppppuVar19)[1])();
      }
      lVar32 = lStack_1380;
      lVar26 = lStack_1378;
      if (lStack_1380 != 0) {
        for (; lVar32 != lVar26; lVar26 = lVar26 + -0x18) {
          if ((*(byte *)(lVar26 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar26 + -8),
                            *(ulong *)(lVar26 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_1378 = lVar32;
        func_0x0412a280(lStack_1380,lStack_1370 - lStack_1380);
      }
      return uStack_14f8;
    }
    (*(code *)(*ppppppuVar4)[1])();
    ppppppuVar27 = param_2[0x6a];
    if (ppppppuVar27 != (uint ******)0x0) goto LAB_09f545b8;
    func_0x04890760();
LAB_09f59898:
    pppppppuVar19 = (uint *******)0x0;
    func_0x04890760();
LAB_09f5989d:
    func_0x04890760();
LAB_09f598a2:
    func_0x0eec74c0(0x108,0);
  } while( true );
LAB_09f59b3c:
  func_0x04882e30();
LAB_09f59b41:
  ppppppuVar21[0xc] = (uint *****)0x0;
LAB_09f59b51:
  func_0x04891200();
LAB_09f59b56:
  ppppppuVar21[0xc] = (uint *****)0x0;
LAB_09f59b66:
  pppppppuVar25 = (uint *******)(ppppppuVar21 + 0xc);
  func_0x04891200();
LAB_09f59b6b:
  func_0x04931450();
LAB_09f59b70:
  func_0x04882e30();
  goto LAB_09f59b75;
LAB_09f59bc0:
  func_0x04890760(ppppppuVar21);
LAB_09f59bc5:
  iVar18 = FUN_04108328(&DAT_0f7b8fb8);
  if (iVar18 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_09f570df;
}



/* ---- referenced strings ----
 * 0x1248569  ServerInstance::initializeServer - AssetExtractionCheck
 * 0x1248579  initializeServer - AssetExtractionCheck
 * 0x1248589   - AssetExtractionCheck
 * 0x14d3dd5  ServerInstance::initializeServer - StorageStateCheck
 * 0x14d3de5  initializeServer - StorageStateCheck
 * 0x14d3df5   - StorageStateCheck
 */
