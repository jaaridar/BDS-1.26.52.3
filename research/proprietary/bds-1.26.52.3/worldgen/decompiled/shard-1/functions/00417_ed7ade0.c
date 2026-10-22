/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee7ade0 (ELF vaddr 0xed7ade0)
 * Label: caller-of-callee
 * Body:  [[0ee7ade0, 0ee7af56] [0ee7af60, 0ee7b351] [0ee7b360, 0ee7b455] [0ee7b460, 0ee7b8a5] [0ee7b8b0, 0ee7b901] [0ee7b910, 0ee7b9f8] [0ee7baa3, 0ee7bd98]]
 * Ghidra: FUN_0ee7ade0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0ee7ade0(long param_1,undefined8 *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 *puVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  bool bVar25;
  undefined8 uStack_1a40;
  ulong uStack_1a38;
  long lStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  byte bStack_19e8;
  undefined4 uStack_19e0;
  undefined4 uStack_19dc;
  undefined4 uStack_19d8;
  undefined4 uStack_19d4;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined4 uStack_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  undefined4 uStack_199c;
  undefined8 uStack_1998;
  byte bStack_1990;
  long lStack_1980;
  ulong uStack_1978;
  undefined4 uStack_1970;
  undefined4 uStack_196c;
  undefined4 uStack_1968;
  undefined4 uStack_1964;
  long *plStack_1960;
  undefined8 *puStack_1958;
  ulong uStack_1950;
  byte *pbStack_1948;
  byte *pbStack_1940;
  byte *pbStack_1938;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  long lStack_1918;
  byte *pbStack_1908;
  byte *pbStack_1900;
  byte *pbStack_18f8;
  undefined8 *puStack_18e8;
  uint uStack_18dc;
  long lStack_18d8;
  byte *pbStack_18d0;
  long lStack_18c8;
  undefined8 *puStack_18c0;
  byte *pbStack_18b8;
  ulong uStack_18b0;
  byte *pbStack_18a8;
  ulong uStack_18a0;
  undefined4 uStack_1898;
  undefined4 uStack_1894;
  undefined4 uStack_1890;
  undefined4 uStack_188c;
  undefined4 uStack_1888;
  undefined4 uStack_1884;
  undefined4 uStack_1880;
  undefined4 uStack_187c;
  undefined4 uStack_1878;
  undefined4 uStack_1874;
  undefined4 uStack_1870;
  undefined4 uStack_186c;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  long lStack_1858;
  undefined8 uStack_1850;
  byte bStack_1828;
  ulong uStack_1468;
  long *aplStack_1458 [3];
  undefined4 auStack_1440 [250];
  ulong uStack_1058;
  undefined1 auStack_1050 [1024];
  long lStack_c50;
  long alStack_c48 [128];
  long lStack_848;
  undefined1 auStack_840 [1024];
  long lStack_440;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
LAB_0ee7afc0:
    uVar10 = 0;
    goto LAB_0ee7b949;
  }
  uStack_1888 = *(undefined4 *)param_2;
  uStack_1884 = *(undefined4 *)((long)param_2 + 4);
  uStack_1880 = *(undefined4 *)(param_2 + 1);
  uStack_187c = *(undefined4 *)((long)param_2 + 0xc);
  uStack_1950 = 0xee7ae2b;
  lStack_18d8 = param_1;
  pbStack_18d0 = param_3;
  func_0x09a8f590(auStack_840,&uStack_1888);
  if (lStack_440 == _DAT_0f7b9858) {
    uStack_1950 = 0xee7ae53;
    iVar9 = func_0x0eee3000(auStack_840,0xf7b9458,lStack_440);
    if (iVar9 == 0) goto LAB_0ee7afc0;
  }
  if (lStack_440 == _DAT_0f7b9450) {
    uStack_1950 = 0xee7ae7b;
    iVar9 = func_0x0eee3000(auStack_840,0xf7b9050,lStack_440);
    if (iVar9 == 0) goto LAB_0ee7afc0;
  }
  uStack_1950 = 0xee7ae97;
  func_0x0eee2dd0(alStack_c48,0,0x408);
  if (DAT_0f7b8fb8 == '\0') {
    uStack_1950 = 0xee7b999;
    iVar9 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar9 != 0) {
      uStack_1950 = 0xee7b9ad;
      func_0x0ee5ea20(&DAT_0f7b8f98);
      uStack_1950 = 0xee7b9c7;
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      uStack_1950 = 0xee7b9d3;
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  uStack_1898 = *(undefined4 *)param_2;
  uStack_1894 = *(undefined4 *)((long)param_2 + 4);
  uStack_1890 = *(undefined4 *)(param_2 + 1);
  uStack_188c = *(undefined4 *)((long)param_2 + 0xc);
  puVar15 = (undefined4 *)&DAT_0f7b8f98;
  plVar14 = alStack_c48;
  uStack_1950 = 0xee7aee1;
  (**(code **)(_DAT_0f7b8f98 + 0x180))(&uStack_1868,&DAT_0f7b8f98,plVar14,&uStack_1898);
  aplStack_1458[0] = (long *)0xb9e005c73cd931bd;
  aplStack_1458[1] = (long *)&UNK_0140f690;
  aplStack_1458[2] = (long *)0x1;
  auStack_1440[0] = 99;
  if (bStack_1828 == 0) {
    pbStack_1948 = (byte *)0x0;
    pbStack_1940 = (byte *)0x0;
    pbStack_1938 = (byte *)0x0;
    puVar15 = (undefined4 *)0x2d;
    uStack_1950 = 0xee7b040;
    FUN_0eedeb80(0x100000008,0x2d,&uStack_1868,&pbStack_1948,aplStack_1458);
    if (((ulong)pbStack_1948 & 1) != 0) {
      puVar15 = (undefined4 *)((ulong)pbStack_1948 & 0xfffffffffffffffe);
      uStack_1950 = 0xee7b058;
      func_0x0412a280(pbStack_1938);
    }
    if ((bStack_1828 & 1) == 0) goto LAB_0ee7b068;
LAB_0ee7af31:
    if (lStack_848 != 0) goto LAB_0ee7af42;
LAB_0ee7b086:
    uStack_1058 = 0;
  }
  else {
    if ((bStack_1828 & 1) != 0) goto LAB_0ee7af31;
LAB_0ee7b068:
    uStack_1950 = 0xee7b075;
    func_0x048e6d60(&uStack_1868);
    if (lStack_848 == 0) goto LAB_0ee7b086;
LAB_0ee7af42:
    uVar10 = 0;
    lVar12 = lStack_848;
    plVar16 = plVar14;
    plVar18 = plVar14;
    do {
      if ((((char)*plVar18 == '\\') || ((char)*plVar18 == '/')) &&
         (uVar10 < 0x40 && 0 < (long)plVar16 - (long)plVar14)) {
        aplStack_1458[uVar10 * 2] = plVar14;
        aplStack_1458[uVar10 * 2 + 1] = (long *)((long)plVar16 - (long)plVar14);
        uVar10 = uVar10 + 1;
        plVar14 = (long *)((long)plVar18 + (ulong)(lVar12 != 0));
      }
      plVar18 = (long *)((long)plVar18 + 1);
      plVar16 = (long *)((long)plVar16 + 1);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    plVar18 = (long *)((long)alStack_c48 + (lStack_848 - (long)plVar14));
    puVar15 = (undefined4 *)CONCAT71((int7)((ulong)plVar16 >> 8),uVar10 < 0x40 && 0 < (long)plVar18)
    ;
    uStack_1058 = uVar10;
    if (uVar10 < 0x40 && 0 < (long)plVar18) {
      aplStack_1458[uVar10 * 2] = plVar14;
      aplStack_1458[uVar10 * 2 + 1] = plVar18;
      uStack_1058 = uVar10 + 1;
    }
  }
  plVar16 = aplStack_1458[1];
  plVar14 = aplStack_1458[0];
  pbStack_1948 = (byte *)0x0;
  pbStack_1940 = (byte *)0x0;
  pbStack_1938 = (byte *)0x0;
  pbStack_1908 = (byte *)0x0;
  pbStack_1900 = (byte *)0x0;
  pbStack_18f8 = (byte *)0x0;
  puStack_18e8 = param_2;
  if ((long *)0xfffffffffffffff7 < aplStack_1458[1]) {
    uStack_1950 = 0xee7b9dd;
    uVar11 = func_0x04882e30();
    uStack_1950 = 0xee7b9ec;
    FUN_041084d6(&DAT_0f7b8fb8);
    uStack_1950 = 0xee7b9f4;
    plVar16 = (long *)_Unwind_Resume(uVar11);
    uStack_1950 = 0xee7bab0;
    func_0x048e6e10(&pbStack_1908);
    uStack_1950 = 0xee7bab8;
    func_0x048e6e10(&pbStack_1948);
    uStack_1950 = 0xee7bac0;
    plVar14 = plVar16;
    _Unwind_Resume();
    uStack_1a40 = 0;
    uStack_1a38 = 0;
    lStack_1a30 = 0;
    uStack_1970 = *puVar15;
    uStack_196c = puVar15[1];
    uStack_1968 = puVar15[2];
    uStack_1964 = puVar15[3];
    plStack_1960 = plVar16;
    puStack_1958 = param_2;
    uStack_1950 = (ulong)param_4;
    cVar8 = FUN_0ee7ade0(plVar14 + 0x15,&uStack_1970,&uStack_1a40,0);
    if (cVar8 != '\0') {
      bVar25 = (uStack_1a40 & 1) != 0;
      lStack_1980 = (long)&uStack_1a40 + 1;
      if (bVar25) {
        lStack_1980 = lStack_1a30;
      }
      uStack_1978 = uStack_1a40 >> 1 & 0x7f;
      if (bVar25) {
        uStack_1978 = uStack_1a38;
      }
      uStack_19e0 = *puVar15;
      uStack_19dc = puVar15[1];
      uStack_19d8 = puVar15[2];
      uStack_19d4 = puVar15[3];
      (**(code **)(*plVar14 + 0x138))(plVar14,&uStack_19e0,&lStack_1980);
      func_0x0ee37d00(&uStack_1a28);
      if (bStack_19e8 == 0) {
        plVar16 = plVar14 + 10;
        lVar12 = 0x28;
      }
      else {
        LOCK();
        plVar14[8] = plVar14[8] + 1;
        UNLOCK();
        LOCK();
        UNLOCK();
        lVar12 = 0x20;
        plVar16 = (long *)0xf7b9028;
      }
      LOCK();
      *plVar16 = *plVar16 + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar12 + 0xf7b9010) = *(long *)(lVar12 + 0xf7b9010) + (ulong)(bStack_19e8 == 0);
      UNLOCK();
      if (plVar14[1] != 0) {
        func_0x0ee5bc60(plVar14[1],bStack_19e8,0);
      }
      bVar1 = bStack_19e8;
      uVar10 = (ulong)bStack_19e8;
      bStack_1990 = bStack_19e8;
      if (bStack_19e8 == 0) {
        uStack_19d0 = uStack_1a28;
        uStack_19c8 = uStack_1a20;
        uStack_19c0 = uStack_1a18;
        uStack_19b8 = uStack_1a10;
        uStack_19b0 = uStack_1a08;
        uStack_1a18 = 0;
        uStack_1a10 = 0;
        uStack_1a08 = 0;
        uStack_19a8 = (undefined4)uStack_1a00;
        uStack_19a4 = uStack_1a00._4_4_;
        uStack_19a0 = (undefined4)uStack_19f8;
        uStack_199c = uStack_19f8._4_4_;
        uStack_1998 = uStack_19f0;
        uStack_1a00 = 0;
        uStack_19f8 = 0;
        uStack_19f0 = 0;
        func_0x048e6d60(&uStack_19d0);
      }
      if ((bStack_19e8 & 1) == 0) {
        func_0x048e6d60(&uStack_1a28);
      }
      if (bVar1 != 0) goto LAB_0ee7bd73;
    }
    uStack_19e0 = *puVar15;
    uStack_19dc = puVar15[1];
    uStack_19d8 = puVar15[2];
    uStack_19d4 = puVar15[3];
    (**(code **)(*plVar14 + 0x40))(plVar14,&uStack_19e0);
    func_0x0ee37d00(&uStack_1a28);
    if (bStack_19e8 == 0) {
      plVar16 = plVar14 + 10;
      lVar12 = 0x28;
    }
    else {
      LOCK();
      plVar14[8] = plVar14[8] + 1;
      UNLOCK();
      LOCK();
      UNLOCK();
      lVar12 = 0x20;
      plVar16 = (long *)0xf7b9028;
    }
    LOCK();
    *plVar16 = *plVar16 + 1;
    UNLOCK();
    LOCK();
    *(long *)(lVar12 + 0xf7b9010) = *(long *)(lVar12 + 0xf7b9010) + (ulong)(bStack_19e8 == 0);
    UNLOCK();
    if (plVar14[1] != 0) {
      func_0x0ee5bc60(plVar14[1],bStack_19e8,0);
    }
    uVar10 = (ulong)bStack_19e8;
    bStack_1990 = bStack_19e8;
    uVar17 = uVar10;
    if (bStack_19e8 == 0) {
      uStack_19d0 = uStack_1a28;
      uStack_19c8 = uStack_1a20;
      uStack_19c0 = uStack_1a18;
      uStack_19b8 = uStack_1a10;
      uStack_19b0 = uStack_1a08;
      uStack_1a18 = 0;
      uStack_1a10 = 0;
      uStack_1a08 = 0;
      uStack_19a8 = (undefined4)uStack_1a00;
      uStack_19a4 = uStack_1a00._4_4_;
      uStack_19a0 = (undefined4)uStack_19f8;
      uStack_199c = uStack_19f8._4_4_;
      uStack_1998 = uStack_19f0;
      uStack_1a00 = 0;
      uStack_19f8 = 0;
      uStack_19f0 = 0;
      func_0x048e6d60(&uStack_19d0);
      uVar17 = (ulong)bStack_19e8;
    }
    if ((uVar17 & 1) == 0) {
      func_0x048e6d60(&uStack_1a28);
    }
LAB_0ee7bd73:
    if ((uStack_1a40 & 1) != 0) {
      func_0x0412a280(lStack_1a30,uStack_1a40 & 0xfffffffffffffffe);
    }
    return uVar10;
  }
  if (aplStack_1458[1] < (long *)0x17) {
    uStack_1868 = (byte *)CONCAT71(uStack_1868._1_7_,(char)aplStack_1458[1] * '\x02');
    lVar12 = (long)&uStack_1868 + 1;
    if (aplStack_1458[1] != (long *)0x0) goto LAB_0ee7b17d;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1868._1_1_ = 0;
LAB_0ee7b1a0:
    uStack_1950 = 0xee7b1b0;
    pbStack_1940 = (byte *)func_0x0d1e6d00(&pbStack_1948,&uStack_1868);
    if (((ulong)uStack_1868 & 1) != 0) {
      uStack_1950 = 0xee7b1d8;
      func_0x0412a280(lStack_1858,(ulong)uStack_1868 & 0xfffffffffffffffe);
    }
  }
  else {
    uVar10 = 0x1a;
    if (((ulong)aplStack_1458[1] | 7) != 0x17) {
      uVar10 = ((ulong)aplStack_1458[1] | 7) + 1;
    }
    uStack_1950 = 0xee7b155;
    lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
    if (lVar12 == 0) {
      uStack_1950 = 0xee7b988;
      func_0x0eec74c0(uVar10,0);
    }
    uStack_1868 = (byte *)(uVar10 | 1);
    uStack_1860 = plVar16;
    lStack_1858 = lVar12;
LAB_0ee7b17d:
    uStack_1950 = 0xee7b18b;
    func_0x0eee2ee0(lVar12,plVar14,plVar16);
    *(undefined1 *)(lVar12 + (long)plVar16) = 0;
    if (pbStack_1938 <= pbStack_1940) goto LAB_0ee7b1a0;
    *(long *)(pbStack_1940 + 0x10) = lStack_1858;
    *(undefined4 *)pbStack_1940 = (undefined4)uStack_1868;
    *(undefined4 *)(pbStack_1940 + 4) = uStack_1868._4_4_;
    *(undefined4 *)(pbStack_1940 + 8) = (undefined4)uStack_1860;
    *(undefined4 *)(pbStack_1940 + 0xc) = uStack_1860._4_4_;
    pbStack_1940 = pbStack_1940 + 0x18;
  }
  bVar25 = (*pbStack_1948 & 1) != 0;
  pbVar24 = pbStack_1948 + 1;
  if (bVar25) {
    pbVar24 = *(byte **)(pbStack_1948 + 0x10);
  }
  uVar10 = (ulong)(*pbStack_1948 >> 1);
  if (bVar25) {
    uVar10 = *(ulong *)(pbStack_1948 + 8);
  }
  uStack_1950 = 0xee7b20c;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (plVar14 == (long *)0x0) {
    uStack_1950 = 0xee7b979;
    func_0x0eec74c0(0x10,0);
  }
  plVar18 = aplStack_1458[1];
  plVar16 = aplStack_1458[0];
  *plVar14 = (long)pbVar24;
  plVar14[1] = uVar10;
  uStack_1950 = 0xee7b24a;
  func_0x0eee2dd0(auStack_1050,0,0x400);
  lStack_c50 = _DAT_0f7b9450;
  if (_DAT_0f7b9450 != -1) {
    uStack_1950 = 0xee7b26d;
    memcpy(auStack_1050,0xf7b9050);
  }
  uStack_1950 = 0xee7b296;
  func_0x0ee97d00(&uStack_1868,plVar14,plVar14 + 2,plVar16,plVar18,auStack_1050);
  uStack_18dc = param_4;
  if (pbStack_1900 < pbStack_18f8) {
    *(long *)(pbStack_1900 + 0x10) = lStack_1858;
    *(byte **)pbStack_1900 = uStack_1868;
    *(long **)(pbStack_1900 + 8) = uStack_1860;
    uStack_1868 = (byte *)0x0;
    uStack_1860 = (long *)0x0;
    lStack_1858 = 0;
    pbStack_1900 = pbStack_1900 + 0x18;
  }
  else {
    uStack_1950 = 0xee7b2f1;
    pbStack_1900 = (byte *)func_0x0d1e6d00(&pbStack_1908,&uStack_1868);
    if (((ulong)uStack_1868 & 1) != 0) {
      uStack_1950 = 0xee7b319;
      func_0x0412a280(lStack_1858,(ulong)uStack_1868 & 0xfffffffffffffffe);
    }
  }
  uStack_1950 = 0xee7b326;
  func_0x0412a280(plVar14,0x10);
  if (1 < uStack_1058) {
    lVar22 = uStack_1058 - 1;
    lVar12 = 0x18;
    puVar21 = (undefined8 *)auStack_1440;
    do {
      bVar25 = (pbStack_1948[lVar12 + -0x18] & 1) != 0;
      uStack_1868 = pbStack_1948 + lVar12 + -0x17;
      if (bVar25) {
        uStack_1868 = *(byte **)(pbStack_1948 + lVar12 + -8);
      }
      uStack_1860 = (long *)(ulong)(pbStack_1948[lVar12 + -0x18] >> 1);
      if (bVar25) {
        uStack_1860 = *(long **)(pbStack_1948 + lVar12 + -0x10);
      }
      lVar2 = puVar21[-1];
      uVar11 = *puVar21;
      uStack_1950 = 0xee7b41e;
      lStack_1858 = lVar2;
      uStack_1850 = uVar11;
      func_0x048ad670(&uStack_1928,&uStack_1868,2,0x2f);
      lStack_18c8 = lVar22;
      puStack_18c0 = puVar21;
      if (pbStack_1940 < pbStack_1938) {
        *(long *)(pbStack_1940 + 0x10) = lStack_1918;
        *(undefined4 *)pbStack_1940 = (undefined4)uStack_1928;
        *(undefined4 *)(pbStack_1940 + 4) = uStack_1928._4_4_;
        *(undefined4 *)(pbStack_1940 + 8) = (undefined4)uStack_1920;
        *(undefined4 *)(pbStack_1940 + 0xc) = uStack_1920._4_4_;
        pbStack_1940 = pbStack_1940 + 0x18;
      }
      else {
        uStack_1950 = 0xee7b46d;
        pbStack_1940 = (byte *)func_0x0d1e6d00(&pbStack_1948,&uStack_1928);
        if ((uStack_1928 & 1) != 0) {
          uStack_1950 = 0xee7b48c;
          func_0x0412a280(lStack_1918,uStack_1928 & 0xfffffffffffffffe);
        }
      }
      bVar25 = (pbStack_1948[lVar12] & 1) != 0;
      pbVar24 = pbStack_1948 + lVar12 + 1;
      if (bVar25) {
        pbVar24 = *(byte **)(pbStack_1948 + lVar12 + 0x10);
      }
      uVar10 = (ulong)(pbStack_1948[lVar12] >> 1);
      if (bVar25) {
        uVar10 = *(ulong *)(pbStack_1948 + lVar12 + 8);
      }
      uStack_1950 = 0xee7b4c4;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
      if (plVar14 == (long *)0x0) {
        uStack_1950 = 0xee7b599;
        func_0x0eec74c0(0x10,0);
      }
      *plVar14 = (long)pbVar24;
      plVar14[1] = uVar10;
      uStack_1950 = 0xee7b4ee;
      func_0x0eee2dd0(auStack_438,0,0x400);
      lVar22 = _DAT_0f7b9450;
      if (_DAT_0f7b9450 != -1) {
        uStack_1950 = 0xee7b50c;
        memcpy(auStack_438,0xf7b9050);
      }
      lStack_38 = lVar22;
      uStack_1950 = 0xee7b537;
      func_0x0ee97d00(&uStack_1868,plVar14,plVar14 + 2,lVar2,uVar11,auStack_438);
      puVar21 = puStack_18c0;
      if (pbStack_1900 < pbStack_18f8) {
        *(long *)(pbStack_1900 + 0x10) = lStack_1858;
        *(byte **)pbStack_1900 = uStack_1868;
        *(long **)(pbStack_1900 + 8) = uStack_1860;
        uStack_1868 = (byte *)0x0;
        uStack_1860 = (long *)0x0;
        lStack_1858 = 0;
        pbStack_1900 = pbStack_1900 + 0x18;
      }
      else {
        uStack_1950 = 0xee7b55c;
        pbStack_1900 = (byte *)func_0x0d1e6d00(&pbStack_1908,&uStack_1868);
        if (((ulong)uStack_1868 & 1) != 0) {
          uStack_1950 = 0xee7b588;
          func_0x0412a280(lStack_1858,(ulong)uStack_1868 & 0xfffffffffffffffe);
        }
      }
      uStack_1950 = 0xee7b3a4;
      func_0x0412a280(plVar14,0x10);
      lVar12 = lVar12 + 0x18;
      puVar21 = puVar21 + 2;
      lVar22 = lStack_18c8 + -1;
    } while (lVar22 != 0);
  }
  uVar6 = uStack_18dc;
  pbVar24 = pbStack_1940;
  pbVar23 = pbStack_1900;
  do {
    pbVar19 = pbVar23;
    if (pbVar24 == pbStack_1948) {
      uVar10 = 0;
      goto LAB_0ee7b88d;
    }
    pbStack_18b8 = *(byte **)(pbVar24 + -8);
    uStack_18b0 = *(ulong *)(pbVar24 + -0x10);
    if ((pbVar24[-0x18] & 1) == 0) {
      pbStack_18b8 = pbVar24 + -0x17;
      uStack_18b0 = (ulong)(pbVar24[-0x18] >> 1);
    }
    uStack_1950 = 0xee7b5fe;
    cVar8 = func_0x0ee852a0(lStack_18d8,&pbStack_18b8);
    pbVar7 = pbStack_18d0;
    pbVar23 = pbVar19 + -0x18;
    pbVar24 = pbVar24 + -0x18;
  } while (cVar8 == '\0');
  if (pbVar23 != pbStack_18d0) {
    bVar1 = *pbVar23;
    if ((*pbStack_18d0 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        *(long *)(pbStack_18d0 + 0x10) = *(long *)(pbVar19 + -8);
        uVar3 = *(undefined4 *)(pbVar19 + -0x14);
        uVar4 = *(undefined4 *)(pbVar19 + -0x10);
        uVar5 = *(undefined4 *)(pbVar19 + -0xc);
        *(undefined4 *)pbStack_18d0 = *(undefined4 *)pbVar23;
        *(undefined4 *)(pbStack_18d0 + 4) = uVar3;
        *(undefined4 *)(pbStack_18d0 + 8) = uVar4;
        *(undefined4 *)(pbStack_18d0 + 0xc) = uVar5;
      }
      else {
        uStack_1950 = 0xee7b669;
        func_0x04885070(pbStack_18d0,*(long *)(pbVar19 + -8),*(long *)(pbVar19 + -0x10));
      }
    }
    else {
      bVar25 = (bVar1 & 1) != 0;
      pbVar24 = pbVar19 + -0x17;
      if (bVar25) {
        pbVar24 = *(byte **)(pbVar19 + -8);
      }
      uVar10 = (ulong)(bVar1 >> 1);
      if (bVar25) {
        uVar10 = *(ulong *)(pbVar19 + -0x10);
      }
      uStack_1950 = 0xee7b657;
      func_0x04885120(pbStack_18d0,pbVar24,uVar10);
    }
  }
  if ((char)uVar6 == '\0') {
LAB_0ee7b7cb:
    uStack_1878 = *(undefined4 *)puStack_18e8;
    uStack_1874 = *(undefined4 *)((long)puStack_18e8 + 4);
    uStack_1870 = *(undefined4 *)(puStack_18e8 + 1);
    uStack_186c = *(undefined4 *)((long)puStack_18e8 + 0xc);
    bVar25 = (*pbVar7 & 1) != 0;
    pbStack_18a8 = pbVar7 + 1;
    if (bVar25) {
      pbStack_18a8 = *(byte **)(pbVar7 + 0x10);
    }
    uStack_18a0 = (ulong)(*pbVar7 >> 1);
    if (bVar25) {
      uStack_18a0 = *(ulong *)(pbVar7 + 8);
    }
    uStack_1950 = 0xee7b828;
    func_0x0ee97e80(&uStack_1868,*(undefined8 *)(lStack_18d8 + 8),&uStack_1878,&pbStack_18a8);
    lVar12 = lStack_1858;
    plVar14 = uStack_1860;
    if (uStack_1860 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_1860 + 1;
      lVar22 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        uStack_1950 = 0xee7b858;
        (**(code **)(*uStack_1860 + 0x10))(uStack_1860);
        uStack_1950 = 0xee7b860;
        func_0x0412c2d0(plVar14);
      }
    }
    uVar10 = CONCAT71((int7)((ulong)plVar14 >> 8),lVar12 != 0);
    uVar17 = uStack_1928;
    if ((char)uVar6 != '\0') goto joined_r0x0ee7b878;
  }
  else {
    bVar25 = (*pbVar7 & 1) != 0;
    pbVar24 = pbVar7 + 1;
    if (bVar25) {
      pbVar24 = *(byte **)(pbVar7 + 0x10);
    }
    uVar10 = (ulong)(*pbVar7 >> 1);
    if (bVar25) {
      uVar10 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar10 == 0) {
LAB_0ee7b777:
      uStack_1928 = 0;
      uStack_1920 = 0;
      lStack_1918 = 0;
      uVar17 = 0;
    }
    else {
      uVar13 = 0;
      pbVar23 = pbVar24;
      uVar17 = uVar10;
      pbVar19 = pbVar24;
      pbVar20 = pbVar24;
      do {
        if (((*pbVar23 == 0x5c) || (*pbVar23 == 0x2f)) &&
           (uVar13 < 0x40 && 0 < (long)pbVar20 - (long)pbVar19)) {
          (&uStack_1868)[uVar13 * 2] = pbVar19;
          (&uStack_1860)[uVar13 * 2] = (long)pbVar20 - (long)pbVar19;
          uVar13 = uVar13 + 1;
          pbVar19 = pbVar23 + (uVar17 != 0);
        }
        pbVar23 = pbVar23 + 1;
        pbVar20 = pbVar20 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if (uVar13 < 0x40 && 0 < (long)(pbVar24 + (uVar10 - (long)pbVar19))) {
        (&uStack_1868)[uVar13 * 2] = pbVar19;
        (&uStack_1860)[uVar13 * 2] = pbVar24 + (uVar10 - (long)pbVar19);
        uVar13 = uVar13 + 1;
      }
      else {
        uStack_1468 = uVar13;
        if (uVar13 == 0) goto LAB_0ee7b777;
      }
      uStack_1950 = 0xee7b765;
      uStack_1468 = uVar13;
      func_0x048ad670(&uStack_1928,&uStack_1868,uVar13 - 1,0x2f);
      uVar17 = uStack_1928 & 0xff;
    }
    uVar10 = uVar17 >> 1;
    if ((uVar17 & 1) != 0) {
      uVar10 = uStack_1920;
    }
    if (puStack_18e8[1] != uVar10) goto LAB_0ee7b7cb;
    lVar12 = lStack_1918;
    if ((uVar17 & 1) == 0) {
      lVar12 = (long)&uStack_1928 + 1;
    }
    uStack_1950 = 0xee7b7c3;
    iVar9 = func_0x0eee3000(*puStack_18e8,lVar12);
    if (iVar9 != 0) goto LAB_0ee7b7cb;
    uVar10 = CONCAT71((int7)((ulong)pbVar7 >> 8),1);
joined_r0x0ee7b878:
    if ((uVar17 & 1) != 0) {
      uStack_1950 = 0xee7b88d;
      func_0x0412a280(lStack_1918,uStack_1928 & 0xfffffffffffffffe);
    }
  }
LAB_0ee7b88d:
  pbVar23 = pbStack_1908;
  pbVar24 = pbStack_1900;
  if (pbStack_1908 != (byte *)0x0) {
    for (; pbVar23 != pbVar24; pbVar24 = pbVar24 + -0x18) {
      if ((pbVar24[-0x18] & 1) != 0) {
        uStack_1950 = 0xee7b8d1;
        func_0x0412a280(*(long *)(pbVar24 + -8),*(ulong *)(pbVar24 + -0x18) & 0xfffffffffffffffe);
      }
    }
    pbStack_1900 = pbVar23;
    uStack_1950 = 0xee7b8ea;
    func_0x0412a280(pbStack_1908,(long)pbStack_18f8 - (long)pbStack_1908);
  }
  pbVar23 = pbStack_1948;
  pbVar24 = pbStack_1940;
  if (pbStack_1948 != (byte *)0x0) {
    for (; pbVar23 != pbVar24; pbVar24 = pbVar24 + -0x18) {
      if ((pbVar24[-0x18] & 1) != 0) {
        uStack_1950 = 0xee7b931;
        func_0x0412a280(*(undefined8 *)(pbVar24 + -8),
                        *(ulong *)(pbVar24 + -0x18) & 0xfffffffffffffffe);
      }
    }
    pbStack_1940 = pbVar23;
    uStack_1950 = 0xee7b949;
    func_0x0412a280(pbStack_1948,(long)pbStack_1938 - (long)pbStack_1948);
  }
LAB_0ee7b949:
  return uVar10 & 0xffffffff;
}


