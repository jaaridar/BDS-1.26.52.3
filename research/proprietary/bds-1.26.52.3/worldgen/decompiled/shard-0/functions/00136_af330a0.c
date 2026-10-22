/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb0330a0 (ELF vaddr 0xaf330a0)
 * Label: caller-of-callee
 * Body:  [[0b0330a0, 0b033427] [0b033430, 0b033557] [0b033560, 0b0337b1] [0b0337c0, 0b0337e1] [0b0337f0, 0b0337fd] [0b033800, 0b033981] [0b033990, 0b033a1e] [0b033a20, 0b033a3e] [0b033a40, 0b033b06] [0b033b10, 0b033c0a] [0b033c10, 0b033e81] [0b033e90, 0b033ec2] [0b033ed0, 0b034414] [0b034420, 0b03446d] [0b034470, 0b0346bd] [0b0346c0, 0b0346f0] [0b034700, 0b034895] [0b0348a0, 0b034ae9]]
 * Ghidra: FUN_0b0330a0
 */


/* WARNING: Removing unreachable block (ram,0x0b033710) */
/* WARNING: Removing unreachable block (ram,0x0b033722) */
/* WARNING: Removing unreachable block (ram,0x0b033733) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b0330a0(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long *plVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  char *pcVar22;
  ulong uVar23;
  byte *pbVar24;
  long *in_FS_OFFSET;
  bool bVar25;
  undefined8 uStack_428;
  ulong *puStack_420;
  long lStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined1 auStack_3f0 [8];
  ulong *puStack_3e8;
  ulong *puStack_3e0;
  long *plStack_3d8;
  ulong *puStack_3d0;
  ulong *puStack_3c8;
  int iStack_3bc;
  ulong uStack_3b8;
  long *plStack_3b0;
  ulong *puStack_3a8;
  ulong *puStack_3a0;
  ulong *puStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  ulong *puStack_370;
  long lStack_368;
  ulong *puStack_360;
  undefined8 auStack_358 [2];
  undefined4 uStack_348;
  int iStack_344;
  byte bStack_340;
  char cStack_33f;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined1 uStack_338;
  undefined7 uStack_337;
  char *pcStack_330;
  char cStack_328;
  long lStack_288;
  long lStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  ulong *puStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  byte *pbStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  ulong *puStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  *param_1 = (ulong)&UNK_0f534768;
  plStack_3d8 = param_2;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  puVar21 = param_1;
  if (puVar12 == (undefined8 *)0x0) goto LAB_0b034a52;
  do {
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar21[1] = (ulong)(puVar12 + 3);
    puVar21[2] = (ulong)puVar12;
    *puVar21 = (ulong)&UNK_0f2800a8;
    puVar21[3] = 0;
    puVar21[4] = 0;
    puVar21[5] = 0;
    puVar21[6] = 0;
    *(undefined4 *)(puVar21 + 7) = 0x3f800000;
    puVar21[8] = 0;
    puVar21[9] = 0;
    puVar21[10] = 0;
    puVar21[0xb] = 0;
    *(undefined4 *)(puVar21 + 0xc) = 0x3f800000;
    puVar21[0xd] = 0;
    puVar21[0xe] = 0;
    puVar21[0xf] = 0;
    puVar21[0x10] = 0;
    *(undefined4 *)(puVar21 + 0x11) = 0x3f800000;
    puVar21[0x12] = (ulong)param_3;
    lVar13 = param_6[1];
    uVar7 = *(undefined4 *)((long)param_6 + 4);
    uVar8 = *(undefined4 *)(param_6 + 1);
    uVar9 = *(undefined4 *)((long)param_6 + 0xc);
    *(undefined4 *)(puVar21 + 0x13) = *(undefined4 *)param_6;
    *(undefined4 *)((long)puVar21 + 0x9c) = uVar7;
    *(undefined4 *)(puVar21 + 0x14) = uVar8;
    *(undefined4 *)((long)puVar21 + 0xa4) = uVar9;
    if (lVar13 != 0) {
      LOCK();
      plVar17 = (long *)(lVar13 + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    puStack_3c8 = puVar21 + 0x13;
    puVar21[0x15] = param_6[2];
    puVar21[0x16] = 0;
    puVar21[0x17] = 0;
    puVar21[0x18] = 0;
    puVar21[0x19] = 0;
    puVar21[0x1a] = 0;
    puVar21[0x1b] = (ulong)param_4;
    puVar21[0x1c] = 0;
    puStack_370 = puVar21 + 0x1d;
    func_0x0491cee0(puStack_370,param_5);
    func_0x0491cee0(puVar21 + 0x20,param_5 + 3);
    *(char *)(puVar21 + 0x23) = (char)param_5[6];
    lVar13 = (**(code **)(*plStack_3d8 + 0x908))();
    func_0x0b034e70(*(undefined8 *)(lVar13 + 0xb0));
    puStack_130 = (undefined8 *)0x1100000127ee01;
    uStack_238 = uStack_238 & 0xffffffffffffff00;
    uStack_228 = uStack_228 & 0xffffffffffffff00;
    func_0x0eeb79f0(auStack_48,&puStack_130);
    if (((ulong)puStack_130 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_130 & 0xff00ffffffffffff) - 8);
    }
    param_4 = *(ulong **)(puVar21[0x12] + 0x98);
    param_5 = (ulong *)func_0x0417cc60();
    param_3 = puVar21;
    if (DAT_0f778830 == '\0') goto LAB_0b034a7d;
    while( true ) {
      lStack_250 = _DAT_0f778828;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      pbStack_220 = (byte *)0x0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      iStack_1a8 = 0;
      uStack_180 = 0x3f800000;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      puStack_278 = (undefined8 *)0x0;
      uStack_270 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      uStack_268 = 0x3f800000;
      param_1 = (ulong *)param_4[1];
      puVar15 = (ulong *)param_4[2];
      puVar16 = puVar15;
      puStack_248 = param_5;
      if (param_1 == puVar15) break;
      iStack_3bc = (int)((ulong)((long)puVar15 - (long)param_1) >> 4) * -0xf0f0f0f;
      lStack_368 = *in_FS_OFFSET;
      puStack_360 = (ulong *)(lStack_368 + -0xa68);
      puStack_260 = param_4;
      puStack_240 = puVar15;
      while( true ) {
        uVar14 = (**(code **)(**(long **)(*(long *)(*(long *)param_1[0x1d] + 8) + 8) + 0x18))();
        func_0x0ee35a00(&uStack_348,uVar14);
        lVar13 = CONCAT71(uStack_337,uStack_338);
        uVar23 = CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(cStack_33f,bStack_340)));
        if ((uStack_348 & 1) == 0) {
          lVar13 = (long)&uStack_348 + 1;
          uVar23 = (ulong)((byte)uStack_348 >> 1);
        }
        puStack_3a0 = (ulong *)0x0;
        if (lVar13 == 0) {
          param_3 = (ulong *)((uVar23 & 0x7f) << 0x30);
        }
        else {
          lVar1 = uVar23 + 9;
          puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
          if (lVar1 != 0 && puVar15 == (ulong *)0x0) {
            func_0x0eec74c0(lVar1,8);
          }
          *puVar15 = uVar23;
          func_0x0eee2f00(puVar15 + 1,lVar13,uVar23);
          *(undefined1 *)((long)puVar15 + uVar23 + 8) = 0;
          param_3 = (ulong *)((ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        }
        puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffffffffff00);
        uStack_120 = 0;
        puStack_3a0 = param_3;
        func_0x0eeb79f0(auStack_60,&puStack_3a0);
        if (((ulong)puStack_3a0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)puStack_3a0 & 0xff00ffffffffffff) - 8);
        }
        puStack_3a0 = (ulong *)0x0;
        if ((uStack_348 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT71(uStack_337,uStack_338),
                             CONCAT44(iStack_344,uStack_348) & 0xfffffffffffffffe);
        }
        if ((plStack_3d8[0x18] == 0) &&
           (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013d2cf0),
           cVar10 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((*(char *)plStack_3d8[0x18] == '\0') &&
           (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013d2cf0),
           cVar10 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        param_4 = (ulong *)plStack_3d8[0x1a];
        uStack_3b8 = param_4[1];
        plStack_3b0 = (long *)param_4[2];
        if (plStack_3b0 == (long *)0x0) {
          plStack_3b0 = (long *)0x0;
        }
        else {
          LOCK();
          plStack_3b0[1] = plStack_3b0[1] + 1;
          UNLOCK();
        }
        puStack_3a8 = (ulong *)0x0;
        if (uStack_3b8 != 0) {
          puStack_3a8 = param_4;
        }
        func_0x09b49860(&puStack_130,param_1,puStack_370,&uStack_3b8);
        plVar17 = plStack_3b0;
        uStack_3b8 = 0;
        plStack_3b0 = (long *)0x0;
        if (plVar17 == (long *)0x0) {
          puStack_3a8 = (ulong *)0x0;
        }
        else {
          LOCK();
          plVar2 = plVar17 + 1;
          lVar13 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
            plVar17 = plStack_3b0;
            puStack_3a8 = (ulong *)0x0;
            if (plStack_3b0 != (long *)0x0) {
              puStack_3a8 = (ulong *)0x0;
              LOCK();
              plVar2 = plStack_3b0 + 1;
              lVar13 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar13 == 0) {
                (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
                func_0x0412c2d0(plVar17);
              }
            }
          }
          else {
            puStack_3a8 = (ulong *)0x0;
          }
        }
        uStack_348 = 0x746e6510;
        iStack_344 = 0x65697469;
        bStack_340 = 0x73;
        cStack_33f = '\0';
        func_0x09ae0ca0(&puStack_3a0,puVar21[0x12],param_1,&uStack_348);
        puStack_3d0 = param_1;
        if (puStack_398 != puStack_3a0) {
          uVar14 = **(undefined8 **)(*(long *)param_1[0x1d] + 8);
          if ((DAT_0f5ea4a0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5ea4a0), iVar11 != 0)) {
            func_0x08b670e0(&DAT_0f5ea138);
            func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
            func_0x0410844d(&DAT_0f5ea4a0);
            param_1 = puStack_3d0;
          }
          func_0x0d5f7010(&uStack_348,uVar14,&DAT_0f5ea138);
          func_0x0646d5a0(&uStack_1a0,&uStack_348,&uStack_348);
          if ((uStack_348 & 1) != 0) {
            thunk_FUN_0ee326a0(CONCAT71(uStack_337,uStack_338),
                               CONCAT44(iStack_344,uStack_348) & 0xfffffffffffffffe);
          }
        }
        param_5 = puStack_398;
        if (puStack_398 != puStack_3a0) break;
LAB_0b033934:
        iStack_3bc = iStack_3bc + -1;
        (**(code **)(*(long *)puVar21[0x1b] + 0x2a0))((long *)puVar21[0x1b],param_1);
        lVar1 = lStack_388;
        lVar13 = lStack_380;
        if (lStack_388 != 0) {
          for (; lVar1 != lVar13; lVar13 = lVar13 + -0x40) {
            param_3 = *(ulong **)(lVar13 + -0x18);
            if (param_3 != (ulong *)0x0) {
              puVar15 = *(ulong **)(lVar13 + -0x10);
              puVar16 = param_3;
              if (param_3 != puVar15) {
                do {
                  puVar15 = puVar15 + -8;
                  func_0x0d697f30(puVar15);
                } while (puVar15 != param_3);
                puVar16 = *(ulong **)(lVar13 + -0x18);
              }
              *(ulong **)(lVar13 + -0x10) = param_3;
              thunk_FUN_0ee326a0(puVar16,*(long *)(lVar13 + -8) - (long)puVar16);
            }
            plVar17 = *(long **)(lVar13 + -0x20);
            if (plVar17 == (long *)0x0) {
LAB_0b033a00:
              bVar4 = *(byte *)(lVar13 + -0x40);
            }
            else {
              LOCK();
              plVar2 = plVar17 + 1;
              lVar3 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar3 != 0) goto LAB_0b033a00;
              (**(code **)(*plVar17 + 0x10))(plVar17);
              func_0x0412c2d0(plVar17);
              bVar4 = *(byte *)(lVar13 + -0x40);
            }
            if ((bVar4 & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar13 + -0x30),
                                 *(ulong *)(lVar13 + -0x40) & 0xfffffffffffffffe);
            }
          }
          lStack_380 = lVar1;
          thunk_FUN_0ee326a0(lStack_388,lStack_378 - lStack_388);
        }
        param_5 = puStack_3a0;
        param_6 = (undefined8 *)&uStack_348;
        puVar15 = puStack_398;
        if (puStack_3a0 != (ulong *)0x0) {
          for (; param_5 != puVar15; puVar15 = puVar15 + -3) {
            if ((puVar15[-3] & 1) != 0) {
              thunk_FUN_0ee326a0(puVar15[-1],puVar15[-3] & 0xfffffffffffffffe);
            }
          }
          puStack_398 = param_5;
          thunk_FUN_0ee326a0(puStack_3a0,lStack_390 - (long)puStack_3a0);
        }
        func_0x0b0396e0(&puStack_130);
        func_0x0eeb81b0(auStack_60);
        param_1 = param_1 + 0x22;
        if (param_1 == puStack_240) {
          puVar15 = (ulong *)puStack_260[2];
          puVar16 = (ulong *)puStack_260[1];
          param_4 = puStack_260;
          goto LAB_0b034516;
        }
      }
      while( true ) {
        func_0x04863060(auStack_358,0);
        param_3 = param_5 + -3;
        uStack_428 = 0;
        puStack_420 = (ulong *)0x0;
        lStack_418 = 0;
        func_0x0d62a0d0(param_1[0x1d],param_3,&uStack_428,(int)param_1[0x21]);
        if ((uStack_428 & 1) == 0) break;
        if (puStack_420 != (ulong *)0x0) goto LAB_0b033aae;
LAB_0b033af7:
        cVar10 = '\0';
        puVar15 = param_4;
joined_r0x0b033e58:
        if ((uStack_428 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_418);
        }
        param_4 = puVar15;
        if (cVar10 != '\0') {
          if ((param_5[-3] & 1) == 0) {
            param_5 = (ulong *)((long)param_5 + -0x17);
          }
          else {
            param_5 = (ulong *)param_5[-1];
          }
          param_4 = (ulong *)func_0x0eee2e90(param_5);
          if ((ulong *)0xfffffffffffffff7 < param_4) goto LAB_0b034a6e;
          if (param_4 < (ulong *)0x17) {
            uStack_428 = CONCAT71(uStack_428._1_7_,(char)param_4 * '\x02');
            lVar13 = (long)&uStack_428 + 1;
            if (param_4 != (ulong *)0x0) goto LAB_0b033f1b;
          }
          else {
            uVar23 = ((ulong)param_4 | 7) + 1;
            if (((ulong)param_4 | 7) == 0x17) {
              uVar23 = 0x1a;
            }
            lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
            if (lVar13 == 0) {
              func_0x0eec74c0(uVar23,0);
            }
            uStack_428 = uVar23 | 1;
            puStack_420 = param_4;
            lStack_418 = lVar13;
LAB_0b033f1b:
            func_0x0eee2ee0(lVar13,param_5,param_4);
          }
          *(char *)(lVar13 + (long)param_4) = '\0';
          func_0x0b036930(&uStack_348,puVar21,plStack_3d8,&puStack_130,&uStack_428,auStack_358,
                          &lStack_288);
          func_0x0d6b1c60(&uStack_238);
          if (uStack_348 == 0) {
            if ((*puStack_3c8 == 0) &&
               (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41),
               cVar10 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((*(char *)*puStack_3c8 == '\0') &&
               (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
               cVar10 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            uStack_410 = CONCAT44(uStack_410._4_4_,1);
            param_4 = puStack_3d0;
            if (*(char *)(puVar21[0x15] + 0x58) == '\0') {
              func_0x0ee1ccb0();
              if (*(char *)(lStack_368 + -0xa58) == '\0') {
                *(undefined1 *)(lStack_368 + -0xa58) = 1;
                func_0x0417d010(&UNK_0ee1c840,lStack_368 + -0xa68,0xf53dab8);
              }
              param_4 = puStack_3d0;
              if ((puStack_360[1] != 0) &&
                 (puVar15 = (ulong *)func_0x0412c300(), puStack_3e8 = puVar15,
                 puVar15 != (ulong *)0x0)) {
                auStack_3f0 = (undefined1  [8])*puStack_360;
                if (auStack_3f0 != (undefined1  [8])0x0) {
                  func_0x0ee23f20((long)auStack_3f0 + 0x38,&uStack_410,&bStack_340);
                }
                LOCK();
                puVar16 = puVar15 + 1;
                uVar23 = *puVar16;
                *puVar16 = *puVar16 - 1;
                UNLOCK();
                if (uVar23 == 0) {
                  (**(code **)(*puVar15 + 0x10))(puVar15);
                  func_0x0412c2d0(puVar15);
                }
              }
            }
            if (cStack_328 == '\x01') {
              *(int *)(param_4 + 0x1f) = (int)param_4[0x1f] + 1;
              bVar25 = (bStack_340 & 1) == 0;
              pcVar22 = pcStack_330;
              if (bVar25) {
                pcVar22 = &cStack_33f;
              }
              param_4 = (ulong *)(ulong)(bStack_340 >> 1);
              if (!bVar25) {
                param_4 = (ulong *)CONCAT71(uStack_337,uStack_338);
              }
              if (0 < (long)param_4) {
                puVar15 = param_4;
                pcVar18 = pcVar22;
                while (pcVar18 = (char *)func_0x0eee2ef0(pcVar18,0x3a,puVar15),
                      pcVar18 != (char *)0x0) {
                  if (*pcVar18 == ':') {
                    param_5 = (ulong *)(pcVar18 + -(long)pcVar22);
                    if ((param_5 != (ulong *)0xffffffffffffffff &&
                         pcVar18 != pcVar22 + (long)param_4) &&
                       (puVar15 = (ulong *)((long)param_5 + 1), puVar15 < param_4)) {
                      if ((*puStack_3c8 == 0) &&
                         (cVar10 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41),
                         cVar10 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      if ((*(char *)*puStack_3c8 == '\0') &&
                         (cVar10 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41),
                         cVar10 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      param_6 = (undefined8 *)puVar21[0x15];
                      if ((bStack_340 & 1) == 0) {
                        puVar16 = (ulong *)(ulong)(bStack_340 >> 1);
                      }
                      else {
                        puVar16 = (ulong *)CONCAT71(uStack_337,uStack_338);
                      }
                      if (puVar16 <= param_5) goto LAB_0b034a73;
                      pcVar22 = &cStack_33f;
                      if ((bStack_340 & 1) != 0) {
                        pcVar22 = pcStack_330;
                      }
                      param_5 = (ulong *)((long)puVar16 - (long)puVar15);
                      if ((ulong *)0xfffffffffffffff7 < param_5) goto LAB_0b034a78;
                      if (param_5 < (ulong *)0x17) {
                        auStack_3f0[0] = (char)param_5 * '\x02';
                        param_4 = (ulong *)(auStack_3f0 + 1);
                        if (puVar16 != puVar15) goto LAB_0b03435d;
                      }
                      else {
                        uVar23 = ((ulong)param_5 | 7) + 1;
                        if (((ulong)param_5 | 7) == 0x17) {
                          uVar23 = 0x1a;
                        }
                        puStack_258 = param_6;
                        param_4 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23)
                        ;
                        if (param_4 == (ulong *)0x0) {
                          func_0x0eec74c0(uVar23,0);
                        }
                        auStack_3f0 = (undefined1  [8])(uVar23 | 1);
                        param_6 = puStack_258;
                        puStack_3e8 = param_5;
                        puStack_3e0 = param_4;
LAB_0b03435d:
                        func_0x0eee2ee0(param_4,pcVar22 + (long)puVar15,param_5);
                      }
                      *(char *)((long)param_4 + (long)param_5) = '\0';
                      func_0x0ee1d2f0(param_6,1,auStack_3f0);
                      if (((ulong)auStack_3f0 & 1) != 0) {
                        thunk_FUN_0ee326a0(puStack_3e0);
                      }
                    }
                    break;
                  }
                  pcVar18 = pcVar18 + 1;
                  puVar15 = (ulong *)(pcVar22 + (long)param_4 + -(long)pcVar18);
                  if ((long)puVar15 < 1) break;
                }
              }
            }
            else {
              *(int *)((long)param_4 + 0xfc) = *(int *)((long)param_4 + 0xfc) + 1;
            }
          }
          if ((bStack_340 & 1) != 0) {
            thunk_FUN_0ee326a0(pcStack_330);
          }
          param_1 = puStack_3d0;
          if ((uStack_428 & 1) != 0) {
            thunk_FUN_0ee326a0(lStack_418);
            param_1 = puStack_3d0;
          }
        }
        FUN_04863610(auStack_358);
        param_5 = param_3;
        if (param_3 == puStack_3a0) goto LAB_0b033934;
      }
      if ((byte)uStack_428 >> 1 == 0) goto LAB_0b033af7;
LAB_0b033aae:
      bVar25 = ((byte)param_5[-3] & 1) != 0;
      puVar15 = (ulong *)((long)param_5 + -0x17);
      if (bVar25) {
        puVar15 = (ulong *)param_5[-1];
      }
      uVar23 = (ulong)(byte)((byte)param_5[-3] >> 1);
      if (bVar25) {
        uVar23 = param_5[-2];
      }
      if (uVar23 < 0xfffffffffffffff8) {
        if (uVar23 < 0x17) {
          uStack_410 = CONCAT71(uStack_410._1_7_,(char)uVar23 * '\x02');
          uVar20 = (long)&uStack_410 + 1;
          if (uVar23 != 0) goto LAB_0b033b5b;
        }
        else {
          uVar19 = (uVar23 | 7) + 1;
          if ((uVar23 | 7) == 0x17) {
            uVar19 = 0x1a;
          }
          uVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
          if (uVar20 == 0) {
            func_0x0eec74c0(uVar19,0);
          }
          uStack_410 = uVar19 | 1;
          uStack_408 = uVar23;
          uStack_400 = uVar20;
LAB_0b033b5b:
          func_0x0eee2ee0(uVar20,puVar15,uVar23);
        }
        *(undefined1 *)(uVar20 + uVar23) = 0;
        uVar19 = uStack_400;
        uVar23 = uStack_408;
        if ((uStack_410 & 1) == 0) {
          uVar19 = (long)&uStack_410 + 1;
          uVar23 = uStack_410 >> 1 & 0x7f;
        }
        uStack_3f8 = 0;
        if (uVar19 == 0) {
          uStack_3f8 = (uVar23 & 0x7f) << 0x30;
        }
        else {
          lVar13 = uVar23 + 9;
          puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
          if (lVar13 != 0 && puVar15 == (ulong *)0x0) {
            func_0x0eec74c0(lVar13,8);
          }
          *puVar15 = uVar23;
          func_0x0eee2f00(puVar15 + 1,uVar19,uVar23);
          *(undefined1 *)((long)puVar15 + uVar23 + 8) = 0;
          uStack_3f8 = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
        }
        uStack_348 = uStack_348 & 0xffffff00;
        uStack_338 = 0;
        func_0x0eeb79f0(auStack_3f0,&uStack_3f8);
        puVar15 = (ulong *)&uStack_348;
        if ((uStack_3f8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3f8 & 0xff00ffffffffffff) - 8);
        }
        param_1 = puStack_3d0;
        uStack_3f8 = 0;
        if ((uStack_410 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_400,uStack_410 & 0xfffffffffffffffe);
        }
        func_0x0485e1c0(puVar15);
        puVar16 = (ulong *)(uStack_428 >> 1 & 0x7f);
        lVar13 = (long)&uStack_428 + 1;
        if ((uStack_428 & 1) != 0) {
          puVar16 = puStack_420;
          lVar13 = lStack_418;
        }
        cVar10 = func_0x0485e650(puVar15,lVar13,puVar16,auStack_358,0);
        if (cVar10 == '\0') {
          func_0x04860c50(&uStack_410,puVar15);
          uStack_3f8 = (long)&uStack_410 + 1;
          if ((uStack_410 & 1) != 0) {
            uStack_3f8 = uStack_400;
          }
          func_0x0b036410(1,3,2,&UNK_0139ed4c);
          if ((uStack_410 & 1) != 0) {
            thunk_FUN_0ee326a0(uStack_400);
          }
        }
        func_0x0485e2d0(puVar15);
        if (auStack_3f0[0] == '\x01') {
          if (puStack_3e0 != (ulong *)0x0) {
            puVar16 = (ulong *)func_0x0412c300();
            if (puVar16 != (ulong *)0x0) {
              if (puStack_3e8 != (ulong *)0x0) {
                plVar17 = (long *)func_0x0eec09c0(puStack_3e8 + 2);
                lVar13 = plVar17[1];
                if ((*plVar17 != lVar13) && (*(undefined1 **)(lVar13 + -8) == auStack_3f0)) {
                  if ((*(ulong *)(lVar13 + -0x10) & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0);
                    param_1 = puStack_3d0;
                  }
                  *(undefined8 *)(lVar13 + -0x10) = 0;
                  plVar17[1] = lVar13 + -0x28;
                }
              }
              LOCK();
              puVar15 = puVar16 + 1;
              uVar23 = *puVar15;
              *puVar15 = *puVar15 - 1;
              UNLOCK();
              puVar15 = puVar16;
              if (uVar23 == 0) {
                (**(code **)(*puVar16 + 0x10))(puVar16);
                func_0x0412c2d0(puVar16);
              }
            }
            goto joined_r0x0b033e48;
          }
        }
        else {
joined_r0x0b033e48:
          if (puStack_3e0 != (ulong *)0x0) {
            func_0x0412c2d0();
          }
        }
        goto joined_r0x0b033e58;
      }
      func_0x04882e30();
LAB_0b034a6e:
      param_4 = puVar15;
      param_6 = auStack_358;
      func_0x04882e30();
LAB_0b034a73:
      func_0x04882ee0();
LAB_0b034a78:
      func_0x04882e30();
LAB_0b034a7d:
      iVar11 = func_0x04108328(&DAT_0f778830);
      if (iVar11 != 0) {
        _DAT_0f778828 = func_0x0417cc60();
        func_0x0410844d(&DAT_0f778830);
      }
    }
LAB_0b034516:
    uStack_348 = CONCAT31(uStack_348._1_3_,4);
    iStack_344 = (int)((ulong)((long)puVar15 - (long)puVar16) >> 4) * -0xf0f0f0f;
    puVar15 = (ulong *)func_0x0417cc60();
    if ((DAT_0f778830 == '\0') &&
       (iVar11 = func_0x04108328(&DAT_0f778830), param_5 = puVar15, iVar11 != 0)) {
      _DAT_0f778828 = func_0x0417cc60();
      func_0x0410844d(&DAT_0f778830);
    }
    dVar6 = (double)(long)((long)puVar15 + (lStack_250 - (long)((long)puStack_248 + _DAT_0f778828)))
            / _DAT_014f0138;
    bStack_340 = SUB81(dVar6,0);
    cStack_33f = (char)((ulong)dVar6 >> 8);
    uStack_33e = (undefined2)((ulong)dVar6 >> 0x10);
    uStack_33c = (undefined4)((ulong)dVar6 >> 0x20);
    lVar13 = param_4[2] - param_4[1];
    if ((lVar13 != -0x110) && (param_4[2] == 0 || param_4[1] != 0)) {
      (**(code **)(*(long *)puVar21[0x1b] + 0x7b0))
                ((long *)puVar21[0x1b],&uStack_348,(lVar13 >> 4) * -0xf0f0f0f0f0f0f0f);
      lVar13 = lStack_288;
      puVar12 = puStack_278;
      if (0 < iStack_1a8) {
        puStack_130 = (undefined8 *)CONCAT17(puStack_130._7_1_,0x726f7463410a);
        (**(code **)(*(long *)(puVar21[0x1b] + 0x40) + 0x10))
                  (puVar21[0x1b] + 0x40,&puStack_130,&uStack_238);
        lVar13 = lStack_288;
        puVar12 = puStack_278;
        if (((ulong)puStack_130 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT71(uStack_11f,uStack_120),(ulong)puStack_130 & 0xfffffffffffffffe
                            );
          lVar13 = lStack_288;
          puVar12 = puStack_278;
        }
      }
      while (puVar12 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar12;
        lStack_288 = lVar13;
        if ((*(byte *)(puVar12 + 2) & 1) != 0) {
          thunk_FUN_0ee326a0(puVar12[4],puVar12[2] & 0xfffffffffffffffe);
        }
        thunk_FUN_0ee326a0(puVar12,0x28);
        lVar13 = lStack_288;
        puVar12 = puVar5;
      }
      lStack_288 = 0;
      if (lVar13 != 0) {
        thunk_FUN_0ee326a0(lVar13,lStack_280 << 3);
      }
      param_5 = &uStack_238;
      func_0x05f43b50(param_5);
      func_0x0eeb81b0(auStack_48);
      param_3 = (ulong *)puVar21[10];
      do {
        if (param_3 == (ulong *)0x0) {
          return;
        }
        uVar23 = param_3[5];
        if ((uVar23 != 0) && (*(long *)(uVar23 + 0x430) != 0)) {
          param_1 = (ulong *)(**(code **)(*plStack_3d8 + 0xe8))();
          uStack_238 = 0;
          if ((*(byte *)(uVar23 + 0x380) & 1) == 0) {
            pbStack_220 = *(byte **)(uVar23 + 0x390);
            uStack_230 = *(ulong *)(uVar23 + 0x380);
            uStack_228 = *(ulong *)(uVar23 + 0x388);
          }
          else {
            FUN_0412e5e0(&uStack_230,*(undefined8 *)(uVar23 + 0x390),*(undefined8 *)(uVar23 + 0x388)
                        );
          }
          uStack_218 = 0;
          if ((uStack_230 & 1) == 0) {
            if ((byte)uStack_230 >> 1 != 0) goto LAB_0b0347bb;
LAB_0b0348a0:
            uStack_238 = 0;
          }
          else {
            if (uStack_228 == 0) goto LAB_0b0348a0;
LAB_0b0347bb:
            pbVar24 = (byte *)((long)&uStack_230 + 1);
            if ((uStack_230 & 1) != 0) {
              pbVar24 = pbStack_220;
            }
            if ((pbVar24 == (byte *)0x0) || (*pbVar24 == 0)) goto LAB_0b0348a0;
            uVar19 = func_0x0eee2e90(pbVar24);
            uStack_238 = 0xcbf29ce484222325;
            if (uVar19 != 0) {
              if (7 < uVar19) {
                uVar20 = uVar19 & 0xfffffffffffffff8;
                do {
                  uStack_238 = (((((((uStack_238 * 0x100000001b3 ^ (ulong)*pbVar24) * 0x100000001b3
                                    ^ (ulong)pbVar24[1]) * 0x100000001b3 ^ (ulong)pbVar24[2]) *
                                   0x100000001b3 ^ (ulong)pbVar24[3]) * 0x100000001b3 ^
                                 (ulong)pbVar24[4]) * 0x100000001b3 ^ (ulong)pbVar24[5]) *
                                0x100000001b3 ^ (ulong)pbVar24[6]) * 0x100000001b3 ^
                               (ulong)pbVar24[7];
                  pbVar24 = pbVar24 + 8;
                  uVar20 = uVar20 - 8;
                } while (uVar20 != 0);
              }
              if ((uVar19 & 7) != 0) {
                uVar20 = 0;
                do {
                  uStack_238 = uStack_238 * 0x100000001b3 ^ (ulong)pbVar24[uVar20];
                  uVar20 = uVar20 + 1;
                } while (((uint)uVar19 & 7) != uVar20);
              }
            }
          }
          param_6 = *(undefined8 **)(uVar23 + 0x430);
          param_4 = *(ulong **)(uVar23 + 0x438);
          uStack_348 = (uint)param_6;
          iStack_344 = (int)((ulong)param_6 >> 0x20);
          if (param_4 == (ulong *)0x0) {
            bStack_340 = 0;
            cStack_33f = '\0';
            uStack_33e = 0;
            uStack_33c = 0;
            if (param_6 == (undefined8 *)0x0) break;
            puStack_128 = (ulong *)0x0;
          }
          else {
            LOCK();
            param_4[1] = param_4[1] + 1;
            UNLOCK();
            bStack_340 = (byte)param_4;
            cStack_33f = (char)((ulong)param_4 >> 8);
            uStack_33e = (undefined2)((ulong)param_4 >> 0x10);
            uStack_33c = (undefined4)((ulong)param_4 >> 0x20);
            if (param_6 == (undefined8 *)0x0) break;
            LOCK();
            param_4[1] = param_4[1] + 1;
            UNLOCK();
            puStack_128 = param_4;
          }
          puStack_3a0 = param_5;
          puStack_130 = param_6;
          lVar13 = func_0x0bbf2850(param_1,param_5,&UNK_01563a4f,&puStack_3a0);
          if (param_4 != (ulong *)0x0) {
            LOCK();
            param_4[1] = param_4[1] + 1;
            UNLOCK();
          }
          *(undefined8 **)(lVar13 + 0x38) = param_6;
          plVar17 = *(long **)(lVar13 + 0x40);
          *(ulong **)(lVar13 + 0x40) = param_4;
          puVar21 = puStack_128;
          if (plVar17 != (long *)0x0) {
            LOCK();
            plVar2 = plVar17 + 1;
            lVar13 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              func_0x0412c2d0(plVar17);
              puVar21 = puStack_128;
            }
          }
          puStack_128 = puVar21;
          if (puVar21 != (ulong *)0x0) {
            LOCK();
            puVar15 = puVar21 + 1;
            uVar23 = *puVar15;
            *puVar15 = *puVar15 - 1;
            UNLOCK();
            if (uVar23 == 0) {
              (**(code **)(*puVar21 + 0x10))(puVar21);
              func_0x0412c2d0(puVar21);
            }
          }
          plVar17 = (long *)CONCAT44(uStack_33c,CONCAT22(uStack_33e,CONCAT11(cStack_33f,bStack_340))
                                    );
          if (plVar17 != (long *)0x0) {
            LOCK();
            plVar2 = plVar17 + 1;
            lVar13 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
              func_0x0412c2d0(plVar17);
            }
          }
          if ((uStack_230 & 1) != 0) {
            thunk_FUN_0ee326a0(pbStack_220);
          }
        }
        param_3 = (ulong *)*param_3;
      } while( true );
    }
    puVar12 = (undefined8 *)FUN_04890760();
LAB_0b034a52:
    func_0x0eec74c0(0x20,0);
    puVar21 = param_1;
  } while( true );
}


