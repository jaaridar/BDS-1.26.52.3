/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee40950 (ELF vaddr 0xed40950)
 * Label: caller-of-callee
 * Body:  [[0ee40950, 0ee4103e] [0ee41040, 0ee41816] [0ee41820, 0ee41b76] [0ee41b80, 0ee421b2] [0ee421c0, 0ee4256c] [0ee42594, 0ee431d6] [0ee431e0, 0ee43546]]
 * Ghidra: FUN_0ee40950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0ee40950(ulong *param_1,undefined8 param_2,byte *param_3,byte *param_4,long *param_5,
                    ulong param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined8 uVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong *puVar23;
  ulong *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong *puVar29;
  ulong *puVar30;
  byte *pbVar31;
  ulong uVar32;
  ulong *puVar33;
  long **pplVar34;
  ulong uVar35;
  byte *pbVar36;
  bool bVar37;
  ulong uStack_2be0;
  ulong *puStack_2bd8;
  long *plStack_2bd0;
  undefined *puStack_2bc8;
  undefined8 uStack_2bc0;
  undefined4 uStack_2bb8;
  ulong uStack_2bb0;
  byte *pbStack_2ba8;
  byte *pbStack_2ba0;
  ulong *puStack_2b98;
  ulong *puStack_2b90;
  long lStack_2b88;
  long lStack_2b80;
  long lStack_2b78;
  long lStack_2b70;
  byte bStack_2b68;
  undefined1 auStack_2b60 [8];
  ulong *puStack_2b58;
  ulong *puStack_2b50;
  long lStack_2b48;
  long lStack_2b40;
  ulong uStack_2b38;
  long *plStack_2b28;
  long lStack_2b20;
  long **pplStack_2b18;
  byte *pbStack_2b10;
  long *plStack_2b08;
  ulong *puStack_2b00;
  long lStack_2af8;
  undefined4 uStack_2af0;
  undefined4 uStack_2aec;
  undefined4 uStack_2ae8;
  undefined4 uStack_2ae4;
  byte bStack_2ae0;
  long *plStack_2ad8;
  long *plStack_2ad0;
  long *plStack_2ac8;
  long *plStack_2ac0;
  long *plStack_2ab8;
  long *plStack_2aa8;
  long *plStack_2aa0;
  long *plStack_2a98;
  undefined8 *puStack_2a88;
  undefined8 *puStack_2a80;
  undefined8 *puStack_2a78;
  long **pplStack_2a70;
  ulong uStack_2a68;
  byte *pbStack_2a60;
  char *pcStack_2a58;
  long *plStack_2a50;
  undefined8 uStack_2a48;
  ulong *puStack_2a38;
  ulong *puStack_2a30;
  long lStack_2a28;
  long lStack_2a20;
  undefined8 uStack_2a18;
  long *plStack_2a10;
  undefined8 uStack_2a08;
  ulong *puStack_2a00;
  undefined1 auStack_29f8 [16];
  long lStack_29e8;
  long lStack_29e0;
  long lStack_29d8;
  long lStack_29d0;
  long lStack_29c8;
  long lStack_29c0;
  byte bStack_29b8;
  undefined1 *puStack_29b0;
  undefined8 uStack_29a8;
  byte *pbStack_29a0;
  long **pplStack_2998;
  byte **ppbStack_2990;
  ulong *puStack_2988;
  undefined8 *puStack_2980;
  ulong *puStack_2978;
  byte **ppbStack_2970;
  ulong *puStack_2968;
  undefined8 *puStack_2960;
  ulong *puStack_2958;
  byte *pbStack_2950;
  ulong *puStack_2948;
  byte *pbStack_2940;
  long **pplStack_2938;
  byte *pbStack_2930;
  ulong *puStack_2928;
  byte *pbStack_2920;
  ulong *puStack_2918;
  long **pplStack_2910;
  long *plStack_2908;
  long *plStack_2900;
  long ***ppplStack_28f8;
  long ***ppplStack_28f0;
  long **pplStack_28e8;
  long ***ppplStack_28e0;
  byte *pbStack_28d8;
  byte bStack_28d0;
  undefined7 uStack_28cf;
  undefined8 uStack_28c0;
  ulong uStack_28b8;
  ulong uStack_28b0;
  undefined8 uStack_28a8;
  undefined8 uStack_28a0;
  ulong uStack_2898;
  undefined8 uStack_2890;
  undefined8 uStack_2888;
  ulong uStack_2880;
  undefined8 uStack_2878;
  ulong *puStack_2870;
  long lStack_2868;
  long lStack_2860;
  long lStack_2858;
  long lStack_2850;
  long lStack_2848;
  long lStack_2840;
  byte bStack_2838;
  ulong *puStack_2478;
  byte *pbStack_2470;
  undefined *puStack_2468;
  long lStack_2460;
  long lStack_2458;
  long lStack_2450;
  long lStack_2448;
  long lStack_2440;
  long lStack_2438;
  byte bStack_2430;
  ulong *puStack_2070;
  ulong uStack_2068;
  undefined *puStack_2060;
  undefined8 uStack_2058;
  undefined4 uStack_2050;
  byte abStack_1c68 [16];
  long lStack_1c58;
  long lStack_1c50;
  long lStack_1c48;
  long lStack_1c40;
  long lStack_1c38;
  long lStack_1c30;
  byte bStack_1c28;
  byte *apbStack_1870 [5];
  undefined4 uStack_1848;
  ulong *puStack_1460;
  byte abStack_1458 [1024];
  byte *pbStack_1058;
  byte bStack_1050;
  undefined7 uStack_104f;
  undefined8 uStack_1040;
  undefined8 uStack_c50;
  undefined1 auStack_c48 [1024];
  undefined8 uStack_848;
  undefined1 auStack_840 [1024];
  long lStack_440;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  puVar23 = (ulong *)(param_6 & 0xffffffff);
  bVar37 = (*param_3 & 1) != 0;
  pbStack_2a60 = param_3 + 1;
  if (bVar37) {
    pbStack_2a60 = *(byte **)(param_3 + 0x10);
  }
  pplVar34 = (long **)(ulong)(*param_3 >> 1);
  if (bVar37) {
    pplVar34 = *(long ***)(param_3 + 8);
  }
  bVar37 = (*param_4 & 1) != 0;
  pbVar36 = param_4 + 1;
  if (bVar37) {
    pbVar36 = *(byte **)(param_4 + 0x10);
  }
  puVar30 = (ulong *)(ulong)(*param_4 >> 1);
  if (bVar37) {
    puVar30 = *(ulong **)(param_4 + 8);
  }
  plStack_2b28 = param_5;
  (**(code **)(*param_5 + 0x10))(param_5);
  if ((DAT_0f7b8fb8 == '\0') && (iVar17 = FUN_04108328(&DAT_0f7b8fb8), iVar17 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbStack_2920 = pbVar36;
  puStack_2918 = puVar30;
  cVar15 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_2920);
  iVar17 = 1;
  if (cVar15 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar19 = FUN_04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    pbStack_2930 = pbVar36;
    puStack_2928 = puVar30;
    cVar15 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&pbStack_2930);
    if (cVar15 != '\0') {
      if (DAT_0f7b8fb8 == '\0') goto LAB_0ee4345c;
      while( true ) {
        pbStack_2940 = pbStack_2a60;
        pplStack_2938 = pplVar34;
        cVar15 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_2940);
        iVar17 = 3;
        if (cVar15 == '\0') break;
        pcStack_2a58 = *(char **)(param_7 + 0x50);
        plVar22 = *(long **)(param_7 + 0x58);
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar22[1] = plVar22[1] + 1;
          UNLOCK();
        }
        uStack_2a48 = *(undefined8 *)(param_7 + 0x60);
        pplStack_2a70 = pplVar34;
        plStack_2a50 = plVar22;
        if ((pcStack_2a58 == (char *)0x0) || (*pcStack_2a58 == '\0')) {
          func_0x04890760();
          goto LAB_0ee4338e;
        }
        func_0x0ee7ab80(&lStack_2a20,&pcStack_2a58);
        pcStack_2a58 = (char *)0x0;
        plStack_2a50 = (long *)0x0;
        if (plVar22 == (long *)0x0) {
          uStack_2a48 = 0;
        }
        else {
          LOCK();
          plVar1 = plVar22 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            func_0x0412c2d0(plVar22);
          }
          plVar22 = plStack_2a50;
          uStack_2a48 = 0;
          if (plStack_2a50 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_2a50 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plStack_2a50 + 0x10))(plStack_2a50);
              func_0x0412c2d0(plVar22);
            }
          }
        }
        puStack_2bd8 = (ulong *)func_0x0eec0d90(pbStack_2a60,lStack_2a20,0);
        if (puStack_2bd8 == (ulong *)0x0) {
          iVar17 = 1;
          goto LAB_0ee43250;
        }
        memset(abStack_1458,0,0x408);
        if (DAT_0f7b8fb8 == '\0') goto LAB_0ee434ac;
