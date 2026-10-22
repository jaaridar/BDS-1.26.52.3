/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8585900 (ELF vaddr 0x8485900)
 * Label: FeatureRegistryPacket::vslot6
 * Body:  [[08585900, 08585a64] [08624630, 08624913]]
 * Ghidra: wg_FeatureRegistryPacket__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FeatureRegistryPacket__vslot6(long *param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
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
  long *plStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined4 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [256];
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [248];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined **ppuStack_68;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uStack_c0 = 0x8585922;
  (**(code **)(*param_1 + 0x10))();
  plVar1 = param_1 + 6;
  uStack_c0 = 0x8585930;
  uVar8 = (**(code **)(*param_1 + 0x68))(param_1);
  if ((param_4 >> 0x20 & 1) != 0) {
    uVar8 = param_4;
  }
  if (((int)uVar8 - 3U < 2) || ((int)uVar8 == 5)) {
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
    puStack_350 = &UNK_0f122eb0;
    lStack_320 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    plStack_2f8 = param_2;
    lStack_2e8 = param_3;
    if (lStack_320 == 0) {
      func_0x048b0de0(&uStack_398,&uStack_399);
      _DAT_0f54fd90 = (undefined4)uStack_398;
      uRam000000000f54fd94 = uStack_398._4_4_;
      uVar5 = (undefined4)uStack_390;
      uVar6 = uStack_390._4_4_;
      uStack_398 = (long *)0x0;
      uStack_390 = (long *)0x0;
      plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar5;
      uRam000000000f54fd9c = uVar6;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar9 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0412c2d0(plVar3);
        }
      }
      plVar3 = uStack_390;
      if (uStack_390 != (long *)0x0) {
        LOCK();
        plVar2 = uStack_390 + 1;
        lVar9 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*uStack_390 + 0x10))(uStack_390);
          func_0x0412c2d0(plVar3);
        }
      }
      lStack_320 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    lStack_370 = param_3 + 0x18;
    puStack_338 = &UNK_08624c40;
    uStack_328 = 0x45722d64;
    pcStack_330 = (code *)0x0;
    uStack_324 = 4;
    uStack_318 = 0;
    uStack_310 = 0;
    puStack_388 = &UNK_08624c40;
    pcStack_380 = (code *)0x0;
    uStack_378 = 0x45722d64;
    uStack_374 = 4;
    auStack_348[0] = 0;
    uStack_368 = 0;
    puStack_360 = &UNK_08624b60;
    uStack_398 = plVar1;
    cVar7 = func_0x0ed6b850(&puStack_2f0,&puStack_308,&uStack_398,&puStack_350);
    if ((pcStack_380 != (code *)0x0) && ((*pcStack_380)(&uStack_398), pcStack_330 != (code *)0x0)) {
      (*pcStack_330)(auStack_348);
    }
    if (cVar7 == '\0') {
      if ((int)uStack_1c0 != 0 && puStack_1c8 == (undefined1 *)0x0) {
        uVar10 = FUN_04890760();
        FUN_048ffe50(&puStack_2f0);
        uVar10 = func_0x0eee2d70(uVar10);
        uVar10 = func_0x04882e20(uVar10);
        uVar10 = func_0x04882e20(uVar10);
        pcVar11 = pcStack_380;
        if (pcStack_380 != (code *)0x0) goto LAB_086248fa;
        do {
          FUN_048ffe50(&puStack_2f0);
          pcVar11 = (code *)func_0x0eee2d70(uVar10);
LAB_086248fa:
          (*pcVar11)(&uStack_398);
          if (pcStack_330 != (code *)0x0) {
            (*pcStack_330)(auStack_348);
          }
        } while( true );
      }
      if ((int)uStack_1c0 != 0) {
        func_0x0ed6c040(puStack_1c8 + 8);
      }
    }
    FUN_048ffe50(&puStack_2f0);
    return;
  }
  apuStack_58[0] = &UNK_0f123220;
  uStack_38 = SUB82(apuStack_58,0);
  uStack_36 = (undefined1)((ulong)apuStack_58 >> 0x10);
  uStack_35 = (undefined1)((ulong)apuStack_58 >> 0x18);
  uStack_34 = (undefined4)((ulong)apuStack_58 >> 0x20);
  puStack_88 = &UNK_0f123120;
  puStack_b8 = &UNK_0f1231a0;
  uStack_c0 = 0x85859db;
  plStack_b0 = param_2;
  ppuStack_a8 = apuStack_58;
  plStack_a0 = plVar1;
  plStack_98 = (long *)&puStack_b8;
  plStack_80 = param_2;
  plStack_78 = plVar1;
  ppuStack_68 = &puStack_88;
  (**(code **)(*param_2 + 0xe8))(param_2,&puStack_88,&puStack_b8,&UNK_012ddf7f,0);
  if ((undefined **)plStack_98 == &puStack_b8) {
    lVar9 = 0x20;
LAB_08585a21:
    uStack_c0 = 0x8585a27;
    (**(code **)(*plStack_98 + lVar9))();
    if (ppuStack_68 != &puStack_88) goto LAB_085859f9;
LAB_08585a31:
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (plStack_98 != (long *)0x0) goto LAB_08585a21;
    if (ppuStack_68 == &puStack_88) goto LAB_08585a31;
LAB_085859f9:
    lVar9 = 0x28;
    if (ppuStack_68 == (undefined **)0x0) {
      ppuVar4 = (undefined **)CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,uStack_38)));
      goto joined_r0x08585a47;
    }
  }
  uStack_c0 = 0x8585a3c;
  (**(code **)(*ppuStack_68 + lVar9))();
  ppuVar4 = (undefined **)CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,uStack_38)));
joined_r0x08585a47:
  if (ppuVar4 == apuStack_58) {
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (ppuVar4 == (undefined **)0x0) {
      return;
    }
  }
  uStack_c0 = 0x8585a54;
  (**(code **)(*ppuVar4 + lVar9))();
  return;
}


