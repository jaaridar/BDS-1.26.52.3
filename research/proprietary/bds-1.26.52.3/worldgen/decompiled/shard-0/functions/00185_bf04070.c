/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc004070 (ELF vaddr 0xbf04070)
 * Label: caller-of-callee
 * Body:  [[0c004070, 0c004266] [0c004270, 0c004292] [0c0042a0, 0c00431a] [0c004320, 0c004361] [0c004370, 0c004455] [0c004460, 0c0044b7] [0c0044c0, 0c0044f9] [0c004500, 0c00489a] [0c0048a0, 0c004953] [0c0049ad, 0c0049fe] [0c0053fe, 0c0054b1] [0c0054c0, 0c005669] [0c005670, 0c0057e3] [0c0058f6, 0c005a7a] [0c005aba, 0c005b9c] [0c005fc2, 0c006048] [0c0062dc, 0c00639d] [0c0069af, 0c006a1a] [0c006aa6, 0c006ab3] [0c006b8e, 0c006f26] [0c006f30, 0c007082] [0c00718a, 0c0071ba] [0c007397, 0c0074df] [0c0076cd, 0c00791c] [0c007ec7, 0c007eec] [0c007f63, 0c008476] [0c0084bf, 0c0084ef] [0c00853d, 0c0085df] [0c008640, 0c00867f]]
 * Ghidra: FUN_0c004070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c004070(undefined8 **param_1,undefined8 **param_2,undefined4 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,char param_7,long *param_8)

{
  undefined8 **ppuVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  char *pcVar20;
  undefined1 *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  long *plVar27;
  int iVar28;
  long lVar29;
  byte *pbVar30;
  undefined *puVar31;
  undefined8 **ppuVar32;
  long *in_FS_OFFSET;
  bool bVar33;
  undefined8 **ppuStack_3b8;
  undefined8 **ppuStack_3b0;
  undefined2 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 **ppuStack_398;
  undefined2 uStack_390;
  undefined8 **ppuStack_388;
  undefined8 **ppuStack_380;
  undefined8 **ppuStack_378;
  undefined8 uStack_370;
  undefined8 **ppuStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 **ppuStack_350;
  long *plStack_348;
  undefined2 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  byte *pbStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2a0;
  undefined4 auStack_298 [4];
  uint uStack_288;
  undefined8 **ppuStack_280;
  undefined1 uStack_271;
  undefined8 **ppuStack_270;
  undefined8 ***pppuStack_268;
  int iStack_260;
  int iStack_25c;
  undefined8 uStack_258;
  undefined8 **ppuStack_250;
  byte *pbStack_248;
  ulong uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined4 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined4 *puStack_1a8;
  long *plStack_1a0;
  long *plStack_190;
  undefined *puStack_188;
  long *plStack_180;
  undefined *puStack_178;
  long *plStack_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 *puStack_158;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *puStack_138;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *puStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulong uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [24];
  long alStack_c8 [4];
  long *plStack_a8;
  long alStack_98 [4];
  long *plStack_78;
  long alStack_68 [4];
  long *plStack_48;
  
  ppuStack_280 = (undefined8 **)CONCAT44(ppuStack_280._4_4_,param_3);
  ppuStack_380 = (undefined8 **)((long)param_2 + 1);
  bVar33 = (*(byte *)param_2 & 1) == 0;
  uStack_318 = (undefined8 **)param_2[2];
  if (bVar33) {
    uStack_318 = ppuStack_380;
  }
  uStack_310 = (undefined8 **)(ulong)(*(byte *)param_2 >> 1);
  if (!bVar33) {
    uStack_310 = (undefined8 **)param_2[1];
  }
  uStack_308 = (undefined8 **)CONCAT71(uStack_308._1_7_,1);
  uStack_258 = (undefined8 **)0x0;
  ppuStack_388 = param_2;
  ppuStack_378 = param_1;
  uStack_338 = param_4;
  lStack_320 = param_5;
  uStack_1b0 = param_6;
  func_0x0eeb79f0(auStack_e0,&uStack_258);
  if (((ulong)uStack_258 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_258 & 0xff00ffffffffffff) - 8);
  }
  if ((*(byte *)ppuStack_388 & 1) != 0) {
    if (ppuStack_388[1] != (undefined8 *)0x0) goto LAB_0c004171;
LAB_0c0041a6:
    func_0x04b0c980(1,3,0x19,&UNK_0136d028);
LAB_0c0041c1:
    puVar24 = (undefined *)0x0;
    goto LAB_0c0041c3;
  }
  if (*(byte *)ppuStack_388 >> 1 == 0) goto LAB_0c0041a6;