LAB_0ee40c6e:
        pbStack_2950 = pbVar36;
        puStack_2948 = puVar30;
        (**(code **)(_DAT_0f7b8f98 + 0x178))(abStack_1c68,&DAT_0f7b8f98,abStack_1458,&pbStack_2950);
        apbStack_1870[2] = (byte *)0x22958a09a0a8ddc7;
        apbStack_1870[3] = &UNK_0140f690;
        apbStack_1870[4] = (byte *)0x1;
        uStack_1848 = 0x340;
        if (bStack_1c28 == 0) {
          func_0x0eedea30(&bStack_1050);
          func_0x0eedeb80(2,0x2d,abStack_1c68,&bStack_1050,apbStack_1870 + 2);
          if ((bStack_1050 & 1) != 0) {
            func_0x0412a280(uStack_1040,CONCAT71(uStack_104f,bStack_1050) & 0xfffffffffffffffe);
          }
        }
        lVar2 = lStack_1c40;
        puStack_2a00 = param_1;
        if ((bStack_1c28 & 1) == 0) {
          lVar21 = lStack_1c38;
          if (lStack_1c40 != 0) {
            while (lVar2 != lVar21) {
              FUN_048b3e80(lVar21 + -0x40);
              lVar21 = lVar21 + -0x40;
            }
            lStack_1c38 = lVar2;
            func_0x0412a280(lStack_1c40,lStack_1c30 - lStack_1c40);
          }
          lVar21 = lStack_1c58;
          lVar2 = lStack_1c50;
          if (lStack_1c58 != 0) {
            for (; lVar21 != lVar2; lVar2 = lVar2 + -0x50) {
              if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                                *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
              }
            }
            lStack_1c50 = lVar21;
            func_0x0412a280(lStack_1c58,lStack_1c48 - lStack_1c58);
          }
        }
        pbVar25 = abStack_1c68;
        memset(pbVar25,0,0x408);
        pbVar36 = pbStack_1058;
        if ((pbStack_1058 != (byte *)0xffffffffffffffff) &&
           (func_0x0eee2f00(abStack_1c68,abStack_1458), pbVar36 < (byte *)0x3ff)) {
          abStack_1458[(long)pbVar36] = 0x2f;
          pbVar26 = abStack_1458 + 1 + (long)pbStack_1058;
          pbStack_1058 = pbStack_1058 + 1;
          *pbVar26 = 0;
        }
        apbStack_1870[1] = pbVar36;
        uStack_2a68 = puStack_2bd8[0xd];
        LOCK();
        *(int *)(plStack_2b28 + 2) = (int)uStack_2a68 + 2;
        UNLOCK();
        lStack_2b48 = 0;
        lStack_2b40 = 0;
        uStack_2b38 = 0;
        lStack_2b20 = 0;
        puStack_2a88 = (undefined8 *)0x0;
        puStack_2a80 = (undefined8 *)0x0;
        puStack_2a78 = (undefined8 *)0x0;
        func_0x0ee45240(&puStack_2a88);
        lVar2 = lStack_2b48;
        uVar35 = 0x400;
        if ((int)puVar23 == 0) {
          uVar35 = 0x1000000;
        }
        uVar32 = lStack_2b40 - lStack_2b48;
        uVar27 = uVar35 - uVar32;
        if (uVar35 < uVar32 || uVar27 == 0) {
          if (uVar35 < uVar32) {
            lStack_2b40 = lStack_2b48 + uVar35;
          }
        }
        else if (uStack_2b38 - lStack_2b40 < uVar27) {
          uStack_2be0 = uStack_2b38 - lStack_2b48;
          uVar20 = uStack_2be0 * 2;
          if (uStack_2be0 * 2 <= uVar35) {
            uVar20 = uVar35;
          }
          uStack_2bb0 = 0x7fffffffffffffff;
          if (uStack_2be0 < 0x3fffffffffffffff) {
            uStack_2bb0 = uVar20;
          }
          lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (lVar21 == 0) {
            func_0x0eec74c0(uStack_2bb0,0);
          }
          uStack_2bb0 = uStack_2bb0 + lVar21;
          memset(lVar21 + uVar32,0,uVar27);
          func_0x0eee2f00(lVar21,lVar2,uVar32);
          lStack_2b48 = lVar21;
          lStack_2b40 = uVar35 + lVar21;
          uStack_2b38 = uStack_2bb0;
          if (lVar2 != 0) {
            func_0x0412a280(lVar2,uStack_2be0);
          }
        }
        else {
          lVar2 = lStack_2b40 + uVar27;
          memset(lStack_2b40,0,uVar27);
          lStack_2b40 = lVar2;
        }
        pbVar36 = apbStack_1870[1];
        if (apbStack_1870[1] == (byte *)0x0) {
          puVar30 = (ulong *)0x0;
        }
        else {
          puVar30 = (ulong *)0x0;
          pbVar26 = apbStack_1870[1];
          pbVar28 = pbVar25;
          pbVar31 = pbVar25;
          do {
            if (((*pbVar28 == 0x5c) || (*pbVar28 == 0x2f)) &&
               (puVar30 < (ulong *)0x40 && 0 < (long)(pbVar25 + -(long)pbVar31))) {
              apbStack_1870[(long)puVar30 * 2 + 2] = pbVar31;
              apbStack_1870[(long)puVar30 * 2 + 3] = pbVar25 + -(long)pbVar31;
              puVar30 = (ulong *)((long)puVar30 + 1);
              pbVar31 = pbVar28 + (pbVar26 != (byte *)0x0);
            }
            pbVar28 = pbVar28 + 1;
            pbVar25 = pbVar25 + 1;
            pbVar26 = pbVar26 + -1;
          } while (pbVar26 != (byte *)0x0);
          if (puVar30 < (ulong *)0x40 &&
              0 < (long)(abStack_1c68 + (long)apbStack_1870[1] + -(long)pbVar31)) {
            apbStack_1870[(long)puVar30 * 2 + 2] = pbVar31;
            apbStack_1870[(long)puVar30 * 2 + 3] =
                 abStack_1c68 + (long)apbStack_1870[1] + -(long)pbVar31;
            puVar30 = (ulong *)((long)puVar30 + 1);
          }
        }
        plStack_2aa8 = (long *)0x0;
        plStack_2aa0 = (long *)0x0;
        plStack_2a98 = (long *)0x0;
        puStack_1460 = puVar30;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (plVar22 == (long *)0x0) {
LAB_0ee4338e:
          func_0x0eec74c0(0x10,0);
        }
        plStack_2aa8 = plVar22;
        plStack_2a98 = plVar22 + 2;
        *plVar22 = (long)abStack_1c68;
        plVar22[1] = (long)pbVar36;
        plStack_2aa0 = plVar22 + 2;
        pbVar36 = apbStack_1870[(long)puVar30 * 2];
        pbVar25 = apbStack_1870[(long)puVar30 * 2 + 1];
        memset(auStack_438,0,0x400);
        lVar2 = _DAT_0f7b9858;
        if (_DAT_0f7b9858 != -1) {
          func_0x0eee2f00(auStack_438,0xf7b9458);
        }
        lStack_38 = lVar2;
        func_0x0ee453c0(&bStack_1050,&plStack_2aa8,pbVar36,pbVar25,auStack_438);
        if (plStack_2aa8 != (long *)0x0) {
          plStack_2aa0 = plStack_2aa8;
          func_0x0412a280(plStack_2aa8,(long)plStack_2a98 - (long)plStack_2aa8);
        }
        pbVar26 = apbStack_1870[1];
        plStack_2ac8 = (long *)0x0;
        plStack_2ac0 = (long *)0x0;
        plStack_2ab8 = (long *)0x0;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
        if (plVar22 == (long *)0x0) {
          func_0x0eec74c0(0x10,0);
        }
        plStack_2ac0 = plVar22 + 2;
        *plVar22 = (long)abStack_1c68;
        plVar22[1] = (long)pbVar26;
        plStack_2ac8 = plVar22;
        plStack_2ab8 = plStack_2ac0;
        memset(auStack_840,0,0x400);
        lVar2 = _DAT_0f7b9450;
        if (_DAT_0f7b9450 != -1) {
          func_0x0eee2f00(auStack_840,0xf7b9050);
        }
        lStack_440 = lVar2;
        func_0x0ee453c0(auStack_c48,&plStack_2ac8,pbVar36,pbVar25,auStack_840);
        if (plStack_2ac8 != (long *)0x0) {
          plStack_2ac0 = plStack_2ac8;
          func_0x0412a280(plStack_2ac8,(long)plStack_2ab8 - (long)plStack_2ac8);
        }
        uVar14 = uStack_c50;
        plStack_2ad8 = (long *)0x0;
        plStack_2ad0 = (long *)0x0;
        if ((DAT_0f7b8fb8 == '\0') && (iVar17 = FUN_04108328(&DAT_0f7b8fb8), iVar17 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        puStack_2468 = (undefined *)uVar14;
        pplVar34 = &plStack_2ad8;
        pbStack_2470 = &bStack_1050;
        (**(code **)(_DAT_0f7b8f98 + 0x10))
                  (auStack_29f8,&DAT_0f7b8f98,&pbStack_2470,pplVar34,0x136,1);
        pbStack_2470 = (byte *)0x22958a09a0a8ddc7;
        puStack_2468 = &UNK_0140f690;
        lStack_2460 = 1;
        lStack_2458 = CONCAT44(lStack_2458._4_4_,0x371);
        if (bStack_29b8 == 0) {
          func_0x0eedea30(&uStack_2878);
          func_0x0eedeb80(2,0x2d,auStack_29f8,&uStack_2878,&pbStack_2470);
          if (((ulong)uStack_2878 & 1) != 0) {
            func_0x0412a280(lStack_2868,(ulong)uStack_2878 & 0xfffffffffffffffe);
          }
        }
        if ((bStack_29b8 & 1) == 0) {
          plVar22 = (long *)puStack_2bd8[0x28];
          if (plVar22 != (long *)0x0) {
            if (*plVar22 != 0) {
              func_0x0eee2e20();
            }
            *plVar22 = 0;
            if (plVar22[0x10] == 8) {
              func_0x04702dc0(plVar22 + 1);
            }
            func_0x0eee2e20(plVar22);
            puStack_2bd8[0x28] = 0;
          }
          (*(code *)puStack_2bd8[5])(puStack_2bd8[7],puStack_2bd8[0xc]);
          func_0x0eee2e20(puStack_2bd8);
          iVar17 = 1;
          goto LAB_0ee42fbf;
        }
        ppplStack_28f8 = &pplStack_2b18;
        plStack_2908 = &lStack_2b48;
        plStack_2900 = &lStack_2b20;
        ppplStack_28f0 = &pplStack_28e8;
        pplStack_2b18 = pplVar34;
        pbStack_2b10 = &bStack_1050;
        pplStack_2910 = pplVar34;
        pplStack_28e8 = pplVar34;
        ppplStack_28e0 = ppplStack_28f8;
        pbStack_28d8 = &bStack_1050;
        if (uStack_2a68 == 0) goto LAB_0ee427d0;
        puStack_2a30 = puStack_2bd8 + 0x16;
        puStack_2a38 = puStack_2bd8 + 0x27;
        uStack_2bb0 = 0;
        lStack_2a28 = 0;
LAB_0ee414c0:
        pbVar36 = (byte *)&uStack_2878;
        param_1 = &uStack_2068;
        memset(param_1,0,0x400);
        iVar17 = func_0x0eec1c90(puStack_2bd8,&pbStack_2470,0,param_1,0x400,0,0,0,0);
        lVar2 = lStack_2438;
        if (iVar17 != 0) {
          func_0x0ee455b0(&pbStack_2470,&pplStack_2b18);
          uStack_2878 = (long *)0x22958a09a0a8ddc7;
          puStack_2870 = (ulong *)&UNK_0140f690;
          lStack_2868 = 1;
          lStack_2860 = CONCAT44(lStack_2860._4_4_,0x3a5);
          if (bStack_2430 == 0) {
            func_0x0eedea30(&pbStack_2ba8);
            func_0x0eedeb80(2,0x2d,&pbStack_2470,&pbStack_2ba8,&uStack_2878);
            if (((ulong)pbStack_2ba8 & 1) != 0) {
              func_0x0412a280(puStack_2b98,(ulong)pbStack_2ba8 & 0xfffffffffffffffe);
            }
          }
          lVar2 = lStack_2448;
          if ((bStack_2430 & 1) == 0) {
            if (lStack_2448 != 0) {
              while (lVar2 != lStack_2440) {
                FUN_048b3e80(lStack_2440 + -0x40);
                lStack_2440 = lStack_2440 + -0x40;
              }
              lStack_2440 = lVar2;
              func_0x0412a280(lStack_2448,lStack_2438 - lStack_2448);
            }
            lVar21 = lStack_2460;
            lVar2 = lStack_2458;
            if (lStack_2460 != 0) {
              for (; lVar21 != lVar2; lVar2 = lVar2 + -0x50) {
                if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                                  *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
                }
              }
              lStack_2458 = lVar21;
              func_0x0412a280(lStack_2460,lStack_2450 - lStack_2460);
            }
          }
          func_0x0eec1b40(puStack_2bd8);
          if (iVar17 == -0x67) {
            uStack_2be0._0_4_ = 3;
            iVar17 = (int)uStack_2be0;
          }
          else if (iVar17 == 0) {
            uStack_2be0._0_4_ = 0;
            iVar17 = (int)uStack_2be0;
          }
          else if (iVar17 == -0x66) {
            uStack_2be0._0_4_ = 2;
            iVar17 = (int)uStack_2be0;
          }
          else {
            uStack_2be0._0_4_ = 1;
            iVar17 = (int)uStack_2be0;
          }
          goto LAB_0ee42fbf;
        }
        puVar23 = (ulong *)func_0x0eee2e90(&uStack_2068);
        if (puVar23 < (ulong *)0xfffffffffffffff8) {
          puVar30 = (ulong *)(auStack_2b60 + 1);
          if (puVar23 < (ulong *)0x17) {
            auStack_2b60[0] = (char)puVar23 * '\x02';
            puVar24 = puVar30;
            if (puVar23 != (ulong *)0x0) goto LAB_0ee415b3;
          }
          else {
            uVar35 = ((ulong)puVar23 | 7) + 1;
            if (((ulong)puVar23 | 7) == 0x17) {
              uVar35 = 0x1a;
            }
            puVar24 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
            if (puVar24 == (ulong *)0x0) {
              func_0x0eec74c0(uVar35,0);
            }
            auStack_2b60 = (undefined1  [8])(uVar35 | 1);
            puStack_2b58 = puVar23;
            puStack_2b50 = puVar24;
LAB_0ee415b3:
            func_0x0eee2f00(puVar24,&uStack_2068,puVar23);
          }
          *(undefined1 *)((long)puVar24 + (long)puVar23) = 0;
          pbStack_2ba8 = abStack_1458;
          pbStack_2ba0 = pbStack_1058;
          puStack_2b98 = puStack_2b50;
          puStack_2b90 = puStack_2b58;
          if (((ulong)auStack_2b60 & 1) == 0) {
            puStack_2b98 = puVar30;
            puStack_2b90 = (ulong *)((ulong)auStack_2b60 >> 1 & 0x7f);
          }
          func_0x049151c0(&uStack_2878,&pbStack_2ba8,2,0x2f);
          puStack_2958 = puStack_2478;
          puStack_2960 = &uStack_2878;
          func_0x0ee45a20(&pbStack_2470,&puStack_2960);
          uStack_2ae8 = 0;
          uStack_2ae4 = 0;
          bStack_2ae0 = 0;
          lStack_2af8 = 0;
          uStack_2af0 = 0;
          uStack_2aec = 0;
          plStack_2b08 = (long *)0x0;
          puStack_2b00 = (ulong *)0x0;
          puVar33 = (ulong *)(ulong)(auStack_2b60[0] >> 1);
          puVar29 = puStack_2b58;
          puVar24 = puStack_2b50;
          if (((ulong)auStack_2b60 & 1) == 0) {
            puVar29 = puVar33;
            puVar24 = puVar30;
          }
          if (*(char *)((long)puVar24 + -1 + (long)puVar29) == '/') {
            memset(&uStack_2878,0,0x408);
            if ((DAT_0f7b8fb8 == '\0') && (iVar17 = FUN_04108328(&DAT_0f7b8fb8), iVar17 != 0)) {
              func_0x0ee5ea20(&DAT_0f7b8f98);
              __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
              func_0x0410844d(&DAT_0f7b8fb8);
            }
            ppbStack_2970 = &pbStack_2470;
            puStack_2968 = puStack_2070;
            (**(code **)(_DAT_0f7b8f98 + 0x178))
                      (&pbStack_2ba8,&DAT_0f7b8f98,&uStack_2878,&ppbStack_2970);
            plStack_2bd0 = (long *)0x22958a09a0a8ddc7;
            puStack_2bc8 = &UNK_0140f690;
            uStack_2bc0 = 1;
            uStack_2bb8 = 0x3b7;
            if (bStack_2b68 == 0) {
              func_0x0eedea30(&bStack_28d0);
              func_0x0eedeb80(2,0x2d,&pbStack_2ba8,&bStack_28d0,&plStack_2bd0);
              if ((bStack_28d0 & 1) != 0) {
                func_0x0412a280(uStack_28c0,CONCAT71(uStack_28cf,bStack_28d0) & 0xfffffffffffffffe);
              }
            }
            lVar21 = lStack_2b80;
            if ((bStack_2b68 & 1) == 0) {
              lVar3 = lStack_2b78;
              if (lStack_2b80 != 0) {
                while (lVar21 != lVar3) {
                  FUN_048b3e80(lVar3 + -0x40);
                  lVar3 = lVar3 + -0x40;
                }
                lStack_2b78 = lVar21;
                func_0x0412a280(lStack_2b80,lStack_2b70 - lStack_2b80);
              }
              puVar24 = puStack_2b98;
              puVar30 = puStack_2b90;
              if (puStack_2b98 != (ulong *)0x0) {
                for (; puVar24 != puVar30; puVar30 = puVar30 + -10) {
                  if (((char)puVar30[-1] == '\x01') && ((puVar30[-6] & 1) != 0)) {
                    func_0x0412a280(puVar30[-4],puVar30[-6] & 0xfffffffffffffffe);
                  }
                }
                puStack_2b90 = puVar24;
                func_0x0412a280(puStack_2b98,lStack_2b88 - (long)puStack_2b98);
              }
            }
            param_1 = puStack_2478;
            if (puStack_2478 != (ulong *)0xffffffffffffffff) {
              func_0x0eee2f00(&pbStack_2470,&uStack_2878);
            }
            puStack_2070 = param_1;
            puVar33 = (ulong *)(ulong)(auStack_2b60[0] >> 1);
          }
          else {
            bStack_2ae0 = 1;
          }
          puVar30 = (ulong *)(auStack_2b60 + 1);
          if ((auStack_2b60[0] & 1) != 0) {
            puVar33 = puStack_2b58;
            puVar30 = puStack_2b50;
          }
          memset(&uStack_2878,0,0x408);
          if (puVar33 < (ulong *)0x400) {
            if (puVar33 != (ulong *)0x0) {
              memmove(&uStack_2878,puVar30,puVar33);
            }
            puStack_2478 = puVar33;
            *(undefined1 *)((long)&uStack_2878 + (long)puVar33) = 0;
            puStack_2978 = puStack_2478;
          }
          else {
            puStack_2978 = (ulong *)0x0;
          }
          puStack_2980 = &uStack_2878;
          cVar15 = func_0x0ee3c850(param_7);
          if (cVar15 != '\0') {
            if ((bStack_2ae0 & 1) != 0) {
              if (*(char *)(param_7 + 0x49) == '\x01') {
                if ((DAT_0f7b8fb8 == '\0') && (iVar17 = FUN_04108328(&DAT_0f7b8fb8), iVar17 != 0)) {
                  func_0x0ee5ea20(&DAT_0f7b8f98);
                  __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                  func_0x0410844d(&DAT_0f7b8fb8);
                }
                ppbStack_2990 = &pbStack_2470;
                puStack_2988 = puStack_2070;
                cVar15 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98);
                if (cVar15 != '\0') goto LAB_0ee4194f;
              }
              iVar17 = func_0x0eec3270(puStack_2bd8,0,0,0,0);
              if (iVar17 == 0) {
                lVar21 = 0;
LAB_0ee41fc3:
                do {
                  if ((ulong)(lStack_2b40 - lStack_2b48) <= (ulong)((lVar2 - lVar21) + lStack_2b20))
                  {
                    uVar18 = func_0x0eec37c0(puStack_2bd8,lStack_2b48 + lStack_2b20,
                                             (int)(lStack_2b40 - lStack_2b48) - (int)lStack_2b20);
                    if (-1 < (int)uVar18) {
                      param_1 = (ulong *)(ulong)uVar18;
                      lStack_2b20 = lStack_2b20 + (long)param_1;
                      func_0x0ee45f40(&uStack_2878);
                      pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
                      pbStack_2ba0 = &UNK_0140f690;
                      puStack_2b98 = (ulong *)0x1;
                      puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x40d);
                      if (bStack_2838 == 0) {
                        func_0x0eedea30(&plStack_2bd0);
                        func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
                        if (((ulong)plStack_2bd0 & 1) != 0) {
                          func_0x0412a280(uStack_2bc0);
                        }
                      }
                      lVar3 = lStack_2850;
                      if ((bStack_2838 & 1) != 0) goto code_r0x0ee41fb8;
                      lVar2 = lStack_2848;
                      if (lStack_2850 != 0) {
                        while (lVar3 != lVar2) {
                          FUN_048b3e80(lVar2 + -0x40);
                          lVar2 = lVar2 + -0x40;
                        }
                        lStack_2848 = lVar3;
                        func_0x0412a280();
                      }
                      lVar21 = lStack_2868;
                      lVar2 = lStack_2860;
                      if (lStack_2868 != 0) {
                        for (; lVar21 != lVar2; lVar2 = lVar2 + -0x50) {
                          if ((*(char *)(lVar2 + -8) == '\x01') &&
                             ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
                            func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                                            *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
                          }
                        }
                        lStack_2860 = lVar21;
                        func_0x0412a280();
                      }
                      func_0x0eec1bc0(puStack_2bd8);
                      pplVar34 = (long **)0x1;
                      func_0x0eec1b40(puStack_2bd8);
                      uStack_2be0 = 1;
                      goto LAB_0ee42257;
                    }
                    func_0x0ee455b0(&uStack_2878);
                    pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
                    pbStack_2ba0 = &UNK_0140f690;
                    puStack_2b98 = (ulong *)0x1;
                    puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x400);
                    if (bStack_2838 == 0) {
                      func_0x0eedea30(&plStack_2bd0);
                      func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
                      if (((ulong)plStack_2bd0 & 1) != 0) {
                        func_0x0412a280(uStack_2bc0);
                      }
                    }
                    if ((bStack_2838 & 1) == 0) {
                      func_0x05ff1910(&uStack_2878);
                    }
                    func_0x0eec1bc0(puStack_2bd8);
                    func_0x0eec1b40(puStack_2bd8);
                    switch(uVar18) {
                    case 0xffffff97:
                      goto code_r0x0ee421b3;
                    case 0xffffff98:
                      goto code_r0x0ee4256d;
                    case 0xffffff99:
                      goto code_r0x0ee4257a;
                    case 0xffffff9a:
                      goto code_r0x0ee42587;
                    }
                    goto LAB_0ee42594;
                  }
                  uVar18 = func_0x0eec37c0(puStack_2bd8);
                  if ((int)uVar18 < 0) {
                    func_0x0ee455b0(&uStack_2878);
                    pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
                    pbStack_2ba0 = &UNK_0140f690;
                    puStack_2b98 = (ulong *)0x1;
                    puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x3ed);
                    if (bStack_2838 == 0) {
                      func_0x0eedea30(&plStack_2bd0);
                      func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
                      if (((ulong)plStack_2bd0 & 1) != 0) {
                        func_0x0412a280(uStack_2bc0);
                      }
                    }
                    if ((bStack_2838 & 1) == 0) {
                      func_0x05ff1910(&uStack_2878);
                    }
                    func_0x0eec1bc0(puStack_2bd8);
                    func_0x0eec1b40(puStack_2bd8);
                    switch(uVar18) {
                    case 0xffffff97:
                      goto code_r0x0ee421b3;
                    case 0xffffff98:
                      goto code_r0x0ee4256d;
                    case 0xffffff99:
                      goto code_r0x0ee4257a;
                    case 0xffffff9a:
                      goto code_r0x0ee42587;
                    }
                    goto LAB_0ee42594;
                  }
                  lStack_2b20 = lStack_2b20 + (ulong)uVar18;
                  lVar21 = lVar21 + (ulong)uVar18;
                } while (uVar18 != 0);
                param_1 = (ulong *)0x0;
                goto LAB_0ee422e4;
              }
              func_0x0ee455b0(&uStack_2878,&pplStack_2b18);
              pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
              pbStack_2ba0 = &UNK_0140f690;
              puStack_2b98 = (ulong *)0x1;
              puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x3db);
              if (bStack_2838 == 0) {
                func_0x0eedea30(&plStack_2bd0);
                func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
                if (((ulong)plStack_2bd0 & 1) != 0) {
                  func_0x0412a280(uStack_2bc0,(ulong)plStack_2bd0 & 0xfffffffffffffffe);
                }
                if ((bStack_2838 & 1) == 0) goto LAB_0ee42126;
LAB_0ee41c9b:
                plVar22 = (long *)puStack_2bd8[0x28];
              }
              else {
                if ((bStack_2838 & 1) != 0) goto LAB_0ee41c9b;
LAB_0ee42126:
                func_0x05ff1910(&uStack_2878);
                plVar22 = (long *)puStack_2bd8[0x28];
              }
              if (plVar22 != (long *)0x0) {
                if (*plVar22 != 0) {
                  func_0x0eee2e20();
                }
                *plVar22 = 0;
                if (plVar22[0x10] == 8) {
                  func_0x04702dc0(plVar22 + 1);
                }
                func_0x0eee2e20(plVar22);
                puStack_2bd8[0x28] = 0;
              }
              (*(code *)puStack_2bd8[5])(puStack_2bd8[7]);
              func_0x0eee2e20(puStack_2bd8);
              switch(iVar17) {
              case -0x69:
                goto code_r0x0ee421b3;
              case -0x68:
                goto code_r0x0ee4256d;
              case -0x67:
                goto code_r0x0ee4257a;
              case -0x66:
                goto code_r0x0ee42587;
              default:
LAB_0ee42594:
                pplVar34 = (long **)0x1;
                uStack_2be0 = 1;
                goto LAB_0ee42257;
              }
            }
            goto LAB_0ee4194f;
          }
          uVar35 = uStack_2bb0 + 1;
          if (uVar35 < uStack_2a68) {
            if ((puStack_2bd8[0x12] != 0) &&
               (puStack_2bd8[0xd] == 0xffff || puStack_2bd8[0x10] + 1 != puStack_2bd8[0xd])) {
              puStack_2bd8[0x11] =
                   puStack_2bd8[0x1e] + puStack_2bd8[0x1f] + puStack_2bd8[0x20] + puStack_2bd8[0x11]
                   + 0x2e;
              puStack_2bd8[0x10] = puStack_2bd8[0x10] + 1;
              iVar17 = func_0x0eec1c90(puStack_2bd8,puStack_2a30,puStack_2a38,0,0,0,0,0,0);
              puStack_2bd8[0x12] = (ulong)(iVar17 == 0);
              if (iVar17 == 0) goto LAB_0ee41bae;
            }
            func_0x0ee455b0(&uStack_2878,&pplStack_2b18);
            pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
            pbStack_2ba0 = &UNK_0140f690;
            puStack_2b98 = (ulong *)0x1;
            puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x3c6);
            if (bStack_2838 == 0) {
              func_0x0eedea30(&plStack_2bd0);
              func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
              if (((ulong)plStack_2bd0 & 1) != 0) {
                func_0x0412a280(uStack_2bc0,(ulong)plStack_2bd0 & 0xfffffffffffffffe);
              }
            }
            lVar2 = lStack_2850;
            if ((bStack_2838 & 1) == 0) {
              lVar21 = lStack_2848;
              if (lStack_2850 != 0) {
                while (lVar2 != lVar21) {
                  FUN_048b3e80(lVar21 + -0x40);
                  lVar21 = lVar21 + -0x40;
                }
                lStack_2848 = lVar2;
                func_0x0412a280(lStack_2850,lStack_2840 - lStack_2850);
              }
              lVar21 = lStack_2868;
              lVar2 = lStack_2860;
              if (lStack_2868 != 0) {
                for (; lVar21 != lVar2; lVar2 = lVar2 + -0x50) {
                  if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
                    func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                                    *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
                  }
                }
                lStack_2860 = lVar21;
                func_0x0412a280(lStack_2868,lStack_2858 - lStack_2868);
              }
            }
            goto LAB_0ee421e0;
          }
