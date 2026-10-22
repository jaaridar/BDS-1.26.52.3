/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f49570 (ELF vaddr 0x9e49570)
 * Label: caller-of-callee
 * Body:  [[09f49570, 09f4983b] [09f49840, 09f499a8] [09f499b0, 09f49a14] [09f49a20, 09f49ab2] [09f49ac0, 09f49b69] [09f49b70, 09f49cb7] [09f49cc0, 09f4ab02] [09f4ab10, 09f4b0b0] [09f4b0c0, 09f4b106] [09f4b110, 09f4b133]]
 * Ghidra: FUN_09f49570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_09f49570(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  bool bVar16;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  uint *puStack_5b8;
  ulong uStack_5b0;
  uint *puStack_5a8;
  uint *puStack_5a0;
  undefined8 *puStack_598;
  ulong uStack_590;
  byte bStack_588;
  char cStack_580;
  undefined8 uStack_578;
  ulong uStack_570;
  uint *puStack_568;
  ulong uStack_560;
  uint *puStack_558;
  uint *puStack_550;
  undefined8 uStack_548;
  ulong uStack_540;
  byte bStack_538;
  undefined8 uStack_528;
  undefined8 uStack_520;
  uint *puStack_518;
  ulong uStack_510;
  uint *puStack_508;
  uint *puStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4f0;
  char cStack_4e8;
  uint *puStack_4d8;
  long *aplStack_4d0 [2];
  uint uStack_4c0;
  undefined1 uStack_4b9;
  uint *puStack_4b8;
  uint *puStack_4b0;
  uint *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined1 auStack_498 [16];
  uint *puStack_488;
  ulong uStack_480;
  uint *puStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  char cStack_448;
  uint *puStack_440;
  uint *puStack_438;
  ulong uStack_430;
  uint *puStack_428;
  ulong uStack_420;
  undefined4 uStack_418;
  uint *puStack_410;
  uint auStack_400 [4];
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  ulong uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  uint *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  uint *puStack_368;
  ulong uStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  ulong uStack_2b0;
  undefined1 uStack_2a8;
  char cStack_2a0;
  undefined1 auStack_298 [112];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  uint *puStack_218;
  ulong uStack_210;
  uint *puStack_208;
  uint *puStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  uint *puStack_1e8;
  ulong uStack_1e0;
  uint *puStack_1d8;
  ulong uStack_1d0;
  uint *puStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  ulong uStack_1b0;
  undefined *apuStack_1a8 [2];
  undefined *puStack_198;
  undefined1 auStack_190 [64];
  long lStack_150;
  undefined *apuStack_110 [6];
  undefined8 uStack_e0;
  uint *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  bVar16 = (*param_2 & 1) != 0;
  uStack_2e8 = param_2 + 1;
  if (bVar16) {
    uStack_2e8 = *(byte **)(param_2 + 0x10);
  }
  uStack_2e0 = (ulong)(*param_2 >> 1);
  if (bVar16) {
    uStack_2e0 = *(ulong *)(param_2 + 8);
  }
  uStack_e0 = 0;
  apuStack_110[0] = &UNK_0eeed250;
  puStack_4a0 = param_1;
  func_0x0ee5df20(apuStack_1a8,&UNK_0ef44650,&uStack_2e8,8);
  apuStack_1a8[0] = &UNK_0ef445e8;
  apuStack_110[0] = &UNK_0ef44638;
  puStack_198 = &UNK_0ef44610;
  if (lStack_150 == 0) {
    uVar9 = func_0x0412dc70();
    puStack_2b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_2b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar5 = _UNK_014d3e50;
    puStack_2b8[2] = _DAT_014d3e48;
    puStack_2b8[3] = uVar5;
    uVar5 = _UNK_014d3e40;
    *puStack_2b8 = _DAT_014d3e38;
    puStack_2b8[1] = uVar5;
    puStack_2b8[4] = 0x2e656c6966206769;
    *(undefined1 *)(puStack_2b8 + 5) = 0;
    uStack_2d8 = _DAT_0f1f77f8;
    uStack_2d0 = _UNK_0f1f7800;
    uStack_2e8 = (byte *)_DAT_0f1f77e8;
    uStack_2e0 = _UNK_0f1f77f0;
    uStack_2c8 = 0x31;
    uStack_2c0 = 0x28;
    uStack_2a8 = 0;
    uStack_2b0 = uStack_2b0 & 0xff000000;
    cStack_2a0 = '\x01';
    uStack_5c8 = (uint *)0x0;
    uStack_5c0 = 0;
    puStack_5b8 = (uint *)0x0;
    func_0x0eee17a0(&uStack_5c8,&uStack_2e8,auStack_298,1);
    if ((cStack_2a0 == '\x01') && ((uStack_2c8 & 1) != 0)) {
      func_0x0412a280(puStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
    }
    puVar7 = puStack_4a0;
    uStack_328 = 5;
    uStack_2e8 = (byte *)CONCAT44(uStack_324,5);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    *(undefined1 *)(puStack_4a0 + 8) = 0;
    *(undefined4 *)puStack_4a0 = 5;
    *(undefined4 *)((long)puStack_4a0 + 4) = uStack_324;
    puStack_4a0[1] = uVar9;
    *(undefined4 *)(puStack_4a0 + 2) = (undefined4)uStack_5c8;
    *(undefined4 *)((long)puStack_4a0 + 0x14) = uStack_5c8._4_4_;
    *(undefined4 *)(puStack_4a0 + 3) = (undefined4)uStack_5c0;
    *(undefined4 *)((long)puStack_4a0 + 0x1c) = uStack_5c0._4_4_;
    puStack_4a0[4] = puStack_5b8;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puStack_4a0[5] = 0;
    puStack_4a0[6] = 0;
    puStack_4a0[7] = 0;
    uStack_2c0 = 0;
    puStack_2b8 = (undefined8 *)0x0;
    uStack_2b0 = 0;
    uStack_320 = uVar9;
    uStack_2e0 = uVar9;
    func_0x048e6d60(&uStack_2e8);
    func_0x048e6d60(&uStack_328);
    goto LAB_09f4abd6;
  }
  func_0x04863060(auStack_498,0);
  func_0x0485e1c0(&uStack_2e8);
  func_0x0485e6a0(&uStack_2e8,apuStack_1a8,auStack_498,0);
  cVar3 = func_0x04864290(auStack_498);
  if (cVar3 == '\0') {
LAB_09f4a308:
    uVar9 = func_0x0412dc70();
    puStack_598 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_598 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar5 = _UNK_013cf726;
    *(ulong *)((long)puStack_598 + 0x1a) = CONCAT26(_UNK_013cf724,_DAT_013cf71e);
    *(undefined8 *)((long)puStack_598 + 0x22) = uVar5;
    uVar5 = CONCAT62(_DAT_013cf71e,_UNK_013cf71c);
    puStack_598[2] = _DAT_013cf714;
    puStack_598[3] = uVar5;
    uVar5 = _UNK_013cf70c;
    *puStack_598 = _DAT_013cf704;
    puStack_598[1] = uVar5;
    *(undefined1 *)((long)puStack_598 + 0x2a) = 0;
    puStack_5b8 = _DAT_0f1f7818;
    uStack_5b0 = _UNK_0f1f7820;
    uStack_5c8 = (uint *)_DAT_0f1f7808;
    uStack_5c0 = _UNK_0f1f7810;
    puStack_5a8 = (uint *)0x31;
    puStack_5a0 = (uint *)0x2a;
    bStack_588 = 0;
    uStack_590 = uStack_590 & 0xff000000;
    cStack_580 = '\x01';
    uStack_3a8 = (uint *)0x0;
    uStack_3a0 = 0;
    puStack_398 = (uint *)0x0;
    func_0x0eee17a0(&uStack_3a8,&uStack_5c8,&uStack_578,1);
    if ((cStack_580 == '\x01') && (((ulong)puStack_5a8 & 1) != 0)) {
      func_0x0412a280(puStack_598,(ulong)puStack_5a8 & 0xfffffffffffffffe);
    }
    uStack_578 = (uint *)CONCAT44(uStack_578._4_4_,0x16);
    uStack_5c8 = (uint *)CONCAT44(uStack_578._4_4_,0x16);
    puStack_568 = (uint *)0x0;
    uStack_560 = 0;
    puStack_558 = (uint *)0x0;
    puStack_550 = (uint *)0x0;
    uStack_548 = 0;
    uStack_540 = 0;
    cStack_4e8 = '\0';
    uStack_528 = (uint *)CONCAT44(uStack_578._4_4_,0x16);
    puStack_518 = uStack_3a8;
    uStack_510 = uStack_3a0;
    puStack_508 = puStack_398;
    puStack_5b8 = (uint *)0x0;
    uStack_5b0 = 0;
    puStack_5a8 = (uint *)0x0;
    puStack_500 = (uint *)0x0;
    uStack_4f8 = (undefined8 *)0x0;
    uStack_4f0 = 0;
    puStack_5a0 = (uint *)0x0;
    puStack_598 = (undefined8 *)0x0;
    uStack_590 = 0;
    uStack_5c0 = uVar9;
    uStack_570 = uVar9;
    uStack_520 = uVar9;
    func_0x048e6d60(&uStack_5c8);
    func_0x048e6d60(&uStack_578);
    if (cStack_4e8 != '\x01') goto LAB_09f4a780;
LAB_09f4a4ac:
    uStack_460 = puStack_500;
    uStack_480 = uStack_520;
    puStack_488 = uStack_528;
    uStack_528 = (uint *)0x0;
    uStack_520 = 0;
    puStack_478 = puStack_518;
    uStack_470 = uStack_510;
    uStack_468 = (uint *)CONCAT44(uStack_468._4_4_,puStack_508._0_4_);
    if (uStack_510 != 0) {
      uVar9 = *(ulong *)(puStack_518 + 2);
      if ((uStack_480 & uStack_480 - 1) == 0) {
        uVar9 = uVar9 & uStack_480 - 1;
      }
      else if (uStack_480 <= uVar9) {
        if ((uVar9 | uStack_480) >> 0x20 == 0) {
          uVar9 = (uVar9 & 0xffffffff) % (uStack_480 & 0xffffffff);
        }
        else {
          uVar9 = uVar9 % uStack_480;
        }
      }
      *(uint ***)(puStack_488 + uVar9 * 2) = &puStack_478;
      puStack_518 = (uint *)0x0;
      uStack_510 = 0;
    }
    puStack_500 = (uint *)0x0;
    cStack_448 = cStack_4e8;
    func_0x048f5fa0(&uStack_528);
  }
  else {
    cVar3 = func_0x04865100(auStack_498,&UNK_0127c684);
    if (cVar3 == '\0') goto LAB_09f4a308;
    uVar5 = func_0x04864680(auStack_498,&UNK_0127c684);
    func_0x04863480(auStack_3f0,uVar5);
    cVar3 = func_0x04864270(auStack_3f0);
    if (cVar3 == '\0') {
      uVar5 = func_0x0412dc70();
      func_0x09f4b580(&uStack_578,0x16,uVar5);
LAB_09f4adfa:
      uStack_4f0 = uStack_540;
      uStack_4f8 = (undefined8 *)uStack_548;
      puStack_500 = puStack_550;
      puStack_508 = puStack_558;
      uStack_510 = uStack_560;
      puStack_518 = puStack_568;
      uStack_5c8 = uStack_578;
      uStack_5c0 = uStack_570;
      puStack_568 = (uint *)0x0;
      uStack_560 = 0;
      puStack_558 = (uint *)0x0;
      puStack_550 = (uint *)0x0;
      uStack_548 = 0;
      uStack_540 = 0;
      cStack_4e8 = '\0';
      uStack_528 = uStack_578;
      uStack_520 = uStack_570;
      puStack_5b8 = (uint *)0x0;
      uStack_5b0 = 0;
      puStack_5a8 = (uint *)0x0;
      puStack_5a0 = (uint *)0x0;
      puStack_598 = (undefined8 *)0x0;
      uStack_590 = 0;
      func_0x048e6d60(&uStack_5c8);
      func_0x048e6d60(&uStack_578);
    }
    else {
      cVar3 = func_0x04864220(auStack_3f0);
      if (cVar3 != '\0') {
        uVar5 = func_0x0412dc70();
        func_0x09f4b6c0(&uStack_578,0x16,uVar5);
        goto LAB_09f4adfa;
      }
      puStack_428 = (uint *)0x0;
      uStack_420 = 0;
      puStack_438 = (uint *)0x0;
      uStack_430 = 0;
      uStack_418 = 0x3f800000;
      puStack_410 = (uint *)0x0;
      func_0x04865630(auStack_3e0,auStack_3f0);
      func_0x048656b0(auStack_3d0,auStack_3f0);
      while( true ) {
        cVar3 = func_0x04862c80(auStack_3e0,auStack_3d0);
        if (cVar3 != '\0') break;
        puStack_4b8 = (uint *)func_0x04862b80(auStack_3e0);
        cVar3 = func_0x04864290(puStack_4b8);
        if (((cVar3 == '\0') || (cVar3 = func_0x04865100(puStack_4b8,&UNK_014698e3), cVar3 == '\0'))
           || (cVar3 = func_0x04865100(puStack_4b8,&UNK_0149340d), cVar3 == '\0')) {
          uVar9 = func_0x0412dc70();
          puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
          if (puVar7 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x58,0);
          }
          uVar5 = _UNK_012485e9;
          puVar7[8] = _DAT_012485e1;
          puVar7[9] = uVar5;
          uVar5 = _UNK_012485d9;
          puVar7[6] = _DAT_012485d1;
          puVar7[7] = uVar5;
          uVar5 = _UNK_012485c9;
          puVar7[4] = _DAT_012485c1;
          puVar7[5] = uVar5;
          uVar5 = _UNK_012485b9;
          puVar7[2] = _DAT_012485b1;
          puVar7[3] = uVar5;
          uVar5 = _UNK_012485a9;
          *puVar7 = _DAT_012485a1;
          puVar7[1] = uVar5;
          *(undefined4 *)((long)puVar7 + 0x4f) = 0x2e737965;
          *(undefined1 *)((long)puVar7 + 0x53) = 0;
          puStack_5b8 = _DAT_0f1f7878;
          uStack_5b0 = _UNK_0f1f7880;
          uStack_5c8 = (uint *)_DAT_0f1f7868;
          uStack_5c0 = _UNK_0f1f7870;
          puStack_5a8 = (uint *)0x59;
          puStack_5a0 = (uint *)0x53;
          bStack_588 = 0;
          uStack_590 = uStack_590 & 0xff000000;
          cStack_580 = '\x01';
          puStack_368 = (uint *)0x0;
          uStack_360 = 0;
          puStack_358 = (uint *)0x0;
          puStack_598 = puVar7;
          func_0x0eee17a0(&puStack_368,&uStack_5c8,&uStack_578,1);
          if ((cStack_580 == '\x01') && (((ulong)puStack_5a8 & 1) != 0)) {
            func_0x0412a280(puStack_598,(ulong)puStack_5a8 & 0xfffffffffffffffe);
          }
          uStack_578 = (uint *)CONCAT44(uStack_578._4_4_,0x16);
          uStack_5c8 = (uint *)CONCAT44(uStack_578._4_4_,0x16);
          puStack_568 = (uint *)0x0;
          uStack_560 = 0;
          puStack_558 = (uint *)0x0;
          puStack_550 = (uint *)0x0;
          uStack_548 = 0;
          uStack_540 = 0;
          cStack_4e8 = '\0';
          uStack_528 = (uint *)CONCAT44(uStack_578._4_4_,0x16);
          puStack_518 = puStack_368;
          uStack_510 = uStack_360;
          puStack_508 = puStack_358;
          puStack_5b8 = (uint *)0x0;
          uStack_5b0 = 0;
          puStack_5a8 = (uint *)0x0;
          puStack_500 = (uint *)0x0;
          uStack_4f8 = (undefined8 *)0x0;
          uStack_4f0 = 0;
          puStack_5a0 = (uint *)0x0;
          puStack_598 = (undefined8 *)0x0;
          uStack_590 = 0;
          uStack_5c0 = uVar9;
          uStack_570 = uVar9;
          uStack_520 = uVar9;
          func_0x048e6d60(&uStack_5c8);
          func_0x048e6d60(&uStack_578);
LAB_09f4a6e8:
          func_0x04862b40(auStack_3d0);
          func_0x04862b40(auStack_3e0);
          goto LAB_09f4a702;
        }
        uVar5 = func_0x04864680(puStack_4b8,&UNK_014698e3);
        func_0x04863480(&puStack_368,uVar5);
        cVar3 = func_0x04864270(&puStack_368);
        if (cVar3 == '\0') {
          uVar5 = func_0x0412dc70();
          func_0x09f4b810(&uStack_578,0x16,uVar5);
          uStack_4f0 = uStack_540;
          uStack_4f8 = (undefined8 *)uStack_548;
          puStack_500 = puStack_550;
          puStack_508 = puStack_558;
          uStack_510 = uStack_560;
          puStack_518 = puStack_568;
          uStack_5c8 = uStack_578;
          uStack_5c0 = uStack_570;
          puStack_568 = (uint *)0x0;
          uStack_560 = 0;
          puStack_558 = (uint *)0x0;
          puStack_550 = (uint *)0x0;
          uStack_548 = 0;
          uStack_540 = 0;
          cStack_4e8 = '\0';
          uStack_528 = uStack_578;
          uStack_520 = uStack_570;
          puStack_5b8 = (uint *)0x0;
          uStack_5b0 = 0;
          puStack_5a8 = (uint *)0x0;
          puStack_5a0 = (uint *)0x0;
          puStack_598 = (undefined8 *)0x0;
          uStack_590 = 0;
          func_0x048e6d60(&uStack_5c8);
          func_0x048e6d60(&uStack_578);
          func_0x04863610(&puStack_368);
          goto LAB_09f4a6e8;
        }
        func_0x04865630(aplStack_4d0,&puStack_368);
        func_0x048656b0(auStack_400,&puStack_368);
        puVar15 = (uint *)0x0;
        puStack_4a8 = (uint *)0x0;
        puStack_4d8 = (uint *)0x0;
        while (cVar3 = func_0x04862c80(aplStack_4d0,auStack_400), cVar3 == '\0') {
          uVar5 = func_0x04862b80(aplStack_4d0);
          puVar10 = puStack_4a8;
          cVar3 = func_0x04864060(uVar5,2);
          if (cVar3 == '\0') {
            uVar9 = func_0x0412dc70();
            puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
            if (puVar7 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x38,0);
            }
            uVar5 = _UNK_01438476;
            puVar7[4] = _DAT_0143846e;
            puVar7[5] = uVar5;
            uVar5 = _UNK_01438466;
            puVar7[2] = _DAT_0143845e;
            puVar7[3] = uVar5;
            uVar5 = _UNK_01438456;
            *puVar7 = _DAT_0143844e;
            puVar7[1] = uVar5;
            *(undefined8 *)((long)puVar7 + 0x2f) = 0x2e72656765746e69;
            *(undefined1 *)((long)puVar7 + 0x37) = 0;
            puStack_5b8 = _DAT_0f1f78b8;
            uStack_5b0 = _UNK_0f1f78c0;
            uStack_5c8 = (uint *)_DAT_0f1f78a8;
            uStack_5c0 = _UNK_0f1f78b0;
            puStack_5a8 = (uint *)0x39;
            puStack_5a0 = (uint *)0x37;
            bStack_588 = 0;
            uStack_590 = uStack_590 & 0xff000000;
            cStack_580 = '\x01';
            uStack_578 = (uint *)0x0;
            uStack_570 = 0;
            puStack_568 = (uint *)0x0;
            puStack_598 = puVar7;
            func_0x0eee17a0(&uStack_578,&uStack_5c8,&uStack_578,1);
            if ((cStack_580 == '\x01') && (((ulong)puStack_5a8 & 1) != 0)) {
              func_0x0412a280(puStack_598,(ulong)puStack_5a8 & 0xfffffffffffffffe);
            }
            uStack_3a8 = (uint *)CONCAT44(uStack_3a8._4_4_,0x16);
            uStack_5c8 = (uint *)CONCAT44(uStack_3a8._4_4_,0x16);
            uStack_378 = 0;
            uStack_370 = 0;
            uStack_388 = 0;
            uStack_380 = 0;
            puStack_398 = (uint *)0x0;
            uStack_390 = 0;
            cStack_4e8 = '\0';
            uStack_528 = (uint *)CONCAT44(uStack_3a8._4_4_,0x16);
            puStack_518 = uStack_578;
            uStack_510 = uStack_570;
            puStack_508 = puStack_568;
            puStack_5b8 = (uint *)0x0;
            uStack_5b0 = 0;
            puStack_5a8 = (uint *)0x0;
            puStack_500 = (uint *)0x0;
            uStack_4f8 = (undefined8 *)0x0;
            uStack_4f0 = 0;
            puStack_5a0 = (uint *)0x0;
            puStack_598 = (undefined8 *)0x0;
            uStack_590 = 0;
            uStack_5c0 = uVar9;
            uStack_520 = uVar9;
            uStack_3a0 = uVar9;
            func_0x048e6d60(&uStack_5c8);
            func_0x048e6d60(&uStack_3a8);
            func_0x04862b40(auStack_400);
            func_0x04862b40(aplStack_4d0);
            uVar4 = 0;
            goto LAB_09f4a0a8;
          }
          uVar4 = func_0x04863e30(uVar5,0);
          uVar9 = (ulong)uVar4;
          if (puVar10 < puStack_4d8) {
            *puVar10 = uVar4;
            puVar10 = puVar10 + 1;
          }
          else {
            puStack_4a8 = (uint *)((long)puVar10 - (long)puVar15);
            lVar13 = (long)puStack_4a8 >> 2;
            uVar8 = lVar13 + 1;
            puStack_4b0 = puVar15;
            if (0x3fffffffffffffff < uVar8) goto LAB_09f4aedc;
            uVar11 = (long)puStack_4d8 - (long)puVar15;
            uVar14 = (long)uVar11 >> 1;
            if ((ulong)((long)uVar11 >> 1) <= uVar8) {
              uVar14 = uVar8;
            }
            if (0x7ffffffffffffffb < uVar11) {
              uVar14 = 0x3fffffffffffffff;
            }
            if (0x3fffffffffffffff < uVar14) goto LAB_09f4aee1;
            lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 4);
            if (lVar6 == 0) {
              func_0x0eec74c0(uVar14 * 4,0);
            }
            puVar2 = puStack_4b0;
            puStack_4d8 = (uint *)(lVar6 + uVar14 * 4);
            *(uint *)(lVar6 + (long)puStack_4a8) = uVar4;
            puVar10 = (uint *)((long)puStack_4a8 + lVar6 + 4);
            puVar15 = (uint *)((long)puStack_4a8 + lVar13 * -4 + lVar6);
            func_0x0eee2f00(puVar15,puStack_4b0);
            if (puVar2 != (uint *)0x0) {
              func_0x0412a280(puVar2,uVar11);
            }
          }
          func_0x04862ba0(aplStack_4d0);
          puStack_4a8 = puVar10;
        }
        func_0x04862b40(auStack_400);
        func_0x04862b40(aplStack_4d0);
        if (puVar15 == puStack_4a8) {
          uVar5 = func_0x0412dc70();
          func_0x09f4b950(&uStack_228,0x16,uVar5);
          uStack_4f0 = uStack_1f0;
          uStack_4f8 = (undefined8 *)uStack_1f8;
          puStack_500 = puStack_200;
          puStack_508 = puStack_208;
          uStack_510 = uStack_210;
          puStack_518 = puStack_218;
          uStack_5c8 = (uint *)CONCAT44(uStack_224,uStack_228);
          uStack_5c0 = CONCAT44(uStack_21c,uStack_220);
          puStack_218 = (uint *)0x0;
          uStack_210 = 0;
          puStack_208 = (uint *)0x0;
          puStack_200 = (uint *)0x0;
          uStack_1f8 = 0;
          uStack_1f0 = 0;
          cStack_4e8 = '\0';
          uStack_528 = (uint *)CONCAT44(uStack_224,uStack_228);
          uStack_520 = CONCAT44(uStack_21c,uStack_220);
          puStack_5b8 = (uint *)0x0;
          uStack_5b0 = 0;
          puStack_5a8 = (uint *)0x0;
          puStack_5a0 = (uint *)0x0;
          puStack_598 = (undefined8 *)0x0;
          uStack_590 = 0;
          func_0x048e6d60(&uStack_5c8);
          func_0x048e6d60(&uStack_228);
          uVar4 = 0;
        }
        else {
          uVar5 = func_0x04864680(puStack_4b8,&UNK_0149340d);
          func_0x09f4baa0(&uStack_578,uVar5);
          bStack_588 = bStack_538;
          if (bStack_538 == 1) {
            uStack_5c8 = uStack_578;
          }
          else {
            uStack_5c8 = uStack_578;
            uStack_5c0 = uStack_570;
            puStack_5b8 = puStack_568;
            uStack_5b0 = uStack_560;
            puStack_5a8 = puStack_558;
            puStack_568 = (uint *)0x0;
            uStack_560 = 0;
            puStack_558 = (uint *)0x0;
            puStack_5a0 = puStack_550;
            puStack_598 = (undefined8 *)uStack_548;
            uStack_590 = uStack_540;
            puStack_550 = (uint *)0x0;
            uStack_548 = 0;
            uStack_540 = 0;
            func_0x048e6d60(&uStack_578);
          }
          uVar4 = (uint)bStack_588;
          if ((bStack_588 & 1) == 0) {
            func_0x09f4c510(&uStack_5c8);
            uStack_4f0 = uStack_590;
            uStack_4f8 = puStack_598;
            puStack_500 = puStack_5a0;
            puStack_508 = puStack_5a8;
            uStack_510 = uStack_5b0;
            puStack_518 = puStack_5b8;
            puStack_78 = uStack_5c8;
            uStack_70 = uStack_5c0;
            puStack_5b8 = (uint *)0x0;
            uStack_5b0 = 0;
            puStack_5a8 = (uint *)0x0;
            puStack_5a0 = (uint *)0x0;
            puStack_598 = (undefined8 *)0x0;
            uStack_590 = 0;
            uStack_578 = uStack_5c8;
            uStack_570 = uStack_5c0;
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            cStack_4e8 = '\0';
            uStack_528 = uStack_5c8;
            uStack_520 = uStack_5c0;
            puStack_568 = (uint *)0x0;
            uStack_560 = 0;
            puStack_558 = (uint *)0x0;
            puStack_550 = (uint *)0x0;
            uStack_548 = 0;
            uStack_540 = 0;
            func_0x048e6d60(&uStack_578);
            func_0x048e6d60(&puStack_78);
            puVar10 = uStack_5c8;
          }
          else {
            puStack_440 = uStack_5c8;
            uStack_5c8 = (uint *)0x0;
            uStack_4c0 = (uint)bStack_588;
            puStack_4b0 = puVar15;
            do {
              uVar4 = *puVar15;
              puStack_4b8 = puVar15;
              (**(code **)(*(long *)puStack_440 + 0x10))(aplStack_4d0);
              uStack_578 = auStack_400;
              auStack_400[0] = uVar4;
              lVar13 = func_0x08b3e640(&puStack_438,uStack_578,&UNK_01563a4f,&uStack_578,&uStack_4b9
                                      );
              plVar1 = aplStack_4d0[0];
              puVar7 = *(undefined8 **)(lVar13 + 0x20);
              if (*(undefined8 **)(lVar13 + 0x28) <= puVar7) {
                lVar6 = *(long *)(lVar13 + 0x18);
                uVar9 = (long)puVar7 - lVar6;
                uVar8 = ((long)uVar9 >> 3) + 1;
                if (uVar8 < 0x2000000000000000) {
                  uStack_3c0 = (long)*(undefined8 **)(lVar13 + 0x28) - lVar6;
                  uVar14 = (long)uStack_3c0 >> 2;
                  if ((ulong)((long)uStack_3c0 >> 2) <= uVar8) {
                    uVar14 = uVar8;
                  }
                  if (0x7ffffffffffffff7 < uStack_3c0) {
                    uVar14 = 0x1fffffffffffffff;
                  }
                  lStack_3b0 = lVar6;
                  if (uVar14 < 0x2000000000000000) {
                    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14 * 8);
                    if (lVar6 == 0) {
                      func_0x0eec74c0(uVar14 * 8,0);
                    }
                    lVar12 = lStack_3b0;
                    plVar1 = aplStack_4d0[0];
                    lStack_3b8 = uVar14 * 8 + lVar6;
                    aplStack_4d0[0] = (long *)0x0;
                    *(long **)(lVar6 + uVar9) = plVar1;
                    puVar7 = (undefined8 *)(uVar9 + lVar6 + 8);
                    lVar6 = uVar9 + lVar6 + ((long)uVar9 >> 3) * -8;
                    func_0x0eee2f00(lVar6,lStack_3b0,uVar9);
                    *(long *)(lVar13 + 0x18) = lVar6;
                    *(undefined8 **)(lVar13 + 0x20) = puVar7;
                    *(long *)(lVar13 + 0x28) = lStack_3b8;
                    if (lVar12 != 0) {
                      func_0x0412a280(lVar12,uStack_3c0);
                    }
                    goto LAB_09f49c76;
                  }
                }
                else {
                  func_0x08b31410();
                }
                func_0x04882eb0();
LAB_09f4aedc:
                func_0x09f80520();
LAB_09f4aee1:
                func_0x04882eb0();
                goto LAB_09f4aee6;
              }
              aplStack_4d0[0] = (long *)0x0;
              *puVar7 = plVar1;
              puVar7 = puVar7 + 1;
LAB_09f49c76:
              uVar4 = uStack_4c0;
              plVar1 = aplStack_4d0[0];
              *(undefined8 **)(lVar13 + 0x20) = puVar7;
              aplStack_4d0[0] = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              puVar10 = puStack_4b0;
              puVar15 = puStack_4b8 + 1;
            } while (puVar15 != puStack_4a8);
            (**(code **)(*(long *)puStack_440 + 8))();
            puVar15 = puVar10;
            puVar10 = uStack_5c8;
          }
          if (bStack_588 == 1) {
            uStack_5c8 = (uint *)0x0;
            if (puVar10 != (uint *)0x0) {
              (**(code **)(*(long *)puVar10 + 8))();
            }
          }
          else {
            uStack_5c8 = puVar10;
            func_0x048e6d60(&uStack_5c8);
          }
        }
LAB_09f4a0a8:
        if (puVar15 != (uint *)0x0) {
          func_0x0412a280(puVar15,(long)puStack_4d8 - (long)puVar15);
        }
        func_0x04863610(&puStack_368);
        if ((uVar4 & 1) == 0) goto LAB_09f4a6e8;
        func_0x04862ba0(auStack_3e0);
      }
      func_0x04862b40(auStack_3d0);
      func_0x04862b40(auStack_3e0);
      cVar3 = func_0x04865100(auStack_498,&UNK_01451959);
      if (cVar3 == '\0') {
LAB_09f4afcc:
        puStack_500 = puStack_410;
        uStack_510 = uStack_420;
        puStack_518 = puStack_428;
        uStack_520 = uStack_430;
        uStack_528 = puStack_438;
        cStack_4e8 = '\x01';
        puStack_438 = (uint *)0x0;
        uStack_430 = 0;
        puStack_508 = (uint *)CONCAT44(puStack_508._4_4_,uStack_418);
        if (uStack_420 != 0) {
          uVar9 = *(ulong *)(puStack_428 + 2);
          if ((uStack_520 & uStack_520 - 1) == 0) {
            uVar9 = uVar9 & uStack_520 - 1;
          }
          else if (uStack_520 <= uVar9) {
            if ((uVar9 | uStack_520) >> 0x20 == 0) {
              uVar9 = (uVar9 & 0xffffffff) % (uStack_520 & 0xffffffff);
            }
            else {
              uVar9 = uVar9 % uStack_520;
            }
          }
          *(uint ***)(uStack_528 + uVar9 * 2) = &puStack_518;
          puStack_428 = (uint *)0x0;
          uStack_420 = 0;
        }
        puStack_410 = (uint *)0x0;
        puVar15 = puStack_438;
        puVar10 = puStack_428;
      }
      else {
        uVar5 = func_0x04864680(auStack_498,&UNK_01451959);
        func_0x09f4baa0(&uStack_578,uVar5);
        bStack_588 = bStack_538;
        if (bStack_538 == 1) {
          uStack_5c8 = uStack_578;
        }
        else {
          uStack_5c8 = uStack_578;
          uStack_5c0 = uStack_570;
          puStack_5b8 = puStack_568;
          uStack_5b0 = uStack_560;
          puStack_5a8 = puStack_558;
          puStack_568 = (uint *)0x0;
          uStack_560 = 0;
          puStack_558 = (uint *)0x0;
          puStack_5a0 = puStack_550;
          puStack_598 = (undefined8 *)uStack_548;
          uStack_590 = uStack_540;
          puStack_550 = (uint *)0x0;
          uStack_548 = 0;
          uStack_540 = 0;
          func_0x048e6d60(&uStack_578);
        }
        puVar10 = puStack_410;
        puVar15 = uStack_5c8;
        uVar9 = (ulong)bStack_588;
        if ((bStack_588 & 1) == 0) {
LAB_09f4aee6:
          func_0x09f4c600(&uStack_5c8);
          uStack_4f0 = uStack_590;
          uStack_4f8 = puStack_598;
          puStack_500 = puStack_5a0;
          puStack_508 = puStack_5a8;
          uStack_510 = uStack_5b0;
          puStack_518 = puStack_5b8;
          puStack_368 = uStack_5c8;
          uStack_360 = uStack_5c0;
          puStack_5b8 = (uint *)0x0;
          uStack_5b0 = 0;
          puStack_5a8 = (uint *)0x0;
          puStack_5a0 = (uint *)0x0;
          puStack_598 = (undefined8 *)0x0;
          uStack_590 = 0;
          uStack_578 = uStack_5c8;
          uStack_570 = uStack_5c0;
          puStack_358 = (uint *)0x0;
          uStack_350 = 0;
          uStack_348 = 0;
          uStack_340 = 0;
          uStack_338 = 0;
          uStack_330 = 0;
          cStack_4e8 = '\0';
          uStack_528 = uStack_5c8;
          uStack_520 = uStack_5c0;
          puStack_568 = (uint *)0x0;
          uStack_560 = 0;
          puStack_558 = (uint *)0x0;
          puStack_550 = (uint *)0x0;
          uStack_548 = 0;
          uStack_540 = 0;
          func_0x048e6d60(&uStack_578);
          func_0x048e6d60(&puStack_368);
          if (bStack_588 == 1) goto LAB_09f4a946;
LAB_09f4afbb:
          func_0x048e6d60(&uStack_5c8);
        }
        else {
          uStack_5c8 = (uint *)0x0;
          puStack_410 = puVar15;
          if (puVar10 != (uint *)0x0) {
            (**(code **)(*(long *)puVar10 + 8))();
          }
          if (bStack_588 != 1) goto LAB_09f4afbb;
LAB_09f4a946:
          puVar15 = uStack_5c8;
          uStack_5c8 = (uint *)0x0;
          if (puVar15 != (uint *)0x0) {
            (**(code **)(*(long *)puVar15 + 8))();
          }
        }
        if ((uVar9 & 1) != 0) goto LAB_09f4afcc;
LAB_09f4a702:
        puVar15 = puStack_410;
        puStack_410 = (uint *)0x0;
        if (puVar15 != (uint *)0x0) {
          (**(code **)(*(long *)puVar15 + 8))();
        }
        puVar15 = puStack_438;
        puVar10 = puStack_428;
      }
      while (puVar10 != (uint *)0x0) {
        puVar2 = *(uint **)puVar10;
        lVar13 = *(long *)(puVar10 + 6);
        puStack_438 = puVar15;
        if (lVar13 != 0) {
          lVar6 = *(long *)(puVar10 + 8);
          lVar12 = lVar13;
          if (lVar13 != lVar6) {
            do {
              plVar1 = *(long **)(lVar6 + -8);
              *(undefined8 *)(lVar6 + -8) = 0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              lVar6 = lVar6 + -8;
            } while (lVar6 != lVar13);
            lVar12 = *(long *)(puVar10 + 6);
          }
          *(long *)(puVar10 + 8) = lVar13;
          func_0x0412a280(lVar12,*(long *)(puVar10 + 10) - lVar12);
        }
        func_0x0412a280(puVar10,0x30);
        puVar15 = puStack_438;
        puVar10 = puVar2;
      }
      puStack_438 = (uint *)0x0;
      if (puVar15 != (uint *)0x0) {
        func_0x0412a280(puVar15,uStack_430 << 3);
      }
    }
    func_0x04863610(auStack_3f0);
    if (cStack_4e8 == '\x01') goto LAB_09f4a4ac;
