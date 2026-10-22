/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd672c40 (ELF vaddr 0xd572c40)
 * Label: caller-of-callee
 * Body:  [[0d672c40, 0d672df4] [0d672e00, 0d672f40] [0d672f50, 0d672f5c] [0d672f60, 0d6730b9] [0d6730c0, 0d6735ed] [0d6735f0, 0d673650] [0d673660, 0d673666] [0d673670, 0d673785] [0d673790, 0d6737d7] [0d6737e0, 0d673877] [0d673880, 0d673ace] [0d673ad0, 0d673af1] [0d673b00, 0d673bc8] [0d673bd0, 0d673cf0] [0d673d00, 0d673d86] [0d673d90, 0d673ea7] [0d673eb0, 0d673f02] [0d673f10, 0d673f89] [0d673f94, 0d673f9b] [0d674196, 0d6741d8]]
 * Ghidra: FUN_0d672c40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d672c40(long *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  long *plVar3;
  code *pcVar4;
  ulong *puVar5;
  bool bVar6;
  undefined1 auVar7 [8];
  undefined1 *puVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong **ppuVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong **ppuVar20;
  undefined1 *puVar21;
  ulong **ppuVar22;
  byte *pbVar23;
  ulong **ppuVar24;
  ulong **ppuVar25;
  ulong uVar26;
  long lVar27;
  ulong *puVar28;
  ulong *puVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_dd8 [8];
  ulong uStack_dd0;
  ulong **ppuStack_dc8;
  undefined4 uStack_db4;
  long *plStack_db0;
  ulong *puStack_da8;
  ulong *puStack_da0;
  long lStack_d98;
  ulong **ppuStack_d90;
  ulong **ppuStack_d88;
  ulong **ppuStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  ulong *puStack_d68;
  undefined1 auStack_d60 [16];
  long *plStack_d50;
  ulong *puStack_d48;
  undefined1 auStack_d40 [16];
  byte bStack_d30;
  undefined7 uStack_d2f;
  long lStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined4 uStack_d10;
  undefined4 uStack_d0c;
  ulong **ppuStack_d08;
  undefined1 auStack_d00 [16];
  undefined8 *puStack_cf0;
  ulong uStack_ce8;
  undefined1 *puStack_ce0;
  undefined1 *puStack_cd8;
  long lStack_cd0;
  long lStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  byte bStack_cb0;
  ulong uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  ulong *puStack_c88;
  long *plStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined1 *puStack_c68;
  undefined1 *puStack_c60;
  undefined1 auStack_c58 [8];
  ulong **appuStack_c50 [2];
  ulong **ppuStack_c40;
  ulong ***pppuStack_c38;
  ulong uStack_858;
  undefined1 auStack_848 [8];
  ulong uStack_840;
  ulong **ppuStack_838;
  ulong uStack_448;
  undefined1 auStack_438 [1024];
  undefined1 *puStack_38;
  
  (**(code **)(*param_1 + 200))(&bStack_d30,param_1);
  if ((bStack_d30 & 1) == 0) {
    if (bStack_d30 >> 1 != 0) goto LAB_0d672c91;
  }
  else if (lStack_d28 != 0) {
LAB_0d672c91:
    func_0x04863060(auStack_d40,0);
    func_0x0485e1c0(auStack_c58);
    cVar9 = func_0x0485e320(auStack_c58,&bStack_d30,auStack_d40,0);
    func_0x0485e2d0(auStack_c58);
    if (((cVar9 != '\0') && (cVar9 = func_0x04864290(auStack_d40), cVar9 != '\0')) &&
       (cVar9 = func_0x04864260(auStack_d40), cVar9 == '\0')) {
      ppuStack_d88 = (ulong **)0x0;
      ppuStack_d80 = (ulong **)0x0;
      lStack_d98 = 0;
      ppuStack_d90 = (ulong **)0x0;
      puStack_da8 = (ulong *)0x0;
      puStack_da0 = (ulong *)0x0;
      uVar11 = func_0x04864680(auStack_d40,&UNK_012ef64f);
      func_0x04865630(auStack_d60,uVar11);
      func_0x048656b0(auStack_d00,uVar11);
      plStack_db0 = param_1 + 5;
      plStack_d50 = param_1;
      while( true ) {
        cVar9 = func_0x04862c80(auStack_d60,auStack_d00);
        if (cVar9 != '\0') break;
        uVar11 = func_0x04862b80(auStack_d60);
        uVar12 = func_0x048648e0(uVar11,&UNK_013aa12a);
        auStack_c58 = (undefined1  [8])((ulong)auStack_c58 & 0xffffffffffff0000);
        func_0x04863cb0(auStack_dd8,uVar12,auStack_c58);
        if (((ulong)auStack_c58 & 1) != 0) {
          func_0x0412a280(appuStack_c50[1],(ulong)auStack_c58 & 0xfffffffffffffffe);
        }
        uVar12 = func_0x048648e0(uVar11,&UNK_013aac9a);
        auStack_c58 = (undefined1  [8])((ulong)auStack_c58 & 0xffffffffffff0000);
        func_0x04863cb0(&uStack_d78,uVar12,auStack_c58);
        if (((ulong)auStack_c58 & 1) != 0) {
          func_0x0412a280(appuStack_c50[1],(ulong)auStack_c58 & 0xfffffffffffffffe);
        }
        cVar9 = func_0x04865100(uVar11,&UNK_0142a5c6);
        if (cVar9 == '\0') {
          uStack_db4 = 0;
        }
        else {
          uVar11 = func_0x048648e0(uVar11,&UNK_0142a5c6);
          auStack_848 = (undefined1  [8])((ulong)auStack_848 & 0xffffffffffff0000);
          func_0x04863cb0(auStack_c58,uVar11,auStack_848);
          if (((ulong)auStack_848 & 1) != 0) {
            func_0x0412a280(ppuStack_838,(ulong)auStack_848 & 0xfffffffffffffffe);
          }
          if (((ulong)auStack_c58 & 1) == 0) {
            if (auStack_c58[0] >> 1 == 6) goto LAB_0d672f6b;
LAB_0d672f9a:
            func_0x0412d450(plStack_db0);
            (**(code **)(*(long *)param_1[0x17] + 0x18))();
            func_0x0412d520(plStack_db0);
            bVar6 = false;
            bVar30 = false;
            uStack_db4 = 0;
          }
          else {
            if (appuStack_c50[0] != (ulong **)0x6) goto LAB_0d672f9a;
LAB_0d672f6b:
            ppuVar13 = (ulong **)(auStack_c58 + 1);
            if (((ulong)auStack_c58 & 1) != 0) {
              ppuVar13 = appuStack_c50[1];
            }
            if (*(short *)((long)ppuVar13 + 4) != 0x6d61 || *(int *)ppuVar13 != 0x65727473)
            goto LAB_0d672f9a;
            bVar6 = true;
            bVar30 = true;
            uStack_db4 = 1;
          }
          if (((ulong)auStack_c58 & 1) != 0) {
            func_0x0412a280(appuStack_c50[1],(ulong)auStack_c58 & 0xfffffffffffffffe);
            bVar30 = bVar6;
          }
          if (!bVar30) {
            if (((ulong)uStack_d78 & 1) != 0) {
              func_0x0412a280(puStack_d68,(ulong)uStack_d78 & 0xfffffffffffffffe);
            }
            if (((ulong)auStack_dd8 & 1) != 0) {
              func_0x0412a280(ppuStack_dc8,(ulong)auStack_dd8 & 0xfffffffffffffffe);
            }
            func_0x04862b40(auStack_d00);
            func_0x04862b40(auStack_d60);
            uVar18 = 2;
            goto LAB_0d673e8f;
          }
        }
        uVar18 = (ulong)auStack_dd8 >> 1 & 0x7f;
        ppuVar13 = (ulong **)(auStack_dd8 + 1);
        if (((ulong)auStack_dd8 & 1) != 0) {
          uVar18 = uStack_dd0;
          ppuVar13 = ppuStack_dc8;
        }
        if (((9 < uVar18) &&
            (*(short *)((long)ppuVar13 + (uVar18 - 2)) == 0x6576 &&
             *(long *)((long)ppuVar13 + (uVar18 - 10)) == 0x696863726172622e)) &&
           (func_0x0d6741e0(&plStack_c80,param_1,ppuVar13,&uStack_d78), plVar3 = plStack_c80,
           plStack_c80 != (long *)0x0)) {
          func_0x0eee2dd0(auStack_848,0,0x408);
          uVar18 = (ulong)auStack_dd8 >> 1 & 0x7f;
          ppuVar13 = (ulong **)(auStack_dd8 + 1);
          if (((ulong)auStack_dd8 & 1) != 0) {
            uVar18 = uStack_dd0;
            ppuVar13 = ppuStack_dc8;
          }
          if (uVar18 == 0) {
LAB_0d67319d:
            func_0x0eee2dd0(auStack_438,0,0x408);
            puStack_c60 = (undefined1 *)0x0;
          }
          else {
            uVar16 = 0;
            uVar15 = uVar18;
            ppuVar22 = ppuVar13;
            ppuVar24 = ppuVar13;
            ppuVar25 = ppuVar13;
            do {
              if (((*(char *)ppuVar22 == '\\') || (*(char *)ppuVar22 == '/')) &&
                 (uVar16 < 0x40 && 0 < (long)ppuVar25 - (long)ppuVar24)) {
                appuStack_c50[uVar16 * 2 + -1] = ppuVar24;
                appuStack_c50[uVar16 * 2] = (ulong **)((long)ppuVar25 - (long)ppuVar24);
                uVar16 = uVar16 + 1;
                ppuVar24 = (ulong **)((long)ppuVar22 + (ulong)(uVar15 != 0));
              }
              ppuVar22 = (ulong **)((long)ppuVar22 + 1);
              ppuVar25 = (ulong **)((long)ppuVar25 + 1);
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            ppuVar13 = (ulong **)((long)ppuVar13 + (uVar18 - (long)ppuVar24));
            if (uVar16 < 0x40 && 0 < (long)ppuVar13) {
              appuStack_c50[uVar16 * 2 + -1] = ppuVar24;
              appuStack_c50[uVar16 * 2] = ppuVar13;
              uVar16 = uVar16 + 1;
            }
            else {
              uStack_858 = uVar16;
              if (uVar16 == 0) goto LAB_0d67319d;
            }
            uStack_858 = uVar16;
            func_0x049151c0(auStack_438,auStack_c58,uVar16 - 1,0x2f);
            puStack_c60 = puStack_38;
          }
          uStack_c78 = 0xf552660;
          uStack_c70 = _DAT_0f552a60;
          puStack_c68 = auStack_438;
          func_0x09acd4b0(&puStack_cf0,auStack_848,&puStack_c68,&uStack_c78);
          auStack_c58 = (undefined1  [8])0xe1cd00e8f5ca7dba;
          appuStack_c50[0] = (ulong **)&UNK_0140f690;
          appuStack_c50[1] = (ulong **)0x1;
          ppuStack_c40 = (ulong **)CONCAT44(ppuStack_c40._4_4_,0x93);
          if (bStack_cb0 == 0) {
            uStack_ca8 = 0;
            uStack_ca0 = 0;
            uStack_c98 = 0;
            func_0x0eedeb80(2,0x2d,&puStack_cf0,&uStack_ca8,auStack_c58);
            if ((uStack_ca8 & 1) != 0) {
              func_0x0412a280(uStack_c98,uStack_ca8 & 0xfffffffffffffffe);
            }
          }
          lVar14 = lStack_cc8;
          if ((bStack_cb0 & 1) == 0) {
            lVar27 = lStack_cc0;
            if (lStack_cc8 != 0) {
              while (lVar14 != lVar27) {
                func_0x048b3e80(lVar27 + -0x40);
                lVar27 = lVar27 + -0x40;
              }
              lStack_cc0 = lVar14;
              func_0x0412a280(lStack_cc8,lStack_cb8 - lStack_cc8);
            }
            puVar8 = puStack_ce0;
            puVar21 = puStack_cd8;
            if (puStack_ce0 != (undefined1 *)0x0) {
              for (; puVar8 != puVar21; puVar21 = puVar21 + -0x50) {
                if ((puVar21[-8] == '\x01') && ((puVar21[-0x30] & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(puVar21 + -0x20),
                                  *(ulong *)(puVar21 + -0x30) & 0xfffffffffffffffe);
                }
              }
              puStack_cd8 = puVar8;
              func_0x0412a280(puStack_ce0,lStack_cd0 - (long)puStack_ce0);
            }
          }
          uVar18 = (ulong)auStack_dd8 >> 1 & 0x7f;
          ppuVar13 = (ulong **)(auStack_dd8 + 1);
          if (((ulong)auStack_dd8 & 1) != 0) {
            uVar18 = uStack_dd0;
            ppuVar13 = ppuStack_dc8;
          }
          uVar15 = uVar18 + 1;
          while (uVar15 != 1) {
            cVar9 = *(char *)((long)ppuVar13 + (uVar15 - 2));
            uVar15 = uVar15 - 1;
            if ((cVar9 == '\\') || (cVar9 == '/')) goto joined_r0x0d6733b5;
          }
          uVar15 = 0;
joined_r0x0d6733b5:
          uVar16 = uVar18;
          if (uVar18 == 0) {
LAB_0d673427:
            puVar21 = (undefined1 *)(uVar18 - uVar15);
            if (uVar18 < uVar15) goto LAB_0d673f74;
            func_0x0eee2dd0(auStack_438,0,0x408);
            if ((undefined1 *)0x3ff < puVar21) goto LAB_0d673450;
            if (uVar18 == uVar15) {
LAB_0d673461:
              puVar21 = (undefined1 *)0x0;
            }
            else {
LAB_0d67340f:
              func_0x0eee2f00(auStack_438,(char *)((long)ppuVar13 + uVar15),puVar21);
            }
            puStack_38 = puVar21;
            auStack_438[(long)puVar21] = 0;
            puStack_cd8 = puStack_38;
          }
          else {
            do {
              if (uVar16 == 0) goto LAB_0d673427;
              uVar26 = uVar16 - 1;
              lVar14 = uVar16 - 1;
              uVar16 = uVar26;
            } while (*(char *)((long)ppuVar13 + lVar14) != '.');
            if (uVar26 == 0xffffffffffffffff) goto LAB_0d673427;
            if (uVar18 < uVar15) goto LAB_0d673f74;
            puVar21 = (undefined1 *)(uVar26 - uVar15);
            if ((undefined1 *)(uVar18 - uVar15) < (undefined1 *)(uVar26 - uVar15)) {
              puVar21 = (undefined1 *)(uVar18 - uVar15);
            }
            func_0x0eee2dd0(auStack_438,0,0x408);
            if (puVar21 < (undefined1 *)0x400) {
              if (puVar21 != (undefined1 *)0x0) goto LAB_0d67340f;
              goto LAB_0d673461;
            }
LAB_0d673450:
            puStack_cd8 = (undefined1 *)0x0;
          }
          puStack_cf0 = (undefined8 *)auStack_848;
          uStack_ce8 = uStack_448;
          puStack_ce0 = auStack_438;
          func_0x049151c0(auStack_c58,&puStack_cf0,2,0x2f);
          uVar18 = uStack_858;
          if (uStack_858 != 0xffffffffffffffff) {
            func_0x0eee2f00(auStack_848,auStack_c58);
          }
          uStack_448 = uVar18;
          auStack_c58 = (undefined1  [8])&puStack_da8;
          appuStack_c50[0] = (ulong **)auStack_848;
          (**(code **)(*plVar3 + 0x20))(plVar3,&UNK_0d67ae50,auStack_c58);
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        ppuVar13 = ppuStack_dc8;
        uVar18 = uStack_dd0;
        auVar7 = auStack_dd8;
        ppuStack_838 = ppuStack_dc8;
        auStack_848 = auStack_dd8;
        uStack_840 = uStack_dd0;
        auStack_dd8 = (undefined1  [8])0x0;
        uStack_dd0 = 0;
        ppuStack_dc8 = (ulong **)0x0;
        ppuStack_d08 = ppuStack_d90;
        puStack_c88 = puStack_da0;
        puStack_d48 = puStack_da8;
        puVar29 = puStack_da8;
        if ((long)puStack_da0 - (long)puStack_da8 != 0) {
          uVar15 = ((long)puStack_da0 - (long)puStack_da8 >> 3) * -0x5555555555555555;
          uStack_d18 = ppuVar13;
          if (((ulong)auVar7 & 1) == 0) {
            uStack_d18 = (ulong **)(auStack_848 + 1);
            uVar18 = (ulong)auVar7 >> 1 & 0x7f;
          }
          do {
            uVar16 = uVar15 >> 1;
            bVar30 = ((byte)puVar29[uVar16 * 3] & 1) != 0;
            pbVar23 = (byte *)((long)puVar29 + uVar16 * 0x18 + 1);
            if (bVar30) {
              pbVar23 = (byte *)puVar29[uVar16 * 3 + 2];
            }
            uVar26 = (ulong)(byte)((byte)puVar29[uVar16 * 3] >> 1);
            if (bVar30) {
              uVar26 = puVar29[uVar16 * 3 + 1];
            }
            uVar17 = uVar26;
            if (uVar18 < uVar26) {
              uVar17 = uVar18;
            }
            iVar10 = func_0x0eee2ff0(pbVar23,uStack_d18,uVar17);
            if (iVar10 == 0) {
              if (uVar26 < uVar18) goto LAB_0d6735f0;
            }
            else if (iVar10 < 0) {
LAB_0d6735f0:
              puVar29 = puVar29 + uVar16 * 3 + 3;
              uVar16 = ~uVar16 + uVar15;
            }
            uVar15 = uVar16;
          } while (uVar16 != 0);
        }
        auVar7 = auStack_848;
        if (puVar29 == puStack_c88) {
LAB_0d6736df:
          lVar14 = func_0x0d67b480(&puStack_da8,puVar29,auStack_848);
          ppuVar13 = ppuStack_d90;
          ppuVar22 = ppuStack_d08 +
                     ((ulong)((long)puVar29 - (long)puStack_d48) >> 3) * 0xaaaaaaaaaaaaaac;
          if (ppuStack_d88 < ppuStack_d80) {
            if (ppuVar22 == ppuStack_d88) {
              ppuStack_d88[2] = (ulong *)0x0;
              ppuStack_d88[3] = (ulong *)0x0;
              *ppuStack_d88 = (ulong *)0x0;
              ppuStack_d88[1] = (ulong *)0x0;
              ppuStack_d88 = ppuStack_d88 + 4;
              ppuVar25 = ppuStack_d90;
            }
            else {
              ppuVar13 = ppuStack_d88 + -4;
              ppuVar24 = ppuStack_d88;
              if (ppuVar13 < ppuStack_d88) {
                ppuVar24 = ppuStack_d88 + 4;
                ppuStack_d88[2] = ppuStack_d88[-2];
                *ppuStack_d88 = *ppuVar13;
                ppuStack_d88[1] = ppuStack_d88[-3];
                *ppuVar13 = (ulong *)0x0;
                ppuStack_d88[-3] = (ulong *)0x0;
                ppuStack_d88[-2] = (ulong *)0x0;
                *(byte *)(ppuStack_d88 + 3) = *(byte *)(ppuStack_d88 + -1);
              }
              bVar30 = ppuStack_d88 != ppuVar22 + 4;
              ppuVar25 = ppuStack_d88;
              ppuStack_d88 = ppuVar24;
              if (bVar30) {
                do {
                  ppuVar24 = ppuVar25 + -4;
                  if (((ulong)*ppuVar24 & 1) != 0) {
                    func_0x0412a280(ppuVar25[-2],(ulong)*ppuVar24 & 0xfffffffffffffffe);
                  }
                  ppuVar20 = ppuVar13 + -4;
                  ppuVar25[-2] = ppuVar13[-2];
                  uVar31 = *(undefined4 *)((long)ppuVar13 + -0x1c);
                  uVar32 = *(undefined4 *)(ppuVar13 + -3);
                  uVar33 = *(undefined4 *)((long)ppuVar13 + -0x14);
                  *(undefined4 *)ppuVar24 = *(undefined4 *)ppuVar20;
                  *(undefined4 *)((long)ppuVar25 + -0x1c) = uVar31;
                  *(undefined4 *)(ppuVar25 + -3) = uVar32;
                  *(undefined4 *)((long)ppuVar25 + -0x14) = uVar33;
                  *(undefined2 *)(ppuVar13 + -4) = 0;
                  *(byte *)(ppuVar25 + -1) = *(byte *)(ppuVar13 + -1);
                  ppuVar13 = ppuVar20;
                  ppuVar25 = ppuVar24;
                } while (ppuVar20 != ppuVar22);
              }
              if (((ulong)*ppuVar22 & 1) != 0) {
                func_0x0412a280(ppuVar22[2],(ulong)*ppuVar22 & 0xfffffffffffffffe);
              }
              pbVar23 = (byte *)((long)ppuVar22 + 9);
              pbVar23[0] = 0;
              pbVar23[1] = 0;
              pbVar23[2] = 0;
              pbVar23[3] = 0;
              pbVar23[4] = 0;
              pbVar23[5] = 0;
              pbVar23[6] = 0;
              pbVar23[7] = 0;
              pbVar23 = (byte *)((long)ppuVar22 + 0x11);
              pbVar23[0] = 0;
              pbVar23[1] = 0;
              pbVar23[2] = 0;
              pbVar23[3] = 0;
              pbVar23[4] = 0;
              pbVar23[5] = 0;
              pbVar23[6] = 0;
              pbVar23[7] = 0;
              *ppuVar22 = (ulong *)0x0;
              ppuVar22[1] = (ulong *)0x0;
              ppuVar25 = ppuStack_d90;
            }
          }
          else {
            uVar18 = ((long)ppuStack_d88 - (long)ppuStack_d90 >> 5) + 1;
            if (0x7ffffffffffffff < uVar18) {
              func_0x0d67bad0();
LAB_0d673f6f:
              func_0x04882eb0();
LAB_0d673f74:
              uVar11 = func_0x04882ef0(&UNK_01306d2f);
              uVar11 = func_0x04882e20(uVar11);
              func_0x0d674520(&puStack_da8);
              func_0x04863610(auStack_d40);
              if ((bStack_d30 & 1) != 0) {
                func_0x0412a280(uStack_d20,CONCAT71(uStack_d2f,bStack_d30) & 0xfffffffffffffffe);
              }
              func_0x0eee2d70(uVar11);
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return uVar18;
            }
            uVar15 = (long)ppuStack_d80 - (long)ppuStack_d90 >> 4;
            if (uVar15 <= uVar18) {
              uVar15 = uVar18;
            }
            if (0x7fffffffffffffdf < (ulong)((long)ppuStack_d80 - (long)ppuStack_d90)) {
              uVar15 = 0x7ffffffffffffff;
            }
            pppuStack_c38 = &ppuStack_d90;
            if (uVar15 == 0) {
              lVar27 = 0;
              ppuVar24 = (ulong **)0x0;
            }
            else {
              if (0x7ffffffffffffff < uVar15) goto LAB_0d673f6f;
              lVar27 = uVar15 << 5;
              ppuVar24 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar27);
              if (ppuVar24 == (ulong **)0x0) {
                func_0x0eec74c0(lVar27,0);
                ppuVar24 = (ulong **)0x0;
              }
            }
            lVar19 = (long)ppuVar22 - (long)ppuVar13;
            ppuVar25 = (ulong **)(lVar19 + (long)ppuVar24);
            ppuStack_c40 = (ulong **)((long)ppuVar24 + lVar27);
            auStack_c58 = (undefined1  [8])ppuVar24;
            appuStack_c50[0] = ppuVar25;
            if (lVar19 == lVar27) {
              if (ppuVar22 == ppuVar13) {
                appuStack_c50[1] = ppuVar25;
                ppuVar25 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                if (ppuVar25 == (ulong **)0x0) {
                  func_0x0eec74c0(0x20,0);
                }
                ppuStack_c40 = ppuVar25 + 4;
                auStack_c58 = (undefined1  [8])ppuVar25;
                appuStack_c50[0] = ppuVar25;
                if (ppuVar24 != (ulong **)0x0) {
                  func_0x0412a280(ppuVar24,lVar19);
                }
              }
              else {
                ppuVar25 = ppuVar25 +
                           (((lVar19 >> 5) - ((lVar19 >> 5) + 1 >> 0x3f)) + 1U & 0xffffffffffffffe)
                           * -2;
                appuStack_c50[0] = ppuVar25;
              }
            }
            ppuVar13 = ppuStack_d88;
            ppuVar25[2] = (ulong *)0x0;
            ppuVar25[3] = (ulong *)0x0;
            *ppuVar25 = (ulong *)0x0;
            ppuVar25[1] = (ulong *)0x0;
            appuStack_c50[1] = ppuVar25 + 4;
            ppuVar24 = ppuVar22;
            if (ppuVar22 != ppuStack_d88) {
              lVar27 = 0;
              do {
                *(undefined8 *)((long)ppuVar25 + lVar27 + 0x30) =
                     *(undefined8 *)((long)ppuVar22 + lVar27 + 0x10);
                pbVar23 = (byte *)((long)ppuVar22 + lVar27);
                uVar31 = *(undefined4 *)(pbVar23 + 4);
                uVar32 = *(undefined4 *)(pbVar23 + 8);
                uVar33 = *(undefined4 *)(pbVar23 + 0xc);
                puVar1 = (undefined4 *)((long)appuStack_c50[1] + lVar27);
                *puVar1 = *(undefined4 *)pbVar23;
                puVar1[1] = uVar31;
                puVar1[2] = uVar32;
                puVar1[3] = uVar33;
                pbVar23 = (byte *)((long)ppuVar22 + lVar27);
                pbVar23[0] = 0;
                pbVar23[1] = 0;
                pbVar23[2] = 0;
                pbVar23[3] = 0;
                pbVar23[4] = 0;
                pbVar23[5] = 0;
                pbVar23[6] = 0;
                pbVar23[7] = 0;
                pbVar23[8] = 0;
                pbVar23[9] = 0;
                pbVar23[10] = 0;
                pbVar23[0xb] = 0;
                pbVar23[0xc] = 0;
                pbVar23[0xd] = 0;
                pbVar23[0xe] = 0;
                pbVar23[0xf] = 0;
                pbVar23 = (byte *)((long)ppuVar22 + lVar27 + 0x10);
                pbVar23[0] = 0;
                pbVar23[1] = 0;
                pbVar23[2] = 0;
                pbVar23[3] = 0;
                pbVar23[4] = 0;
                pbVar23[5] = 0;
                pbVar23[6] = 0;
                pbVar23[7] = 0;
                *(byte *)((long)ppuVar25 + lVar27 + 0x38) =
                     *(byte *)((long)ppuVar22 + lVar27 + 0x18);
                lVar19 = lVar27 + 0x20;
                lVar27 = lVar27 + 0x20;
                ppuVar20 = ppuVar22;
              } while ((ulong **)((long)ppuVar22 + lVar19) != ppuStack_d88);
              do {
                if (((ulong)*ppuVar20 & 1) != 0) {
                  func_0x0412a280(ppuVar20[2],(ulong)*ppuVar20 & 0xfffffffffffffffe);
                }
                ppuVar20 = ppuVar20 + 4;
                ppuVar24 = ppuStack_d88;
                ppuVar25 = appuStack_c50[0];
              } while (ppuVar20 != ppuVar13);
            }
            ppuVar13 = appuStack_c50[1];
            ppuVar25 = (ulong **)((long)ppuVar25 + ((long)ppuStack_d90 - (long)ppuVar22));
            if ((long)ppuStack_d90 - (long)ppuVar22 != 0) {
              lVar27 = 0;
              do {
                *(undefined8 *)((long)ppuVar25 + lVar27 + 0x10) =
                     *(undefined8 *)((long)ppuStack_d90 + lVar27 + 0x10);
                pbVar2 = (byte *)((long)ppuStack_d90 + lVar27);
                uVar31 = *(undefined4 *)(pbVar2 + 4);
                uVar32 = *(undefined4 *)(pbVar2 + 8);
                uVar33 = *(undefined4 *)(pbVar2 + 0xc);
                pbVar23 = (byte *)((long)ppuVar25 + lVar27);
                *(undefined4 *)pbVar23 = *(undefined4 *)pbVar2;
                *(undefined4 *)(pbVar23 + 4) = uVar31;
                *(undefined4 *)(pbVar23 + 8) = uVar32;
                *(undefined4 *)(pbVar23 + 0xc) = uVar33;
                pbVar23 = (byte *)((long)ppuStack_d90 + lVar27);
                pbVar23[0] = 0;
                pbVar23[1] = 0;
                pbVar23[2] = 0;
                pbVar23[3] = 0;
                pbVar23[4] = 0;
                pbVar23[5] = 0;
                pbVar23[6] = 0;
                pbVar23[7] = 0;
                pbVar23[8] = 0;
                pbVar23[9] = 0;
                pbVar23[10] = 0;
                pbVar23[0xb] = 0;
                pbVar23[0xc] = 0;
                pbVar23[0xd] = 0;
                pbVar23[0xe] = 0;
                pbVar23[0xf] = 0;
                pbVar23 = (byte *)((long)ppuStack_d90 + lVar27 + 0x10);
                pbVar23[0] = 0;
                pbVar23[1] = 0;
                pbVar23[2] = 0;
                pbVar23[3] = 0;
                pbVar23[4] = 0;
                pbVar23[5] = 0;
                pbVar23[6] = 0;
                pbVar23[7] = 0;
                *(byte *)((long)ppuVar25 + lVar27 + 0x18) =
                     *(byte *)((long)ppuStack_d90 + lVar27 + 0x18);
                lVar19 = lVar27 + 0x20;
                lVar27 = lVar27 + 0x20;
                ppuVar20 = ppuStack_d90;
                ppuStack_d88 = ppuVar22;
              } while ((ulong **)((long)ppuStack_d90 + lVar19) != ppuVar22);
              do {
                if (((ulong)*ppuVar20 & 1) != 0) {
                  func_0x0412a280(ppuVar20[2],(ulong)*ppuVar20 & 0xfffffffffffffffe);
                }
                ppuVar20 = ppuVar20 + 4;
              } while (ppuVar20 != ppuVar22);
            }
            ppuVar20 = ppuStack_d80;
            ppuStack_d88 = (ulong **)((long)ppuVar13 + ((long)ppuVar24 - (long)ppuVar22));
            ppuStack_d80 = ppuStack_c40;
            appuStack_c50[0] = ppuStack_d90;
            appuStack_c50[1] = ppuStack_d90;
            if (ppuStack_d90 != (ulong **)0x0) {
              lVar27 = (long)ppuVar20 - (long)ppuStack_d90;
              ppuStack_d90 = ppuVar25;
              appuStack_c50[1] = appuStack_c50[0];
              func_0x0412a280(appuStack_c50[0],lVar27);
              ppuVar25 = ppuStack_d90;
            }
          }
          ppuStack_d90 = ppuVar25;
          ppuVar13 = ppuStack_d90 + ((ulong)(lVar14 - (long)puStack_da8) >> 3) * 0xaaaaaaaaaaaaaac;
          auVar7 = auStack_848;
        }
        else {
          uVar18 = (ulong)auStack_848 >> 1 & 0x7f;
          ppuVar13 = (ulong **)(auStack_848 + 1);
          if (((ulong)auStack_848 & 1) != 0) {
            uVar18 = uStack_840;
            ppuVar13 = ppuStack_838;
          }
          bVar30 = ((byte)*puVar29 & 1) != 0;
          pbVar23 = (byte *)((long)puVar29 + 1);
          if (bVar30) {
            pbVar23 = (byte *)puVar29[2];
          }
          uVar15 = (ulong)(byte)((byte)*puVar29 >> 1);
          if (bVar30) {
            uVar15 = puVar29[1];
          }
          uVar16 = uVar18;
          if (uVar15 < uVar18) {
            uVar16 = uVar15;
          }
          iVar10 = func_0x0eee2ff0(ppuVar13,pbVar23,uVar16);
          if (iVar10 == 0) {
            if (uVar18 < uVar15) goto LAB_0d6736df;
          }
          else if (iVar10 < 0) goto LAB_0d6736df;
          ppuVar13 = ppuStack_d08 +
                     ((ulong)((long)puVar29 - (long)puStack_d48) >> 3) * 0xaaaaaaaaaaaaaac;
        }
        if (((ulong)auVar7 & 1) != 0) {
          func_0x0412a280(ppuStack_838,(ulong)auStack_848 & 0xfffffffffffffffe);
        }
        param_1 = plStack_d50;
        puVar29 = puStack_d68;
        ppuVar22 = uStack_d78;
        if ((*(byte *)ppuVar13 & 1) == 0) {
          if (*(byte *)ppuVar13 >> 1 == 0) goto LAB_0d673bd7;
        }
        else if (ppuVar13[1] == (ulong *)0x0) {
LAB_0d673bd7:
          uVar31 = (undefined4)uStack_d78;
          uVar32 = uStack_d78._4_4_;
          uVar33 = (undefined4)uStack_d70;
          uVar34 = uStack_d70._4_4_;
          uStack_d78 = (ulong **)0x0;
          uStack_d70 = 0;
          puStack_d68 = (ulong *)0x0;
          if (((ulong)*ppuVar13 & 1) != 0) {
            uStack_d18 = ppuVar22;
            uStack_d10 = uVar33;
            uStack_d0c = uVar34;
            func_0x0412a280(ppuVar13[2],(ulong)*ppuVar13 & 0xfffffffffffffffe);
            uVar31 = (undefined4)uStack_d18;
            uVar32 = uStack_d18._4_4_;
            uVar33 = uStack_d10;
            uVar34 = uStack_d0c;
          }
          *(undefined4 *)ppuVar13 = uVar31;
          *(undefined4 *)((long)ppuVar13 + 4) = uVar32;
          *(undefined4 *)(ppuVar13 + 1) = uVar33;
          *(undefined4 *)((long)ppuVar13 + 0xc) = uVar34;
          ppuVar13[2] = puVar29;
          *(byte *)(ppuVar13 + 3) = (byte)uStack_db4;
        }
        if (((ulong)uStack_d78 & 1) != 0) {
          func_0x0412a280(puStack_d68,(ulong)uStack_d78 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_dd8 & 1) != 0) {
          func_0x0412a280(ppuStack_dc8,(ulong)auStack_dd8 & 0xfffffffffffffffe);
        }
        func_0x04862ba0(auStack_d60);
      }
      func_0x04862b40(auStack_d00);
      func_0x04862b40(auStack_d60);
      func_0x0412d450(plStack_db0);
      ppuVar13 = ppuStack_d88;
      puVar29 = puStack_da0;
      lVar14 = param_1[0x17];
      cVar9 = '\x01';
      if (*(char *)(lVar14 + 8) != '\x01') {
        uStack_d18 = (ulong **)CONCAT71(uStack_d18._1_7_,*(char *)(lVar14 + 8));
        if (ppuStack_d90 != ppuStack_d88 || puStack_da8 != puStack_da0) {
          ppuVar22 = ppuStack_d90;
          puVar5 = puStack_da8;
          do {
            puVar28 = puVar5 + 3;
            ppuVar24 = ppuVar22 + 4;
            plVar3 = (long *)plStack_d50[0x17];
            if ((*puVar5 & 1) == 0) {
              ppuStack_838 = (ulong **)puVar5[2];
              auStack_848 = (undefined1  [8])*puVar5;
              uStack_840 = puVar5[1];
            }
            else {
              func_0x0412e5e0(auStack_848,puVar5[2],puVar5[1]);
            }
            if (((ulong)*ppuVar22 & 1) == 0) {
              appuStack_c50[1] = (ulong **)ppuVar22[2];
              auStack_c58 = (undefined1  [8])*ppuVar22;
              appuStack_c50[0] = (ulong **)ppuVar22[1];
            }
            else {
              func_0x0412e5e0(auStack_c58,ppuVar22[2],ppuVar22[1]);
            }
            ppuStack_c40 = (ulong **)CONCAT71(ppuStack_c40._1_7_,*(byte *)(ppuVar22 + 3));
            (**(code **)(*plVar3 + 0x10))(plVar3,auStack_848,auStack_c58);
            if (((ulong)auStack_c58 & 1) != 0) {
              func_0x0412a280(appuStack_c50[1],(ulong)auStack_c58 & 0xfffffffffffffffe);
            }
            if (((ulong)auStack_848 & 1) != 0) {
              func_0x0412a280(ppuStack_838,(ulong)auStack_848 & 0xfffffffffffffffe);
            }
            ppuVar22 = ppuVar24;
            puVar5 = puVar28;
          } while (ppuVar24 != ppuVar13 || puVar28 != puVar29);
          lVar14 = plStack_d50[0x17];
        }
        *(undefined1 *)(lVar14 + 8) = 1;
        cVar9 = (char)uStack_d18;
      }
      func_0x0412d520(plStack_db0);
      uVar18 = (ulong)((uint)(cVar9 == '\x01') * 3);
LAB_0d673e8f:
      ppuVar22 = ppuStack_d90;
      ppuVar13 = ppuStack_d88;
      if (ppuStack_d90 != (ulong **)0x0) {
        for (; ppuVar22 != ppuVar13; ppuVar13 = ppuVar13 + -4) {
          if (((ulong)ppuVar13[-4] & 1) != 0) {
            func_0x0412a280(ppuVar13[-2],(ulong)ppuVar13[-4] & 0xfffffffffffffffe);
          }
        }
        ppuStack_d88 = ppuVar22;
        func_0x0412a280(ppuStack_d90,(long)ppuStack_d80 - (long)ppuStack_d90);
      }
      puVar5 = puStack_da8;
      puVar29 = puStack_da0;
      if (puStack_da8 != (ulong *)0x0) {
        for (; puVar5 != puVar29; puVar29 = puVar29 + -3) {
          if ((puVar29[-3] & 1) != 0) {
            func_0x0412a280(puVar29[-1],puVar29[-3] & 0xfffffffffffffffe);
          }
        }
        puStack_da0 = puVar5;
        func_0x0412a280(puStack_da8,lStack_d98 - (long)puStack_da8);
      }
      func_0x04863610(auStack_d40);
      goto joined_r0x0d672d60;
    }
    func_0x0412d450(param_1 + 5);
    *(undefined1 *)(param_1[0x17] + 8) = 3;
    func_0x0412d520(param_1 + 5);
    func_0x04863610(auStack_d40);
  }
  func_0x0412d450(param_1 + 5);
  (**(code **)(*(long *)param_1[0x17] + 0x18))();
  uVar18 = 2;
  func_0x0412d520(param_1 + 5);
joined_r0x0d672d60:
  if ((bStack_d30 & 1) != 0) {
    func_0x0412a280(uStack_d20,CONCAT71(uStack_d2f,bStack_d30) & 0xfffffffffffffffe);
  }
  return uVar18;
}