LAB_0c004171:
  cVar5 = func_0x04864260(uStack_338);
  if (cVar5 != '\0') {
    func_0x0c009550(1,3,0x19,&UNK_01489141);
    goto LAB_0c0041c1;
  }
  lVar19 = *param_8;
  for (lVar29 = param_8[1]; lVar19 != lVar29; lVar29 = lVar29 + -0x28) {
    if ((*(byte *)(lVar29 + -0x20) & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)(lVar29 + -0x10),
                         *(ulong *)(lVar29 + -0x20) & 0xfffffffffffffffe);
    }
  }
  param_8[1] = lVar19;
  uVar12 = func_0x048648e0(uStack_338,&UNK_0123d5a9);
  cVar5 = func_0x04864270(uVar12);
  if (cVar5 == '\0') {
    cVar5 = func_0x04865490(uVar12);
    if (cVar5 != '\0') {
      uStack_370 = (undefined8 *)((ulong)uStack_370 & 0xffffffffffff0000);
      func_0x04863cb0(&uStack_258,uVar12,&uStack_370);
      uStack_318 = (undefined8 **)0x0;
      if (((ulong)uStack_258 & 1) == 0) {
        pbStack_300 = pbStack_248;
        uStack_310 = uStack_258;
        uStack_308 = ppuStack_250;
      }
      else {
        FUN_0412e5e0(&uStack_310,pbStack_248,ppuStack_250);
      }
      uStack_2f8 = 0;
      if (((ulong)uStack_310 & 1) == 0) {
        if ((byte)uStack_310 >> 1 != 0) goto LAB_0c004628;
LAB_0c004716:
        ppuVar32 = (undefined8 **)0x0;
      }
      else {
        if (uStack_308 == (undefined8 **)0x0) goto LAB_0c004716;
LAB_0c004628:
        pbVar30 = pbStack_300;
        if (((ulong)uStack_310 & 1) == 0) {
          pbVar30 = (byte *)((long)&uStack_310 + 1);
        }
        if ((pbVar30 == (byte *)0x0) || (*pbVar30 == 0)) goto LAB_0c004716;
        ppuVar32 = (undefined8 **)0xcbf29ce484222325;
        uVar13 = func_0x0eee2e90(pbVar30);
        if (uVar13 != 0) {
          uVar23 = (ulong)((uint)uVar13 & 7);
          if (7 < uVar13) {
            uVar13 = uVar13 & 0xfffffffffffffff8;
            do {
              ppuVar32 = (undefined8 **)
                         (((((((((long)ppuVar32 * 0x100000001b3 ^ (ulong)*pbVar30) * 0x100000001b3 ^
                               (ulong)pbVar30[1]) * 0x100000001b3 ^ (ulong)pbVar30[2]) *
                              0x100000001b3 ^ (ulong)pbVar30[3]) * 0x100000001b3 ^ (ulong)pbVar30[4]
                            ) * 0x100000001b3 ^ (ulong)pbVar30[5]) * 0x100000001b3 ^
                          (ulong)pbVar30[6]) * 0x100000001b3 ^ (ulong)pbVar30[7]);
              pbVar30 = pbVar30 + 8;
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
          }
          if (uVar23 != 0) {
            uVar13 = 0;
            do {
              ppuVar32 = (undefined8 **)((long)ppuVar32 * 0x100000001b3 ^ (ulong)pbVar30[uVar13]);
              uVar13 = uVar13 + 1;
            } while (uVar23 != uVar13);
          }
        }
      }
      puVar14 = (undefined8 *)param_8[1];
      uStack_318 = ppuVar32;
      if (puVar14 < (undefined8 *)param_8[2]) {
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[4] = 0;
        puVar14[3] = pbStack_300;
        *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_310;
        *(undefined4 *)((long)puVar14 + 0xc) = uStack_310._4_4_;
        *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_308;
        *(undefined4 *)((long)puVar14 + 0x14) = uStack_308._4_4_;
        uStack_310 = (undefined8 **)((ulong)uStack_310 & 0xffffffffffff0000);
        *puVar14 = ppuVar32;
        puVar14 = puVar14 + 5;
      }
      else {
        puVar14 = (undefined8 *)func_0x06c48de0(param_8,&uStack_318);
      }
      param_8[1] = (long)puVar14;
      if (((ulong)uStack_310 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_300,(ulong)uStack_310 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_258 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
      }
      if (((ulong)uStack_370 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_360,(ulong)uStack_370 & 0xfffffffffffffffe);
      }
    }
  }
  else {
    func_0x04865530(&puStack_3a0,uVar12);
    func_0x048655b0(&ppuStack_3b8,uVar12);
    while (cVar5 = func_0x04862c80(&puStack_3a0,&ppuStack_3b8), cVar5 == '\0') {
      uVar12 = func_0x04862b80(&puStack_3a0);
      cVar5 = func_0x04865490(uVar12);
      if (cVar5 != '\0') {
        uStack_370 = (undefined8 *)((ulong)uStack_370 & 0xffffffffffff0000);
        func_0x04863cb0(&uStack_258,uVar12,&uStack_370);
        uStack_318 = (undefined8 **)0x0;
        if (((ulong)uStack_258 & 1) == 0) {
          pbStack_300 = pbStack_248;
          uStack_310 = uStack_258;
          uStack_308 = ppuStack_250;
        }
        else {
          FUN_0412e5e0(&uStack_310,pbStack_248,ppuStack_250);
        }
        uStack_2f8 = 0;
        if (((ulong)uStack_310 & 1) == 0) {
          if ((byte)uStack_310 >> 1 != 0) goto LAB_0c00437d;
LAB_0c004460:
          uStack_318 = (undefined8 **)0x0;
        }
        else {
          if (uStack_308 == (undefined8 **)0x0) goto LAB_0c004460;
LAB_0c00437d:
          pbVar30 = (byte *)((long)&uStack_310 + 1);
          if (((ulong)uStack_310 & 1) != 0) {
            pbVar30 = pbStack_300;
          }
          if ((pbVar30 == (byte *)0x0) || (*pbVar30 == 0)) goto LAB_0c004460;
          uVar13 = func_0x0eee2e90(pbVar30);
          uStack_318 = (undefined8 **)0xcbf29ce484222325;
          if (uVar13 != 0) {
            if (7 < uVar13) {
              uVar23 = uVar13 & 0xfffffffffffffff8;
              do {
                uStack_318 = (undefined8 **)
                             (((((((((long)uStack_318 * 0x100000001b3 ^ (ulong)*pbVar30) *
                                    0x100000001b3 ^ (ulong)pbVar30[1]) * 0x100000001b3 ^
                                  (ulong)pbVar30[2]) * 0x100000001b3 ^ (ulong)pbVar30[3]) *
                                 0x100000001b3 ^ (ulong)pbVar30[4]) * 0x100000001b3 ^
                               (ulong)pbVar30[5]) * 0x100000001b3 ^ (ulong)pbVar30[6]) *
                              0x100000001b3 ^ (ulong)pbVar30[7]);
                pbVar30 = pbVar30 + 8;
                uVar23 = uVar23 - 8;
              } while (uVar23 != 0);
            }
            if ((uVar13 & 7) != 0) {
              uVar23 = 0;
              do {
                uStack_318 = (undefined8 **)
                             ((long)uStack_318 * 0x100000001b3 ^ (ulong)pbVar30[uVar23]);
                uVar23 = uVar23 + 1;
              } while (((uint)uVar13 & 7) != uVar23);
            }
          }
        }
        puVar14 = (undefined8 *)param_8[1];
        if (puVar14 < (undefined8 *)param_8[2]) {
          puVar14[2] = 0;
          puVar14[3] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[4] = 0;
          puVar14[3] = pbStack_300;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_310;
          *(undefined4 *)((long)puVar14 + 0xc) = uStack_310._4_4_;
          *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_308;
          *(undefined4 *)((long)puVar14 + 0x14) = uStack_308._4_4_;
          uStack_310 = (undefined8 **)((ulong)uStack_310 & 0xffffffffffff0000);
          *puVar14 = uStack_318;
          puVar14 = puVar14 + 5;
        }
        else {
          puVar14 = (undefined8 *)func_0x06c48de0(param_8,&uStack_318);
        }
        param_8[1] = (long)puVar14;
        if (((ulong)uStack_310 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_300,(ulong)uStack_310 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_258 & 1) != 0) {
          thunk_FUN_0ee326a0(pbStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_370 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_360,(ulong)uStack_370 & 0xfffffffffffffffe);
        }
      }
      func_0x04862ba0(&puStack_3a0);
    }
    func_0x04862b40(&ppuStack_3b8);
    func_0x04862b40(&puStack_3a0);
  }
  plVar22 = (long *)*param_8;
  plVar27 = (long *)param_8[1];
  if (plVar22 == plVar27) {
    func_0x0c0096e0(1,3,0x19,&UNK_01335931);
    plVar22 = (long *)*param_8;
    plVar27 = (long *)param_8[1];
    if (plVar22 != plVar27) goto LAB_0c00480f;
  }
  else if (plVar22 != plVar27) {
LAB_0c00480f:
    lVar19 = _DAT_0f6ea2a0;
    bVar33 = (DAT_0f6ea2a8 & 1) != 0;
    uVar13 = (ulong)(DAT_0f6ea2a8 >> 1);
    if (bVar33) {
      uVar13 = _DAT_0f6ea2b0;
    }
    ppuVar32 = (undefined8 **)0xf6ea2a9;
    if (bVar33) {
      ppuVar32 = _DAT_0f6ea2b8;
    }
    do {
      if (*plVar22 == lVar19) {
        if (((undefined *)plVar22[4] == &DAT_0f6ea2a0) && (plVar22 == _DAT_0f6ea2c0)) {
LAB_0c00490e:
          if (((char)ppuStack_280 != '\a') && (plVar22 != plVar27)) {
            if ((char)ppuStack_280 == '\b') goto LAB_0c0049ad;
            func_0x0c009870();
          }
          break;
        }
        bVar7 = *(byte *)(plVar22 + 1);
        if ((bVar7 & 1) == 0) {
          uVar23 = (ulong)(bVar7 >> 1);
        }
        else {
          uVar23 = plVar22[2];
        }
        if (uVar23 == uVar13) {
          if ((bVar7 & 1) == 0) {
            lVar29 = (long)plVar22 + 9;
          }
          else {
            lVar29 = plVar22[3];
          }
          iVar28 = func_0x0eee3000(lVar29,ppuVar32,uVar13);
          if (iVar28 == 0) {
            plVar22[4] = (long)&DAT_0f6ea2a0;
            _DAT_0f6ea2c0 = plVar22;
            goto LAB_0c00490e;
          }
        }
      }
      plVar22[4] = 0;
      plVar22 = plVar22 + 5;
    } while (plVar22 != plVar27);
  }
  uVar12 = uStack_338;
  bVar7 = DAT_0f6ea2a8;
  switch((char)ppuStack_280) {
  case '\x03':
    lVar19 = param_8[3];
    for (lVar29 = param_8[4]; lVar19 != lVar29; lVar29 = lVar29 + -0x30) {
      *(undefined **)(lVar29 + -0x20) = &UNK_0f3773c0;
      plVar22 = *(long **)(lVar29 + -0x18);
      *(undefined8 *)(lVar29 + -0x18) = 0;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x90))();
      }
    }
    param_8[4] = lVar19;
    uVar12 = func_0x048648e0(uStack_338,&UNK_01239c94);
    cVar5 = func_0x04864220(uVar12);
    uVar10 = 0;
    if (cVar5 == '\0') {
      uVar10 = func_0x04863e00(uVar12,0);
    }
    uVar12 = func_0x048648e0(uStack_338,&UNK_011f880f);
    ppuStack_350 = (undefined8 **)0x0;
    func_0x0c001aa0(&puStack_3a0,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),0,1);
    if (ppuStack_398 == (undefined8 **)0x0) {
code_r0x0c005851:
      func_0x0714efb0(1,3,0x19,&UNK_011e216b);
      puVar24 = (undefined *)0x0;
    }
    else {
      cVar5 = (*(code *)(*ppuStack_398)[0xf])();
      if (cVar5 != '\0') {
        (*(code *)(*ppuStack_398)[0x10])(&uStack_318);
        ppuVar1 = uStack_318;
        ppuVar32 = ppuStack_398;
        uStack_318 = (undefined8 **)0x0;
        ppuStack_398 = ppuVar1;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
          ppuVar32 = uStack_318;
          uStack_318 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
      }
      if (ppuStack_398 == (undefined8 **)0x0) goto code_r0x0c005851;
      uStack_390 = 1;
      uStack_318 = (undefined8 **)0x0;
      uStack_310 = (undefined8 **)0x0;
      uStack_308 = (undefined8 **)&UNK_0f3773c0;
      (*(code *)**ppuStack_398)(&pbStack_300);
      uStack_2f8 = CONCAT62(uStack_2f8._2_6_,uStack_390);
      uStack_308 = (undefined8 **)&UNK_0f0d6548;
      uStack_2f0 = 0;
      func_0x0c009a40(param_8 + 3,&uStack_318);
      pbVar30 = pbStack_300;
      uStack_308 = (undefined8 **)&UNK_0f3773c0;
      pbStack_300 = (byte *)0x0;
      if (pbVar30 != (byte *)0x0) {
        (**(code **)(*(long *)pbVar30 + 0x90))();
      }
      uVar12 = func_0x048648e0(uStack_338,&UNK_013a111d);
      func_0x0c001aa0(&ppuStack_3b8,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),1,0);
      uVar9 = func_0x0c4ae570(&ppuStack_3b8,1);
      puVar24 = (undefined *)(ulong)uVar9;
      if ((char)uVar9 == '\0') {
        func_0x0714efb0(1,3,0x19,&UNK_011e216b);
      }
      else {
        func_0x0bfbc020(&uStack_318,&ppuStack_3b8);
        pbVar30 = pbStack_300 + 0x128;
        if ((short)uStack_2f8 == 0x7fff) {
          pbVar30 = (byte *)&uStack_2f8;
        }
        if (pbStack_300 == (byte *)0x0) {
          pbVar30 = (byte *)&uStack_2f8;
        }
        if (*(short *)pbVar30 == 0x7fff) {
          uStack_2f8 = uStack_2f8 & 0xffffffffffff0000;
        }
        uVar12 = func_0x048648e0(uStack_338,&UNK_01280fbf);
        func_0x0c003480(&uStack_258,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),
                        ppuStack_388);
        if ((char)uStack_238 == '\0') {
          uStack_370 = (undefined8 *)CONCAT44(uStack_370._4_4_,1);
          ppuStack_368 = (undefined8 **)0x0;
          lStack_360 = 0;
          uStack_358 = 0;
          func_0x0c009aa0(&uStack_258,&uStack_370);
          func_0x078e61e0(&uStack_370);
        }
        if (((ulong)*ppuStack_388 & 1) == 0) {
          puStack_118 = ppuStack_388[2];
          uStack_128 = *(uint *)ppuStack_388;
          uStack_124 = *(undefined4 *)((long)ppuStack_388 + 4);
          uStack_120 = *(undefined4 *)(ppuStack_388 + 1);
          uStack_11c = *(undefined4 *)((long)ppuStack_388 + 0xc);
        }
        else {
          FUN_0412e5e0(&uStack_128,ppuStack_388[2],ppuStack_388[1]);
        }
        plStack_48 = (long *)0x0;
        func_0x0bffef00(ppuStack_378,&uStack_128,&uStack_318,param_8 + 3,param_8,uVar10,alStack_68,
                        &uStack_258,uStack_1b0);
        if (plStack_48 == alStack_68) {
          lVar19 = 0x20;
code_r0x0c006a20:
          (**(code **)(*plStack_48 + lVar19))();
        }
        else {
          lVar19 = 0x28;
          if (plStack_48 != (long *)0x0) goto code_r0x0c006a20;
        }
        if ((uStack_128 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_118,CONCAT44(uStack_124,uStack_128) & 0xfffffffffffffffe);
        }
        func_0x0c009b30(&uStack_258);
        func_0x0c44e610(&uStack_318);
      }
      ppuVar32 = ppuStack_3b0;
      ppuStack_3b8 = (undefined8 **)&UNK_0f3773c0;
      ppuStack_3b0 = (undefined8 **)0x0;
      if (ppuVar32 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar32)[0x12])();
      }
    }
    ppuVar32 = ppuStack_398;
    puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
    ppuStack_398 = (undefined8 **)0x0;
    break;
  case '\x04':
    uVar12 = func_0x048648e0(uStack_338,&UNK_011f880f);
    uVar17 = func_0x048648e0(uStack_338,&UNK_0131a74f);
    uVar18 = func_0x048648e0(uStack_338,&UNK_013a111d);
    uStack_318 = (undefined8 **)((ulong)uStack_318 & 0xffffffffffff0000);
    func_0x04863cb0(&uStack_258,uVar12,&uStack_318);
    if (((ulong)uStack_318 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_308,(ulong)uStack_318 & 0xfffffffffffffffe);
    }
    uStack_318 = (undefined8 **)((ulong)uStack_318 & 0xffffffffffff0000);
    func_0x04863cb0(&uStack_370,uVar18,&uStack_318);
    if (((ulong)uStack_318 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_308,(ulong)uStack_318 & 0xfffffffffffffffe);
    }
    ppuVar32 = (undefined8 **)((ulong)uStack_258 >> 1 & 0x7f);
    pbVar30 = (byte *)((long)&uStack_258 + 1);
    if (((ulong)uStack_258 & 1) != 0) {
      ppuVar32 = ppuStack_250;
      pbVar30 = pbStack_248;
    }
    func_0x0c3f7a00(&puStack_1a8,pbVar30,ppuVar32);
    ppuVar32 = (undefined8 **)((ulong)uStack_370 >> 1 & 0x7f);
    lVar19 = (long)&uStack_370 + 1;
    if (((ulong)uStack_370 & 1) != 0) {
      ppuVar32 = ppuStack_368;
      lVar19 = lStack_360;
    }
    func_0x0c3f7a00(&ppuStack_1c8,lVar19,ppuVar32);
    func_0x0c001aa0(&puStack_3a0,ppuStack_378,uVar17,(int)*(short *)(lStack_320 + 0x1c),0,0);
    if (ppuStack_398 == (undefined8 **)0x0) {
code_r0x0c0058b2:
      puVar24 = (undefined *)0x0;
    }
    else {
      cVar5 = (*(code *)(*ppuStack_398)[0xf])();
      if (cVar5 != '\0') {
        (*(code *)(*ppuStack_398)[0x10])(&uStack_318);
        ppuVar1 = uStack_318;
        ppuVar32 = ppuStack_398;
        uStack_318 = (undefined8 **)0x0;
        ppuStack_398 = ppuVar1;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
          ppuVar32 = uStack_318;
          uStack_318 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
      }
      if (ppuStack_398 == (undefined8 **)0x0) goto code_r0x0c0058b2;
      func_0x0bfbc020(&uStack_318,&puStack_3a0);
      pbVar30 = pbStack_300 + 0x128;
      if ((short)uStack_2f8 == 0x7fff) {
        pbVar30 = (byte *)&uStack_2f8;
      }
      if (pbStack_300 == (byte *)0x0) {
        pbVar30 = (byte *)&uStack_2f8;
      }
      if (*(short *)pbVar30 == 0x7fff) {
        uStack_2f8 = uStack_2f8 & 0xffffffffffff0000;
      }
      lVar19 = *in_FS_OFFSET;
      if (*(char *)(lVar19 + -0xb68) == '\0') {
        *(undefined1 *)(lVar19 + -0xb68) = 1;
        func_0x0417d010(&UNK_0ca00780,lVar19 + -0xb78,0xf53dab8);
      }
      lVar29 = *(long *)(lVar19 + -0xb70);
      uVar17 = *(undefined8 *)(lVar19 + -0xb78);
      uStack_100 = *(undefined4 *)(lVar19 + -0xb70);
      uStack_fc = *(undefined4 *)(lVar19 + -0xb6c);
      uStack_108 = *(undefined4 *)(lVar19 + -0xb78);
      uStack_104 = *(undefined4 *)(lVar19 + -0xb74);
      if (lVar29 != 0) {
        LOCK();
        *(long *)(lVar29 + 0x10) = *(long *)(lVar29 + 0x10) + 1;
        UNLOCK();
        LOCK();
        *(long *)(lVar29 + 0x10) = *(long *)(lVar29 + 0x10) + 1;
        UNLOCK();
        uStack_338 = uVar17;
        uStack_330 = uStack_100;
        uStack_32c = uStack_fc;
        func_0x0412c2d0(lVar29);
        uStack_108 = (undefined4)uStack_338;
        uStack_104 = uStack_338._4_4_;
        uStack_100 = uStack_330;
        uStack_fc = uStack_32c;
      }
      func_0x0ca123d0(&ppuStack_3b8,&uStack_108,0xf6e4ea0);
      if (ppuStack_3b8 == (undefined8 **)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        puVar14 = *ppuStack_3b8;
        LOCK();
        *(int *)((long)ppuStack_3b8 + 0xc) = *(int *)((long)ppuStack_3b8 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)ppuStack_3b8 + 0xc) < 1) && (*ppuStack_3b8 == (undefined8 *)0x0)) &&
           (ppuStack_3b8 != (undefined8 **)0x0)) {
          thunk_FUN_0ee326a0(ppuStack_3b8,0x10);
        }
      }
      func_0x0ca123d0(&ppuStack_3b8,&uStack_108,0xf6e4b20);
      if (ppuStack_3b8 == (undefined8 **)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = *ppuStack_3b8;
        LOCK();
        *(int *)((long)ppuStack_3b8 + 0xc) = *(int *)((long)ppuStack_3b8 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)ppuStack_3b8 + 0xc) < 1) && (*ppuStack_3b8 == (undefined8 *)0x0)) &&
           (ppuStack_3b8 != (undefined8 **)0x0)) {
          thunk_FUN_0ee326a0(ppuStack_3b8,0x10);
        }
      }
      func_0x0ca123d0(&ppuStack_3b8,&uStack_108,0xf6e4b98);
      if (ppuStack_3b8 == (undefined8 **)0x0) {
code_r0x0c0060fb:
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar25 = *ppuStack_3b8;
        LOCK();
        *(int *)((long)ppuStack_3b8 + 0xc) = *(int *)((long)ppuStack_3b8 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)ppuStack_3b8 + 0xc) < 1) && (*ppuStack_3b8 == (undefined8 *)0x0)) &&
           (ppuStack_3b8 != (undefined8 **)0x0)) {
          thunk_FUN_0ee326a0(ppuStack_3b8,0x10);
        }
        lVar19 = lStack_320;
        if (puVar25 == (undefined8 *)0x0 ||
            (puVar15 == (undefined8 *)0x0 || puVar14 == (undefined8 *)0x0)) goto code_r0x0c0060fb;
        if (puStack_1a8 == (undefined4 *)0x0) {
          if (ppuStack_1c8 != (undefined4 **)0x0) {
            uVar6 = func_0x0c001990(lStack_320);
            func_0x0c001aa0(&ppuStack_3b8,ppuStack_378,uVar12,(int)*(short *)(lVar19 + 0x1c),uVar6,1
                           );
            if (ppuStack_3b0 != (undefined8 **)0x0) {
              cVar5 = (*(code *)(*ppuStack_3b0)[0xf])();
              if (cVar5 != '\0') {
                (*(code *)(*ppuStack_3b0)[0x10])(&ppuStack_350);
                ppuVar1 = ppuStack_350;
                ppuVar32 = ppuStack_3b0;
                ppuStack_350 = (undefined8 **)0x0;
                ppuStack_3b0 = ppuVar1;
                if (ppuVar32 != (undefined8 **)0x0) {
                  (*(code *)(*ppuVar32)[0x12])();
                  ppuVar32 = ppuStack_350;
                  ppuStack_350 = (undefined8 **)0x0;
                  if (ppuVar32 != (undefined8 **)0x0) {
                    (*(code *)(*ppuVar32)[0x12])();
                  }
                }
              }
              if (ppuStack_3b0 != (undefined8 **)0x0) {
                func_0x0c4ac7e0(&ppuStack_350,puVar14,*(undefined4 *)ppuStack_1c8);
                ppuStack_270 = (undefined8 **)&uStack_318;
                pppuStack_268 = &ppuStack_350;
                func_0x0c4ae700(&ppuStack_3b8,&UNK_0c0269f0,&ppuStack_270);
                goto code_r0x0c00735d;
              }
            }
            goto code_r0x0c0060fb;
          }
          uVar6 = func_0x0c001990(lStack_320);
          ppuVar32 = ppuStack_378;
          func_0x0c001aa0(&ppuStack_3b8,ppuStack_378,uVar12,(int)*(short *)(lVar19 + 0x1c),uVar6,1);
          func_0x0c001aa0(&ppuStack_350,ppuVar32,uVar18,(int)*(short *)(lVar19 + 0x1c),1,0);
          if (ppuStack_3b0 == (undefined8 **)0x0) {
code_r0x0c00767a:
            puVar24 = (undefined *)0x0;
          }
          else {
            cVar5 = (*(code *)(*ppuStack_3b0)[0xf])();
            if (cVar5 != '\0') {
              (*(code *)(*ppuStack_3b0)[0x10])(&ppuStack_270);
              ppuVar3 = ppuStack_270;
              ppuVar1 = ppuStack_3b0;
              ppuStack_270 = (undefined8 **)0x0;
              ppuStack_3b0 = ppuVar3;
              if (ppuVar1 != (undefined8 **)0x0) {
                (*(code *)(*ppuVar1)[0x12])();
                ppuVar1 = ppuStack_270;
                ppuStack_270 = (undefined8 **)0x0;
                if (ppuVar1 != (undefined8 **)0x0) {
                  (*(code *)(*ppuVar1)[0x12])();
                }
              }
            }
            if ((ppuStack_3b0 == (undefined8 **)0x0) ||
               (cVar5 = func_0x0c4ae570(&ppuStack_350,1), cVar5 == '\0')) goto code_r0x0c00767a;
            uVar12 = func_0x0c49b630(&ppuStack_350);
            sVar8 = func_0x0c48ba30(&ppuStack_350);
            iVar28 = 0;
            if (sVar8 != 0x7fff) {
              sVar8 = func_0x0c48ba30(&ppuStack_350);
              iVar28 = (int)sVar8;
            }
            func_0x0c4ac7e0(&ppuStack_270,uVar12,iVar28);
            uStack_1d8 = &uStack_318;
            pppuStack_1d0 = &ppuStack_270;
            func_0x0c4ae700(&ppuStack_3b8,&UNK_0c026af0,&uStack_1d8);
            pppuVar4 = pppuStack_268;
            ppuStack_270 = (undefined8 **)&UNK_0f3773c0;
            pppuStack_268 = (undefined8 ***)0x0;
            if (pppuVar4 != (undefined8 ***)0x0) {
              (*(code *)(*pppuVar4)[0x12])();
            }
            puVar24 = (undefined *)CONCAT71((int7)((ulong)ppuVar32 >> 8),1);
          }
          plVar22 = plStack_348;
          ppuStack_350 = (undefined8 **)&UNK_0f3773c0;
          plStack_348 = (long *)0x0;
          ppuVar32 = ppuStack_3b0;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x90))();
            ppuVar32 = ppuStack_3b0;
          }
