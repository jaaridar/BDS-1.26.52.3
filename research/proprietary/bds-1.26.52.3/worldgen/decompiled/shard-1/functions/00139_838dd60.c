/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x848dd60 (ELF vaddr 0x838dd60)
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[0848dd60, 0848e341] [0848e369, 0848e36d] [0848e37b, 0848e3cd]]
 * Ghidra: FUN_0848dd60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0848dd60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  long *unaff_R12;
  undefined *unaff_R13;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 uStack_429;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined *puStack_418;
  code *pcStack_410;
  ulong uStack_408;
  long *plStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined1 uStack_3e8;
  char cStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  code *pcStack_3c0;
  undefined4 uStack_3b8;
  undefined1 uStack_3b4;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  undefined *puStack_380;
  code *pcStack_378;
  undefined4 uStack_370;
  undefined1 uStack_36c;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined2 auStack_350 [4];
  undefined8 uStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined2 uStack_328;
  undefined *puStack_320;
  undefined2 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined4 uStack_2f8;
  undefined1 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [256];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_320 = &UNK_0f0f0208;
  uStack_318 = 0x10;
  puStack_308 = &UNK_0ef46eb0;
  uStack_2f8 = 0xffffffff;
  puStack_2f0 = auStack_2e0;
  uStack_2e8 = 0x800000000;
  puStack_1e0 = auStack_1d0;
  uStack_1d8 = 0x800000000;
  uStack_50 = 0xfffc;
  uStack_4e = 1;
  uStack_4c = 0xffffffff00000000;
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_350[0] = 0xd;
  uStack_348 = 0;
  plStack_340 = (long *)0x0;
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0x100;
  puStack_398 = &UNK_0f119928;
  plVar11 = (long *)(param_2 + 0x18);
  puStack_418 = &UNK_04913860;
  pcStack_410 = (code *)0x0;
  uStack_408 = CONCAT35(uStack_408._5_3_,0x48240cd28);
  uStack_428 = auStack_350;
  puStack_3f0 = &UNK_04913840;
  plStack_400 = plVar11;
  uStack_310 = param_3;
  lStack_300 = param_2;
  puStack_3f8 = (undefined *)func_0x04913c20(plVar11);
  uStack_3d8 = puStack_3f8;
  uStack_3d0 = plVar11;
  uStack_390 = func_0x04913c20(plVar11);
  plStack_388 = plVar11;
  cVar5 = func_0x04913500(&uStack_3d8,&uStack_390);
  if ((cVar5 == '\0') &&
     (cVar5 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_0147eb69),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lStack_368 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lStack_368 == 0) {
    func_0x048b0de0(&uStack_3d8,&uStack_429);
    _DAT_0f54fd90 = (undefined4)uStack_3d8;
    uRam000000000f54fd94 = uStack_3d8._4_4_;
    uVar3 = (undefined4)uStack_3d0;
    uVar4 = uStack_3d0._4_4_;
    uStack_3d8 = (undefined *)0x0;
    uStack_3d0 = (long *)0x0;
    plVar2 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar3;
    uRam000000000f54fd9c = uVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    unaff_R12 = uStack_3d0;
    if (uStack_3d0 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_3d0 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_3d0 + 0x10))(uStack_3d0);
        func_0x0412c2d0(unaff_R12);
      }
    }
    lStack_368 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  auVar13._8_8_ = plVar11;
  auVar13._0_8_ = unaff_R12;
  puStack_380 = &UNK_0848d800;
  uStack_370 = 0x5466e4e3;
  pcStack_378 = (code *)0x0;
  uStack_36c = 3;
  uStack_360 = 0;
  uStack_358 = 0;
  puStack_3c8 = &UNK_0848d800;
  pcStack_3c0 = (code *)0x0;
  uStack_3b8 = 0x5466e4e3;
  uStack_3b4 = 3;
  uStack_390 = 0;
  uStack_3a8 = 0;
  puStack_3a0 = &UNK_0848d720;
  uStack_3d8 = (undefined *)param_4;
  plStack_3b0 = plVar11;
  uVar6 = func_0x0ed6b4a0(&puStack_308,&puStack_320,&uStack_3d8,&uStack_428,&puStack_398);
  uVar10 = (ulong)uVar6;
  if ((pcStack_3c0 != (code *)0x0) && ((*pcStack_3c0)(&uStack_3d8), pcStack_378 != (code *)0x0)) {
    (*pcStack_378)(&uStack_390);
  }
  if (pcStack_410 != (code *)0x0) {
    (*pcStack_410)(&uStack_428);
  }
  if ((char)uVar6 != '\0') {
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
    plVar11 = plStack_340;
    goto joined_r0x0848e2a7;
  }
  if ((int)uStack_1d8 == 0 || puStack_1e0 != (undefined1 *)0x0) {
    if ((int)uStack_1d8 == 0) {
      param_4 = func_0x0412dc70();
      auVar13._8_8_ = 0x1e;
      auVar13._0_8_ = &UNK_012a80bb;
LAB_0848e171:
      uVar7 = auVar13._8_8_ | 7;
      uVar10 = 0x1a;
      if (uVar7 != 0x17) {
        uVar10 = uVar7 + 1;
      }
      unaff_R13 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10);
      if (unaff_R13 == (undefined *)0x0) goto LAB_0848e32c;
      goto LAB_0848e1a9;
    }
    auVar13 = func_0x0ed6c040(puStack_1e0 + 8);
    uVar10 = auVar13._8_8_;
    param_4 = func_0x0412dc70();
    if (0xfffffffffffffff7 < uVar10) {
      uVar8 = func_0x04882e30();
      do {
        func_0x049084c0(auStack_350);
        func_0x0490a470(&puStack_308);
        pcVar9 = (code *)func_0x0eee2d70(uVar8);
        (*pcVar9)(&uStack_3d8);
        if (pcStack_378 != (code *)0x0) {
          (*pcStack_378)(&uStack_390);
        }
        if (pcStack_410 != (code *)0x0) {
          (*pcStack_410)(&uStack_428);
        }
      } while( true );
    }
    if (0x16 < uVar10) goto LAB_0848e171;
    uStack_428 = (undefined2 *)CONCAT71(uStack_428._1_7_,auVar13[8] * '\x02');
    unaff_R13 = (undefined *)((long)&uStack_428 + 1);
    if (uVar10 != 0) goto LAB_0848e1bc;
    lVar12 = 0;
  }
  else {
    func_0x04890760();
LAB_0848e32c:
    func_0x0eec74c0(uVar10,0);
LAB_0848e1a9:
    uStack_420 = auVar13._8_8_;
    uStack_428 = (undefined2 *)(uVar10 | 1);
    puStack_418 = unaff_R13;
LAB_0848e1bc:
    lVar12 = auVar13._8_8_;
    func_0x0eee2ee0(unaff_R13,auVar13._0_8_,lVar12);
  }
  uVar10 = (ulong)uStack_428;
  unaff_R13[lVar12] = 0;
  puStack_3f8 = puStack_418;
  plStack_400 = uStack_420;
  puStack_418 = _DAT_0f11f2a8;
  pcStack_410 = _UNK_0f11f2b0;
  uStack_428 = (undefined2 *)CONCAT44(_UNK_0f11f29c,_DAT_0f11f298);
  uStack_420 = (long *)CONCAT44(_UNK_0f11f2a4,_UNK_0f11f2a0);
  uStack_408 = uVar10;
  uStack_3e8 = 0;
  puStack_3f0 = (undefined *)((ulong)puStack_3f0 & 0xff000000);
  cStack_3e0 = '\x01';
  uStack_3d8 = (undefined *)0x0;
  uStack_3d0 = (long *)0x0;
  puStack_3c8 = (undefined *)0x0;
  func_0x0eee17a0(&uStack_3d8,&uStack_428,&uStack_3d8,1);
  if ((cStack_3e0 == '\x01') && ((uStack_408 & 1) != 0)) {
    func_0x0412a280(puStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  *(undefined4 *)param_1 = 0x4a;
  param_1[1] = param_4;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[2] = uStack_3d8;
  param_1[3] = uStack_3d0;
  param_1[4] = puStack_3c8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar11 = plStack_340;
joined_r0x0848e2a7:
  plStack_340 = (long *)0x0;
  uStack_348 = 0;
  if (plVar11 != (long *)0x0) {
    plStack_340 = (long *)0x0;
    uStack_348 = 0;
    LOCK();
    plVar2 = plVar11 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
    plVar11 = plStack_340;
    uStack_338 = 0;
    if (plStack_340 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_340 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_340 + 0x10))(plStack_340);
        func_0x0412c2d0(plVar11);
      }
    }
  }
  func_0x0490a470(&puStack_308);
  return;
}