LAB_09f4a780:
    puStack_488 = uStack_528;
    uStack_480 = uStack_520;
    puStack_478 = puStack_518;
    uStack_470 = uStack_510;
    uStack_468 = puStack_508;
    puStack_518 = (uint *)0x0;
    uStack_510 = 0;
    puStack_508 = (uint *)0x0;
    uStack_460 = puStack_500;
    uStack_458 = uStack_4f8;
    uStack_450 = uStack_4f0;
    puStack_500 = (uint *)0x0;
    uStack_4f8 = (undefined8 *)0x0;
    uStack_4f0 = 0;
    cStack_448 = cStack_4e8;
    func_0x048e6d60(&uStack_528);
  }
  puVar2 = uStack_460;
  uVar8 = uStack_470;
  puVar10 = puStack_478;
  uVar9 = uStack_480;
  puVar15 = puStack_488;
  if (cStack_448 == '\0') {
    func_0x09f4b350(&puStack_488);
    puStack_1e8 = puStack_488;
    uStack_1e0 = uStack_480;
    puStack_1d8 = puStack_478;
    uStack_1d0 = uStack_470;
    puStack_1c8 = uStack_468;
    puStack_478 = (uint *)0x0;
    uStack_470 = 0;
    uStack_468 = (uint *)0x0;
    uStack_1c0 = (undefined4)uStack_460;
    uStack_1bc = uStack_460._4_4_;
    uStack_1b8 = (undefined4)uStack_458;
    uStack_1b4 = uStack_458._4_4_;
    uStack_1b0 = uStack_450;
    uStack_460 = (uint *)0x0;
    uStack_458 = 0;
    uStack_450 = 0;
    func_0x09f4b410(puStack_4a0,&puStack_1e8);
    func_0x048e6d60(&puStack_1e8);
joined_r0x09f4adbf:
    if (cStack_448 == '\x01') goto LAB_09f4aba7;
LAB_09f4ab78:
    func_0x048e6d60(&puStack_488);
  }
  else {
    puStack_488 = (uint *)0x0;
    uStack_480 = 0;
    puStack_5b8 = puStack_478;
    uStack_5b0 = uStack_470;
    puStack_5a8 = (uint *)CONCAT44(puStack_5a8._4_4_,(undefined4)uStack_468);
    if (uStack_470 != 0) {
      uVar14 = *(ulong *)(puStack_478 + 2);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar14 = uVar14 & uVar9 - 1;
      }
      else if (uVar9 <= uVar14) {
        if ((uVar14 | uVar9) >> 0x20 == 0) {
          uVar14 = (uVar14 & 0xffffffff) % (uVar9 & 0xffffffff);
        }
        else {
          uVar14 = uVar14 % uVar9;
        }
      }
      *(uint ***)(puVar15 + uVar14 * 2) = &puStack_5b8;
      puStack_478 = (uint *)0x0;
      uStack_470 = 0;
    }
    uStack_460 = (uint *)0x0;
    *(undefined1 *)(puStack_4a0 + 8) = 1;
    uStack_5c8 = (uint *)0x0;
    *puStack_4a0 = puVar15;
    puStack_4a0[1] = uVar9;
    uStack_5c0 = 0;
    puStack_4a0[2] = puVar10;
    puStack_4a0[3] = uVar8;
    *(undefined4 *)(puStack_4a0 + 4) = (undefined4)uStack_468;
    if (uVar8 == 0) {
      puStack_4a0[5] = puVar2;
      puStack_5a0 = (uint *)0x0;
      if (puVar10 != (uint *)0x0) {
        do {
          puVar15 = *(uint **)puVar10;
          lVar13 = *(long *)(puVar10 + 6);
          if (lVar13 != 0) {
            lVar6 = *(long *)(puVar10 + 8);
            lVar12 = lVar13;
            if (lVar13 != lVar6) {
              do {
                plVar1 = *(long **)(lVar6 + -8);
                *(undefined8 *)(lVar6 + -8) = 0;
                if (plVar1 != (long *)0x0) {
                  (**(code **)(*plVar1 + 8))();
                }
                lVar6 = lVar6 + -8;
              } while (lVar6 != lVar13);
              lVar12 = *(long *)(puVar10 + 6);
            }
            *(long *)(puVar10 + 8) = lVar13;
            func_0x0412a280(lVar12,*(long *)(puVar10 + 10) - lVar12);
          }
          func_0x0412a280(puVar10,0x30);
          lVar13 = (long)uStack_5c8;
          puVar10 = puVar15;
        } while (puVar15 != (uint *)0x0);
        uStack_5c8 = (uint *)0x0;
        if (lVar13 != 0) {
          func_0x0412a280(lVar13,uStack_5c0 << 3);
          goto joined_r0x09f4adbf;
        }
      }
    }
    else {
      uVar8 = *(ulong *)(puVar10 + 2);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        if ((uVar8 | uVar9) >> 0x20 == 0) {
          uVar8 = (uVar8 & 0xffffffff) % (uVar9 & 0xffffffff);
        }
        else {
          uVar8 = uVar8 % uVar9;
        }
      }
      *(undefined8 **)(puVar15 + uVar8 * 2) = puStack_4a0 + 2;
      puStack_4a0[5] = puVar2;
    }
    uStack_5c8 = (uint *)0x0;
    if (cStack_448 != '\x01') goto LAB_09f4ab78;