code_r0x0c0076b6:
          ppuStack_3b0 = (undefined8 **)0x0;
          ppuStack_3b8 = (undefined8 **)&UNK_0f3773c0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
        else {
          if (ppuStack_1c8 == (undefined4 **)0x0) {
            func_0x0c001aa0(&ppuStack_3b8,ppuStack_378,uVar18,(int)*(short *)(lStack_320 + 0x1c),1,0
                           );
            if (ppuStack_3b0 != (undefined8 **)0x0) {
              cVar5 = (*(code *)(*ppuStack_3b0)[0xf])();
              if (cVar5 != '\0') {
                (*(code *)(*ppuStack_3b0)[0x10])(&ppuStack_350);
                ppuVar1 = ppuStack_350;
                ppuVar32 = ppuStack_3b0;
                ppuStack_350 = (undefined8 **)0x0;
                ppuStack_3b0 = ppuVar1;
                if (ppuVar32 != (undefined8 **)0x0) {
                  (*(code *)(*ppuVar32)[0x12])();
                  ppuVar32 = ppuStack_350;
                  ppuStack_350 = (undefined8 **)0x0;
                  if (ppuVar32 != (undefined8 **)0x0) {
                    (*(code *)(*ppuVar32)[0x12])();
                  }
                }
              }
              if (ppuStack_3b0 != (undefined8 **)0x0) {
                func_0x0c4ac7e0(&ppuStack_350,puVar14,*puStack_1a8);
                uVar12 = func_0x0c49b630(&ppuStack_3b8);
                sVar8 = func_0x0c48ba30(&ppuStack_3b8);
                iVar28 = 0;
                if (sVar8 != 0x7fff) {
                  sVar8 = func_0x0c48ba30(&ppuStack_3b8);
                  iVar28 = (int)sVar8;
                }
                func_0x0c4ac7e0(&ppuStack_270,uVar12,iVar28);
                iVar28 = -1;
                if (uStack_2f8._3_1_ == '\x01') {
                  iVar28 = 0;
                  if ((uStack_310 != (undefined8 **)0x0) &&
                     (iVar28 = 0, *uStack_310 != (undefined8 *)0x0)) {
                    iVar28 = (int)*(short *)((long)*uStack_310 + 0x8a);
                  }
                }
                uStack_1d8 = (undefined8 *)CONCAT44(uStack_1d8._4_4_,iVar28);
                pbVar30 = pbStack_300 + 0x128;
                if ((short)uStack_2f8 == 0x7fff) {
                  pbVar30 = (byte *)&uStack_2f8;
                }
                if (pbStack_300 == (byte *)0x0) {
                  pbVar30 = (byte *)&uStack_2f8;
                }
                uStack_1d8 = (undefined8 *)CONCAT44((int)*(short *)pbVar30,iVar28);
                func_0x0c3fc020(&ppuStack_350,&uStack_1d8,&ppuStack_270);
                pppuVar4 = pppuStack_268;
                ppuStack_270 = (undefined8 **)&UNK_0f3773c0;
                pppuStack_268 = (undefined8 ***)0x0;
                if (pppuVar4 != (undefined8 ***)0x0) {
                  (*(code *)(*pppuVar4)[0x12])();
                }
code_r0x0c00735d:
                plVar22 = plStack_348;
                ppuStack_350 = (undefined8 **)&UNK_0f3773c0;
                plStack_348 = (long *)0x0;
                if (plVar22 != (long *)0x0) {
                  (**(code **)(*plVar22 + 0x90))();
                }
                puVar24 = &UNK_0f377301;
                ppuVar32 = ppuStack_3b0;
                goto code_r0x0c0076b6;
              }
            }
            goto code_r0x0c0060fb;
          }
          func_0x0c4ac7e0(&ppuStack_3b8,puVar14,*puStack_1a8);
          func_0x0c4ac7e0(&ppuStack_350,puVar14,*(undefined4 *)ppuStack_1c8);
          func_0x0c4ac7e0(&ppuStack_270,puVar25,*puStack_1a8);
          func_0x0c4ac7e0(&uStack_1d8,puVar25,*(undefined4 *)ppuStack_1c8);
          func_0x0c4ac7e0(&puStack_178,puVar15,*puStack_1a8);
          func_0x0c4ac7e0(&puStack_188,puVar15,*(undefined4 *)ppuStack_1c8);
          iStack_260 = -1;
          if (uStack_2f8._3_1_ == '\x01') {
            iStack_260 = 0;
            if ((uStack_310 != (undefined8 **)0x0) &&
               (iStack_260 = 0, *uStack_310 != (undefined8 *)0x0)) {
              iStack_260 = (int)*(short *)((long)*uStack_310 + 0x8a);
            }
          }
          pbVar30 = pbStack_300 + 0x128;
          if ((short)uStack_2f8 == 0x7fff) {
            pbVar30 = (byte *)&uStack_2f8;
          }
          if (pbStack_300 == (byte *)0x0) {
            pbVar30 = (byte *)&uStack_2f8;
          }
          iStack_25c = (int)*(short *)pbVar30;
          func_0x0c3fc020(&ppuStack_3b8,&iStack_260,&ppuStack_350);
          iStack_260 = -1;
          if (uStack_2f8._3_1_ == '\x01') {
            iStack_260 = 0;
            if ((uStack_310 != (undefined8 **)0x0) &&
               (iStack_260 = 0, *uStack_310 != (undefined8 *)0x0)) {
              iStack_260 = (int)*(short *)((long)*uStack_310 + 0x8a);
            }
          }
          pbVar30 = pbStack_300 + 0x128;
          if ((short)uStack_2f8 == 0x7fff) {
            pbVar30 = (byte *)&uStack_2f8;
          }
          if (pbStack_300 == (byte *)0x0) {
            pbVar30 = (byte *)&uStack_2f8;
          }
          iStack_25c = (int)*(short *)pbVar30;
          func_0x0c3fc020(&ppuStack_270,&iStack_260,&uStack_1d8);
          iStack_260 = -1;
          if (uStack_2f8._3_1_ == '\x01') {
            iStack_260 = 0;
            if ((uStack_310 != (undefined8 **)0x0) &&
               (iStack_260 = 0, *uStack_310 != (undefined8 *)0x0)) {
              iStack_260 = (int)*(short *)((long)*uStack_310 + 0x8a);
            }
          }
          pbVar30 = pbStack_300 + 0x128;
          if ((short)uStack_2f8 == 0x7fff) {
            pbVar30 = (byte *)&uStack_2f8;
          }
          if (pbStack_300 == (byte *)0x0) {
            pbVar30 = (byte *)&uStack_2f8;
          }
          iStack_25c = (int)*(short *)pbVar30;
          func_0x0c3fc020(&puStack_178,&iStack_260,&puStack_188);
          plVar22 = plStack_180;
          puStack_188 = &UNK_0f3773c0;
          plStack_180 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x90))();
          }
          plVar22 = plStack_170;
          puStack_178 = &UNK_0f3773c0;
          plStack_170 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x90))();
          }
          pppuVar4 = pppuStack_1d0;
          uStack_1d8 = (undefined8 *)&UNK_0f3773c0;
          pppuStack_1d0 = (undefined8 ***)0x0;
          if (pppuVar4 != (undefined8 ***)0x0) {
            (*(code *)(*pppuVar4)[0x12])();
          }
          pppuVar4 = pppuStack_268;
          ppuStack_270 = (undefined8 **)&UNK_0f3773c0;
          pppuStack_268 = (undefined8 ***)0x0;
          if (pppuVar4 != (undefined8 ***)0x0) {
            (*(code *)(*pppuVar4)[0x12])();
          }
          plVar22 = plStack_348;
          ppuStack_350 = (undefined8 **)&UNK_0f3773c0;
          plStack_348 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x90))();
          }
          ppuVar32 = ppuStack_3b0;
          ppuStack_3b8 = (undefined8 **)&UNK_0f3773c0;
          ppuStack_3b0 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
          puVar24 = &UNK_0f377301;
        }
      }
      if (CONCAT44(uStack_fc,uStack_100) != 0) {
        func_0x0412c2d0();
      }
      plVar22 = plStack_2a0;
      uStack_318 = (undefined8 **)&UNK_0f36e918;
      plStack_2a0 = (long *)0x0;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
      if (lStack_2c8 != 0) {
        lStack_2c0 = lStack_2c8;
        thunk_FUN_0ee326a0(lStack_2c8,lStack_2b8 - lStack_2c8);
      }
      if (lStack_2e8 != 0) {
        lStack_2e0 = lStack_2e8;
        thunk_FUN_0ee326a0(lStack_2e8,lStack_2d8 - lStack_2e8);
      }
      ppuVar32 = uStack_308;
      uStack_308 = (undefined8 **)0x0;
      if (ppuVar32 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar32)[1])();
      }
      if (uStack_310 != (undefined8 **)0x0) {
        LOCK();
        *(int *)((long)uStack_310 + 0xc) = *(int *)((long)uStack_310 + 0xc) + -1;
        UNLOCK();
        if (((*(int *)((long)uStack_310 + 0xc) < 1) && (*uStack_310 == (undefined8 *)0x0)) &&
           (uStack_310 != (undefined8 **)0x0)) {
          thunk_FUN_0ee326a0(uStack_310,0x10);
        }
      }
      ppuVar32 = ppuStack_398;
      puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
      ppuStack_398 = (undefined8 **)0x0;
      if (ppuVar32 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar32)[0x12])();
      }
    }
    ppuVar32 = ppuStack_1c0;
    if (ppuStack_1c0 != (undefined8 **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_1c0 + 1;
      puVar14 = *ppuVar1;
      *ppuVar1 = (undefined8 *)((long)*ppuVar1 + -1);
      UNLOCK();
      if (puVar14 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_1c0)[2])(ppuStack_1c0);
        func_0x0412c2d0(ppuVar32);
      }
    }
    if (plStack_1a0 != (long *)0x0) {
      LOCK();
      plVar22 = plStack_1a0 + 1;
      lVar19 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        func_0x0412c2d0(plStack_1a0);
      }
    }
    if (((ulong)uStack_370 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_360,(ulong)uStack_370 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_258 & 1) != 0) {
      thunk_FUN_0ee326a0(pbStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    }
    goto LAB_0c0041c3;
  case '\x05':
    uVar17 = func_0x048648e0(uStack_338,&UNK_011f880f);
    uVar18 = func_0x048648e0(uVar12,&UNK_0131a74f);
    uVar12 = func_0x048648e0(uVar12,&UNK_013a111d);
    lVar19 = lStack_320;
    uVar6 = func_0x0c001990(lStack_320);
    ppuVar32 = ppuStack_378;
    func_0x0c001aa0(&uStack_258,ppuStack_378,uVar17,(int)*(short *)(lVar19 + 0x1c),uVar6,1);
    func_0x0c001aa0(&uStack_370,ppuVar32,uVar18,(int)*(short *)(lVar19 + 0x1c),0,0);
    func_0x0c001aa0(&puStack_3a0,ppuVar32,uVar12,(int)*(short *)(lVar19 + 0x1c),1,0);
    func_0x0bfbc020(&uStack_318,&uStack_370);
    if (ppuStack_250 == (undefined8 **)0x0) {
code_r0x0c005873:
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      ppuStack_3b8 = ppuStack_380;
      func_0x06cfb620(1,3,0x19,&UNK_014a469f,&ppuStack_3b8);
code_r0x0c0066fe:
      puVar24 = (undefined *)0x0;
    }
    else {
      cVar5 = (*(code *)(*ppuStack_250)[0xf])();
      if (cVar5 != '\0') {
        (*(code *)(*ppuStack_250)[0x10])(&ppuStack_3b8);
        ppuVar32 = ppuStack_250;
        ppuStack_250 = ppuStack_3b8;
        ppuStack_3b8 = (undefined8 **)0x0;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
          ppuVar32 = ppuStack_3b8;
          ppuStack_3b8 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
      }
      if (ppuStack_250 == (undefined8 **)0x0) goto code_r0x0c005873;
      if (uStack_2f8._3_1_ == '\0') {
        if (((ulong)*ppuStack_388 & 1) != 0) {
          ppuStack_380 = (undefined8 **)ppuStack_388[2];
        }
        ppuStack_3b8 = ppuStack_380;
        func_0x08bf9a90(1,3,0x19,&UNK_013d4ebc,&ppuStack_3b8);
        goto code_r0x0c0066fe;
      }
      cVar5 = func_0x0c4ae570(&puStack_3a0,1);
      if (cVar5 == '\0') {
        if (((ulong)*ppuStack_388 & 1) != 0) {
          ppuStack_380 = (undefined8 **)ppuStack_388[2];
        }
        ppuStack_3b8 = ppuStack_380;
        func_0x0a735470(1,3,0x19,&UNK_013eecf7,&ppuStack_3b8);
        goto code_r0x0c0066fe;
      }
      ppuStack_3b8 = (undefined8 **)&uStack_318;
      ppuStack_3b0 = &puStack_3a0;
      func_0x0c4ae700(&uStack_258,&UNK_0c026780,&ppuStack_3b8);
      puVar24 = (undefined *)CONCAT71((int7)((ulong)&uStack_318 >> 8),1);
    }
    plVar22 = plStack_2a0;
    uStack_318 = (undefined8 **)&UNK_0f36e918;
    plStack_2a0 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    if (lStack_2c8 != 0) {
      lStack_2c0 = lStack_2c8;
      thunk_FUN_0ee326a0(lStack_2c8,lStack_2b8 - lStack_2c8);
    }
    if (lStack_2e8 != 0) {
      lStack_2e0 = lStack_2e8;
      thunk_FUN_0ee326a0(lStack_2e8,lStack_2d8 - lStack_2e8);
    }
    ppuVar32 = uStack_308;
    uStack_308 = (undefined8 **)0x0;
    if (ppuVar32 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar32)[1])();
    }
    if (uStack_310 != (undefined8 **)0x0) {
      LOCK();
      *(int *)((long)uStack_310 + 0xc) = *(int *)((long)uStack_310 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)uStack_310 + 0xc) < 1) && (*uStack_310 == (undefined8 *)0x0)) &&
         (uStack_310 != (undefined8 **)0x0)) {
        thunk_FUN_0ee326a0(uStack_310,0x10);
      }
    }
    ppuVar32 = ppuStack_398;
    puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
    ppuStack_398 = (undefined8 **)0x0;
    if (ppuVar32 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar32)[0x12])();
    }
    ppuVar32 = ppuStack_368;
    uStack_370 = (undefined8 *)&UNK_0f3773c0;
    ppuStack_368 = (undefined8 **)0x0;
    if (ppuVar32 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar32)[0x12])();
    }
    ppuVar32 = ppuStack_250;
    uStack_258 = (undefined8 **)&UNK_0f3773c0;
    ppuStack_250 = (undefined8 **)0x0;
    break;
  case '\x06':
    uVar17 = func_0x048648e0(uStack_338,&UNK_011f880f);
    uStack_338 = func_0x048648e0(uVar12,&UNK_013a111d);
    lVar19 = lStack_320;
    uVar6 = func_0x0c001990(lStack_320);
    func_0x0c001aa0(&uStack_370,ppuStack_378,uVar17,(int)*(short *)(lVar19 + 0x1c),uVar6,1);
    if (ppuStack_368 == (undefined8 **)0x0) {
code_r0x0c0057e4:
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      uStack_318 = ppuStack_380;
      func_0x0a735470(1,3,0x19,&UNK_0123247e,&uStack_318);
    }
    else {
      cVar5 = (*(code *)(*ppuStack_368)[0xf])();
      if (cVar5 != '\0') {
        (*(code *)(*ppuStack_368)[0x10])(&uStack_318);
        ppuVar1 = uStack_318;
        ppuVar32 = ppuStack_368;
        uStack_318 = (undefined8 **)0x0;
        ppuStack_368 = ppuVar1;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
          ppuVar32 = uStack_318;
          uStack_318 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
      }
      if (ppuStack_368 == (undefined8 **)0x0) goto code_r0x0c0057e4;
      ppuStack_280 = (undefined8 **)(param_8 + 6);
      puVar15 = (undefined8 *)param_8[6];
      puVar14 = (undefined8 *)param_8[7];
      if (puVar15 != puVar14) {
        puVar25 = puVar14 + -0x13;
        do {
          (**(code **)*puVar25)(puVar25);
          puVar14 = puVar25 + -0x13;
          bVar33 = puVar25 != puVar15;
          puVar25 = puVar14;
        } while (bVar33);
      }
      param_8[7] = (long)puVar15;
      func_0x05a912a0(ppuStack_280,9);
      cVar5 = func_0x04864290(uStack_338);
      if (cVar5 == '\0') {
        cVar5 = func_0x04864270(uStack_338);
        uVar12 = uStack_338;
        if (cVar5 != '\0') {
          func_0x04865530(&ppuStack_3b8,uStack_338);
          bVar7 = 1;
          puVar14 = &uStack_318;
          while( true ) {
            func_0x048655b0(puVar14,uVar12);
            cVar5 = func_0x04862c80(&ppuStack_3b8,puVar14);
            func_0x04862b40(puVar14);
            if (cVar5 != '\0') break;
            uVar17 = func_0x04862b80(&ppuStack_3b8);
            func_0x0c001aa0(&puStack_3a0,ppuStack_378,uVar17,(int)*(short *)(lStack_320 + 0x1c),1,0)
            ;
            func_0x0bfbc020(&uStack_258,&puStack_3a0);
            func_0x0c4510a0(puVar14,&uStack_258);
            plVar22 = plStack_1e0;
            uStack_318 = (undefined8 **)&UNK_0f371da8;
            auStack_298[0] = 0;
            uStack_288 = 0;
            uStack_258 = (undefined8 **)&UNK_0f36e918;
            plStack_1e0 = (long *)0x0;
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 8))();
            }
            if (lStack_208 != 0) {
              lStack_200 = lStack_208;
              thunk_FUN_0ee326a0(lStack_208,lStack_1f8 - lStack_208);
            }
            if (lStack_228 != 0) {
              lStack_220 = lStack_228;
              thunk_FUN_0ee326a0(lStack_228,lStack_218 - lStack_228);
            }
            pbVar30 = pbStack_248;
            pbStack_248 = (byte *)0x0;
            if (pbVar30 != (byte *)0x0) {
              (**(code **)(*(long *)pbVar30 + 8))();
            }
            if (ppuStack_250 != (undefined8 **)0x0) {
              LOCK();
              *(int *)((long)ppuStack_250 + 0xc) = *(int *)((long)ppuStack_250 + 0xc) + -1;
              UNLOCK();
              if (((*(int *)((long)ppuStack_250 + 0xc) < 1) && (*ppuStack_250 == (undefined8 *)0x0))
                 && (ppuStack_250 != (undefined8 **)0x0)) {
                thunk_FUN_0ee326a0(ppuStack_250,0x10);
              }
            }
            bVar2 = uStack_2f8._3_1_;
            puVar15 = (undefined8 *)param_8[7];
            if (puVar15 < (undefined8 *)param_8[8]) {
              func_0x0c4510a0(puVar15,puVar14);
              *puVar15 = &UNK_0f371da8;
              *(undefined4 *)(puVar15 + 0x10) = 0;
              *(undefined4 *)(puVar15 + 0x12) = 0;
              if ((ulong)uStack_288 == 0xffffffff) {
                *(undefined4 *)(puVar15 + 0x12) = 0xffffffff;
              }
              else {
                uStack_258 = (undefined8 **)(puVar15 + 0x10);
                (**(code **)(&UNK_0f38c5a0 + (ulong)uStack_288 * 8))
                          (&uStack_258,uStack_258,auStack_298);
                uVar12 = uStack_338;
              }
              puVar15 = puVar15 + 0x13;
              param_8[7] = (long)puVar15;
            }
            else {
              puVar15 = (undefined8 *)func_0x0bb98710(ppuStack_280,puVar14);
            }
            param_8[7] = (long)puVar15;
            uStack_318 = (undefined8 **)&UNK_0f371da8;
            if ((ulong)uStack_288 != 0xffffffff) {
              (**(code **)(&UNK_0f34c8e0 + (ulong)uStack_288 * 8))(&uStack_258,auStack_298);
            }
            plVar22 = plStack_2a0;
            uStack_288 = 0xffffffff;
            uStack_318 = (undefined8 **)&UNK_0f36e918;
            plStack_2a0 = (long *)0x0;
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 8))();
            }
            if (lStack_2c8 != 0) {
              lStack_2c0 = lStack_2c8;
              thunk_FUN_0ee326a0(lStack_2c8,lStack_2b8 - lStack_2c8);
            }
            if (lStack_2e8 != 0) {
              lStack_2e0 = lStack_2e8;
              thunk_FUN_0ee326a0(lStack_2e8,lStack_2d8 - lStack_2e8);
            }
            ppuVar32 = uStack_308;
            uStack_308 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[1])();
            }
            if (uStack_310 != (undefined8 **)0x0) {
              LOCK();
              *(int *)((long)uStack_310 + 0xc) = *(int *)((long)uStack_310 + 0xc) + -1;
              UNLOCK();
              if (((*(int *)((long)uStack_310 + 0xc) < 1) && (*uStack_310 == (undefined8 *)0x0)) &&
                 (uStack_310 != (undefined8 **)0x0)) {
                thunk_FUN_0ee326a0(uStack_310,0x10);
              }
            }
            ppuVar32 = ppuStack_398;
            puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
            ppuStack_398 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
            bVar7 = bVar2 & bVar7 != 0;
            func_0x04862ba0(&ppuStack_3b8);
          }
          func_0x04862b40(&ppuStack_3b8);
          if (bVar7 == 0) goto code_r0x0c006924;
        }