LAB_0ee41bae:
          LOCK();
          *(int *)(plStack_2b28 + 1) = (int)uVar35;
          UNLOCK();
          pplVar34 = (long **)0x4;
          goto LAB_0ee42257;
        }
        func_0x04882e30();
        puVar23 = (ulong *)0x0;
        puVar30 = puStack_2bd8;
LAB_0ee4345c:
        iVar17 = FUN_04108328(&DAT_0f7b8fb8);
        if (iVar17 != 0) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
      }
    }
  }
LAB_0ee40b77:
  uVar16 = func_0x0eeae360(iVar17);
  func_0x0ee437e0(&uStack_28b8,uVar16);
  uVar27 = uStack_2880;
  uVar35 = uStack_2898;
  *param_1 = uStack_28b8;
  param_1[1] = uStack_28b0;
  uVar16 = (undefined4)uStack_28a8;
  uVar6 = uStack_28a8._4_4_;
  uVar7 = (undefined4)uStack_28a0;
  uVar8 = uStack_28a0._4_4_;
  uStack_28a8 = 0;
  uStack_28a0 = 0;
  uStack_2898 = 0;
  uVar9 = (undefined4)uStack_2890;
  uVar10 = uStack_2890._4_4_;
  uVar11 = (undefined4)uStack_2888;
  uVar12 = uStack_2888._4_4_;
  uStack_2890 = 0;
  uStack_2888 = 0;
  uStack_2880 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 2) = uVar16;
  *(undefined4 *)((long)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
  param_1[4] = uVar35;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 6) = uVar11;
  *(undefined4 *)((long)param_1 + 0x34) = uVar12;
  param_1[7] = uVar27;
  func_0x048e6d60(&uStack_28b8);
  return param_1;
