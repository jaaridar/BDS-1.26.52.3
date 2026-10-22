/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb727400 (ELF vaddr 0xb627400)
 * Label: caller-of-callee
 * Body:  [[0b727400, 0b727e87] [0b727e90, 0b727fd3] [0b727fe0, 0b7284d9] [0b7284e0, 0b72868d] [0b728690, 0b7286f1] [0b728700, 0b72874c] [0b728750, 0b7287b6] [0b7287c0, 0b728a3b] [0b728a40, 0b728b33] [0b728b40, 0b728ba1] [0b728bb0, 0b728c42] [0b728c50, 0b728d01] [0b728d10, 0b728d17] [0b728d20, 0b728f08] [0b728f10, 0b729083] [0b729090, 0b7293e7] [0b7293f0, 0b729524] [0b729530, 0b72991b] [0b729920, 0b729941] [0b729950, 0b729a3a] [0b729a40, 0b729a8c] [0b729a90, 0b729ab0] [0b729ac0, 0b729b15] [0b729b20, 0b729cd2] [0b729ce0, 0b729d41] [0b729d50, 0b729e2d] [0b729e30, 0b729e6a] [0b729e70, 0b729ef3] [0b729f00, 0b729f21] [0b729f30, 0b72a18d] [0b72a190, 0b72a414] [0b72a976, 0b72a9f7]]
 * Ghidra: FUN_0b727400
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b727400(long param_1,char *param_2)

