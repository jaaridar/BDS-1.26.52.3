/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc1cbea0 (ELF vaddr 0xc0cbea0)
 * Label: caller-of-callee
 * Body:  [[0c1cbea0, 0c1cc321] [0c1cc330, 0c1cc427] [0c1cc430, 0c1cd9a3] [0c1cd9b0, 0c1cd9fa] [0c1cda00, 0c1cdf02] [0c1cdf10, 0c1cdf79] [0c1cdf80, 0c1cdfa6] [0c1cdfb0, 0c1ce107] [0c1ce110, 0c1ce389] [0c1ce390, 0c1ceb3a] [0c1ceb40, 0c1cef15]]
 * Ghidra: FUN_0c1cbea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0c1cbea0(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *****pppppuVar4;
  long lVar5;
  ushort uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 ****ppppuVar11;
  undefined3 uVar12;
  long *****ppppplVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  undefined8 uVar17;
  long *plVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  long *plVar23;
  undefined8 ******ppppppuVar24;
  long lVar25;
  char *pcVar26;
  uint *puVar27;
  long *******ppppppplVar28;
  ulong uVar29;
  char cVar30;
  ulong uVar31;
  undefined4 *puVar32;
  long lVar33;
  undefined *puVar34;
  uint *puVar35;
  undefined *puVar36;
  long *******ppppppplVar37;
  long ******pppppplVar38;
  ulong uVar39;
  long lVar40;
  double dVar41;
  undefined *puVar42;
  bool bVar43;
  undefined8 ******ppppppuStack_1f78;
  ulong uStack_1f70;
  double dStack_1f68;
  undefined8 *puStack_1f60;
  long *plStack_1f58;
  long *plStack_1f50;
  undefined8 uStack_1f48;
  undefined8 uStack_1f40;
  undefined8 uStack_1f38;
  ulong uStack_1f30;
  ulong uStack_1f28;
  undefined8 ******ppppppuStack_1f18;
  ulong uStack_1f10;
  double dStack_1f08;
  ulong uStack_1f00;
  undefined8 uStack_1ef8;
  undefined1 uStack_1ef0;
  uint7 uStack_1eef;
  undefined4 uStack_1ee8;
  uint uStack_1ee4;
  uint uStack_1ee0;
  undefined4 uStack_1edc;
  long lStack_1ed8;
  undefined4 uStack_1ed0;
  undefined1 uStack_1ecc;
  undefined1 uStack_1ec8;
  undefined7 uStack_1ec7;
  uint uStack_1ec0;
  undefined4 uStack_1ebc;
  long *plStack_1eb8;
  undefined8 ******ppppppuStack_1eb0;
  ulong uStack_1ea8;
  ulong uStack_1ea0;
  undefined8 uStack_1e98;
  uint5 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  ulong uStack_1e78;
  uint uStack_1e70;
  undefined8 uStack_1e6c;
  undefined5 uStack_1e64;
  undefined3 uStack_1e5f;
  undefined5 uStack_1e5c;
  undefined1 uStack_1e48;
  undefined1 uStack_1e40;
  undefined1 uStack_1e30;
  long *plStack_1e20;
  undefined1 auStack_1e18 [4];
  undefined4 uStack_1e14;
  long *plStack_1e10;
  undefined8 ******ppppppuStack_1e08;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 uStack_1de8;
  undefined8 uStack_1de0;
  undefined8 uStack_1dd8;
  undefined1 uStack_1dcc;
  undefined *puStack_1dc8;
  undefined8 uStack_1dc0;
  undefined8 uStack_1db8;
  undefined8 ******ppppppuStack_1db0;
  ulong uStack_1da8;
  ulong uStack_1da0;
  long alStack_1d98 [3];
  undefined1 auStack_1d80 [16];
  ulong uStack_1d70;
  undefined8 uStack_1d68;
  undefined4 *puStack_1d60;
  long lStack_1d58;
  long lStack_1d50;
  long lStack_1d48;
  undefined1 auStack_1d38 [38];
  char cStack_1d12;
  ulong uStack_1d10;
  ulong uStack_1d08;
  long ******apppppplStack_1d00 [3];
  long *****ppppplStack_1ce8;
  int iStack_1ce0;
  char cStack_1cdc;
  undefined8 *****pppppuStack_1cd8;
  undefined8 uStack_1cd0;
  long *****ppppplStack_1cc8;
  long *****ppppplStack_1cc0;
  long *****ppppplStack_1cb8;
  undefined8 uStack_1cb0;
  undefined8 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined4 uStack_1c90;
  byte bStack_1c8c;
  long *plStack_1c88;
  undefined8 ******ppppppuStack_1c80;
  ulong uStack_1c78;
  double dStack_1c70;
  undefined4 uStack_1c68;
  undefined4 uStack_1c64;
  undefined4 uStack_1c58;
  undefined4 uStack_1c54;
  undefined4 uStack_1c50;
  undefined4 uStack_1c4c;
  undefined1 uStack_1c3c;
  undefined8 ****ppppuStack_1c38;
  byte bStack_1c30;
  undefined4 uStack_1c2f;
  undefined4 uStack_1c2b;
  undefined4 uStack_1c27;
  undefined1 uStack_1c23;
  ushort uStack_1c22;
  undefined1 uStack_1c20;
  undefined5 uStack_1c1f;
  undefined2 uStack_1c1a;
  undefined8 uStack_1c18;
  ulong uStack_1c10;
  ulong uStack_1c08;
  undefined1 auStack_1c00 [24];
  code *pcStack_1be8;
  undefined1 auStack_1bd8 [80];
  undefined1 auStack_1b88 [16];
  undefined8 *****pppppuStack_1b78;
  undefined8 uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined4 uStack_1b48;
  undefined4 uStack_1b44;
  uint uStack_1b40;
  undefined4 uStack_1b3c;
  undefined8 uStack_1b38;
  undefined4 uStack_1b30;
  undefined1 uStack_1b2c;
  undefined8 *****pppppuStack_1b28;
  undefined8 uStack_1b20;
  long *****ppppplStack_1b18;
  long *****ppppplStack_1b10;
  long *****ppppplStack_1b08;
  undefined8 uStack_1b00;
  undefined4 uStack_1af8;
  undefined4 uStack_1af4;
  undefined4 uStack_1af0;
  undefined4 uStack_1aec;
  undefined8 uStack_1ae8;
  undefined4 uStack_1ae0;
  byte bStack_1adc;
  undefined8 uStack_1ad8;
  undefined8 uStack_1ad0;
  undefined8 uStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 uStack_1ab8;
  undefined8 uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  undefined8 uStack_1a98;
  undefined4 uStack_1a90;
  byte bStack_1a8c;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined1 uStack_1a70;
  undefined1 uStack_1a68;
  undefined1 uStack_1a50;
  undefined2 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined1 uStack_1a30;
  undefined1 uStack_1a2c;
  undefined2 uStack_1a28;
  undefined1 uStack_1a20;
  undefined1 uStack_1a00;
  undefined1 uStack_19f8;
  undefined1 uStack_19e0;
  undefined1 uStack_19d8;
  undefined1 uStack_1968;
  undefined1 uStack_1960;
  undefined1 uStack_1948;
  undefined1 uStack_1940;
  undefined1 uStack_1934;
  undefined1 uStack_1930;
  undefined1 uStack_1918;
  undefined1 uStack_1910;
  undefined1 uStack_1900;
  undefined1 uStack_18fc;
  undefined1 uStack_18fa;
  undefined1 uStack_18f8;
  undefined1 uStack_18d8;
  undefined1 uStack_18d0;
  undefined1 uStack_1888;
  undefined1 uStack_1880;
  undefined1 uStack_1850;
  undefined1 uStack_1848;
  undefined1 uStack_1844;
  undefined1 uStack_1840;
  undefined1 uStack_1828;
  undefined1 uStack_1820;
  undefined1 uStack_17f8;
  undefined1 uStack_17f0;
  long *****appppplStack_17e0 [2];
  undefined1 uStack_17d0;
  undefined1 uStack_17c8;
  undefined1 uStack_1774;
  undefined1 uStack_1770;
  undefined1 uStack_176e;
  undefined1 uStack_176c;
  undefined1 uStack_1754;
  undefined1 uStack_1750;
  undefined1 uStack_1718;
  undefined1 uStack_1710;
  undefined1 uStack_16f0;
  undefined1 uStack_16e8;
  undefined1 uStack_16d0;
  undefined1 uStack_16c8;
  undefined1 uStack_16bc;
  undefined1 uStack_16b8;
  undefined1 uStack_16a0;
  undefined1 uStack_1698;
  undefined1 uStack_1678;
  undefined1 uStack_1670;
  undefined1 uStack_1638;
  undefined1 uStack_1630;
  undefined1 uStack_162c;
  undefined1 uStack_1628;
  undefined1 uStack_1624;
  undefined1 uStack_1620;
  undefined1 uStack_1608;
  undefined1 uStack_1600;
  undefined1 uStack_15ec;
  undefined1 uStack_15e8;
  undefined1 uStack_15d0;
  undefined1 uStack_15cc;
  undefined1 uStack_15c0;
  undefined2 uStack_15bc;
  undefined1 uStack_15b8;
  undefined1 uStack_15b4;
  undefined1 uStack_15b0;
  undefined1 uStack_1598;
  undefined1 uStack_1590;
  undefined1 uStack_1570;
  undefined1 uStack_1568;
  long *****appppplStack_1540 [3];
  long *****ppppplStack_1528;
  long *****ppppplStack_1520;
  undefined1 uStack_1518;
  undefined1 uStack_1510;
  long *****ppppplStack_1500;
  long *****ppppplStack_14f8;
  long *****appppplStack_14f0 [6];
  undefined1 uStack_14c0;
  undefined1 uStack_14b8;
  undefined1 uStack_1470;
  undefined1 uStack_1468;
  undefined1 uStack_13d8;
  undefined1 uStack_13d0;
  undefined1 uStack_1380;
  undefined1 uStack_1378;
  undefined1 uStack_1328;
  undefined1 uStack_1320;
  undefined1 uStack_12d0;
  undefined1 uStack_12c8;
  undefined1 uStack_1278;
  undefined1 auStack_1270 [24];
  undefined1 uStack_1258;
  undefined8 uStack_1250;
  undefined1 uStack_1248;
  undefined7 uStack_1247;
  undefined1 uStack_1240;
  undefined8 uStack_123f;
  undefined1 uStack_1220;
  undefined1 uStack_1218;
  undefined1 uStack_1200;
  undefined1 uStack_11f8;
  undefined1 uStack_11f4;
  undefined1 uStack_11f0;
  undefined1 uStack_11ec;
  undefined1 uStack_11e8;
  undefined1 uStack_11e4;
  undefined1 uStack_11e0;
  undefined1 uStack_11dc;
  undefined1 uStack_11d8;
  undefined1 uStack_11d4;
  undefined4 uStack_11d0;
  undefined1 uStack_11cc;
  undefined1 uStack_11c8;
  undefined8 uStack_11c4;
  undefined5 uStack_11bc;
  undefined3 uStack_11b7;
  undefined5 uStack_11b4;
  undefined1 uStack_11a0;
  undefined1 uStack_1198;
  undefined1 uStack_1188;
  undefined1 auStack_1180 [16];
  char cStack_1170;
  long *****ppppplStack_1168;
  long *****ppppplStack_1160;
  long *****ppppplStack_1158;
  long *****ppppplStack_1150;
  long *****ppppplStack_1148;
  long *****ppppplStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  code *pcStack_1118;
  undefined4 uStack_1110;
  undefined1 uStack_110c;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  undefined1 uStack_10bc;
  char cStack_1078;
  undefined1 auStack_c48 [672];
  long *****ppppplStack_9a8;
  long *****ppppplStack_9a0;
  long *****ppppplStack_998;
  undefined2 uStack_990;
  undefined1 auStack_988 [32];
  uint uStack_968;
  undefined1 uStack_960;
  undefined1 uStack_958;
  undefined1 auStack_950 [2072];
  undefined1 auStack_138 [240];
  undefined1 auStack_48 [16];
  char cStack_38;
  
  uStack_1a88 = 0;
  uStack_1a80 = 0;
  uStack_1a78 = 0;
  uStack_1a70 = 5;
  uStack_1a68 = 0;
  uStack_1a50 = 0;
  uStack_1a48 = 0;
  uStack_1a2c = 0;
  uStack_1a28 = 0;
  uStack_1a20 = 0;
  uStack_1a00 = 0;
  uStack_19f8 = 0;
  uStack_19e0 = 0;
  uStack_19d8 = 0;
  uStack_1968 = 0;
  uStack_1960 = 0;
  uStack_1948 = 0;
  uStack_1940 = 0;
  uStack_1934 = 0;
  uStack_1930 = 0;
  uStack_1918 = 0;
  uStack_1910 = 0;
  uStack_1900 = 0;
  uStack_18fc = 0;
  uStack_18fa = 0;
  uStack_18f8 = 0;
  uStack_18d8 = 0;
  uStack_18d0 = 0;
  uStack_1888 = 0;
  uStack_1880 = 0;
  uStack_1850 = 0;
  uStack_1848 = 0;
  uStack_1844 = 0;
  uStack_1840 = 0;
  uStack_1828 = 0;
  uStack_1820 = 0;
  uStack_17f8 = 0;
  uStack_17f0 = 0;
  uStack_17d0 = 0;
  uStack_17c8 = 0;
  uStack_1774 = 0;
  uStack_1770 = 0;
  uStack_176e = 0;
  uStack_176c = 0;
  uStack_1754 = 0;
  uStack_1750 = 0;
  uStack_1718 = 0;
  uStack_1710 = 0;
  uStack_16f0 = 0;
  uStack_16e8 = 0;
  uStack_16d0 = 0;
  uStack_16c8 = 0;
  uStack_16bc = 0;
  uStack_16b8 = 0;
  uStack_16a0 = 0;
  uStack_1698 = 0;
  uStack_1678 = 0;
  uStack_1670 = 0;
  uStack_1638 = 0;
  uStack_1630 = 0;
  uStack_162c = 0;
  uStack_1628 = 0;
  uStack_1624 = 0;
  uStack_1620 = 0;
  uStack_1608 = 0;
  uStack_1600 = 0;
  uStack_15ec = 0;
  uStack_15e8 = 0;
  uStack_15d0 = 0;
  uStack_15cc = 0;
  uStack_15c0 = 0;
  uStack_15bc = 0;
  uStack_15b8 = 0;
  uStack_15b4 = 0;
  uStack_15b0 = 0;
  uStack_1598 = 0;
  uStack_1590 = 0;
  uStack_1570 = 0;
  uStack_1a40 = 0;
  uStack_1a38 = 0;
  uStack_1a30 = 0;
  uStack_1568 = 0;
  uStack_1518 = 0;
  uStack_1510 = 0;
  uStack_14c0 = 0;
  uStack_14b8 = 0;
  uStack_1470 = 0;
  uStack_1468 = 0;
  uStack_13d8 = 0;
  uStack_13d0 = 0;
  uStack_1380 = 0;
  uStack_1378 = 0;
  uStack_1328 = 0;
  uStack_1320 = 0;
  uStack_12d0 = 0;
  uStack_12c8 = 0;
  uStack_1278 = 0;
  auStack_1270[0] = 0;
  uStack_1258 = 0;
  uStack_1220 = 0;
  uStack_1218 = 0;
  uStack_1200 = 0;
  uStack_11f8 = 0;
  uStack_11f4 = 0;
  uStack_11f0 = 0;
  uStack_11ec = 0;
  uStack_11e8 = 0;
  uStack_11e4 = 0;
  uStack_11e0 = 0;
  uStack_11dc = 0;
  uStack_11d8 = 0;
  uStack_11d4 = 0;
  uStack_11c8 = 0;
  uStack_11a0 = 0;
  uStack_1198 = 0;
  uStack_1188 = 0;
  uStack_1240 = 0;
  uStack_123f = 0;
  uStack_1250 = 0;
  uStack_1248 = 0;
  uStack_1247 = 0;
  uStack_11cc = 0;
  uStack_11d0 = 0;
  uStack_11c4 = 0;
  uStack_11bc = 0;
  uStack_11b7 = 0;
  uStack_11b4 = 0;
  auStack_1180[0] = 0;
  cStack_1170 = '\0';
  puStack_1f60 = param_1;
  func_0x04863480(alStack_1d98,param_3);
  plStack_1e20 = param_3;
  uVar17 = func_0x048648e0(param_3,&UNK_011ed181);
  func_0x04865230(&ppppplStack_1168,uVar17);
  ppppplVar13 = ppppplStack_1160;
  plStack_1f58 = param_4;
  plStack_1f50 = param_2;
  if (ppppplStack_1168 != ppppplStack_1160) {
    pppppplVar38 = (long ******)ppppplStack_1168;
    do {
      if ((*plStack_1f50 == 0) &&
         (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((*(char *)*plStack_1f50 == '\0') &&
         (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
         cVar14 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      cVar14 = func_0x0c404390(pppppplVar38,plStack_1f58,param_2 + 0x22,plStack_1f50[2]);
      if (cVar14 == '\0') {
        uVar17 = func_0x04864680(alStack_1d98,&UNK_011ed181);
        func_0x048650e0(auStack_1b88,uVar17,pppppplVar38);
        func_0x04863610(auStack_1b88);
      }
      pppppplVar38 = pppppplVar38 + 3;
    } while (pppppplVar38 != (long ******)ppppplVar13);
  }
  ppppplVar13 = ppppplStack_1168;
  plVar18 = plStack_1f58;
  pppppplVar38 = (long ******)ppppplStack_1160;
  if ((long ******)ppppplStack_1168 != (long ******)0x0) {
    for (; (long ******)ppppplVar13 != pppppplVar38; pppppplVar38 = pppppplVar38 + -3) {
      if (((ulong)pppppplVar38[-3] & 1) != 0) {
        func_0x0412a280(pppppplVar38[-1],(ulong)pppppplVar38[-3] & 0xfffffffffffffffe);
      }
    }
    ppppplStack_1160 = ppppplVar13;
    func_0x0412a280(ppppplStack_1168,(long)ppppplStack_1158 - (long)ppppplStack_1168);
  }
  func_0x048635d0(&uStack_1f48,alStack_1d98);
  pppppppuVar3 = (undefined8 *******)*plVar18;
  uVar39 = plVar18[1];
  ppppppuStack_1f78 = pppppppuVar3;
  if ((uVar39 >> 0x37 & 1) != 0) {
    lVar33 = *(long *)((uVar39 & 0xff00ffffffffffff) - 8);
    lVar25 = lVar33 + 9;
    plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar23 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar23 = lVar33;
    memcpy(plVar23 + 1,uVar39 & 0xff00ffffffffffff,lVar33);
    *(undefined1 *)((long)plVar23 + lVar33 + 8) = 0;
    uVar39 = (ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  dStack_1f68 = 0.0;
  uStack_1da0 = plVar18[2];
  uStack_1f70 = uVar39;
  if ((uStack_1da0 & 0x80000000000000) != 0) {
    lVar33 = *(long *)((uStack_1da0 & 0xff00ffffffffffff) - 8);
    lVar25 = lVar33 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar25,8);
    }
    *plVar18 = lVar33;
    memcpy(plVar18 + 1,uStack_1da0 & 0xff00ffffffffffff,lVar33);
    *(undefined1 *)((long)plVar18 + lVar33 + 8) = 0;
    uStack_1da0 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar18 = plStack_1f50 + 4;
  puStack_1dc8 = &UNK_0f47dea0;
  func_0x048635d0(&uStack_1dc0,&uStack_1f48);
  uStack_1f70 = 0;
  dStack_1f68 = 0.0;
  uStack_1f38 = 0;
  uStack_1f30 = 0;
  uStack_1f28 = 0;
  ppppppuStack_1db0 = pppppppuVar3;
  uStack_1da8 = uVar39;
  func_0x0d6afff0(&ppppppuStack_1f18,plVar18,&puStack_1dc8,&uStack_1f38,1);
  plVar18 = plStack_1f50;
  if ((((~uStack_1ef8._6_1_ | (byte)uStack_1e6c) & 1) == 0) && (plStack_1f50[0xe] != 0)) {
    lVar25 = func_0x0417cc60();
    plVar18 = (long *)plVar18[0xe];
    if (plVar18 != (long *)0x0) {
      if ((char)uStack_1ebc == '\x02') {
        puVar27 = &uStack_1ee0;
      }
      else {
        puVar27 = (uint *)CONCAT44(uStack_1edc,uStack_1ee0);
      }
      puVar35 = (uint *)0x0;
      if (uStack_1ec0 == 0x91af4ced) {
        puVar35 = puVar27;
      }
      (**(code **)(*plVar18 + 0x30))(plVar18,puVar35,&plStack_1eb8);
      lVar33 = func_0x0417cc60();
      dStack_1f08 = (double)(lVar33 - lVar25) / _DAT_014f0138;
      uStack_1f00 = CONCAT71(uStack_1f00._1_7_,
                             (byte)uStack_1f00 & ~(byte)uStack_1e6c & uStack_1ef8._6_1_);
      bVar15 = ~uStack_1ef8._6_1_ | (byte)uStack_1e6c;
      plVar18 = plStack_1eb8;
      pppppppuVar3 = (undefined8 *******)ppppppuStack_1eb0;
      uVar39 = uStack_1ea8;
      uVar31 = uStack_1ea0;
      goto joined_r0x0c1ccb04;
    }
    func_0x04891200();
LAB_0c1cee18:
    iVar16 = func_0x04108328(&DAT_0f6b4d58);
    if (iVar16 != 0) {
      _DAT_0f6b4d48 = (undefined *)0x0;
      _DAT_0f6b4d50 = 0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
LAB_0c1cd959:
    ppppuVar11 = ppppuStack_1c38;
    if (_DAT_0f6b4d48 == (undefined *)0x0) {
LAB_0c1cda83:
      puVar42 = &DAT_0f6b4d48;
    }
    else {
      bVar43 = (bStack_1c30 & 1) != 0;
      puVar32 = &uStack_1c2f;
      if (bVar43) {
        puVar32 = (undefined4 *)CONCAT26(uStack_1c1a,CONCAT51(uStack_1c1f,uStack_1c20));
      }
      uVar39 = (ulong)(bStack_1c30 >> 1);
      if (bVar43) {
        uVar39 = CONCAT26(uStack_1c22,CONCAT15(uStack_1c23,CONCAT41(uStack_1c27,uStack_1c2b._3_1_)))
        ;
      }
      puVar42 = &DAT_0f6b4d48;
      puVar34 = _DAT_0f6b4d48;
      do {
        pppppuVar4 = *(undefined8 ******)(puVar34 + 0x20);
        bVar15 = (pppppuVar4 >= ppppuVar11 && pppppuVar4 != (undefined8 *****)ppppuVar11) -
                 (pppppuVar4 < ppppuVar11);
        if (pppppuVar4 == (undefined8 *****)ppppuVar11) {
          if ((puVar34[0x28] & 1) == 0) {
            uVar31 = (ulong)((byte)puVar34[0x28] >> 1);
            puVar36 = puVar34 + 0x29;
          }
          else {
            uVar31 = *(ulong *)(puVar34 + 0x30);
            puVar36 = *(undefined **)(puVar34 + 0x38);
          }
          uVar29 = uVar31;
          if (uVar39 < uVar31) {
            uVar29 = uVar39;
          }
          iVar16 = func_0x0eee2ff0(puVar36,puVar32,uVar29);
          if (iVar16 == 0) {
            iVar16 = (int)(char)((uVar39 < uVar31) - (uVar31 < uVar39));
          }
          bVar15 = (0 < iVar16) - (iVar16 < 0);
        }
        if (-1 < (char)bVar15) {
          puVar42 = puVar34;
        }
        puVar34 = *(undefined **)(puVar34 + (bVar15 >> 4 & 8));
      } while (puVar34 != (undefined *)0x0);
      if (puVar42 == &DAT_0f6b4d48) goto LAB_0c1cda83;
      if ((undefined8 *****)ppppuVar11 == *(undefined8 ******)(puVar42 + 0x20)) {
        bVar43 = (puVar42[0x28] & 1) != 0;
        puVar34 = puVar42 + 0x29;
        if (bVar43) {
          puVar34 = *(undefined **)(puVar42 + 0x38);
        }
        uVar31 = (ulong)((byte)puVar42[0x28] >> 1);
        if (bVar43) {
          uVar31 = *(ulong *)(puVar42 + 0x30);
        }
        uVar29 = uVar39;
        if (uVar31 < uVar39) {
          uVar29 = uVar31;
        }
        iVar16 = func_0x0eee2ff0(puVar32,puVar34,uVar29);
        bVar43 = uVar39 < uVar31;
        if (iVar16 != 0) {
          bVar43 = iVar16 < 0;
        }
        if (bVar43) goto LAB_0c1cda83;
      }
      else if (ppppuVar11 < *(undefined8 ******)(puVar42 + 0x20)) goto LAB_0c1cda83;
    }
    if ((DAT_0f6b4d58 == '\0') && (iVar16 = func_0x04108328(&DAT_0f6b4d58), iVar16 != 0)) {
      _DAT_0f6b4d48 = (undefined *)0x0;
      _DAT_0f6b4d50 = 0;
      _DAT_0f6b4d40 = &DAT_0f6b4d48;
      func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
      func_0x0410844d(&DAT_0f6b4d58);
    }
    if ((puVar42 == &DAT_0f6b4d48) ||
       (puVar34 = *(undefined **)(puVar42 + 0x50), puVar34 == (undefined *)0x0)) {
LAB_0c1cdafb:
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar23 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&UNK_0f35b188;
      ppppppuStack_1f18 = (undefined8 ******)0x0;
      uStack_1f10 = 0;
      plVar23[4] = (long)&UNK_0f2ccd78;
      plVar23[5] = 0;
      plVar23[6] = 0;
      plVar23[7] = 0;
      plVar23[8] = 0;
      plVar23[9] = 0;
      plVar23[10] = 0;
      plVar23[0xb] = 0;
      plVar23[0xc] = 0;
      *(undefined1 *)(plVar23 + 0xd) = 0;
      func_0x04aa75f0(plVar23 + 0xe,auStack_1e18,&UNK_01254d89);
      *(undefined1 *)(plVar23 + 0x10) = 0;
      plVar23[0x11] = 0;
      plVar23[0x12] = 0;
      plVar23[0x13] = 0;
      plVar23[0x14] = 0;
      plVar23[0x15] = 0;
      plVar23[0x16] = 0;
      plVar23[0x17] = 0xffffffff;
      plVar23[0x26] = 0;
      plVar23[0x27] = 0;
      plVar23[0x18] = 0;
      plVar23[0x19] = 0;
      plVar23[0x1a] = 0;
      plVar23[0x1b] = 0;
      plVar23[0x1c] = 0;
      plVar23[0x1d] = 0;
      plVar23[0x1e] = 0;
      plVar23[0x1f] = 0;
      plVar23[4] = (long)&UNK_0f35b1d8;
      pppppppuVar3 = (undefined8 *******)(plVar23 + 0x2e);
      plVar23[0x2e] = 0;
      plVar23[0x2f] = 0;
      *(undefined1 *)(plVar23 + 0x36) = 0;
      if (pppppppuVar3 != &ppppppuStack_1f18) {
        if (ppppppuStack_1f18 == (undefined8 ******)0x0) {
          ppppppuVar24 = (undefined8 ******)0x0;
        }
        else {
          (*(code *)*ppppppuStack_1f18)(&ppppppuStack_1f18,pppppppuVar3);
          ppppppuVar24 = ppppppuStack_1f18;
        }
        ppppppuStack_1f18 = (undefined8 ******)0x0;
        *pppppppuVar3 = ppppppuVar24;
      }
      plVar18 = plStack_1f58;
      if (plVar23 != (long *)&DAT_0f552080) {
        puVar27 = (uint *)(plVar23 + 0x12);
        if ((*puVar27 & 1) == 0) {
          if ((_DAT_0f552110 & 1) == 0) {
            plVar23[0x14] = _DAT_0f552120;
            uVar10 = uRam000000000f55211c;
            uVar9 = _DAT_0f552118;
            uVar7 = uRam000000000f552114;
            *puVar27 = _DAT_0f552110;
            *(undefined4 *)((long)plVar23 + 0x94) = uVar7;
            *(undefined4 *)(plVar23 + 0x13) = uVar9;
            *(undefined4 *)((long)plVar23 + 0x9c) = uVar10;
          }
          else {
            func_0x04885070(puVar27,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
          }
        }
        else {
          bVar43 = (_DAT_0f552110 & 1) != 0;
          lVar25 = 0xf552111;
          if (bVar43) {
            lVar25 = _DAT_0f552120;
          }
          uVar39 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
          if (bVar43) {
            uVar39 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
          }
          func_0x04885120(puVar27,lVar25,uVar39);
        }
      }
      plVar23[0x11] = _DAT_0f552108;
      plVar23[0x15] = 0;
      if (ppppppuStack_1f18 != (undefined8 ******)0x0) {
        (*(code *)ppppppuStack_1f18[1])(&ppppppuStack_1f18);
      }
      uStack_1f48 = plVar23 + 4;
      uStack_1f40 = plVar23;
      if ((DAT_0f6b4d58 == '\0') && (iVar16 = func_0x04108328(&DAT_0f6b4d58), iVar16 != 0)) {
        _DAT_0f6b4d48 = (undefined *)0x0;
        _DAT_0f6b4d50 = 0;
        _DAT_0f6b4d40 = &DAT_0f6b4d48;
        func_0x0eee2f40(&UNK_0b63cb80,&DAT_0f6b4d40,0xf53dab8);
        func_0x0410844d(&DAT_0f6b4d58);
      }
      ppppppuStack_1f18 = (undefined8 ******)&ppppuStack_1c38;
      lVar25 = func_0x0b5d53e0(&DAT_0f6b4d40,ppppppuStack_1f18,&UNK_01563a4f,&ppppppuStack_1f18,
                               auStack_1e18);
      ppppppuStack_1f18 = &ppppppuStack_1f78;
      lVar25 = func_0x0b5d5780(lVar25 + 0x48,ppppppuStack_1f18,&UNK_01563a4f,&ppppppuStack_1f18,
                               auStack_1e18);
      if (uStack_1f40 != (long *)0x0) {
        LOCK();
        uStack_1f40[1] = uStack_1f40[1] + 1;
        UNLOCK();
      }
      plVar23 = *(long **)(lVar25 + 0x40);
      *(undefined4 *)(lVar25 + 0x38) = (undefined4)uStack_1f48;
      *(undefined4 *)(lVar25 + 0x3c) = uStack_1f48._4_4_;
      *(undefined4 *)(lVar25 + 0x40) = (undefined4)uStack_1f40;
      *(undefined4 *)(lVar25 + 0x44) = uStack_1f40._4_4_;
      if (plVar23 != (long *)0x0) {
        LOCK();
        plVar1 = plVar23 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
        }
      }
      (**(code **)(*plStack_1e20 + 0x30))(plStack_1e20,&uStack_1f48);
    }
    else {
      puVar36 = puVar42 + 0x50;
      do {
        bVar15 = FUN_04fa7a10(puVar34 + 0x20,&ppppppuStack_1f78);
        if (bVar15 == 0) {
          puVar36 = puVar34;
        }
        puVar34 = *(undefined **)(puVar34 + (ulong)bVar15 * 8);
      } while (puVar34 != (undefined *)0x0);
      if ((puVar36 == puVar42 + 0x50) ||
         (cVar14 = FUN_04fa7a10(&ppppppuStack_1f78,puVar36 + 0x20), cVar14 != '\0'))
      goto LAB_0c1cdafb;
      uStack_1f48 = *(long **)(puVar36 + 0x38);
      uStack_1f40 = *(long **)(puVar36 + 0x40);
      plVar18 = plStack_1f58;
      if (*(long *)(puVar36 + 0x40) != 0) {
        LOCK();
        plVar23 = (long *)(*(long *)(puVar36 + 0x40) + 8);
        *plVar23 = *plVar23 + 1;
        UNLOCK();
      }
    }
    func_0x0412d6b0(0xf6b4d60);
    (**(code **)(*plStack_1e20 + 0x28))();
    if (((ulong)dStack_1c70 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)dStack_1c70 & 0xff00ffffffffffff) - 8);
    }
    dStack_1c70 = 0.0;
    if ((uStack_1c78 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c78 & 0xff00ffffffffffff) - 8);
    }
    uStack_1c78 = 0;
    if ((bStack_1c30 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_1c1a,CONCAT51(uStack_1c1f,uStack_1c20)),
                      CONCAT35((undefined3)uStack_1c2b,CONCAT41(uStack_1c2f,bStack_1c30)) &
                      0xfffffffffffffffe);
    }
    func_0x0d5e9c60(&ppppuStack_1c38,&ppppppuStack_1f78);
    plVar23 = uStack_1f48;
    if ((char)uStack_1f48[9] == '\x01') {
      cStack_1078 = '\x01';
LAB_0c1ce2ac:
      plVar18 = uStack_1f48;
      _auStack_1e18 = _auStack_1e18 & 0xffffffffffff0000;
      func_0x0c324520(&ppppppuStack_1f18,auStack_1d80,&ppppuStack_1c38);
      if ((uStack_1ec0 & 1) == 0) {
        if ((_auStack_1e18 & 1) == 0) {
          ppppppuStack_1eb0 = ppppppuStack_1e08;
          uStack_1ec0 = (uint)auStack_1e18;
          uStack_1ebc = uStack_1e14;
          plStack_1eb8 = plStack_1e10;
        }
        else {
          func_0x04885070(&uStack_1ec0,ppppppuStack_1e08,plStack_1e10);
        }
      }
      else {
        plVar23 = (long *)(_auStack_1e18 >> 1 & 0x7f);
        pppppppuVar3 = (undefined8 *******)(auStack_1e18 + 1);
        if ((_auStack_1e18 & 1) != 0) {
          plVar23 = plStack_1e10;
          pppppppuVar3 = (undefined8 *******)ppppppuStack_1e08;
        }
        func_0x04885120(&uStack_1ec0,pppppppuVar3,plVar23);
      }
      ppppppuStack_1f18 = &ppppplStack_1168;
      (**(code **)(*plVar18 + 0x40))(plVar18,&ppppppuStack_1f18);
      lVar25 = plVar18[0x18];
      lVar33 = plVar18[0x17];
      if (lVar25 - lVar33 != 0) {
        uVar39 = 0;
        do {
          if ((*(ulong *)(lStack_1ed8 + (uVar39 >> 6) * 8) >> (uVar39 & 0x3f) & 1) == 0) {
            lVar5 = *(long *)(plVar18[0x17] + 0x90 + uVar39 * 0xa8);
            for (lVar40 = *(long *)(plVar18[0x17] + 0x88 + uVar39 * 0xa8); lVar40 != lVar5;
                lVar40 = lVar40 + 0x38) {
              (**(code **)(**(long **)(lVar40 + 0x28) + 0x30))
                        (*(long **)(lVar40 + 0x28),&ppppppuStack_1f18);
            }
          }
          uVar39 = uVar39 + 1;
        } while (uVar39 != (lVar25 - lVar33 >> 3) * -0x30c30c30c30c30c3);
      }
      if (plVar18[0x1a] != 0) {
        (**(code **)(plVar18[0x1a] + 0x10))(plVar18 + 0x1a,&ppppppuStack_1f18);
      }
      plVar18 = plStack_1f58;
      if ((uStack_1e98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e98 & 0xff00ffffffffffff) - 8);
      }
      uStack_1e98 = 0;
      if ((uStack_1ea0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1ea0 & 0xff00ffffffffffff) - 8);
      }
      uStack_1ea0 = 0;
      if ((uStack_1ec0 & 1) != 0) {
        func_0x0412a280(ppppppuStack_1eb0,CONCAT44(uStack_1ebc,uStack_1ec0) & 0xfffffffffffffffe);
      }
      if (lStack_1ed8 != 0) {
        func_0x0412a280(lStack_1ed8,CONCAT71(uStack_1ec7,uStack_1ec8) << 3);
      }
      if ((uStack_1f00 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_1eef,uStack_1ef0),uStack_1f00 & 0xfffffffffffffffe);
      }
      if ((_auStack_1e18 & 1) != 0) {
        func_0x0412a280(ppppppuStack_1e08,_auStack_1e18 & 0xfffffffffffffffe);
      }
    }
    else {
      func_0x0c324520(&ppppppuStack_1f18,auStack_1d80,&ppppuStack_1c38);
      cVar14 = (**(code **)(*plVar23 + 0x38))(plVar23,&ppppppuStack_1f18,0);
      if (cVar14 == '\0') {
LAB_0c1ce1d0:
        cVar30 = '\0';
        cVar14 = '\0';
      }
      else {
        cVar30 = '\x01';
        cVar14 = '\x01';
        lVar25 = plVar23[0x18] - plVar23[0x17];
        plVar18 = plStack_1f58;
        if (lVar25 != 0) {
          lVar25 = (lVar25 >> 3) * -0x30c30c30c30c30c3;
          pcVar26 = (char *)(plVar23[0x17] + 0xa0);
          uVar39 = 0;
LAB_0c1cdf22:
          if ((*pcVar26 != '\x01') ||
             ((*(ulong *)(lStack_1ed8 + (uVar39 >> 6) * 8) >> (uVar39 & 0x3f) & 1) != 0))
          goto LAB_0c1cdf10;
          _auStack_1e18 = 0;
          plStack_1e10 = (long *)0x0;
          ppppppuStack_1e08 = (undefined8 *******)0x0;
          puStack_1dc8 = (undefined *)0x0;
          uStack_1dc0 = 0;
          uStack_1db8 = 0;
          lVar33 = 0x28;
          uVar39 = 0;
          do {
            lVar40 = plVar23[0x17];
            if ((*(byte *)(lVar40 + -0x10 + lVar33) & 1) == 0) {
              alStack_1d98[0] = lVar40 + lVar33 + -0xf;
            }
            else {
              alStack_1d98[0] = *(long *)(lVar40 + lVar33);
            }
            func_0x0470d9a0(&uStack_1f38,&UNK_0141230a,3,0xc,alStack_1d98);
            uVar29 = uStack_1f38 >> 1 & 0x7f;
            uVar31 = (long)&uStack_1f38 + 1U;
            if ((uStack_1f38 & 1) != 0) {
              uVar29 = uStack_1f30;
              uVar31 = uStack_1f28;
            }
            func_0x0412f8c0(&puStack_1dc8,uVar31,uVar29);
            if ((*(ulong *)(lStack_1ed8 + (uVar39 >> 6) * 8) >> (uVar39 & 0x3f) & 1) == 0) {
              uVar29 = uStack_1f38 >> 1 & 0x7f;
              uVar31 = (long)&uStack_1f38 + 1U;
              if ((uStack_1f38 & 1) != 0) {
                uVar29 = uStack_1f30;
                uVar31 = uStack_1f28;
              }
              func_0x0412f8c0(auStack_1e18,uVar31,uVar29);
            }
            if ((uStack_1f38 & 1) != 0) {
              func_0x0412a280(uStack_1f28,uStack_1f38 & 0xfffffffffffffffe);
            }
            uVar39 = uVar39 + 1;
            lVar33 = lVar33 + 0xa8;
          } while (lVar25 - uVar39 != 0);
          lVar25 = plVar23[0x18];
          lVar33 = plVar23[0x17];
          if (lVar25 - lVar33 != 0) {
            lVar40 = 0xa0;
            uVar39 = 0;
            do {
              if ((*(char *)(plVar23[0x17] + lVar40) == '\x01') &&
                 ((*(ulong *)(lStack_1ed8 + (uVar39 >> 6) * 8) >> (uVar39 & 0x3f) & 1) == 0)) {
                func_0x0b63c8a0(uStack_1f10 & 0xffffffff,auStack_1d80,plVar23[0x17] + lVar40 + -0x88
                                ,auStack_1e18,&puStack_1dc8);
              }
              uVar39 = uVar39 + 1;
              lVar40 = lVar40 + 0xa8;
            } while ((lVar25 - lVar33 >> 3) * -0x30c30c30c30c30c3 - uVar39 != 0);
          }
          if (((ulong)puStack_1dc8 & 1) != 0) {
            func_0x0412a280(uStack_1db8,(ulong)puStack_1dc8 & 0xfffffffffffffffe);
          }
          plVar18 = plStack_1f58;
          if ((_auStack_1e18 & 1) != 0) {
            func_0x0412a280(ppppppuStack_1e08,_auStack_1e18 & 0xfffffffffffffffe);
          }
          goto LAB_0c1ce1d0;
        }
      }
joined_r0x0c1ce1dd:
      if ((uStack_1e98 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e98 & 0xff00ffffffffffff) - 8);
        cVar14 = cVar30;
      }
      uStack_1e98 = 0;
      if ((uStack_1ea0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1ea0 & 0xff00ffffffffffff) - 8);
      }
      uStack_1ea0 = 0;
      if ((uStack_1ec0 & 1) != 0) {
        func_0x0412a280(ppppppuStack_1eb0,CONCAT44(uStack_1ebc,uStack_1ec0) & 0xfffffffffffffffe);
      }
      if (lStack_1ed8 != 0) {
        func_0x0412a280(lStack_1ed8,CONCAT71(uStack_1ec7,uStack_1ec8) << 3);
      }
      if ((uStack_1f00 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_1eef,uStack_1ef0),uStack_1f00 & 0xfffffffffffffffe);
      }
      cStack_1078 = cVar14;
      if (cVar14 != '\0') goto LAB_0c1ce2ac;
    }
    if ((uStack_1c22 & 0x80) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,
                 (CONCAT26(uStack_1c22,CONCAT15(uStack_1c23,CONCAT41(uStack_1c27,uStack_1c2b._3_1_))
                          ) & 0xff00ffffffffffff) - 8);
    }
    uVar2 = uStack_1c2b;
    uVar12 = (undefined3)uStack_1c2b;
    uStack_1c2b = uStack_1c2b & 0xffffff;
    uStack_1c27 = 0;
    uStack_1c23 = 0;
    uStack_1c22 = 0;
    if ((uVar2 & 0x8000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,
                 (CONCAT35(uVar12,CONCAT41(uStack_1c2f,bStack_1c30)) & 0xff00ffffffffffff) - 8);
    }
    plVar23 = uStack_1f40;
    if (uStack_1f40 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1f40 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_1f40 + 0x10))(uStack_1f40);
        func_0x0412c2d0(plVar23);
      }
    }
    if (((ulong)dStack_1f68 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)dStack_1f68 & 0xff00ffffffffffff) - 8);
    }
    dStack_1f68 = 0.0;
    if ((uStack_1f70 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f70 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    bVar15 = ~uStack_1ef8._6_1_ | (byte)uStack_1e6c;
    plVar18 = plStack_1eb8;
    pppppppuVar3 = (undefined8 *******)ppppppuStack_1eb0;
    uVar39 = uStack_1ea8;
    uVar31 = uStack_1ea0;
joined_r0x0c1ccb04:
    if ((bVar15 & 1) == 0) {
      plStack_1eb8 = plVar18;
      ppppppuStack_1eb0 = pppppppuVar3;
      uStack_1ea8 = uVar39;
      uStack_1ea0 = uVar31;
      func_0x05ebb920(&ppppplStack_1168,&ppppppuStack_1f18);
      func_0x05ebb920(auStack_1d38,&ppppplStack_1168);
      func_0x05d85c50(&uStack_1108);
      if (pcStack_1118 != (code *)0x0) {
        (*pcStack_1118)(&uStack_1130);
      }
      if (((ulong)uStack_1138 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_1138 & 0xff00ffffffffffff) - 8);
      }
      uStack_1138 = (long ******)0x0;
      if (((ulong)ppppplStack_1140 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_1140 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_1140 = (long *****)0x0;
    }
    else {
      plStack_1eb8 = (long *)0x0;
      ppppppuStack_1eb0 = (undefined8 *******)0x0;
      uStack_1ea8 = 0;
      uStack_1c68 = (uint)uStack_1e98;
      uStack_1e98._4_4_ = (undefined4)(uStack_1e98 >> 0x20);
      uStack_1c64 = uStack_1e98._4_4_;
      uStack_1ea0 = 0;
      uStack_1e98 = 0;
      _uStack_1e90 = 0;
      uStack_1c58 = (uint)uStack_1e88;
      uStack_1e88._4_4_ = (undefined4)((ulong)uStack_1e88 >> 0x20);
      uStack_1c54 = uStack_1e88._4_4_;
      uStack_1c50 = (uint)uStack_1e80;
      uStack_1e80._4_4_ = (undefined4)((ulong)uStack_1e80 >> 0x20);
      uStack_1c4c = uStack_1e80._4_4_;
      uStack_1e88 = 0;
      uStack_1e80 = 0;
      uStack_1e78 = 0;
      uStack_1dcc = (byte)uStack_1e6c;
      _auStack_1e18 = 0;
      plStack_1e10 = (long *)0x0;
      ppppppuStack_1e08 = (undefined8 *******)0x0;
      uStack_1e00 = 0;
      uStack_1df8 = 0;
      uStack_1df0 = 0;
      uStack_1de8 = 0;
      uStack_1de0 = 0;
      uStack_1dd8 = 0;
      uStack_1c3c = (byte)uStack_1e6c;
      ppppplStack_1168 = (long *****)0x0;
      ppppplStack_1160 = (long *****)0x0;
      ppppplStack_1158 = (long *****)0x0;
      ppppplStack_1150._1_7_ = (uint7)((ulong)ppppplStack_1150 >> 8);
      ppppplStack_1150._0_1_ = 1;
      ppppplStack_1148 = (long *****)0x0;
      ppppplStack_1140 = (long *****)0x0;
      uStack_1138 = (long ******)0x0;
      uStack_1120 = &UNK_0488e0b0;
      uStack_1110 = 0x48b5725f;
      pcStack_1118 = (code *)0x0;
      uStack_110c = 0;
      uStack_1130 = 0;
      uStack_10d8 = 0;
      uStack_10d0 = 0;
      uStack_10e8 = 0;
      uStack_10e0 = 0;
      uStack_10f8 = 0;
      uStack_10f0 = 0;
      uStack_1108 = 0;
      uStack_1100 = 0;
      uStack_10c8 = 0;
      uStack_10c0 = 0xfefffffc;
      uStack_10bc = 0;
      plStack_1c88 = plVar18;
      ppppppuStack_1c80 = pppppppuVar3;
      uStack_1c78 = uVar39;
      dStack_1c70 = (double)uVar31;
      func_0x0c4a4310(&uStack_1108,&plStack_1c88);
      ppppplStack_1150 = (long *****)((ulong)ppppplStack_1150._1_7_ << 8);
      func_0x05ebb920(&ppppuStack_1c38,&ppppplStack_1168);
      func_0x05d85c50(&uStack_1108);
      if (pcStack_1118 != (code *)0x0) {
        (*pcStack_1118)(&uStack_1130);
      }
      if (((ulong)uStack_1138 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_1138 & 0xff00ffffffffffff) - 8);
      }
      uStack_1138 = (long ******)0x0;
      if (((ulong)ppppplStack_1140 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_1140 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_1140 = (long *****)0x0;
      func_0x05d85c50(&plStack_1c88);
      func_0x05ebb920(&ppppplStack_1168,&ppppuStack_1c38);
      func_0x05ebb920(auStack_1d38,&ppppplStack_1168);
      func_0x05d85c50(&uStack_1108);
      if (pcStack_1118 != (code *)0x0) {
        (*pcStack_1118)(&uStack_1130);
      }
      if (((ulong)uStack_1138 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_1138 & 0xff00ffffffffffff) - 8);
      }
      uStack_1138 = (long ******)0x0;
      if (((ulong)ppppplStack_1140 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)ppppplStack_1140 & 0xff00ffffffffffff) - 8);
      }
      ppppplStack_1140 = (long *****)0x0;
      func_0x05d85c50(auStack_1bd8);
      if (pcStack_1be8 != (code *)0x0) {
        (*pcStack_1be8)(auStack_1c00);
      }
      if ((uStack_1c08 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c08 & 0xff00ffffffffffff) - 8);
      }
      uStack_1c08 = 0;
      if ((uStack_1c10 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c10 & 0xff00ffffffffffff) - 8);
      }
      uStack_1c10 = 0;
      func_0x05d85c50(auStack_1e18);
    }
    func_0x05d85c50(&plStack_1eb8);
    if ((code *)CONCAT71(uStack_1ec7,uStack_1ec8) != (code *)0x0) {
      (*(code *)CONCAT71(uStack_1ec7,uStack_1ec8))(&uStack_1ee0);
    }
    if ((uStack_1ee4 & 0x800000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT44(uStack_1ee4,uStack_1ee8) & 0xff00ffffffffffff) - 8);
    }
    uStack_1ee8 = 0;
    uStack_1ee4 = 0;
    if ((uStack_1eef & 0x800000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(CONCAT71(uStack_1eef,uStack_1ef0) & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_1f28 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f28 & 0xff00ffffffffffff) - 8);
    }
    uStack_1f28 = 0;
    if ((uStack_1f30 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f30 & 0xff00ffffffffffff) - 8);
    }
    puStack_1dc8 = &UNK_0f47dea0;
    if ((uStack_1da0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1da0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1da0 = 0;
    if ((uStack_1da8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1da8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1da8 = 0;
    func_0x04863610(&uStack_1dc0);
    func_0x04863610(&uStack_1f48);
    func_0x04863610(alStack_1d98);
    if ((cStack_1d12 != '\x01') || ((bStack_1c8c & 1) != 0)) {
      pppppuStack_1b28 = pppppuStack_1cd8;
      uStack_1b20 = uStack_1cd0;
      ppppplStack_1b18 = ppppplStack_1cc8;
      pppppuStack_1cd8 = (undefined8 ******)0x0;
      uStack_1cd0 = 0;
      ppppplStack_1cc8 = (long *****)0x0;
      ppppplStack_1b10 = ppppplStack_1cc0;
      ppppplStack_1b08 = ppppplStack_1cb8;
      uStack_1b00 = uStack_1cb0;
      ppppplStack_1cc0 = (long *****)0x0;
      ppppplStack_1cb8 = (long *****)0x0;
      uStack_1cb0 = 0;
      uStack_1af8 = (undefined4)uStack_1ca8;
      uStack_1af4 = uStack_1ca8._4_4_;
      uStack_1af0 = (undefined4)uStack_1ca0;
      uStack_1aec = uStack_1ca0._4_4_;
      uStack_1ae8 = uStack_1c98;
      uStack_1ca8 = 0;
      uStack_1ca0 = 0;
      uStack_1c98 = 0;
      bStack_1adc = bStack_1c8c;
      uStack_1ae0 = uStack_1c90;
      func_0x0c1cf510(puStack_1f60,&pppppuStack_1b28);
      func_0x05d85c50(&pppppuStack_1b28);
      goto LAB_0c1cec82;
    }
    ppppppplVar20 = (long *******)&ppppplStack_1cc8;
    ppppppplVar22 = (long *******)&ppppplStack_1ce8;
    ppppppplVar21 = apppppplStack_1d00;
    if (cStack_1cdc != '\x02') {
      ppppppplVar20 = (long *******)(apppppplStack_1d00[0] + 7);
      ppppppplVar22 = (long *******)(apppppplStack_1d00[0] + 3);
      ppppppplVar21 = (long *******)apppppplStack_1d00[0];
    }
    bVar43 = iStack_1ce0 == -0x6e50b313;
    ppppppplVar28 = (long *******)0x0;
    if (bVar43) {
      ppppppplVar28 = ppppppplVar21;
    }
    ppppplStack_1158 = (long *****)ppppppplVar28[2];
    ppppplStack_1168 = (long *****)*ppppppplVar28;
    ppppplStack_1160 = (long *****)ppppppplVar28[1];
    *ppppppplVar28 = (long ******)0x0;
    ppppppplVar28[1] = (long ******)0x0;
    ppppppplVar28[2] = (long ******)0x0;
    ppppppplVar21 = (long *******)0x18;
    if (bVar43) {
      ppppppplVar21 = ppppppplVar22;
    }
    ppppplStack_1150 = (long *****)CONCAT71(ppppplStack_1150._1_7_,*(undefined1 *)ppppppplVar21);
    ppppplStack_1148 = (long *****)((ulong)ppppplStack_1148 & 0xffffffffffffff00);
    uStack_1130 = uStack_1130 & 0xffffffffffffff00;
    ppppppplVar22 = (long *******)0x38;
    if (bVar43) {
      ppppppplVar22 = ppppppplVar20;
    }
    if (*(char *)ppppppplVar22 == '\x01') {
      ppppppplVar22 = (long *******)&iStack_1ce0;
      if (cStack_1cdc != '\x02') {
        ppppppplVar22 = (long *******)(apppppplStack_1d00[0] + 4);
      }
      ppppppplVar21 = (long *******)0x20;
      if (iStack_1ce0 == -0x6e50b313) {
        ppppppplVar21 = ppppppplVar22;
      }
      uStack_1138 = ppppppplVar21[2];
      ppppplStack_1148 = (long *****)*ppppppplVar21;
      ppppplStack_1140 = (long *****)ppppppplVar21[1];
      *ppppppplVar21 = (long ******)0x0;
      ppppppplVar21[1] = (long ******)0x0;
      ppppppplVar21[2] = (long ******)0x0;
      uStack_1130 = CONCAT71(uStack_1130._1_7_,1);
    }
    ppppppplVar37 = (long *******)appppplStack_14f0;
    ppppppplVar22 = (long *******)appppplStack_1540;
    ppppppplVar21 = (long *******)appppplStack_17e0;
    ppppppplVar20 = (long *******)&ppppplStack_1cb8;
    ppppppplVar28 = (long *******)&ppppplStack_1cc0;
    if (cStack_1cdc != '\x02') {
      ppppppplVar37 = (long *******)(apppppplStack_1d00[0] + 0x102);
      ppppppplVar22 = (long *******)(apppppplStack_1d00[0] + 0xf8);
      ppppppplVar21 = (long *******)(apppppplStack_1d00[0] + 0xa4);
      ppppppplVar20 = (long *******)(apppppplStack_1d00[0] + 9);
      ppppppplVar28 = (long *******)(apppppplStack_1d00[0] + 8);
    }
    bVar43 = iStack_1ce0 == -0x6e50b313;
    ppppppplVar19 = (long *******)0x40;
    if (bVar43) {
      ppppppplVar19 = ppppppplVar28;
    }
    ppppppplVar28 = (long *******)0x48;
    if (bVar43) {
      ppppppplVar28 = ppppppplVar20;
    }
    uStack_1128 = CONCAT62(uStack_1128._2_6_,*(undefined2 *)ppppppplVar19);
    ppppppplVar20 = (long *******)0x520;
    if (bVar43) {
      ppppppplVar20 = ppppppplVar21;
    }
    ppppppplVar21 = (long *******)0x7c0;
    if (bVar43) {
      ppppppplVar21 = ppppppplVar22;
    }
    ppppppplVar22 = (long *******)0x810;
    if (bVar43) {
      ppppppplVar22 = ppppppplVar37;
    }
    func_0x0c23f3a0(&uStack_1120,ppppppplVar28);
    func_0x0c2000f0(auStack_c48,ppppppplVar20);
    plVar18 = plStack_1f58;
    ppppplStack_9a8 = (long *****)((ulong)ppppplStack_9a8 & 0xffffffffffffff00);
    uStack_958 = 0;
    if (*(char *)ppppppplVar22 == '\x01') {
      ppppppplVar22 = (long *******)&ppppplStack_14f8;
      if (cStack_1cdc != '\x02') {
        ppppppplVar22 = (long *******)(apppppplStack_1d00[0] + 0x101);
      }
      uStack_960 = 0;
      ppppppplVar20 = (long *******)0x808;
      if (iStack_1ce0 == -0x6e50b313) {
        ppppppplVar20 = ppppppplVar22;
      }
      if (*(char *)ppppppplVar20 == '\x01') {
        ppppppplVar20 = (long *******)&ppppplStack_1500;
        ppppppplVar22 = (long *******)&ppppplStack_1528;
        if (cStack_1cdc != '\x02') {
          ppppppplVar20 = (long *******)(apppppplStack_1d00[0] + 0x100);
          ppppppplVar22 = (long *******)(apppppplStack_1d00[0] + 0xfb);
        }
        ppppplStack_998 = (long *****)ppppppplVar21[2];
        ppppplStack_9a8 = (long *****)*ppppppplVar21;
        ppppplStack_9a0 = (long *****)ppppppplVar21[1];
        *ppppppplVar21 = (long ******)0x0;
        ppppppplVar21[1] = (long ******)0x0;
        ppppppplVar21[2] = (long ******)0x0;
        ppppppplVar21 = (long *******)0x7d8;
        if (iStack_1ce0 == -0x6e50b313) {
          ppppppplVar21 = ppppppplVar22;
        }
        uStack_990 = *(undefined2 *)ppppppplVar21;
        auStack_988[0] = 0;
        ppppppplVar22 = (long *******)0x800;
        if (iStack_1ce0 == -0x6e50b313) {
          ppppppplVar22 = ppppppplVar20;
        }
        uStack_968 = 0xffffffff;
        uVar2 = *(uint *)ppppppplVar22;
        if ((ulong)uVar2 != 0xffffffff) {
          ppppppuStack_1f18 = (undefined8 ******)auStack_988;
          ppppppplVar22 = (long *******)&ppppplStack_1520;
          if (cStack_1cdc != '\x02') {
            ppppppplVar22 = (long *******)(apppppplStack_1d00[0] + 0xfc);
          }
          ppppppplVar21 = (long *******)0x7e0;
          if (iStack_1ce0 == -0x6e50b313) {
            ppppppplVar21 = ppppppplVar22;
          }
          (**(code **)(&UNK_0f354288 + (ulong)uVar2 * 8))(&ppppppuStack_1f18,ppppppplVar21);
          uStack_968 = uVar2;
        }
        uStack_960 = 1;
      }
      uStack_958 = 1;
    }
    func_0x0c1cf700(&uStack_1a88,&ppppplStack_1168);
    func_0x0c1cf830(&ppppplStack_1168);
    plVar1 = plStack_1e20;
    cVar14 = func_0x04865100(plStack_1e20,&UNK_01416889);
    plVar23 = plStack_1f50;
    if (cVar14 != '\0') {
      uVar17 = func_0x048648e0(plVar1,&UNK_01416889);
      if (cStack_1170 == '\x01') {
        func_0x04863740(auStack_1180,uVar17);
      }
      else {
        func_0x04863480(auStack_1180,uVar17);
        cStack_1170 = '\x01';
      }
    }
    func_0x04863480(auStack_1d80,plVar1);
    ppppppuStack_1f18 = (undefined8 ******)((ulong)ppppppuStack_1f18 & 0xffffffffffffff00);
    uStack_1f00 = uStack_1f00 & 0xffffffffffffff00;
    uStack_1ec8 = 0;
    uStack_1ec0 = uStack_1ec0 & 0xffffff00;
    uStack_1ea8 = uStack_1ea8 & 0xffffffffffffff00;
    uVar39 = uStack_1ea0 >> 0x28;
    uVar2 = (uint)uStack_1ea0;
    uStack_1ea0._0_5_ = (uint5)(uVar2 & 0xffffff00);
    uStack_1ea0 = CONCAT35((int3)uVar39,(uint5)uStack_1ea0);
    uVar39 = uStack_1e98 >> 0x28;
    uStack_1e98._0_4_ = (uint)uStack_1e98 & 0xffffff00;
    uStack_1e98._0_5_ = (uint5)(uint)uStack_1e98;
    uStack_1e98 = CONCAT35((int3)uVar39,(uint5)uStack_1e98);
    uVar39 = (ulong)_uStack_1e90 >> 0x28;
    uVar2 = (uint)_uStack_1e90;
    uStack_1e90 = (uint5)(uVar2 & 0xffffff00);
    _uStack_1e90 = CONCAT35((int3)uVar39,uStack_1e90);
    uVar39 = (ulong)uStack_1e88 >> 0x28;
    uStack_1e88._0_4_ = (uint)uStack_1e88 & 0xffffff00;
    uStack_1e88._0_5_ = (uint5)(uint)uStack_1e88;
    uStack_1e88 = CONCAT35((int3)uVar39,(uint5)uStack_1e88);
    uVar39 = (ulong)uStack_1e80 >> 0x28;
    uStack_1e80._0_4_ = (uint)uStack_1e80 & 0xffffff00;
    uStack_1e80._0_5_ = (uint5)(uint)uStack_1e80;
    uStack_1e80 = CONCAT35((int3)uVar39,(uint5)uStack_1e80);
    uStack_1e70 = uStack_1e70 & 0xffffff00;
    uStack_1e48 = 0;
    uStack_1e40 = 0;
    uStack_1e30 = 0;
    uStack_1ee8 = 0;
    uStack_1ee4 = 0;
    uStack_1ee0 = uStack_1ee0 & 0xffffff00;
    uStack_1ef8 = 0;
    uStack_1ef0 = 0;
    uStack_1eef = 0;
    uStack_1e78 = uStack_1e78 & 0xffffff0000000000;
    uStack_1e6c = 0;
    uStack_1e64 = 0;
    uStack_1e5f = 0;
    uStack_1e5c = 0;
    func_0x0c240070(&ppppplStack_1168,&ppppppuStack_1f18);
    cStack_1078 = '\x01';
    func_0x0c1d00d0(&ppppppuStack_1f18);
    func_0x04864f30(auStack_1b88,auStack_1d80,&UNK_01416889);
    func_0x04863610(auStack_1b88);
    cVar14 = func_0x0d678aa0(plVar23 + 0x22);
    if (cVar14 != '\0') {
      ppppppuStack_1f78 = (undefined8 ******)0x0;
      uStack_1f70 = 0;
      dStack_1f68 = 0.0;
      cVar14 = func_0x0551ca70(plVar18,&UNK_0f356110);
      if (cVar14 == '\0') {
        func_0x05d54750(&ppppppuStack_1f18,&UNK_0f356110);
        dVar41 = dStack_1f68;
        ppppppuStack_1f78 = ppppppuStack_1f18;
        uVar39 = uStack_1f10;
        uStack_1f10 = uStack_1f70;
        dStack_1f68 = dStack_1f08;
        dStack_1f08 = dVar41;
        uStack_1f70 = uVar39;
        if (((ulong)dVar41 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)dVar41 & 0xff00ffffffffffff) - 8);
        }
        dStack_1f08 = 0.0;
        if ((uStack_1f10 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f10 & 0xff00ffffffffffff) - 8);
        }
      }
      else {
        cVar14 = func_0x0551ca70(plVar18,&UNK_0f356138);
        if (cVar14 == '\0') {
          func_0x05d54750(&ppppppuStack_1f18,&UNK_0f356138);
          dVar41 = dStack_1f68;
          ppppppuStack_1f78 = ppppppuStack_1f18;
          uVar39 = uStack_1f10;
          uStack_1f10 = uStack_1f70;
          dStack_1f68 = dStack_1f08;
          dStack_1f08 = dVar41;
          uStack_1f70 = uVar39;
          if (((ulong)dVar41 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)dVar41 & 0xff00ffffffffffff) - 8);
          }
          dStack_1f08 = 0.0;
          if ((uStack_1f10 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(uStack_1f10 & 0xff00ffffffffffff) - 8);
          }
        }
        else if (*(char *)((long)plVar18 + 7) == '\0') {
          uVar39 = plVar18[1];
          uVar6 = (ushort)(uVar39 >> 0x30);
          if ((uVar39 & 0x80000000000000) == 0) {
            uVar31 = (ulong)(uVar6 & 0x7f);
          }
          else {
            uVar31 = *(ulong *)((uVar39 & 0xff00ffffffffffff) - 8);
          }
          bVar43 = *(short *)((long)plVar18 + 2) != 0x14;
          bVar8 = (short)(int)*plVar18 != 1;
          if (((uVar31 != 0) || (bVar43 || bVar8)) || (*(short *)((long)plVar18 + 4) != 0x14)) {
            if ((uVar39 & 0x80000000000000) == 0) {
              uVar39 = (ulong)(uVar6 & 0x7f);
            }
            else {
              uVar39 = *(ulong *)((uVar39 & 0xff00ffffffffffff) - 8);
            }
            if (((bVar43 || bVar8) || *(short *)((long)plVar18 + 4) != 10) || (uVar39 != 0))
            goto LAB_0c1cd33d;
            func_0x05d54750(&ppppppuStack_1f18,&UNK_0f356188);
            dVar41 = dStack_1f68;
            ppppppuStack_1f78 = ppppppuStack_1f18;
            uVar39 = uStack_1f10;
            uStack_1f10 = uStack_1f70;
            dStack_1f68 = dStack_1f08;
            dStack_1f08 = dVar41;
            uStack_1f70 = uVar39;
            if (((ulong)dVar41 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)dVar41 & 0xff00ffffffffffff) - 8);
            }
            dStack_1f08 = 0.0;
            if ((uStack_1f10 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1f10 & 0xff00ffffffffffff) - 8);
            }
          }
          else {
            func_0x05d54750(&ppppppuStack_1f18,&UNK_0f356160);
            dVar41 = dStack_1f68;
            ppppppuStack_1f78 = ppppppuStack_1f18;
            uVar39 = uStack_1f10;
            uStack_1f10 = uStack_1f70;
            dStack_1f68 = dStack_1f08;
            dStack_1f08 = dVar41;
            uStack_1f70 = uVar39;
            if (((ulong)dVar41 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)dVar41 & 0xff00ffffffffffff) - 8);
            }
            dStack_1f08 = 0.0;
            if ((uStack_1f10 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1f10 & 0xff00ffffffffffff) - 8);
            }
          }
        }
        else {
LAB_0c1cd33d:
          cVar14 = func_0x0551ca70(plVar18,&UNK_0f3561b0);
          if (cVar14 == '\0') {
            func_0x05d54750(&ppppppuStack_1f18,&UNK_0f3561b0);
            dVar41 = dStack_1f68;
            ppppppuStack_1f78 = ppppppuStack_1f18;
            uVar39 = uStack_1f10;
            uStack_1f10 = uStack_1f70;
            dStack_1f68 = dStack_1f08;
            dStack_1f08 = dVar41;
            uStack_1f70 = uVar39;
            if (((ulong)dVar41 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)dVar41 & 0xff00ffffffffffff) - 8);
            }
            dStack_1f08 = 0.0;
            if ((uStack_1f10 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1f10 & 0xff00ffffffffffff) - 8);
            }
          }
          else {
            func_0x05d54750(&ppppppuStack_1f18,&UNK_0f3561d8);
            dVar41 = dStack_1f68;
            ppppppuStack_1f78 = ppppppuStack_1f18;
            uVar39 = uStack_1f10;
            uStack_1f10 = uStack_1f70;
            dStack_1f68 = dStack_1f08;
            dStack_1f08 = dVar41;
            uStack_1f70 = uVar39;
            if (((ulong)dVar41 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)dVar41 & 0xff00ffffffffffff) - 8);
            }
            dStack_1f08 = 0.0;
            if ((uStack_1f10 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_1f10 & 0xff00ffffffffffff) - 8);
            }
          }
        }
      }
      ppppppuVar24 = ppppppuStack_1f78;
      uStack_1c1a = 0;
      uStack_1c18 = 0;
      bStack_1c30 = 0x2a;
      uStack_1c2f = _DAT_012ccc65;
      uStack_1c2b = _UNK_012ccc69;
      uStack_1c27 = _UNK_012ccc6d;
      uStack_1c23 = (undefined1)_UNK_012ccc71;
      uStack_1c22 = 0x5f6d;
      uStack_1c20 = 0x73;
      uStack_1c1f = 0x616d656863;
      ppppuStack_1c38 = (undefined8 *****)0x92285c3972bc1072;
      plStack_1c88 = plVar23;
      ppppppuStack_1c80 = ppppppuStack_1f78;
      uVar39 = uStack_1f70;
      if ((uStack_1f70 & 0x80000000000000) != 0) {
        uVar39 = uStack_1f70 & 0xff00ffffffffffff;
        lVar33 = *(long *)(uVar39 - 8);
        lVar25 = lVar33 + 9;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
        if (lVar25 != 0 && plVar18 == (long *)0x0) {
          func_0x0eec74c0(lVar25,8);
        }
        *plVar18 = lVar33;
        memcpy(plVar18 + 1,uVar39,lVar33);
        *(undefined1 *)((long)plVar18 + lVar33 + 8) = 0;
        uVar39 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      dStack_1c70 = 0.0;
      dVar41 = dStack_1f68;
      uStack_1c78 = uVar39;
      if (((ulong)dStack_1f68 & 0x80000000000000) != 0) {
        uVar31 = (ulong)dStack_1f68 & 0xff00ffffffffffff;
        lVar33 = *(long *)(uVar31 - 8);
        lVar25 = lVar33 + 9;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
        if (lVar25 != 0 && plVar18 == (long *)0x0) {
          func_0x0eec74c0(lVar25,8);
        }
        *plVar18 = lVar33;
        memcpy(plVar18 + 1,uVar31,lVar33);
        *(undefined1 *)((long)plVar18 + lVar33 + 8) = 0;
        dVar41 = (double)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      dStack_1c70 = dVar41;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (plVar18 == (long *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      *plVar18 = (long)&UNK_0f35b2d0;
      plVar18[1] = (long)plStack_1f50;
      plVar18[2] = (long)ppppppuVar24;
      plVar18[3] = uVar39;
      uStack_1c78 = 0;
      plVar18[4] = (long)dVar41;
      dStack_1c70 = 0.0;
      plStack_1e20 = plVar18;
      FUN_0412d680(0xf6b4d60);
      if (DAT_0f6b4d58 == '\0') goto LAB_0c1cee18;
      goto LAB_0c1cd959;
    }
  }
  func_0x04863610(auStack_1d80);
  if (cStack_1078 == '\x01') {
    func_0x0c1cf8f0(auStack_1270,&ppppplStack_1168);
    func_0x0c1d00d0(&ppppplStack_1168);
    func_0x0c1cfc40(auStack_950,&uStack_1a88);
    uStack_1128 = uStack_1c98;
    uStack_1130 = uStack_1ca0;
    uStack_1138 = (long ******)uStack_1ca8;
    ppppplStack_1140 = (long *****)uStack_1cb0;
    ppppplStack_1148 = ppppplStack_1cb8;
    ppppplStack_1150 = ppppplStack_1cc0;
    ppppplStack_1158 = ppppplStack_1cc8;
    ppppplStack_1160 = (long *****)uStack_1cd0;
    ppppplStack_1168 = pppppuStack_1cd8;
    pppppuStack_1cd8 = (undefined8 ******)0x0;
    uStack_1cd0 = 0;
    ppppplStack_1cc8 = (long *****)0x0;
    ppppplStack_1cc0 = (long *****)0x0;
    ppppplStack_1cb8 = (long *****)0x0;
    uStack_1cb0 = 0;
    uStack_1ca8 = 0;
    uStack_1ca0 = 0;
    uStack_1c98 = 0;
    uStack_1a90 = uStack_1c90;
    bStack_1a8c = bStack_1c8c;
    uStack_1ad8 = 0;
    uStack_1ad0 = 0;
    uStack_1ac8 = 0;
    uStack_1ac0 = 0;
    uStack_1ab8 = 0;
    uStack_1ab0 = 0;
    uStack_1aa8 = 0;
    uStack_1aa0 = 0;
    uStack_1a98 = 0;
    uStack_1120._0_5_ = CONCAT14(bStack_1c8c,uStack_1c90);
    *puStack_1f60 = 0;
    puStack_1f60[1] = 0;
    puStack_1f60[2] = 0;
    *(undefined1 *)(puStack_1f60 + 3) = 1;
    puStack_1f60[4] = *plVar18;
    puStack_1f60[5] = 0;
    uVar39 = plVar18[1];
    if ((uVar39 & 0x80000000000000) != 0) {
      lVar33 = *(long *)((uVar39 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar33 + 9;
      plVar23 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar23 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar23 = lVar33;
      memcpy(plVar23 + 1,uVar39 & 0xff00ffffffffffff,lVar33);
      *(undefined1 *)((long)plVar23 + lVar33 + 8) = 0;
      uVar39 = (ulong)(plVar23 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puStack_1f60[5] = uVar39;
    puStack_1f60[6] = 0;
    uVar39 = plVar18[2];
    if ((uVar39 & 0x80000000000000) != 0) {
      lVar33 = *(long *)((uVar39 & 0xff00ffffffffffff) - 8);
      lVar25 = lVar33 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
      if (lVar25 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar25,8);
      }
      *plVar18 = lVar33;
      memcpy(plVar18 + 1,uVar39 & 0xff00ffffffffffff,lVar33);
      *(undefined1 *)((long)plVar18 + lVar33 + 8) = 0;
      uVar39 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puStack_1f60[6] = uVar39;
    puStack_1f60[7] = 0;
    puStack_1f60[9] = &UNK_0c2c8700;
    *(undefined4 *)(puStack_1f60 + 0xb) = 0x7f86bf24;
    puStack_1f60[10] = &UNK_0c2c8950;
    *(undefined1 *)((long)puStack_1f60 + 0x5c) = 1;
    lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x920);
    if (lVar25 == 0) {
      func_0x0eec74c0(0x920,0);
    }
    func_0x0c1cfc40(lVar25,auStack_950);
    puStack_1f60[7] = lVar25;
    puStack_1f60[0xc] = ppppplStack_1168;
    puStack_1f60[0xd] = ppppplStack_1160;
    puStack_1f60[0xe] = ppppplStack_1158;
    ppppplStack_1168 = (long *****)0x0;
    ppppplStack_1160 = (long *****)0x0;
    ppppplStack_1158 = (long *****)0x0;
    puStack_1f60[0xf] = ppppplStack_1150;
    puStack_1f60[0x10] = ppppplStack_1148;
    puStack_1f60[0x11] = ppppplStack_1140;
    ppppplStack_1150 = (long *****)0x0;
    ppppplStack_1148 = (long *****)0x0;
    ppppplStack_1140 = (long *****)0x0;
    *(undefined4 *)(puStack_1f60 + 0x12) = (undefined4)uStack_1138;
    *(undefined4 *)((long)puStack_1f60 + 0x94) = uStack_1138._4_4_;
    *(undefined4 *)(puStack_1f60 + 0x13) = (undefined4)uStack_1130;
    *(undefined4 *)((long)puStack_1f60 + 0x9c) = uStack_1130._4_4_;
    puStack_1f60[0x14] = uStack_1128;
    uStack_1138 = (long ******)0x0;
    uStack_1130 = 0;
    uStack_1128 = 0;
    *(undefined1 *)((long)puStack_1f60 + 0xac) = uStack_1120._4_1_;
    *(undefined4 *)(puStack_1f60 + 0x15) = (undefined4)uStack_1120;
    func_0x05d85c50(&ppppplStack_1168);
    func_0x05d85c50(&uStack_1ad8);
    if (cStack_38 == '\x01') {
      func_0x04863610(auStack_48);
    }
    func_0x0c1d00d0(auStack_138);
    func_0x0c1cf830(auStack_950);
    plVar18 = (long *)plStack_1f50[0x30];
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x30))(plVar18,puStack_1f60);
    }
  }
  else {
    ppppppuStack_1f18 = (undefined8 ******)0x0;
    uStack_1f10 = 0;
    dStack_1f08 = 0.0;
    uStack_1f00 = 0;
    uStack_1ef8 = 0;
    uStack_1ef0 = 0;
    uStack_1eef = 0;
    uStack_1ee8 = 0;
    uStack_1ee4 = 0;
    uStack_1ee0 = 0;
    uStack_1edc = 0;
    lStack_1ed8 = 0;
    uStack_1ed0 = CONCAT22(0xfeff,(short)uStack_1c90);
    uStack_1ecc = 0;
    lStack_1d58 = 0;
    lStack_1d50 = 0;
    lStack_1d48 = 0;
    puStack_1d60 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1d60 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar17 = _UNK_0129a93f;
    uStack_1d70 = 0x21;
    uStack_1d68 = 0x1e;
    *(ulong *)((long)puStack_1d60 + 0xe) = CONCAT62(_UNK_0129a939,_DAT_0129a937);
    *(undefined8 *)((long)puStack_1d60 + 0x16) = uVar17;
    uVar10 = _UNK_0129a931;
    uVar9 = _UNK_0129a92d;
    uVar7 = CONCAT22(_DAT_0129a937,_UNK_0129a935);
    *puStack_1d60 = _DAT_0129a929;
    puStack_1d60[1] = uVar9;
    puStack_1d60[2] = uVar10;
    puStack_1d60[3] = uVar7;
    *(undefined1 *)((long)puStack_1d60 + 0x1e) = 0;
    func_0x0d6b13c0(&ppppppuStack_1f18,8,&lStack_1d58,&uStack_1d70);
    if ((uStack_1d70 & 1) != 0) {
      func_0x0412a280(puStack_1d60,uStack_1d70 & 0xfffffffffffffffe);
    }
    lVar33 = lStack_1d58;
    lVar25 = lStack_1d50;
    if (lStack_1d58 != 0) {
      for (; lVar33 != lVar25; lVar25 = lVar25 + -0x20) {
        if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar25 + -8),
                          *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_1d50 = lVar33;
      func_0x0412a280(lStack_1d58,lStack_1d48 - lStack_1d58);
    }
    pppppuStack_1b78 = ppppppuStack_1f18;
    uStack_1b70 = uStack_1f10;
    uStack_1b68 = dStack_1f08;
    ppppppuStack_1f18 = (undefined8 *******)0x0;
    uStack_1f10 = 0;
    dStack_1f08 = 0.0;
    uStack_1b60 = uStack_1f00;
    uStack_1b58 = uStack_1ef8;
    uStack_1b50 = CONCAT71(uStack_1eef,uStack_1ef0);
    uStack_1f00 = 0;
    uStack_1ef8 = 0;
    uStack_1ef0 = 0;
    uStack_1eef = 0;
    uStack_1b48 = uStack_1ee8;
    uStack_1b44 = uStack_1ee4;
    uStack_1b40 = uStack_1ee0;
    uStack_1b3c = uStack_1edc;
    uStack_1b38 = lStack_1ed8;
    uStack_1ee8 = 0;
    uStack_1ee4 = 0;
    uStack_1ee0 = 0;
    uStack_1edc = 0;
    lStack_1ed8 = 0;
    uStack_1b2c = uStack_1ecc;
    uStack_1b30 = uStack_1ed0;
    func_0x0c1cf510(puStack_1f60,&pppppuStack_1b78);
    func_0x05d85c50(&pppppuStack_1b78);
    func_0x05d85c50(&ppppppuStack_1f18);
    func_0x0c1d00d0(&ppppplStack_1168);
  }
LAB_0c1cec82:
  func_0x05d85c50(&pppppuStack_1cd8);
  if ((long ******)ppppplStack_1ce8 != (long ******)0x0) {
    (*(code *)ppppplStack_1ce8)(apppppplStack_1d00);
  }
  if ((uStack_1d08 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d08 & 0xff00ffffffffffff) - 8);
  }
  uStack_1d08 = 0;
  if ((uStack_1d10 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d10 & 0xff00ffffffffffff) - 8);
  }
  if (cStack_1170 == '\x01') {
    func_0x04863610(auStack_1180);
  }
  func_0x0c1d00d0(auStack_1270);
  func_0x0c1cf830(&uStack_1a88);
  return puStack_1f60;
LAB_0c1cdf10:
  uVar39 = uVar39 + 1;
  pcVar26 = pcVar26 + 0xa8;
  if (lVar25 - uVar39 == 0) goto joined_r0x0c1ce1dd;
  goto LAB_0c1cdf22;
}



/* ---- referenced strings ----
 * 0x129a929  Invalid legacy components data
 * 0x129a937   components data
 * 0x12ccc65  component_item_schema
 */
