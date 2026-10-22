/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee8ff50 (ELF vaddr 0xed8ff50)
 * Label: caller-of-callee
 * Body:  [[0ee8ff50, 0ee909d4] [0ee909e0, 0ee90acc] [0ee90ad0, 0ee90b71] [0ee90b80, 0ee90e73] [0ee90e80, 0ee90fe7] [0ee90ff0, 0ee91098] [0ee910a0, 0ee9125b] [0ee91260, 0ee919c8] [0ee919d0, 0ee9299e] [0ee92c7c, 0ee92cfb]]
 * Ghidra: FUN_0ee8ff50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee8ff50(undefined4 *param_1,long param_2,long *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long **pplVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_19e8 [8];
  long *plStack_19e0;
  long *plStack_19d8;
  long *plStack_19d0;
  long *plStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  byte bStack_19a8;
  undefined8 uStack_1998;
  ulong uStack_1990;
  long lStack_1988;
  long *plStack_1978;
  long *plStack_1970;
  long *plStack_1968;
  long *plStack_1960;
  long *plStack_1958;
  long *plStack_1950;
  long *plStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  ulong uStack_1928;
  long *plStack_1920;
  long *plStack_1918;
  long lStack_1910;
  long *plStack_1908;
  long *plStack_1900;
  long *plStack_18f8;
  long *plStack_18f0;
  long *plStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  ulong uStack_18c8;
  long lStack_18b8;
  long lStack_18b0;
  long lStack_18a8;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined1 auStack_1888 [8];
  long *plStack_1880;
  long *plStack_1878;
  long *plStack_1870;
  long *plStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  byte bStack_1848;
  undefined4 *puStack_1838;
  long lStack_1830;
  undefined *puStack_1828;
  byte bStack_1820;
  undefined1 uStack_181f;
  undefined6 uStack_181e;
  undefined8 uStack_1810;
  long lStack_1808;
  ulong uStack_1800;
  undefined8 uStack_17f8;
  undefined1 uStack_17f0;
  long *plStack_17e8;
  long *plStack_17e0;
  long *plStack_17d8;
  long *plStack_17d0;
  long *plStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  byte bStack_17a8;
  long *plStack_1798;
  long *plStack_1790;
  long *plStack_1788;
  long *plStack_1780;
  long *plStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  byte bStack_1758;
  long *plStack_1748;
  long *plStack_1740;
  long *plStack_1738;
  long *plStack_1730;
  long *plStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  byte bStack_1708;
  long *plStack_16f8;
  long *plStack_16f0;
  long *plStack_16e8;
  long *plStack_16e0;
  long *plStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  byte bStack_16b8;
  long *plStack_16a8;
  long *plStack_16a0;
  long *plStack_1698;
  long *plStack_1690;
  long *plStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  byte bStack_1668;
  long *plStack_1658;
  long *plStack_1650;
  long *plStack_1648;
  long *plStack_1640;
  long *plStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  byte bStack_1618;
  long *plStack_1608;
  long *plStack_1600;
  long lStack_15f8;
  ulong uStack_15f0;
  undefined1 auStack_15e8 [4];
  undefined4 uStack_15e4;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  byte bStack_15a8;
  byte bStack_15a0;
  undefined1 auStack_1598 [944];
  long *plStack_11e8;
  byte bStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined4 uStack_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined4 uStack_11b8;
  undefined4 uStack_11b4;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  undefined8 uStack_11a8;
  long *plStack_11a0;
  long *plStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  byte bStack_1168;
  long *plStack_da8;
  byte bStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  long *plStack_d88;
  long *plStack_d80;
  long *plStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  byte bStack_d58;
  long *plStack_998;
  byte bStack_990;
  undefined8 uStack_988;
  long *plStack_980;
  long *plStack_978;
  long *plStack_970;
  long *plStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  ulong uStack_948;
  long *plStack_588;
  long *plStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long *plStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [1024];
  long *plStack_38;
  
  lStack_1910 = param_2;
  puStack_1838 = param_1;
  func_0x0412d680(param_2);
  lVar19 = *param_3;
  plVar20 = (long *)param_3[1];
  plVar27 = (long *)((long)plVar20 + 1);
  while (plVar27 != (long *)0x1) {
    cVar3 = *(char *)(lVar19 + -2 + (long)plVar27);
    plVar27 = (long *)((long)plVar27 + -1);
    if ((cVar3 == '\\') || (cVar3 == '/')) goto joined_r0x0ee8ffb6;
  }
  plVar27 = (long *)0x0;
joined_r0x0ee8ffb6:
  plVar29 = plVar20;
  if (plVar20 == (long *)0x0) {
LAB_0ee90011:
    plVar29 = (long *)((long)plVar20 - (long)plVar27);
    if (plVar20 < plVar27) goto LAB_0ee92925;
    func_0x0eee2dd0(auStack_438,0,0x408);
    if (plVar29 < (long *)0x400) {
      if (plVar20 != plVar27) {
LAB_0ee9003f:
        func_0x0eee2f00(auStack_438,lVar19 + (long)plVar27,plVar29);
      }
LAB_0ee90055:
      auStack_438[(long)plVar29] = 0;
      plStack_38 = plVar29;
    }
  }
  else {
    do {
      if (plVar29 == (long *)0x0) goto LAB_0ee90011;
      plVar28 = (long *)((long)plVar29 + -1);
      pcVar2 = (char *)(lVar19 + -1 + (long)plVar29);
      plVar29 = plVar28;
    } while (*pcVar2 != '.');
    if (plVar28 == (long *)0xffffffffffffffff) goto LAB_0ee90011;
    bVar30 = plVar20 < plVar27;
    plVar20 = (long *)((long)plVar20 - (long)plVar27);
    if (bVar30) goto LAB_0ee92925;
    plVar29 = (long *)((long)plVar28 - (long)plVar27);
    if (plVar20 < (long *)((long)plVar28 - (long)plVar27)) {
      plVar29 = plVar20;
    }
    func_0x0eee2dd0(auStack_438,0,0x408);
    if (plVar29 < (long *)0x400) {
      if (plVar29 != (long *)0x0) goto LAB_0ee9003f;
      goto LAB_0ee90055;
    }
  }
  plVar27 = (long *)strlen(auStack_438);
  if ((long *)0xfffffffffffffff7 < plVar27) goto LAB_0ee92931;
  if (plVar27 < (long *)0x17) {
    _auStack_15e8 = (long *)CONCAT71(stack0xffffffffffffea19,(char)plVar27 * '\x02');
    plVar29 = (long *)(auStack_15e8 + 1);
    if (plVar27 != (long *)0x0) goto LAB_0ee900f5;
  }
  else {
    uVar22 = 0x1a;
    if (((ulong)plVar27 | 7) != 0x17) {
      uVar22 = ((ulong)plVar27 | 7) + 1;
    }
    plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
    if (plVar29 == (long *)0x0) {
      FUN_0eec74c0(uVar22,0);
    }
    _auStack_15e8 = (long *)(uVar22 | 1);
    uStack_15e0 = plVar27;
    uStack_15d8 = plVar29;
LAB_0ee900f5:
    func_0x0eee2f00(plVar29,auStack_438,plVar27);
  }
  plVar20 = (long *)(lStack_1910 + 0x28);
  *(undefined1 *)((long)plVar29 + (long)plVar27) = 0;
  lVar19 = func_0x0ee9caa0(plVar20,auStack_15e8);
  if (((ulong)_auStack_15e8 & 1) != 0) {
    func_0x0412a280(uStack_15d8,(ulong)_auStack_15e8 & 0xfffffffffffffffe);
  }
  if (lVar19 == 0) {
    plStack_1978 = (long *)0x0;
    plStack_1970 = (long *)0x0;
    uStack_11b8 = (undefined4)*param_3;
    uStack_11b4 = *(undefined4 *)((long)param_3 + 4);
    uStack_11b0 = (undefined4)param_3[1];
    uStack_11ac = *(undefined4 *)((long)param_3 + 0xc);
    if (DAT_0f7b8fb8 == '\0') goto LAB_0ee92936;
LAB_0ee901a0:
    uStack_d98 = (long *)CONCAT44(uStack_11b4,uStack_11b8);
    uStack_d90 = (long *)CONCAT44(uStack_11ac,uStack_11b0);
    (**(code **)(_DAT_0f7b8f98 + 0x10))
              (auStack_15e8,&DAT_0f7b8f98,&uStack_d98,&plStack_1978,0x121,1);
    bStack_16b8 = bStack_15a8;
    if (bStack_15a8 == 0) {
      plStack_16f8 = _auStack_15e8;
      plStack_16f0 = uStack_15e0;
      plStack_16e8 = uStack_15d8;
      plStack_16e0 = uStack_15d0;
      plStack_16d8 = uStack_15c8;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_16d0 = uStack_15c0;
      uStack_16c8 = uStack_15b8;
      uStack_16c0 = uStack_15b0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
    }
    plVar27 = plStack_1978;
    if ((bStack_16b8 & 1) == 0) {
      func_0x0ee9c430(&plStack_16f8);
      uStack_d60 = uStack_16c0;
      uStack_d68 = uStack_16c8;
      uStack_d70 = uStack_16d0;
      plStack_d78 = plStack_16d8;
      plStack_d80 = plStack_16e0;
      plStack_d88 = plStack_16e8;
      uStack_11a8 = plStack_16f8;
      plStack_11a0 = plStack_16f0;
      plStack_16e8 = (long *)0x0;
      plStack_16e0 = (long *)0x0;
      plStack_16d8 = (long *)0x0;
      uStack_16d0 = 0;
      uStack_16c8 = 0;
      uStack_16c0 = 0;
      _auStack_15e8 = plStack_16f8;
      uStack_15e0 = plStack_16f0;
      plStack_1198 = (long *)0x0;
      uStack_1190 = (long *)0x0;
      uStack_1188 = (long *)0x0;
      uStack_1180 = 0;
      uStack_1178 = 0;
      uStack_1170 = 0;
      bStack_d58 = 0;
      uStack_d98 = plStack_16f8;
      uStack_d90 = plStack_16f0;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
      pplVar26 = (long **)&uStack_11a8;
      goto LAB_0ee92506;
    }
    lVar19 = plStack_1978[3];
    if (lVar19 == 0) {
      lVar21 = 0;
    }
    else {
      lVar21 = lVar19 + 8;
      func_0x0412d770(lVar21);
    }
    (**(code **)(*plVar27 + 0x78))(auStack_15e8,plVar27,&lStack_1830);
    if (lVar19 != 0) {
      func_0x0412d790(lVar21);
    }
    bStack_1708 = bStack_15a8;
    if (bStack_15a8 == 0) {
      plStack_1748 = _auStack_15e8;
      plStack_1740 = uStack_15e0;
      plStack_1738 = uStack_15d8;
      plStack_1730 = uStack_15d0;
      plStack_1728 = uStack_15c8;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_1720 = uStack_15c0;
      uStack_1718 = uStack_15b8;
      uStack_1710 = uStack_15b0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
    }
    if ((bStack_1708 & 1) == 0) {
      func_0x0ee9c4f0(&plStack_1748);
      uStack_d60 = uStack_1710;
      uStack_d68 = uStack_1718;
      uStack_d70 = uStack_1720;
      plStack_d78 = plStack_1728;
      plStack_d80 = plStack_1730;
      plStack_d88 = plStack_1738;
      uStack_11a8 = plStack_1748;
      plStack_11a0 = plStack_1740;
      plStack_1738 = (long *)0x0;
      plStack_1730 = (long *)0x0;
      plStack_1728 = (long *)0x0;
      uStack_1720 = 0;
      uStack_1718 = 0;
      uStack_1710 = 0;
      _auStack_15e8 = plStack_1748;
      uStack_15e0 = plStack_1740;
      plStack_1198 = (long *)0x0;
      uStack_1190 = (long *)0x0;
      uStack_1188 = (long *)0x0;
      uStack_1180 = 0;
      uStack_1178 = 0;
      uStack_1170 = 0;
      bStack_d58 = 0;
      uStack_d98 = plStack_1748;
      uStack_d90 = plStack_1740;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
      func_0x048e6d60(&uStack_11a8);
      goto joined_r0x0ee923b2;
    }
    uStack_1998 = 0;
    uStack_1990 = 0;
    lStack_1988 = 0;
    if (lStack_1830 == 0) {
      lVar19 = 0;
      lVar21 = (long)&uStack_1998 + 1;
    }
    else {
      func_0x0412ffc0(&uStack_1998,lStack_1830,0);
      lVar19 = lStack_1830;
      lVar21 = lStack_1988;
      if ((uStack_1998 & 1) == 0) {
        lVar21 = (long)&uStack_1998 + 1;
      }
    }
    func_0x0ee76a70(auStack_15e8,plStack_1978,lVar21,lVar19);
    bStack_1758 = bStack_15a8;
    if (bStack_15a8 == 0) {
      plStack_1798 = _auStack_15e8;
      plStack_1790 = uStack_15e0;
      plStack_1788 = uStack_15d8;
      plStack_1780 = uStack_15d0;
      plStack_1778 = uStack_15c8;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_1770 = uStack_15c0;
      uStack_1768 = uStack_15b8;
      uStack_1760 = uStack_15b0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
    }
    if ((bStack_1758 & 1) == 0) {
      func_0x0ee9c5b0(&plStack_1798);
      uStack_d60 = uStack_1760;
      uStack_d68 = uStack_1768;
      uStack_d70 = uStack_1770;
      plStack_d78 = plStack_1778;
      plStack_d80 = plStack_1780;
      plStack_d88 = plStack_1788;
      uStack_11a8 = plStack_1798;
      plStack_11a0 = plStack_1790;
      plStack_1788 = (long *)0x0;
      plStack_1780 = (long *)0x0;
      plStack_1778 = (long *)0x0;
      uStack_1770 = 0;
      uStack_1768 = 0;
      uStack_1760 = 0;
      _auStack_15e8 = plStack_1798;
      uStack_15e0 = plStack_1790;
      plStack_1198 = (long *)0x0;
      uStack_1190 = (long *)0x0;
      uStack_1188 = (long *)0x0;
      uStack_1180 = 0;
      uStack_1178 = 0;
      uStack_1170 = 0;
      bStack_d58 = 0;
      uStack_d98 = plStack_1798;
      uStack_d90 = plStack_1790;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
      func_0x048e6d60(&uStack_11a8);
      goto joined_r0x0ee924bf;
    }
    plStack_1608 = plVar20;
    plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (plVar27 == (long *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    plVar27[1] = 0;
    plVar27[2] = 0;
    *plVar27 = (long)&UNK_0f53a130;
    plStack_1920 = plVar27 + 3;
    plVar27[3] = 0;
    plVar27[4] = 0;
    plVar27[5] = 0;
    plVar27[6] = 0;
    plVar27[7] = 0;
    *(undefined4 *)(plVar27 + 7) = 0x3f800000;
    plVar27[8] = 0;
    plVar27[9] = 0;
    plVar27[10] = 0;
    plVar27[0xb] = 0;
    plVar27[0xc] = 0;
    plVar27[0xd] = 0;
    plVar27[0xe] = 0;
    plVar27[0xf] = 0;
    uStack_11c8 = (undefined4)*param_3;
    uStack_11c4 = *(undefined4 *)((long)param_3 + 4);
    uStack_11c0 = (undefined4)param_3[1];
    uStack_11bc = *(undefined4 *)((long)param_3 + 0xc);
    func_0x0ee8d1f0();
    uVar22 = uStack_1990;
    if ((uStack_1998 & 1) == 0) {
      uVar22 = uStack_1998 >> 1 & 0x7f;
    }
    plStack_1918 = plVar27;
    if (uVar22 == 0) {
      uVar24 = func_0x0412dc70();
      func_0x0ee8fc50(&uStack_d98,0x4a,uVar24);
      uStack_18d0 = uStack_d60;
      uStack_18d8 = uStack_d68;
      uStack_18e0 = uStack_d70;
      plStack_18e8 = plStack_d78;
      plStack_18f0 = plStack_d80;
      plStack_18f8 = plStack_d88;
      _auStack_15e8 = uStack_d98;
      uStack_15e0 = uStack_d90;
      plStack_d88 = (long *)0x0;
      plStack_d80 = (long *)0x0;
      plStack_d78 = (long *)0x0;
      uStack_d70 = 0;
      uStack_d68 = 0;
      uStack_d60 = 0;
      uStack_18c8 = uStack_18c8 & 0xffffffffffffff00;
      plStack_1908 = uStack_d98;
      plStack_1900 = uStack_d90;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
      func_0x048e6d60(&uStack_d98);
      plVar10 = plStack_18f8;
      plVar11 = plStack_18f0;
      plVar12 = plStack_18e8;
      uVar13 = uStack_18e0;
      uVar14 = uStack_18d8;
      uVar15 = uStack_18d0;
      plVar20 = plStack_17d8;
      plVar29 = plStack_17d0;
      plVar28 = plStack_17c8;
      uVar24 = uStack_17c0;
      uVar8 = uStack_17b8;
      uVar9 = uStack_17b0;
      bStack_17a8 = (byte)uStack_18c8;
      goto joined_r0x0ee92614;
    }
    lStack_1808 = lStack_1988;
    if ((uStack_1998 & 1) == 0) {
      lStack_1808 = (long)&uStack_1998 + 1;
    }
    puStack_1828 = &UNK_0f534730;
    bStack_1820 = 0;
    uStack_181f = 0;
    uStack_17f8 = 0;
    uStack_17f0 = 0;
    uStack_1800 = uVar22;
    func_0x0ee08cf0(auStack_15e8,&puStack_1828);
    bStack_d58 = bStack_15a8;
    if (bStack_15a8 == 1) {
      uStack_d98 = _auStack_15e8;
    }
    else {
      uStack_d98 = _auStack_15e8;
      uStack_d90 = uStack_15e0;
      plStack_d88 = uStack_15d8;
      plStack_d80 = uStack_15d0;
      plStack_d78 = uStack_15c8;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_d70 = uStack_15c0;
      uStack_d68 = uStack_15b8;
      uStack_d60 = uStack_15b0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
    }
    if ((bStack_d58 & 1) == 0) {
      func_0x0ee8fe90(&uStack_d98);
      uStack_958 = uStack_d68;
      uStack_960 = uStack_d70;
      plStack_970 = plStack_d80;
      plStack_978 = plStack_d88;
      plStack_968 = plStack_d78;
      plStack_d88 = (long *)0x0;
      plStack_d80 = (long *)0x0;
      plStack_d78 = (long *)0x0;
      uStack_950 = uStack_d60;
      uStack_d70 = 0;
      uStack_d68 = 0;
      uStack_d60 = 0;
      uStack_988 = uStack_d98;
      plStack_980 = uStack_d90;
LAB_0ee90795:
      uStack_948 = uStack_948 & 0xffffffffffffff00;
      uStack_1170 = 0;
      uStack_1178 = 0;
      uStack_1180 = 0;
      uStack_1188 = (long *)0x0;
      uStack_1190 = (long *)0x0;
      plStack_1198 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15d8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      _auStack_15e8 = uStack_988;
      uStack_15e0 = plStack_980;
      uStack_11a8 = uStack_988;
      plStack_11a0 = plStack_980;
      func_0x048e6d60(auStack_15e8);
LAB_0ee90833:
      func_0x048e6d60(&uStack_11a8);
    }
    else {
      plVar27[0xc] = (long)uStack_d98;
      if ((long *)0x1 < uStack_d98) {
        plVar20 = (long *)func_0x0412dc70();
        uStack_15d8 = (long *)_DAT_0f53a0f0;
        uStack_15d0 = (long *)_UNK_0f53a0f8;
        _auStack_15e8 = (long *)_DAT_0f53a0e0;
        uStack_15e0 = (long *)_UNK_0f53a0e8;
        uStack_15c8 = (long *)((ulong)uStack_15c8 & 0xffffffffffffff00);
        bStack_15a0 = 0;
        auStack_19e8 = (undefined1  [8])0x0;
        plStack_19e0 = (long *)0x0;
        plStack_19d8 = (long *)0x0;
        func_0x0eee17a0(auStack_19e8,auStack_15e8,auStack_1598,1);
        if ((bStack_15a0 == 1) && (((ulong)uStack_15c8 & 1) != 0)) {
          func_0x0412a280(uStack_15b8,(ulong)uStack_15c8 & 0xfffffffffffffffe);
        }
        uStack_988 = (long *)CONCAT44(uStack_11a8._4_4_,0x4a);
        plStack_978 = (long *)auStack_19e8;
        plStack_970 = plStack_19e0;
        plStack_968 = plStack_19d8;
        uStack_960 = 0;
        uStack_958 = 0;
        uStack_950 = 0;
        plStack_980 = plVar20;
        goto LAB_0ee90795;
      }
      func_0x0ee08cf0(auStack_15e8,&puStack_1828);
      bStack_1168 = bStack_15a8;
      if (bStack_15a8 == 0) {
        uStack_11a8 = _auStack_15e8;
        plStack_11a0 = uStack_15e0;
        plStack_1198 = uStack_15d8;
        uStack_1190 = uStack_15d0;
        uStack_1188 = uStack_15c8;
        uStack_15d8 = (long *)0x0;
        uStack_15d0 = (long *)0x0;
        uStack_15c8 = (long *)0x0;
        uStack_1180 = uStack_15c0;
        uStack_1178 = uStack_15b8;
        uStack_1170 = uStack_15b0;
        uStack_15c0 = 0;
        uStack_15b8 = 0;
        uStack_15b0 = 0;
        func_0x048e6d60(auStack_15e8);
        uVar6 = _UNK_0f53a11c;
        uVar5 = _UNK_0f53a118;
        uVar4 = _UNK_0f53a114;
        uVar34 = _UNK_0f53a10c;
        uVar33 = _UNK_0f53a108;
        uVar32 = _UNK_0f53a104;
        uVar31 = _DAT_0f53a100;
        uStack_15d8 = (long *)CONCAT44(_UNK_0f53a114,_DAT_0f53a110);
        uStack_15d0 = (long *)CONCAT44(_UNK_0f53a11c,_UNK_0f53a118);
        _auStack_15e8 = (long *)CONCAT44(_UNK_0f53a104,_DAT_0f53a100);
        uStack_15e0 = (long *)CONCAT44(_UNK_0f53a10c,_UNK_0f53a108);
        uStack_15c8 = (long *)((ulong)uStack_15c8 & 0xffffffffffffff00);
        bStack_15a0 = 0;
        if (uStack_1190 < uStack_1188) {
          *(undefined4 *)(uStack_1190 + 2) = _DAT_0f53a110;
          *(undefined4 *)((long)uStack_1190 + 0x14) = uVar4;
          *(undefined4 *)(uStack_1190 + 3) = uVar5;
          *(undefined4 *)((long)uStack_1190 + 0x1c) = uVar6;
          *(undefined4 *)uStack_1190 = uVar31;
          *(undefined4 *)((long)uStack_1190 + 4) = uVar32;
          *(undefined4 *)(uStack_1190 + 1) = uVar33;
          *(undefined4 *)((long)uStack_1190 + 0xc) = uVar34;
          *(undefined1 *)(uStack_1190 + 4) = 0;
          *(undefined1 *)(uStack_1190 + 9) = 0;
          plVar20 = uStack_1190 + 10;
        }
        else {
          uStack_1190 = (long *)func_0x0489d2c0(&plStack_1198,auStack_15e8);
          plVar20 = uStack_1190;
          if (((bStack_15a0 & 1) != 0) && (((ulong)uStack_15c8 & 1) != 0)) {
            func_0x0412a280(uStack_15b8,(ulong)uStack_15c8 & 0xfffffffffffffffe);
            plVar20 = uStack_1190;
          }
        }
        uStack_950 = uStack_1170;
        uStack_958 = uStack_1178;
        uStack_960 = uStack_1180;
        plStack_968 = uStack_1188;
        plStack_978 = plStack_1198;
        auStack_19e8 = (undefined1  [8])uStack_11a8;
        plStack_19e0 = plStack_11a0;
        plStack_1198 = (long *)0x0;
        uStack_1190 = (long *)0x0;
        uStack_1188 = (long *)0x0;
        uStack_1180 = 0;
        uStack_1178 = 0;
        uStack_1170 = 0;
        _auStack_15e8 = uStack_11a8;
        uStack_15e0 = plStack_11a0;
        plStack_19d8 = (long *)0x0;
        plStack_19d0 = (long *)0x0;
        plStack_19c8 = (long *)0x0;
        uStack_19c0 = 0;
        uStack_19b8 = 0;
        uStack_19b0 = 0;
        uStack_948 = uStack_948 & 0xffffffffffffff00;
        uStack_988 = uStack_11a8;
        plStack_980 = plStack_11a0;
        uStack_15d8 = (long *)0x0;
        uStack_15d0 = (long *)0x0;
        uStack_15c8 = (long *)0x0;
        uStack_15c0 = 0;
        uStack_15b8 = 0;
        uStack_15b0 = 0;
        plStack_970 = plVar20;
        func_0x048e6d60(auStack_15e8);
        func_0x048e6d60(auStack_19e8);
        if ((bStack_1168 & 1) != 0) goto LAB_0ee90840;
        goto LAB_0ee90833;
      }
      uStack_11a8 = _auStack_15e8;
      plVar27[0xb] = (long)_auStack_15e8;
      uStack_958 = 0;
      uStack_950 = 0;
      plStack_968 = (long *)0x0;
      uStack_960 = 0;
      plStack_978 = (long *)0x0;
      plStack_970 = (long *)0x0;
      uStack_988 = (long *)0x0;
      plStack_980 = (long *)0x0;
      uStack_948 = 1;
      if ((bStack_15a8 & 1) == 0) goto LAB_0ee90833;
    }
LAB_0ee90840:
    if (bStack_d58 == 0) {
      func_0x048e6d60(&uStack_d98);
      bStack_1668 = (byte)uStack_948;
      plVar20 = plStack_16a8;
      plVar29 = plStack_16a0;
      plVar28 = plStack_1698;
      plVar10 = plStack_1690;
      plVar11 = plStack_1688;
      uVar24 = uStack_1680;
      uVar8 = uStack_1678;
      uVar9 = uStack_1670;
      plStack_16a8 = uStack_988;
      plStack_16a0 = plStack_980;
      plStack_1698 = plStack_978;
      plStack_1690 = plStack_970;
      plStack_1688 = plStack_968;
      uStack_1680 = uStack_960;
      uStack_1678 = uStack_958;
      uStack_1670 = uStack_950;
    }
    else {
      bStack_1668 = (byte)uStack_948;
      plVar20 = plStack_16a8;
      plVar29 = plStack_16a0;
      plVar28 = plStack_1698;
      plVar10 = plStack_1690;
      plVar11 = plStack_1688;
      uVar24 = uStack_1680;
      uVar8 = uStack_1678;
      uVar9 = uStack_1670;
      plStack_16a8 = uStack_988;
      plStack_16a0 = plStack_980;
      plStack_1698 = plStack_978;
      plStack_1690 = plStack_970;
      plStack_1688 = plStack_968;
      uStack_1680 = uStack_960;
      uStack_1678 = uStack_958;
      uStack_1670 = uStack_950;
    }
    uStack_988 = plStack_16a8;
    plStack_980 = plStack_16a0;
    plStack_978 = plStack_1698;
    plStack_970 = plStack_1690;
    plStack_968 = plStack_1688;
    uStack_960 = uStack_1680;
    uStack_958 = uStack_1678;
    uStack_950 = uStack_1670;
    if (bStack_1668 == 0) {
      plStack_978 = (long *)0x0;
      plStack_970 = (long *)0x0;
      plStack_968 = (long *)0x0;
      uStack_960 = 0;
      uStack_958 = 0;
      uStack_950 = 0;
      func_0x048e6d60(&uStack_988);
      plVar20 = plStack_16a8;
      plVar29 = plStack_16a0;
      plVar28 = plStack_1698;
      plVar10 = plStack_1690;
      plVar11 = plStack_1688;
      uVar24 = uStack_1680;
      uVar8 = uStack_1678;
      uVar9 = uStack_1670;
    }
    uStack_1670 = uVar9;
    uStack_1678 = uVar8;
    uStack_1680 = uVar24;
    plStack_1688 = plVar11;
    plStack_1690 = plVar10;
    plStack_1698 = plVar28;
    plStack_16a0 = plVar29;
    plStack_16a8 = plVar20;
    if ((bStack_1668 & 1) == 0) {
      func_0x0ee8fd10(&plStack_16a8);
      uStack_18d0 = uStack_1670;
      uStack_18d8 = uStack_1678;
      uStack_18e0 = uStack_1680;
      plStack_18e8 = plStack_1688;
      plStack_18f0 = plStack_1690;
      plStack_18f8 = plStack_1698;
      uStack_d98 = plStack_16a8;
      uStack_d90 = plStack_16a0;
      plStack_1698 = (long *)0x0;
      plStack_1690 = (long *)0x0;
      plStack_1688 = (long *)0x0;
      uStack_1680 = 0;
      uStack_1678 = 0;
      uStack_1670 = 0;
      _auStack_15e8 = plStack_16a8;
      uStack_15e0 = plStack_16a0;
      plStack_d88 = (long *)0x0;
      plStack_d80 = (long *)0x0;
      plStack_d78 = (long *)0x0;
      uStack_d70 = 0;
      uStack_d68 = 0;
      uStack_d60 = 0;
      uStack_18c8 = uStack_18c8 & 0xffffffffffffff00;
      plStack_1908 = plStack_16a8;
      plStack_1900 = plStack_16a0;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
      func_0x048e6d60(&uStack_d98);
    }
    else {
      lStack_18b8 = 0;
      lStack_18b0 = 0;
      lStack_18a8 = 0;
      uVar22 = plVar27[0xb];
      if (uVar22 != 0) {
        if (uVar22 < 0x555555555555556) {
          lVar19 = uVar22 * 0x30;
          lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
          if (lVar21 == 0) {
            FUN_0eec74c0(lVar19,0);
          }
          lStack_18b0 = lVar21 + lVar19;
          lVar25 = 0;
          do {
            puVar23 = (undefined8 *)(lVar21 + 0x19 + lVar25);
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23 = (undefined8 *)(lVar21 + 0x10 + lVar25);
            *puVar23 = 0;
            puVar23[1] = 0;
            *(undefined8 *)(lVar21 + lVar25) = 0;
            ((undefined8 *)(lVar21 + lVar25))[1] = 0;
            lVar25 = lVar25 + 0x30;
          } while (lVar19 != lVar25);
          lStack_18b8 = lVar21;
          lStack_18a8 = lStack_18b0;
          if (plVar27[0xb] != 0) {
            plVar29 = (long *)0x0;
            uVar22 = 0;
            do {
              lStack_15f8 = lStack_18b8;
              uStack_15f0 = uVar22;
              func_0x0ee0afd0(auStack_19e8,&puStack_1828,0xffffffffffffffff);
              if (bStack_19a8 == 1) {
                plVar28 = (long *)((ulong)auStack_19e8 >> 1 & 0x7f);
                plVar20 = (long *)(auStack_19e8 + 1);
                if (((ulong)auStack_19e8 & 1) != 0) {
                  plVar28 = plStack_19e0;
                  plVar20 = plStack_19d8;
                }
                func_0x0eee2dd0(&uStack_988,0,0x408);
                if ((long *)0x3ff < plVar28) {
                  bStack_11e0 = 1;
                  func_0x0eee2dd0(auStack_15e8,0,0x400);
                  lVar19 = 1;
                  plVar20 = (long *)0x0;
LAB_0ee90b80:
                  func_0x0eee2f00(auStack_15e8,&uStack_988,lVar19);
                  bStack_da0 = bStack_11e0;
                  plStack_11e8 = plVar20;
                  if ((bStack_11e0 & 1) == 0) {
                    plStack_1198 = uStack_15d8;
                    uVar24 = uStack_15b0;
                    goto LAB_0ee90ce5;
                  }
                  lVar19 = 0;
                  if (plVar20 < (long *)0x3ff) {
                    lVar19 = 0x3ff - (long)plVar20;
                  }
                  func_0x0eee2dd0((long)&uStack_11a8 + 1 + (long)plVar20,0,lVar19);
                  func_0x0eee2f00(&uStack_11a8,auStack_15e8,(long)plVar20 + 1);
                  plStack_da8 = plVar20;
                  bStack_990 = bStack_da0;
                  goto joined_r0x0ee90d55;
                }
                if (plVar28 != (long *)0x0) {
                  func_0x0eee2f00(&uStack_988,plVar20,plVar28);
                }
                plStack_588 = plVar28;
                *(undefined1 *)((long)&uStack_988 + (long)plVar28) = 0;
                plVar20 = plStack_588;
                bStack_11e0 = 1;
                func_0x0eee2dd0(auStack_15e8,0,0x400);
                lVar19 = (long)plVar20 + 1;
                if (lVar19 != 0) goto LAB_0ee90b80;
                bStack_da0 = 1;
                func_0x0eee2dd0(&uStack_11a8,0,0x400);
                plStack_da8 = (long *)0xffffffffffffffff;
                bStack_990 = bStack_da0;
                if (bStack_da0 == 1) goto LAB_0ee90d5b;
LAB_0ee90c20:
                uStack_d98 = uStack_11a8;
                uStack_d90 = plStack_11a0;
                plStack_d88 = plStack_1198;
                plStack_d80 = uStack_1190;
                plStack_d78 = uStack_1188;
                plStack_1198 = (long *)0x0;
                uStack_1190 = (long *)0x0;
                uStack_1188 = (long *)0x0;
                uStack_d70 = uStack_1180;
                uStack_d68 = uStack_1178;
                uStack_d60 = uStack_1170;
                uStack_1180 = 0;
                uStack_1178 = 0;
                uStack_1170 = 0;
                bStack_da0 = bStack_990;
                func_0x048e6d60(&uStack_11a8);
                if (bStack_19a8 == 1) goto LAB_0ee90dc3;
LAB_0ee90cb2:
                func_0x048e6d60(auStack_19e8);
              }
              else {
                func_0x0eeac540(auStack_1888,auStack_19e8);
                uVar24 = uStack_1850;
                uStack_15d0 = plStack_1870;
                uStack_15d8 = plStack_1878;
                uStack_1898 = plStack_1870;
                uStack_1890 = plStack_1868;
                uStack_988 = (long *)auStack_1888;
                plStack_980 = plStack_1880;
                plStack_1600 = plStack_1878;
                plStack_1878 = (long *)0x0;
                plStack_1870 = (long *)0x0;
                plStack_1868 = (long *)0x0;
                uStack_11d8 = uStack_1860;
                uStack_11d0 = uStack_1858;
                uStack_1860 = 0;
                uStack_1858 = 0;
                uStack_1850 = 0;
                bStack_11e0 = 0;
                _auStack_15e8 = (long *)auStack_1888;
                uStack_15e0 = plStack_1880;
                uStack_958 = 0;
                uStack_950 = 0;
                plStack_968 = (long *)0x0;
                uStack_960 = 0;
                plStack_978 = (long *)0x0;
                plStack_970 = (long *)0x0;
                func_0x048e6d60(&uStack_988);
                func_0x048e6d60(auStack_1888);
                bStack_da0 = 0;
                plStack_1198 = plStack_1600;
                uStack_15d0._0_4_ = (undefined4)uStack_1898;
                uStack_15d0._4_4_ = uStack_1898._4_4_;
                uStack_15c8._0_4_ = (undefined4)uStack_1890;
                uStack_15c8._4_4_ = uStack_1890._4_4_;
                uStack_15c0._0_4_ = (undefined4)uStack_11d8;
                uStack_15c0._4_4_ = uStack_11d8._4_4_;
                uStack_15b8._0_4_ = (undefined4)uStack_11d0;
                uStack_15b8._4_4_ = uStack_11d0._4_4_;
LAB_0ee90ce5:
                uStack_11a8 = _auStack_15e8;
                plStack_11a0 = uStack_15e0;
                uStack_1190 = (long *)CONCAT44(uStack_15d0._4_4_,(undefined4)uStack_15d0);
                uStack_1188 = (long *)CONCAT44(uStack_15c8._4_4_,(undefined4)uStack_15c8);
                uStack_15d8 = (long *)0x0;
                uStack_15d0 = (long *)0x0;
                uStack_15c8 = (long *)0x0;
                uStack_1180 = CONCAT44(uStack_15c0._4_4_,(undefined4)uStack_15c0);
                uStack_1178 = CONCAT44(uStack_15b8._4_4_,(undefined4)uStack_15b8);
                uStack_15c0 = 0;
                uStack_15b8 = 0;
                uStack_15b0 = 0;
                uStack_1170 = uVar24;
                func_0x048e6d60(auStack_15e8);
                bStack_990 = bStack_da0;
joined_r0x0ee90d55:
                if (bStack_990 != 1) goto LAB_0ee90c20;
LAB_0ee90d5b:
                bStack_da0 = bStack_990;
                func_0x0eee2dd0(&uStack_d98,0,0x400);
                plVar20 = plStack_da8;
                if (plStack_da8 != (long *)0xffffffffffffffff) {
                  func_0x0eee2f00(&uStack_d98,&uStack_11a8);
                }
                plStack_998 = plVar20;
                uStack_11a8 = (long *)((ulong)uStack_11a8 & 0xffffffffffffff00);
                plStack_da8 = (long *)0x0;
                if (bStack_19a8 != 1) goto LAB_0ee90cb2;
LAB_0ee90dc3:
                if (((ulong)auStack_19e8 & 1) != 0) {
                  func_0x0412a280(plStack_19d8,(ulong)auStack_19e8 & 0xfffffffffffffffe);
                }
              }
              param_3 = (long *)auStack_1888;
              if (bStack_990 == 0) {
                func_0x0ee92d40(&uStack_d98);
                uStack_1930 = uStack_d60;
                uStack_1938 = uStack_d68;
                uStack_1940 = uStack_d70;
                plStack_1948 = plStack_d78;
                plStack_1950 = plStack_d80;
                plStack_1958 = plStack_d88;
                plStack_478 = uStack_d98;
                plStack_470 = uStack_d90;
                plStack_d88 = (long *)0x0;
                plStack_d80 = (long *)0x0;
                plStack_d78 = (long *)0x0;
                uStack_d70 = 0;
                uStack_d68 = 0;
                uStack_d60 = 0;
                _auStack_15e8 = uStack_d98;
                uStack_15e0 = uStack_d90;
                uStack_448 = 0;
                uStack_440 = 0;
                uStack_458 = 0;
                uStack_450 = 0;
                uStack_468 = 0;
                uStack_460 = 0;
                uStack_1928 = uStack_1928 & 0xffffffffffffff00;
                plStack_1968 = uStack_d98;
                plStack_1960 = uStack_d90;
                uStack_15d8 = (long *)0x0;
                uStack_15d0 = (long *)0x0;
                uStack_15c8 = (long *)0x0;
                uStack_15c0 = 0;
                uStack_15b8 = 0;
                uStack_15b0 = 0;
                func_0x048e6d60(auStack_15e8);
                pplVar26 = &plStack_478;
LAB_0ee911ef:
                func_0x048e6d60(pplVar26);
              }
              else {
                uStack_1898 = plVar29;
                func_0x0eee2dd0(auStack_15e8,0,0x400);
                plVar20 = plStack_998;
                if (plStack_998 != (long *)0xffffffffffffffff) {
                  func_0x0eee2f00(auStack_15e8,&uStack_d98);
                }
                plStack_11e8 = plVar20;
                uStack_d98 = (long *)((ulong)uStack_d98 & 0xffffffffffffff00);
                plStack_998 = (long *)0x0;
                func_0x0ee08cf0(&uStack_988,&puStack_1828);
                bStack_1168 = (byte)uStack_948;
                if ((byte)uStack_948 == 1) {
                  uStack_11a8 = uStack_988;
                }
                else {
                  uStack_11a8 = uStack_988;
                  plStack_11a0 = plStack_980;
                  plStack_1198 = plStack_978;
                  uStack_1190 = plStack_970;
                  uStack_1188 = plStack_968;
                  plStack_978 = (long *)0x0;
                  plStack_970 = (long *)0x0;
                  plStack_968 = (long *)0x0;
                  uStack_1180 = uStack_960;
                  uStack_1178 = uStack_958;
                  uStack_1170 = uStack_950;
                  uStack_960 = 0;
                  uStack_958 = 0;
                  uStack_950 = 0;
                  func_0x048e6d60(&uStack_988);
                }
                plVar28 = uStack_11a8;
                if ((bStack_1168 & 1) == 0) {
                  func_0x0ee92e00(&uStack_11a8);
                  uStack_1930 = uStack_1170;
                  uStack_1938 = uStack_1178;
                  uStack_1940 = uStack_1180;
                  plStack_1948 = uStack_1188;
                  plStack_1950 = uStack_1190;
                  plStack_1958 = plStack_1198;
                  plStack_4b8 = uStack_11a8;
                  plStack_4b0 = plStack_11a0;
                  plStack_1198 = (long *)0x0;
                  uStack_1190 = (long *)0x0;
                  uStack_1188 = (long *)0x0;
                  uStack_1180 = 0;
                  uStack_1178 = 0;
                  uStack_1170 = 0;
                  uStack_988 = uStack_11a8;
                  plStack_980 = plStack_11a0;
                  uStack_488 = 0;
                  uStack_480 = 0;
                  uStack_498 = 0;
                  uStack_490 = 0;
                  uStack_4a8 = 0;
                  uStack_4a0 = 0;
                  uStack_1928 = uStack_1928 & 0xffffffffffffff00;
                  plStack_1968 = uStack_11a8;
                  plStack_1960 = plStack_11a0;
                  plStack_978 = (long *)0x0;
                  plStack_970 = (long *)0x0;
                  plStack_968 = (long *)0x0;
                  uStack_960 = 0;
                  uStack_958 = 0;
                  uStack_950 = 0;
                  func_0x048e6d60(&uStack_988);
                  func_0x048e6d60(&plStack_4b8);
                  plVar29 = uStack_1898;
                }
                else {
                  func_0x0ee08cf0(auStack_19e8,&puStack_1828);
                  uStack_948 = CONCAT71(uStack_948._1_7_,bStack_19a8);
                  if (bStack_19a8 == 1) {
                    uStack_988 = (long *)auStack_19e8;
                    bVar17 = 1;
                  }
                  else {
                    uStack_988 = (long *)auStack_19e8;
                    plStack_980 = plStack_19e0;
                    plStack_978 = plStack_19d8;
                    plStack_970 = plStack_19d0;
                    plStack_968 = plStack_19c8;
                    plStack_19d8 = (long *)0x0;
                    plStack_19d0 = (long *)0x0;
                    plStack_19c8 = (long *)0x0;
                    uStack_960 = uStack_19c0;
                    uStack_958 = uStack_19b8;
                    uStack_950 = uStack_19b0;
                    uStack_19c0 = 0;
                    uStack_19b8 = 0;
                    uStack_19b0 = 0;
                    func_0x048e6d60(auStack_19e8);
                    bVar17 = (byte)uStack_948;
                  }
                  plVar10 = uStack_988;
                  if ((bVar17 & 1) == 0) {
                    func_0x0ee92ec0(&uStack_988);
                    uStack_1930 = uStack_950;
                    uStack_1938 = uStack_958;
                    uStack_1940 = uStack_960;
                    plStack_1948 = plStack_968;
                    plStack_1950 = plStack_970;
                    plStack_1958 = plStack_978;
                    plStack_4f8 = uStack_988;
                    plStack_4f0 = plStack_980;
                    plStack_978 = (long *)0x0;
                    plStack_970 = (long *)0x0;
                    plStack_968 = (long *)0x0;
                    uStack_960 = 0;
                    uStack_958 = 0;
                    uStack_950 = 0;
                    auStack_19e8 = (undefined1  [8])uStack_988;
                    plStack_19e0 = plStack_980;
                    uStack_4c8 = 0;
                    uStack_4c0 = 0;
                    uStack_4d8 = 0;
                    uStack_4d0 = 0;
                    uStack_4e8 = 0;
                    uStack_4e0 = 0;
                    uStack_1928 = uStack_1928 & 0xffffffffffffff00;
                    plStack_1968 = uStack_988;
                    plStack_1960 = plStack_980;
                    plStack_19d8 = (long *)0x0;
                    plStack_19d0 = (long *)0x0;
                    plStack_19c8 = (long *)0x0;
                    uStack_19c0 = 0;
                    uStack_19b8 = 0;
                    uStack_19b0 = 0;
                    func_0x048e6d60(auStack_19e8);
                    func_0x048e6d60(&plStack_4f8);
                    plVar29 = uStack_1898;
                  }
                  else {
                    func_0x0ee07720(param_3,&puStack_1828);
                    bStack_19a8 = bStack_1848;
                    if (bStack_1848 == 1) {
                      auStack_19e8[0] = auStack_1888[0];
                    }
                    else {
                      auStack_19e8 = auStack_1888;
                      plStack_19e0 = plStack_1880;
                      plStack_19d8 = plStack_1878;
                      plStack_19d0 = plStack_1870;
                      plStack_19c8 = plStack_1868;
                      plStack_1878 = (long *)0x0;
                      plStack_1870 = (long *)0x0;
                      plStack_1868 = (long *)0x0;
                      uStack_19c0 = uStack_1860;
                      uStack_19b8 = uStack_1858;
                      uStack_19b0 = uStack_1850;
                      uStack_1860 = 0;
                      uStack_1858 = 0;
                      uStack_1850 = 0;
                      func_0x048e6d60(param_3);
                    }
                    if ((bStack_19a8 & 1) == 0) {
                      func_0x0ee92f80(auStack_19e8);
                      uStack_1930 = uStack_19b0;
                      uStack_1938 = uStack_19b8;
                      uStack_1940 = uStack_19c0;
                      plStack_1948 = plStack_19c8;
                      plStack_1950 = plStack_19d0;
                      plStack_1958 = plStack_19d8;
                      plStack_538 = (long *)auStack_19e8;
                      plStack_530 = plStack_19e0;
                      plStack_19d8 = (long *)0x0;
                      plStack_19d0 = (long *)0x0;
                      plStack_19c8 = (long *)0x0;
                      uStack_19c0 = 0;
                      uStack_19b8 = 0;
                      uStack_19b0 = 0;
                      auStack_1888 = auStack_19e8;
                      plStack_1880 = plStack_19e0;
                      uStack_508 = 0;
                      uStack_500 = 0;
                      uStack_518 = 0;
                      uStack_510 = 0;
                      uStack_528 = 0;
                      uStack_520 = 0;
                      uStack_1928 = uStack_1928 & 0xffffffffffffff00;
                      plStack_1968 = (long *)auStack_19e8;
                      plStack_1960 = plStack_19e0;
                      plStack_1878 = (long *)0x0;
                      plStack_1870 = (long *)0x0;
                      plStack_1868 = (long *)0x0;
                      uStack_1860 = 0;
                      uStack_1858 = 0;
                      uStack_1850 = 0;
                      func_0x048e6d60(param_3);
                      func_0x048e6d60(&plStack_538);
                      plVar27 = plStack_1918;
                      plVar29 = uStack_1898;
                    }
                    else {
                      if ((long *)0xfffffffffffffff7 < plVar20) goto LAB_0ee92920;
                      uVar7 = auStack_19e8[0];
                      if (plVar20 < (long *)0x17) {
                        auStack_1888[0] = (char)plVar20 * '\x02';
                        plVar27 = (long *)(auStack_1888 + 1);
                        if (plVar20 != (long *)0x0) goto LAB_0ee910f4;
                      }
                      else {
                        uVar22 = ((ulong)plVar20 | 7) + 1;
                        if (((ulong)plVar20 | 7) == 0x17) {
                          uVar22 = 0x1a;
                        }
                        plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
                        if (plVar27 == (long *)0x0) {
                          FUN_0eec74c0(uVar22,0);
                        }
                        auStack_1888 = (undefined1  [8])(uVar22 | 1);
                        plStack_1880 = plVar20;
                        plStack_1878 = plVar27;
LAB_0ee910f4:
                        func_0x0eee2f00(plVar27,auStack_15e8,plVar20);
                      }
                      lVar19 = lStack_15f8;
                      plVar29 = uStack_1898;
                      pbVar1 = (byte *)(lStack_15f8 + (long)uStack_1898);
                      *(undefined1 *)((long)plVar27 + (long)plVar20) = 0;
                      if ((*pbVar1 & 1) != 0) {
                        func_0x0412a280(*(undefined8 *)(lVar19 + 0x10 + (long)uStack_1898),
                                        *(ulong *)(lVar19 + (long)uStack_1898) & 0xfffffffffffffffe)
                        ;
                      }
                      *(long **)(pbVar1 + 0x10) = plStack_1878;
                      *(undefined1 (*) [8])pbVar1 = auStack_1888;
                      *(long **)(pbVar1 + 8) = plStack_1880;
                      *(long **)(lVar19 + 0x18 + (long)plVar29) = plVar28;
                      *(long **)(lVar19 + 0x20 + (long)plVar29) = plVar10;
                      *(undefined1 *)(lVar19 + 0x28 + (long)plVar29) = uVar7;
                      uStack_1938 = 0;
                      uStack_1930 = 0;
                      plStack_1948 = (long *)0x0;
                      uStack_1940 = 0;
                      plStack_1958 = (long *)0x0;
                      plStack_1950 = (long *)0x0;
                      plStack_1968 = (long *)0x0;
                      plStack_1960 = (long *)0x0;
                      uStack_1928 = 1;
                      plVar27 = plStack_1918;
                    }
                    plStack_1918 = plVar27;
                    if (bStack_19a8 == 0) {
                      func_0x048e6d60(auStack_19e8);
                    }
                  }
                  if ((byte)uStack_948 == '\0') {
                    func_0x048e6d60(&uStack_988);
                  }
                }
                if (bStack_1168 == 0) {
                  pplVar26 = (long **)&uStack_11a8;
                  goto LAB_0ee911ef;
                }
              }
              if (bStack_990 == 0) {
                func_0x048e6d60(&uStack_d98);
                bStack_1618 = (byte)uStack_1928;
                plVar11 = plStack_1958;
                plVar12 = plStack_1950;
                plVar16 = plStack_1948;
                uVar13 = uStack_1940;
                uVar14 = uStack_1938;
                uVar15 = uStack_1930;
                plVar20 = plStack_1648;
                plVar28 = plStack_1640;
                plVar10 = plStack_1638;
                uVar24 = uStack_1630;
                uVar8 = uStack_1628;
                uVar9 = uStack_1620;
              }
              else {
                bStack_1618 = (byte)uStack_1928;
                plVar11 = plStack_1958;
                plVar12 = plStack_1950;
                plVar16 = plStack_1948;
                uVar13 = uStack_1940;
                uVar14 = uStack_1938;
                uVar15 = uStack_1930;
                plVar20 = plStack_1648;
                plVar28 = plStack_1640;
                plVar10 = plStack_1638;
                uVar24 = uStack_1630;
                uVar8 = uStack_1628;
                uVar9 = uStack_1620;
              }
              uStack_1620 = uVar15;
              uStack_1628 = uVar14;
              uStack_1630 = uVar13;
              plStack_1638 = plVar16;
              plStack_1640 = plVar12;
              plStack_1648 = plVar11;
              bVar17 = bStack_1618;
              plStack_1958 = plStack_1648;
              plStack_1950 = plStack_1640;
              plStack_1948 = plStack_1638;
              uStack_1940 = uStack_1630;
              uStack_1938 = uStack_1628;
              uStack_1930 = uStack_1620;
              if (bStack_1618 == 0) {
                plStack_1958 = (long *)0x0;
                plStack_1950 = (long *)0x0;
                plStack_1948 = (long *)0x0;
                uStack_1940 = 0;
                uStack_1938 = 0;
                uStack_1930 = 0;
                plStack_1658 = plStack_1968;
                plStack_1650 = plStack_1960;
                func_0x048e6d60(&plStack_1968);
                bVar17 = bStack_1618;
                plVar20 = plStack_1648;
                plVar28 = plStack_1640;
                plVar10 = plStack_1638;
                uVar24 = uStack_1630;
                uVar8 = uStack_1628;
                uVar9 = uStack_1620;
              }
              uStack_1620 = uVar9;
              uStack_1628 = uVar8;
              uStack_1630 = uVar24;
              plStack_1638 = plVar10;
              plStack_1640 = plVar28;
              plStack_1648 = plVar20;
              bStack_1618 = bVar17;
              if ((bVar17 & 1) == 0) {
                func_0x0ee8fdd0(&plStack_1658);
                uStack_18d0 = uStack_1620;
                uStack_18d8 = uStack_1628;
                uStack_18e0 = uStack_1630;
                plStack_18e8 = plStack_1638;
                plStack_18f0 = plStack_1640;
                plStack_18f8 = plStack_1648;
                plStack_578 = plStack_1658;
                plStack_570 = plStack_1650;
                plStack_1648 = (long *)0x0;
                plStack_1640 = (long *)0x0;
                plStack_1638 = (long *)0x0;
                uStack_1630 = 0;
                uStack_1628 = 0;
                uStack_1620 = 0;
                _auStack_15e8 = plStack_1658;
                uStack_15e0 = plStack_1650;
                uStack_548 = 0;
                uStack_540 = 0;
                uStack_558 = 0;
                uStack_550 = 0;
                uStack_568 = 0;
                uStack_560 = 0;
                uStack_18c8 = uStack_18c8 & 0xffffffffffffff00;
                plStack_1908 = plStack_1658;
                plStack_1900 = plStack_1650;
                uStack_15d8 = (long *)0x0;
                uStack_15d0 = (long *)0x0;
                uStack_15c8 = (long *)0x0;
                uStack_15c0 = 0;
                uStack_15b8 = 0;
                uStack_15b0 = 0;
                func_0x048e6d60(auStack_15e8);
                func_0x048e6d60(&plStack_578);
              }
              if ((bStack_1618 & 1) == 0) {
                func_0x048e6d60(&plStack_1658);
              }
              if ((bVar17 & 1) == 0) goto LAB_0ee9186f;
              uVar22 = uStack_15f0 + 1;
              plVar29 = plVar29 + 6;
              if ((ulong)plVar27[0xb] <= uVar22) break;
            } while( true );
          }
          goto LAB_0ee91814;
        }
        goto LAB_0ee92986;
      }
LAB_0ee91814:
      func_0x0ee8d2f0(plStack_1920,&uStack_11c8,&lStack_18b8,plVar27[0xc],0);
      uStack_18d8 = 0;
      uStack_18d0 = 0;
      plStack_18e8 = (long *)0x0;
      uStack_18e0 = 0;
      plStack_18f8 = (long *)0x0;
      plStack_18f0 = (long *)0x0;
      plStack_1908 = (long *)0x0;
      plStack_1900 = (long *)0x0;
      uStack_18c8 = 1;
LAB_0ee9186f:
      lVar21 = lStack_18b8;
      lVar19 = lStack_18b0;
      if (lStack_18b8 != 0) {
        for (; lVar21 != lVar19; lVar19 = lVar19 + -0x30) {
          if ((*(byte *)(lVar19 + -0x30) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -0x20),
                            *(ulong *)(lVar19 + -0x30) & 0xfffffffffffffffe);
          }
        }
        func_0x0412a280(lVar21,lStack_18a8 - lVar21);
      }
    }
    if (bStack_1668 == 0) {
      func_0x048e6d60(&plStack_16a8);
      if ((bStack_1820 & 1) == 0) goto LAB_0ee918cb;
LAB_0ee91be5:
      puStack_1828 = &UNK_0f534730;
      func_0x0412a280(uStack_1810,
                      CONCAT62(uStack_181e,CONCAT11(uStack_181f,bStack_1820)) & 0xfffffffffffffffe);
      plVar10 = plStack_18f8;
      plVar11 = plStack_18f0;
      plVar12 = plStack_18e8;
      uVar13 = uStack_18e0;
      uVar14 = uStack_18d8;
      uVar15 = uStack_18d0;
      plVar20 = plStack_17d8;
      plVar29 = plStack_17d0;
      plVar28 = plStack_17c8;
      uVar24 = uStack_17c0;
      uVar8 = uStack_17b8;
      uVar9 = uStack_17b0;
      bStack_17a8 = (byte)uStack_18c8;
    }
    else {
      if ((bStack_1820 & 1) != 0) goto LAB_0ee91be5;
LAB_0ee918cb:
      puStack_1828 = &UNK_0f534730;
      plVar10 = plStack_18f8;
      plVar11 = plStack_18f0;
      plVar12 = plStack_18e8;
      uVar13 = uStack_18e0;
      uVar14 = uStack_18d8;
      uVar15 = uStack_18d0;
      plVar20 = plStack_17d8;
      plVar29 = plStack_17d0;
      plVar28 = plStack_17c8;
      uVar24 = uStack_17c0;
      uVar8 = uStack_17b8;
      uVar9 = uStack_17b0;
      bStack_17a8 = (byte)uStack_18c8;
    }
joined_r0x0ee92614:
    uStack_17b0 = uVar15;
    uStack_17b8 = uVar14;
    uStack_17c0 = uVar13;
    plStack_17c8 = plVar12;
    plStack_17d0 = plVar11;
    plStack_17d8 = plVar10;
    plStack_18f8 = plStack_17d8;
    plStack_18f0 = plStack_17d0;
    plStack_18e8 = plStack_17c8;
    uStack_18e0 = uStack_17c0;
    uStack_18d8 = uStack_17b8;
    uStack_18d0 = uStack_17b0;
    if (bStack_17a8 == 0) {
      plStack_18f8 = (long *)0x0;
      plStack_18f0 = (long *)0x0;
      plStack_18e8 = (long *)0x0;
      uStack_18e0 = 0;
      uStack_18d8 = 0;
      uStack_18d0 = 0;
      plStack_17e8 = plStack_1908;
      plStack_17e0 = plStack_1900;
      func_0x048e6d60(&plStack_1908);
      plVar20 = plStack_17d8;
      plVar29 = plStack_17d0;
      plVar28 = plStack_17c8;
      uVar24 = uStack_17c0;
      uVar8 = uStack_17b8;
      uVar9 = uStack_17b0;
    }
    uStack_17b0 = uVar9;
    uStack_17b8 = uVar8;
    uStack_17c0 = uVar24;
    plStack_17c8 = plVar28;
    plStack_17d0 = plVar29;
    plStack_17d8 = plVar20;
    if ((bStack_17a8 & 1) == 0) {
      func_0x0ee9c840(&plStack_17e8);
      uStack_d60 = uStack_17b0;
      uStack_d68 = uStack_17b8;
      uStack_d70 = uStack_17c0;
      plStack_d78 = plStack_17c8;
      plStack_d80 = plStack_17d0;
      plStack_d88 = plStack_17d8;
      uStack_11a8 = plStack_17e8;
      plStack_11a0 = plStack_17e0;
      plStack_17d8 = (long *)0x0;
      plStack_17d0 = (long *)0x0;
      plStack_17c8 = (long *)0x0;
      uStack_17c0 = 0;
      uStack_17b8 = 0;
      uStack_17b0 = 0;
      _auStack_15e8 = plStack_17e8;
      uStack_15e0 = plStack_17e0;
      plStack_1198 = (long *)0x0;
      uStack_1190 = (long *)0x0;
      uStack_1188 = (long *)0x0;
      uStack_1180 = 0;
      uStack_1178 = 0;
      uStack_1170 = 0;
      bStack_d58 = 0;
      uStack_d98 = plStack_17e8;
      uStack_d90 = plStack_17e0;
      uStack_15d8 = (long *)0x0;
      uStack_15d0 = (long *)0x0;
      uStack_15c8 = (long *)0x0;
      uStack_15c0 = 0;
      uStack_15b8 = 0;
      uStack_15b0 = 0;
      func_0x048e6d60(auStack_15e8);
LAB_0ee928ca:
      func_0x048e6d60(&uStack_11a8);
      plVar20 = plVar27;
    }
    else {
      if (1 < (ulong)plVar27[0xc]) {
        uVar24 = func_0x0412dc70();
        func_0x0ee9c9a0(&uStack_11a8,0x16,uVar24);
        uStack_d60 = uStack_1170;
        uStack_d68 = uStack_1178;
        uStack_d70 = uStack_1180;
        plStack_d78 = uStack_1188;
        plStack_d80 = uStack_1190;
        plStack_d88 = plStack_1198;
        _auStack_15e8 = uStack_11a8;
        uStack_15e0 = plStack_11a0;
        plStack_1198 = (long *)0x0;
        uStack_1190 = (long *)0x0;
        uStack_1188 = (long *)0x0;
        uStack_1180 = 0;
        uStack_1178 = 0;
        uStack_1170 = 0;
        bStack_d58 = 0;
        uStack_d98 = uStack_11a8;
        uStack_d90 = plStack_11a0;
        uStack_15d8 = (long *)0x0;
        uStack_15d0 = (long *)0x0;
        uStack_15c8 = (long *)0x0;
        uStack_15c0 = 0;
        uStack_15b8 = 0;
        uStack_15b0 = 0;
        func_0x048e6d60(auStack_15e8);
        goto LAB_0ee928ca;
      }
      plVar20 = (long *)strlen(auStack_438);
      if ((long *)0xfffffffffffffff7 < plVar20) {
        func_0x04882e30();
LAB_0ee92986:
        uVar24 = func_0x0ee4b550();
        func_0x041084d6(&DAT_0f7b8fb8);
        do {
          func_0x048f9be0(&plStack_1978);
          func_0x0412d6b0(lStack_1910);
          func_0x0eee2d70(uVar24);
          func_0x048e6d60(&plStack_1798);
          if ((uStack_1998 & 1) != 0) {
            func_0x0412a280(lStack_1988,uStack_1998 & 0xfffffffffffffffe);
          }
          if (bStack_1708 == 0) {
            func_0x048e6d60(&plStack_1748);
          }
          if (bStack_16b8 == 0) {
            func_0x048e6d60(&plStack_16f8);
          }
        } while( true );
      }
      if (plVar20 < (long *)0x17) {
        _auStack_15e8 = (long *)CONCAT71(stack0xffffffffffffea19,(char)plVar20 * '\x02');
        plVar29 = (long *)(auStack_15e8 + 1);
        if (plVar20 != (long *)0x0) goto LAB_0ee91c6f;
      }
      else {
        uVar22 = 0x1a;
        if (((ulong)plVar20 | 7) != 0x17) {
          uVar22 = ((ulong)plVar20 | 7) + 1;
        }
        plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
        if (plVar29 == (long *)0x0) {
          FUN_0eec74c0(uVar22,0);
        }
        _auStack_15e8 = (long *)(uVar22 | 1);
        uStack_15e0 = plVar20;
        uStack_15d8 = plVar29;
LAB_0ee91c6f:
        func_0x0eee2f00(plVar29,auStack_438,plVar20);
      }
      *(undefined1 *)((long)plVar29 + (long)plVar20) = 0;
      lVar19 = func_0x0eeab950(plStack_1608,auStack_15e8);
      LOCK();
      plVar27[1] = plVar27[1] + 1;
      UNLOCK();
      *(long **)(lVar19 + 0x28) = plStack_1920;
      plVar20 = *(long **)(lVar19 + 0x30);
      *(long **)(lVar19 + 0x30) = plVar27;
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar29 = plVar20 + 1;
        lVar19 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          func_0x0412c2d0(plVar20);
        }
      }
      if (((ulong)_auStack_15e8 & 1) != 0) {
        func_0x0412a280(uStack_15d8,(ulong)_auStack_15e8 & 0xfffffffffffffffe);
      }
      bStack_d58 = 1;
      plVar20 = (long *)0x0;
      uStack_d98 = plStack_1920;
      uStack_d90 = plVar27;
    }
    if (bStack_17a8 == 0) {
      func_0x048e6d60(&plStack_17e8);
    }
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar27 = plVar20 + 1;
      lVar19 = *plVar27;
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
joined_r0x0ee924bf:
    if (bStack_1758 == 0) {
      func_0x048e6d60(&plStack_1798);
    }
    if ((uStack_1998 & 1) != 0) {
      func_0x0412a280(lStack_1988,uStack_1998 & 0xfffffffffffffffe);
    }
joined_r0x0ee923b2:
    if (bStack_1708 == 0) {
      pplVar26 = &plStack_1748;
LAB_0ee92506:
      func_0x048e6d60(pplVar26);
    }
    if (bStack_16b8 == 0) {
      func_0x048e6d60(&plStack_16f8);
    }
    if ((plStack_1978 != (long *)0x0) &&
       (func_0x0ee56810(auStack_15e8,&plStack_1978), bStack_15a8 == 0)) {
      func_0x048e6d60(auStack_15e8);
    }
    plVar27 = plStack_1970;
    plStack_1970 = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 8))();
    }
    plVar27 = plStack_1978;
    plStack_1978 = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 8))();
    }
  }
  else {
    bStack_d58 = 1;
    uStack_d98 = *(long **)(lVar19 + 0x28);
    uStack_d90 = *(long **)(lVar19 + 0x30);
    if (*(long *)(lVar19 + 0x30) != 0) {
      LOCK();
      plVar27 = (long *)(*(long *)(lVar19 + 0x30) + 8);
      *plVar27 = *plVar27 + 1;
      UNLOCK();
    }
  }
  bVar17 = bStack_d58;
  func_0x0412d6b0(lStack_1910);
  uStack_988 = (long *)0x0;
  plStack_980 = (long *)0x0;
  _auStack_15e8 = (long *)0x91145c106636c3a3;
  uStack_15e0 = (long *)&UNK_0140f690;
  uStack_15d8 = (long *)0x1;
  uStack_15d0 = (long *)CONCAT44(uStack_15d0._4_4_,0x73);
  if ((bVar17 & 1) == 0) {
    uStack_11a8 = (long *)0x0;
    plStack_11a0 = (long *)0x0;
    plStack_1198 = (long *)0x0;
    func_0x0eedeb80(2,0x2d,&uStack_d98,&uStack_11a8,auStack_15e8);
    if (((ulong)uStack_11a8 & 1) != 0) {
      func_0x0412a280(plStack_1198,(ulong)uStack_11a8 & 0xfffffffffffffffe);
    }
    if ((bStack_d58 & 1) == 0) {
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      puVar23 = &uStack_988;
      goto LAB_0ee91ee8;
    }
  }
  puVar23 = &uStack_d98;
  uVar31 = (undefined4)uStack_d98;
  uVar32 = uStack_d98._4_4_;
  uVar33 = (undefined4)uStack_d90;
  uVar34 = uStack_d90._4_4_;
LAB_0ee91ee8:
  *puStack_1838 = uVar31;
  puStack_1838[1] = uVar32;
  puStack_1838[2] = uVar33;
  puStack_1838[3] = uVar34;
  *puVar23 = 0;
  puVar23[1] = 0;
  plVar20 = plStack_980;
  plVar27 = uStack_d90;
  if (plStack_980 != (long *)0x0) {
    LOCK();
    plVar29 = plStack_980 + 1;
    lVar19 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_980 + 0x10))(plStack_980);
      func_0x0412c2d0(plVar20);
      plVar27 = uStack_d90;
    }
  }
  uStack_d90 = plVar27;
  if (bStack_d58 == 1) {
    if (plVar27 != (long *)0x0) {
      LOCK();
      plVar20 = plVar27 + 1;
      lVar19 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        func_0x0412c2d0(plVar27);
      }
    }
  }
  else {
    func_0x048e6d60(&uStack_d98);
  }
  return;
LAB_0ee92920:
  func_0x04882e30();
LAB_0ee92925:
  func_0x04882ef0(&UNK_01306d2f);
LAB_0ee92931:
  func_0x04882e30();
LAB_0ee92936:
  iVar18 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar18 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_0ee901a0;
}