{
  long *plVar1;
  ulong *****pppppuVar2;
  ulong ******ppppppuVar3;
  ulong ******ppppppuVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *plVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  undefined1 auVar17 [8];
  char cVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint *puVar22;
  undefined4 *puVar23;
  ulong *******pppppppuVar24;
  undefined8 *puVar25;
  ulong *******pppppppuVar26;
  long lVar27;
  undefined8 uVar28;
  byte bVar29;
  ulong *******unaff_RBX;
  ulong *******pppppppuVar30;
  long lVar31;
  ulong ******ppppppuVar32;
  ulong *******pppppppuVar33;
  byte *pbVar34;
  ulong *****pppppuVar35;
  uint uVar36;
  ulong *******pppppppuVar37;
  ulong *puVar38;
  ulong *******pppppppuVar39;
  ulong *******pppppppuVar40;
  ulong *******unaff_R14;
  ulong ******ppppppuVar41;
  ulong *puVar42;
  byte *pbVar43;
  ulong *****pppppuVar44;
  ulong uVar45;
  ulong *puVar46;
  bool bVar47;
  bool bVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_3a8 [4];
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  ulong *******pppppppuStack_398;
  undefined1 auStack_388 [8];
  ulong *******pppppppuStack_380;
  ulong *******pppppppuStack_378;
  ulong *******pppppppuStack_368;
  ulong *******pppppppuStack_360;
  ulong *******pppppppuStack_358;
  undefined1 auStack_348 [4];
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong *******pppppppuStack_318;
  ulong *******pppppppuStack_310;
  uint uStack_308;
  byte bStack_300;
  uint uStack_2f8;
  undefined1 auStack_2e8 [8];
  ulong *******pppppppuStack_2e0;
  undefined8 uStack_2d8;
  char cStack_2c1;
  ulong *******pppppppuStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulong *puStack_2a0;
  ulong *******pppppppuStack_298;
  ulong *******pppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  long lStack_278;
  undefined4 uStack_270;
  ulong *puStack_268;
  ulong *******pppppppuStack_260;
  ulong *******pppppppuStack_258;
  uint uStack_24c;
  undefined1 auStack_248 [4];
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  ulong *******pppppppuStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  char cStack_1e8;
  ulong *******pppppppuStack_1d8;
  byte bStack_1d0;
  undefined1 auStack_1cf [15];
  ulong *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  char cStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong ******ppppppuStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulong *******pppppppuStack_148;
  ulong *******pppppppuStack_130;
  undefined1 auStack_128 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulong *******pppppppuStack_118;
  long *plStack_110;
  ulong *******pppppppuStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  ulong *puStack_e8;
  ulong *******pppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong ******ppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  undefined4 uStack_a0;
  uint uStack_80;
  undefined1 auStack_78 [56];
  uint uStack_40;
  char cStack_38;
  
  if (*param_2 != '\x01') {
    return;
  }
  pppppppuVar24 = *(ulong ********)(param_1 + 8);
  lVar21 = func_0x06338020(pppppppuVar24[3]);
  if (lVar21 == 0) goto LAB_0b72a2f1;
  if (*(long **)(lVar21 + 0xd0) == (long *)0x0) {
    return;
  }
  pppppppuStack_368 = (ulong *******)0x0;
  pppppppuStack_360 = (ulong *******)0x0;
  pppppppuStack_358 = (ulong *******)0x0;
  puVar22 = (uint *)(**(code **)(**(long **)(lVar21 + 0xd0) + 0x50))();
  if ((*puVar22 & 1) == 0) {
    pppppppuStack_238 = *(ulong ********)(puVar22 + 4);
    auStack_248 = (undefined1  [4])*puVar22;
    uStack_244 = puVar22[1];
    uStack_240 = puVar22[2];
    uStack_23c = puVar22[3];
  }
  else {
    FUN_0412e5e0(auStack_248,*(undefined8 *)(puVar22 + 4),*(undefined8 *)(puVar22 + 2));
  }
  bVar47 = ((uint)auStack_248 & 1) != 0;
  _auStack_348 = (ulong *******)(auStack_248 + 1);
  if (bVar47) {
    _auStack_348 = pppppppuStack_238;
  }
  uStack_340 = (ulong *******)(ulong)(auStack_248[0] >> 1);
  if (bVar47) {
    uStack_340 = (ulong *******)CONCAT44(uStack_23c,uStack_240);
  }
  uStack_338 = (ulong *******)&UNK_0139155b;
  uStack_330 = (ulong *******)0x6;
  uStack_328 = (ulong *******)&UNK_01216aa5;
  uStack_320 = (ulong ******)0x8;
  func_0x048ad670(&uStack_228,auStack_348,3,0x2f);
  unaff_RBX = pppppppuVar24 + 0xb;
  if (unaff_RBX == (ulong *******)&uStack_228) {
    if (((ulong)uStack_228 & 1) != 0) {
      thunk_FUN_0ee326a0(pppppppuStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
    }
  }
  else {
    if (((ulong)*unaff_RBX & 1) != 0) {
      thunk_FUN_0ee326a0(pppppppuVar24[0xd],(ulong)pppppppuVar24[0xb] & 0xfffffffffffffffe);
    }
    pppppppuVar24[0xd] = (ulong ******)pppppppuStack_218;
    *(undefined4 *)unaff_RBX = (undefined4)uStack_228;
    *(undefined4 *)((long)pppppppuVar24 + 0x5c) = uStack_228._4_4_;
    *(undefined4 *)(pppppppuVar24 + 0xc) = (undefined4)uStack_220;
    *(undefined4 *)((long)pppppppuVar24 + 100) = uStack_220._4_4_;
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar14 = _DAT_0f5523a0;
  pbVar34 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_0b72a3f5:
    uVar28 = FUN_0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x0ee38090(&uStack_228);
    if ((bStack_1d0 & 1) != 0) goto LAB_0b72a9a9;
    while (((uint)auStack_248 & 1) == 0) {
      func_0x04886070(&pppppppuStack_368);
      func_0x0eee2d70(uVar28);
LAB_0b72a9a9:
      thunk_FUN_0ee326a0(pppppppuStack_1c0,
                         CONCAT71(auStack_1cf._0_7_,bStack_1d0) & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(pppppppuStack_238,CONCAT44(uStack_244,auStack_248) & 0xfffffffffffffffe);
    func_0x04886070(&pppppppuStack_368);
    func_0x0eee2d70(uVar28);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar29 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar29 = *pbVar34;
  }
  plVar1 = _DAT_0f5523a8;
  _auStack_348 = (ulong *******)0xf5522b8;
  uStack_340 = (ulong *******)CONCAT71(uStack_340._1_7_,1);
  uStack_338 = (ulong *******)pbVar34;
  uStack_330 = (ulong *******)plVar14;
  uStack_328 = (ulong *******)_DAT_0f5523a8;
  if (((bVar29 & 1) == 0) &&
     (cVar18 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar18 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar1 + 0x778))(&bStack_1d0,plVar1);
  uStack_338 = (ulong *******)0x0;
  uStack_330 = (ulong *******)0x0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    plVar14 = (long *)uStack_330;
    uStack_328 = (ulong *******)0x0;
    if (uStack_330 != (ulong *******)0x0) {
      LOCK();
      plVar1 = (long *)(uStack_330 + 1);
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)((long)*uStack_330 + 0x10))(uStack_330);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  if ((char)uStack_340 == '\x01') {
    FUN_0eee02f0(_auStack_348);
  }
  _auStack_348 = (ulong *******)auStack_1cf;
  uStack_340 = (ulong *******)(ulong)(bStack_1d0 >> 1);
  if ((bStack_1d0 & 1) != 0) {
    uStack_340 = (ulong *******)auStack_1cf._7_8_;
    _auStack_348 = pppppppuStack_1c0;
  }
  uStack_338 = (ulong *******)&UNK_0139155b;
  uStack_330 = (ulong *******)0x6;
  uStack_328 = (ulong *******)&UNK_01216aa5;
  uStack_320 = (ulong ******)0x8;
  func_0x048ad670(&uStack_228,auStack_348,3,0x2f);
  unaff_R14 = pppppppuVar24 + 0xe;
  if (unaff_R14 == (ulong *******)&uStack_228) {
    if (((ulong)uStack_228 & 1) != 0) {
      thunk_FUN_0ee326a0(pppppppuStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
    }
  }
  else {
    if (((ulong)*unaff_R14 & 1) != 0) {
      thunk_FUN_0ee326a0(pppppppuVar24[0x10],(ulong)pppppppuVar24[0xe] & 0xfffffffffffffffe);
    }
    pppppppuVar24[0x10] = (ulong ******)pppppppuStack_218;
    *(undefined4 *)unaff_R14 = (undefined4)uStack_228;
    *(undefined4 *)((long)pppppppuVar24 + 0x74) = uStack_228._4_4_;
    *(undefined4 *)(pppppppuVar24 + 0xf) = (undefined4)uStack_220;
    *(undefined4 *)((long)pppppppuVar24 + 0x7c) = uStack_220._4_4_;
  }
  pppppppuVar33 = pppppppuVar24;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0b72a32d;
LAB_0b7277c8:
  bVar47 = (*(byte *)(pppppppuVar33 + 0xb) & 1) != 0;
  ppppppuStack_c8 = (ulong ******)((long)pppppppuVar33 + 0x59);
  if (bVar47) {
    ppppppuStack_c8 = pppppppuVar33[0xd];
  }
  ppppppuStack_c0 = (ulong ******)(ulong)(*(byte *)(pppppppuVar33 + 0xb) >> 1);
  if (bVar47) {
    ppppppuStack_c0 = pppppppuVar33[0xc];
  }
  (**(code **)(_DAT_0f7b8f98 + 0x80))(auStack_348,&DAT_0f7b8f98,&ppppppuStack_c8);
  cStack_1e8 = (byte)uStack_308;
  if ((byte)uStack_308 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar20 = func_0x04108328(&DAT_0f7b8fb8), iVar20 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    bVar47 = (*(byte *)(pppppppuVar33 + 0xe) & 1) != 0;
    ppppppuStack_d8 = (ulong ******)((long)pppppppuVar33 + 0x71);
    if (bVar47) {
      ppppppuStack_d8 = pppppppuVar33[0x10];
    }
    pppppppuStack_290 = pppppppuVar33;
    ppppppuStack_d0 = (ulong ******)(ulong)(*(byte *)(pppppppuVar33 + 0xe) >> 1);
    if (bVar47) {
      ppppppuStack_d0 = pppppppuVar33[0xf];
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(auStack_348,&DAT_0f7b8f98,&ppppppuStack_d8);
    pppppppuVar33 = pppppppuStack_290;
    cStack_178 = (byte)uStack_308;
    cStack_2c1 = (byte)uStack_308;
    if ((byte)uStack_308 != '\0') {
      _auStack_348 = (ulong *******)&UNK_0f2d1750;
      uStack_340 = pppppppuStack_290;
      uStack_338 = (ulong *******)CONCAT44(uStack_338._4_4_,1);
      uStack_330 = (ulong *******)&pppppppuStack_368;
      uStack_328 = (ulong *******)auStack_348;
      cVar18 = func_0x06400300(unaff_R14,&pppppppuStack_368,auStack_348);
      if (uStack_328 == (ulong *******)auStack_348) {
        lVar21 = 0x20;
LAB_0b728107:
        (**(code **)((long)*uStack_328 + lVar21))();
      }
      else {
        lVar21 = 0x28;
        if (uStack_328 != (ulong *******)0x0) goto LAB_0b728107;
      }
      if (cVar18 == '\0') {
        puVar23 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (puVar23 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        pppppppuVar24 = pppppppuStack_360;
        uVar28 = _UNK_0124cf8b;
        _auStack_348 = (ulong *******)0x29;
        uStack_340 = (ulong *******)0x21;
        *(undefined8 *)(puVar23 + 4) = _DAT_0124cf83;
        *(undefined8 *)(puVar23 + 6) = uVar28;
        uVar51 = _UNK_0124cf7f;
        uVar50 = _UNK_0124cf7b;
        uVar49 = _UNK_0124cf77;
        *puVar23 = _DAT_0124cf73;
        puVar23[1] = uVar49;
        puVar23[2] = uVar50;
        puVar23[3] = uVar51;
        *(undefined2 *)(puVar23 + 8) = 0x20;
        uStack_338 = (ulong *******)puVar23;
        if (pppppppuStack_360 < pppppppuStack_358) {
          FUN_0412e5e0(pppppppuStack_360,puVar23,0x21);
          pppppppuStack_360 = pppppppuVar24 + 3;
        }
        else {
          pppppppuStack_360 = (ulong *******)func_0x04909a40(&pppppppuStack_368,auStack_348);
        }
        if (((ulong)_auStack_348 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
        }
      }
      _auStack_348 = (ulong *******)&UNK_0f2d1750;
      uStack_340 = pppppppuVar33;
      uStack_338 = (ulong *******)((ulong)uStack_338 & 0xffffffff00000000);
      uStack_330 = (ulong *******)&pppppppuStack_368;
      uStack_328 = (ulong *******)auStack_348;
      uVar19 = func_0x06400300(unaff_RBX,&pppppppuStack_368,auStack_348);
      unaff_R14 = (ulong *******)(ulong)uVar19;
      if (uStack_328 == (ulong *******)auStack_348) {
        lVar21 = 0x20;
LAB_0b728236:
        (**(code **)((long)*uStack_328 + lVar21))();
      }
      else {
        lVar21 = 0x28;
        if (uStack_328 != (ulong *******)0x0) goto LAB_0b728236;
      }
      if ((char)uVar19 == '\0') {
        unaff_R14 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (unaff_R14 == (ulong *******)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        pppppppuVar24 = pppppppuStack_360;
        ppppppuVar32 = _UNK_01334970;
        _auStack_348 = (ulong *******)0x29;
        uStack_340 = (ulong *******)0x22;
        unaff_R14[2] = _DAT_01334968;
        unaff_R14[3] = ppppppuVar32;
        uVar51 = _UNK_01334964;
        uVar50 = _UNK_01334960;
        uVar49 = _UNK_0133495c;
        *(undefined4 *)unaff_R14 = _DAT_01334958;
        *(undefined4 *)((long)unaff_R14 + 4) = uVar49;
        *(undefined4 *)(unaff_R14 + 1) = uVar50;
        *(undefined4 *)((long)unaff_R14 + 0xc) = uVar51;
        *(undefined2 *)(unaff_R14 + 4) = 0x203a;
        *(byte *)((long)unaff_R14 + 0x22) = 0;
        uStack_338 = unaff_R14;
        if (pppppppuStack_360 < pppppppuStack_358) {
          FUN_0412e5e0(pppppppuStack_360,unaff_R14,0x22);
          pppppppuStack_360 = pppppppuVar24 + 3;
        }
        else {
          pppppppuStack_360 = (ulong *******)func_0x04909a40(&pppppppuStack_368,auStack_348);
        }
        if (((ulong)_auStack_348 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
        }
      }
      _auStack_348 = (ulong *******)&UNK_0f2d1830;
      uStack_340 = pppppppuVar33;
      uStack_328 = (ulong *******)auStack_348;
      uVar19 = func_0x063f7d90(unaff_RBX,&pppppppuStack_368,auStack_348);
      unaff_RBX = (ulong *******)(ulong)uVar19;
      if (uStack_328 == (ulong *******)auStack_348) {
        lVar21 = 0x20;
LAB_0b728358:
        (**(code **)((long)*uStack_328 + lVar21))();
      }
      else {
        lVar21 = 0x28;
        if (uStack_328 != (ulong *******)0x0) goto LAB_0b728358;
      }
      if ((char)uVar19 == '\0') {
        unaff_RBX = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (unaff_RBX == (ulong *******)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        pppppppuVar24 = pppppppuStack_360;
        ppppppuVar32 = _UNK_0124cfad;
        _auStack_348 = (ulong *******)0x29;
        uStack_340 = (ulong *******)0x24;
        unaff_RBX[2] = _DAT_0124cfa5;
        unaff_RBX[3] = ppppppuVar32;
        uVar51 = _UNK_0124cfa1;
        uVar50 = _UNK_0124cf9d;
        uVar49 = _UNK_0124cf99;
        *(undefined4 *)unaff_RBX = _DAT_0124cf95;
        *(undefined4 *)((long)unaff_RBX + 4) = uVar49;
        *(undefined4 *)(unaff_RBX + 1) = uVar50;
        *(undefined4 *)((long)unaff_RBX + 0xc) = uVar51;
        *(undefined4 *)(unaff_RBX + 4) = 0x203a7365;
        *(byte *)((long)unaff_RBX + 0x24) = 0;
        uStack_338 = unaff_RBX;
        if (pppppppuStack_360 < pppppppuStack_358) {
          FUN_0412e5e0(pppppppuStack_360,unaff_RBX,0x24);
          unaff_R14 = pppppppuVar24 + 3;
        }
        else {
          unaff_R14 = (ulong *******)func_0x04909a40(&pppppppuStack_368,auStack_348);
        }
        pppppppuStack_360 = unaff_R14;
        if (((ulong)_auStack_348 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
        }
      }
      plStack_110 = (long *)func_0x060af310(pppppppuVar33[3]);
      if (plStack_110 == (long *)0x0) {
        cVar18 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_0124cfba);
        goto LAB_0b72a319;
      }
      ppppppuVar32 = pppppppuVar33[0x14];
      if (ppppppuVar32 == (ulong ******)0x0) {
        pppppppuStack_258 = (ulong *******)0x0;
        pppppppuVar24 = (ulong *******)0x0;
        pppppppuVar33 = (ulong *******)pppppppuVar33[0x13];
        goto joined_r0x0b728638;
      }
      if (ppppppuVar32 < (ulong ******)0x2000000000000000) {
        ppppppuVar41 = (ulong ******)((long)ppppppuVar32 * 8);
        pppppppuVar24 =
             (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppuVar41);
        if (pppppppuVar24 == (ulong *******)0x0) goto LAB_0b72a282;
        do {
          pppppppuStack_258 = pppppppuVar24 + (long)ppppppuVar32;
          pppppppuVar33 = (ulong *******)pppppppuVar33[0x13];
joined_r0x0b728638:
          pppppppuVar39 = pppppppuVar24;
          if (pppppppuVar33 != (ulong *******)0x0) {
            pppppppuStack_2c0 = (ulong *******)0x7ffffffffffffff8;
            do {
              while (pppppppuVar37 = (ulong *******)pppppppuVar33[4],
                    pppppppuVar24 < pppppppuStack_258) {
                *pppppppuVar24 = (ulong ******)pppppppuVar37;
                pppppppuVar24 = pppppppuVar24 + 1;
                pppppppuVar33 = (ulong *******)*pppppppuVar33;
                if (pppppppuVar33 == (ulong *******)0x0) goto LAB_0b728641;
              }
              unaff_R14 = (ulong *******)((long)pppppppuVar24 - (long)pppppppuVar39);
              unaff_RBX = (ulong *******)((long)unaff_R14 >> 3);
              pbVar34 = (byte *)((long)unaff_RBX + 1);
              uStack_2b8 = pppppppuVar37;
              pppppppuStack_298 = pppppppuVar39;
              if ((byte *)0x1fffffffffffffff < pbVar34) goto LAB_0b72a2dd;
              pppppppuVar37 = (ulong *******)((long)pppppppuStack_258 - (long)pppppppuVar39);
              pbVar43 = (byte *)((long)pppppppuVar37 >> 2);
              if ((byte *)((long)pppppppuVar37 >> 2) <= pbVar34) {
                pbVar43 = pbVar34;
              }
              if (pppppppuStack_2c0 <= pppppppuVar37) {
                pbVar43 = (byte *)0x1fffffffffffffff;
              }
              pppppppuVar24 = pppppppuVar33;
              if ((byte *)0x1fffffffffffffff < pbVar43) goto LAB_0b72a2e2;
              pppppppuStack_260 = (ulong *******)((long)pbVar43 * 8);
              lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
              if (lVar21 == 0) {
                func_0x0eec74c0(pppppppuStack_260,0);
              }
              pppppppuVar30 = pppppppuStack_298;
              pppppppuStack_258 = (ulong *******)((long)pbVar43 * 8 + lVar21);
              *(ulong ********)(lVar21 + (long)unaff_R14) = uStack_2b8;
              pppppppuVar24 = (ulong *******)((long)unaff_R14 + lVar21 + 8);
              pppppppuVar39 = (ulong *******)((long)unaff_R14 + (long)unaff_RBX * -8 + lVar21);
              func_0x0eee2f00(pppppppuVar39,pppppppuStack_298,unaff_R14);
              if (pppppppuVar30 != (ulong *******)0x0) {
                thunk_FUN_0ee326a0(pppppppuVar30,pppppppuVar37);
              }
              pppppppuVar33 = (ulong *******)*pppppppuVar33;
            } while (pppppppuVar33 != (ulong *******)0x0);
          }
LAB_0b728641:
          pppppppuStack_280 = (ulong *******)0x0;
          lStack_278 = 0;
          pppppppuStack_288 = (ulong *******)&pppppppuStack_280;
          ppppppuVar41 = pppppppuStack_290[0x18];
          pppppppuStack_298 = pppppppuVar39;
          pppppppuStack_1d8 = pppppppuVar24;
          if (ppppppuVar41 == (ulong ******)0x0) goto LAB_0b728787;
          pppppppuVar33 = (ulong *******)&uStack_168;
LAB_0b7286b7:
          uStack_168 = (ulong *******)&UNK_0f2d18c0;
          uStack_160 = (ulong *******)&pppppppuStack_288;
          pppppppuStack_148 = pppppppuVar33;
          pppppuVar44 = ppppppuVar41[5];
          if (pppppuVar44 == (ulong *****)0x0) goto LAB_0b728690;
          while( true ) {
            pppppppuVar39 = (ulong *******)pppppuVar44[3];
            pppppppuVar24 = (ulong *******)pppppuVar44[4];
            if (pppppppuVar39 != pppppppuVar24) break;
LAB_0b728700:
            pppppuVar44 = (ulong *****)*pppppuVar44;
            if (pppppuVar44 == (ulong *****)0x0) goto LAB_0b728750;
          }
          ppppppuVar32 = (ulong ******)(pppppuVar44 + 2);
          while (pppppppuStack_148 != (ulong *******)0x0) {
            cVar18 = (*(code *)(*pppppppuStack_148)[6])
                               (pppppppuStack_148,ppppppuVar32,*pppppppuVar39);
            if (cVar18 == '\0') goto LAB_0b728750;
            pppppppuVar39 = pppppppuVar39 + 2;
            if (pppppppuVar39 == pppppppuVar24) goto LAB_0b728700;
          }
          FUN_04891200();
LAB_0b72a282:
          func_0x0eec74c0(ppppppuVar41,0);
        } while( true );
      }
      func_0x0b71c070();
      goto LAB_0b72a3f5;
    }
    uStack_1b8 = _auStack_348;
    uStack_1b0 = uStack_340;
    pppppppuStack_1a8 = uStack_338;
    pppppppuStack_1a0 = uStack_330;
    pppppppuStack_198 = uStack_328;
    lStack_190 = (long)uStack_320;
    lStack_188 = (long)pppppppuStack_318;
    lStack_180 = (long)pppppppuStack_310;
    pppppppuStack_280 = (ulong *******)&UNK_0b71c080;
    pppppppuStack_288 = unaff_R14;
    FUN_0470d9a0(auStack_3a8,&UNK_014a3436,0x2e,0xf,&pppppppuStack_288);
    pppppppuStack_288 = (ulong *******)0x91c2da14ad92ec68;
    pppppppuStack_280 = (ulong *******)&UNK_0140f690;
    lStack_278 = 1;
    uStack_270 = 0x146;
    func_0x0eede050(&uStack_168,8,auStack_3a8);
    ppppppuVar32 = ppppppuStack_158;
    pppppppuVar24 = uStack_168;
    uVar49 = (undefined4)uStack_168;
    uVar50 = uStack_168._4_4_;
    uVar51 = (undefined4)uStack_160;
    uVar52 = uStack_160._4_4_;
    uStack_168 = (ulong *******)0x0;
    uStack_160 = (ulong *******)0x0;
    ppppppuStack_158 = (ulong ******)0x0;
    auStack_388 = (undefined1  [8])CONCAT44(uStack_14c,uStack_150);
    pppppppuStack_380 = (ulong *******)CONCAT71(pppppppuStack_380._1_7_,pppppppuStack_148._0_1_);
    if (((ulong)_auStack_3a8 & 1) != 0) {
      uStack_2b8 = pppppppuVar24;
      uStack_2b0 = uVar51;
      uStack_2ac = uVar52;
      thunk_FUN_0ee326a0(pppppppuStack_398,(ulong)_auStack_3a8 & 0xfffffffffffffffe);
      uVar49 = (undefined4)uStack_2b8;
      uVar50 = uStack_2b8._4_4_;
      uVar51 = uStack_2b0;
      uVar52 = uStack_2ac;
    }
    uVar13 = _UNK_0f2d0a24;
    uVar12 = _UNK_0f2d0a20;
    uVar11 = _UNK_0f2d0a1c;
    uVar10 = _UNK_0f2d0a14;
    uVar9 = _UNK_0f2d0a10;
    uVar8 = _UNK_0f2d0a0c;
    uVar7 = _DAT_0f2d0a08;
    _auStack_348 = (ulong *******)CONCAT44(_UNK_0f2d0a0c,_DAT_0f2d0a08);
    uStack_340 = (ulong *******)CONCAT44(_UNK_0f2d0a14,_UNK_0f2d0a10);
    uStack_338 = (ulong *******)CONCAT44(_UNK_0f2d0a1c,_DAT_0f2d0a18);
    uStack_330 = (ulong *******)CONCAT44(_UNK_0f2d0a24,_UNK_0f2d0a20);
    uStack_328 = (ulong *******)CONCAT44(uVar50,uVar49);
    uStack_320 = (ulong ******)CONCAT44(uVar52,uVar51);
    pppppppuStack_318 = (ulong *******)ppppppuVar32;
    pppppppuStack_310 = (ulong *******)auStack_388;
    uStack_308._0_1_ = (byte)pppppppuStack_380;
    bStack_300 = 1;
    if (pppppppuStack_1a0 < pppppppuStack_198) {
      *(undefined4 *)(pppppppuStack_1a0 + 2) = _DAT_0f2d0a18;
      *(undefined4 *)((long)pppppppuStack_1a0 + 0x14) = uVar11;
      *(undefined4 *)(pppppppuStack_1a0 + 3) = uVar12;
      *(undefined4 *)((long)pppppppuStack_1a0 + 0x1c) = uVar13;
      *(undefined4 *)pppppppuStack_1a0 = uVar7;
      *(undefined4 *)((long)pppppppuStack_1a0 + 4) = uVar8;
      *(undefined4 *)(pppppppuStack_1a0 + 1) = uVar9;
      *(undefined4 *)((long)pppppppuStack_1a0 + 0xc) = uVar10;
      pppppppuStack_1a0[4] = (ulong ******)uStack_328;
      pppppppuStack_1a0[5] = uStack_320;
      pppppppuStack_1a0[6] = ppppppuVar32;
      pppppppuStack_1a0[7] = (ulong ******)auStack_388;
      *(byte *)(pppppppuStack_1a0 + 8) = (byte)pppppppuStack_380;
      *(byte *)(pppppppuStack_1a0 + 9) = 1;
      pppppppuVar24 = pppppppuStack_1a0 + 10;
    }
    else {
      pppppppuStack_1a0 = (ulong *******)func_0x0489d2c0(&pppppppuStack_1a8,auStack_348);
      pppppppuVar24 = pppppppuStack_1a0;
      if (((bStack_300 & 1) != 0) && (((ulong)uStack_328 & 1) != 0)) {
        thunk_FUN_0ee326a0(pppppppuStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
        pppppppuVar24 = pppppppuStack_1a0;
      }
    }
    pppppppuStack_310 = (ulong *******)lStack_180;
    pppppppuStack_318 = (ulong *******)lStack_188;
    uStack_320 = (ulong ******)lStack_190;
    uStack_328 = pppppppuStack_198;
    uStack_338 = pppppppuStack_1a8;
    pppppppuStack_1a8 = (ulong *******)0x0;
    pppppppuStack_1a0 = (ulong *******)0x0;
    pppppppuStack_198 = (ulong *******)0x0;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    uStack_308 = (uint)uStack_308._1_3_ << 8;
    _auStack_348 = uStack_1b8;
    uStack_340 = uStack_1b0;
    uStack_330 = pppppppuVar24;
    goto LAB_0b729fb0;
  }
  uStack_228 = _auStack_348;
  uStack_220 = uStack_340;
  pppppppuStack_218 = uStack_338;
  pppppppuStack_210 = uStack_330;
  pppppppuStack_208 = uStack_328;
  lStack_200 = (long)uStack_320;
  lStack_1f8 = (long)pppppppuStack_318;
  lStack_1f0 = (long)pppppppuStack_310;
  uStack_160 = (ulong *******)&UNK_0b71c080;
  uStack_168 = unaff_RBX;
  FUN_0470d9a0(&pppppppuStack_288,&UNK_012fecb1,0x2f,0xf,&uStack_168);
  uStack_168 = (ulong *******)0x91c2da14ad92ec68;
  uStack_160 = (ulong *******)&UNK_0140f690;
  ppppppuStack_158 = (ulong ******)0x1;
  uStack_150 = 0x140;
  func_0x0eede050(&uStack_1b8,8,&pppppppuStack_288);
  pppppppuVar33 = pppppppuStack_1a8;
  pppppppuVar24 = uStack_1b8;
  uVar49 = (undefined4)uStack_1b8;
  uVar50 = uStack_1b8._4_4_;
  uVar51 = (undefined4)uStack_1b0;
  uVar52 = uStack_1b0._4_4_;
  uStack_1b8 = (ulong *******)0x0;
  uStack_1b0 = (ulong *******)0x0;
  pppppppuStack_1a8 = (ulong *******)0x0;
  _auStack_3a8 = pppppppuStack_1a0;
  uStack_3a0 = (ulong *******)CONCAT71(uStack_3a0._1_7_,pppppppuStack_198._0_1_);
  if (((ulong)pppppppuStack_288 & 1) != 0) {
    uStack_2b8 = pppppppuVar24;
    uStack_2b0 = uVar51;
    uStack_2ac = uVar52;
    thunk_FUN_0ee326a0(lStack_278,(ulong)pppppppuStack_288 & 0xfffffffffffffffe);
    uVar49 = (undefined4)uStack_2b8;
    uVar50 = uStack_2b8._4_4_;
    uVar51 = uStack_2b0;
    uVar52 = uStack_2ac;
  }
  uVar13 = _UNK_0f2d0a04;
  uVar12 = _UNK_0f2d0a00;
  uVar11 = _UNK_0f2d09fc;
  uVar10 = _UNK_0f2d09f4;
  uVar9 = _UNK_0f2d09f0;
  uVar8 = _UNK_0f2d09ec;
  uVar7 = _DAT_0f2d09e8;
  _auStack_348 = (ulong *******)CONCAT44(_UNK_0f2d09ec,_DAT_0f2d09e8);
  uStack_340 = (ulong *******)CONCAT44(_UNK_0f2d09f4,_UNK_0f2d09f0);
  uStack_338 = (ulong *******)CONCAT44(_UNK_0f2d09fc,_DAT_0f2d09f8);
  uStack_330 = (ulong *******)CONCAT44(_UNK_0f2d0a04,_UNK_0f2d0a00);
  uStack_328 = (ulong *******)CONCAT44(uVar50,uVar49);
  uStack_320 = (ulong ******)CONCAT44(uVar52,uVar51);
  pppppppuStack_318 = pppppppuVar33;
  pppppppuStack_310 = _auStack_3a8;
  uStack_308._0_1_ = (byte)uStack_3a0;
  bStack_300 = 1;
  if (pppppppuStack_210 < pppppppuStack_208) {
    *(undefined4 *)(pppppppuStack_210 + 2) = _DAT_0f2d09f8;
    *(undefined4 *)((long)pppppppuStack_210 + 0x14) = uVar11;
    *(undefined4 *)(pppppppuStack_210 + 3) = uVar12;
    *(undefined4 *)((long)pppppppuStack_210 + 0x1c) = uVar13;
    *(undefined4 *)pppppppuStack_210 = uVar7;
    *(undefined4 *)((long)pppppppuStack_210 + 4) = uVar8;
    *(undefined4 *)(pppppppuStack_210 + 1) = uVar9;
    *(undefined4 *)((long)pppppppuStack_210 + 0xc) = uVar10;
    pppppppuStack_210[4] = (ulong ******)uStack_328;
    pppppppuStack_210[5] = uStack_320;
    pppppppuStack_210[6] = (ulong ******)pppppppuVar33;
    pppppppuStack_210[7] = (ulong ******)_auStack_3a8;
    *(byte *)(pppppppuStack_210 + 8) = (byte)uStack_3a0;
    *(byte *)(pppppppuStack_210 + 9) = 1;
    pppppppuVar24 = pppppppuStack_210 + 10;
  }
  else {
    pppppppuStack_210 = (ulong *******)func_0x0489d2c0(&pppppppuStack_218,auStack_348);
    pppppppuVar24 = pppppppuStack_210;
    if (((bStack_300 & 1) != 0) && (((ulong)uStack_328 & 1) != 0)) {
      thunk_FUN_0ee326a0(pppppppuStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
      pppppppuVar24 = pppppppuStack_210;
    }
  }
  pppppppuStack_310 = (ulong *******)lStack_1f0;
  pppppppuStack_318 = (ulong *******)lStack_1f8;
  uStack_320 = (ulong ******)lStack_200;
  uStack_328 = pppppppuStack_208;
  uStack_338 = pppppppuStack_218;
  pppppppuStack_218 = (ulong *******)0x0;
  pppppppuStack_210 = (ulong *******)0x0;
  pppppppuStack_208 = (ulong *******)0x0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  uStack_308 = (uint)uStack_308._1_3_ << 8;
  _auStack_348 = uStack_228;
  uStack_340 = uStack_220;
  uStack_330 = pppppppuVar24;
  if ((bStack_1d0 & 1) != 0) {
    thunk_FUN_0ee326a0(pppppppuStack_1c0,CONCAT71(auStack_1cf._0_7_,bStack_1d0) & 0xfffffffffffffffe
                      );
  }
  pppppppuVar24 = pppppppuStack_368;
  if (((uint)auStack_248 & 1) != 0) {
    thunk_FUN_0ee326a0(pppppppuStack_238,CONCAT44(uStack_244,auStack_248) & 0xfffffffffffffffe);
    pppppppuVar24 = pppppppuStack_368;
  }
  pppppppuStack_368 = pppppppuVar24;
  pppppppuVar33 = pppppppuStack_360;
  if (pppppppuVar24 != (ulong *******)0x0) {
    for (; pppppppuVar24 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
      if (((ulong)pppppppuVar33[-3] & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_360 = pppppppuVar24;
    thunk_FUN_0ee326a0(pppppppuStack_368,(long)pppppppuStack_358 - (long)pppppppuStack_368);
  }
  goto LAB_0b727ef4;
LAB_0b728750:
  if (pppppppuStack_148 == pppppppuVar33) {
LAB_0b728690:
    lVar21 = 0x20;
  }
  else {
    lVar21 = 0x28;
    pppppppuVar24 = pppppppuStack_1d8;
    pppppppuVar39 = pppppppuStack_298;
    if (pppppppuStack_148 == (ulong *******)0x0) goto LAB_0b7286ab;
  }
  pppppppuVar24 = pppppppuStack_1d8;
  pppppppuVar39 = pppppppuStack_298;
  (**(code **)((long)*pppppppuStack_148 + lVar21))();
LAB_0b7286ab:
  ppppppuVar41 = (ulong ******)*ppppppuVar41;
  if (ppppppuVar41 == (ulong ******)0x0) goto LAB_0b728787;
  goto LAB_0b7286b7;
LAB_0b728787:
  unaff_R14 = (ulong *******)0x0;
  if (pppppppuVar39 == pppppppuVar24) {
    puStack_2a0 = (ulong *)0x0;
    puStack_268 = (ulong *)0x0;
    goto LAB_0b729ae7;
  }
  puStack_2a0 = (ulong *)0x0;
  puVar38 = (ulong *)0x0;
  puStack_268 = (ulong *)0x0;
LAB_0b7287f0:
  ppppppuVar32 = *pppppppuVar39;
  pppppuVar44 = ppppppuVar32[2];
  pppppuVar2 = ppppppuVar32[3];
  bVar47 = _DAT_0f7ba060 == pppppuVar2;
  bVar6 = _DAT_0f7ba058 == pppppuVar44;
  bVar48 = bVar47 && bVar6;
  unaff_RBX = (ulong *******)(ulong)bVar48;
  uVar19 = (uint)bVar48 | *(uint *)((long)ppppppuVar32 + 0xb4) & 0xfffffffc;
  *(uint *)((long)ppppppuVar32 + 0xb4) = uVar19;
  pppppppuStack_130 = pppppppuVar39;
  if (uVar19 != 0) {
    uStack_2f8 = (uint)pppppuVar2 & 0xffff;
    _auStack_348 = (ulong *******)CONCAT44(uStack_344,(int)((ulong)pppppuVar44 >> 0x20));
    uStack_338 = (ulong *******)
                 (CONCAT44(uStack_338._4_4_,(int)((ulong)pppppuVar44 >> 0x10)) & 0xffffffff0000ffff)
    ;
    uStack_328 = (ulong *******)(CONCAT44(uStack_328._4_4_,(int)pppppuVar44) & 0xffffffff0000ffff);
    pppppppuStack_318 =
         (ulong *******)CONCAT44(pppppppuStack_318._4_4_,(uint)(ushort)((ulong)pppppuVar2 >> 0x30));
    uStack_308 = (uint)((ulong)pppppuVar2 >> 0x10);
    FUN_0470d9a0(&bStack_100,&UNK_01287ba2,0x28,0x122112,auStack_348);
    puVar25 = (undefined8 *)func_0x0412f0e0(&bStack_100,0,&UNK_0131933a,0x11);
    unaff_R14 = pppppppuStack_130;
    uStack_2d8 = (ulong *******)puVar25[2];
    auStack_2e8 = (undefined1  [8])*puVar25;
    pppppppuStack_2e0 = (ulong *******)puVar25[1];
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25[2] = 0;
    puVar25 = (undefined8 *)func_0x0412f8c0(auStack_2e8,&UNK_0146d995,0xe);
    pppppppuStack_378 = (ulong *******)puVar25[2];
    auStack_388 = (undefined1  [8])*puVar25;
    pppppppuStack_380 = (ulong *******)puVar25[1];
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25[2] = 0;
    _auStack_348 = (ulong *******)0x0;
    uStack_340 = (ulong *******)0x0;
    uStack_338 = (ulong *******)0x0;
    if (bVar47 && bVar6) {
      func_0x0412f8c0(auStack_348,&UNK_0119e8ca,0xc);
    }
    pppppppuStack_118 = uStack_338;
    auStack_128 = auStack_348;
    uStack_124 = uStack_344;
    uStack_120 = (undefined4)uStack_340;
    uStack_11c = uStack_340._4_4_;
    pppppppuVar39 = (ulong *******)((ulong)_auStack_348 >> 1 & 0x7f);
    pppppppuVar24 = (ulong *******)(auStack_128 + 1);
    if (((ulong)_auStack_348 & 1) != 0) {
      pppppppuVar39 = uStack_340;
      pppppppuVar24 = uStack_338;
    }
    puVar25 = (undefined8 *)func_0x0412f8c0(auStack_388,pppppppuVar24,pppppppuVar39);
    pppppppuStack_398 = (ulong *******)puVar25[2];
    _auStack_3a8 = (ulong *******)*puVar25;
    uStack_3a0 = (ulong *******)puVar25[1];
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25[2] = 0;
    if (((uint)auStack_128 & 1) == 0) {
      if (((ulong)auStack_388 & 1) != 0) goto LAB_0b728a64;
LAB_0b7289db:
      if (((ulong)auStack_2e8 & 1) != 0) goto LAB_0b728a85;
LAB_0b7289e9:
      if ((bStack_100 & 1) != 0) goto LAB_0b728aac;
LAB_0b7289f7:
      if (pppppppuStack_358 <= pppppppuStack_360) goto LAB_0b728ad5;
LAB_0b728a07:
      pppppppuVar24 = pppppppuStack_360;
      if (((ulong)_auStack_3a8 & 1) == 0) {
        pppppppuStack_360[2] = (ulong ******)pppppppuStack_398;
        *(undefined1 (*) [4])pppppppuStack_360 = auStack_3a8;
        *(undefined4 *)((long)pppppppuStack_360 + 4) = uStack_3a4;
        *(undefined4 *)(pppppppuStack_360 + 1) = (undefined4)uStack_3a0;
        *(undefined4 *)((long)pppppppuStack_360 + 0xc) = uStack_3a0._4_4_;
        unaff_RBX = pppppppuStack_360 + 3;
      }
      else {
        FUN_0412e5e0(pppppppuStack_360,pppppppuStack_398,uStack_3a0);
        unaff_RBX = pppppppuVar24 + 3;
      }
    }
    else {
      thunk_FUN_0ee326a0(pppppppuStack_118,CONCAT44(uStack_124,auStack_128) & 0xfffffffffffffffe);
      if (((ulong)auStack_388 & 1) == 0) goto LAB_0b7289db;
LAB_0b728a64:
      thunk_FUN_0ee326a0(pppppppuStack_378,(ulong)auStack_388 & 0xfffffffffffffffe);
      if (((ulong)auStack_2e8 & 1) == 0) goto LAB_0b7289e9;
LAB_0b728a85:
      thunk_FUN_0ee326a0(uStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
      if ((bStack_100 & 1) == 0) goto LAB_0b7289f7;
LAB_0b728aac:
      thunk_FUN_0ee326a0(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
      if (pppppppuStack_360 < pppppppuStack_358) goto LAB_0b728a07;
LAB_0b728ad5:
      unaff_RBX = (ulong *******)func_0x04909a40(&pppppppuStack_368,auStack_3a8);
    }
    pppppppuStack_360 = unaff_RBX;
    if (((ulong)_auStack_3a8 & 1) != 0) {
      thunk_FUN_0ee326a0(pppppppuStack_398,(ulong)_auStack_3a8 & 0xfffffffffffffffe);
    }
    ppppppuVar32 = *unaff_R14;
  }
  puStack_e8 = puVar38;
  if (pppppppuStack_280 != (ulong *******)0x0) {
    ppppppuVar41 = (ulong ******)ppppppuVar32[2];
    ppppppuVar3 = (ulong ******)ppppppuVar32[3];
    pppppppuVar24 = pppppppuStack_280;
    unaff_R14 = (ulong *******)&pppppppuStack_280;
LAB_0b728b4f:
    do {
      pppppppuVar39 = pppppppuVar24;
      ppppppuVar4 = pppppppuVar39[4];
      bVar47 = ppppppuVar41 < ppppppuVar4;
      if (ppppppuVar41 == ppppppuVar4) {
        bVar47 = ppppppuVar3 < pppppppuVar39[5];
      }
      if (bVar47) goto LAB_0b728b40;
      bVar47 = ppppppuVar4 < ppppppuVar41;
      if (ppppppuVar4 == ppppppuVar41) {
        bVar47 = pppppppuVar39[5] < ppppppuVar3;
      }
      if (!bVar47) {
        pppppppuVar37 = pppppppuVar39;
        for (pppppppuVar24 = (ulong *******)*pppppppuVar39; pppppppuVar24 != (ulong *******)0x0;
            pppppppuVar24 = (ulong *******)pppppppuVar24[bVar47]) {
          bVar47 = pppppppuVar24[4] < ppppppuVar41;
          if (pppppppuVar24[4] == ppppppuVar41) {
            bVar47 = pppppppuVar24[5] < ppppppuVar3;
          }
          if (bVar47 == false) {
            pppppppuVar37 = pppppppuVar24;
          }
        }
        for (pppppppuVar24 = (ulong *******)pppppppuVar39[1]; pppppppuVar24 != (ulong *******)0x0;
            pppppppuVar24 = (ulong *******)pppppppuVar24[bVar47 ^ 1]) {
          bVar47 = ppppppuVar41 < pppppppuVar24[4];
          if (ppppppuVar41 == pppppppuVar24[4]) {
            bVar47 = ppppppuVar3 < pppppppuVar24[5];
          }
          if (bVar47 != false) {
            unaff_R14 = pppppppuVar24;
          }
        }
        pppppppuStack_108 = unaff_R14;
        if (pppppppuVar37 == unaff_R14) break;
        while( true ) {
          pppppuVar16 = _DAT_0f7ba060;
          pppppuVar15 = _DAT_0f7ba058;
          puVar25 = (undefined8 *)&DAT_01384ed1;
          ppppppuVar32 = pppppppuVar37[6];
          pppppuVar44 = ppppppuVar32[2];
          pppppuVar2 = ppppppuVar32[3];
          uVar19 = (uint)(pppppuVar2 == _DAT_0f7ba060 && pppppuVar44 == _DAT_0f7ba058) |
                   (*(uint *)((long)ppppppuVar32 + 0x6c) & 0xfffffff6) +
                   (uint)(ppppppuVar32[5] == _DAT_0f7ba060 && ppppppuVar32[4] == _DAT_0f7ba058) * 8;
          *(uint *)((long)ppppppuVar32 + 0x6c) = uVar19;
          for (pppppuVar35 = ppppppuVar32[10]; pppppuVar35 != ppppppuVar32[0xb];
              pppppuVar35 = pppppuVar35 + 8) {
            if (pppppuVar35[1] == (ulong ****)0x0) {
              uVar36 = 2;
            }
            else if (pppppuVar35[2] == (ulong ****)0x0) {
              uVar36 = 4;
            }
            else {
              unaff_RBX = (ulong *******)
                          ((ulong)pppppuVar35[4] ^ (ulong)pppppuVar16 |
                          (ulong)pppppuVar35[3] ^ (ulong)pppppuVar15);
              uVar36 = (uint)(unaff_RBX == (ulong *******)0x0) << 2;
            }
            uVar19 = uVar19 | uVar36;
            *(uint *)((long)ppppppuVar32 + 0x6c) = uVar19;
          }
          if (uVar19 != 0) break;
LAB_0b72971a:
          pppppppuVar24 = (ulong *******)pppppppuVar37[1];
          pppppppuVar39 = pppppppuVar37;
          if ((ulong *******)pppppppuVar37[1] == (ulong *******)0x0) {
            do {
              pppppppuVar37 = (ulong *******)pppppppuVar39[2];
              bVar47 = pppppppuVar39 != (ulong *******)*pppppppuVar37;
              pppppppuVar39 = pppppppuVar37;
            } while (bVar47);
          }
          else {
            do {
              pppppppuVar37 = pppppppuVar24;
              pppppppuVar24 = (ulong *******)*pppppppuVar37;
            } while ((ulong *******)*pppppppuVar37 != (ulong *******)0x0);
          }
          if (pppppppuVar37 == unaff_R14) {
            ppppppuVar32 = *pppppppuStack_130;
            goto LAB_0b7297c0;
          }
        }
        uStack_2f8 = (uint)pppppuVar2 & 0xffff;
        _auStack_348 = (ulong *******)CONCAT44(uStack_344,(int)((ulong)pppppuVar44 >> 0x20));
        uStack_338 = (ulong *******)
                     (CONCAT44(uStack_338._4_4_,(int)((ulong)pppppuVar44 >> 0x10)) &
                     0xffffffff0000ffff);
        uStack_328 = (ulong *******)
                     (CONCAT44(uStack_328._4_4_,(int)pppppuVar44) & 0xffffffff0000ffff);
        pppppppuStack_318 =
             (ulong *******)
             CONCAT44(pppppppuStack_318._4_4_,(uint)(ushort)((ulong)pppppuVar2 >> 0x30));
        uStack_308 = (uint)((ulong)pppppuVar2 >> 0x10);
        FUN_0470d9a0(auStack_2e8,&UNK_01287ba2,0x28,0x122112,auStack_348);
        unaff_R14 = (ulong *******)(((ulong)auStack_2e8 & 0xfffffffffffffffe) - 1);
        unaff_RBX = pppppppuStack_2e0;
        if (((ulong)auStack_2e8 & 1) == 0) {
          unaff_R14 = (ulong *******)0x16;
          unaff_RBX = (ulong *******)((ulong)auStack_2e8 >> 1 & 0x7f);
        }
        if ((ulong)((long)unaff_R14 - (long)unaff_RBX) < 0x11) {
          pppppppuVar24 = (ulong *******)((long)unaff_RBX + 0x11);
          if ((ulong)((long)pppppppuVar24 - (long)unaff_R14) <= -(long)unaff_R14 - 10U) {
            uStack_2b8 = (ulong *******)(auStack_2e8 + 1);
            if (((ulong)auStack_2e8 & 1) != 0) {
              uStack_2b8 = uStack_2d8;
            }
            uVar45 = 0xfffffffffffffff7;
            if (unaff_R14 < (ulong *******)0x7ffffffffffffff3) {
              pppppppuVar33 = (ulong *******)((long)unaff_R14 * 2);
              if ((ulong *******)((long)unaff_R14 * 2) < pppppppuVar24) {
                pppppppuVar33 = pppppppuVar24;
              }
              uVar45 = ((ulong)pppppppuVar33 | 7) + 1;
              if (((ulong)pppppppuVar33 | 7) == 0x17) {
                uVar45 = 0x1a;
              }
              if (pppppppuVar33 < (ulong *******)0x17) {
                uVar45 = 0x17;
              }
            }
            pppppppuStack_2c0 = pppppppuVar24;
            pppppppuVar33 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45)
            ;
            if (uVar45 != 0 && pppppppuVar33 == (ulong *******)0x0) {
              func_0x0eec74c0(uVar45,0);
            }
            uVar51 = _UNK_01384edd;
            uVar50 = _UNK_01384ed9;
            uVar49 = _UNK_01384ed5;
            *(undefined4 *)pppppppuVar33 = _DAT_01384ed1;
            *(undefined4 *)((long)pppppppuVar33 + 4) = uVar49;
            *(undefined4 *)(pppppppuVar33 + 1) = uVar50;
            *(undefined4 *)((long)pppppppuVar33 + 0xc) = uVar51;
            *(byte *)(pppppppuVar33 + 2) = 0x5b;
            if (unaff_RBX != (ulong *******)0x0) {
              func_0x0eee2ee0((byte *)((long)pppppppuVar33 + 0x11),uStack_2b8,unaff_RBX);
            }
            if ((byte *)((long)unaff_R14 + 1) != (byte *)0x17) {
              thunk_FUN_0ee326a0(uStack_2b8,(byte *)((long)unaff_R14 + 1));
            }
            auStack_2e8 = (undefined1  [8])(uVar45 | 1);
            pppppppuStack_2e0 = pppppppuStack_2c0;
            *(byte *)((long)pppppppuVar33 + (long)pppppppuStack_2c0) = 0;
            uStack_2d8 = pppppppuVar33;
            goto LAB_0b728fab;
          }
LAB_0b72a2c9:
          func_0x04882e30();
LAB_0b72a2ce:
          func_0x0488efe0();
LAB_0b72a2d3:
          func_0x04882e30();
        }
        else {
          pppppppuVar24 = uStack_2d8;
          if (((ulong)auStack_2e8 & 1) == 0) {
            pppppppuVar24 = (ulong *******)(auStack_2e8 + 1);
          }
          if (unaff_RBX != (ulong *******)0x0) {
            lVar21 = 0;
            if (&DAT_01384ed1 < (byte *)((long)pppppppuVar24 + (long)unaff_RBX)) {
              lVar21 = 0x11;
            }
            if (&DAT_01384ed1 < pppppppuVar24) {
              lVar21 = 0;
            }
            puVar25 = (undefined8 *)(&DAT_01384ed1 + lVar21);
            pbVar34 = (byte *)((long)uStack_2d8 + 0x11);
            if (((ulong)auStack_2e8 & 1) == 0) {
              pbVar34 = (byte *)((long)&uStack_2d8 + 2);
            }
            func_0x0eee2ee0(pbVar34,pppppppuVar24,unaff_RBX);
          }
          *(byte *)(pppppppuVar24 + 2) = *(byte *)(puVar25 + 2);
          ppppppuVar32 = (ulong ******)puVar25[1];
          *pppppppuVar24 = (ulong ******)*puVar25;
          pppppppuVar24[1] = ppppppuVar32;
          pppppppuVar30 = (ulong *******)((long)unaff_RBX + 0x11);
          pppppppuVar39 = pppppppuVar30;
          if (((ulong)auStack_2e8 & 1) == 0) {
            auStack_2e8[0] = (char)pppppppuVar30 * '\x02';
            pppppppuVar39 = pppppppuStack_2e0;
          }
          pppppppuStack_2e0 = pppppppuVar39;
          *(byte *)((long)pppppppuVar24 + (long)pppppppuVar30) = 0;
LAB_0b728fab:
          pppppppuVar24 = uStack_2d8;
          unaff_RBX = pppppppuStack_2e0;
          auVar17 = auStack_2e8;
          auStack_388 = auStack_2e8;
          pppppppuStack_380 = pppppppuStack_2e0;
          pppppppuStack_378 = uStack_2d8;
          auStack_2e8 = (undefined1  [8])0x0;
          pppppppuStack_2e0 = (ulong *******)0x0;
          unaff_R14 = (ulong *******)(((ulong)auVar17 & 0xfffffffffffffffe) - 1);
          uStack_2d8 = (ulong *******)0x0;
          if (((ulong)auVar17 & 1) == 0) {
            unaff_R14 = (ulong *******)0x16;
          }
          if (((ulong)auVar17 & 1) == 0) {
            unaff_RBX = (ulong *******)(ulong)((uint)((ulong)auVar17 >> 1) & 0x7f);
            if (0xd < (ulong)((long)unaff_R14 - (long)unaff_RBX)) goto LAB_0b72903e;
LAB_0b7290a3:
            pppppppuVar39 = (ulong *******)((long)unaff_RBX + 0xe);
            if (-(long)unaff_R14 - 10U < (ulong)((long)pppppppuVar39 - (long)unaff_R14)) {
              func_0x04882e30();
              goto LAB_0b72a2c9;
            }
            uStack_2b8 = (ulong *******)(auStack_388 + 1);
            if (((ulong)auVar17 & 1) != 0) {
              uStack_2b8 = pppppppuVar24;
            }
            uVar45 = 0xfffffffffffffff7;
            if (unaff_R14 < (ulong *******)0x7ffffffffffffff3) {
              pppppppuVar24 = (ulong *******)((long)unaff_R14 * 2);
              if ((ulong *******)((long)unaff_R14 * 2) < pppppppuVar39) {
                pppppppuVar24 = pppppppuVar39;
              }
              uVar45 = ((ulong)pppppppuVar24 | 7) + 1;
              if (((ulong)pppppppuVar24 | 7) == 0x17) {
                uVar45 = 0x1a;
              }
              if (pppppppuVar24 < (ulong *******)0x17) {
                uVar45 = 0x17;
              }
            }
            pppppppuStack_2c0 = pppppppuVar39;
            pppppppuVar24 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45)
            ;
            if (uVar45 != 0 && pppppppuVar24 == (ulong *******)0x0) {
              func_0x0eec74c0(uVar45,0);
            }
            if (unaff_RBX != (ulong *******)0x0) {
              func_0x0eee2ee0(pppppppuVar24,uStack_2b8,unaff_RBX);
            }
            pbVar34 = (byte *)((long)pppppppuVar24 + 6) + (long)unaff_RBX;
            pbVar34[0] = 0x65;
            pbVar34[1] = 0x72;
            pbVar34[2] = 0x72;
            pbVar34[3] = 0x6f;
            pbVar34[4] = 0x72;
            pbVar34[5] = 0x73;
            pbVar34[6] = 0x3a;
            pbVar34[7] = 0x20;
            pbVar34 = (byte *)((long)pppppppuVar24 + (long)unaff_RBX);
            pbVar34[0] = 0x5d;
            pbVar34[1] = 0x20;
            pbVar34[2] = 0x68;
            pbVar34[3] = 0x61;
            pbVar34[4] = 0x73;
            pbVar34[5] = 0x20;
            pbVar34[6] = 0x65;
            pbVar34[7] = 0x72;
            unaff_R14 = (ulong *******)((long)unaff_R14 + 1);
            if (unaff_R14 != (ulong *******)0x17) {
              thunk_FUN_0ee326a0(uStack_2b8,unaff_R14);
            }
            auStack_388 = (undefined1  [8])(uVar45 | 1);
            pppppppuStack_380 = pppppppuStack_2c0;
            *(byte *)((long)pppppppuVar24 + (long)pppppppuStack_2c0) = 0;
            pppppppuStack_378 = pppppppuVar24;
          }
          else {
            if ((ulong)((long)unaff_R14 - (long)unaff_RBX) < 0xe) goto LAB_0b7290a3;
LAB_0b72903e:
            pppppppuVar33 = (ulong *******)(auStack_388 + 1);
            if (((ulong)auVar17 & 1) != 0) {
              pppppppuVar33 = pppppppuVar24;
            }
            pbVar34 = (byte *)((long)pppppppuVar33 + 6) + (long)unaff_RBX;
            pbVar34[0] = 0x65;
            pbVar34[1] = 0x72;
            pbVar34[2] = 0x72;
            pbVar34[3] = 0x6f;
            pbVar34[4] = 0x72;
            pbVar34[5] = 0x73;
            pbVar34[6] = 0x3a;
            pbVar34[7] = 0x20;
            pbVar34 = (byte *)((long)pppppppuVar33 + (long)unaff_RBX);
            pbVar34[0] = 0x5d;
            pbVar34[1] = 0x20;
            pbVar34[2] = 0x68;
            pbVar34[3] = 0x61;
            pbVar34[4] = 0x73;
            pbVar34[5] = 0x20;
            pbVar34[6] = 0x65;
            pbVar34[7] = 0x72;
            pppppppuVar39 = (ulong *******)((long)unaff_RBX + 0xe);
            pppppppuVar24 = pppppppuVar39;
            if (((ulong)auVar17 & 1) == 0) {
              auStack_388._1_7_ = auVar17._1_7_;
              auStack_388[0] = (char)pppppppuVar39 * '\x02';
              pppppppuVar24 = pppppppuStack_380;
            }
            pppppppuStack_380 = pppppppuVar24;
            *(byte *)((long)pppppppuVar33 + (long)pppppppuVar39) = 0;
          }
          pppppppuStack_398 = pppppppuStack_378;
          _auStack_3a8 = (ulong *******)auStack_388;
          uStack_3a0 = pppppppuStack_380;
          auStack_388 = (undefined1  [8])0x0;
          pppppppuStack_380 = (ulong *******)0x0;
          pppppppuStack_378 = (ulong *******)0x0;
          func_0x063f7b10(auStack_348,uVar19);
          pppppppuVar39 = _auStack_348;
          pppppppuVar30 = (ulong *******)(ulong)(auStack_348[0] >> 1);
          pppppppuVar24 = (ulong *******)(auStack_348 + 1);
          if (((ulong)_auStack_348 & 1) != 0) {
            pppppppuVar30 = uStack_340;
            pppppppuVar24 = uStack_338;
          }
          pppppppuVar33 = (ulong *******)(((ulong)_auStack_3a8 & 0xfffffffffffffffe) - 1);
          if (((ulong)_auStack_3a8 & 1) == 0) {
            pppppppuVar33 = (ulong *******)0x16;
          }
          pppppppuVar40 = (ulong *******)(ulong)((uint)((ulong)_auStack_3a8 >> 1) & 0x7f);
          if (((ulong)_auStack_3a8 & 1) != 0) {
            pppppppuVar40 = uStack_3a0;
          }
          pppppppuStack_260 = uStack_338;
          unaff_RBX = _auStack_3a8;
          if ((ulong *******)((long)pppppppuVar33 - (long)pppppppuVar40) < pppppppuVar30) {
            uStack_24c = (uint)auStack_348[0];
            pppppppuVar39 = (ulong *******)((long)pppppppuVar30 + (long)pppppppuVar40);
            if ((ulong)((long)pppppppuVar39 - (long)pppppppuVar33) <= -(long)pppppppuVar33 - 10U) {
              pppppppuStack_290 = (ulong *******)(auStack_3a8 + 1);
              if (((ulong)_auStack_3a8 & 1) != 0) {
                pppppppuStack_290 = pppppppuStack_398;
              }
              uVar45 = 0xfffffffffffffff7;
              if (pppppppuVar33 < (ulong *******)0x7ffffffffffffff3) {
                pppppppuVar26 = (ulong *******)((long)pppppppuVar33 * 2);
                if ((ulong *******)((long)pppppppuVar33 * 2) < pppppppuVar39) {
                  pppppppuVar26 = pppppppuVar39;
                }
                uVar45 = ((ulong)pppppppuVar26 | 7) + 1;
                if (((ulong)pppppppuVar26 | 7) == 0x17) {
                  uVar45 = 0x1a;
                }
                if (pppppppuVar26 < (ulong *******)0x17) {
                  uVar45 = 0x17;
                }
              }
              pppppppuStack_2c0 = pppppppuVar39;
              pppppppuStack_e0 = pppppppuVar24;
              pppppppuVar24 =
                   (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45);
              if (uVar45 != 0 && pppppppuVar24 == (ulong *******)0x0) {
                func_0x0eec74c0(uVar45,0);
              }
              if (pppppppuVar40 != (ulong *******)0x0) {
                func_0x0eee2ee0(pppppppuVar24,pppppppuStack_290,pppppppuVar40);
              }
              uStack_2b8 = pppppppuVar24;
              func_0x0eee2f00((byte *)((long)pppppppuVar24 + (long)pppppppuVar40),pppppppuStack_e0,
                              pppppppuVar30);
              if ((byte *)((long)pppppppuVar33 + 1) != (byte *)0x17) {
                thunk_FUN_0ee326a0(pppppppuStack_290,(byte *)((long)pppppppuVar33 + 1));
              }
              unaff_RBX = (ulong *******)(uVar45 | 1);
              *(byte *)((long)uStack_2b8 + (long)pppppppuStack_2c0) = 0;
              uVar45 = (ulong)uStack_24c;
              pppppppuVar33 = uStack_2b8;
              goto LAB_0b729454;
            }
            goto LAB_0b72a2d3;
          }
          pppppppuVar26 = uStack_3a0;
          pppppppuVar33 = pppppppuStack_398;
          if (pppppppuVar30 != (ulong *******)0x0) {
            if (((ulong)_auStack_3a8 & 1) == 0) {
              pppppppuVar33 = (ulong *******)(auStack_3a8 + 1);
            }
            func_0x0eee2ee0((byte *)((long)pppppppuVar33 + (long)pppppppuVar40),pppppppuVar24,
                            pppppppuVar30);
            pppppppuVar40 = (ulong *******)((long)pppppppuVar40 + (long)pppppppuVar30);
            pppppppuVar24 = pppppppuVar40;
            if (((ulong)_auStack_3a8 & 1) == 0) {
              _auStack_3a8 = (ulong *******)
                             CONCAT71(stack0xfffffffffffffc59,(char)pppppppuVar40 * '\x02');
              pppppppuVar24 = uStack_3a0;
            }
            uStack_3a0 = pppppppuVar24;
            *(byte *)((long)pppppppuVar33 + (long)pppppppuVar40) = 0;
            pppppppuVar26 = uStack_3a0;
            unaff_RBX = _auStack_3a8;
            pppppppuVar33 = pppppppuStack_398;
          }
          pppppppuStack_2c0 = pppppppuVar26;
          uVar45 = (ulong)pppppppuVar39 & 0xff;
LAB_0b729454:
          _auStack_3a8 = (ulong *******)0x0;
          uStack_3a0 = (ulong *******)0x0;
          pppppppuStack_398 = (ulong *******)0x0;
          if (((uVar45 & 1) != 0) &&
             (thunk_FUN_0ee326a0(pppppppuStack_260,(ulong)_auStack_348 & 0xfffffffffffffffe),
             ((ulong)_auStack_3a8 & 1) != 0)) {
            thunk_FUN_0ee326a0(pppppppuStack_398,(ulong)_auStack_3a8 & 0xfffffffffffffffe);
          }
          if (((ulong)auStack_388 & 1) != 0) {
            thunk_FUN_0ee326a0(pppppppuStack_378,(ulong)auStack_388 & 0xfffffffffffffffe);
          }
          if (((ulong)auStack_2e8 & 1) != 0) {
            thunk_FUN_0ee326a0(uStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
          }
          pppppppuVar24 = pppppppuStack_360;
          uStack_2b8 = pppppppuVar33;
          if (pppppppuStack_360 < pppppppuStack_358) {
            if (((ulong)unaff_RBX & 1) == 0) {
              *pppppppuStack_360 = (ulong ******)unaff_RBX;
              pppppppuStack_360[1] = (ulong ******)pppppppuStack_2c0;
              pppppppuStack_360[2] = (ulong ******)pppppppuVar33;
            }
            else {
              FUN_0412e5e0(pppppppuStack_360,pppppppuVar33,pppppppuStack_2c0);
            }
            pppppppuVar24 = pppppppuVar24 + 3;
            pppppppuVar33 = pppppppuStack_368;
LAB_0b7296ed:
            pppppppuStack_368 = pppppppuVar33;
            unaff_R14 = pppppppuStack_108;
            pppppppuVar33 = (ulong *******)((ulong)unaff_RBX & 0xffffff01);
            pppppppuStack_360 = pppppppuVar24;
            if ((char)pppppppuVar33 != '\0') {
              unaff_RBX = (ulong *******)((ulong)unaff_RBX & 0xfffffffffffffffe);
              thunk_FUN_0ee326a0(uStack_2b8,unaff_RBX);
            }
            goto LAB_0b72971a;
          }
          unaff_R14 = (ulong *******)((long)pppppppuStack_360 - (long)pppppppuStack_368);
          pppppppuVar33 = (ulong *******)(((long)unaff_R14 >> 3) * -0x5555555555555555 + 1);
          if ((ulong *******)0xaaaaaaaaaaaaaaa < pppppppuVar33) goto LAB_0b72a2ce;
          pppppppuStack_290 = pppppppuStack_368;
          lVar21 = (long)pppppppuStack_358 - (long)pppppppuStack_368 >> 3;
          pppppppuVar24 = (ulong *******)(lVar21 * 0x5555555555555556);
          if (pppppppuVar33 < pppppppuVar24) {
            pppppppuVar33 = pppppppuVar24;
          }
          if (0x555555555555554 < (ulong)(lVar21 * -0x5555555555555555)) {
            pppppppuVar33 = (ulong *******)0xaaaaaaaaaaaaaaa;
          }
          uStack_328 = (ulong *******)&pppppppuStack_368;
          if (pppppppuVar33 == (ulong *******)0x0) {
            pppppppuVar24 = (ulong *******)0x0;
LAB_0b7295fc:
            uStack_340 = (ulong *******)((long)pppppppuVar24 + (long)unaff_R14);
            uStack_330 = pppppppuVar24 + (long)pppppppuVar33 * 3;
            uStack_338 = uStack_340;
            _auStack_348 = pppppppuVar24;
            if (((ulong)unaff_RBX & 1) == 0) {
              *uStack_340 = (ulong ******)unaff_RBX;
              uStack_340[1] = (ulong ******)pppppppuStack_2c0;
              uStack_340[2] = (ulong ******)uStack_2b8;
              pppppppuVar39 = pppppppuStack_290;
            }
            else {
              FUN_0412e5e0(uStack_340,uStack_2b8,pppppppuStack_2c0);
              unaff_R14 = (ulong *******)((long)pppppppuStack_360 - (long)pppppppuStack_368);
              pppppppuVar39 = pppppppuStack_368;
            }
            pppppppuVar24 = uStack_338 + 3;
            pppppppuVar33 = (ulong *******)((long)uStack_340 - (long)unaff_R14);
            pppppppuStack_260 = uStack_330;
            func_0x0eee2f00(pppppppuVar33,pppppppuVar39,unaff_R14);
            pppppppuVar30 = pppppppuStack_358;
            pppppppuVar39 = pppppppuStack_368;
            pppppppuStack_358 = pppppppuStack_260;
            if (pppppppuStack_368 != (ulong *******)0x0) {
              lVar21 = (long)pppppppuVar30 - (long)pppppppuStack_368;
              pppppppuStack_368 = pppppppuVar33;
              pppppppuStack_360 = pppppppuVar24;
              thunk_FUN_0ee326a0(pppppppuVar39,lVar21);
              pppppppuVar33 = pppppppuStack_368;
            }
            goto LAB_0b7296ed;
          }
          if (pppppppuVar33 < (ulong *******)0xaaaaaaaaaaaaaab) {
            pppppppuVar24 =
                 (ulong *******)
                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pppppppuVar33 * 0x18);
            if (pppppppuVar24 == (ulong *******)0x0) {
              func_0x0eec74c0((long)pppppppuVar33 * 0x18,0);
              pppppppuVar24 = (ulong *******)0x0;
            }
            goto LAB_0b7295fc;
          }
        }
        func_0x04882eb0();
LAB_0b72a2dd:
        func_0x0b71c070();
        pppppppuVar24 = pppppppuVar33;
LAB_0b72a2e2:
        func_0x04882eb0();
        goto LAB_0b72a2e7;
      }
      pppppppuVar24 = (ulong *******)pppppppuVar39[1];
    } while ((ulong *******)pppppppuVar39[1] != (ulong *******)0x0);
  }
LAB_0b7297c0:
  if (puStack_e8 < puStack_268) goto LAB_0b7287c0;
  lVar21 = (long)puStack_e8 - (long)puStack_2a0;
  pppppppuVar24 = (ulong *******)(lVar21 >> 4);
  pppppppuVar33 = (ulong *******)((long)pppppppuVar24 + 1);
  if ((ulong *******)0xfffffffffffffff < pppppppuVar33) goto LAB_0b72a2ec;
  unaff_R14 = (ulong *******)((long)puStack_268 - (long)puStack_2a0);
  unaff_RBX = (ulong *******)((long)unaff_R14 >> 3);
  if ((ulong *******)((long)unaff_R14 >> 3) <= pppppppuVar33) {
    unaff_RBX = pppppppuVar33;
  }
  if ((ulong *******)0x7fffffffffffffef < unaff_R14) {
    unaff_RBX = (ulong *******)0xfffffffffffffff;
  }
  if (unaff_RBX < (ulong *******)0x1000000000000000) {
    lVar31 = (long)unaff_RBX * 0x10;
    lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar31);
    if (lVar27 == 0) {
      func_0x0eec74c0(lVar31,0);
    }
    puVar42 = puStack_2a0;
    uVar49 = *(undefined4 *)((long)ppppppuVar32 + 0x14);
    uVar50 = *(undefined4 *)(ppppppuVar32 + 3);
    uVar51 = *(undefined4 *)((long)ppppppuVar32 + 0x1c);
    puVar23 = (undefined4 *)(lVar27 + lVar21);
    *puVar23 = *(undefined4 *)(ppppppuVar32 + 2);
    puVar23[1] = uVar49;
    puVar23[2] = uVar50;
    puVar23[3] = uVar51;
    puVar38 = (ulong *)(lVar27 + lVar21 + 0x10);
    pppppppuVar33 = (ulong *******)((long)pppppppuVar24 * 0x10);
    puVar46 = (ulong *)(lVar21 + lVar27 + (long)pppppppuVar24 * -0x10);
    func_0x0eee2f00(puVar46,puStack_2a0);
    if (puVar42 != (ulong *)0x0) {
      thunk_FUN_0ee326a0(puVar42,unaff_R14);
    }
    pppppppuVar39 = pppppppuStack_130 + 1;
    puStack_2a0 = puVar46;
    puStack_268 = (ulong *)(lVar31 + lVar27);
    if (pppppppuVar39 == pppppppuStack_1d8) goto LAB_0b7298eb;
    goto LAB_0b7287f0;
  }
LAB_0b72a2e7:
  func_0x04882eb0();
LAB_0b72a2ec:
  func_0x048f9990();
LAB_0b72a2f1:
  cVar18 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_013fb3dd);
  pppppppuVar33 = pppppppuVar24;
LAB_0b72a319:
  if (cVar18 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x04109e60();
LAB_0b72a32d:
  iVar20 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar20 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  goto LAB_0b7277c8;
LAB_0b728b40:
  pppppppuVar24 = (ulong *******)*pppppppuVar39;
  unaff_R14 = pppppppuVar39;
  if ((ulong *******)*pppppppuVar39 == (ulong *******)0x0) goto LAB_0b7297c0;
  goto LAB_0b728b4f;
LAB_0b7287c0:
  uVar49 = *(undefined4 *)((long)ppppppuVar32 + 0x14);
  uVar50 = *(undefined4 *)(ppppppuVar32 + 3);
  uVar51 = *(undefined4 *)((long)ppppppuVar32 + 0x1c);
  *(undefined4 *)puStack_e8 = *(undefined4 *)(ppppppuVar32 + 2);
  *(undefined4 *)((long)puStack_e8 + 4) = uVar49;
  *(undefined4 *)(puStack_e8 + 1) = uVar50;
  *(undefined4 *)((long)puStack_e8 + 0xc) = uVar51;
  puVar38 = puStack_e8 + 2;
  pppppppuVar39 = pppppppuStack_130 + 1;
  if (pppppppuVar39 == pppppppuStack_1d8) {
LAB_0b7298eb:
    pppppppuVar39 = pppppppuStack_298;
    if ((puStack_2a0 == puVar38) || (puVar42 = puStack_2a0, pppppppuStack_280 == (ulong *******)0x0)
       ) goto LAB_0b729ae7;
    goto joined_r0x0b729915;
  }
  goto LAB_0b7287f0;
joined_r0x0b729915:
  do {
    if (pppppppuStack_280 != (ulong *******)0x0) {
      ppppppuVar32 = (ulong ******)*puVar42;
      ppppppuVar41 = (ulong ******)puVar42[1];
      pppppppuVar24 = (ulong *******)&pppppppuStack_280;
      pppppppuVar33 = pppppppuStack_280;
      do {
        ppppppuVar3 = pppppppuVar33[4];
        bVar47 = ppppppuVar32 < ppppppuVar3;
        if (ppppppuVar32 == ppppppuVar3) {
          bVar47 = ppppppuVar41 < pppppppuVar33[5];
        }
        if (!bVar47) {
          bVar47 = ppppppuVar3 < ppppppuVar32;
          if (ppppppuVar3 == ppppppuVar32) {
            bVar47 = pppppppuVar33[5] < ppppppuVar41;
          }
          if (bVar47) {
            pppppppuVar37 = (ulong *******)pppppppuVar33[1];
            goto joined_r0x0b729959;
          }
          pppppppuVar30 = pppppppuVar33;
          for (pppppppuVar37 = (ulong *******)*pppppppuVar33; pppppppuVar37 != (ulong *******)0x0;
              pppppppuVar37 = (ulong *******)pppppppuVar37[bVar47]) {
            bVar47 = pppppppuVar37[4] < ppppppuVar32;
            if (pppppppuVar37[4] == ppppppuVar32) {
              bVar47 = pppppppuVar37[5] < ppppppuVar41;
            }
            if (bVar47 == false) {
              pppppppuVar30 = pppppppuVar37;
            }
          }
          for (pppppppuVar33 = (ulong *******)pppppppuVar33[1]; pppppppuVar33 != (ulong *******)0x0;
              pppppppuVar33 = (ulong *******)pppppppuVar33[bVar47 ^ 1]) {
            bVar47 = ppppppuVar32 < pppppppuVar33[4];
            if (ppppppuVar32 == pppppppuVar33[4]) {
              bVar47 = ppppppuVar41 < pppppppuVar33[5];
            }
            if (bVar47 != false) {
              pppppppuVar24 = pppppppuVar33;
            }
          }
          while (pppppppuVar30 != pppppppuVar24) {
            pppppppuVar33 = (ulong *******)pppppppuVar30[1];
            pppppppuVar37 = pppppppuVar30;
            if ((ulong *******)pppppppuVar30[1] == (ulong *******)0x0) {
              do {
                pppppppuVar40 = (ulong *******)pppppppuVar37[2];
                bVar47 = pppppppuVar37 != (ulong *******)*pppppppuVar40;
                pppppppuVar37 = pppppppuVar40;
              } while (bVar47);
            }
            else {
              do {
                pppppppuVar40 = pppppppuVar33;
                pppppppuVar33 = (ulong *******)*pppppppuVar40;
              } while ((ulong *******)*pppppppuVar40 != (ulong *******)0x0);
            }
            if (pppppppuStack_288 == pppppppuVar30) {
              pppppppuStack_288 = pppppppuVar40;
            }
            lStack_278 = lStack_278 + -1;
            func_0x05fb1340(pppppppuStack_280,pppppppuVar30);
            thunk_FUN_0ee326a0(pppppppuVar30,0x38);
            pppppppuVar30 = pppppppuVar40;
          }
          break;
        }
        pppppppuVar37 = (ulong *******)*pppppppuVar33;
        pppppppuVar24 = pppppppuVar33;
joined_r0x0b729959:
        pppppppuVar33 = pppppppuVar37;
      } while (pppppppuVar33 != (ulong *******)0x0);
    }
    puVar42 = puVar42 + 2;
  } while (puVar42 != puVar38);
LAB_0b729ae7:
  if ((ulong ********)pppppppuStack_288 != &pppppppuStack_280) {
    pppppppuVar24 = pppppppuStack_288;
    do {
      ppppppuVar32 = pppppppuVar24[6];
      ppppppuVar41 = pppppppuVar24[4];
      ppppppuVar3 = pppppppuVar24[5];
      uStack_2f8 = (uint)ppppppuVar3 & 0xffff;
      uStack_338 = (ulong *******)
                   (CONCAT44(uStack_338._4_4_,(int)((ulong)ppppppuVar41 >> 0x10)) &
                   0xffffffff0000ffff);
      uStack_328 = (ulong *******)
                   (CONCAT44(uStack_328._4_4_,(int)ppppppuVar41) & 0xffffffff0000ffff);
      uStack_308 = (uint)((ulong)ppppppuVar3 >> 0x10);
      auStack_348 = (undefined1  [4])(int)((ulong)ppppppuVar41 >> 0x20);
      pppppppuStack_318._0_4_ = (uint)(ushort)((ulong)ppppppuVar3 >> 0x30);
      FUN_0470d9a0(auStack_388,&UNK_01287ba2,0x28,0x122112,auStack_348);
      pppppuVar44 = ppppppuVar32[2];
      pppppuVar2 = ppppppuVar32[3];
      uStack_2f8 = (uint)pppppuVar2 & 0xffff;
      _auStack_348 = (ulong *******)CONCAT44(uStack_344,(int)((ulong)pppppuVar44 >> 0x20));
      uStack_338 = (ulong *******)
                   (CONCAT44(uStack_338._4_4_,(int)((ulong)pppppuVar44 >> 0x10)) &
                   0xffffffff0000ffff);
      uStack_328 = (ulong *******)(CONCAT44(uStack_328._4_4_,(int)pppppuVar44) & 0xffffffff0000ffff)
      ;
      pppppppuStack_318 =
           (ulong *******)
           CONCAT44(pppppppuStack_318._4_4_,(uint)(ushort)((ulong)pppppuVar2 >> 0x30));
      uStack_308 = (uint)((ulong)pppppuVar2 >> 0x10);
      FUN_0470d9a0(auStack_2e8,&UNK_01287ba2,0x28,0x122112,auStack_348);
      _auStack_348 = pppppppuStack_378;
      uStack_340 = pppppppuStack_380;
      if (((ulong)auStack_388 & 1) == 0) {
        _auStack_348 = (ulong *******)(auStack_388 + 1);
        uStack_340 = (ulong *******)((ulong)auStack_388 >> 1 & 0x7f);
      }
      uStack_338 = uStack_2d8;
      uStack_330 = pppppppuStack_2e0;
      if (((ulong)auStack_2e8 & 1) == 0) {
        uStack_338 = (ulong *******)(auStack_2e8 + 1);
        uStack_330 = (ulong *******)((ulong)auStack_2e8 >> 1 & 0x7f);
      }
      FUN_0470d9a0(auStack_3a8,&UNK_013babb4,0x48,0xdd,auStack_348);
      if (((ulong)auStack_2e8 & 1) == 0) {
        if (((ulong)auStack_388 & 1) != 0) goto LAB_0b729d00;
LAB_0b729ca5:
        if (pppppppuStack_358 <= pppppppuStack_360) goto LAB_0b729d1f;
LAB_0b729cb1:
        pppppppuVar33 = pppppppuStack_360;
        if (((ulong)_auStack_3a8 & 1) == 0) {
          pppppppuStack_360[2] = (ulong ******)pppppppuStack_398;
          *(undefined1 (*) [4])pppppppuStack_360 = auStack_3a8;
          *(undefined4 *)((long)pppppppuStack_360 + 4) = uStack_3a4;
          *(undefined4 *)(pppppppuStack_360 + 1) = (undefined4)uStack_3a0;
          *(undefined4 *)((long)pppppppuStack_360 + 0xc) = uStack_3a0._4_4_;
        }
        else {
          FUN_0412e5e0(pppppppuStack_360,pppppppuStack_398,uStack_3a0);
        }
        pppppppuStack_360 = pppppppuVar33 + 3;
        *(byte *)((long)ppppppuVar32 + 0x6c) = *(byte *)((long)ppppppuVar32 + 0x6c) | 8;
      }
      else {
        thunk_FUN_0ee326a0(uStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
        if (((ulong)auStack_388 & 1) == 0) goto LAB_0b729ca5;
LAB_0b729d00:
        thunk_FUN_0ee326a0(pppppppuStack_378,(ulong)auStack_388 & 0xfffffffffffffffe);
        if (pppppppuStack_360 < pppppppuStack_358) goto LAB_0b729cb1;
LAB_0b729d1f:
        pppppppuStack_360 = (ulong *******)func_0x04909a40(&pppppppuStack_368,auStack_3a8);
        *(byte *)((long)ppppppuVar32 + 0x6c) = *(byte *)((long)ppppppuVar32 + 0x6c) | 8;
      }
      if (((ulong)_auStack_3a8 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_398,(ulong)_auStack_3a8 & 0xfffffffffffffffe);
      }
      pppppppuVar33 = (ulong *******)pppppppuVar24[1];
      pppppppuVar39 = pppppppuVar24;
      if ((ulong *******)pppppppuVar24[1] == (ulong *******)0x0) {
        do {
          pppppppuVar24 = (ulong *******)pppppppuVar39[2];
          bVar47 = pppppppuVar39 != (ulong *******)*pppppppuVar24;
          pppppppuVar39 = pppppppuVar24;
        } while (bVar47);
      }
      else {
        do {
          pppppppuVar24 = pppppppuVar33;
          pppppppuVar33 = (ulong *******)*pppppppuVar24;
        } while ((ulong *******)*pppppppuVar24 != (ulong *******)0x0);
      }
      pppppppuVar39 = pppppppuStack_298;
    } while ((ulong ********)pppppppuVar24 != &pppppppuStack_280);
  }
  if (puStack_2a0 != (ulong *)0x0) {
    thunk_FUN_0ee326a0(puStack_2a0,(long)puStack_268 - (long)puStack_2a0);
  }
  func_0x0b72baf0(pppppppuStack_280);
  if (pppppppuVar39 != (ulong *******)0x0) {
    thunk_FUN_0ee326a0(pppppppuVar39,(long)pppppppuStack_258 - (long)pppppppuVar39);
  }
  pppppppuVar24 = pppppppuStack_360;
  if (pppppppuStack_368 != pppppppuStack_360) {
    pppppppuVar33 = pppppppuStack_368;
    do {
      if (((ulong)*pppppppuVar33 & 1) == 0) {
        ppppppuStack_a8 = pppppppuVar33[2];
        ppppppuStack_b8 = *pppppppuVar33;
        ppppppuStack_b0 = pppppppuVar33[1];
      }
      else {
        FUN_0412e5e0(&ppppppuStack_b8,pppppppuVar33[2],pppppppuVar33[1]);
      }
      uStack_80 = 0;
      auStack_78[0] = 0;
      cStack_38 = '\0';
      _auStack_348 = (ulong *******)0x0;
      uStack_340 = (ulong *******)0x0;
      uStack_338 = (ulong *******)0x0;
      (**(code **)(*plStack_110 + 0x10))(plStack_110,&ppppppuStack_b8,0,1,auStack_348,1);
      pppppppuVar37 = _auStack_348;
      pppppppuVar39 = uStack_340;
      if (_auStack_348 != (ulong *******)0x0) {
        for (; pppppppuVar37 != pppppppuVar39; pppppppuVar39 = pppppppuVar39 + -5) {
          if (((ulong)pppppppuVar39[-4] & 1) != 0) {
            thunk_FUN_0ee326a0(pppppppuVar39[-2],(ulong)pppppppuVar39[-4] & 0xfffffffffffffffe);
          }
        }
        uStack_340 = pppppppuVar37;
        thunk_FUN_0ee326a0(_auStack_348,(long)uStack_338 - (long)_auStack_348);
      }
      if (cStack_38 == '\x01') {
        if ((ulong)uStack_40 != 0xffffffff) {
          (**(code **)(&UNK_0f2d0a28 + (ulong)uStack_40 * 8))(auStack_348,auStack_78);
        }
        uStack_40 = 0xffffffff;
      }
      if ((ulong)uStack_80 != 0xffffffff) {
        (**(code **)(&UNK_0f2d0a28 + (ulong)uStack_80 * 8))(auStack_348,&ppppppuStack_b8);
      }
      uStack_80 = 0xffffffff;
      pppppppuVar33 = pppppppuVar33 + 3;
    } while (pppppppuVar33 != pppppppuVar24);
  }
LAB_0b729fb0:
  lVar21 = lStack_190;
  cVar18 = cStack_2c1;
  if (cStack_178 == '\0') {
    lVar27 = lStack_188;
    if (lStack_190 != 0) {
      while (lVar21 != lVar27) {
        func_0x048b3e80(lVar27 + -0x40);
        lVar27 = lVar27 + -0x40;
      }
      lStack_188 = lVar21;
      thunk_FUN_0ee326a0(lStack_190,lStack_180 - lStack_190);
    }
    pppppppuVar33 = pppppppuStack_1a8;
    pppppppuVar24 = pppppppuStack_1a0;
    if (pppppppuStack_1a8 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -10) {
        if ((*(byte *)(pppppppuVar24 + -1) == 1) && (((ulong)pppppppuVar24[-6] & 1) != 0)) {
          thunk_FUN_0ee326a0(pppppppuVar24[-4],(ulong)pppppppuVar24[-6] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_1a0 = pppppppuVar33;
      thunk_FUN_0ee326a0(pppppppuStack_1a8,(long)pppppppuStack_198 - (long)pppppppuStack_1a8);
    }
  }
  lVar21 = lStack_200;
  if (cStack_1e8 == '\0') {
    if (lStack_200 != 0) {
      while (lVar21 != lStack_1f8) {
        func_0x048b3e80(lStack_1f8 + -0x40);
        lStack_1f8 = lStack_1f8 + -0x40;
      }
      lStack_1f8 = lVar21;
      thunk_FUN_0ee326a0(lStack_200,lStack_1f0 - lStack_200);
    }
    pppppppuVar33 = pppppppuStack_218;
    pppppppuVar24 = pppppppuStack_210;
    if (pppppppuStack_218 != (ulong *******)0x0) {
      for (; pppppppuVar33 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -10) {
        if ((*(char *)(pppppppuVar24 + -1) == '\x01') && (((ulong)pppppppuVar24[-6] & 1) != 0)) {
          thunk_FUN_0ee326a0(pppppppuVar24[-4],(ulong)pppppppuVar24[-6] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_210 = pppppppuVar33;
      thunk_FUN_0ee326a0(pppppppuStack_218,(long)pppppppuStack_208 - (long)pppppppuStack_218);
    }
  }
  if ((bStack_1d0 & 1) != 0) {
    thunk_FUN_0ee326a0(pppppppuStack_1c0,CONCAT71(auStack_1cf._0_7_,bStack_1d0) & 0xfffffffffffffffe
                      );
  }
  pppppppuVar24 = pppppppuStack_368;
  if (((uint)auStack_248 & 1) != 0) {
    thunk_FUN_0ee326a0(pppppppuStack_238,CONCAT44(uStack_244,auStack_248) & 0xfffffffffffffffe);
    pppppppuVar24 = pppppppuStack_368;
  }
  pppppppuStack_368 = pppppppuVar24;
  pppppppuVar33 = pppppppuStack_360;
  if (pppppppuVar24 != (ulong *******)0x0) {
    for (; pppppppuVar24 != pppppppuVar33; pppppppuVar33 = pppppppuVar33 + -3) {
      if (((ulong)pppppppuVar33[-3] & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuVar33[-1],(ulong)pppppppuVar33[-3] & 0xfffffffffffffffe);
      }
    }
    pppppppuStack_360 = pppppppuVar24;
    thunk_FUN_0ee326a0(pppppppuStack_368,(long)pppppppuStack_358 - (long)pppppppuStack_368);
  }
  if (cVar18 == '\0') {
    ppppppuStack_b8 = (ulong ******)0x91c2da14ad92ec68;
    ppppppuStack_b0 = (ulong ******)&UNK_0140f690;
    ppppppuStack_a8 = (ulong ******)0x1;
    uStack_a0 = 0x170;
    if ((uStack_308 & 1) == 0) {
LAB_0b727ef4:
      uStack_a0 = 0x170;
      ppppppuStack_a8 = (ulong ******)0x1;
      ppppppuStack_b0 = (ulong ******)&UNK_0140f690;
      ppppppuStack_b8 = (ulong ******)0x91c2da14ad92ec68;
      func_0x0eedea30(&uStack_228);
      func_0x0eedeb80(2,0x2d,auStack_348,&uStack_228,&ppppppuStack_b8);
      if (((ulong)uStack_228 & 1) != 0) {
        thunk_FUN_0ee326a0(pppppppuStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
      }
    }
    lVar21 = (long)uStack_320;
    if (((byte)uStack_308 & 1) == 0) {
      pppppppuVar24 = pppppppuStack_318;
      if (uStack_320 != (ulong ******)0x0) {
        while ((ulong *******)lVar21 != pppppppuVar24) {
          func_0x048b3e80((long)pppppppuVar24 + -0x40);
          pppppppuVar24 = (ulong *******)((long)pppppppuVar24 + -0x40);
        }
        pppppppuStack_318 = (ulong *******)lVar21;
        thunk_FUN_0ee326a0(uStack_320,(long)pppppppuStack_310 - (long)uStack_320);
      }
      pppppppuVar33 = uStack_338;
      pppppppuVar24 = uStack_330;
      if (uStack_338 != (ulong *******)0x0) {
        for (; pppppppuVar33 != pppppppuVar24; pppppppuVar24 = pppppppuVar24 + -10) {
          if ((*(byte *)(pppppppuVar24 + -1) == 1) && (((ulong)pppppppuVar24[-6] & 1) != 0)) {
            thunk_FUN_0ee326a0(pppppppuVar24[-4],(ulong)pppppppuVar24[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_330 = pppppppuVar33;
        thunk_FUN_0ee326a0(uStack_338,(long)uStack_328 - (long)uStack_338);
      }
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x124cf73  Failed to load global prefab DB: 
 * 0x124cf83  lobal prefab DB: 
 * 0x124cf95  Failed to load prefab DB instances: 
 * 0x124cfa5  refab DB instances: 
 * 0x1334958  Failed to load project prefab DB: 
 * 0x1334968  roject prefab DB: 
 * 0x1384ed1  Prefab instance [
 */