code_r0x0ee41fb8:
  lVar21 = lVar21 + (long)param_1;
  if (uVar18 == 0) goto LAB_0ee422e4;
  goto LAB_0ee41fc3;
LAB_0ee422e4:
  uVar18 = func_0x0eec1bc0(puStack_2bd8);
  puVar23 = (ulong *)(ulong)uVar18;
  if (uVar18 != 0) {
    func_0x0ee455b0(&uStack_2878);
    pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
    pbStack_2ba0 = &UNK_0140f690;
    puStack_2b98 = (ulong *)0x1;
    puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x419);
    if (bStack_2838 == 0) {
      func_0x0eedea30(&plStack_2bd0);
      func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
      if (((ulong)plStack_2bd0 & 1) != 0) {
        func_0x0412a280(uStack_2bc0);
      }
    }
    if ((bStack_2838 & 1) == 0) {
      func_0x05ff1910(&uStack_2878);
    }
    func_0x0eec1b40(puStack_2bd8);
    pplVar34 = (long **)0x1;
    switch(uVar18) {
    case 0xffffff97:
code_r0x0ee421b3:
      pplVar34 = (long **)0x1;
      uStack_2be0 = 5;
      break;
    case 0xffffff98:
code_r0x0ee4256d:
      pplVar34 = (long **)0x1;
      uStack_2be0 = 4;
      break;
    case 0xffffff99:
code_r0x0ee4257a:
      pplVar34 = (long **)0x1;
      uStack_2be0 = 3;
      break;
    case 0xffffff9a:
code_r0x0ee42587:
      pplVar34 = (long **)0x1;
      uStack_2be0 = 2;
      break;
    default:
      uStack_2be0 = 1;
    }
    goto LAB_0ee42257;
  }
