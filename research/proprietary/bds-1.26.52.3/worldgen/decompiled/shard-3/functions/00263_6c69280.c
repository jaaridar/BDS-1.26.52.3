/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d69280 (ELF vaddr 0x6c69280)
 * Label: caller-of-callee
 * Body:  [[06d69280, 06d694fe] [06d69500, 06d69755] [06d69760, 06d69e61] [06d69e70, 06d69f26] [06d69f30, 06d6a169] [06d6a170, 06d6a3ec] [06d6a3f0, 06d6a42a] [06d6a430, 06d6a43b] [06d6a440, 06d6a47a] [06d6a480, 06d6a4a1] [06d6a4b0, 06d6a5a1] [06d6a5b0, 06d6a5d6] [06d6a5e0, 06d6a61e] [06d6a620, 06d6a62b] [06d6a630, 06d6a66a] [06d6a670, 06d6a690] [06d6a6a0, 06d6a7a5] [06d6a7b0, 06d6a9ae] [06d6a9b0, 06d6ac4a] [06d6ac50, 06d6b01e] [06d6b020, 06d6b0e8] [06d6b0f0, 06d6b249] [06d6b250, 06d6b363] [06d6b370, 06d6b3c9] [06d6b3d0, 06d6b405] [06d6b410, 06d6b521] [06d6bbce, 06d6bc58]]
 * Ghidra: FUN_06d69280
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_06d69280(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  byte bVar20;
  long *plVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  ulong *puVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  float fVar33;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined4 uStack_39f;
  undefined1 uStack_39b;
  undefined2 uStack_39a;
  undefined8 uStack_398;
  uint uStack_38c;
  byte bStack_388;
  undefined1 uStack_387;
  undefined1 uStack_386;
  undefined1 uStack_385;
  uint uStack_384;
  long *plStack_380;
  undefined1 *puStack_378;
  uint uStack_368;
  undefined1 uStack_364;
  undefined2 uStack_363;
  undefined1 uStack_361;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  byte bStack_348;
  undefined7 uStack_347;
  byte bStack_340;
  undefined4 uStack_33f;
  undefined1 uStack_33b;
  undefined2 uStack_33a;
  byte *pbStack_338;
  undefined8 uStack_328;
  byte *pbStack_320;
  undefined4 *puStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  long lStack_300;
  byte bStack_2f8;
  undefined2 uStack_2f7;
  undefined1 uStack_2f5;
  undefined1 uStack_2f4;
  undefined1 uStack_2f3;
  undefined1 uStack_2f2;
  undefined1 uStack_2f1;
  byte bStack_2f0;
  undefined2 uStack_2ef;
  undefined1 uStack_2ed;
  undefined1 uStack_2ec;
  undefined1 uStack_2eb;
  undefined2 uStack_2ea;
  byte *pbStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  long lStack_200;
  byte bStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined1 uStack_1ef;
  undefined1 uStack_1ee;
  undefined5 uStack_1ed;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  long *plStack_1b8;
  long *plStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined4 *puStack_188;
  ulong uStack_178;
  byte *pbStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined4 *puStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulong uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *puStack_138;
  long *plStack_118;
  long *plStack_108;
  long alStack_e8 [4];
  long *plStack_c8;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  char cStack_80;
  byte *pbStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_200 = param_1;
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  FUN_0412d610(0xf5522b8);
  lVar31 = lStack_200;
  plVar21 = _DAT_0f5523a0;
  pbVar28 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_06d6b502:
    uVar14 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f5a33e8);
    func_0x04863610(auStack_1c8);
    if ((bStack_388 & 1) != 0) {
      func_0x0412a280(puStack_378,
                      CONCAT44(uStack_384,
                               CONCAT13(uStack_385,
                                        CONCAT12(uStack_386,CONCAT11(uStack_387,bStack_388)))) &
                      0xfffffffffffffffe);
    }
    func_0x04886070(&uStack_328);
    func_0x06d68b10(&plStack_1b8);
    func_0x06d68b10(&bStack_348);
    func_0x0412d6b0(lStack_98);
    func_0x04886070(&pbStack_198);
    func_0x06d6bc60(&uStack_88);
    uVar14 = func_0x0eee2d70(uVar14);
    uVar14 = func_0x04882e20(uVar14);
    func_0x04882e20(uVar14);
    pcVar1 = (code *)swi(3);
    uVar26 = (*pcVar1)();
    return uVar26;
  }
  bVar20 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar20 = *pbVar28;
  }
  plVar13 = _DAT_0f5523a8;
  bStack_2f8 = 0xb8;
  uStack_2f7 = 0x5522;
  uStack_2f5 = 0xf;
  uStack_2f4 = 0;
  uStack_2f3 = 0;
  uStack_2f2 = 0;
  uStack_2f1 = 0;
  bStack_2f0 = '\x01';
  pbStack_2e8 = pbVar28;
  plStack_2e0 = plVar21;
  plStack_2d8 = _DAT_0f5523a8;
  if (((bVar20 & 1) == 0) &&
     (cVar11 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar11 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar11 = (**(code **)(*plVar13 + 0x388))(plVar13);
  pbStack_2e8 = (byte *)0x0;
  plStack_2e0 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar13 = plVar21 + 1;
    lVar22 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
      plVar21 = plStack_2e0;
      plStack_2d8 = (long *)0x0;
      if (plStack_2e0 != (long *)0x0) {
        plStack_2d8 = (long *)0x0;
        LOCK();
        plVar13 = plStack_2e0 + 1;
        lVar22 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
          func_0x0412c2d0(plVar21);
        }
      }
    }
    else {
      plStack_2d8 = (long *)0x0;
    }
  }
  if (bStack_2f0 == '\x01') {
    func_0x0eee02f0(CONCAT17(uStack_2f1,
                             CONCAT16(uStack_2f2,
                                      CONCAT15(uStack_2f3,
                                               CONCAT14(uStack_2f4,
                                                        CONCAT13(uStack_2f5,
                                                                 CONCAT21(uStack_2f7,bStack_2f8)))))
                            ));
  }
  if (cVar11 == '\0') {
    uVar26 = 0;
    goto LAB_06d6957d;
  }
  func_0x0412d550(0xf5523f0);
  LOCK();
  _DAT_0f5524c0 = _DAT_0f5524c0 + 1;
  UNLOCK();
  FUN_0412d610(0xf5523f0);
  plVar21 = _DAT_0f5524d8;
  pbVar28 = _DAT_0f5524d0;
  if ((_DAT_0f5524d0 == (byte *)0x0) || (*_DAT_0f5524d0 != 1)) {
    uStack_88 = 0;
    cStack_80 = '\0';
    func_0x0eee02f0(0xf5523f0);
    uVar26 = 0;
  }
  else {
    uStack_38c = 1;
    if (_DAT_0f5524d8 != (long *)0x0) {
      LOCK();
      _DAT_0f5524d8[1] = _DAT_0f5524d8[1] + 1;
      UNLOCK();
      uStack_38c = (uint)*pbVar28;
    }
    uStack_88 = 0xf5523f0;
    cStack_80 = '\x01';
    pbStack_78 = pbVar28;
    plStack_70 = plVar21;
    plStack_68 = _DAT_0f5524e0;
    if ((uStack_38c & 1) == 0) goto LAB_06d6b45b;
    pbStack_198 = (byte *)0x0;
    pbStack_190 = (byte *)0x0;
    puStack_188 = (undefined4 *)0x0;
    lStack_98 = lVar31 + 0x248;
    plVar21 = _DAT_0f5524e0;
    func_0x0412d680();
    bStack_348 = 0;
    uStack_347 = 0;
    bStack_340 = 0;
    uStack_33f = 0;
    uStack_33b = 0;
    uStack_33a = 0;
    pbStack_338 = (byte *)0x0;
    lVar22 = *(long *)(lVar31 + 0x280);
    lVar31 = *(long *)(lVar31 + 0x288);
    pbVar28 = (byte *)0x0;
    if (lVar22 != lVar31) {
      do {
        if (pbVar28 < pbStack_338) {
          func_0x06d10dc0(pbVar28,lVar22);
          pbVar28 = pbVar28 + 0x100;
        }
        else {
          pbVar28 = (byte *)func_0x06d792f0(&bStack_348,lVar22);
        }
        bStack_340 = (byte)pbVar28;
        uStack_33f = (undefined4)((ulong)pbVar28 >> 8);
        uStack_33b = (undefined1)((ulong)pbVar28 >> 0x28);
        uStack_33a = (undefined2)((ulong)pbVar28 >> 0x30);
        lVar22 = lVar22 + 0x100;
      } while (lVar22 != lVar31);
      lVar22 = *(long *)(lStack_200 + 0x280);
      lVar31 = *(long *)(lStack_200 + 0x288);
    }
    if (lVar22 != lVar31) {
      do {
        lVar31 = lVar31 + -0x100;
        func_0x06d0d580(lVar31);
      } while (lVar31 != lVar22);
      pbVar28 = (byte *)CONCAT26(uStack_33a,CONCAT15(uStack_33b,CONCAT41(uStack_33f,bStack_340)));
    }
    *(long *)(lStack_200 + 0x288) = lVar22;
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    pbStack_1a8 = (byte *)0x0;
    puVar15 = (undefined8 *)CONCAT71(uStack_347,bStack_348);
    pbVar23 = pbVar28 + -(long)puVar15;
    if (pbVar23 != (byte *)0x0) {
      if (-1 < (long)pbVar23) {
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pbVar23);
        if (plVar13 == (long *)0x0) goto LAB_06d6b4ee;
        do {
          pbStack_1a8 = pbVar23 + (long)plVar13;
          lVar31 = 0;
          plStack_1b8 = plVar13;
          plStack_1b0 = plVar13;
          do {
            lVar22 = lVar31;
            func_0x06d10dc0(lVar22 + (long)plVar13,(long)puVar15 + lVar22);
            lVar31 = lVar22 + 0x100;
          } while ((byte *)((long)puVar15 + lVar22 + 0x100) != pbVar28);
          plStack_1b0 = (long *)(lVar22 + 0x100 + (long)plVar13);
          uStack_328 = (byte *)0x0;
          pbStack_320 = (byte *)0x0;
          puStack_318 = (undefined4 *)0x0;
          bStack_388 = 0;
          uStack_387 = 0;
          lStack_40 = lStack_200 + 0x2d8;
          lStack_38 = lStack_200 + 0x2c0;
          lStack_48 = lStack_200 + 0x2f0;
          lStack_50 = lStack_200 + 0x308;
          lStack_60 = lStack_200 + 800;
          plStack_58 = (long *)((long)plVar13 + lVar22);
          uStack_178 = 0;
          lVar31 = lStack_200;
LAB_06d69786:
          func_0x04863060(auStack_1c8,0);
          lStack_a8 = plVar13[6];
          uStack_3a8._0_4_ = 0x2d592518;
          uStack_3a8._4_4_ = 0x252d6d25;
          uStack_3a0 = 100;
          uStack_39f = 0x5a542554;
          uStack_39b = 0;
          uStack_368 = uStack_368 & 0xffffff00;
          uStack_360 = uStack_360 & 0xffffff00;
          bStack_2f8 = 0;
          uStack_2f7 = 0;
          uStack_2f5 = 0;
          uStack_2f4 = 0;
          uStack_2f3 = 0;
          uStack_2f2 = 0;
          uStack_2f1 = 0;
          bStack_2f0 = 0;
          uStack_2ef = 0;
          uStack_2ed = 0;
          pbStack_2e8 = (byte *)0x0;
          uStack_2d0 = 0;
          uStack_2c8 = 0;
          uStack_2ec = 1;
          uStack_2eb = 0;
          uStack_2ea = 0;
          plStack_2e0 = (long *)0x1;
          plStack_2d8 = (long *)0xffffffff;
          puVar29 = (ulong *)&bStack_2f8;
          lVar22 = func_0x0eee3bc0(&lStack_a8,puVar29);
          if (lVar22 == 0) {
            puVar29 = (ulong *)&UNK_01e7a0d0;
          }
          uStack_168 = *puVar29;
          uStack_160 = puVar29[1];
          puStack_158 = (undefined4 *)puVar29[2];
          uStack_150 = (int)puVar29[3];
          uStack_14c = *(undefined4 *)((long)puVar29 + 0x1c);
          uStack_148 = puVar29[4];
          uStack_140 = (int)puVar29[5];
          uStack_13c = *(undefined4 *)((long)puVar29 + 0x2c);
          puStack_138 = (undefined8 *)puVar29[6];
          func_0x0ee161c0(&bStack_1f8,&uStack_168,&uStack_3a8,&uStack_368);
          if ((char)uStack_360 == '\x01') {
            func_0x04167a40(&uStack_368);
          }
          if (((uint)uStack_3a8 & 1) != 0) {
            func_0x0412a280(uStack_398,
                            CONCAT44(uStack_3a8._4_4_,(uint)uStack_3a8) & 0xfffffffffffffffe);
          }
          bStack_2f8 = 6;
          uStack_2f5 = 0x72;
          uStack_2f7 = 0x6576;
          uStack_2f4 = 0;
          uStack_168 = CONCAT35(uStack_168._5_3_,0x302e3406);
          func_0x048631d0(&uStack_3a8,&uStack_168);
          uVar14 = func_0x04864970(auStack_1c8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_3a8);
          func_0x04863610(&uStack_3a8);
          if ((uStack_168 & 1) != 0) {
            func_0x0412a280(puStack_158,uStack_168 & 0xfffffffffffffffe);
          }
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 8;
          uStack_2f7 = 0x6974;
          uStack_2f5 = 0x6d;
          uStack_2f4 = 0x65;
          uStack_2f3 = 0;
          func_0x048631d0(&uStack_168,&bStack_1f8);
          uVar14 = func_0x04864970(auStack_1c8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 8;
          uStack_2f7 = 0x616e;
          uStack_2f5 = 0x6d;
          uStack_2f4 = 0x65;
          uStack_2f3 = 0;
          uStack_368 = _DAT_017f4618;
          uStack_364 = (undefined1)_UNK_017f461c;
          uStack_363 = (undefined2)((uint)_UNK_017f461c >> 8);
          uStack_361 = (undefined1)((uint)_UNK_017f461c >> 0x18);
          uStack_360 = _UNK_017f4620;
          uStack_35c = _UNK_017f4624;
          uStack_358 = 0x646f;
          puVar15 = (undefined8 *)func_0x0412f8c0(&uStack_368,&UNK_01254f0f,1);
          uStack_398 = puVar15[2];
          uVar14 = puVar15[1];
          uStack_3a8._0_4_ = (uint)*puVar15;
          uStack_3a8._4_4_ = (undefined4)((ulong)*puVar15 >> 0x20);
          uStack_3a0 = (undefined1)uVar14;
          uStack_39f = (undefined4)((ulong)uVar14 >> 8);
          uStack_39b = (undefined1)((ulong)uVar14 >> 0x28);
          uStack_39a = (undefined2)((ulong)uVar14 >> 0x30);
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          bVar32 = (*(byte *)(plVar13 + 1) & 1) != 0;
          lVar22 = (long)plVar13 + 9;
          if (bVar32) {
            lVar22 = plVar13[3];
          }
          uVar26 = (ulong)(*(byte *)(plVar13 + 1) >> 1);
          if (bVar32) {
            uVar26 = plVar13[2];
          }
          puVar29 = (ulong *)func_0x0412f8c0(&uStack_3a8,lVar22,uVar26);
          puStack_158 = (undefined4 *)puVar29[2];
          uStack_168 = *puVar29;
          uStack_160 = puVar29[1];
          *puVar29 = 0;
          puVar29[1] = 0;
          puVar29[2] = 0;
          if ((bStack_2f8 & 1) == 0) {
            if (bStack_2f8 >> 1 != 0) goto LAB_06d69e7b;
          }
          else if (CONCAT26(uStack_2ea,
                            CONCAT15(uStack_2eb,
                                     CONCAT14(uStack_2ec,
                                              CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,bStack_2f0))))
                           ) != 0) {
LAB_06d69e7b:
            func_0x048631d0(&lStack_a8,&uStack_168);
            uVar14 = func_0x04864970(auStack_1c8,&bStack_2f8);
            func_0x04863790(uVar14,&lStack_a8);
            func_0x04863610(&lStack_a8);
          }
          if ((uStack_168 & 1) != 0) {
            func_0x0412a280(puStack_158,uStack_168 & 0xfffffffffffffffe);
          }
          if (((uint)uStack_3a8 & 1) != 0) {
            func_0x0412a280(uStack_398,
                            CONCAT44(uStack_3a8._4_4_,(uint)uStack_3a8) & 0xfffffffffffffffe);
          }
          if ((uStack_368 & 1) != 0) {
            func_0x0412a280(uStack_358,
                            CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368))
                                    ) & 0xfffffffffffffffe);
          }
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 8;
          uStack_2f7 = 0x4b69;
          uStack_2f5 = 0x65;
          uStack_2f4 = 0x79;
          uStack_2f3 = 0;
          func_0x048631d0(&uStack_168,0xf5a2fd0);
          uVar14 = func_0x04864970(auStack_1c8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          if ((bStack_1f8 & 1) != 0) {
            func_0x0412a280(uStack_1e8,CONCAT71(uStack_1f7,bStack_1f8) & 0xfffffffffffffffe);
          }
          func_0x04863060(&uStack_368,0);
          func_0x04863060(&uStack_3a8,0);
          lVar22 = lStack_38;
          bStack_2f8 = 6;
          uStack_2f5 = 0x76;
          uStack_2f7 = 0x6e65;
          uStack_2f4 = 0;
          uStack_168 = 0x6873696c6275500e;
          uStack_160 = uStack_160 & 0xffffffffffffff00;
          func_0x048631d0(&bStack_1f8,&uStack_168);
          uVar14 = func_0x04864970(&uStack_3a8,&bStack_2f8);
          func_0x04863790(uVar14,&bStack_1f8);
          func_0x04863610(&bStack_1f8);
          if ((uStack_168 & 1) != 0) {
            func_0x0412a280(puStack_158,uStack_168 & 0xfffffffffffffffe);
          }
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 4;
          uStack_2f7 = 0x6469;
          uStack_2f5 = 0;
          func_0x048631d0(&uStack_168,lStack_40);
          uVar14 = func_0x04864970(&uStack_3a8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 0xc;
          uStack_2f3 = 0x6c;
          uStack_2f2 = 0x65;
          uStack_2f7 = 0x6f6c;
          uStack_2f5 = 99;
          uStack_2f4 = 0x61;
          uStack_2f1 = 0;
          func_0x048631d0(&uStack_168,lVar22);
          uVar14 = func_0x04864970(&uStack_3a8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 8;
          uStack_2f7 = 0x616e;
          uStack_2f5 = 0x6d;
          uStack_2f4 = 0x65;
          uStack_2f3 = 0;
          puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar16 == (undefined4 *)0x0) {
            FUN_0eec74c0(0x20,0);
          }
          uVar14 = _UNK_012269c5;
          uStack_168 = 0x21;
          uStack_160 = 0x1f;
          *(ulong *)((long)puVar16 + 0xf) = CONCAT71(_UNK_012269be,DAT_012269bd);
          *(undefined8 *)((long)puVar16 + 0x17) = uVar14;
          uVar4 = _UNK_012269ba;
          uVar3 = _UNK_012269b6;
          uVar2 = _UNK_012269b2;
          *puVar16 = _DAT_012269ae;
          puVar16[1] = uVar2;
          puVar16[2] = uVar3;
          puVar16[3] = uVar4;
          *(undefined1 *)((long)puVar16 + 0x1f) = 0;
          puStack_158 = puVar16;
          if ((bStack_2f8 & 1) == 0) {
            if (bStack_2f8 >> 1 == 0) goto LAB_06d69f3b;
LAB_06d69e08:
            func_0x048631d0(&bStack_1f8,&uStack_168);
            uVar14 = func_0x04864970(&uStack_3a8,&bStack_2f8);
            func_0x04863790(uVar14,&bStack_1f8);
            func_0x04863610(&bStack_1f8);
            if ((uStack_168 & 1) != 0) {
              uVar26 = uStack_168 & 0xfffffffffffffffe;
              goto LAB_06d69f40;
            }
          }
          else {
            if (CONCAT26(uStack_2ea,
                         CONCAT15(uStack_2eb,
                                  CONCAT14(uStack_2ec,
                                           CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,bStack_2f0)))))
                != 0) goto LAB_06d69e08;
LAB_06d69f3b:
            uVar26 = 0x20;
LAB_06d69f40:
            func_0x0412a280(puStack_158,uVar26);
          }
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 6;
          uStack_2f5 = 0x72;
          uStack_2f7 = 0x6576;
          uStack_2f4 = 0;
          func_0x048631d0(&uStack_168,lStack_48);
          uVar14 = func_0x04864970(&uStack_3a8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 6;
          uStack_2f5 = 0x70;
          uStack_2f7 = 0x7061;
          uStack_2f4 = 0;
          uVar14 = func_0x04864970(&uStack_368,&bStack_2f8);
          func_0x04863740(uVar14,&uStack_3a8);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          func_0x04863610(&uStack_3a8);
          func_0x04863060(&bStack_1f8,0);
          bStack_2f8 = 0xc;
          uStack_2f3 = 0x6c;
          uStack_2f2 = 0x65;
          uStack_2f7 = 0x6f6c;
          uStack_2f5 = 99;
          uStack_2f4 = 0x61;
          uStack_2f1 = 0;
          func_0x048631d0(&uStack_168,lVar22);
          uVar14 = func_0x04864970(&bStack_1f8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 8;
          uStack_2f7 = 0x616e;
          uStack_2f5 = 0x6d;
          uStack_2f4 = 0x65;
          uStack_2f3 = 0;
          func_0x048631d0(&uStack_168,lStack_50);
          uVar14 = func_0x04864970(&bStack_1f8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          if ((*(byte *)(lVar31 + 800) & 1) == 0) {
            if (*(byte *)(lVar31 + 800) >> 1 != 0) goto LAB_06d6a177;
          }
          else if (*(long *)(lVar31 + 0x328) != 0) {
LAB_06d6a177:
            bStack_2f8 = 6;
            uStack_2f5 = 0x72;
            uStack_2f7 = 0x6576;
            uStack_2f4 = 0;
            func_0x048631d0(&uStack_168,lStack_60);
            uVar14 = func_0x04864970(&bStack_1f8,&bStack_2f8);
            func_0x04863790(uVar14,&uStack_168);
            func_0x04863610(&uStack_168);
            if ((bStack_2f8 & 1) != 0) {
              func_0x0412a280(pbStack_2e8,
                              CONCAT17(uStack_2f1,
                                       CONCAT16(uStack_2f2,
                                                CONCAT15(uStack_2f3,
                                                         CONCAT14(uStack_2f4,
                                                                  CONCAT13(uStack_2f5,
                                                                           CONCAT21(uStack_2f7,
                                                                                    bStack_2f8))))))
                              & 0xfffffffffffffffe);
            }
          }
          bStack_2f8 = 4;
          uStack_2f7 = 0x736f;
          uStack_2f5 = 0;
          uVar14 = func_0x04864970(&uStack_368,&bStack_2f8);
          func_0x04863740(uVar14,&bStack_1f8);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          func_0x04863610(&bStack_1f8);
          func_0x04863060(&bStack_1f8,0);
          bStack_2f8 = 0x14;
          uStack_2f7 = 0x7665;
          uStack_2f5 = 0x65;
          uStack_2f4 = 0x6e;
          uStack_2f3 = 0x74;
          uStack_2f2 = 0x46;
          uStack_2f1 = 0x6c;
          bStack_2f0 = 'a';
          uStack_2ef = 0x7367;
          uStack_2ed = 0;
          func_0x04863100(&uStack_168,0x200000);
          uVar14 = func_0x04864970(&bStack_1f8,&bStack_2f8);
          func_0x04863790(uVar14,&uStack_168);
          func_0x04863610(&uStack_168);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          bStack_2f8 = 6;
          uStack_2f5 = 99;
          uStack_2f7 = 0x7475;
          uStack_2f4 = 0;
          uVar14 = func_0x04864970(&uStack_368,&bStack_2f8);
          func_0x04863740(uVar14,&bStack_1f8);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          func_0x04863610(&bStack_1f8);
          bStack_2f8 = 6;
          uStack_2f5 = 0x74;
          uStack_2f7 = 0x7865;
          uStack_2f4 = 0;
          uVar14 = func_0x04864970(auStack_1c8,&bStack_2f8);
          func_0x04863740(uVar14,&uStack_368);
          if ((bStack_2f8 & 1) != 0) {
            func_0x0412a280(pbStack_2e8,
                            CONCAT17(uStack_2f1,
                                     CONCAT16(uStack_2f2,
                                              CONCAT15(uStack_2f3,
                                                       CONCAT14(uStack_2f4,
                                                                CONCAT13(uStack_2f5,
                                                                         CONCAT21(uStack_2f7,
                                                                                  bStack_2f8)))))) &
                            0xfffffffffffffffe);
          }
          func_0x04863610(&uStack_368);
          if ((DAT_0f5a33e8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f5a33e8), iVar12 != 0)) {
            bStack_2f8 = 0xfe;
            uStack_2f7 = 0x30de;
            uStack_2f5 = 1;
            uStack_2f4 = 0;
            uStack_2f3 = 0;
            uStack_2f2 = 0;
            uStack_2f1 = 0;
            func_0x06d6bd00(&DAT_0f5a33d0,&bStack_2f8,1);
            func_0x0eee2f40(&UNK_06d6bdc0,&DAT_0f5a33d0,0xf53dab8);
            func_0x0410844d(&DAT_0f5a33e8);
          }
          func_0x04863060(&uStack_168,0);
          func_0x04863060(&bStack_1f8,0);
          puVar15 = (undefined8 *)plVar13[0x10];
          plStack_90 = plVar13;
          while( true ) {
            plVar21 = _DAT_0f5a33d8;
            if (puVar15 == (undefined8 *)0x0) goto LAB_06d6a4b0;
            plVar13 = _DAT_0f5a33d0;
            if (_DAT_0f5a33d0 != _DAT_0f5a33d8) break;
LAB_06d6a3f0:
            if (plVar13 == plVar21) {
LAB_06d6a480:
              uVar14 = func_0x04864970(&bStack_1f8,puVar15 + 5);
              func_0x04863740(uVar14);
            }
            puVar15 = (undefined8 *)*puVar15;
          }
          if ((*(byte *)(puVar15 + 5) & 1) == 0) {
            pbVar23 = (byte *)((long)puVar15 + 0x29);
            uVar26 = (ulong)(*(byte *)(puVar15 + 5) >> 1);
          }
          else {
            pbVar23 = (byte *)puVar15[7];
            uVar26 = puVar15[6];
          }
LAB_06d6a449:
          pbVar28 = (byte *)*plVar13;
          uVar17 = strlen(pbVar28);
          if (uVar17 != uVar26) {
LAB_06d6a440:
            plVar13 = plVar13 + 1;
            if (plVar13 == plVar21) goto LAB_06d6a480;
            goto LAB_06d6a449;
          }
          if (uVar17 != 0xffffffffffffffff) {
            iVar12 = func_0x0eee3000(pbVar23,pbVar28,uVar17);
            if (iVar12 == 0) goto LAB_06d6a3f0;
            goto LAB_06d6a440;
          }
          func_0x04882ee0();
LAB_06d6b4e9:
          func_0x04882ee0();
LAB_06d6b4ee:
          FUN_0eec74c0(pbVar23,0);
        } while( true );
      }
      func_0x06d79280();
      goto LAB_06d6b502;
    }
    uStack_328 = (byte *)0x0;
    pbStack_320 = (byte *)0x0;
    puStack_318 = (undefined4 *)0x0;
    bStack_388 = 0;
    uStack_387 = 0;
