/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x642b590 (ELF vaddr 0x632b590)
 * Label: caller-of-callee
 * Body:  [[0642b590, 0642b923] [0642b930, 0642bb6b] [0642bbd9, 0642bbfb] [0642bc26, 0642bc7c]]
 * Ghidra: FUN_0642b590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0642b590(long *param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *unaff_R14;
  char *unaff_R15;
  bool bVar12;
  long *plStack_3a8;
  char acStack_3a0 [8];
  uint uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  byte bStack_380;
  undefined *puStack_378;
  char cStack_370;
  uint uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  char cStack_350;
  undefined8 **ppuStack_348;
  ulong uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 **ppuStack_2e8;
  byte bStack_168;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  code *pcStack_138;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  code *pcStack_f0;
  undefined1 auStack_c8 [8];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint uStack_38;
  
  plVar7 = (long *)func_0x064a9f80(param_1[3]);
  if (plVar7 == (long *)0x0) {
    cVar5 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,&UNK_0135e48c);
    if (cVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x04109e60();
LAB_0642bb06:
    iVar6 = func_0x04108328(&DAT_0f574fc0);
    if (iVar6 != 0) {
      _DAT_0f574f90 = &UNK_0f036398;
      _DAT_0f574fb0 = (long *)&DAT_0f574f90;
      func_0x0eee2f40(&UNK_062619b0,&DAT_0f574f90,0xf53dab8);
      func_0x0410844d(&DAT_0f574fc0);
    }
  }
  else {
    unaff_R15 = acStack_3a0;
    (**(code **)(*plVar7 + 0x40))(unaff_R15,plVar7,param_2 + 8,(char)param_1[0xc]);
    puStack_378 = &UNK_0f00fe80;
    cStack_370 = acStack_3a0[0];
    uStack_368 = uStack_368 & 0xffffff00;
    cStack_350 = '\0';
    if (bStack_380 == 1) {
      if ((uStack_398 & 1) == 0) {
        uStack_358 = uStack_388;
        uStack_368 = uStack_398;
        uStack_364 = uStack_394;
        uStack_360 = uStack_390;
        uStack_35c = uStack_38c;
      }
      else {
        func_0x0412e5e0(&uStack_368,uStack_388,CONCAT44(uStack_38c,uStack_390));
      }
      cStack_350 = '\x01';
    }
    unaff_R14 = (long *)func_0x05f9fd40(param_1[3]);
    if (DAT_0f574fc0 == '\0') goto LAB_0642bb06;
  }
  uVar8 = _DAT_0f5435d0;
  if (_DAT_0f574fb0 == (long *)0x0) {
    ppuStack_2e8 = (undefined8 **)0x0;
  }
  else if (_DAT_0f574fb0 == (long *)&DAT_0f574f90) {
    ppuStack_2e8 = &puStack_308;
    (**(code **)(_DAT_0f574f90 + 0x18))(&DAT_0f574f90);
  }
  else {
    ppuStack_2e8 = (undefined8 **)(**(code **)(*_DAT_0f574fb0 + 0x10))();
  }
  uVar8 = (**(code **)(*unaff_R14 + 0x48))(unaff_R14,uVar8,&puStack_308);
  if (ppuStack_2e8 == &puStack_308) {
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (ppuStack_2e8 == (undefined8 **)0x0) goto LAB_0642b6de;
  }
  (**(code **)((long)*ppuStack_2e8 + lVar9))();
LAB_0642b6de:
  (**(code **)(*unaff_R14 + 0x50))(auStack_110,unaff_R14,&puStack_378,uVar8);
  if (pcStack_f0 != (code *)0x0) {
    (*pcStack_f0)(auStack_108);
  }
  if (acStack_3a0[0] == '\x01') {
    func_0x06430f80(param_1);
    puVar1 = (ulong *)(param_2 + 0x10);
    (**(code **)(*param_1 + 0x58))(&puStack_308,param_1,puVar1);
    if (bStack_168 == 1) {
      ppuStack_348 = (undefined8 **)&UNK_0f00f208;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      (*(code *)puStack_308[6])(&plStack_3a8,&puStack_308);
      if (&uStack_340 != puVar1) {
        bVar2 = *(byte *)puVar1;
        if ((uStack_340 & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            uStack_330 = (undefined4)*(undefined8 *)(param_2 + 0x20);
            uStack_32c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
            uStack_340 = *puVar1;
            uStack_338 = *(undefined4 *)(param_2 + 0x18);
            uStack_334 = *(undefined4 *)(param_2 + 0x1c);
          }
          else {
            FUN_04885070(&uStack_340,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18)
                        );
          }
        }
        else {
          bVar12 = (bVar2 & 1) != 0;
          lVar9 = param_2 + 0x11;
          if (bVar12) {
            lVar9 = *(long *)(param_2 + 0x20);
          }
          uVar11 = (ulong)(bVar2 >> 1);
          if (bVar12) {
            uVar11 = *(ulong *)(param_2 + 0x18);
          }
          func_0x04885120(&uStack_340,lVar9,uVar11);
        }
      }
      func_0x05d64030(&ppuStack_348,plStack_3a8);
      uVar8 = func_0x064ae310(unaff_R14);
      (**(code **)(*unaff_R14 + 0x50))(auStack_158,unaff_R14,&ppuStack_348,uVar8);
      if (pcStack_138 != (code *)0x0) {
        (*pcStack_138)(auStack_150);
      }
      plVar7 = plStack_3a8;
      plStack_3a8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      ppuStack_348 = (undefined8 **)&UNK_0f00f208;
      if ((uStack_320 & 1) != 0) {
        func_0x0412a280(uStack_310,uStack_320 & 0xfffffffffffffffe);
      }
      if ((uStack_340 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_32c,uStack_330),uStack_340 & 0xfffffffffffffffe);
      }
    }
    if ((bStack_168 & 1) != 0) {
      func_0x05d645d0(&puStack_308);
    }
  }
  else {
    lVar9 = param_1[3];
    puStack_308 = (undefined8 *)0x0;
    puStack_300 = (undefined8 *)0x0;
    puStack_2f8 = (undefined8 *)0x0;
    uStack_340 = uStack_340 & 0xffffffffffffff00;
    ppuStack_348 = &puStack_308;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    puStack_308 = puVar10;
    puStack_2f8 = puVar10 + 5;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0x7574637572745314;
    puVar10[2] = 0x736572;
    *puVar10 = 0x158cbbf7ce6f4e7;
    puStack_300 = puVar10 + 5;
    if ((bStack_380 & 1) == 0) {
      uVar8 = func_0x048a88b0();
      uVar8 = func_0x04882e20(uVar8);
      func_0x05ecd520(&ppuStack_348);
      if (bStack_168 == 1) {
        func_0x05d645d0(&puStack_308);
      }
      puStack_378 = &UNK_0f00fe80;
      if ((cStack_350 == '\x01') && ((uStack_368 & 1) != 0)) {
        func_0x0412a280(uStack_358,CONCAT44(uStack_364,uStack_368) & 0xfffffffffffffffe);
      }
      if ((bStack_380 == 1) && ((uStack_398 & 1) != 0)) {
        func_0x0412a280(uStack_388,CONCAT44(uStack_394,uStack_398) & 0xfffffffffffffffe);
      }
      func_0x0eee2d70(uVar8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uStack_398 & 1) == 0) {
      uStack_b0 = *(undefined8 *)(unaff_R15 + 0x18);
      uStack_c0 = *(undefined4 *)(unaff_R15 + 8);
      uStack_bc = *(undefined4 *)(unaff_R15 + 0xc);
      uStack_b8 = *(undefined4 *)(unaff_R15 + 0x10);
      uStack_b4 = *(undefined4 *)(unaff_R15 + 0x14);
    }
    else {
      func_0x0412e5e0(&uStack_c0,uStack_388,CONCAT44(uStack_38c,uStack_390));
    }
    uStack_38 = 0;
    func_0x060aeeb0(lVar9,0,1,&puStack_308,auStack_c8,1);
    if ((ulong)uStack_38 != 0xffffffff) {
      (**(code **)(&UNK_0f031718 + (ulong)uStack_38 * 8))(&ppuStack_348,&uStack_c0);
    }
    puVar4 = puStack_308;
    uStack_38 = 0xffffffff;
    puVar10 = puStack_300;
    if (puStack_308 != (undefined8 *)0x0) {
      for (; puVar4 != puVar10; puVar10 = puVar10 + -5) {
        if ((*(byte *)(puVar10 + -4) & 1) != 0) {
          func_0x0412a280(puVar10[-2],puVar10[-4] & 0xfffffffffffffffe);
        }
      }
      puStack_300 = puVar4;
      func_0x0412a280(puStack_308,(long)puStack_2f8 - (long)puStack_308);
    }
  }
  puStack_378 = &UNK_0f00fe80;
  if ((cStack_350 == '\x01') && ((uStack_368 & 1) != 0)) {
    func_0x0412a280(uStack_358,CONCAT44(uStack_364,uStack_368) & 0xfffffffffffffffe);
  }
  if ((bStack_380 == 1) && ((uStack_398 & 1) != 0)) {
    func_0x0412a280(uStack_388,CONCAT44(uStack_394,uStack_398) & 0xfffffffffffffffe);
  }
  return;
}