code_r0x0c0068da:
        if ((ulong)((param_8[7] - param_8[6] >> 3) * -0x79435e50d79435e5) < 10) {
          uStack_310 = ppuStack_378;
          uStack_308 = ppuStack_280;
          uStack_318 = (undefined8 **)&uStack_370;
          func_0x0c4ae700(&uStack_370,&UNK_0c026870,&uStack_318);
          puVar24 = (undefined *)CONCAT71((int7)((ulong)puVar14 >> 8),1);
          goto code_r0x0c005829;
        }
        if (((ulong)*ppuStack_388 & 1) != 0) {
          ppuStack_380 = (undefined8 **)ppuStack_388[2];
        }
        func_0x0c009c80(ppuStack_380);
      }
      else {
        func_0x0c001aa0(&puStack_3a0,ppuStack_378,uStack_338,(int)*(short *)(lStack_320 + 0x1c),1,0)
        ;
        func_0x0bfbc020(&uStack_258,&puStack_3a0);
        func_0x0c4510a0(&uStack_318,&uStack_258);
        uStack_318 = (undefined8 **)&UNK_0f371da8;
        auStack_298[0] = 0;
        uStack_288 = 0;
        func_0x0c44e610(&uStack_258);
        cVar5 = uStack_2f8._3_1_;
        puVar14 = (undefined8 *)0x0;
        func_0x0c009ba0(ppuStack_280,&uStack_318);
        func_0x049c2320(&uStack_318);
        ppuVar32 = ppuStack_398;
        puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
        ppuStack_398 = (undefined8 **)0x0;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
        }
        if (cVar5 != '\0') goto code_r0x0c0068da;