LAB_06d6aaa4:
    plVar13 = (long *)(ulong)(bStack_388 >> 1);
    if ((bStack_388 & 1) != 0) {
      plVar13 = plVar21;
    }
    if (plVar13 != (long *)0x0) {
      func_0x057d8ed0(&uStack_328,&bStack_388);
      if ((bStack_388 & 1) == 0) {
        bStack_388 = 0;
        puVar19 = &uStack_387;
      }
      else {
        plStack_380 = (long *)0x0;
        puVar19 = puStack_378;
      }
      *puVar19 = 0;
    }
    if ((bStack_388 & 1) != 0) {
      func_0x0412a280(puStack_378,
                      CONCAT44(uStack_384,
                               CONCAT13(uStack_385,
                                        CONCAT12(uStack_386,CONCAT11(uStack_387,bStack_388)))) &
                      0xfffffffffffffffe);
    }
    pbVar23 = pbStack_198;
    pbVar28 = pbStack_190;
    if (pbStack_198 != (byte *)0x0) {
      for (; pbVar23 != pbVar28; pbVar28 = pbVar28 + -0x18) {
        if ((pbVar28[-0x18] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar28 + -8),
                          *(ulong *)(pbVar28 + -0x18) & 0xfffffffffffffffe);
        }
      }
      func_0x0412a280(pbVar23,(long)puStack_188 - (long)pbVar23);
    }
    plVar13 = plStack_1b8;
    puStack_188 = puStack_318;
    pbStack_190 = pbStack_320;
    pbStack_198 = uStack_328;
    uStack_328 = (byte *)0x0;
    pbStack_320 = (byte *)0x0;
    puStack_318 = (undefined4 *)0x0;
    plVar21 = plStack_1b0;
    if (plStack_1b8 != (long *)0x0) {
      while (plVar13 != plVar21) {
        func_0x06d0d580(plVar21 + -0x20);
        plVar21 = plVar21 + -0x20;
      }
      plStack_1b0 = plVar13;
      func_0x0412a280(plStack_1b8,(long)pbStack_1a8 - (long)plStack_1b8);
    }
    uVar5 = uStack_347;
    bVar20 = bStack_348;
    lVar31 = CONCAT71(uStack_347,bStack_348);
    if (lVar31 != 0) {
      lVar22 = CONCAT26(uStack_33a,CONCAT15(uStack_33b,CONCAT41(uStack_33f,bStack_340)));
      if (lVar31 != lVar22) {
        do {
          lVar22 = lVar22 + -0x100;
          func_0x06d0d580(lVar22);
        } while (lVar22 != lVar31);
        lVar31 = CONCAT71(uStack_347,bStack_348);
      }
      bStack_340 = bVar20;
      uStack_33f = (undefined4)uVar5;
      uStack_33b = (undefined1)((uint7)uVar5 >> 0x20);
      uStack_33a = (undefined2)((uint7)uVar5 >> 0x28);
      func_0x0412a280(lVar31,(long)pbStack_338 - lVar31);
    }
    func_0x0412d6b0(lStack_98);
    pbVar28 = pbStack_190;
    if (pbStack_198 == pbStack_190) {
      plVar21 = plStack_70;
      pbVar23 = pbStack_198;
      if (pbStack_198 != (byte *)0x0) goto LAB_06d6b438;
    }
    else {
      pbStack_170 = pbStack_198;
      pbVar27 = pbStack_198;
      do {
        func_0x0d78ad90(&bStack_2f8);
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_218 = 0x3f800000;
        uStack_248 = 1;
        func_0x0d78b7e0(&bStack_2f8,0xf5a2ff0);
        plStack_2e0 = (long *)0x0;
        bStack_1f8 = 0x12;
        uStack_1f7 = 0x2d746e65696c43;
        uStack_1f0 = 0x49;
        uStack_1ef = 100;
        uStack_1ee = 0;
        uStack_3a8._0_4_ = 0x5f4f4e0e;
        uStack_3a8._4_4_ = 0x48545541;
        uStack_3a0 = 0;
        func_0x0d79d640(&uStack_238,&bStack_1f8,&uStack_3a8);
        uStack_363 = 0x7470;
        uStack_368 = 0x6363410c;
        uStack_364 = 0x65;
        uStack_361 = 0;
        bStack_388 = 6;
        uStack_385 = 0x2a;
        uStack_387 = 0x2a;
        uStack_386 = 0x2f;
        uStack_384 = uStack_384 & 0xffffff00;
        func_0x0d79d640(&uStack_238,&uStack_368,&bStack_388);
        uStack_310 = (long *)0x79654b4950410c;
        func_0x0d79d640(&uStack_238,&uStack_310,0xf5a2fb0);
        bStack_348 = 0x18;
        uStack_347 = 0x746e65746e6f43;
        bStack_340 = 0x2d;
        uStack_33f = 0x65707954;
        uStack_33b = 0;
        puVar16 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar16 == (undefined4 *)0x0) {
          FUN_0eec74c0(0x20,0);
        }
        uVar14 = _UNK_0143025d;
        uStack_328 = (byte *)0x21;
        pbStack_320 = (byte *)0x19;
        *(ulong *)((long)puVar16 + 9) = CONCAT17(UNK_0143025c,CONCAT43(_UNK_01430258,_DAT_01430255))
        ;
        *(undefined8 *)((long)puVar16 + 0x11) = uVar14;
        uVar4 = _UNK_01430258;
        uVar3 = _UNK_01430254;
        uVar2 = _UNK_01430250;
        *puVar16 = _DAT_0143024c;
        puVar16[1] = uVar2;
        puVar16[2] = uVar3;
        puVar16[3] = uVar4;
        *(undefined1 *)((long)puVar16 + 0x19) = 0;
        puStack_318 = puVar16;
        func_0x0d79d640(&uStack_238,&bStack_348,&uStack_328);
        lVar31 = func_0x0d78b8f0(&bStack_2f8,pbVar27);
        *(undefined4 *)(lVar31 + 0x40) = *(undefined4 *)(lVar31 + 0xe0);
        func_0x06042fb0(lVar31 + 0x20,*(undefined8 *)(lVar31 + 0xd0),0);
        func_0x0488b090(&uStack_168,lVar31);
        if (((ulong)uStack_328 & 1) != 0) {
          func_0x0412a280(puStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
        }
        if ((bStack_348 & 1) != 0) {
          func_0x0412a280(pbStack_338,CONCAT71(uStack_347,bStack_348) & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_310 & 1) != 0) {
          func_0x0412a280(lStack_300,(ulong)uStack_310 & 0xfffffffffffffffe);
        }
        if ((bStack_388 & 1) != 0) {
          func_0x0412a280(puStack_378,
                          CONCAT44(uStack_384,
                                   CONCAT13(uStack_385,
                                            CONCAT12(uStack_386,CONCAT11(uStack_387,bStack_388)))) &
                          0xfffffffffffffffe);
        }
        if ((uStack_368 & 1) != 0) {
          func_0x0412a280(uStack_358,
                          CONCAT17(uStack_361,CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368)))
                          & 0xfffffffffffffffe);
        }
        if (((uint)uStack_3a8 & 1) != 0) {
          func_0x0412a280(uStack_398,
                          CONCAT44(uStack_3a8._4_4_,(uint)uStack_3a8) & 0xfffffffffffffffe);
        }
        if ((bStack_1f8 & 1) != 0) {
          func_0x0412a280(uStack_1e8,CONCAT71(uStack_1f7,bStack_1f8) & 0xfffffffffffffffe);
        }
        func_0x0488b200(&bStack_2f8);
        func_0x0d78b340(&uStack_328,&uStack_168);
        plStack_380 = (long *)pbStack_320;
        uVar26 = (ulong)uStack_328;
        uStack_384 = uStack_328._4_4_;
        uStack_328 = (byte *)0x0;
        pbStack_320 = (byte *)0x0;
        plVar21 = *(long **)(lStack_200 + 0x270);
        bStack_1f8 = 0x1f;
        uStack_1f7 = 0x1498f;
        uStack_1f0 = 0x77;
        uStack_1ef = 0;
        uStack_1ee = 0;
        uStack_1ed = 0;
        uStack_1e8 = _DAT_0f778528;
        uStack_1e0 = 0xffffffff00000001;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        lStack_a8 = 0;
        plStack_a0 = (long *)0x0;
        bStack_388 = (byte)uVar26;
        uStack_387 = (undefined1)(uVar26 >> 8);
        uStack_386 = (undefined1)(uVar26 >> 0x10);
        uStack_385 = (undefined1)(uVar26 >> 0x18);
        bStack_348 = 0;
        uStack_347 = 0;
        bStack_340 = 0;
        uStack_33f = 0;
        uStack_33b = 0;
        uStack_33a = 0;
        bStack_2f0 = '\0';
        uStack_2ef = 0;
        uStack_2ed = 0;
        uStack_2ec = 0;
        uStack_2eb = 0;
        uStack_2ea = 0;
        bStack_2f8 = 8;
        uStack_2f7 = 0x8a4;
        uStack_2f5 = 0xf;
        uStack_2f4 = 0;
        uStack_2f3 = 0;
        uStack_2f2 = 0;
        uStack_2f1 = 0;
        func_0x048a69b0(&uStack_368,plVar21,&bStack_1f8,&bStack_388,1,&bStack_2f8);
        lVar31 = CONCAT17(uStack_2f1,
                          CONCAT16(uStack_2f2,
                                   CONCAT15(uStack_2f3,
                                            CONCAT14(uStack_2f4,
                                                     CONCAT13(uStack_2f5,
                                                              CONCAT21(uStack_2f7,bStack_2f8))))));
        if (lVar31 != 0) {
          (**(code **)(lVar31 + 8))(&bStack_2f8);
        }
        plVar13 = plStack_380;
        if (plStack_380 != (long *)0x0) {
          LOCK();
          plVar25 = plStack_380 + 1;
          lVar31 = *plVar25;
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plStack_380 + 0x10))(plStack_380);
            func_0x0412c2d0(plVar13);
          }
        }
        uStack_310 = (long *)CONCAT17(uStack_361,
                                      CONCAT25(uStack_363,CONCAT14(uStack_364,uStack_368)));
        plStack_308 = (long *)CONCAT44(uStack_35c,uStack_360);
        if (plStack_308 != (long *)0x0) {
          LOCK();
          plStack_308[1] = plStack_308[1] + 1;
          UNLOCK();
        }
        iVar12 = (int)plVar21[0x10];
        if (iVar12 != 1) {
          if (iVar12 == 3) {
            *(undefined4 *)(uStack_310 + 6) = 0;
          }
          else if (iVar12 == 2) {
            (**(code **)(*uStack_310 + 0x10))();
            goto LAB_06d6b150;
          }
          uStack_3a8._0_4_ = uStack_368;
          uStack_3a8._4_4_ = (undefined4)((ulong)uStack_310 >> 0x20);
          uStack_3a0 = (undefined1)uStack_360;
          uStack_39f = (undefined4)((ulong)plStack_308 >> 8);
          uStack_39b = (undefined1)((uint)uStack_35c >> 8);
          uStack_39a = (undefined2)((uint)uStack_35c >> 0x10);
          if (plStack_308 != (long *)0x0) {
            LOCK();
            plStack_308[1] = plStack_308[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar21 + 0x28))(plVar21,&uStack_3a8,0);
          plVar21 = (long *)CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,uStack_3a0))
                                    );
          if (plVar21 != (long *)0x0) {
            LOCK();
            plVar13 = plVar21 + 1;
            lVar31 = *plVar13;
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              func_0x0412c2d0(plVar21);
            }
          }
        }
