/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xae5cce0 (ELF vaddr 0xad5cce0)
 * Label: caller-of-callee
 * Body:  [[0ae5cce0, 0ae5d992] [0ae5d9a0, 0ae5e372] [0ae5e380, 0ae5e556] [0ae5e560, 0ae5e7c1] [0ae5e7d0, 0ae5e831] [0ae5e840, 0ae5ea74] [0ae5ea80, 0ae5eb95] [0ae5edea, 0ae5edee] [0ae5ee56, 0ae5eeb6]]
 * Ghidra: FUN_0ae5cce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ae5cce0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 auVar6 [8];
  undefined1 auVar7 [8];
  long *plVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *puVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  char cVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_558 [8];
  undefined8 uStack_550;
  ulong *puStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  long lStack_518;
  byte bStack_510;
  undefined7 uStack_50f;
  undefined1 uStack_508;
  undefined1 uStack_507;
  undefined8 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong *puStack_4a8;
  ulong *puStack_4a0;
  ulong *puStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined1 uStack_440;
  undefined1 auStack_438 [8];
  ulong uStack_430;
  undefined1 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 *puStack_410;
  undefined1 auStack_408 [16];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 *puStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined1 auStack_338 [24];
  code *pcStack_320;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  cVar19 = *(char *)((long)param_3 + 0x24);
  if (cVar19 == '\x04') {
    return;
  }
  plVar12 = (long *)*param_3;
  plStack_180 = plVar12;
  if (cVar19 == '\x02') {
    plStack_180 = param_3;
  }
  uStack_450 = param_2;
  if (plStack_180 == (long *)0x0 || (int)param_3[4] != -0x6c312afa) {
    if ((code *)param_3[7] == (code *)0x0) {
      return;
    }
    lVar24 = param_3[5];
    lVar14 = param_3[6];
    if (lVar14 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar14 = param_3[6];
      cVar19 = *(char *)((long)param_3 + 0x24);
      plVar12 = (long *)*param_3;
    }
    if (cVar19 == '\x02') {
      plVar12 = param_3;
    }
    plStack_180 = (long *)func_0x0488e200(lVar24,lVar14,0x93ced506,plVar12);
    if (plStack_180 == (long *)0x0) {
      return;
    }
  }
  if (*plStack_180 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    lStack_4e8 = 0;
    func_0x0652b220(&lStack_4f8,*(long *)(param_1 + 0x68),*(long *)(param_1 + 0x70),
                    (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4) *
                    -0x5555555555555555);
    pcVar5 = *(code **)(param_1 + 0x38);
  }
  else {
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      (**(code **)(param_1 + 0x40))(auStack_438);
    }
    else {
      (**(code **)(param_1 + 0x38))();
    }
    puVar11 = puStack_428;
    lStack_468 = (long)auStack_438;
    lStack_460 = uStack_430;
    auStack_438 = (undefined1  [8])0x0;
    uStack_430 = 0;
    puStack_428 = (undefined1 *)0x0;
    func_0x0651ffe0(auStack_438);
    pcVar5 = *(code **)(param_1 + 0x38);
    lStack_4e8 = (long)puVar11;
    lStack_4f8 = lStack_468;
    lStack_4f0 = lStack_460;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(auStack_438);
    func_0x0d84fd50(uStack_450,auStack_438);
    func_0x0651ffe0(auStack_438);
  }
  func_0x0ae615e0(auStack_438);
  if ((DAT_0f6a6148 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6a6148), iVar10 != 0)) {
    func_0x0ae66eb0();
    FUN_0410844d(&DAT_0f6a6148);
  }
  uStack_178 = CONCAT44(uStack_178._4_4_,_DAT_0f6a6134);
  puStack_170 = &UNK_0ae66de0;
  puStack_168 = &UNK_0ae66ea0;
  func_0x05da1460(auStack_438);
  bVar4 = *(byte *)(param_1 + 0x20);
  if ((bVar4 & 1) == 0) {
    uVar17 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0x28);
  }
  uVar23 = uVar17 + 0x10;
  if (0xfffffffffffffff7 < uVar23) {
    uVar15 = func_0x04882e30();
    func_0x06523ec0(&uStack_538);
    func_0x05f93280(&uStack_4d8);
    func_0x0ae66cd0(&uStack_178);
    if ((bStack_510 & 1) != 0) {
      func_0x0412a280(uStack_500,CONCAT71(uStack_50f,bStack_510) & 0xfffffffffffffffe);
    }
    func_0x0ae66d60(&lStack_288);
    func_0x06685e60(&lStack_4f8);
    func_0x0eee2d70(uVar15);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar23 < 0x17) {
    uStack_430 = 0;
    puStack_428 = (undefined1 *)0x0;
    auStack_438._1_7_ = 0;
    auStack_438[0] = (char)uVar23 * '\x02';
    puVar11 = auStack_438 + 1;
    if (uVar17 != 0) {
      if ((bVar4 & 1) == 0) goto LAB_0ae5cfbe;
LAB_0ae5cf5e:
      lVar24 = *(long *)(param_1 + 0x30);
      goto LAB_0ae5cfc2;
    }
  }
  else {
    uVar22 = 0x1a;
    if ((uVar23 | 7) != 0x17) {
      uVar22 = (uVar23 | 7) + 1;
    }
    puVar11 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
    if (puVar11 == (undefined1 *)0x0) {
      func_0x0eec74c0(uVar22,0);
    }
    auStack_438 = (undefined1  [8])(uVar22 | 1);
    uStack_430 = uVar23;
    puStack_428 = puVar11;
    if ((bVar4 & 1) != 0) goto LAB_0ae5cf5e;
LAB_0ae5cfbe:
    lVar24 = param_1 + 0x21;
LAB_0ae5cfc2:
    func_0x0eee2ee0(puVar11,lVar24,uVar17);
  }
  *(undefined8 *)(puVar11 + uVar17) = _DAT_0147b3d0;
  *(undefined8 *)((long)(puVar11 + uVar17) + 8) = _UNK_0147b3d8;
  puVar11[uVar17 + 0x10] = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  puStack_248 = (undefined1 *)0x0;
  func_0x048b1dc0(auStack_240);
  func_0x048b1dc0(&uStack_230);
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = (undefined8 *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  if ((uStack_258 & 1) == 0) {
    if (((ulong)auStack_438 & 1) == 0) {
      puStack_248 = puStack_428;
      uStack_258 = (ulong)auStack_438;
      uStack_250 = uStack_430;
    }
    else {
      func_0x04885070(&uStack_258,puStack_428,uStack_430);
    }
  }
  else {
    uVar17 = (ulong)auStack_438 >> 1 & 0x7f;
    puVar11 = auStack_438 + 1;
    if (((ulong)auStack_438 & 1) != 0) {
      uVar17 = uStack_430;
      puVar11 = puStack_428;
    }
    func_0x04885120(&uStack_258,puVar11,uVar17);
  }
  if (((ulong)auStack_438 & 1) != 0) {
    func_0x0412a280(puStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
  }
  bStack_510 = 0x10;
  uStack_50f = 0x6361626c6c6163;
  uStack_508 = 0x6b;
  uStack_507 = 0;
  func_0x0ae66c00(&uStack_178,&bStack_510);
  uStack_4c8 = 0;
  uStack_4b0 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  plStack_488 = (long *)0x0;
  uStack_480 = 0;
  puStack_498 = (ulong *)0x0;
  plStack_490 = (long *)0x0;
  puStack_4a8 = (ulong *)0x0;
  puStack_4a0 = (ulong *)0x0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c0 = 0x6972637362757312;
  uStack_4b8 = 0x6562;
  func_0x0ae684a0(&uStack_538,&uStack_178);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f274c58;
  uVar9 = func_0x0d858500(&uStack_538);
  plVar1 = plVar12 + 3;
  *(undefined1 *)(plVar12 + 4) = 2;
  *(undefined4 *)((long)plVar12 + 0x24) = uVar9;
  *(undefined4 *)(plVar12 + 5) = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[3] = (long)&UNK_0f274ca8;
  *(undefined4 *)(plVar12 + 9) = (undefined4)uStack_538;
  *(undefined4 *)((long)plVar12 + 0x4c) = uStack_538._4_4_;
  *(undefined4 *)(plVar12 + 10) = (undefined4)uStack_530;
  *(undefined4 *)((long)plVar12 + 0x54) = uStack_530._4_4_;
  plVar12[0xb] = lStack_528;
  uStack_538 = 0;
  uStack_530 = 0;
  lStack_528 = 0;
  uVar9 = func_0x0d858620(plVar1);
  plVar8 = plStack_488;
  *(undefined4 *)(plVar12 + 5) = uVar9;
  plStack_490 = plVar1;
  if (plStack_488 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_488 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_488;
      plStack_488 = plVar12;
      (**(code **)(lVar24 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
      plVar12 = plStack_488;
    }
  }
  plStack_488 = plVar12;
  _auStack_438 = func_0x0ae6a6d0();
  _auStack_558 = func_0x0ab06a00();
  func_0x0d850780(auStack_438,auStack_558);
  puStack_428 = puStack_168;
  auStack_438 = (undefined1  [8])uStack_178;
  uStack_430 = (ulong)puStack_170;
  uStack_178 = 0;
  puStack_170 = (undefined *)0x0;
  puStack_168 = (undefined *)0x0;
  uStack_420 = CONCAT44(uStack_15c,uStack_160);
  uStack_418 = CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&puStack_410,auStack_150);
  auStack_558 = (undefined1  [8])0x0;
  uStack_550 = (undefined1  [8])0x0;
  puStack_548 = (ulong *)0x0;
  uStack_440 = 0;
  puStack_448 = auStack_558;
  puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar13 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar13 + 0x28;
  auStack_558 = (undefined1  [8])puVar13;
  puStack_548 = puVar2;
  if (((ulong)auStack_438 & 1) == 0) {
    puVar13[2] = (ulong)puStack_428;
    *puVar13 = (ulong)auStack_438;
    puVar13[1] = uStack_430;
    uStack_550 = (undefined1  [8])puVar13;
  }
  else {
    uStack_550 = (undefined1  [8])puVar13;
    func_0x0412e5e0(puVar13,puStack_428,uStack_430);
  }
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_420;
  *(undefined4 *)((long)puVar13 + 0x1c) = uStack_420._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_418;
  *(undefined4 *)((long)puVar13 + 0x24) = uStack_418._4_4_;
  func_0x06523ef0(puVar13 + 5,&puStack_410);
  uStack_550 = (undefined1  [8])puVar2;
  if (pcStack_320 != (code *)0x0) {
    (*pcStack_320)(auStack_338);
  }
  if (pcStack_368 != (code *)0x0) {
    (*pcStack_368)(&uStack_380);
  }
  if (pcStack_3a8 != (code *)0x0) {
    (*pcStack_3a8)(&uStack_3c0);
  }
  if (pcStack_3e8 != (code *)0x0) {
    (*pcStack_3e8)(auStack_408 + 8);
  }
  if (((ulong)auStack_438 & 1) != 0) {
    func_0x0412a280(puStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
  }
  iVar10 = (**(code **)(*plStack_490 + 0x20))();
  uVar23 = ((long)uStack_550 - (long)auStack_558 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  lStack_518 = param_1;
  if ((iVar10 != 0) && ((uint)uVar23 != 0)) {
    lStack_468 = CONCAT44(lStack_468._4_4_,iVar10);
    uVar18 = 0;
    uVar17 = 0;
    do {
      auVar26 = (**(code **)(*plStack_490 + 0x28))(plStack_490,uVar18);
      uVar22 = auVar26._8_8_;
      lVar24 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == uVar22) {
        if (auVar26._0_8_ == 0) {
          lVar14 = func_0x048aead0(auVar26._8_8_);
          iVar10 = *(int *)(lVar14 + 8);
          if (lVar24 != 0) goto LAB_0ae5d4f1;
LAB_0ae5d510:
          lVar14 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar14 + 8)) goto LAB_0ae5d530;
        }
        else {
          iVar10 = *(int *)(auVar26._0_8_ + 8);
          if (lVar24 == 0) goto LAB_0ae5d510;
LAB_0ae5d4f1:
          if (iVar10 != *(int *)(lVar24 + 8)) goto LAB_0ae5d530;
        }
      }
      else {
LAB_0ae5d530:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar14 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar14 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar14 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar14 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5d725;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar14 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar14 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar14 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar14 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5d725;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar14 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar14 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar14 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar14 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5d725;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar14 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar14 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar14 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar14 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5d725;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar14 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar14 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar14 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar14 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5d725;
        }
        auVar6 = auStack_558;
        puVar13 = (ulong *)uStack_550;
        lVar14 = lStack_518;
        if (*(ulong *)((long)auStack_558 + (uVar17 * 0x28 + 4) * 8) != uVar22)
        goto joined_r0x0ae5d93d;
        if (*(ulong *)((long)auStack_558 + (uVar17 * 0x28 + 3) * 8) == 0) {
          lVar14 = func_0x048aead0();
          iVar10 = *(int *)(lVar14 + 8);
          if (lVar24 != 0) goto LAB_0ae5d6f5;
LAB_0ae5d70e:
          lVar24 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar24 + 8)) goto LAB_0ae5d92d;
        }
        else {
          iVar10 = *(int *)(*(ulong *)((long)auStack_558 + (uVar17 * 0x28 + 3) * 8) + 8);
          if (lVar24 == 0) goto LAB_0ae5d70e;
LAB_0ae5d6f5:
          if (iVar10 != *(int *)(lVar24 + 8)) goto LAB_0ae5d92d;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0ae5d725:
      if ((uint)uVar23 <= (uint)uVar17) break;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)lStack_468);
    uVar23 = ((long)uStack_550 - (long)auStack_558 >> 6) * -0x3333333333333333;
  }
  puVar13 = puStack_4a8;
  lVar24 = lStack_518;
  if (uVar23 == uVar17) {
    puVar2 = puStack_4a0;
    if (puStack_4a8 != (ulong *)0x0) {
      while (puVar13 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_4a0 = puVar13;
      func_0x0412a280(puStack_4a8,(long)puStack_498 - (long)puStack_4a8);
    }
    puStack_498 = puStack_548;
    if (uStack_1f0 < puStack_1e8) {
      *uStack_1f0 = 0;
      uStack_1f0[1] = 0;
      uStack_1f0[2] = 0;
      *uStack_1f0 = uStack_4d8;
      uStack_1f0[1] = uStack_4d0;
      uStack_1f0[2] = uStack_4c8;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      uStack_1f0[5] = uStack_4b0;
      uStack_1f0[3] = uStack_4c0;
      uStack_1f0[4] = uStack_4b8;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      uStack_1f0[6] = 0;
      uStack_1f0[7] = 0;
      uStack_1f0[8] = 0;
      uStack_1f0[6] = auStack_558;
      uStack_1f0[7] = uStack_550;
      uStack_1f0[8] = puStack_548;
      puStack_4a8 = (ulong *)0x0;
      puStack_4a0 = (ulong *)0x0;
      puStack_498 = (ulong *)0x0;
      uStack_1f0[9] = plStack_490;
      uStack_1f0[10] = plStack_488;
      plStack_490 = (long *)0x0;
      plStack_488 = (undefined8 *)0x0;
      uStack_1f0[0xb] = 0;
      uStack_1f0[0xc] = 0;
      uStack_1f0[0xd] = 0;
      *(undefined4 *)(uStack_1f0 + 0xb) = (undefined4)uStack_480;
      *(undefined4 *)((long)uStack_1f0 + 0x5c) = uStack_480._4_4_;
      *(undefined4 *)(uStack_1f0 + 0xc) = (undefined4)uStack_478;
      *(undefined4 *)((long)uStack_1f0 + 100) = uStack_478._4_4_;
      uStack_1f0[0xd] = uStack_470;
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_1f0 = uStack_1f0 + 0xe;
    }
    else {
      puStack_4a8 = (ulong *)auStack_558;
      puStack_4a0 = (ulong *)uStack_550;
      uStack_1f0 = (undefined8 *)func_0x0652ac80(&uStack_1f8,&uStack_4d8);
    }
    plVar12 = uStack_1f0 + -0xe;
    lVar14 = uStack_538;
  }
  else {
LAB_0ae5d92d:
    lVar24 = lStack_518;
    auVar6 = auStack_558;
    puVar13 = (ulong *)uStack_550;
    lVar14 = lStack_518;
    if (auStack_558 != (undefined1  [8])0x0) {
joined_r0x0ae5d93d:
      while (lVar24 = lStack_518, auVar7 = auStack_558, lStack_518 = lVar14,
            auStack_558 != (undefined1  [8])puVar13) {
        auStack_558 = auVar6;
        func_0x05fe8450(puVar13 + -0x28);
        auVar6 = auStack_558;
        puVar13 = puVar13 + -0x28;
        lVar14 = lStack_518;
        lStack_518 = lVar24;
        auStack_558 = auVar7;
      }
      uStack_550 = auStack_558;
      auStack_558 = auVar6;
      func_0x0412a280(auVar6,(long)puStack_548 - (long)auVar6);
    }
    plVar12 = (long *)0xf6a45c0;
    lVar14 = uStack_538;
  }
  uStack_538 = lVar14;
  if (lVar14 != 0) {
    if (lVar14 != uStack_530) {
      lVar21 = uStack_530 + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar20 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar20 != lVar14);
    }
    uStack_530 = lVar14;
    func_0x0412a280(uStack_538,lStack_528 - uStack_538);
  }
  func_0x05f93280(&uStack_4d8);
  if (plVar12 != &lStack_4f8) {
    func_0x066dff70(plVar12,lStack_4f8,lStack_4f0,
                    (lStack_4f0 - lStack_4f8 >> 4) * -0x5555555555555555);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_510 & 1) != 0) {
    func_0x0412a280(uStack_500,CONCAT71(uStack_50f,bStack_510) & 0xfffffffffffffffe);
  }
  bStack_510 = 0x10;
  uStack_50f = 0x6361626c6c6163;
  uStack_508 = 0x6b;
  uStack_507 = 0;
  func_0x0ae66c00(&uStack_178,&bStack_510);
  uStack_4c8 = 0;
  uStack_4b0 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  plStack_488 = (long *)0x0;
  uStack_480 = 0;
  puStack_498 = (ulong *)0x0;
  plStack_490 = (long *)0x0;
  puStack_4a8 = (ulong *)0x0;
  puStack_4a0 = (ulong *)0x0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c0 = 0x63736275736e7516;
  uStack_4b8 = 0x65626972;
  func_0x0ae684a0(&uStack_538,&uStack_178);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f274d38;
  uVar9 = func_0x0d858500(&uStack_538);
  plVar1 = plVar12 + 3;
  *(undefined1 *)(plVar12 + 4) = 2;
  *(undefined4 *)((long)plVar12 + 0x24) = uVar9;
  *(undefined4 *)(plVar12 + 5) = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[3] = (long)&UNK_0f274d88;
  *(undefined4 *)(plVar12 + 9) = (undefined4)uStack_538;
  *(undefined4 *)((long)plVar12 + 0x4c) = uStack_538._4_4_;
  *(undefined4 *)(plVar12 + 10) = (undefined4)uStack_530;
  *(undefined4 *)((long)plVar12 + 0x54) = uStack_530._4_4_;
  plVar12[0xb] = lStack_528;
  uStack_538 = 0;
  uStack_530 = 0;
  lStack_528 = 0;
  uVar9 = func_0x0d858620(plVar1);
  plVar8 = plStack_488;
  *(undefined4 *)(plVar12 + 5) = uVar9;
  plStack_490 = plVar1;
  if (plStack_488 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_488 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      lVar14 = *plStack_488;
      plStack_488 = plVar12;
      (**(code **)(lVar14 + 0x10))(plVar8);
      func_0x0412c2d0(plVar8);
      plVar12 = plStack_488;
    }
  }
  plStack_488 = plVar12;
  _auStack_438 = func_0x0ae6a6d0();
  _auStack_558 = func_0x0ab06a00();
  func_0x0d850780(auStack_438,auStack_558);
  puStack_428 = puStack_168;
  auStack_438 = (undefined1  [8])uStack_178;
  uStack_430 = (ulong)puStack_170;
  uStack_178 = 0;
  puStack_170 = (undefined *)0x0;
  puStack_168 = (undefined *)0x0;
  uStack_420 = CONCAT44(uStack_15c,uStack_160);
  uStack_418 = CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&puStack_410,auStack_150);
  auStack_558 = (undefined1  [8])0x0;
  uStack_550 = (undefined1  [8])0x0;
  puStack_548 = (ulong *)0x0;
  uStack_440 = 0;
  puStack_448 = auStack_558;
  puVar13 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar13 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar13 + 0x28;
  auStack_558 = (undefined1  [8])puVar13;
  puStack_548 = puVar2;
  if (((ulong)auStack_438 & 1) == 0) {
    puVar13[2] = (ulong)puStack_428;
    *puVar13 = (ulong)auStack_438;
    puVar13[1] = uStack_430;
    uStack_550 = (undefined1  [8])puVar13;
  }
  else {
    uStack_550 = (undefined1  [8])puVar13;
    func_0x0412e5e0(puVar13,puStack_428,uStack_430);
  }
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_420;
  *(undefined4 *)((long)puVar13 + 0x1c) = uStack_420._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_418;
  *(undefined4 *)((long)puVar13 + 0x24) = uStack_418._4_4_;
  func_0x06523ef0(puVar13 + 5,&puStack_410);
  uStack_550 = (undefined1  [8])puVar2;
  if (pcStack_320 != (code *)0x0) {
    (*pcStack_320)(auStack_338);
  }
  if (pcStack_368 != (code *)0x0) {
    (*pcStack_368)(&uStack_380);
  }
  if (pcStack_3a8 != (code *)0x0) {
    (*pcStack_3a8)(&uStack_3c0);
  }
  if (pcStack_3e8 != (code *)0x0) {
    (*pcStack_3e8)(auStack_408 + 8);
  }
  if (((ulong)auStack_438 & 1) != 0) {
    func_0x0412a280(puStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
  }
  iVar10 = (**(code **)(*plStack_490 + 0x20))();
  uVar23 = ((long)uStack_550 - (long)auStack_558 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((iVar10 != 0) && ((uint)uVar23 != 0)) {
    lStack_468 = CONCAT44(lStack_468._4_4_,iVar10);
    uVar18 = 0;
    uVar17 = 0;
    do {
      auVar26 = (**(code **)(*plStack_490 + 0x28))(plStack_490,uVar18);
      uVar22 = auVar26._8_8_;
      lVar14 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == uVar22) {
        if (auVar26._0_8_ == 0) {
          lVar24 = func_0x048aead0(auVar26._8_8_);
          iVar10 = *(int *)(lVar24 + 8);
          if (lVar14 != 0) goto LAB_0ae5ded1;
LAB_0ae5def0:
          lVar24 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar24 + 8)) goto LAB_0ae5df10;
        }
        else {
          iVar10 = *(int *)(auVar26._0_8_ + 8);
          if (lVar14 == 0) goto LAB_0ae5def0;
LAB_0ae5ded1:
          if (iVar10 != *(int *)(lVar14 + 8)) goto LAB_0ae5df10;
        }
      }
      else {
LAB_0ae5df10:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar24 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar24 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar14 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5e105;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar24 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar24 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar14 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5e105;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar24 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar24 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar14 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5e105;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar24 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar24 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar14 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5e105;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == uVar22) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar10 = *(int *)(lVar24 + 8);
          }
          else {
            iVar10 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar14 == 0) {
            lVar24 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar14 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ae5e105;
        }
        auVar6 = auStack_558;
        puVar13 = (ulong *)uStack_550;
        lVar24 = lStack_518;
        if (*(ulong *)((long)auStack_558 + (uVar17 * 0x28 + 4) * 8) != uVar22)
        goto joined_r0x0ae5e31d;
        if (*(ulong *)((long)auStack_558 + (uVar17 * 0x28 + 3) * 8) == 0) {
          lVar24 = func_0x048aead0();
          iVar10 = *(int *)(lVar24 + 8);
          if (lVar14 != 0) goto LAB_0ae5e0d5;
LAB_0ae5e0ee:
          lVar14 = func_0x048aead0(uVar22);
          lVar24 = lStack_518;
          if (iVar10 != *(int *)(lVar14 + 8)) goto LAB_0ae5e30d;
        }
        else {
          iVar10 = *(int *)(*(ulong *)((long)auStack_558 + (uVar17 * 0x28 + 3) * 8) + 8);
          if (lVar14 == 0) goto LAB_0ae5e0ee;
LAB_0ae5e0d5:
          lVar24 = lStack_518;
          if (iVar10 != *(int *)(lVar14 + 8)) goto LAB_0ae5e30d;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0ae5e105:
      if ((uint)uVar23 <= (uint)uVar17) break;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)lStack_468);
    uVar23 = ((long)uStack_550 - (long)auStack_558 >> 6) * -0x3333333333333333;
    lVar24 = lStack_518;
  }
  puVar13 = puStack_4a8;
  if (uVar23 == uVar17) {
    puVar2 = puStack_4a0;
    if (puStack_4a8 != (ulong *)0x0) {
      while (puVar13 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_4a0 = puVar13;
      func_0x0412a280(puStack_4a8,(long)puStack_498 - (long)puStack_4a8);
    }
    puStack_498 = puStack_548;
    if (uStack_1f0 < puStack_1e8) {
      *uStack_1f0 = 0;
      uStack_1f0[1] = 0;
      uStack_1f0[2] = 0;
      *uStack_1f0 = uStack_4d8;
      uStack_1f0[1] = uStack_4d0;
      uStack_1f0[2] = uStack_4c8;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      uStack_1f0[5] = uStack_4b0;
      uStack_1f0[3] = uStack_4c0;
      uStack_1f0[4] = uStack_4b8;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      uStack_1f0[6] = 0;
      uStack_1f0[7] = 0;
      uStack_1f0[8] = 0;
      uStack_1f0[6] = auStack_558;
      uStack_1f0[7] = uStack_550;
      uStack_1f0[8] = puStack_548;
      puStack_4a8 = (ulong *)0x0;
      puStack_4a0 = (ulong *)0x0;
      puStack_498 = (ulong *)0x0;
      uStack_1f0[9] = plStack_490;
      uStack_1f0[10] = plStack_488;
      plStack_490 = (long *)0x0;
      plStack_488 = (undefined8 *)0x0;
      uStack_1f0[0xb] = 0;
      uStack_1f0[0xc] = 0;
      uStack_1f0[0xd] = 0;
      uStack_1f0[0xb] = uStack_480;
      uStack_1f0[0xc] = uStack_478;
      uStack_1f0[0xd] = uStack_470;
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_1f0 = uStack_1f0 + 0xe;
    }
    else {
      puStack_4a8 = (ulong *)auStack_558;
      puStack_4a0 = (ulong *)uStack_550;
      uStack_1f0 = (undefined8 *)func_0x0652ac80(&uStack_1f8,&uStack_4d8);
    }
    plVar12 = uStack_1f0 + -0xe;
    lVar14 = uStack_538;
  }
  else {
LAB_0ae5e30d:
    auVar6 = auStack_558;
    puVar13 = (ulong *)uStack_550;
    if (auStack_558 != (undefined1  [8])0x0) {
joined_r0x0ae5e31d:
      while (auVar7 = auStack_558, auStack_558 != (undefined1  [8])puVar13) {
        auStack_558 = auVar6;
        func_0x05fe8450(puVar13 + -0x28);
        auVar6 = auStack_558;
        puVar13 = puVar13 + -0x28;
        auStack_558 = auVar7;
      }
      uStack_550 = auStack_558;
      auStack_558 = auVar6;
      func_0x0412a280(auVar6,(long)puStack_548 - (long)auVar6);
    }
    plVar12 = (long *)0xf6a45c0;
    lVar14 = uStack_538;
  }
  uStack_538 = lVar14;
  if (lVar14 != 0) {
    if (lVar14 != uStack_530) {
      lVar21 = uStack_530 + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar20 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar20 != lVar14);
    }
    uStack_530 = lVar14;
    func_0x0412a280(uStack_538,lStack_528 - uStack_538);
  }
  func_0x05f93280(&uStack_4d8);
  if (plVar12 != &lStack_4f8) {
    func_0x066dff70(plVar12,lStack_4f8,lStack_4f0,
                    (lStack_4f0 - lStack_4f8 >> 4) * -0x5555555555555555);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_510 & 1) != 0) {
    func_0x0412a280(uStack_500,CONCAT71(uStack_50f,bStack_510) & 0xfffffffffffffffe);
  }
  func_0x066dff70(&lStack_288,lStack_4f8,lStack_4f0,
                  (lStack_4f0 - lStack_4f8 >> 4) * -0x5555555555555555);
  auStack_240 = func_0x0ab06a00();
  lVar21 = lStack_270;
  lVar14 = lStack_268;
  if (lStack_270 != 0) {
    for (; lVar21 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_268 = lVar21;
    func_0x0412a280(lStack_270,lStack_260 - lStack_270);
  }
  puStack_428 = (undefined1 *)lStack_278;
  uStack_430 = lStack_280;
  auStack_438 = (undefined1  [8])lStack_288;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  puStack_410 = puStack_248;
  uStack_420 = uStack_258;
  uStack_418 = uStack_250;
  uStack_258 = 0;
  uStack_250 = 0;
  puStack_248 = (undefined1 *)0x0;
  uStack_3f8 = uStack_230;
  uStack_3f0 = uStack_228;
  pcStack_3e8 = (code *)uStack_220;
  plStack_3e0 = plStack_218;
  uStack_3d8 = uStack_210;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  uStack_210 = 0;
  uStack_3d0 = uStack_208;
  uStack_3c8 = uStack_200;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_3c0 = (undefined4)uStack_1f8;
  uStack_3bc = uStack_1f8._4_4_;
  uStack_3b8 = (undefined4)uStack_1f0;
  uStack_3b4 = uStack_1f0._4_4_;
  puStack_3b0 = puStack_1e8;
  uStack_1f8 = 0;
  uStack_1f0 = (undefined8 *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  pcStack_3a8 = (code *)uStack_1e0;
  uStack_3a0 = uStack_1d8;
  uStack_398 = uStack_1d0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_390 = uStack_1c8;
  uStack_388 = uStack_1c0;
  uStack_380 = uStack_1b8;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_378 = uStack_1b0;
  uStack_370 = uStack_1a8;
  pcStack_368 = (code *)uStack_1a0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_360 = (undefined4)uStack_198;
  uStack_35c = uStack_198._4_4_;
  uStack_358 = (undefined4)uStack_190;
  uStack_354 = uStack_190._4_4_;
  uStack_350 = uStack_188;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  auStack_408 = auStack_240;
  func_0x0d84fd50(uStack_450,auStack_438);
  func_0x0651ffe0(auStack_438);
  func_0x0651ffe0(&lStack_270);
  lVar21 = lStack_288;
  lVar14 = lStack_280;
  if (lStack_288 != 0) {
    for (; lVar21 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_280 = lVar21;
    func_0x0412a280(lStack_288,lStack_278 - lStack_288);
  }
  lVar21 = lStack_4f8;
  lVar14 = lStack_4f0;
  if (lStack_4f8 != 0) {
    for (; lVar21 != lVar14; lVar14 = lVar14 + -0x30) {
      if ((*(byte *)(lVar14 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                        *(ulong *)(lVar14 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_4f0 = lVar21;
    func_0x0412a280(lStack_4f8,lStack_4e8 - lStack_4f8);
  }
  uVar15 = func_0x0a716770(lVar24,&UNK_01b136ed);
  func_0x0a716640(&uStack_178,lVar24);
  lVar14 = *plStack_180;
  func_0x065af670(auStack_438);
  puVar13 = (ulong *)(lVar24 + 8);
  if (&uStack_420 != puVar13) {
    bVar4 = *(byte *)puVar13;
    if ((uStack_420 & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        puStack_410 = *(undefined1 **)(lVar24 + 0x18);
        uStack_420 = *puVar13;
        uStack_418 = *(ulong *)(lVar24 + 0x10);
      }
      else {
        func_0x04885070(&uStack_420,*(undefined8 *)(lVar24 + 0x18),*(undefined8 *)(lVar24 + 0x10));
      }
    }
    else {
      bVar25 = (bVar4 & 1) != 0;
      lVar21 = lVar24 + 9;
      if (bVar25) {
        lVar21 = *(long *)(lVar24 + 0x18);
      }
      uVar17 = (ulong)(bVar4 >> 1);
      if (bVar25) {
        uVar17 = *(ulong *)(lVar24 + 0x10);
      }
      func_0x04885120(&uStack_420,lVar21,uVar17);
    }
  }
  auVar26 = func_0x0ae6b4e0();
  auStack_408 = auVar26;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar12 = plStack_3e0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f274e08;
  pcStack_3e8 = (code *)(puVar16 + 3);
  *(undefined1 *)(puVar16 + 4) = 3;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[3] = &UNK_0f274e58;
  puVar16[8] = uVar15;
  if (plStack_3e0 == (long *)0x0) {
LAB_0ae5e9ce:
    uVar17 = *(ulong *)(lVar14 + 0xb0);
    plStack_3e0 = puVar16;
    if (*(ulong *)(lVar14 + 0xb8) <= uVar17) {
LAB_0ae5ea24:
      lVar24 = func_0x065b01f0(lVar14 + 0xa8,auStack_438);
      goto LAB_0ae5ea3c;
    }
  }
  else {
    LOCK();
    plVar1 = plStack_3e0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0ae5e9ce;
    lVar24 = *plStack_3e0;
    plStack_3e0 = puVar16;
    (**(code **)(lVar24 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    uVar17 = *(ulong *)(lVar14 + 0xb0);
    if (*(ulong *)(lVar14 + 0xb8) <= uVar17) goto LAB_0ae5ea24;
  }
  func_0x065b0410(uVar17,auStack_438);
  lVar24 = uVar17 + 0x1b0;
  *(long *)(lVar14 + 0xb0) = lVar24;
LAB_0ae5ea3c:
  *(long *)(lVar14 + 0xb0) = lVar24;
  func_0x0652dc20(auStack_438);
  lVar14 = *(long *)(lVar24 + -0x1b0);
  if (lVar14 != 0) {
    lVar21 = *(long *)(lVar24 + -0x1a8);
    lVar20 = lVar14;
    if (lVar14 != lVar21) {
      do {
        if ((*(byte *)(lVar21 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar21 + -0x10),
                          *(ulong *)(lVar21 + -0x20) & 0xfffffffffffffffe);
        }
        lVar21 = lVar21 + -0x30;
      } while (lVar21 != lVar14);
      lVar20 = *(long *)(lVar24 + -0x1b0);
    }
    *(long *)(lVar24 + -0x1a8) = lVar14;
    func_0x0412a280(lVar20,*(long *)(lVar24 + -0x1a0) - lVar20);
    *(long *)(lVar24 + -0x1b0) = 0;
    *(undefined8 *)(lVar24 + -0x1a8) = 0;
    *(undefined8 *)(lVar24 + -0x1a0) = 0;
  }
  *(ulong *)(lVar24 + -0x1b0) = uStack_178;
  *(undefined **)(lVar24 + -0x1a8) = puStack_170;
  *(undefined **)(lVar24 + -0x1a0) = puStack_168;
  return;
}



/* ---- referenced strings ----
 * 0x147b3d0  AfterEventSignal
 */
