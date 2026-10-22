/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8587ac0 (ELF vaddr 0x8487ac0)
 * Label: FeatureRegistryPacket::vslot15
 * Body:  [[08587ac0, 08587f98] [08587fa0, 08588034]]
 * Ghidra: wg_FeatureRegistryPacket__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FeatureRegistryPacket__vslot15(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 uStack_559;
  undefined *puStack_558;
  long *plStack_550;
  long *plStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined2 uStack_500;
  undefined6 uStack_4fe;
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 uStack_4f0;
  undefined6 uStack_4ee;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  code *pcStack_4d0;
  undefined4 uStack_4c8;
  undefined1 uStack_4c4;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 auStack_4a0 [2];
  undefined *puStack_490;
  code *pcStack_488;
  undefined4 uStack_480;
  undefined1 uStack_47c;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined **ppuStack_458;
  undefined4 uStack_450;
  undefined1 *puStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [256];
  undefined1 *puStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [384];
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  undefined8 uStack_1a4;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined *puStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined *puStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_518 = 0;
  uStack_4f8 = 0;
  uStack_4f6 = 0;
  uStack_4f0 = 0;
  uStack_4ee = 0;
  lStack_508 = 0;
  uStack_500 = 0;
  uStack_4fe = 0;
  uStack_528 = 0;
  uStack_520 = 0;
  lStack_538 = 0;
  lStack_530 = 0;
  plStack_548 = (long *)0x0;
  lStack_540 = 0;
  puStack_558 = (undefined *)0x0;
  plStack_550 = (long *)0x0;
  uStack_510 = 0x3f600000;
  func_0x048af640(&lStack_540,8);
  uStack_4f8 = 0;
  uStack_4f6 = 0;
  uStack_4f0 = 0;
  lStack_508 = 0;
  uStack_500 = 0;
  uStack_4fe = 0;
  puStack_558 = &UNK_0f534768;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef44a60;
  plStack_550 = plVar5 + 3;
  *(undefined1 *)(plVar5 + 3) = 1;
  puStack_558 = &UNK_0ef471f0;
  plStack_548 = plVar5;
  func_0x08586280(&puStack_558);
  uStack_450 = 0xffffffff;
  puStack_448 = auStack_438;
  uStack_440 = 0x800000000;
  puStack_338 = auStack_328;
  uStack_330 = 0x800000000;
  uStack_1a8 = 0xfffc;
  uStack_1a6 = 1;
  uStack_1a4 = 0xffffffff00000000;
  uStack_198 = 0;
  uStack_190 = 0;
  puStack_460 = (undefined8 *)&UNK_0ef47258;
  uStack_180 = 0;
  puStack_188 = &UNK_0ef472c8;
  puStack_120 = &uStack_160;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0x100;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0x200;
  uStack_e8 = 0x144;
  uStack_e4 = 0;
  uStack_d8 = 0;
  puStack_e0 = &UNK_0ef473d8;
  puStack_78 = &uStack_b8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x100;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_48 = 0x200;
  uStack_40 = 0x144;
  uStack_3c = 0x2000;
  uStack_38 = 4;
  uStack_30 = 0;
  puStack_4a8 = &UNK_0f122f48;
  lStack_478 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  ppuStack_458 = &puStack_558;
  if (lStack_478 == 0) {
    FUN_048b0de0(&uStack_4e8,&uStack_559);
    _DAT_0f54fd90 = (undefined4)uStack_4e8;
    uRam000000000f54fd94 = uStack_4e8._4_4_;
    uVar3 = (undefined4)uStack_4e0;
    uVar4 = uStack_4e0._4_4_;
    uStack_4e8 = 0;
    uStack_4e0 = (long *)0x0;
    plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar3;
    uRam000000000f54fd9c = uVar4;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0412c2d0(plVar5);
      }
    }
    plVar5 = uStack_4e0;
    if (uStack_4e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4e0 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_4e0 + 0x10))(uStack_4e0);
        FUN_0412c2d0(plVar5);
      }
    }
    lStack_478 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  puStack_490 = &UNK_08626540;
  uStack_480 = 0x994da98e;
  pcStack_488 = (code *)0x0;
  uStack_47c = 4;
  uStack_470 = 0;
  uStack_468 = 0;
  puStack_4d8 = &UNK_08626540;
  pcStack_4d0 = (code *)0x0;
  uStack_4c8 = 0x994da98e;
  uStack_4c4 = 4;
  auStack_4a0[0] = 0;
  uStack_4b8 = 0;
  puStack_4b0 = &UNK_08626520;
  uStack_4e8 = param_2;
  plStack_4c0 = &lStack_540;
  func_0x0ed6b850(&puStack_460,&puStack_188,&uStack_4e8,&puStack_4a8);
  if ((pcStack_4d0 != (code *)0x0) && ((*pcStack_4d0)(&uStack_4e8), pcStack_488 != (code *)0x0)) {
    (*pcStack_488)(auStack_4a0);
  }
  func_0x048e6440(param_1,&puStack_460);
  func_0x048e65b0(&puStack_460);
  plVar5 = plStack_548;
  puStack_558 = &UNK_0f534768;
  if (plStack_548 == (long *)0x0) {
    *(undefined1 *)plStack_550 = 0;
  }
  else {
    *(undefined1 *)plStack_550 = 0;
    LOCK();
    plVar1 = plStack_548 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_548 + 0x10))(plStack_548);
      FUN_0412c2d0(plVar5);
    }
  }
  lVar2 = lStack_508;
  if (lStack_508 != 0) {
    for (lVar6 = CONCAT62(uStack_4fe,uStack_500); lVar2 != lVar6; lVar6 = lVar6 + -0x38) {
      if ((*(byte *)(lVar6 + -0x38) & 1) != 0) {
        FUN_0412a280(*(undefined8 *)(lVar6 + -0x28),*(ulong *)(lVar6 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_500 = (undefined2)lVar2;
    uStack_4fe = (undefined6)((ulong)lVar2 >> 0x10);
    FUN_0412a280(lStack_508,CONCAT62(uStack_4f6,uStack_4f8) - lStack_508);
  }
  puStack_460 = &uStack_528;
  func_0x048b0f50(&puStack_460);
  if (lStack_540 != 0) {
    lStack_538 = lStack_540;
    FUN_0412a280(lStack_540,lStack_530 - lStack_540);
  }
  return param_1;
}


