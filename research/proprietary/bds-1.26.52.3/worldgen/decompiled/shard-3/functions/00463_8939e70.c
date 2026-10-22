/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8a39e70 (ELF vaddr 0x8939e70)
 * Label: caller-of-callee
 * Body:  [[08a39e70, 08a3b29b] [08a3b2a0, 08a3bca5] [08a3bfc6, 08a3c07f] [09f4e330, 09f4e654] [09f4e660, 09f4e738] [09f4e740, 09f4e775] [09f4e780, 09f4e7e7] [09f4e7f0, 09f4e809] [09f4e810, 09f4e9ea] [09f4e9f0, 09f4ec04] [09f4ec10, 09f4eda8] [09f4edb8, 09f4eddd]]
 * Ghidra: FUN_08a39e70
 */


/* WARNING: Possible PIC construction at 0x08a3b096: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08a39e70(undefined **param_1,undefined8 param_2,long param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long *plVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined **ppuVar23;
  ulong uVar24;
  undefined1 uVar25;
  undefined **ppuVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  byte *pbVar30;
  char *pcVar31;
  ulong uVar32;
  undefined8 *puVar33;
  undefined **ppuVar34;
  undefined7 *puVar35;
  long lVar36;
  undefined **unaff_R12;
  ulong uVar37;
  long unaff_R13;
  ulong uVar38;
  byte *pbVar39;
  bool bVar40;
  undefined8 uStack_420;
  undefined4 auStack_418 [2];
  undefined8 uStack_410;
  uint uStack_408;
  long *plStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  uint *puStack_3e8;
  undefined4 uStack_3e0;
  byte *pbStack_3d8;
  undefined4 uStack_3d0;
  uint uStack_3c8;
  undefined **ppuStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  uint uStack_390;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  uint uStack_360;
  uint uStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined1 uStack_329;
  uint uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined *puStack_318;
  long lStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  byte *pbStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined1 *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  byte *pbStack_290;
  uint uStack_284;
  byte bStack_280;
  undefined7 uStack_27f;
  undefined **ppuStack_278;
  undefined7 *puStack_270;
  undefined *puStack_268;
  byte *pbStack_260;
  undefined4 uStack_258;
  char cStack_250;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [8];
  long *plStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  uint auStack_1b8 [4];
  undefined4 uStack_1a8;
  uint uStack_198;
  uint uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_48;
  
  puVar33 = (undefined8 *)auStack_418;
  uVar22 = (ulong)param_5;
  puStack_68 = &UNK_0f13aa78;
  ppuStack_48 = &puStack_68;
  uStack_240 = param_2;
  ppuStack_60 = param_1;
  if (param_1[0x11] == (undefined *)0x0) {
    uStack_420 = 0x8a39eee;
    cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
    if (cVar7 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if (*param_1[0x11] == '\0') {
    uStack_420 = 0x8a39f31;
    cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
    if (cVar7 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uStack_420 = 0x8a39f58;
  (**(code **)(*(long *)param_1[0x13] + 0x920))(&ppuStack_1f8);
  uStack_420 = 0x8a39f6d;
  func_0x0d87c4c0(&uStack_1e8);
  puStack_268 = (undefined *)uStack_1e8;
  pbStack_260 = uStack_1e0;
  uStack_258 = (undefined4)uStack_1d8;
  cStack_250 = '\x01';
  auStack_238._0_8_ = *(undefined8 *)(param_4 + 0x110);
  auStack_238._8_8_ = *(undefined8 *)(param_4 + 0x118);
  if ((param_4[0x18] & 1) == 0) {
    puStack_2b8 = *(undefined1 **)(param_4 + 0x28);
    uStack_2c8 = *(uint *)(param_4 + 0x18);
    uStack_2c4 = *(undefined4 *)(param_4 + 0x1c);
    uStack_2c0 = *(undefined8 *)(param_4 + 0x20);
    ppuVar34 = ppuStack_1f8;
  }
  else {
    ppuVar34 = *(undefined ***)(param_4 + 0x28);
    uStack_420 = 0x8a39fdc;
    func_0x0412e5e0(&uStack_2c8,ppuVar34,*(undefined8 *)(param_4 + 0x20));
  }
  uStack_34c = param_5 & 0xff;
  if (*(int *)(param_3 + 0x90) == 1) {
    ppuVar34 = (undefined **)(ulong)uStack_34c;
    uStack_420 = 0x8a3a005;
    auStack_238 = func_0x08b43aa0(auStack_238);
    if ((uStack_2c8 & 1) == 0) {
      uStack_2c8 = uStack_2c8 & 0xffffff00;
      puVar14 = (undefined1 *)((long)&uStack_2c8 + 1);
    }
    else {
      uStack_2c0 = 0;
      puVar14 = puStack_2b8;
    }
    *puVar14 = 0;
  }
  uStack_420 = 0x8a3a06b;
  lStack_308 = param_3;
  uStack_2a8 = param_4;
  uStack_284 = param_5;
  func_0x0412d550(0xf551a30);
  LOCK();
  _DAT_0f551b00 = _DAT_0f551b00 + 1;
  UNLOCK();
  uVar38 = 0xf551a30;
  uStack_420 = 0x8a3a082;
  FUN_0412d610(0xf551a30);
  lVar36 = lStack_308;
  plVar19 = _DAT_0f551b18;
  pbVar30 = _DAT_0f551b10;
  if ((_DAT_0f551b10 == (byte *)0x0) || (*_DAT_0f551b10 != 1)) {
LAB_08a3bc92:
    uStack_420 = 0x8a3bc9e;
    ppuVar23 = (undefined **)func_0x0eee02f0(0xf551a30);
    ppuVar15 = ppuVar34;
    if (((ulong)uStack_348 & 1) != 0) {
      ppuVar15 = (undefined **)((ulong)uStack_348 & 0xfffffffffffffffe);
      uStack_420 = 0x8a3bfe9;
      func_0x0412a280(puStack_338);
    }
    if ((uStack_2c8 & 1) != 0) {
      ppuVar15 = (undefined **)(CONCAT44(uStack_2c4,uStack_2c8) & 0xfffffffffffffffe);
      uStack_420 = 0x8a3c00c;
      func_0x0412a280(puStack_2b8);
    }
    uStack_420 = 0x8a3c019;
    func_0x0d87ba30(&puStack_268);
    uStack_420 = 0x8a3c026;
    func_0x0495e910(&ppuStack_1f8);
    lVar36 = 0x20;
    ppuVar34 = ppuStack_48;
    if ((ppuStack_48 != &puStack_68) && (lVar36 = 0x28, ppuStack_48 == (undefined **)0x0)) {
      uStack_420 = 0x8a3c052;
      ppuVar34 = ppuVar23;
      lVar36 = func_0x0eee2d70();
    }
    uStack_420 = 0x8a3c058;
    (**(code **)(*ppuVar34 + lVar36))();
    uStack_420 = 0x8a3c060;
    ppuVar34 = ppuVar23;
    func_0x0eee2d70();
    puVar18 = ppuVar34[0x1d];
    if (puVar18 == (undefined *)0x0) {
      return;
    }
    bVar8 = ppuVar34[0x48][0x20];
  }
  else {
    bVar8 = 1;
    if (_DAT_0f551b18 != (long *)0x0) {
      LOCK();
      _DAT_0f551b18[1] = _DAT_0f551b18[1] + 1;
      UNLOCK();
      bVar8 = *pbVar30;
    }
    lVar16 = _DAT_0f551b20;
    uStack_1e8 = (undefined4 *)0xf551a30;
    uStack_1e0 = (byte *)CONCAT71(uStack_1e0._1_7_,1);
    uStack_1d8 = pbVar30;
    pbStack_1d0 = (byte *)plVar19;
    uStack_1c8 = (long *)_DAT_0f551b20;
    ppuStack_380 = param_1;
    if ((bVar8 & 1) == 0) {
      uStack_420 = 0x8a3a11e;
      cVar7 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014785c6);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    ppuVar23 = ppuStack_380;
    uVar25 = *(undefined1 *)(lVar16 + 0x270);
    uStack_1d8 = (undefined *)0x0;
    pbStack_1d0 = (byte *)0x0;
    if (plVar19 == (long *)0x0) {
LAB_08a3a1bd:
    }
    else {
      LOCK();
      plVar29 = plVar19 + 1;
      lVar16 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar16 != 0) {
        uStack_1c8 = (long *)0x0;
        goto LAB_08a3a1bd;
      }
      uStack_420 = 0x8a3a186;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      uStack_420 = 0x8a3a18e;
      func_0x0412c2d0(plVar19);
      pbVar30 = pbStack_1d0;
      uStack_1c8 = (long *)0x0;
      if (pbStack_1d0 == (byte *)0x0) goto LAB_08a3a1bd;
      uStack_1c8 = (long *)0x0;
      LOCK();
      pbVar39 = pbStack_1d0 + 8;
      lVar16 = *(long *)pbVar39;
      *(long *)pbVar39 = *(long *)pbVar39 + -1;
      UNLOCK();
      if (lVar16 != 0) goto LAB_08a3a1bd;
      uStack_420 = 0x8a3a57a;
      (**(code **)(*(long *)pbStack_1d0 + 0x10))(pbStack_1d0);
      uStack_420 = 0x8a3a582;
      func_0x0412c2d0(pbVar30);
    }
    if ((byte)uStack_1e0 == '\x01') {
      uStack_420 = 0x8a3a1d4;
      func_0x0eee02f0(uStack_1e8);
    }
    pcVar31 = ppuVar23[0x11];
    plVar19 = (long *)ppuVar23[0x12];
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
    }
    puVar18 = ppuVar23[0x13];
    uStack_348 = pcVar31;
    uStack_340 = (byte *)plVar19;
    puStack_338 = puVar18;
    if (pcVar31 == (char *)0x0) {
      uStack_420 = 0x8a3a238;
      cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (*pcVar31 == '\0') {
      uStack_420 = 0x8a3a274;
      cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    pbStack_290 = (byte *)CONCAT71(pbStack_290._1_7_,uVar25);
    puStack_208 = ppuVar23[0x17];
    puStack_218 = ppuVar23[0x1a];
    puStack_210 = ppuVar23[0x4d];
    uStack_420 = 0x8a3a2d0;
    puStack_200 = puVar18;
    func_0x08b7acc0(&uStack_328,lVar36);
    uVar11 = *(undefined4 *)(lVar36 + 0x90);
    uStack_420 = 0x8a3a2df;
    uVar9 = func_0x08b7b610(lVar36);
    uStack_420 = 0x8a3a2ea;
    uVar10 = func_0x08b7aeb0(lVar36);
    uStack_370 = (byte *)(ulong)(uint)uStack_370;
    uVar22 = (ulong)uStack_368 >> 0x28;
    uStack_368._0_4_ = (uint)uStack_368 & 0xffffff00;
    uStack_368._0_5_ = (uint5)(uint)uStack_368;
    uStack_368 = (undefined4 *)CONCAT35((int3)uVar22,(uint5)uStack_368);
    uStack_360 = CONCAT31(uStack_360._1_3_,1);
    uStack_420 = 0x8a3a324;
    func_0x0730cd00(&uStack_378,lVar36 + 0x48);
    uStack_420 = 0x8a3a33a;
    ppuVar15 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xdf0);
    if (ppuVar15 == (undefined **)0x0) {
      uStack_420 = 0x8a3bc74;
      FUN_0eec74c0(0xdf0,0);
    }
    if (ppuStack_48 == (undefined **)0x0) {
      uStack_1c8 = (long *)0x0;
    }
    else if (ppuStack_48 == &puStack_68) {
      uStack_1c8 = &uStack_1e8;
      uStack_420 = 0x8a3a38a;
      (**(code **)(*ppuStack_48 + 0x18))();
    }
    else {
      uStack_420 = 0x8a3a366;
      uStack_1c8 = (long *)(**(code **)(*ppuStack_48 + 0x10))();
    }
    uStack_3d0 = *(undefined4 *)(ppuVar23 + 0x47);
    uStack_398 = (uint)uStack_368;
    uStack_394 = uStack_368._4_4_;
    uStack_390 = uStack_360;
    uStack_3a8 = (ulong)uStack_378;
    uStack_3a0 = (ulong)uStack_370;
    uStack_3f8 = auStack_238._0_4_;
    uStack_3f4 = auStack_238._4_4_;
    uStack_3f0 = auStack_238._8_4_;
    uStack_3ec = auStack_238._12_4_;
    ppuStack_3c0 = &puStack_268;
    uStack_3c8 = (uint)(byte)pbStack_290;
    pbStack_3d8 = uStack_2a8;
    puStack_3e8 = &uStack_328;
    uStack_408 = uStack_34c;
    uStack_410 = uStack_240;
    auStack_418[0] = 0;
    uStack_420 = 0x8a3a457;
    plStack_400 = &uStack_1e8;
    uStack_3e0 = uVar11;
    uStack_3b8 = uVar9;
    uStack_3b0 = uVar10;
    func_0x09f6a6e0(ppuVar15,puStack_200,puStack_218,puStack_208,puStack_210,5);
    lVar36 = lStack_308;
    if (uStack_1c8 == &uStack_1e8) {
      lVar16 = 0x20;
LAB_08a3a4df:
      uStack_420 = 0x8a3a4e5;
      (**(code **)(*uStack_1c8 + lVar16))();
    }
    else {
      lVar16 = 0x28;
      if (uStack_1c8 != (long *)0x0) goto LAB_08a3a4df;
    }
    if ((uStack_328 & 1) != 0) {
      uStack_420 = 0x8a3a499;
      func_0x0412a280(puStack_318,CONCAT44(uStack_324,uStack_328) & 0xfffffffffffffffe);
    }
    uStack_348 = (undefined *)0x0;
    uStack_340 = (byte *)0x0;
    if (plVar19 == (long *)0x0) {
LAB_08a3a52e:
      puVar18 = ppuVar23[0x11];
    }
    else {
      LOCK();
      plVar29 = plVar19 + 1;
      lVar16 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar16 != 0) {
        puStack_338 = (undefined *)0x0;
        goto LAB_08a3a52e;
      }
      uStack_420 = 0x8a3a4fb;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      uStack_420 = 0x8a3a503;
      func_0x0412c2d0(plVar19);
      pbVar30 = uStack_340;
      puStack_338 = (undefined *)0x0;
      if (uStack_340 == (byte *)0x0) goto LAB_08a3a52e;
      puStack_338 = (undefined *)0x0;
      LOCK();
      pbVar39 = uStack_340 + 8;
      lVar16 = *(long *)pbVar39;
      *(long *)pbVar39 = *(long *)pbVar39 + -1;
      UNLOCK();
      if (lVar16 != 0) goto LAB_08a3a52e;
      uStack_420 = 0x8a3a59e;
      (**(code **)(*(long *)uStack_340 + 0x10))(uStack_340);
      uStack_420 = 0x8a3a5a6;
      func_0x0412c2d0(pbVar30);
      puVar18 = ppuVar23[0x11];
    }
    if (puVar18 == (undefined *)0x0) {
      uStack_420 = 0x8a3a560;
      cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (*ppuVar23[0x11] == '\0') {
      uStack_420 = 0x8a3a5e4;
      cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uStack_420 = 0x8a3a603;
    uVar17 = (**(code **)(*(long *)ppuVar23[0x13] + 0x908))();
    uStack_420 = 0x8a3a623;
    ppuStack_2b0 = ppuVar15;
    func_0x0b052470(uVar17,&ppuStack_2b0,&puStack_268);
    ppuVar34 = ppuStack_2b0;
    ppuStack_2b0 = (undefined **)0x0;
    if (ppuVar34 != (undefined **)0x0) {
      uStack_420 = 0x8a3a642;
      (**(code **)(*ppuVar34 + 0x48))();
    }
    puVar18 = ppuVar15[2];
    uVar12 = *(uint *)(ppuVar15 + 3);
    plVar19 = (long *)(*(long *)(puVar18 + 0x38) +
                      (ulong)(((uint)(*(int *)(puVar18 + 0x40) - (int)*(long *)(puVar18 + 0x38)) >>
                              3) - 1 & 0xb845379) * 8);
    do {
      if (*plVar19 == -1) goto LAB_08a3a70a;
      lVar16 = *plVar19 * 0x20;
      plVar19 = (long *)(*(long *)(puVar18 + 0x50) + lVar16);
    } while (*(int *)(*(long *)(puVar18 + 0x50) + 8 + lVar16) != 0xb845379);
    if ((plVar19 == *(long **)(puVar18 + 0x58)) || (lVar16 = plVar19[2], lVar16 == 0)) {
LAB_08a3a70a:
      unaff_R13 = 0;
    }
    else {
      uVar22 = (ulong)((uVar12 & 0x3ffff) >> 0xb);
      if (((ulong)(*(long *)(lVar16 + 0x10) - *(long *)(lVar16 + 8) >> 3) <= uVar22) ||
         ((lVar28 = *(long *)(*(long *)(lVar16 + 8) + uVar22 * 8), lVar28 == 0 ||
          (uVar3 = *(uint *)(lVar28 + (ulong)(uVar12 & 0x7ff) * 4),
          0x3fffe < (uVar12 & 0xfffc0000 ^ uVar3))))) goto LAB_08a3a70a;
      unaff_R13 = (ulong)(uVar3 & 0x7f) * 0x1f8 +
                  *(long *)(*(long *)(lVar16 + 0x50) + (ulong)((uVar3 & 0x3ff80) >> 4));
    }
    uStack_420 = 0x8a3a715;
    puVar18 = (undefined *)func_0x08b77e00(lVar36);
    ppuVar15[0x9a] = puVar18;
    if (unaff_R13 == 0) {
      uStack_378 = (undefined *)0x0;
      uStack_370 = (byte *)0x0;
      uStack_368 = (undefined4 *)0x0;
      uVar22 = 0;
      uStack_378._0_1_ = 0;
      if (((ulong)ppuVar15[0x8e] & 1) != 0) goto LAB_08a3a804;
LAB_08a3a7bb:
      if ((uVar22 & 1) == 0) {
        ppuVar15[0x90] = (undefined *)uStack_368;
        *(undefined4 *)(ppuVar15 + 0x8e) = (undefined4)uStack_378;
        *(undefined4 *)((long)ppuVar15 + 0x474) = uStack_378._4_4_;
        *(uint *)(ppuVar15 + 0x8f) = (uint)uStack_370;
        *(undefined4 *)((long)ppuVar15 + 0x47c) = uStack_370._4_4_;
      }
      else {
        uStack_420 = 0x8a3a843;
        FUN_04885070(ppuVar15 + 0x8e,uStack_368,uStack_370);
      }
    }
    else {
      uVar17 = *(undefined8 *)(unaff_R13 + 0xb8);
      uVar4 = *(undefined8 *)(unaff_R13 + 0xc0);
      uStack_198 = (uint)uVar4 & 0xffff;
      uStack_1e8 = (undefined4 *)CONCAT44(uStack_1e8._4_4_,(int)((ulong)uVar17 >> 0x20));
      uStack_1d8 = (byte *)(CONCAT44(uStack_1d8._4_4_,(int)((ulong)uVar17 >> 0x10)) &
                           0xffffffff0000ffff);
      uStack_1c8 = (long *)(CONCAT44(uStack_1c8._4_4_,(int)uVar17) & 0xffffffff0000ffff);
      auStack_1b8[0] = (uint)(ushort)((ulong)uVar4 >> 0x30);
      uStack_1a8 = (undefined4)((ulong)uVar4 >> 0x10);
      uStack_420 = 0x8a3a7a0;
      func_0x0470d9a0(&uStack_378,&UNK_01287ba2,0x28,0x122112,&uStack_1e8);
      uVar22 = (ulong)uStack_378 & 0xff;
      if (((ulong)ppuVar15[0x8e] & 1) == 0) goto LAB_08a3a7bb;
LAB_08a3a804:
      bVar40 = ((byte)uStack_378 & 1) != 0;
      puVar18 = (undefined *)((long)&uStack_378 + 1);
      if (bVar40) {
        puVar18 = (undefined *)uStack_368;
      }
      uVar22 = (ulong)((byte)uStack_378 >> 1);
      if (bVar40) {
        uVar22 = (ulong)uStack_370;
      }
      uStack_420 = 0x8a3a82c;
      func_0x04885120(ppuVar15 + 0x8e,puVar18,uVar22,(byte)uStack_378 >> 1);
    }
    if (((ulong)uStack_378 & 1) != 0) {
      uStack_420 = 0x8a3a866;
      func_0x0412a280(uStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
    }
    uStack_420 = 0x8a3a876;
    func_0x08b77ce0(&uStack_1e8,lVar36);
    if (((ulong)ppuVar15[0x94] & 1) != 0) {
      uStack_420 = 0x8a3a8a2;
      func_0x0412a280(ppuVar15[0x96],(ulong)ppuVar15[0x94] & 0xfffffffffffffffe);
    }
    ppuVar15[0x96] = uStack_1d8;
    *(undefined4 *)(ppuVar15 + 0x94) = (undefined4)uStack_1e8;
    *(undefined4 *)((long)ppuVar15 + 0x4a4) = uStack_1e8._4_4_;
    *(undefined4 *)(ppuVar15 + 0x95) = (undefined4)uStack_1e0;
    *(undefined4 *)((long)ppuVar15 + 0x4ac) = uStack_1e0._4_4_;
    uStack_420 = 0x8a3a8c9;
    func_0x08b77ee0(&uStack_1e8,lVar36);
    if (((ulong)ppuVar15[0x9b] & 1) != 0) {
      uStack_420 = 0x8a3a8f5;
      func_0x0412a280(ppuVar15[0x9d],(ulong)ppuVar15[0x9b] & 0xfffffffffffffffe);
    }
    ppuVar15[0x9d] = uStack_1d8;
    *(undefined4 *)(ppuVar15 + 0x9b) = (undefined4)uStack_1e8;
    *(undefined4 *)((long)ppuVar15 + 0x4dc) = uStack_1e8._4_4_;
    *(undefined4 *)(ppuVar15 + 0x9c) = (undefined4)uStack_1e0;
    *(undefined4 *)((long)ppuVar15 + 0x4e4) = uStack_1e0._4_4_;
    uStack_420 = 0x8a3a91c;
    func_0x08b78260(&uStack_1e8,lVar36);
    if (((ulong)ppuVar15[0x97] & 1) != 0) {
      uStack_420 = 0x8a3a948;
      func_0x0412a280(ppuVar15[0x99],(ulong)ppuVar15[0x97] & 0xfffffffffffffffe);
    }
    ppuVar15[0x99] = uStack_1d8;
    *(undefined4 *)(ppuVar15 + 0x97) = (undefined4)uStack_1e8;
    *(undefined4 *)((long)ppuVar15 + 0x4bc) = uStack_1e8._4_4_;
    *(undefined4 *)(ppuVar15 + 0x98) = (undefined4)uStack_1e0;
    *(undefined4 *)((long)ppuVar15 + 0x4c4) = uStack_1e0._4_4_;
    uStack_420 = 0x8a3a967;
    uVar11 = func_0x08b7ade0(lVar36);
    *(undefined4 *)((long)ppuVar15 + 0x46c) = uVar11;
    if ((uStack_2a8[0xd8] & 1) == 0) {
      puStack_338 = *(undefined **)(uStack_2a8 + 0xe8);
      uStack_348 = *(char **)(uStack_2a8 + 0xd8);
      uStack_340 = *(byte **)(uStack_2a8 + 0xe0);
    }
    else {
      uStack_420 = 0x8a3a9ba;
      func_0x0412e5e0(&uStack_348,*(undefined8 *)(uStack_2a8 + 0xe8),
                      *(undefined8 *)(uStack_2a8 + 0xe0));
    }
    if (*(int *)(lVar36 + 0x90) == 1) {
      if (((ulong)uStack_348 & 1) == 0) {
        puStack_318 = puStack_338;
        uStack_328 = (uint)uStack_348;
        uStack_324 = uStack_348._4_4_;
        uStack_320 = (undefined4)uStack_340;
        uStack_31c = uStack_340._4_4_;
      }
      else {
        uStack_420 = 0x8a3aa11;
        func_0x0412e5e0(&uStack_328,puStack_338,uStack_340);
      }
      uStack_420 = 0x8a3aa2d;
      func_0x08b43bf0(&uStack_1e8,&uStack_328,uStack_34c);
      if (((ulong)uStack_348 & 1) != 0) {
        uStack_420 = 0x8a3aa50;
        func_0x0412a280(puStack_338,(ulong)uStack_348 & 0xfffffffffffffffe);
      }
      puStack_338 = uStack_1d8;
      uStack_348 = (char *)uStack_1e8;
      uStack_340 = uStack_1e0;
      uStack_1e8 = (undefined4 *)((ulong)uStack_1e8 & 0xffffffffffff0000);
      if ((uStack_328 & 1) != 0) {
        uStack_420 = 0x8a3aa9d;
        func_0x0412a280(puStack_318,CONCAT44(uStack_324,uStack_328) & 0xfffffffffffffffe);
      }
    }
    uStack_420 = 0x8a3aaad;
    func_0x0bc38780(ppuVar15,&uStack_348);
    uStack_420 = 0x8a3aac0;
    func_0x08b78140(&uStack_1e8,lVar36);
    ppuVar34 = ppuVar15 + 0xba;
    if (ppuVar34 != (undefined **)&uStack_1e8) {
      if (((ulong)*ppuVar34 & 1) == 0) {
        if (((ulong)uStack_1e8 & 1) == 0) {
          ppuVar15[0xbc] = uStack_1d8;
          *(undefined4 *)ppuVar34 = (undefined4)uStack_1e8;
          *(undefined4 *)((long)ppuVar15 + 0x5d4) = uStack_1e8._4_4_;
          *(undefined4 *)(ppuVar15 + 0xbb) = (undefined4)uStack_1e0;
          *(undefined4 *)((long)ppuVar15 + 0x5dc) = uStack_1e0._4_4_;
        }
        else {
          uStack_420 = 0x8a3ab33;
          FUN_04885070(ppuVar34,uStack_1d8,uStack_1e0);
        }
      }
      else {
        pbVar30 = (byte *)((ulong)uStack_1e8 >> 1 & 0x7f);
        puVar18 = (undefined *)((long)&uStack_1e8 + 1);
        if (((ulong)uStack_1e8 & 1) != 0) {
          pbVar30 = uStack_1e0;
          puVar18 = uStack_1d8;
        }
        uStack_420 = 0x8a3ab1c;
        func_0x04885120(ppuVar34,puVar18,pbVar30);
      }
    }
    if (((ulong)uStack_1e8 & 1) != 0) {
      uStack_420 = 0x8a3ab56;
      func_0x0412a280(uStack_1d8,(ulong)uStack_1e8 & 0xfffffffffffffffe);
    }
    uStack_420 = 0x8a3ab66;
    func_0x08b7b6f0(&uStack_300,lVar36);
    pbVar30 = pbStack_2f0;
    uVar12 = (uint)uStack_300;
    uVar38 = (ulong)(byte)uStack_300;
    uVar22 = CONCAT44(uStack_2f4,uStack_2f8);
    uVar24 = (ulong)((byte)uStack_300 >> 1);
    if (((uint)uStack_300 & 1) != 0) {
      uVar24 = uVar22;
    }
    param_1 = (undefined **)&uStack_1e8;
    if (uVar24 == 5) {
      pbStack_290 = (byte *)((long)&uStack_300 + 1);
      if (((uint)uStack_300 & 1) != 0) {
        pbStack_290 = pbStack_2f0;
      }
      ppuVar23 = (undefined **)(ulong)*pbStack_290;
      uStack_420 = 0x8a3abba;
      plVar19 = (long *)func_0x0eee38c0();
      lVar36 = *plVar19;
      param_1 = ppuVar15;
      if ((*(byte *)(lVar36 + 1 + (long)ppuVar23 * 2) & 2) != 0) {
        pbVar39 = (byte *)((long)&uStack_300 + 2);
        if ((uVar12 & 1) != 0) {
          pbVar39 = pbVar30 + 1;
        }
        if ((*(byte *)(lVar36 + 1 + (ulong)*pbVar39 * 2) & 2) != 0) {
          pbVar39 = (byte *)((long)&uStack_300 + 3);
          if ((uVar12 & 1) != 0) {
            pbVar39 = pbVar30 + 2;
          }
          if (*pbVar39 == 0x5f) {
            pbVar39 = (byte *)((long)&uStack_300 + 4);
            if ((uVar12 & 1) != 0) {
              pbVar39 = pbVar30 + 3;
            }
            if ((*(byte *)(lVar36 + 1 + (ulong)*pbVar39 * 2) & 1) != 0) {
              pbVar39 = (byte *)((long)&uStack_300 + 5);
              if ((uVar12 & 1) != 0) {
                pbVar39 = pbVar30 + 4;
              }
              if (((*(byte *)(lVar36 + 1 + (ulong)*pbVar39 * 2) & 1) != 0) &&
                 (ppuVar34 = ppuVar15 + 0x17b, ppuVar34 != (undefined **)&uStack_300)) {
                if (((ulong)*ppuVar34 & 1) == 0) {
                  if ((uVar12 & 1) == 0) {
                    ppuVar15[0x17d] = pbStack_2f0;
                    *(uint *)ppuVar34 = (uint)uStack_300;
                    *(undefined4 *)((long)ppuVar15 + 0xbdc) = uStack_300._4_4_;
                    *(undefined4 *)(ppuVar15 + 0x17c) = uStack_2f8;
                    *(undefined4 *)((long)ppuVar15 + 0xbe4) = uStack_2f4;
                  }
                  else {
                    uStack_420 = 0x8a3aca2;
                    FUN_04885070(ppuVar34,pbVar30,uVar22);
                  }
                }
                else {
                  uStack_420 = 0x8a3ac95;
                  func_0x04885120(ppuVar34,pbStack_290,5);
                }
              }
            }
          }
        }
      }
    }
    if (ppuStack_380[0x11] == (undefined *)0x0) {
      uStack_420 = 0x8a3acdc;
      cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (*ppuStack_380[0x11] == '\0') {
      uStack_420 = 0x8a3ad27;
      cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uStack_420 = 0x8a3ad4e;
    uVar17 = (**(code **)(*(long *)ppuStack_380[0x13] + 0xe8))();
    uStack_420 = 0x8a3ad59;
    func_0x0bbdf980(uVar17,ppuVar15);
    if ((*uStack_2a8 & 1) == 0) {
      uVar24 = (ulong)(*uStack_2a8 >> 1);
    }
    else {
      uVar24 = *(ulong *)(uStack_2a8 + 8);
    }
    uStack_420 = 0x8a3ad8f;
    func_0x09f7bd10(ppuStack_380 + 0x14,ppuVar15,uVar24 != 0);
    uStack_420 = 0x8a3ad97;
    plVar19 = (long *)func_0x0b3cf240(ppuVar15);
    unaff_R12 = ppuVar15;
    if ((unaff_R13 != 0) && (*plVar19 == -1)) {
      puVar18 = ppuVar15[2];
      uVar12 = *(uint *)(ppuVar15 + 3);
      ppuVar34 = (undefined **)
                 (*(long *)(puVar18 + 0x38) +
                 (ulong)(((uint)(*(int *)(puVar18 + 0x40) - (int)*(long *)(puVar18 + 0x38)) >> 3) -
                         1 & 0x18f957af) * 8);
      do {
        if (*ppuVar34 == (undefined *)0xffffffffffffffff) {
          ppuVar26 = *(undefined ***)(puVar18 + 0x58);
          ppuVar34 = ppuVar26;
          goto LAB_08a3ae19;
        }
        lVar36 = (long)*ppuVar34 * 0x20;
        ppuVar34 = (undefined **)(*(long *)(puVar18 + 0x50) + lVar36);
      } while (*(int *)(*(long *)(puVar18 + 0x50) + 8 + lVar36) != 0x18f957af);
      ppuVar26 = *(undefined ***)(puVar18 + 0x58);
LAB_08a3ae19:
      if ((ppuVar34 != ppuVar26) && (puVar18 = ppuVar34[2], puVar18 != (undefined *)0x0)) {
        ppuVar34 = (undefined **)(ulong)(uVar12 & 0x3ffff);
        uVar24 = (ulong)((uVar12 & 0x3ffff) >> 0xb);
        if ((uVar24 < (ulong)(*(long *)(puVar18 + 0x10) - *(long *)(puVar18 + 8) >> 3)) &&
           (lVar36 = *(long *)(*(long *)(puVar18 + 8) + uVar24 * 8), lVar36 != 0)) {
          uVar3 = *(uint *)(lVar36 + (ulong)(uVar12 & 0x7ff) * 4);
          ppuVar34 = (undefined **)(ulong)uVar3;
          if (((uVar12 & 0xfffc0000 ^ uVar3) < 0x3ffff) &&
             (lVar36 = *(long *)(*(long *)(puVar18 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)),
             lVar36 != 0)) {
            *(ulong *)(lVar36 + (ulong)(uVar3 & 0x7f) * 8) =
                 *(ulong *)(unaff_R13 + 0xc0) ^ *(ulong *)(unaff_R13 + 0xb8);
            goto LAB_08a3aea7;
          }
        }
      }
      goto LAB_08a3bc88;
    }
LAB_08a3aea7:
    ppuVar15[0x37] = ppuVar15[0x9a];
    if (ppuStack_380[0x11] == (undefined *)0x0) {
      uStack_420 = 0x8a3aee9;
      cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (*ppuStack_380[0x11] == '\0') {
      uStack_420 = 0x8a3af34;
      cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uStack_420 = 0x8a3af5b;
    lVar36 = (**(code **)(*(long *)ppuStack_380[0x13] + 0x568))();
    if (*(char *)(lVar36 + 0x374) == '\x01') {
      if (ppuStack_380[0x11] == (undefined *)0x0) {
        uStack_420 = 0x8a3afa2;
        cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
        if (cVar7 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      if (*ppuStack_380[0x11] == '\0') {
        uStack_420 = 0x8a3afed;
        cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
        if (cVar7 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      uStack_420 = 0x8a3b014;
      param_1 = (undefined **)(**(code **)(*(long *)ppuStack_380[0x13] + 0x568))();
      uStack_420 = 0x8a3b02a;
      lVar36 = func_0x0d2279e0(param_1 + 0xa3,0xf71d6f8);
      if (lVar36 == 0) {
        param_1 = param_1 + 0x9e;
        uStack_420 = 0x8a3b045;
        lVar36 = func_0x0d2279e0(param_1,0xf71d6f8);
        if (lVar36 != 0) goto LAB_08a3b04a;
        uVar11 = 5;
      }
      else {
LAB_08a3b04a:
        uVar11 = 5;
        if (*(int *)(lVar36 + 0x50) == 5) {
          uVar11 = *(undefined4 *)(lVar36 + 0x38);
        }
      }
      uStack_420 = 0x8a3b06c;
      (**(code **)(*ppuVar15 + 0x698))(ppuVar15,uVar11);
    }
    puVar18 = ppuStack_380[0x1d];
    if (puVar18 == (undefined *)0x0) {
      if (ppuStack_380[0x11] == (undefined *)0x0) {
        uStack_420 = 0x8a3b0d5;
        cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
        if (cVar7 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      if (*ppuStack_380[0x11] == '\0') {
        uStack_420 = 0x8a3b120;
        cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
        if (cVar7 != '\0') {
          _DAT_00000000 = 0xdeadc0de;
        }
      }
      uStack_420 = 0x8a3b147;
      lVar36 = (**(code **)(*(long *)ppuStack_380[0x13] + 0x568))();
      if (*(char *)(lVar36 + 0x451) == '\x01') {
        uStack_420 = 0x8a3b161;
        bVar8 = (**(code **)(*ppuVar15 + 0x330))(ppuVar15);
        if (bVar8 < (byte)ppuStack_380[0x48][0x20]) goto LAB_08a3b2e3;
        puVar18 = ppuVar15[2];
        uVar12 = *(uint *)(ppuVar15 + 3);
        ppuVar23 = (undefined **)
                   (*(long *)(puVar18 + 0x38) +
                   (ulong)((int)((ulong)(*(long *)(puVar18 + 0x40) - *(long *)(puVar18 + 0x38)) >> 3
                                ) - 1U & 0x68b75d48) * 8);
        ppuVar34 = *(undefined ***)(puVar18 + 0x50);
        do {
          puVar5 = *ppuVar23;
          if (puVar5 == (undefined *)0xffffffffffffffff) {
            ppuVar26 = *(undefined ***)(puVar18 + 0x58);
            ppuVar23 = ppuVar26;
            goto LAB_08a3b1d8;
          }
          ppuVar23 = ppuVar34 + (long)puVar5 * 4;
        } while (*(int *)(ppuVar34 + (long)puVar5 * 4 + 1) != 0x68b75d48);
        ppuVar26 = *(undefined ***)(puVar18 + 0x58);
LAB_08a3b1d8:
        if ((ppuVar23 != ppuVar26) && (puVar18 = ppuVar23[2], puVar18 != (undefined *)0x0)) {
          ppuVar34 = (undefined **)(ulong)((uVar12 & 0x3ffff) >> 0xb);
          if ((ppuVar34 < (undefined **)(*(long *)(puVar18 + 0x10) - *(long *)(puVar18 + 8) >> 3))
             && ((ppuVar34 = *(undefined ***)(*(long *)(puVar18 + 8) + (long)ppuVar34 * 8),
                 ppuVar34 != (undefined **)0x0 &&
                 (uVar3 = *(uint *)((long)ppuVar34 + (ulong)(uVar12 & 0x7ff) * 4),
                 (uVar12 & 0xfffc0000 ^ uVar3) < 0x3ffff)))) {
            lVar36 = *(long *)(*(long *)(puVar18 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8));
            param_1 = (undefined **)0x0;
            if (lVar36 != 0) {
              lVar16 = (ulong)(uVar3 & 0x7f) * 0x5b8;
              cVar7 = *(char *)(lVar36 + 1 + lVar16);
              *(undefined1 *)(lVar36 + 1 + lVar16) = 2;
              uStack_420 = 0x8a3b27d;
              func_0x0495d5f0(*(undefined8 *)(lVar36 + 8 + lVar16));
              if (cVar7 == '\x03') {
                lVar28 = lVar16 + lVar36;
                lVar27 = 0;
                do {
                  if ((*(byte *)(lVar28 + 0x110 + lVar27) & 4) != 0) {
                    puVar14 = (undefined1 *)(lVar28 + 0x110 + lVar27);
                    pcVar31 = puVar14 + -8;
                    if (*pcVar31 != '\x01') {
                      *(undefined1 *)(lVar28 + 0x20 + lVar27) = *puVar14;
                      *(undefined8 *)(lVar28 + 0x18 + lVar27) = *(undefined8 *)pcVar31;
                    }
                  }
                  lVar27 = lVar27 + 0xc;
                } while (lVar27 != 0xf0);
              }
              uStack_420 = 0x8a3b2e3;
              func_0x0bc26b90(lVar36 + lVar16 + 0x108,2);
              goto LAB_08a3b2e3;
            }
          }
        }
LAB_08a3bc88:
        uStack_420 = 0x8a3bc8d;
        func_0x04890760();
      }
      else {
LAB_08a3b2e3:
        uStack_420 = 0x8a3b300;
        func_0x0bc05720(auStack_228,&uStack_2c8,lStack_308);
        uStack_420 = 0x8a3b30d;
        func_0x08a2d5d0(auStack_228);
        uVar12 = uStack_284;
        uStack_420 = 0x8a3b32b;
        func_0x0bc61610(ppuVar15,auStack_228,uStack_34c);
        uStack_1e8 = (undefined4 *)CONCAT44(uStack_1e8._4_4_,(int)(char)uVar12);
        ppuVar34 = (undefined **)&UNK_013cc252;
        uStack_420 = 0x8a3b35b;
        func_0x0470d9a0(&bStack_280,&UNK_013cc252,3,1,&uStack_1e8);
        bVar8 = bStack_280;
        uVar22 = (ulong)bStack_280;
        param_1 = ppuStack_278;
        if ((bStack_280 & 1) == 0) {
          param_1 = (undefined **)(ulong)(bStack_280 >> 1);
        }
        pbVar30 = (byte *)((long)param_1 + 0x11);
        if (pbVar30 < (byte *)0xfffffffffffffff8) {
          if (pbVar30 < (byte *)0x17) {
            uStack_370 = (byte *)0x0;
            uStack_368 = (undefined4 *)0x0;
            uStack_378 = (undefined *)(ulong)(byte)((char)pbVar30 * '\x02');
          }
          else {
            uVar22 = 0x1a;
            if (((ulong)pbVar30 | 7) != 0x17) {
              uVar22 = ((ulong)pbVar30 | 7) + 1;
            }
            uStack_420 = 0x8a3b3e2;
            puVar20 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
            if (puVar20 == (undefined4 *)0x0) {
              uStack_420 = 0x8a3bc83;
              FUN_0eec74c0(uVar22,0);
            }
            uStack_378 = (undefined *)(uVar22 | 1);
            uStack_370 = pbVar30;
            uStack_368 = puVar20;
          }
          bVar40 = ((ulong)uStack_378 & 1) != 0;
          puVar20 = (undefined4 *)((long)&uStack_378 + 1);
          if (bVar40) {
            puVar20 = uStack_368;
          }
          lVar36 = (long)uStack_368 + 0x11;
          *puVar20 = _DAT_0125ee7d;
          puVar20[1] = _UNK_0125ee81;
          puVar20[2] = _UNK_0125ee85;
          puVar20[3] = _UNK_0125ee89;
          *(undefined1 *)(puVar20 + 4) = 0x2e;
          lVar16 = (long)&uStack_368 + 2;
          if (bVar40) {
            lVar16 = lVar36;
          }
          if (param_1 != (undefined **)0x0) {
            puVar35 = puStack_270;
            if ((bVar8 & 1) == 0) {
              puVar35 = &uStack_27f;
            }
            uStack_420 = 0x8a3b460;
            func_0x0eee2ee0(lVar16,puVar35,param_1);
          }
          *(byte *)((long)param_1 + lVar16) = 0;
          uStack_420 = 0x8a3b47a;
          func_0x08b78380(&uStack_2e8,lStack_308);
          bVar40 = (uStack_2e8 & 1) != 0;
          lVar36 = (long)&uStack_2e8 + 1;
          if (bVar40) {
            lVar36 = CONCAT44(uStack_2d4,uStack_2d8);
          }
          uVar22 = (ulong)((byte)uStack_2e8 >> 1);
          if (bVar40) {
            uVar22 = CONCAT44(uStack_2dc,uStack_2e0);
          }
          uStack_420 = 0x8a3b4af;
          puVar21 = (undefined8 *)func_0x0412f8c0(&uStack_378,lVar36,uVar22);
          pbVar30 = (byte *)*puVar21;
          puVar18 = (undefined *)puVar21[1];
          pbVar39 = (byte *)puVar21[2];
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          uStack_1e8 = (undefined4 *)0x0;
          if (((ulong)pbVar30 & 1) == 0) {
            uStack_1e0 = pbVar30;
            uStack_1d8 = puVar18;
            pbStack_1d0 = pbVar39;
            uVar12 = (uint)pbVar30;
          }
          else {
            uStack_420 = 0x8a3b508;
            func_0x0412e5e0(&uStack_1e0,pbVar39);
            uVar12 = (uint)(byte)uStack_1e0;
          }
          uStack_1c8 = (long *)0x0;
          puVar18 = (undefined *)(ulong)(byte)((byte)uVar12 >> 1);
          if ((uVar12 & 1) != 0) {
            puVar18 = uStack_1d8;
          }
          uStack_2a8 = pbVar39;
          if (puVar18 == (undefined *)0x0) {
LAB_08a3b626:
            uStack_1e8 = (undefined4 *)0x0;
            bVar8 = *(byte *)(ppuVar15 + 0x3c);
          }
          else {
            if ((uVar12 & 1) == 0) {
              pbVar39 = (byte *)((long)&uStack_1e0 + 1);
              if (pbVar39 == (byte *)0x0) goto LAB_08a3b657;
LAB_08a3b55b:
              if (*pbVar39 == 0) goto LAB_08a3b626;
              puVar18 = (undefined *)0xcbf29ce484222325;
              uStack_420 = 0x8a3b577;
              uVar22 = strlen(pbVar39);
              if (uVar22 != 0) {
                uVar38 = (ulong)((uint)uVar22 & 7);
                if (7 < uVar22) {
                  uVar22 = uVar22 & 0xfffffffffffffff8;
                  do {
                    puVar18 = (undefined *)
                              (((((((((long)puVar18 * 0x100000001b3 ^ (ulong)*pbVar39) *
                                     0x100000001b3 ^ (ulong)pbVar39[1]) * 0x100000001b3 ^
                                   (ulong)pbVar39[2]) * 0x100000001b3 ^ (ulong)pbVar39[3]) *
                                  0x100000001b3 ^ (ulong)pbVar39[4]) * 0x100000001b3 ^
                                (ulong)pbVar39[5]) * 0x100000001b3 ^ (ulong)pbVar39[6]) *
                               0x100000001b3 ^ (ulong)pbVar39[7]);
                    pbVar39 = pbVar39 + 8;
                    uVar22 = uVar22 - 8;
                  } while (uVar22 != 0);
                }
                if (uVar38 != 0) {
                  uVar22 = 0;
                  do {
                    puVar18 = (undefined *)((long)puVar18 * 0x100000001b3 ^ (ulong)pbVar39[uVar22]);
                    uVar22 = uVar22 + 1;
                  } while (uVar38 != uVar22);
                }
              }
            }
            else {
              pbVar39 = pbStack_1d0;
              if (pbStack_1d0 != (byte *)0x0) goto LAB_08a3b55b;
LAB_08a3b657:
              puVar18 = (undefined *)0x0;
            }
            bVar8 = *(byte *)(ppuVar15 + 0x3c);
            uStack_1e8 = (undefined4 *)puVar18;
          }
          if ((bVar8 & 1) != 0) {
            uStack_420 = 0x8a3b68e;
            func_0x0412a280(ppuVar15[0x3e],(ulong)ppuVar15[0x3c] & 0xfffffffffffffffe);
          }
          ppuVar15[0x3e] = pbStack_1d0;
          *(undefined4 *)(ppuVar15 + 0x3c) = (undefined4)uStack_1e0;
          *(undefined4 *)((long)ppuVar15 + 0x1e4) = uStack_1e0._4_4_;
          *(undefined4 *)(ppuVar15 + 0x3d) = (undefined4)uStack_1d8;
          *(undefined4 *)((long)ppuVar15 + 0x1ec) = uStack_1d8._4_4_;
          uStack_1e0 = (byte *)((ulong)uStack_1e0 & 0xffffffffffff0000);
          ppuVar15[0x3b] = (undefined *)uStack_1e8;
          ppuVar15[0x3f] = (undefined *)0x0;
          ppuVar34 = ppuStack_380;
          if (((ulong)pbVar30 & 1) != 0) {
            uStack_420 = 0x8a3ba1b;
            func_0x0412a280(uStack_2a8,(ulong)pbVar30 & 0xfffffffffffffffe);
            ppuVar34 = ppuStack_380;
          }
          ppuStack_380 = ppuVar34;
          lVar36 = lStack_308;
          if ((uStack_2e8 & 1) != 0) {
            uStack_420 = 0x8a3ba4a;
            func_0x0412a280(CONCAT44(uStack_2d4,uStack_2d8),
                            CONCAT44(uStack_2e4,uStack_2e8) & 0xfffffffffffffffe);
            lVar36 = lStack_308;
          }
          lStack_308 = lVar36;
          if (((ulong)uStack_378 & 1) != 0) {
            uStack_420 = 0x8a3b70e;
            func_0x0412a280(uStack_368,(ulong)uStack_378 & 0xfffffffffffffffe);
          }
          uStack_420 = 0x8a3b71d;
          func_0x09f7c110(ppuVar15 + 1);
          if (*(undefined **)((long)ppuVar34 + 0x88) == (undefined *)0x0) {
            uStack_420 = 0x8a3b74f;
            cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
            if (cVar7 != '\0') {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          if (**(undefined **)((long)ppuVar34 + 0x88) == '\0') {
            uStack_420 = 0x8a3b792;
            cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
            if (cVar7 != '\0') {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          uStack_378 = (undefined *)((ulong)uStack_378 & 0xffffffffffffff00);
          uVar12 = uStack_360 >> 8;
          uStack_360 = uStack_360 & 0xffffff00;
          if (cStack_250 == '\x01') {
            uStack_378 = puStack_268;
            uStack_370 = pbStack_260;
            uStack_368 = (undefined4 *)CONCAT44(uStack_368._4_4_,uStack_258);
            uStack_360 = CONCAT31((int3)uVar12,1);
            cStack_250 = '\0';
          }
          uStack_420 = 0x8a3b801;
          (**(code **)(**(long **)((long)ppuVar34 + 0x98) + 0x178))
                    (*(long **)((long)ppuVar34 + 0x98),&uStack_378);
          if ((char)uStack_360 == '\x01') {
            uStack_360 = uStack_360 & 0xffffff00;
            uStack_1e8 = (undefined4 *)CONCAT44(uStack_1e8._4_4_,(uint)uStack_368);
            uStack_420 = 0x8a3b83a;
            func_0x0d87c640(uStack_378 + 0x28,&uStack_1e8);
          }
          puVar21 = (undefined8 *)ppuVar15[1];
          lVar16 = puVar21[1];
          pbVar30 = (byte *)*puVar21;
          uStack_2e0 = *(undefined4 *)(puVar21 + 1);
          uStack_2dc = *(undefined4 *)((long)puVar21 + 0xc);
          uStack_2e8 = *(undefined4 *)puVar21;
          uStack_2e4 = *(undefined4 *)((long)puVar21 + 4);
          if (lVar16 != 0) {
            LOCK();
            *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
            UNLOCK();
            LOCK();
            *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
            UNLOCK();
            uStack_420 = 0x8a3b860;
            uStack_2a8 = pbVar30;
            uStack_2a0 = uStack_2e0;
            uStack_29c = uStack_2dc;
            func_0x0412c2d0();
            uStack_2e8 = (undefined4)uStack_2a8;
            uStack_2e4 = uStack_2a8._4_4_;
            uStack_2e0 = uStack_2a0;
            uStack_2dc = uStack_29c;
          }
          uStack_2d8 = *(undefined4 *)(ppuVar15 + 3);
          if (*(undefined **)((long)ppuVar34 + 0x88) == (undefined *)0x0) {
            uStack_420 = 0x8a3b8ae;
            cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc);
            if (cVar7 != '\0') {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          if (**(undefined **)((long)ppuVar34 + 0x88) == '\0') {
            uStack_420 = 0x8a3b8f1;
            cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc);
            if (cVar7 != '\0') {
              _DAT_00000000 = 0xdeadc0de;
            }
          }
          uStack_420 = 0x8a3b910;
          lVar16 = (**(code **)(**(long **)((long)ppuVar34 + 0x98) + 0x610))();
          pbStack_1d0 = (byte *)CONCAT71(pbStack_1d0._1_7_,1);
          uStack_1e8 = &uStack_2e8;
          uStack_70 = 1;
          uStack_420 = 0x8a3b947;
          func_0x0c5e0360(lVar16,*(undefined8 *)(lVar16 + 0x68),&uStack_1e8);
          if ((ulong)uStack_70 != 0xffffffff) {
            uStack_420 = 0x8a3b972;
            (**(code **)(&UNK_0f139bf0 + (ulong)uStack_70 * 8))(&uStack_329,&uStack_1e8);
          }
          if (CONCAT44(uStack_2dc,uStack_2e0) != 0) {
            uStack_420 = 0x8a3b984;
            func_0x0412c2d0();
          }
          if ((bStack_280 & 1) != 0) {
            uStack_420 = 0x8a3b9a7;
            func_0x0412a280(puStack_270,CONCAT71(uStack_27f,bStack_280) & 0xfffffffffffffffe);
          }
          if (plStack_220 != (long *)0x0) {
            LOCK();
            plVar19 = plStack_220 + 1;
            lVar16 = *plVar19;
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (lVar16 == 0) {
              uStack_420 = 0x8a3ba6e;
              (**(code **)(*plStack_220 + 0x10))(plStack_220);
              uStack_420 = 0x8a3ba76;
              func_0x0412c2d0(plStack_220);
            }
          }
          if (((uint)uStack_300 & 1) != 0) {
            uStack_420 = 0x8a3ba9d;
            func_0x0412a280(pbStack_2f0,
                            CONCAT44(uStack_300._4_4_,(uint)uStack_300) & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_348 & 1) != 0) {
            uStack_420 = 0x8a3bac4;
            func_0x0412a280(puStack_338,(ulong)uStack_348 & 0xfffffffffffffffe);
          }
          if ((uStack_2c8 & 1) != 0) {
            uStack_420 = 0x8a3baeb;
            func_0x0412a280(puStack_2b8,CONCAT44(uStack_2c4,uStack_2c8) & 0xfffffffffffffffe);
          }
          if (cStack_250 == '\x01') {
            cStack_250 = '\0';
            uStack_1e8._4_4_ = (undefined4)((ulong)uStack_1e8 >> 0x20);
            uStack_1e8 = (undefined4 *)CONCAT44(uStack_1e8._4_4_,uStack_258);
            uStack_420 = 0x8a3bb24;
            func_0x0d87c640(puStack_268 + 0x28,&uStack_1e8);
          }
          if (plStack_1f0 == (long *)0x0) {
LAB_08a3bb47:
            if (ppuStack_48 != &puStack_68) goto LAB_08a3bb60;
LAB_08a3bc43:
            lVar16 = 0x20;
          }
          else {
            LOCK();
            plVar19 = plStack_1f0 + 1;
            lVar16 = *plVar19;
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (lVar16 != 0) goto LAB_08a3bb47;
            uStack_420 = 0x8a3bc22;
            (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
            uStack_420 = 0x8a3bc2a;
            func_0x0412c2d0(plStack_1f0);
            if (ppuStack_48 == &puStack_68) goto LAB_08a3bc43;
LAB_08a3bb60:
            lVar16 = 0x28;
            if (ppuStack_48 == (undefined **)0x0) {
              uStack_420 = 0x8a3bb76;
              func_0x08a15040(ppuVar34);
              goto joined_r0x08a3bc5d;
            }
          }
          uStack_420 = 0x8a3bc4e;
          (**(code **)(*ppuStack_48 + lVar16))();
          uStack_420 = 0x8a3bc56;
          func_0x08a15040(ppuVar34);
joined_r0x08a3bc5d:
          if (DAT_0f6faa7c == '\0') {
            uStack_420 = 0x8a3bb87;
            bVar8 = func_0x08b7b4f0(lVar36);
            *(byte *)(ppuVar15 + 0x19b) = bVar8;
          }
          uVar17 = uStack_240;
          uStack_420 = 0x8a3bba5;
          func_0x08a23f80(ppuVar34,ppuVar15,uStack_240);
          uStack_420 = 0x8a3bbb3;
          func_0x08a28660(ppuVar34,ppuVar15,uVar17);
          plVar19 = *(long **)((long)ppuVar34 + 0xd0);
          uStack_420 = 0x8a3bbd5;
          func_0x09db00d0(&uStack_1e8,
                          *(undefined8 *)(*(undefined **)((long)ppuVar34 + 0x240) + 0x10));
          uStack_420 = 0x8a3bbeb;
          (**(code **)(*plVar19 + 0x38))(plVar19,uVar17,&uStack_1e8,uStack_34c);
          uStack_1e8 = (undefined4 *)&UNK_0f12e440;
          uStack_420 = 0x8a3bc07;
          func_0x08812cb0(auStack_1b8);
          return;
        }
      }
      uStack_420 = 0x8a3bc92;
      func_0x04882e30();
      goto LAB_08a3bc92;
    }
    bVar8 = ppuStack_380[0x48][0x20];
    puVar33 = &uStack_420;
    uStack_420 = 0x8a3b09b;
  }
  *(ulong *)((long)puVar33 + -8) = uVar22;
  *(ulong *)((long)puVar33 + -0x10) = uVar38;
  *(undefined ***)((long)puVar33 + -0x18) = ppuVar23;
  *(long *)((long)puVar33 + -0x20) = unaff_R13;
  *(undefined ***)((long)puVar33 + -0x28) = unaff_R12;
  *(undefined ***)((long)puVar33 + -0x30) = param_1;
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e351;
  func_0x09f4e030((undefined1 *)((long)puVar33 + -0x98));
  bVar1 = *(byte *)((long)puVar33 + -0x98);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_09f4e3bf;
LAB_09f4e364:
    puVar5 = ppuVar15[2];
    uVar12 = *(uint *)(ppuVar15 + 3);
    plVar19 = (long *)(*(long *)(puVar5 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(puVar5 + 0x40) - *(long *)(puVar5 + 0x38)) >>
                                   3) - 1U & 0x68b75d48) * 8);
    do {
      if (*plVar19 == -1) {
        plVar29 = *(long **)(puVar5 + 0x58);
        plVar19 = plVar29;
        goto LAB_09f4e42f;
      }
      lVar36 = *plVar19 * 0x20;
      plVar19 = (long *)(*(long *)(puVar5 + 0x50) + lVar36);
    } while (*(int *)(*(long *)(puVar5 + 0x50) + 8 + lVar36) != 0x68b75d48);
    plVar29 = *(long **)(puVar5 + 0x58);
LAB_09f4e42f:
    if ((plVar19 != plVar29) && (lVar36 = plVar19[2], lVar36 != 0)) {
      uVar22 = (ulong)((uVar12 & 0x3ffff) >> 0xb);
      if (((uVar22 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
          ((lVar16 = *(long *)(*(long *)(lVar36 + 8) + uVar22 * 8), lVar16 != 0 &&
           (uVar3 = *(uint *)(lVar16 + (ulong)(uVar12 & 0x7ff) * 4),
           (uVar12 & 0xfffc0000 ^ uVar3) < 0x3ffff)))) &&
         (lVar36 = *(long *)(*(long *)(lVar36 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)), lVar36 != 0))
      {
        puVar14 = (undefined1 *)((long)puVar33 + -0x97);
        *(undefined1 **)((long)puVar33 + -0x78) = puVar14;
        if ((bVar1 & 1) != 0) {
          puVar14 = *(undefined1 **)((long)puVar33 + -0x88);
        }
        *(uint *)((long)puVar33 + -0x9c) = (uint)bVar8;
        *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e4d5;
        uVar38 = FUN_04883620((undefined1 *)((long)puVar33 + -0x68),puVar14);
        lVar16 = (ulong)(uVar3 & 0x7f) * 0x5b8;
        *(long *)((long)puVar33 + -0x38) = lVar36;
        *(long *)((long)puVar33 + -0x40) = lVar16;
        *(long *)((long)puVar33 + -0x80) = lVar16 + lVar36;
        *(undefined **)((long)puVar33 + -0x70) = puVar18;
        uVar22 = *(ulong *)(puVar18 + 0x20);
        if (uVar22 != 0) {
          uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
          uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar24 >> 0x38 < 2) {
            uVar37 = uVar22 - 1 & uVar38;
          }
          else {
            uVar37 = uVar38;
            if (uVar22 <= uVar38) {
              if ((uVar38 | uVar22) >> 0x20 == 0) {
                uVar37 = (uVar38 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar37 = uVar38 % uVar22;
              }
            }
          }
          plVar19 = *(long **)(*(long *)(*(long *)((long)puVar33 + -0x70) + 0x18) + uVar37 * 8);
          if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
            if ((*(byte *)((long)puVar33 + -0x98) & 1) == 0) {
              uVar32 = (ulong)(*(byte *)((long)puVar33 + -0x98) >> 1);
            }
            else {
              uVar32 = *(ulong *)((long)puVar33 + -0x90);
              *(undefined8 *)((long)puVar33 + -0x78) = *(undefined8 *)((long)puVar33 + -0x88);
            }
            if ((byte)(uVar24 >> 0x38) < 2) {
              do {
                if (plVar19[1] == uVar38) {
                  bVar8 = *(byte *)(plVar19 + 2);
                  if ((bVar8 & 1) == 0) {
                    uVar24 = (ulong)(bVar8 >> 1);
                  }
                  else {
                    uVar24 = plVar19[3];
                  }
                  if (uVar24 == uVar32) {
                    if ((bVar8 & 1) == 0) {
                      lVar36 = (long)plVar19 + 0x11;
                    }
                    else {
                      lVar36 = plVar19[4];
                    }
                    *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e7a4;
                    iVar13 = func_0x0eee3000(lVar36,*(undefined8 *)((long)puVar33 + -0x78),uVar32);
                    if (iVar13 == 0) goto LAB_09f4e838;
                  }
                }
                else if ((plVar19[1] & uVar22 - 1) != uVar37) break;
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar19[1];
                if (uVar24 == uVar38) {
                  bVar8 = *(byte *)(plVar19 + 2);
                  if ((bVar8 & 1) == 0) {
                    uVar24 = (ulong)(bVar8 >> 1);
                  }
                  else {
                    uVar24 = plVar19[3];
                  }
                  if (uVar24 == uVar32) {
                    if ((bVar8 & 1) == 0) {
                      lVar36 = (long)plVar19 + 0x11;
                    }
                    else {
                      lVar36 = plVar19[4];
                    }
                    *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e834;
                    iVar13 = func_0x0eee3000(lVar36,*(undefined8 *)((long)puVar33 + -0x78),uVar32);
                    if (iVar13 == 0) goto LAB_09f4e838;
                  }
                }
                else {
                  if (uVar22 <= uVar24) {
                    if ((uVar24 | uVar22) >> 0x20 == 0) {
                      uVar24 = (uVar24 & 0xffffffff) % (uVar22 & 0xffffffff);
                    }
                    else {
                      uVar24 = uVar24 % uVar22;
                    }
                  }
                  if (uVar24 != uVar37) break;
                }
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
          }
        }
        pcVar6 = *(code **)(*(long *)ppuVar15[0x3a] + 0xaf8);
        *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e8c8;
        lVar36 = (*pcVar6)();
        cVar7 = *(char *)(lVar36 + 1);
        puVar18 = ppuVar15[2];
        uVar12 = *(uint *)(ppuVar15 + 3);
        plVar19 = (long *)(*(long *)(puVar18 + 0x38) +
                          (ulong)((int)((ulong)(*(long *)(puVar18 + 0x40) -
                                               *(long *)(puVar18 + 0x38)) >> 3) - 1U & 0x68b75d48) *
                          8);
        do {
          if (*plVar19 == -1) {
            plVar29 = *(long **)(puVar18 + 0x58);
            plVar19 = plVar29;
            goto LAB_09f4e928;
          }
          lVar36 = *plVar19 * 0x20;
          plVar19 = (long *)(*(long *)(puVar18 + 0x50) + lVar36);
        } while (*(int *)(*(long *)(puVar18 + 0x50) + 8 + lVar36) != 0x68b75d48);
        plVar29 = *(long **)(puVar18 + 0x58);
LAB_09f4e928:
        if ((plVar19 != plVar29) && (lVar36 = plVar19[2], lVar36 != 0)) {
          uVar22 = (ulong)((uVar12 & 0x3ffff) >> 0xb);
          if (((uVar22 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
              ((lVar16 = *(long *)(*(long *)(lVar36 + 8) + uVar22 * 8), lVar16 != 0 &&
               (uVar3 = *(uint *)(lVar16 + (ulong)(uVar12 & 0x7ff) * 4),
               (uVar12 & 0xfffc0000 ^ uVar3) < 0x3ffff)))) &&
             (lVar36 = *(long *)(*(long *)(lVar36 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)),
             lVar36 != 0)) {
            lVar16 = (ulong)(uVar3 & 0x7f) * 0x5b8;
            cVar2 = *(char *)(lVar36 + 1 + lVar16);
            *(char *)(lVar36 + 1 + lVar16) = cVar7;
            uVar17 = *(undefined8 *)(lVar36 + 8 + lVar16);
            *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e9cc;
            func_0x0495d5f0(uVar17);
            if (cVar2 == '\x03') {
              lVar28 = lVar36 + lVar16;
              lVar27 = 0;
              do {
                if ((*(byte *)(lVar28 + 0x110 + lVar27) & 4) != 0) {
                  puVar14 = (undefined1 *)(lVar28 + 0x110 + lVar27);
                  pcVar31 = puVar14 + -8;
                  if (*pcVar31 != '\x01') {
                    *(undefined1 *)(lVar28 + 0x20 + lVar27) = *puVar14;
                    *(undefined8 *)(lVar28 + 0x18 + lVar27) = *(undefined8 *)pcVar31;
                  }
                }
                lVar27 = lVar27 + 0xc;
              } while (lVar27 != 0xf0);
            }
            *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ea31;
            func_0x0bc26b90((undefined1 *)(lVar36 + lVar16) + 0x108,(int)cVar7);
            uVar25 = *(undefined1 *)((long)puVar33 + -0x9c);
            if (cVar7 != '\x02') {
              uVar25 = 0;
            }
            *(undefined1 *)(lVar36 + lVar16) = uVar25;
            *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ea4d;
            func_0x0412d550(0xf5522b8);
            LOCK();
            _DAT_0f552388 = _DAT_0f552388 + 1;
            UNLOCK();
            *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ea64;
            FUN_0412d610(0xf5522b8);
            plVar19 = _DAT_0f5523a0;
            pbVar30 = _DAT_0f552398;
            if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_09f4ed83;
            bVar8 = 1;
            if (_DAT_0f5523a0 != (long *)0x0) {
              LOCK();
              _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
              UNLOCK();
              bVar8 = *pbVar30;
            }
            plVar29 = _DAT_0f5523a8;
            *(undefined8 *)((long)puVar33 + -0x68) = 0xf5522b8;
            *(undefined1 *)((long)puVar33 + -0x60) = 1;
            *(byte **)((long)puVar33 + -0x58) = pbVar30;
            *(long **)((long)puVar33 + -0x50) = plVar19;
            *(long **)((long)puVar33 + -0x48) = _DAT_0f5523a8;
            if ((bVar8 & 1) == 0) {
              *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eae1;
              cVar7 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871);
              if (cVar7 != '\0') {
                _DAT_00000000 = 0xdeadc0de;
              }
            }
            pcVar6 = *(code **)(*plVar29 + 0x690);
            *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eafd;
            cVar7 = (*pcVar6)(plVar29);
            *(undefined8 *)((long)puVar33 + -0x58) = 0;
            *(undefined8 *)((long)puVar33 + -0x50) = 0;
            if (plVar19 != (long *)0x0) {
              LOCK();
              plVar29 = plVar19 + 1;
              lVar36 = *plVar29;
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (lVar36 == 0) {
                pcVar6 = *(code **)(*plVar19 + 0x10);
                *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eb2a;
                (*pcVar6)(plVar19);
                *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eb32;
                func_0x0412c2d0(plVar19);
              }
              plVar19 = *(long **)((long)puVar33 + -0x50);
              *(undefined8 *)((long)puVar33 + -0x48) = 0;
              if (plVar19 != (long *)0x0) {
                LOCK();
                plVar29 = plVar19 + 1;
                lVar36 = *plVar29;
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (lVar36 == 0) {
                  pcVar6 = *(code **)(*plVar19 + 0x10);
                  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eb60;
                  (*pcVar6)(plVar19);
                  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eb68;
                  func_0x0412c2d0(plVar19);
                }
              }
            }
            if (*(char *)((long)puVar33 + -0x60) == '\x01') {
              *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eb79;
              func_0x0eee02f0(*(undefined8 *)((long)puVar33 + -0x68));
            }
            if (cVar7 != '\0') {
              cVar7 = *(char *)(*(long *)((long)puVar33 + -0x80) + 1);
              *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eb94;
              func_0x09f4df70(*(undefined8 *)((long)puVar33 + -0x70),ppuVar15,(int)cVar7);
            }
            goto LAB_09f4eb94;
          }
        }
      }
    }
  }
  else {
    if (*(long *)((long)puVar33 + -0x90) != 0) goto LAB_09f4e364;
LAB_09f4e3bf:
    pcVar6 = *(code **)(*(long *)ppuVar15[0x3a] + 0xaf8);
    *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e3cf;
    lVar36 = (*pcVar6)();
    cVar7 = *(char *)(lVar36 + 1);
    puVar18 = ppuVar15[2];
    uVar12 = *(uint *)(ppuVar15 + 3);
    plVar19 = (long *)(*(long *)(puVar18 + 0x38) +
                      (ulong)((int)((ulong)(*(long *)(puVar18 + 0x40) - *(long *)(puVar18 + 0x38))
                                   >> 3) - 1U & 0x68b75d48) * 8);
    do {
      if (*plVar19 == -1) {
        plVar29 = *(long **)(puVar18 + 0x58);
        plVar19 = plVar29;
        goto LAB_09f4e592;
      }
      lVar36 = *plVar19 * 0x20;
      plVar19 = (long *)(*(long *)(puVar18 + 0x50) + lVar36);
    } while (*(int *)(*(long *)(puVar18 + 0x50) + 8 + lVar36) != 0x68b75d48);
    plVar29 = *(long **)(puVar18 + 0x58);
LAB_09f4e592:
    if ((plVar19 != plVar29) && (lVar36 = plVar19[2], lVar36 != 0)) {
      uVar22 = (ulong)((uVar12 & 0x3ffff) >> 0xb);
      if ((uVar22 < (ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3)) &&
         (((lVar16 = *(long *)(*(long *)(lVar36 + 8) + uVar22 * 8), lVar16 != 0 &&
           (uVar3 = *(uint *)(lVar16 + (ulong)(uVar12 & 0x7ff) * 4),
           (uVar12 & 0xfffc0000 ^ uVar3) < 0x3ffff)) &&
          (lVar36 = *(long *)(*(long *)(lVar36 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)), lVar36 != 0)
          ))) {
        lVar16 = (ulong)(uVar3 & 0x7f) * 0x5b8;
        cVar2 = *(char *)(lVar36 + 1 + lVar16);
        *(char *)(lVar36 + 1 + lVar16) = cVar7;
        uVar17 = *(undefined8 *)(lVar36 + 8 + lVar16);
        *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e636;
        func_0x0495d5f0(uVar17);
        pbVar30 = (byte *)(lVar36 + lVar16);
        if (cVar2 == '\x03') {
          lVar16 = lVar16 + lVar36;
          lVar36 = 0;
          do {
            if ((*(byte *)(lVar16 + 0x110 + lVar36) & 4) != 0) {
              puVar14 = (undefined1 *)(lVar16 + 0x110 + lVar36);
              pcVar31 = puVar14 + -8;
              if (*pcVar31 != '\x01') {
                *(undefined1 *)(lVar16 + 0x20 + lVar36) = *puVar14;
                *(undefined8 *)(lVar16 + 0x18 + lVar36) = *(undefined8 *)pcVar31;
              }
            }
            lVar36 = lVar36 + 0xc;
          } while (lVar36 != 0xf0);
        }
        *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e6a1;
        func_0x0bc26b90(pbVar30 + 0x108,(int)cVar7);
        goto LAB_09f4e6aa;
      }
    }
  }
LAB_09f4ed7e:
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ed83;
  func_0x04890760();
LAB_09f4ed83:
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ed8f;
  uVar17 = func_0x0eee02f0(0xf5522b8);
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ed97;
  uVar17 = func_0x04882e20(uVar17);
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ed9f;
  uVar17 = func_0x04882e20(uVar17);
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eda7;
  uVar17 = func_0x04882e20(uVar17);
  if ((*(byte *)((long)puVar33 + -0x98) & 1) != 0) {
    *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4edd5;
    func_0x0412a280(*(undefined8 *)((long)puVar33 + -0x88),
                    *(ulong *)((long)puVar33 + -0x98) & 0xfffffffffffffffe);
  }
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4eddd;
  func_0x0eee2d70(uVar17);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
LAB_09f4e838:
  bVar8 = *(byte *)(plVar19 + 5);
  if (bVar8 < 2) {
    uVar25 = 0;
  }
  else {
    if (bVar8 != 2) {
      if (bVar8 != 3) {
        pcVar6 = *(code **)(*(long *)ppuVar15[0x3a] + 0xaf8);
        *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4e865;
        lVar36 = (*pcVar6)();
        cVar7 = *(char *)(lVar36 + 1);
        puVar18 = ppuVar15[2];
        uVar12 = *(uint *)(ppuVar15 + 3);
        plVar19 = (long *)(*(long *)(puVar18 + 0x38) +
                          (ulong)((int)((ulong)(*(long *)(puVar18 + 0x40) -
                                               *(long *)(puVar18 + 0x38)) >> 3) - 1U & 0x68b75d48) *
                          8);
        do {
          if (*plVar19 == -1) {
            plVar29 = *(long **)(puVar18 + 0x58);
            plVar19 = plVar29;
            goto LAB_09f4ec68;
          }
          lVar36 = *plVar19 * 0x20;
          plVar19 = (long *)(*(long *)(puVar18 + 0x50) + lVar36);
        } while (*(int *)(*(long *)(puVar18 + 0x50) + 8 + lVar36) != 0x68b75d48);
        plVar29 = *(long **)(puVar18 + 0x58);
LAB_09f4ec68:
        if ((plVar19 != plVar29) && (lVar36 = plVar19[2], lVar36 != 0)) {
          uVar22 = (ulong)((uVar12 & 0x3ffff) >> 0xb);
          if (((ulong)(*(long *)(lVar36 + 0x10) - *(long *)(lVar36 + 8) >> 3) <= uVar22) ||
             (((lVar16 = *(long *)(*(long *)(lVar36 + 8) + uVar22 * 8), lVar16 == 0 ||
               (uVar3 = *(uint *)(lVar16 + (ulong)(uVar12 & 0x7ff) * 4),
               0x3fffe < (uVar12 & 0xfffc0000 ^ uVar3))) ||
              (lVar36 = *(long *)(*(long *)(lVar36 + 0x50) + (ulong)(uVar3 >> 4 & 0x3ff8)),
              lVar36 == 0)))) goto LAB_09f4ed7e;
          lVar16 = (ulong)(uVar3 & 0x7f) * 0x5b8;
          cVar2 = *(char *)(lVar36 + 1 + lVar16);
          *(char *)(lVar36 + 1 + lVar16) = cVar7;
          uVar17 = *(undefined8 *)(lVar36 + 8 + lVar16);
          *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ed0c;
          func_0x0495d5f0(uVar17);
          pbVar30 = (byte *)(lVar36 + lVar16);
          uVar11 = *(undefined4 *)((long)puVar33 + -0x9c);
          if (cVar2 == '\x03') {
            lVar16 = lVar16 + lVar36;
            lVar36 = 0;
            do {
              if ((*(byte *)(lVar16 + 0x110 + lVar36) & 4) != 0) {
                puVar14 = (undefined1 *)(lVar16 + 0x110 + lVar36);
                pcVar31 = puVar14 + -8;
                if (*pcVar31 != '\x01') {
                  *(undefined1 *)(lVar16 + 0x20 + lVar36) = *puVar14;
                  *(undefined8 *)(lVar16 + 0x18 + lVar36) = *(undefined8 *)pcVar31;
                }
              }
              lVar36 = lVar36 + 0xc;
            } while (lVar36 != 0xf0);
          }
          *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ed70;
          func_0x0bc26b90(pbVar30 + 0x108,(int)cVar7);
          bVar8 = (byte)uVar11;
LAB_09f4e6aa:
          if (cVar7 != '\x02') {
            bVar8 = 0;
          }
          *pbVar30 = bVar8;
          bVar8 = *(byte *)((long)puVar33 + -0x98);
          goto joined_r0x09f4ec56;
        }
        goto LAB_09f4ed7e;
      }
LAB_09f4eb94:
      bVar8 = *(byte *)((long)puVar33 + -0x98);
      goto joined_r0x09f4ec56;
    }
    uVar25 = (undefined1)*(undefined4 *)((long)puVar33 + -0x9c);
  }
  puVar14 = *(undefined1 **)((long)puVar33 + -0x80);
  *puVar14 = uVar25;
  cVar7 = puVar14[1];
  puVar14[1] = bVar8;
  uVar17 = *(undefined8 *)(puVar14 + 8);
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ebdc;
  func_0x0495d5f0(uVar17);
  lVar36 = *(long *)((long)puVar33 + -0x80);
  if (cVar7 == '\x03') {
    lVar16 = *(long *)((long)puVar33 + -0x38) + *(long *)((long)puVar33 + -0x40);
    lVar28 = 0;
    do {
      if ((*(byte *)(lVar16 + 0x110 + lVar28) & 4) != 0) {
        puVar14 = (undefined1 *)(lVar16 + 0x110 + lVar28);
        pcVar31 = puVar14 + -8;
        if (*pcVar31 != '\x01') {
          *(undefined1 *)(lVar16 + 0x20 + lVar28) = *puVar14;
          *(undefined8 *)(lVar16 + 0x18 + lVar28) = *(undefined8 *)pcVar31;
        }
      }
      lVar28 = lVar28 + 0xc;
    } while (lVar28 != 0xf0);
  }
  *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ec51;
  func_0x0bc26b90(lVar36 + 0x108,(int)(char)bVar8);
  bVar8 = *(byte *)((long)puVar33 + -0x98);
joined_r0x09f4ec56:
  if ((bVar8 & 1) != 0) {
    *(undefined8 *)((long)puVar33 + -0xb0) = 0x9f4ebae;
    func_0x0412a280(*(undefined8 *)((long)puVar33 + -0x88),
                    *(ulong *)((long)puVar33 + -0x98) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x125ee7d  minecraft:player.
 */