LAB_06d6b150:
        plVar21 = plStack_308;
        if (plStack_308 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_308 + 1;
          lVar31 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plStack_308 + 0x10))(plStack_308);
            func_0x0412c2d0(plVar21);
          }
        }
        plVar21 = (long *)CONCAT44(uStack_35c,uStack_360);
        plVar13 = (long *)CONCAT26(uStack_33a,CONCAT15(uStack_33b,CONCAT41(uStack_33f,bStack_340)));
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar25 = plVar13 + 1;
          lVar31 = *plVar25;
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            func_0x0412c2d0(plVar13);
          }
        }
        if (plVar21 != (long *)0x0) {
          LOCK();
          plVar13 = plVar21 + 1;
          lVar31 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            func_0x0412c2d0(plVar21);
          }
        }
        plVar21 = plStack_a0;
        if (plStack_a0 == (long *)0x0) {
LAB_06d6b1fa:
          if (pbStack_320 == (byte *)0x0) goto LAB_06d6b219;
LAB_06d6b207:
          pbVar6 = pbStack_320;
          LOCK();
          pbVar23 = pbStack_320 + 8;
          lVar31 = *(long *)pbVar23;
          *(long *)pbVar23 = *(long *)pbVar23 + -1;
          UNLOCK();
          if (lVar31 != 0) goto LAB_06d6b219;
          (**(code **)(*(long *)pbStack_320 + 0x10))(pbStack_320);
          func_0x0412c2d0(pbVar6);
          if (plStack_c8 == alStack_e8) goto LAB_06d6b296;
LAB_06d6b22e:
          lVar31 = 0x28;
          plVar21 = plStack_108;
          if (plStack_c8 != (long *)0x0) goto LAB_06d6b29b;
        }
        else {
          LOCK();
          plVar13 = plStack_a0 + 1;
          lVar31 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar31 != 0) goto LAB_06d6b1fa;
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          func_0x0412c2d0(plVar21);
          if (pbStack_320 != (byte *)0x0) goto LAB_06d6b207;