LAB_0ee4194f:
  puVar30 = puStack_2070;
  pbVar36 = (byte *)&uStack_2878;
  if ((ulong *)0xfffffffffffffff7 < puStack_2070) goto LAB_0ee434a7;
  if (puStack_2070 < (ulong *)0x17) {
    uStack_2878 = (long *)CONCAT71(uStack_2878._1_7_,(char)puStack_2070 * '\x02');
    lVar21 = (long)&uStack_2878 + 1;
    if (puStack_2070 != (ulong *)0x0) goto LAB_0ee41d0c;
  }
  else {
    uVar35 = ((ulong)puStack_2070 | 7) + 1;
    if (((ulong)puStack_2070 | 7) == 0x17) {
      uVar35 = 0x1a;
    }
    lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
    if (lVar21 == 0) {
      func_0x0eec74c0(uVar35,0);
    }
    uStack_2878 = (long *)(uVar35 | 1);
    puStack_2870 = puVar30;
    lStack_2868 = lVar21;
LAB_0ee41d0c:
    memmove(lVar21,&pbStack_2470,puVar30);
  }
  *(undefined1 *)(lVar21 + (long)puVar30) = 0;
  if (((ulong)plStack_2b08 & 1) != 0) {
    func_0x0412a280(lStack_2af8);
  }
  puVar4 = puStack_2a80;
  lStack_2af8 = lStack_2868;
  plStack_2b08 = uStack_2878;
  puStack_2b00 = puStack_2870;
  uStack_2ae8 = (undefined4)lVar2;
  uStack_2ae4 = (undefined4)((ulong)lVar2 >> 0x20);
  uStack_2af0 = (undefined4)lStack_2a28;
  uStack_2aec = (undefined4)((ulong)lStack_2a28 >> 0x20);
  if (puStack_2a80 < puStack_2a78) {
    if (((ulong)uStack_2878 & 1) == 0) {
      puStack_2a80[2] = lStack_2868;
      *puStack_2a80 = uStack_2878;
      puStack_2a80[1] = puStack_2870;
    }
    else {
      func_0x0412e5e0(puStack_2a80,lStack_2868,puStack_2870);
    }
    *(byte *)(puVar4 + 5) = bStack_2ae0;
    *(undefined4 *)(puVar4 + 3) = uStack_2af0;
    *(undefined4 *)((long)puVar4 + 0x1c) = uStack_2aec;
    *(undefined4 *)(puVar4 + 4) = uStack_2ae8;
    *(undefined4 *)((long)puVar4 + 0x24) = uStack_2ae4;
    puStack_2a80 = puVar4 + 6;
  }
  else {
    puStack_2a80 = (undefined8 *)func_0x0ee4ba50(&puStack_2a88);
  }
  uVar35 = uStack_2bb0 + 1;
  if (uVar35 < uStack_2a68) {
    if ((puStack_2bd8[0x12] != 0) &&
       (puStack_2bd8[0xd] == 0xffff || puStack_2bd8[0x10] + 1 != puStack_2bd8[0xd])) {
      puStack_2bd8[0x11] =
           puStack_2bd8[0x1e] + puStack_2bd8[0x1f] + puStack_2bd8[0x20] + puStack_2bd8[0x11] + 0x2e;
      puStack_2bd8[0x10] = puStack_2bd8[0x10] + 1;
      iVar17 = func_0x0eec1c90(puStack_2bd8,puStack_2a30,puStack_2a38,0,0,0,0,0,0);
      puStack_2bd8[0x12] = (ulong)(iVar17 == 0);
      if (iVar17 == 0) goto LAB_0ee41f83;
    }
    func_0x0ee455b0(&uStack_2878,&pplStack_2b18);
    pbStack_2ba8 = (byte *)0x22958a09a0a8ddc7;
    pbStack_2ba0 = &UNK_0140f690;
    puStack_2b98 = (ulong *)0x1;
    puStack_2b90 = (ulong *)CONCAT44(puStack_2b90._4_4_,0x429);
    if (bStack_2838 == 0) {
      func_0x0eedea30(&plStack_2bd0);
      func_0x0eedeb80(2,0x2d,&uStack_2878,&plStack_2bd0,&pbStack_2ba8);
      if (((ulong)plStack_2bd0 & 1) != 0) {
        func_0x0412a280(uStack_2bc0,(ulong)plStack_2bd0 & 0xfffffffffffffffe);
      }
    }
    if ((bStack_2838 & 1) == 0) {
      func_0x05ff1910(&uStack_2878);
    }
LAB_0ee421e0:
    plVar22 = (long *)puStack_2bd8[0x28];
    if (plVar22 != (long *)0x0) {
      if (*plVar22 != 0) {
        func_0x0eee2e20();
      }
      *plVar22 = 0;
      if (plVar22[0x10] == 8) {
        func_0x04702dc0(plVar22 + 1);
      }
      func_0x0eee2e20(plVar22);
      puStack_2bd8[0x28] = 0;
    }
    (*(code *)puStack_2bd8[5])(puStack_2bd8[7]);
    func_0x0eee2e20(puStack_2bd8);
    uStack_2be0 = 0;
    pplVar34 = (long **)0x1;
  }
  else {
LAB_0ee41f83:
    LOCK();
    *(int *)(plStack_2b28 + 1) = (int)uVar35;
    UNLOCK();
    lStack_2a28 = lStack_2a28 + lVar2;
    pplVar34 = (long **)0x0;
  }