code_r0x0c006924:
        if (((ulong)*ppuStack_388 & 1) != 0) {
          ppuStack_380 = (undefined8 **)ppuStack_388[2];
        }
        uStack_318 = ppuStack_380;
        func_0x08bf9a90(1,3,0x19,&UNK_01335943,&uStack_318);
      }
    }
code_r0x0c005827:
    puVar24 = (undefined *)0x0;
    goto code_r0x0c005829;
  case '\a':
    plVar22 = (long *)*param_8;
    if ((param_8[1] - (long)plVar22 != 0x28) || (*plVar22 != _DAT_0f6ea2a0)) {
code_r0x0c0058c0:
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      uStack_318 = ppuStack_380;
      uStack_258 = _DAT_0f6ea2b8;
      if ((bVar7 & 1) == 0) {
        uStack_258 = (undefined8 **)0xf6ea2a9;
      }
      func_0x0c00c500(1,3,0x19,&UNK_011e21b6,&uStack_318,&uStack_258);
      goto LAB_0c0041c1;
    }
    bVar2 = *(byte *)(plVar22 + 1);
    if ((bVar2 & 1) == 0) {
      uVar13 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar13 = plVar22[2];
    }
    uVar23 = _DAT_0f6ea2b0;
    if ((DAT_0f6ea2a8 & 1) == 0) {
      uVar23 = (ulong)(DAT_0f6ea2a8 >> 1);
    }
    if (uVar13 != uVar23) goto code_r0x0c0058c0;
    if ((bVar2 & 1) == 0) {
      lVar19 = (long)plVar22 + 9;
    }
    else {
      lVar19 = plVar22[3];
    }
    ppuVar32 = _DAT_0f6ea2b8;
    if ((DAT_0f6ea2a8 & 1) == 0) {
      ppuVar32 = (undefined8 **)0xf6ea2a9;
    }
    sVar8 = *(short *)(lStack_320 + 0x1c);
    iVar28 = func_0x0eee3000(lVar19,ppuVar32);
    if (iVar28 != 0) goto code_r0x0c0058c0;
    uVar12 = func_0x048648e0(uStack_338,&UNK_01386133);
    uVar17 = func_0x048648e0(uStack_338,&UNK_012bc46e);
    uVar18 = func_0x048648e0(uStack_338,&UNK_014bdf31);
    uStack_338 = func_0x048648e0(uStack_338,&UNK_011ea94e);
    lVar19 = (**(code **)(*ppuStack_378[0x23] + 0x568))();
    puVar24 = (undefined *)(lVar19 + 0x50);
    puVar26 = puVar24;
    if ((*(char *)(lVar19 + 0x77) == '\0') &&
       (((puVar31 = (undefined *)(lVar19 + 0x70), *(char *)(lVar19 + 0x68) != '\0' ||
         (puVar26 = puVar31, (*(byte *)(lVar19 + 0x56) & 1) != 0)) &&
        (cVar5 = func_0x04fa7a10(puVar31,puVar24), puVar26 = puVar24, cVar5 != '\0')))) {
      puVar26 = puVar31;
    }
    puVar24 = &DAT_0f72b850;
    if (((puVar26[6] | puVar26[0x18]) & 1) != 0) {
      puVar24 = puVar26;
    }
    if (((DAT_0f5a2978 == '\0') && (puVar24[0x18] == '\0')) &&
       (((DAT_0f5a2966 & 1) == 0 ||
        ((puVar24[7] != '\0' || (cVar5 = func_0x04fa7a10(puVar24,0xf5a2960), cVar5 == '\0')))))) {
      func_0x0c001aa0(&uStack_370,ppuStack_378,uVar12,(int)sVar8,0,0);
    }
    else {
      uStack_370 = (undefined8 *)&UNK_0f3773c0;
      if (_DAT_0f6d2fb0 == (undefined8 *)0x0) {
        ppuStack_368 = (undefined8 **)0x0;
      }
      else {
        (**(code **)*_DAT_0f6d2fb0)(&ppuStack_368);
      }
      lStack_360 = CONCAT62(lStack_360._2_6_,uRam000000000f6d2fb8);
      uStack_370 = (undefined8 *)&UNK_0f0d6548;
    }
    cVar5 = func_0x0c4ae5f0(&uStack_370);
    if (cVar5 == '\0') {
      if (ppuStack_368 != (undefined8 **)0x0) {
        cVar5 = (*(code *)(*ppuStack_368)[0xf])();
        if (cVar5 != '\0') {
          (*(code *)(*ppuStack_368)[0x10])(&uStack_318);
          ppuVar1 = uStack_318;
          ppuVar32 = ppuStack_368;
          uStack_318 = (undefined8 **)0x0;
          ppuStack_368 = ppuVar1;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
            ppuVar32 = uStack_318;
            uStack_318 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
          }
        }
        if (ppuStack_368 != (undefined8 **)0x0) goto code_r0x0c007a70;
      }
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      uStack_318 = ppuStack_380;
      func_0x06e8e5f0(1,3,0x19,&UNK_011adaa2,&uStack_318);
      goto code_r0x0c005827;
    }