LAB_06d6b219:
          if (plStack_c8 != alStack_e8) goto LAB_06d6b22e;
LAB_06d6b296:
          lVar31 = 0x20;
LAB_06d6b29b:
          (**(code **)(*plStack_c8 + lVar31))();
          plVar21 = plStack_108;
        }
        plStack_108 = plVar21;
        if (plVar21 != (long *)0x0) {
          LOCK();
          plVar13 = plVar21 + 1;
          lVar31 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            func_0x0412c2d0(plVar21);
          }
        }
        plVar21 = plStack_118;
        uVar26 = uStack_148;
        puVar15 = puStack_138;
        if (plStack_118 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_118 + 1;
          lVar31 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            func_0x0412c2d0(plVar21);
            uVar26 = uStack_148;
            puVar15 = puStack_138;
          }
        }
        while (puVar15 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)*puVar15;
          uStack_148 = uVar26;
          if ((*(byte *)(puVar15 + 5) & 1) != 0) {
            func_0x0412a280(puVar15[7],puVar15[5] & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar15 + 2) & 1) != 0) {
            func_0x0412a280(puVar15[4],puVar15[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar15,0x40);
          uVar26 = uStack_148;
          puVar15 = puVar18;
        }
        uStack_148 = 0;
        if (uVar26 != 0) {
          func_0x0412a280(uVar26,CONCAT44(uStack_13c,uStack_140) << 3);
        }
        if ((uStack_168 & 1) != 0) {
          func_0x0412a280(puStack_158,uStack_168 & 0xfffffffffffffffe);
        }
        pbVar23 = pbStack_170;
        pbVar27 = pbVar27 + 0x18;
      } while (pbVar27 != pbVar28);
      plVar21 = plStack_70;
      if (pbStack_170 != (byte *)0x0) {
        do {
          if ((pbVar28[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar28 + -8),
                            *(ulong *)(pbVar28 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar28 = pbVar28 + -0x18;
        } while (pbVar28 != pbVar23);
LAB_06d6b438:
        pbStack_190 = pbVar23;
        func_0x0412a280(pbVar23,(long)puStack_188 - (long)pbVar23);
        plVar21 = plStack_70;
      }
    }
LAB_06d6b45b:
    pbStack_78 = (byte *)0x0;
    plStack_70 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      LOCK();
      plVar13 = plVar21 + 1;
      lVar31 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar31 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        func_0x0412c2d0(plVar21);
      }
      plVar21 = plStack_70;
      plStack_68 = (long *)0x0;
      if (plStack_70 != (long *)0x0) {
        LOCK();
        plVar13 = plStack_70 + 1;
        lVar31 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          func_0x0412c2d0(plVar21);
        }
      }
    }
    uVar26 = (ulong)uStack_38c;
  }
  if (cStack_80 == '\x01') {
    func_0x0eee02f0(uStack_88);
  }