LAB_0ee42257:
  if (((ulong)plStack_2b08 & 1) != 0) {
    func_0x0412a280(lStack_2af8);
  }
  if (((ulong)auStack_2b60 & 1) != 0) {
    func_0x0412a280(puStack_2b50);
  }
  iVar17 = (int)uStack_2be0;
  if (((ulong)pplVar34 & 3) != 0) goto LAB_0ee42fbf;
  uStack_2bb0 = uStack_2bb0 + 1;
  if (uStack_2bb0 == uStack_2a68) goto LAB_0ee427d0;
  goto LAB_0ee414c0;
LAB_0ee434a7:
  func_0x04882e30();
LAB_0ee434ac:
  iVar17 = FUN_04108328(&DAT_0f7b8fb8);
  if (iVar17 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_0ee40c6e;
LAB_0ee427d0:
  pplVar34 = pplStack_2a70;
  if (lStack_2b20 == 0) {
LAB_0ee428a5:
    func_0x0ee56810(&pbStack_2470,&plStack_2ad8);
    uStack_2878 = (long *)0x22958a09a0a8ddc7;
    puStack_2870 = (ulong *)&UNK_0140f690;
    lStack_2868 = 1;
    lStack_2860._0_4_ = 0x43c;
    if (bStack_2430 == 0) {
      func_0x0eedea30(&uStack_2068);
      func_0x0eedeb80(0x100000008,0x2d,&pbStack_2470,&uStack_2068,&uStack_2878);
      pplVar34 = pplStack_2a70;
      if ((uStack_2068 & 1) != 0) {
        func_0x0412a280(uStack_2058,uStack_2068 & 0xfffffffffffffffe);
        pplVar34 = pplStack_2a70;
      }
    }
    func_0x0ee38090(&pbStack_2470);
    iVar19 = func_0x0eec1b40(puStack_2bd8);
    if ((iVar19 == 0) && (iVar19 = 0, *(char *)(param_7 + 0x48) == '\x01')) {
      plVar22 = (long *)func_0x0ee56790();
      pbStack_29a0 = pbStack_2a60;
      pplStack_2998 = pplVar34;
      (**(code **)(*plVar22 + 0x20))(&pbStack_2470,plVar22,&pbStack_29a0);
      uStack_2878 = (long *)0x22958a09a0a8ddc7;
      puStack_2870 = (ulong *)&UNK_0140f690;
      lStack_2868 = 1;
      lStack_2860._0_4_ = 0x440;
      if (bStack_2430 == 0) {
        func_0x0eedea30(&uStack_2068);
        func_0x0eedeb80(2,0x2d,&pbStack_2470,&uStack_2068,&uStack_2878);
        if ((uStack_2068 & 1) != 0) {
          func_0x0412a280(uStack_2058,uStack_2068 & 0xfffffffffffffffe);
        }
      }
      bVar13 = bStack_2430;
      func_0x0ee38090(&pbStack_2470);
      iVar19 = -(uint)(bVar13 ^ 1);
    }
    LOCK();
    *(int *)(plStack_2b28 + 1) = (int)plStack_2b28[1] + 1;
    UNLOCK();
    plStack_2b08 = (long *)0x0;
    puStack_2b00 = (ulong *)0x0;
    uStack_2878 = (long *)auStack_c48;
    puStack_2870 = (ulong *)uStack_848;
    func_0x0ee599d0(&pbStack_2470,&plStack_2b08,&uStack_2878);
    uStack_2878 = (long *)0x22958a09a0a8ddc7;
    puStack_2870 = (ulong *)&UNK_0140f690;
    lStack_2868 = 1;
    lStack_2860 = CONCAT44(lStack_2860._4_4_,0x44c);
    if (bStack_2430 == 0) {
      func_0x0eedea30(&uStack_2068);
      func_0x0eedeb80(0x100000008,0x2d,&pbStack_2470,&uStack_2068,&uStack_2878);
      if ((uStack_2068 & 1) != 0) {
        func_0x0412a280(uStack_2058,uStack_2068 & 0xfffffffffffffffe);
      }
    }
    func_0x0ee38090(&pbStack_2470);
    (**(code **)(*plStack_2b08 + 0x10))(&plStack_2bd0,plStack_2b08,1);
    puStack_29b0 = auStack_c48;
    uStack_29a8 = uStack_848;
    func_0x0ee94560(&pbStack_2470,plStack_2bd0,&puStack_29b0,&puStack_2a88);
    func_0x0ee56c60(&uStack_2878,plStack_2bd0);
    uStack_2068 = 0x22958a09a0a8ddc7;
    puStack_2060 = &UNK_0140f690;
    uStack_2058 = 1;
    uStack_2050 = 0x455;
    if (bStack_2838 == 0) {
      func_0x0eedea30(&pbStack_2ba8);
      func_0x0eedeb80(2,0x2d,&uStack_2878,&pbStack_2ba8,&uStack_2068);
      if (((ulong)pbStack_2ba8 & 1) != 0) {
        func_0x0412a280(puStack_2b98,(ulong)pbStack_2ba8 & 0xfffffffffffffffe);
      }
    }
    func_0x0ee38090(&uStack_2878);
    uStack_2878 = (long *)0x22958a09a0a8ddc7;
    puStack_2870 = (ulong *)&UNK_0140f690;
    lStack_2868 = 1;
    lStack_2860 = CONCAT44(lStack_2860._4_4_,0x457);
    if (bStack_2430 == 0) {
      func_0x0eedea30(&uStack_2068);
      func_0x0eedeb80(2,0x2d,&pbStack_2470,&uStack_2068,&uStack_2878);
      if ((uStack_2068 & 1) != 0) {
        func_0x0412a280(uStack_2058,uStack_2068 & 0xfffffffffffffffe);
      }
    }
    bVar13 = bStack_2430;
    if ((bStack_2430 & 1) == 0) {
      func_0x0ee455b0(&uStack_2878,&pplStack_2b18);
      uStack_2068 = 0x22958a09a0a8ddc7;
      puStack_2060 = &UNK_0140f690;
      uStack_2058 = 1;
      uStack_2050 = 0x458;
      if (bStack_2838 == 0) {
        func_0x0eedea30(&pbStack_2ba8);
        func_0x0eedeb80(0x100000008,0x2d,&uStack_2878,&pbStack_2ba8,&uStack_2068);
        if (((ulong)pbStack_2ba8 & 1) != 0) {
          func_0x0412a280(puStack_2b98,(ulong)pbStack_2ba8 & 0xfffffffffffffffe);
        }
      }
      if ((bStack_2838 & 1) == 0) {
        func_0x05ff1910(&uStack_2878);
      }
      uStack_2be0._0_4_ = 1;
    }
    else {
      LOCK();
      *(int *)(plStack_2b28 + 1) = (int)plStack_2b28[1] + 1;
      UNLOCK();
    }
    func_0x0ee38090(&pbStack_2470);
    plVar22 = plStack_2bd0;
    plStack_2bd0 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    func_0x048e1080(&plStack_2b08);
    iVar17 = (int)uStack_2be0;
    if ((bVar13 & 1) == 0) goto LAB_0ee42fbf;
  }
  else {
    func_0x0ee45f40(&pbStack_2470,&pplStack_2910);
    uStack_2878 = (long *)0x22958a09a0a8ddc7;
    puStack_2870 = (ulong *)&UNK_0140f690;
    lStack_2868 = 1;
    lStack_2860 = CONCAT44(lStack_2860._4_4_,0x436);
    if (bStack_2430 == 0) {
      func_0x0eedea30(&uStack_2068);
      func_0x0eedeb80(2,0x2d,&pbStack_2470,&uStack_2068,&uStack_2878);
      pplVar34 = pplStack_2a70;
      if ((uStack_2068 & 1) != 0) {
        func_0x0412a280(uStack_2058,uStack_2068 & 0xfffffffffffffffe);
        pplVar34 = pplStack_2a70;
      }
    }
    if ((bStack_2430 & 1) != 0) goto LAB_0ee428a5;
    func_0x05ff1910(&pbStack_2470);
    iVar19 = func_0x0eec1b40(puStack_2bd8);
  }
  iVar17 = (iVar19 == -0x66) + 1;
  if (iVar19 == 0) {
    iVar17 = 0;
  }
LAB_0ee42fbf:
  lVar2 = lStack_29d0;
  if (bStack_29b8 == 0) {
    if (lStack_29d0 != 0) {
      while (lVar2 != lStack_29c8) {
        FUN_048b3e80(lStack_29c8 + -0x40);
        lStack_29c8 = lStack_29c8 + -0x40;
      }
      lStack_29c8 = lVar2;
      func_0x0412a280(lStack_29d0,lStack_29c0 - lStack_29d0);
    }
    lVar21 = lStack_29e8;
    lVar2 = lStack_29e0;
    if (lStack_29e8 != 0) {
      for (; lVar21 != lVar2; lVar2 = lVar2 + -0x50) {
        if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                          *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_29e0 = lVar21;
      func_0x0412a280(lStack_29e8,lStack_29d8 - lStack_29e8);
    }
  }
  if ((plStack_2ad8 != (long *)0x0) &&
     (func_0x0ee56810(&pbStack_2470,&plStack_2ad8), lVar2 = lStack_2448, bStack_2430 == 0)) {
    lVar21 = lStack_2440;
    if (lStack_2448 != 0) {
      while (lVar2 != lVar21) {
        FUN_048b3e80(lVar21 + -0x40);
        lVar21 = lVar21 + -0x40;
      }
      lStack_2440 = lVar2;
      func_0x0412a280(lStack_2448,lStack_2438 - lStack_2448);
    }
    lVar21 = lStack_2460;
    lVar2 = lStack_2458;
    if (lStack_2460 != 0) {
      for (; lVar21 != lVar2; lVar2 = lVar2 + -0x50) {
        if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar2 + -0x20),
                          *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_2458 = lVar21;
      func_0x0412a280(lStack_2460,lStack_2450 - lStack_2460);
    }
  }
  plVar22 = plStack_2ad0;
  plStack_2ad0 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 8))();
  }
  plVar22 = plStack_2ad8;
  plStack_2ad8 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 8))();
  }
  puVar5 = puStack_2a88;
  puVar4 = puStack_2a80;
  if (puStack_2a88 != (undefined8 *)0x0) {
    for (; puVar5 != puVar4; puVar4 = puVar4 + -6) {
      if ((*(byte *)(puVar4 + -6) & 1) != 0) {
        func_0x0412a280(puVar4[-4],puVar4[-6] & 0xfffffffffffffffe);
      }
    }
    puStack_2a80 = puVar5;
    func_0x0412a280(puStack_2a88,(long)puStack_2a78 - (long)puStack_2a88);
  }
  param_1 = puStack_2a00;
  if (lStack_2b48 != 0) {
    lStack_2b40 = lStack_2b48;
    func_0x0412a280(lStack_2b48,uStack_2b38 - lStack_2b48);
    param_1 = puStack_2a00;
  }
LAB_0ee43250:
  plVar22 = plStack_2a10;
  uStack_2a18 = 0;
  plStack_2a10 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    uStack_2a08 = 0;
  }
  else {
    LOCK();
    plVar1 = plVar22 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_2a10;
    uStack_2a08 = 0;
    if (plStack_2a10 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_2a10 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_2a10 + 0x10))(plStack_2a10);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  lVar2 = lStack_2a20;
  lStack_2a20 = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,0x58);
  }
  if (iVar17 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    return param_1;
  }
  goto LAB_0ee40b77;
}