code_r0x0c007a70:
    iVar28 = (int)sVar8;
    func_0x0c001aa0(&puStack_3a0,ppuStack_378,uVar17,iVar28,0,0);
    if (ppuStack_398 == (undefined8 **)0x0) {
code_r0x0c007e37:
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      uStack_318 = ppuStack_380;
      func_0x0a735470(1,3,0x19,&UNK_012324b6,&uStack_318);
code_r0x0c007f30:
      puVar24 = (undefined *)0x0;
    }
    else {
      cVar5 = (*(code *)(*ppuStack_398)[0xf])();
      if (cVar5 != '\0') {
        (*(code *)(*ppuStack_398)[0x10])(&uStack_318);
        ppuVar1 = uStack_318;
        ppuVar32 = ppuStack_398;
        uStack_318 = (undefined8 **)0x0;
        ppuStack_398 = ppuVar1;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
          ppuVar32 = uStack_318;
          uStack_318 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
      }
      if (ppuStack_398 == (undefined8 **)0x0) goto code_r0x0c007e37;
      cVar5 = (*(code *)(*ppuStack_398)[0xf])(ppuStack_398);
      if (cVar5 != '\0') {
        (*(code *)(*ppuStack_398)[0x10])(&uStack_318);
        ppuVar1 = uStack_318;
        ppuVar32 = ppuStack_398;
        uStack_318 = (undefined8 **)0x0;
        ppuStack_398 = ppuVar1;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
          ppuVar32 = uStack_318;
          uStack_318 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
          }
        }
      }
      if (((ppuStack_398 == (undefined8 **)0x0) ||
          (plVar22 = (long *)(*(code *)(*ppuStack_398)[6])(ppuStack_398), plVar22 == (long *)0x0))
         || ((cVar5 = (**(code **)(*plVar22 + 0x78))(plVar22), cVar5 == '\0' &&
             (iVar11 = (**(code **)(*plVar22 + 0x1d8))(plVar22), iVar11 < 1)))) {
        if (((ulong)*ppuStack_388 & 1) != 0) {
          ppuStack_380 = (undefined8 **)ppuStack_388[2];
        }
        uStack_318 = ppuStack_380;
        func_0x0b03a060(1,3,0x19,&UNK_013bb915,&uStack_318);
        goto code_r0x0c007f30;
      }
      func_0x0c001aa0(&ppuStack_3b8,ppuStack_378,uVar18,iVar28,0,0);
      if (ppuStack_3b0 == (undefined8 **)0x0) {
code_r0x0c008477:
        if (((ulong)*ppuStack_388 & 1) != 0) {
          ppuStack_380 = (undefined8 **)ppuStack_388[2];
        }
        uStack_318 = ppuStack_380;
        func_0x06e8e5f0(1,3,0x19,&UNK_011c9159,&uStack_318);
code_r0x0c0086ba:
        puVar24 = (undefined *)0x0;
      }
      else {
        cVar5 = (*(code *)(*ppuStack_3b0)[0xf])();
        if (cVar5 != '\0') {
          (*(code *)(*ppuStack_3b0)[0x10])(&uStack_318);
          ppuVar1 = uStack_318;
          ppuVar32 = ppuStack_3b0;
          uStack_318 = (undefined8 **)0x0;
          ppuStack_3b0 = ppuVar1;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
            ppuVar32 = uStack_318;
            uStack_318 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
          }
        }
        if (ppuStack_3b0 == (undefined8 **)0x0) goto code_r0x0c008477;
        cVar5 = (*(code *)(*ppuStack_3b0)[0xf])(ppuStack_3b0);
        if (cVar5 != '\0') {
          (*(code *)(*ppuStack_3b0)[0x10])(&uStack_318);
          ppuVar1 = uStack_318;
          ppuVar32 = ppuStack_3b0;
          uStack_318 = (undefined8 **)0x0;
          ppuStack_3b0 = ppuVar1;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
            ppuVar32 = uStack_318;
            uStack_318 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
          }
        }
        if ((ppuStack_3b0 == (undefined8 **)0x0) ||
           (lVar19 = (*(code *)(*ppuStack_3b0)[6])(ppuStack_3b0), lVar19 == 0)) {
          if (((ulong)*ppuStack_388 & 1) != 0) {
            ppuStack_380 = (undefined8 **)ppuStack_388[2];
          }
          uStack_318 = ppuStack_380;
          func_0x08bf9a90(1,3,0x19,&UNK_012ffe06,&uStack_318);
          goto code_r0x0c0086ba;
        }
        cVar5 = func_0x0c48fdd0(lVar19,0xf555f78);
        if (cVar5 == '\0') {
          if (((ulong)*ppuStack_388 & 1) != 0) {
            ppuStack_380 = (undefined8 **)ppuStack_388[2];
          }
          uStack_318 = ppuStack_380;
          uStack_258 = ppuRam000000000f555f90;
          if ((bRam000000000f555f80 & 1) == 0) {
            uStack_258 = (undefined8 **)0xf555f81;
          }
          func_0x07167bb0(1,3,0x19,&UNK_013bb963,&uStack_318,&uStack_258);
          goto code_r0x0c0086ba;
        }
        func_0x0c001aa0(&ppuStack_350,ppuStack_378,uStack_338,iVar28,0,0);
        cVar5 = func_0x0c4ae570(&ppuStack_350,1);
        if (cVar5 == '\0') {
          if (((ulong)*ppuStack_388 & 1) != 0) {
            ppuStack_380 = (undefined8 **)ppuStack_388[2];
          }
          uStack_318 = ppuStack_380;
          func_0x09af16e0(1,3,0x19,&UNK_01280fc6,&uStack_318);
code_r0x0c00877e:
          puVar24 = (undefined *)0x0;
        }
        else {
          lVar19 = func_0x0c49b630(&ppuStack_350);
          if (lVar19 == 0) {
            if (((ulong)*ppuStack_388 & 1) != 0) {
              ppuStack_380 = (undefined8 **)ppuStack_388[2];
            }
            uStack_318 = ppuStack_380;
            func_0x06ef7140(1,3,0x19,&UNK_011e2207,&uStack_318);
            goto code_r0x0c00877e;
          }
          func_0x0c44f050(&uStack_318,lVar19,1,0,0);
          uStack_318 = (undefined8 **)&UNK_0f36e858;
          func_0x0c00ba30(&puStack_1a8,&uStack_318);
          uStack_258 = (undefined8 **)CONCAT71(uStack_258._1_7_,1);
          func_0x0bfbabd0(&ppuStack_250,&puStack_1a8);
          uStack_238 = 0;
          uStack_230 = 0;
          lStack_228 = 0;
          func_0x0c00c6a0(ppuStack_378,ppuStack_388,&uStack_370,&puStack_3a0,&ppuStack_3b8,
                          &uStack_258,*param_8);
          func_0x0bfbaed0(&uStack_258);
          func_0x04a27410(&puStack_1a8);
          func_0x0c44e610(&uStack_318);
          puVar24 = (undefined *)CONCAT71((uint7)(byte)((ushort)sVar8 >> 8),1);
        }
        plVar22 = plStack_348;
        ppuStack_350 = (undefined8 **)&UNK_0f3773c0;
        plStack_348 = (long *)0x0;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x90))();
        }
      }
      ppuVar32 = ppuStack_3b0;
      ppuStack_3b8 = (undefined8 **)&UNK_0f3773c0;
      ppuStack_3b0 = (undefined8 **)0x0;
      if (ppuVar32 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar32)[0x12])();
      }
    }
    ppuVar32 = ppuStack_398;
    puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
    ppuStack_398 = (undefined8 **)0x0;
    if (ppuVar32 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar32)[0x12])();
    }
code_r0x0c005829:
    ppuVar32 = ppuStack_368;
    uStack_370 = (undefined8 *)&UNK_0f3773c0;
    ppuStack_368 = (undefined8 **)0x0;
joined_r0x0c00846c:
    if (ppuVar32 == (undefined8 **)0x0) goto LAB_0c0041c3;
    goto LAB_0c006aa6;
  case '\b':