LAB_06d6957d:
  return uVar26 & 0xffffffffffffff01;
LAB_06d6a4b0:
  pbVar23 = (byte *)plStack_90[0x13];
  pbStack_170 = (byte *)plStack_90[0x14];
  if (pbVar23 != pbStack_170) {
    do {
      plVar21 = _DAT_0f5a33d8;
      plVar25 = _DAT_0f5a33d0;
      if (_DAT_0f5a33d0 == _DAT_0f5a33d8) {
LAB_06d6a5e0:
        if (plVar25 == plVar21) goto LAB_06d6a670;
      }
      else {
        if ((*pbVar23 & 1) == 0) {
          pbVar28 = pbVar23 + 1;
          puVar15 = (undefined8 *)(ulong)(*pbVar23 >> 1);
        }
        else {
          pbVar28 = *(byte **)(pbVar23 + 0x10);
          puVar15 = *(undefined8 **)(pbVar23 + 8);
        }
        do {
          plVar13 = (long *)*plVar25;
          puVar18 = (undefined8 *)strlen(plVar13);
          if (puVar18 == puVar15) {
            if (puVar18 == (undefined8 *)0xffffffffffffffff) goto LAB_06d6b4e9;
            iVar12 = func_0x0eee3000(pbVar28,plVar13,puVar18);
            if (iVar12 == 0) goto LAB_06d6a5e0;
          }
          plVar25 = plVar25 + 1;
        } while (plVar25 != plVar21);
LAB_06d6a670:
        uVar14 = func_0x04864970(&bStack_1f8,pbVar23);
        func_0x04863740(uVar14,pbVar23 + 0x18);
      }
      pbVar23 = pbVar23 + 0x30;
    } while (pbVar23 != pbStack_170);
  }
  lVar31 = lStack_200;
  *(long *)(lStack_200 + 0x2b0) = *(long *)(lStack_200 + 0x2b0) + 1;
  func_0x04863100(&bStack_2f8);
  uVar14 = func_0x04864680(&bStack_1f8,&UNK_01343b6a);
  plVar25 = plStack_90;
  func_0x04863790(uVar14,&bStack_2f8);
  func_0x04863610(&bStack_2f8);
  func_0x06d6bde0(&bStack_1f8,plVar25 + 8);
  func_0x06d0e320(&bStack_2f8,plVar25);
  func_0x06d6bde0(&bStack_1f8,&bStack_2f8);
  uStack_3a8 = &plStack_2e0;
  func_0x06d71ad0(&uStack_3a8);
  uVar10 = uStack_2f3;
  uVar9 = uStack_2f4;
  uVar8 = uStack_2f5;
  uVar7 = uStack_2f7;
  bVar20 = bStack_2f8;
  lVar22 = CONCAT17(uStack_2f1,
                    CONCAT16(uStack_2f2,
                             CONCAT15(uStack_2f3,
                                      CONCAT14(uStack_2f4,
                                               CONCAT13(uStack_2f5,CONCAT21(uStack_2f7,bStack_2f8)))
                                     )));
  if (lVar22 != 0) {
    lVar30 = CONCAT26(uStack_2ea,
                      CONCAT15(uStack_2eb,
                               CONCAT14(uStack_2ec,
                                        CONCAT13(uStack_2ed,CONCAT21(uStack_2ef,bStack_2f0)))));
    lVar24 = lVar22;
    if (lVar22 != lVar30) {
      do {
        if ((*(byte *)(lVar30 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar30 + -8),
                          *(ulong *)(lVar30 + -0x18) & 0xfffffffffffffffe);
        }
        lVar30 = lVar30 + -0x18;
      } while (lVar30 != lVar22);
      lVar24 = CONCAT17(uStack_2f1,
                        CONCAT16(uStack_2f2,
                                 CONCAT15(uStack_2f3,
                                          CONCAT14(uStack_2f4,
                                                   CONCAT13(uStack_2f5,
                                                            CONCAT21(uStack_2f7,bStack_2f8))))));
    }
    bStack_2f0 = bVar20;
    uStack_2ef = uVar7;
    uStack_2ed = uVar8;
    uStack_2ec = uVar9;
    uStack_2eb = uVar10;
    uStack_2ea = (undefined2)((ulong)lVar22 >> 0x30);
    func_0x0412a280(lVar24,(long)pbStack_2e8 - lVar24);
  }
  bStack_2f8 = 0x14;
  uStack_2f7 = 0x7250;
  uStack_2f5 = 0x6f;
  uStack_2f4 = 0x70;
  uStack_2f3 = 0x65;
  uStack_2f2 = 0x72;
  uStack_2f1 = 0x74;
  bStack_2f0 = 'i';
  uStack_2ef = 0x7365;
  uStack_2ed = 0;
  uVar14 = func_0x04864970(&uStack_168,&bStack_2f8);
  func_0x04863740(uVar14,&bStack_1f8);
  if ((bStack_2f8 & 1) != 0) {
    func_0x0412a280(pbStack_2e8,
                    CONCAT17(uStack_2f1,
                             CONCAT16(uStack_2f2,
                                      CONCAT15(uStack_2f3,
                                               CONCAT14(uStack_2f4,
                                                        CONCAT13(uStack_2f5,
                                                                 CONCAT21(uStack_2f7,bStack_2f8)))))
                            ) & 0xfffffffffffffffe);
  }
  if (plVar25[0x17] != plVar25[0x16]) {
    func_0x04863060(&uStack_3a8,0);
    lVar22 = plVar25[0x17];
    if (plVar25[0x16] != lVar22) {
      lVar30 = plVar25[0x16] + 0x18;
      do {
        if (*(int *)(lVar30 + 0x14) == 4) {
          if (*(int *)(lVar30 + 0x10) == 0) {
            func_0x048630e0(&bStack_2f8,0);
          }
          else {
            fVar33 = (float)func_0x04863f80(0,lVar30);
            func_0x04863110(SUB84((double)(fVar33 / (float)*(int *)(lVar30 + 0x10)),0),&bStack_2f8);
          }
        }
        else {
          func_0x04863480(&bStack_2f8,lVar30);
        }
        uVar14 = func_0x04864970(&uStack_3a8,lVar30 + -0x18);
        func_0x04863790(uVar14);
        func_0x04863610(&bStack_2f8);
        lVar24 = lVar30 + 0x18;
        lVar30 = lVar30 + 0x30;
      } while (lVar24 != lVar22);
    }
    bStack_2f8 = 0x18;
    uStack_2f7 = 0x654d;
    uStack_2f5 = 0x61;
    uStack_2f4 = 0x73;
    uStack_2f3 = 0x75;
    uStack_2f2 = 0x72;
    uStack_2f1 = 0x65;
    bStack_2f0 = 'm';
    uStack_2ef = 0x6e65;
    uStack_2ed = 0x74;
    uStack_2ec = 0x73;
    uStack_2eb = 0;
    uVar14 = func_0x04864970(&uStack_168,&bStack_2f8);
    func_0x04863740(uVar14,&uStack_3a8);
    if ((bStack_2f8 & 1) != 0) {
      func_0x0412a280(pbStack_2e8,
                      CONCAT17(uStack_2f1,
                               CONCAT16(uStack_2f2,
                                        CONCAT15(uStack_2f3,
                                                 CONCAT14(uStack_2f4,
                                                          CONCAT13(uStack_2f5,
                                                                   CONCAT21(uStack_2f7,bStack_2f8)))
                                                ))) & 0xfffffffffffffffe);
    }
    func_0x04863610(&uStack_3a8);
  }
  bStack_2f8 = 8;
  uStack_2f7 = 0x6164;
  uStack_2f5 = 0x74;
  uStack_2f4 = 0x61;
  uStack_2f3 = 0;
  uVar14 = func_0x04864970(auStack_1c8,&bStack_2f8);
  func_0x04863740(uVar14,&uStack_168);
  if ((bStack_2f8 & 1) != 0) {
    func_0x0412a280(pbStack_2e8,
                    CONCAT17(uStack_2f1,
                             CONCAT16(uStack_2f2,
                                      CONCAT15(uStack_2f3,
                                               CONCAT14(uStack_2f4,
                                                        CONCAT13(uStack_2f5,
                                                                 CONCAT21(uStack_2f7,bStack_2f8)))))
                            ) & 0xfffffffffffffffe);
  }
  func_0x04863610(&bStack_1f8);
  func_0x04863610(&uStack_168);
  func_0x0b63d650(&uStack_310,auStack_1c8);
  func_0x04863610(auStack_1c8);
  plVar21 = (long *)((ulong)uStack_310 >> 1 & 0x7f);
  lVar22 = (long)&uStack_310 + 1;
  if (((ulong)uStack_310 & 1) != 0) {
    plVar21 = plStack_308;
    lVar22 = lStack_300;
  }
  func_0x0412f8c0(&bStack_388,lVar22,plVar21);
  uStack_178 = uStack_178 + 1;
  if ((9 < uStack_178) || (((bStack_388 & 1) != 0 && ((long *)0x270f < plStack_380)))) {
    func_0x057d8ed0(&uStack_328);
    if ((bStack_388 & 1) == 0) {
      bStack_388 = 0;
      puVar19 = &uStack_387;
    }
    else {
      plStack_380 = (long *)0x0;
      puVar19 = puStack_378;
    }
    *puVar19 = 0;
    uStack_178 = 0;
  }
  if (((ulong)uStack_310 & 1) != 0) {
    func_0x0412a280(lStack_300);
  }
  plVar13 = plVar25 + 0x20;
  plVar21 = plStack_380;
  if (plStack_58 == plVar25) goto LAB_06d6aaa4;
  goto LAB_06d69786;
}



/* ---- referenced strings ----
 * 0x12269ae  Minecraft.Bedrock.Editor.Server
 * 0x12269bd  ck.Editor.Server
 * 0x143024c  application/x-json-stream
 * 0x1430255  on/x-json-stream
 * 0x17f4618  "BedrockEditorProd
 */