LAB_09f4aba7:
    func_0x048f5fa0(&puStack_488);
  }
  func_0x0485e2d0(&uStack_2e8);
  func_0x04863610(auStack_498);
  puVar7 = puStack_4a0;
LAB_09f4abd6:
  apuStack_1a8[0] = &UNK_0ef446c8;
  apuStack_110[0] = &UNK_0ef44718;
  puStack_198 = &UNK_0ef446f0;
  func_0x0ee5c730(auStack_190);
  func_0x0413c8a0(apuStack_1a8,&UNK_0ef44658);
  func_0x04138180(apuStack_110);
  return puVar7;
}



/* ---- referenced strings ----
 * 0x12485a1  Expected limitGroup to be an object with 'minecraftPacketIds' and 'algorithm' keys.
 * 0x12485b1  oup to be an object with 'minecraftPacketIds' and 'algorithm' keys.
 * 0x12485c1  ect with 'minecraftPacketIds' and 'algorithm' keys.
 * 0x12485d1  aftPacketIds' and 'algorithm' keys.
 * 0x12485e1  d 'algorithm' keys.
 * 0x13cf704  Expected an object with 'limitGroups' key.
 * 0x13cf714  ct with 'limitGroups' key.
 * 0x13cf71e  imitGroups' key.
 * 0x143844e  Expected 'minecraftPacketId' to be an unsigned integer.
 * 0x143845e  aftPacketId' to be an unsigned integer.
 * 0x143846e  be an unsigned integer.
 * 0x14d3e38  Failed to open packet limit config file.
 * 0x14d3e48  acket limit config file.
 */