LAB_0c0049ad:
    sVar8 = *(short *)(lStack_320 + 0x1c);
    lVar19 = (**(code **)(*ppuStack_378[0x23] + 0x568))();
    puVar24 = (undefined *)(lVar19 + 0x50);
    puVar26 = puVar24;
    if ((*(char *)(lVar19 + 0x77) == '\0') &&
       (((puVar31 = (undefined *)(lVar19 + 0x70), *(char *)(lVar19 + 0x68) != '\0' ||
         (puVar26 = puVar31, (*(byte *)(lVar19 + 0x56) & 1) != 0)) &&
        (cVar5 = func_0x04fa7a10(puVar31,puVar24), puVar26 = puVar24, cVar5 != '\0')))) {
      puVar26 = puVar31;
    }
    puVar24 = &DAT_0f72b850;
    if (((puVar26[6] | puVar26[0x18]) & 1) != 0) {
      puVar24 = puVar26;
    }
    if (((DAT_0f5a2978 != '\0') || (puVar24[0x18] != '\0')) ||
       (((DAT_0f5a2966 & 1) != 0 &&
        ((puVar24[7] == '\0' && (cVar5 = func_0x04fa7a10(puVar24,0xf5a2960), cVar5 != '\0')))))) {
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      uStack_318 = ppuStack_380;
      func_0x08bfcdc0(1,3,0x19,&UNK_011fdc93,&uStack_318);
      goto LAB_0c0041c1;
    }
    bVar7 = DAT_0f6ea2a8;
    plVar22 = (long *)*param_8;
    if ((param_8[1] - (long)plVar22 != 0x28) || (*plVar22 != _DAT_0f6ea2a0)) {
LAB_0c006012:
      if (((ulong)*ppuStack_388 & 1) != 0) {
        ppuStack_380 = (undefined8 **)ppuStack_388[2];
      }
      ppuVar32 = _DAT_0f6ea2b8;
      if ((bVar7 & 1) == 0) {
        ppuVar32 = (undefined8 **)0xf6ea2a9;
      }
      func_0x0c00cd50(ppuStack_380,ppuVar32);
      goto LAB_0c0041c1;
    }
    bVar2 = *(byte *)(plVar22 + 1);
    if ((bVar2 & 1) == 0) {
      uVar13 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar13 = plVar22[2];
    }
    uVar23 = _DAT_0f6ea2b0;
    if ((DAT_0f6ea2a8 & 1) == 0) {
      uVar23 = (ulong)(DAT_0f6ea2a8 >> 1);
    }
    if (uVar13 != uVar23) goto LAB_0c006012;
    if ((bVar2 & 1) == 0) {
      lVar19 = (long)plVar22 + 9;
    }
    else {
      lVar19 = plVar22[3];
    }
    ppuVar32 = _DAT_0f6ea2b8;
    if ((DAT_0f6ea2a8 & 1) == 0) {
      ppuVar32 = (undefined8 **)0xf6ea2a9;
    }
    iVar28 = func_0x0eee3000(lVar19,ppuVar32);
    if (iVar28 != 0) goto LAB_0c006012;
    uVar12 = func_0x048648e0(uStack_338,&UNK_01386133);
    uVar17 = func_0x048648e0(uStack_338,&UNK_012bc46e);
    uVar18 = func_0x048648e0(uStack_338,&UNK_014bdf31);
    iVar28 = (int)sVar8;
    func_0x0c001aa0(&uStack_318,ppuStack_378,uVar12,iVar28,0,1);
    plVar22 = ppuStack_378[0x23];
    uStack_258 = (undefined8 **)&UNK_0f3773c0;
    if (uStack_310 == (undefined8 **)0x0) {
      ppuStack_250 = (undefined8 **)0x0;
    }
    else {
      (*(code *)**uStack_310)(&ppuStack_250);
    }
    pbStack_248 = (byte *)CONCAT62(pbStack_248._2_6_,(undefined2)uStack_308);
    uStack_258 = (undefined8 **)&UNK_0f0d6548;
    (**(code **)(*plVar22 + 3000))(&uStack_370,plVar22);
    if ((ppuStack_368 == (undefined8 **)0x0) ||
       (ppuStack_368[1] == (undefined8 *)0xffffffffffffffff)) {
      bVar7 = 1;
      func_0x058c5b00(1,3,0x19,&UNK_013a1149);
    }
    else {
      ppuStack_398 = ppuStack_388;
      puStack_3a0 = &uStack_370;
      if (ppuStack_250 == (undefined8 **)0x0) {
LAB_0c008158:
        bVar7 = 0;
      }
      else {
        cVar5 = (*(code *)(*ppuStack_250)[0xf])();
        if (cVar5 != '\0') {
          (*(code *)(*ppuStack_250)[0x10])(&ppuStack_3b8,ppuStack_250);
          ppuVar32 = ppuStack_250;
          ppuStack_250 = ppuStack_3b8;
          ppuStack_3b8 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
            ppuVar32 = ppuStack_3b8;
            ppuStack_3b8 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
          }
        }
        if (ppuStack_250 == (undefined8 **)0x0) goto LAB_0c008158;
        bVar7 = (*(code *)(*ppuStack_250)[7])(ppuStack_250,&UNK_0c027bc0,&puStack_3a0);
      }
      bVar7 = bVar7 ^ 1;
    }
    if (ppuStack_368 != (undefined8 **)0x0) {
      func_0x0412c2d0();
    }
    ppuVar32 = ppuStack_250;
    uStack_258 = (undefined8 **)&UNK_0f3773c0;
    ppuStack_250 = (undefined8 **)0x0;
    if (ppuVar32 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar32)[0x12])();
    }
    if (bVar7 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      func_0x0c001aa0(&uStack_370,ppuStack_378,uVar17,iVar28,0,1);
      puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
      if (ppuStack_368 == (undefined8 **)0x0) {
        uStack_390 = (short)lStack_360;
LAB_0c0082c5:
        puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
        ppuStack_398 = (undefined8 **)0x0;
LAB_0c0082d3:
        ppuVar32 = ppuStack_378;
        func_0x0c001aa0(&ppuStack_3b8,ppuStack_378,uVar18,iVar28,0,1);
        plVar22 = ppuVar32[0x23];
        ppuStack_350 = (undefined8 **)&UNK_0f3773c0;
        if (ppuStack_3b0 == (undefined8 **)0x0) {
          plStack_348 = (long *)0x0;
        }
        else {
          (*(code *)**ppuStack_3b0)(&plStack_348);
        }
        uStack_340 = uStack_3a8;
        ppuStack_350 = (undefined8 **)&UNK_0f0d6548;
        (**(code **)(*plVar22 + 0xbc8))(&puStack_1a8,plVar22);
        if ((plStack_1a0 == (long *)0x0) || (plStack_1a0[1] == -1)) {
          puVar24 = (undefined *)CONCAT71((int7)((ulong)plVar22 >> 8),1);
          func_0x06e9e870(1,3,0x19,&UNK_0146ecc1);
        }
        else {
          ppuStack_1c0 = ppuStack_388;
          ppuStack_1c8 = &puStack_1a8;
          uVar9 = func_0x0c4ae700(&ppuStack_350,&UNK_0c027fd0,&ppuStack_1c8);
          puVar24 = (undefined *)((ulong)uVar9 ^ 1);
        }
        if (plStack_1a0 != (long *)0x0) {
          func_0x0412c2d0();
        }
        plVar22 = plStack_348;
        ppuStack_350 = (undefined8 **)&UNK_0f3773c0;
        plStack_348 = (long *)0x0;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x90))();
        }
        if ((char)puVar24 != '\0') {
          func_0x0c00cee0(ppuStack_378,ppuStack_388,&uStack_318,&uStack_370,&ppuStack_3b8,*param_8);
        }
        ppuVar32 = ppuStack_3b0;
        ppuStack_3b8 = (undefined8 **)&UNK_0f3773c0;
        ppuStack_3b0 = (undefined8 **)0x0;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
        }
      }
      else {
        (*(code *)**ppuStack_368)(&ppuStack_398);
        uStack_390 = (short)lStack_360;
        puStack_3a0 = (undefined8 *)&UNK_0f0d6548;
        ppuStack_350 = ppuStack_388;
        if (ppuStack_398 == (undefined8 **)0x0) goto LAB_0c0082c5;
        cVar5 = (*(code *)(*ppuStack_398)[0xf])();
        if (cVar5 != '\0') {
          (*(code *)(*ppuStack_398)[0x10])(&ppuStack_3b8,ppuStack_398);
          ppuVar32 = ppuStack_398;
          ppuStack_398 = ppuStack_3b8;
          ppuStack_3b8 = (undefined8 **)0x0;
          if (ppuVar32 != (undefined8 **)0x0) {
            (*(code *)(*ppuVar32)[0x12])();
            ppuVar32 = ppuStack_3b8;
            ppuStack_3b8 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
          }
        }
        if (ppuStack_398 == (undefined8 **)0x0) goto LAB_0c0082c5;
        cVar5 = (*(code *)(*ppuStack_398)[7])(ppuStack_398,&UNK_0c027da0,&ppuStack_350);
        ppuVar32 = ppuStack_398;
        puStack_3a0 = (undefined8 *)&UNK_0f3773c0;
        ppuStack_398 = (undefined8 **)0x0;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
        }
        if (cVar5 == '\0') goto LAB_0c0082d3;
        puVar24 = (undefined *)0x0;
      }
      ppuVar32 = ppuStack_368;
      uStack_370 = (undefined8 *)&UNK_0f3773c0;
      ppuStack_368 = (undefined8 **)0x0;
      if (ppuVar32 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar32)[0x12])();
      }
    }
    ppuVar32 = uStack_310;
    uStack_318 = (undefined8 **)&UNK_0f3773c0;
    uStack_310 = (undefined8 **)0x0;
    goto joined_r0x0c00846c;
  default:
    puVar14 = (undefined8 *)param_8[9];
    puVar15 = (undefined8 *)param_8[10];
    plStack_1b8 = (long *)((ulong)ppuStack_280 & 0xff);
    while (puVar14 != puVar15) {
      puVar15 = puVar15 + -0x10;
      (**(code **)*puVar15)(puVar15);
    }
    param_8[10] = (long)puVar14;
    uVar12 = func_0x048648e0(uStack_338,&UNK_011ea94e);
    cVar5 = func_0x04864270(uVar12);
    plStack_190 = param_8 + 9;
    if (cVar5 == '\0') {
      func_0x0c001aa0(&uStack_258,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),1,0);
      cVar5 = func_0x0c4ae570(&uStack_258,1);
      if ((cVar5 != '\0') && (cVar5 = func_0x0c4ae5f0(&uStack_258), cVar5 == '\0')) {
        func_0x0bfbc020(&uStack_318,&uStack_258);
        pbVar30 = pbStack_300 + 0x128;
        if ((short)uStack_2f8 == 0x7fff) {
          pbVar30 = (byte *)&uStack_2f8;
        }
        if (pbStack_300 == (byte *)0x0) {
          pbVar30 = (byte *)&uStack_2f8;
        }
        if (*(short *)pbVar30 == 0x7fff) {
          uStack_2f8 = uStack_2f8 & 0xffffffffffff0000;
        }
        if ((uStack_310 == (undefined8 **)0x0) || (*uStack_310 == (undefined8 *)0x0)) {
          bVar33 = true;
          func_0x0a0046e0(1,3,0x19,&UNK_011fdc69);
        }
        else {
          cVar5 = func_0x0ee24b80(*uStack_310 + 0x1d,0xf6e4b70);
          if (cVar5 != '\0') {
            (**(code **)(**uStack_310 + 0x358))(*uStack_310,&uStack_318);
          }
          func_0x0c0018c0(plStack_190,&uStack_318);
          bVar33 = false;
        }
        func_0x0c44e610(&uStack_318);
        ppuVar32 = ppuStack_250;
        uStack_258 = (undefined8 **)&UNK_0f3773c0;
        ppuStack_250 = (undefined8 **)0x0;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
        }
        puVar24 = (undefined *)0x0;
        if (bVar33) goto LAB_0c0041c3;
        goto LAB_0c0059ca;
      }
      func_0x0714efb0(1,3,0x19,&UNK_011e216b);
      ppuVar32 = ppuStack_250;
      uStack_258 = (undefined8 **)&UNK_0f3773c0;
      ppuStack_250 = (undefined8 **)0x0;
      if (ppuVar32 != (undefined8 **)0x0) {
        (*(code *)(*ppuVar32)[0x12])();
      }
    }
    else {
      func_0x04865530(&uStack_370,uVar12);
      func_0x048655b0(&puStack_3a0,uVar12);
      puVar24 = (undefined *)0x0;
      while (cVar5 = func_0x04862c80(&uStack_370,&puStack_3a0), cVar5 == '\0') {
        uVar12 = func_0x04862b80(&uStack_370);
        func_0x0c001aa0(&uStack_258,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),1,0);
        if (ppuStack_250 == (undefined8 **)0x0) {
LAB_0c005670:
          puVar24 = (undefined *)0x1;
          func_0x0714efb0(1,3,0x19,&UNK_011e216b);
        }
        else {
          cVar5 = (*(code *)(*ppuStack_250)[0xf])();
          if (cVar5 != '\0') {
            (*(code *)(*ppuStack_250)[0x10])(&uStack_318);
            ppuVar32 = ppuStack_250;
            ppuStack_250 = uStack_318;
            uStack_318 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
              ppuVar32 = uStack_318;
              uStack_318 = (undefined8 **)0x0;
              if (ppuVar32 != (undefined8 **)0x0) {
                (*(code *)(*ppuVar32)[0x12])();
              }
            }
          }
          if (ppuStack_250 == (undefined8 **)0x0) goto LAB_0c005670;
          cVar5 = func_0x0c4ae5f0(&uStack_258);
          if (cVar5 == '\0') {
            func_0x0bfbc020(&uStack_318,&uStack_258);
            pbVar30 = pbStack_300 + 0x128;
            if ((short)uStack_2f8 == 0x7fff) {
              pbVar30 = (byte *)&uStack_2f8;
            }
            if (pbStack_300 == (byte *)0x0) {
              pbVar30 = (byte *)&uStack_2f8;
            }
            if (*(short *)pbVar30 == 0x7fff) {
              uStack_2f8 = uStack_2f8 & 0xffffffffffff0000;
            }
            if ((uStack_310 == (undefined8 **)0x0) || (*uStack_310 == (undefined8 *)0x0)) {
              puVar24 = (undefined *)0x1;
              func_0x0a0046e0(1,3,0x19,&UNK_011fdc69);
            }
            else {
              puVar14 = (undefined8 *)param_8[10];
              if (puVar14 < (undefined8 *)param_8[0xb]) {
                func_0x0c44ed40(puVar14);
                *puVar14 = &UNK_0f36e858;
                func_0x0c44f4e0(puVar14,&uStack_318);
                puVar14 = puVar14 + 0x10;
                param_8[10] = (long)puVar14;
              }
              else {
                puVar14 = (undefined8 *)func_0x09d32b10(plStack_190,&uStack_318);
              }
              param_8[10] = (long)puVar14;
            }
            plVar22 = plStack_2a0;
            uStack_318 = (undefined8 **)&UNK_0f36e918;
            plStack_2a0 = (long *)0x0;
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 8))();
            }
            if (lStack_2c8 != 0) {
              lStack_2c0 = lStack_2c8;
              thunk_FUN_0ee326a0(lStack_2c8,lStack_2b8 - lStack_2c8);
            }
            if (lStack_2e8 != 0) {
              lStack_2e0 = lStack_2e8;
              thunk_FUN_0ee326a0(lStack_2e8,lStack_2d8 - lStack_2e8);
            }
            ppuVar32 = uStack_308;
            uStack_308 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[1])();
            }
            if (uStack_310 != (undefined8 **)0x0) {
              LOCK();
              *(int *)((long)uStack_310 + 0xc) = *(int *)((long)uStack_310 + 0xc) + -1;
              UNLOCK();
              if (((*(int *)((long)uStack_310 + 0xc) < 1) && (*uStack_310 == (undefined8 *)0x0)) &&
                 (uStack_310 != (undefined8 **)0x0)) {
                thunk_FUN_0ee326a0(uStack_310,0x10);
              }
            }
          }
        }
        ppuVar32 = ppuStack_250;
        uStack_258 = (undefined8 **)&UNK_0f3773c0;
        ppuStack_250 = (undefined8 **)0x0;
        if (ppuVar32 != (undefined8 **)0x0) {
          (*(code *)(*ppuVar32)[0x12])();
        }
        func_0x04862ba0(&uStack_370);
      }
      func_0x04862b40(&puStack_3a0);
      func_0x04862b40(&uStack_370);
      if (param_8[9] != param_8[10]) {
LAB_0c0059ca:
        uVar12 = func_0x048648e0(uStack_338,&UNK_01280fbf);
        func_0x0c003480(&uStack_258,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),
                        ppuStack_388);
        cVar5 = func_0x0551ca70(uStack_1b0,&UNK_0f34c8f8);
        if (cVar5 == '\0') {
          if ((uStack_238 & 1) != 0) goto LAB_0c006bd2;
          func_0x0b5d46a0(1,3,0x19,&UNK_013bb8f2);
LAB_0c007ed9:
          puVar24 = (undefined *)0x0;
        }
        else {
          if ((uStack_238 & 1) == 0) {
            if (param_7 == '\0') {
              uStack_318 = (undefined8 **)CONCAT44(uStack_318._4_4_,1);
              uStack_310 = (undefined8 **)0x0;
              uStack_308 = (undefined8 **)0x0;
              pbStack_300 = (byte *)0x0;
              func_0x0c009aa0(&uStack_258,&uStack_318);
            }
            else {
              uStack_318 = (undefined8 **)((ulong)uStack_318._4_4_ << 0x20);
              uStack_310 = (undefined8 **)0x0;
              uStack_308 = (undefined8 **)0x0;
              pbStack_300 = (byte *)0x0;
              func_0x0c009aa0(&uStack_258,&uStack_318);
            }
            func_0x078e61e0(&uStack_318);
          }
LAB_0c006bd2:
          if ((char)ppuStack_280 != '\x02') {
            if ((int)plStack_1b8 == 1) {
              uVar12 = func_0x048648e0(uStack_338,&UNK_01239c94);
              cVar5 = func_0x04864220(uVar12);
              uVar13 = 0;
              if (cVar5 == '\0') {
                uVar9 = func_0x04863e00(uVar12,0);
                uVar13 = (ulong)uVar9;
              }
              uVar12 = func_0x048648e0(uStack_338,&UNK_011c910a);
              cVar5 = func_0x04865410(uVar12);
              uVar6 = 1;
              if (cVar5 != '\0') {
                uVar6 = func_0x04863ff0(uVar12,0);
              }
              ppuStack_280 = (undefined8 **)(param_8 + 0xc);
              func_0x0c009e10();
              uVar12 = func_0x048648e0(uStack_338,&UNK_0127cf86);
              cVar5 = func_0x04864220(uVar12);
              if ((cVar5 == '\0') && (cVar5 = func_0x04864270(uVar12), cVar5 != '\0')) {
                func_0x04865530(&puStack_3a0,uVar12);
                uStack_271 = uVar6;
                uStack_f8 = uVar13;
                func_0x048655b0(&ppuStack_3b8,uVar12);
                while (cVar5 = func_0x04862c80(&puStack_3a0,&ppuStack_3b8), cVar5 == '\0') {
                  uVar12 = func_0x04862b80(&puStack_3a0);
                  cVar5 = func_0x04865490(uVar12);
                  if (cVar5 == '\0') goto LAB_0c007ec7;
                  func_0x04160690(&uStack_370,&UNK_01254d89);
                  func_0x04863cb0(&uStack_318,uVar12,&uStack_370);
                  func_0x057d8ed0(ppuStack_280,&uStack_318);
                  if (((ulong)uStack_318 & 1) != 0) {
                    thunk_FUN_0ee326a0(uStack_308,(ulong)uStack_318 & 0xfffffffffffffffe);
                  }
                  if (((ulong)uStack_370 & 1) != 0) {
                    thunk_FUN_0ee326a0(lStack_360,(ulong)uStack_370 & 0xfffffffffffffffe);
                  }
                  func_0x04862ba0(&puStack_3a0);
                }
                func_0x04862b40(&ppuStack_3b8);
                func_0x04862b40(&puStack_3a0);
                uVar12 = func_0x048648e0(uStack_338,&UNK_013aac9a);
                cVar5 = func_0x04864220(uVar12);
                if (cVar5 == '\0') {
                  plStack_1b8 = param_8 + 3;
                  func_0x0c0099e0();
                  uStack_338 = uVar12;
                  func_0x04865530(&puStack_3a0,uVar12);
                  do {
                    func_0x048655b0(&uStack_318,uStack_338);
                    cVar5 = func_0x04862c80(&puStack_3a0,&uStack_318);
                    func_0x04862b40(&uStack_318);
                    if (cVar5 != '\0') {
                      if (puVar24 == (undefined *)0x0) {
                        if (((ulong)*ppuStack_388 & 1) == 0) {
                          puStack_138 = ppuStack_388[2];
                          uStack_148 = *(uint *)ppuStack_388;
                          uStack_144 = *(undefined4 *)((long)ppuStack_388 + 4);
                          uStack_140 = *(undefined4 *)(ppuStack_388 + 1);
                          uStack_13c = *(undefined4 *)((long)ppuStack_388 + 0xc);
                        }
                        else {
                          FUN_0412e5e0(&uStack_148,ppuStack_388[2],ppuStack_388[1]);
                        }
                        plStack_78 = (long *)0x0;
                        func_0x0c009ea0(ppuStack_378,&uStack_148,plStack_190,ppuStack_280,
                                        plStack_1b8,param_8,uStack_f8,alStack_98,&uStack_258,
                                        uStack_1b0,uStack_271);
                        if (plStack_78 == alStack_98) {
                          lVar19 = 0x20;
LAB_0c008645:
                          (**(code **)(*plStack_78 + lVar19))();
                        }
                        else {
                          lVar19 = 0x28;
                          if (plStack_78 != (long *)0x0) goto LAB_0c008645;
                        }
                        if ((uStack_148 & 1) != 0) {
                          thunk_FUN_0ee326a0(puStack_138,
                                             CONCAT44(uStack_144,uStack_148) & 0xfffffffffffffffe);
                        }
                      }
                      func_0x04862b40(&puStack_3a0);
                      puVar24 = (undefined *)((ulong)puVar24 ^ 1);
                      goto LAB_0c007edb;
                    }
                    lVar19 = func_0x04862ca0(&puStack_3a0);
                    if ((lVar19 == 0) ||
                       (pcVar20 = (char *)func_0x04862ca0(&puStack_3a0), *pcVar20 == '\0')) break;
                    puVar21 = (undefined1 *)func_0x04862ca0(&puStack_3a0);
                    uVar6 = *puVar21;
                    uVar12 = func_0x04862b80(&puStack_3a0);
                    func_0x0c001940(&uStack_370,ppuStack_378,uVar12,lStack_320);
                    cVar5 = func_0x0c4ae570(&uStack_370,1);
                    if (cVar5 == '\0') {
                      uStack_318 = ppuStack_380;
                      if (((ulong)*ppuStack_388 & 1) != 0) {
                        uStack_318 = (undefined8 **)ppuStack_388[2];
                      }
                      func_0x0b5c37c0(1,3,0x19,&UNK_01386103,&uStack_318);
                    }
                    else {
                      uStack_318 = (undefined8 **)0x0;
                      uStack_310 = (undefined8 **)0x0;
                      uStack_308 = (undefined8 **)&UNK_0f3773c0;
                      if (ppuStack_368 == (undefined8 **)0x0) {
                        pbStack_300 = (byte *)0x0;
                      }
                      else {
                        (*(code *)**ppuStack_368)(&pbStack_300);
                      }
                      uStack_2f8 = CONCAT62(uStack_2f8._2_6_,(short)lStack_360);
                      uStack_308 = (undefined8 **)&UNK_0f0d6548;
                      uStack_2f0 = uVar6;
                      func_0x0c009a40(plStack_1b8,&uStack_318);
                      pbVar30 = pbStack_300;
                      uStack_308 = (undefined8 **)&UNK_0f3773c0;
                      pbStack_300 = (byte *)0x0;
                      if (pbVar30 != (byte *)0x0) {
                        (**(code **)(*(long *)pbVar30 + 0x90))();
                      }
                      func_0x0c009e60(auStack_f0,&puStack_3a0);
                      func_0x04862b40(auStack_f0);
                    }
                    ppuVar32 = ppuStack_368;
                    uStack_370 = (undefined8 *)&UNK_0f3773c0;
                    ppuStack_368 = (undefined8 **)0x0;
                    if (ppuVar32 != (undefined8 **)0x0) {
                      (*(code *)(*ppuVar32)[0x12])();
                    }
                  } while (cVar5 != '\0');
                  goto LAB_0c007ecf;
                }
              }
            }
            goto LAB_0c007ed9;
          }
          plVar22 = param_8 + 3;
          func_0x0c0099e0(plVar22);
          uVar12 = func_0x048648e0(uStack_338,&UNK_01239c94);
          cVar5 = func_0x04864220(uVar12);
          ppuStack_280 = (undefined8 **)((ulong)ppuStack_280 & 0xffffffff00000000);
          if (cVar5 == '\0') {
            uVar10 = func_0x04863e00(uVar12,0);
            ppuStack_280 = (undefined8 **)CONCAT44(ppuStack_280._4_4_,uVar10);
          }
          uVar12 = func_0x048648e0(uStack_338,&UNK_011fdc87);
          cVar5 = func_0x04864270(uVar12);
          if (cVar5 == '\0') goto LAB_0c007ed9;
          func_0x04865530(&puStack_3a0,uVar12);
          func_0x048655b0(&ppuStack_3b8,uVar12);
          while( true ) {
            cVar5 = func_0x04862c80(&puStack_3a0,&ppuStack_3b8);
            if (cVar5 != '\0') break;
            uVar12 = func_0x04862b80(&puStack_3a0);
            ppuStack_350 = (undefined8 **)0x0;
            func_0x0c001aa0(&uStack_370,ppuStack_378,uVar12,(int)*(short *)(lStack_320 + 0x1c),1,1);
            if (ppuStack_368 == (undefined8 **)0x0) {
LAB_0c00702f:
              func_0x0714efb0(1,3,0x19,&UNK_011e216b);
              bVar33 = false;
            }
            else {
              cVar5 = (*(code *)(*ppuStack_368)[0xf])();
              if (cVar5 != '\0') {
                (*(code *)(*ppuStack_368)[0x10])(&uStack_318);
                ppuVar1 = uStack_318;
                ppuVar32 = ppuStack_368;
                uStack_318 = (undefined8 **)0x0;
                ppuStack_368 = ppuVar1;
                if (ppuVar32 != (undefined8 **)0x0) {
                  (*(code *)(*ppuVar32)[0x12])();
                  ppuVar32 = uStack_318;
                  uStack_318 = (undefined8 **)0x0;
                  if (ppuVar32 != (undefined8 **)0x0) {
                    (*(code *)(*ppuVar32)[0x12])();
                  }
                }
              }
              if (ppuStack_368 == (undefined8 **)0x0) goto LAB_0c00702f;
              sVar8 = (short)lStack_360;
              iVar28 = (int)(short)lStack_360;
              lStack_360 = CONCAT62(lStack_360._2_6_,1);
              bVar33 = true;
              if (0 < sVar8) {
                do {
                  uStack_318 = (undefined8 **)0x0;
                  uStack_310 = (undefined8 **)0x0;
                  uStack_308 = (undefined8 **)&UNK_0f3773c0;
                  if (ppuStack_368 == (undefined8 **)0x0) {
                    pbStack_300 = (byte *)0x0;
                  }
                  else {
                    (*(code *)**ppuStack_368)(&pbStack_300);
                  }
                  pbVar30 = pbStack_300;
                  uStack_2f8 = CONCAT62(uStack_2f8._2_6_,(short)lStack_360);
                  uStack_308 = (undefined8 **)&UNK_0f0d6548;
                  uStack_2f0 = 0;
                  puVar16 = (undefined4 *)param_8[4];
                  if (puVar16 < (undefined4 *)param_8[5]) {
                    *puVar16 = (undefined4)uStack_318;
                    puVar16[1] = uStack_318._4_4_;
                    puVar16[2] = (undefined4)uStack_310;
                    puVar16[3] = uStack_310._4_4_;
                    pbStack_300 = (byte *)0x0;
                    *(byte **)(puVar16 + 6) = pbVar30;
                    *(short *)(puVar16 + 8) = (short)lStack_360;
                    *(undefined **)(puVar16 + 4) = &UNK_0f0d6548;
                    *(undefined1 *)(puVar16 + 10) = 0;
                    puVar16 = puVar16 + 0xc;
                  }
                  else {
                    puVar16 = (undefined4 *)func_0x0c026580(plVar22,&uStack_318);
                  }
                  pbVar30 = pbStack_300;
                  param_8[4] = (long)puVar16;
                  uStack_308 = (undefined8 **)&UNK_0f3773c0;
                  pbStack_300 = (byte *)0x0;
                  if (pbVar30 != (byte *)0x0) {
                    (**(code **)(*(long *)pbVar30 + 0x90))();
                  }
                  iVar28 = iVar28 + -1;
                } while (iVar28 != 0);
              }
            }
            ppuVar32 = ppuStack_368;
            uStack_370 = (undefined8 *)&UNK_0f3773c0;
            ppuStack_368 = (undefined8 **)0x0;
            if (ppuVar32 != (undefined8 **)0x0) {
              (*(code *)(*ppuVar32)[0x12])();
            }
            if (!bVar33) goto LAB_0c007ec7;
            func_0x04862ba0(&puStack_3a0);
          }
          func_0x04862b40(&ppuStack_3b8);
          func_0x04862b40(&puStack_3a0);
          if (0x80 < (ulong)(param_8[10] - param_8[9])) {
            func_0x05896f50(1,3,0x19,&UNK_011c911a);
          }
          if (puVar24 != (undefined *)0x0) goto LAB_0c007ed9;
          if (((ulong)*ppuStack_388 & 1) == 0) {
            puStack_158 = ppuStack_388[2];
            uStack_168 = *(uint *)ppuStack_388;
            uStack_164 = *(undefined4 *)((long)ppuStack_388 + 4);
            uStack_160 = *(undefined4 *)(ppuStack_388 + 1);
            uStack_15c = *(undefined4 *)((long)ppuStack_388 + 0xc);
          }
          else {
            FUN_0412e5e0(&uStack_168,ppuStack_388[2],ppuStack_388[1]);
          }
          plStack_a8 = (long *)0x0;
          func_0x0bffef00(ppuStack_378,&uStack_168,param_8[9],plVar22,param_8,
                          (ulong)ppuStack_280 & 0xffffffff,alStack_c8,&uStack_258,uStack_1b0);
          if (plStack_a8 == alStack_c8) {
            lVar19 = 0x20;
LAB_0c00811f:
            (**(code **)(*plStack_a8 + lVar19))();
          }
          else {
            lVar19 = 0x28;
            if (plStack_a8 != (long *)0x0) goto LAB_0c00811f;
          }
          puVar24 = (undefined *)0x1;
          if ((uStack_168 & 1) != 0) {
            thunk_FUN_0ee326a0(puStack_158,CONCAT44(uStack_164,uStack_168) & 0xfffffffffffffffe);
          }
        }
LAB_0c007edb:
        func_0x0c009b30(&uStack_258);
        goto LAB_0c0041c3;
      }
      func_0x0a0046e0(1,3,0x19,&UNK_0124df72);
    }
    goto LAB_0c0041c1;
  }
  if (ppuVar32 != (undefined8 **)0x0) {
LAB_0c006aa6:
    (*(code *)(*ppuVar32)[0x12])();
  }
LAB_0c0041c3:
  func_0x0eeb81b0(auStack_e0);
  return (ulong)puVar24 & 0xffffff01;
LAB_0c007ec7:
  func_0x04862b40(&ppuStack_3b8);
LAB_0c007ecf:
  func_0x04862b40(&puStack_3a0);
  goto LAB_0c007ed9;
}


