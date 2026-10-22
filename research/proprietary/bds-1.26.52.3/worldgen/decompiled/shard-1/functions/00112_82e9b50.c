/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83e9b50 (ELF vaddr 0x82e9b50)
 * Label: JigsawStructureDataPacket::vslot6
 * Body:  [[083e9b50, 083e9c01] [0848d1f0, 0848d4d3]]
 * Ghidra: wg_JigsawStructureDataPacket__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructureDataPacket__vslot6
               (long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 uStack_399;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  code *pcStack_380;
  undefined4 uStack_378;
  undefined1 uStack_374;
  long lStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_350;
  undefined8 auStack_348 [2];
  undefined *puStack_338;
  code *pcStack_330;
  undefined4 uStack_328;
  undefined1 uStack_324;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined2 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined4 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [256];
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [344];
  undefined8 uStack_60;
  byte bStack_50;
  undefined1 uStack_4f;
  undefined6 uStack_4e;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_60 = 0x83e9b6f;
  (**(code **)(*param_1 + 0x10))();
  uStack_60 = 0x83e9b7d;
  uVar7 = (**(code **)(*param_1 + 0x68))(param_1);
  if ((param_4 >> 0x20 & 1) != 0) {
    uVar7 = param_4;
  }
  if ((1 < (int)uVar7 - 3U) && ((int)uVar7 != 5)) {
    uStack_38 = 0x3990;
    uStack_36 = 0x53;
    uStack_35 = 0xf;
    uStack_34 = 0;
    uStack_30 = (undefined4)param_2;
    uStack_2c = (undefined4)((ulong)param_2 >> 0x20);
    bStack_50 = 0;
    uStack_4f = 0;
    uStack_60 = 0x83e9bda;
    FUN_0d6ba180(&bStack_50,param_1 + 6,&uStack_38,0);
    if ((bStack_50 & 1) != 0) {
      uStack_60 = 0x83e9bf4;
      func_0x0412a280(uStack_40,
                      CONCAT62(uStack_4e,CONCAT11(uStack_4f,bStack_50)) & 0xfffffffffffffffe);
    }
    return;
  }
  uStack_300 = 0;
  puStack_308 = &UNK_0f0f0138;
  puStack_2f0 = &UNK_0ef474c0;
  uStack_2e0 = 0xffffffff;
  puStack_2d8 = auStack_2c8;
  uStack_2d0 = 0x800000000;
  puStack_1c8 = auStack_1b8;
  uStack_1c0 = 0x800000000;
  uStack_38 = 0xfffc;
  uStack_36 = 1;
  uStack_34 = 0;
  uStack_30 = 0xffffffff;
  puStack_350 = &UNK_0f119928;
  lStack_320 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  uStack_2f8 = param_2;
  lStack_2e8 = param_3;
  if (lStack_320 == 0) {
    func_0x048b0de0(&uStack_398,&uStack_399);
    _DAT_0f54fd90 = (undefined4)uStack_398;
    uRam000000000f54fd94 = uStack_398._4_4_;
    uVar4 = (undefined4)uStack_390;
    uVar5 = uStack_390._4_4_;
    uStack_398 = (long *)0x0;
    uStack_390 = (long *)0x0;
    plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar4;
    uRam000000000f54fd9c = uVar5;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
    plVar3 = uStack_390;
    if (uStack_390 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_390 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_390 + 0x10))(uStack_390);
        func_0x0412c2d0(plVar3);
      }
    }
    lStack_320 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  lStack_370 = param_3 + 0x18;
  puStack_338 = &UNK_0848d800;
  uStack_328 = 0x5466e4e3;
  pcStack_330 = (code *)0x0;
  uStack_324 = 4;
  uStack_318 = 0;
  uStack_310 = 0;
  puStack_388 = &UNK_0848d800;
  pcStack_380 = (code *)0x0;
  uStack_378 = 0x5466e4e3;
  uStack_374 = 4;
  auStack_348[0] = 0;
  uStack_368 = 0;
  puStack_360 = &UNK_0848d720;
  uStack_398 = param_1 + 6;
  cVar6 = func_0x0ed6b850(&puStack_2f0,&puStack_308,&uStack_398,&puStack_350);
  if (pcStack_380 != (code *)0x0) {
    (*pcStack_380)(&uStack_398);
    if (pcStack_330 != (code *)0x0) {
      (*pcStack_330)(auStack_348);
    }
  }
  if (cVar6 == '\0') {
    if ((int)uStack_1c0 != 0 && puStack_1c8 == (undefined1 *)0x0) {
      uVar8 = func_0x04890760();
      func_0x048ffe50(&puStack_2f0);
      uVar8 = func_0x0eee2d70(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      pcVar9 = pcStack_380;
      if (pcStack_380 != (code *)0x0) goto LAB_0848d4ba;
      do {
        func_0x048ffe50(&puStack_2f0);
        pcVar9 = (code *)func_0x0eee2d70(uVar8);
LAB_0848d4ba:
        (*pcVar9)(&uStack_398);
        if (pcStack_330 != (code *)0x0) {
          (*pcStack_330)(auStack_348);
        }
      } while( true );
    }
    if ((int)uStack_1c0 != 0) {
      func_0x0ed6c040(puStack_1c8 + 8);
    }
  }
  func_0x048ffe50(&puStack_2f0);
  return;
}


