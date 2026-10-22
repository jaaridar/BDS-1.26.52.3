/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6ccf8f0 (ELF vaddr 0x6bcf8f0)
 * Label: caller-of-callee
 * Body:  [[06ccf8f0, 06ccf96c] [06cd049f, 06cd0622] [06cd0867, 06cd0888] [06cd0925, 06cd0932] [06cd303e, 06cd30ec] [06cd3274, 06cd334d] [06cd3457, 06cd3467] [06cd34df, 06cd3529]]
 * Ghidra: FUN_06ccf8f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06ccf8f0(undefined8 *param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
                 long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *plVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined ***pppuVar19;
  long *plVar20;
  undefined1 auStack_348 [4];
  uint uStack_344;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined **appuStack_318 [2];
  undefined ***pppuStack_308;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined ***pppuStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined ***pppuStack_298;
  undefined1 uStack_290;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [8];
  undefined8 *puStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  long *plStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  uint uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined ***pppuStack_1f8;
  undefined1 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  char cStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  long *plStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **appuStack_168 [2];
  undefined8 uStack_158;
  long *plStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined1 auStack_48 [24];
  
  uVar5 = _DAT_0f77847c;
  puStack_1d8 = (undefined *)((ulong)puStack_1d8 & 0xffffffffffffff00);
  cStack_1c0 = param_5 != 0;
  if ((bool)cStack_1c0) {
    lStack_1d0 = 0;
    puStack_1d8 = &UNK_0f087f10;
    lStack_1c8 = param_5;
  }
  switch(*(undefined1 *)(param_3 + 4)) {
  case 1:
    _auStack_348 = (undefined **)((ulong)uStack_344 << 0x20);
    ppuStack_340 = (undefined **)0x0;
    ppuStack_338 = (undefined **)0x0;
    ppuStack_330 = (undefined **)0x0;
    ppuStack_328 = (undefined **)0x0;
    cVar6 = func_0x06cd4810(param_4,auStack_348);
    ppuVar11 = param_3 + 1;
    if (cVar6 == '\0') {
      func_0x06cd7430(&ppuStack_2f8,ppuVar11,uRam000000000f77845c);
      (**(code **)(*param_2 + 0x70))(param_2,ppuVar11,&ppuStack_2f8);
code_r0x06cd08d3:
      func_0x04863610(&uStack_2e0);
      if (((ulong)ppuStack_2f8 & 1) != 0) {
        func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
      }
    }
    else {
      (**(code **)(*param_2 + 8))(param_2,ppuVar11,auStack_348);
    }
    goto code_r0x06cd08f7;
  case 2:
    func_0x048631d0(auStack_348,&UNK_01e79d90);
    func_0x04864d90(&ppuStack_2b8,param_4,&UNK_013c806a,auStack_348);
    func_0x04863610(auStack_348);
    cVar6 = func_0x04865490(&ppuStack_2b8);
    if (cVar6 == '\0') goto code_r0x06cd0cc8;
    ppuStack_2f8 = (undefined **)((ulong)ppuStack_2f8 & 0xffffffffffff0000);
    FUN_04863cb0(auStack_348,&ppuStack_2b8,&ppuStack_2f8);
    if (((ulong)ppuStack_2f8 & 1) != 0) {
      func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
    }
    ppuVar11 = ppuStack_340;
    if (((ulong)_auStack_348 & 1) == 0) {
      ppuVar11 = (undefined **)(ulong)(auStack_348[0] >> 1);
    }
    if (ppuVar11 != (undefined **)0x0) {
      (**(code **)(*param_2 + 0x60))(param_2,param_3 + 1,auStack_348);
      goto code_r0x06cd0cae;
    }
code_r0x06cd0cd5:
    if ((auStack_348[0] & 1) == 0) goto code_r0x06cd0cc8;
    goto code_r0x06cd0cb5;
  case 3:
    func_0x048631d0(auStack_348,&UNK_01e79d90);
    func_0x04864d90(&ppuStack_2b8,param_4,&UNK_013c806a,auStack_348);
    func_0x04863610(auStack_348);
    cVar6 = func_0x04865490(&ppuStack_2b8);
    if (cVar6 == '\0') goto code_r0x06cd0cc8;
    ppuStack_2f8 = (undefined **)((ulong)ppuStack_2f8 & 0xffffffffffff0000);
    FUN_04863cb0(auStack_348,&ppuStack_2b8,&ppuStack_2f8);
    if (((ulong)ppuStack_2f8 & 1) != 0) {
      func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
    }
    ppuVar11 = ppuStack_340;
    if (((ulong)_auStack_348 & 1) == 0) {
      ppuVar11 = (undefined **)(ulong)(auStack_348[0] >> 1);
    }
    if (ppuVar11 == (undefined **)0x0) goto code_r0x06cd0cd5;
    (**(code **)(*param_2 + 0x68))(param_2,param_3 + 1,auStack_348);
code_r0x06cd0cae:
    param_3 = param_3 + 1;
    if (((ulong)_auStack_348 & 1) == 0) goto code_r0x06cd0cc8;
code_r0x06cd0cb5:
    func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
code_r0x06cd0cc8:
    pppuVar19 = &ppuStack_2b8;
    goto code_r0x06cd3053;
  case 4:
    _auStack_348 = (undefined **)((ulong)uStack_344 << 0x20);
    ppuStack_340 = (undefined **)0x0;
    ppuStack_338 = (undefined **)0x0;
    ppuStack_330 = (undefined **)0x0;
    ppuStack_328 = (undefined **)0x0;
    cVar6 = func_0x06cd4810(param_4,auStack_348);
    ppuVar11 = param_3 + 1;
    if (cVar6 == '\0') {
      func_0x06cd7430(&ppuStack_2f8,ppuVar11,uRam000000000f77845c);
      (**(code **)(*param_2 + 0x70))(param_2,ppuVar11,&ppuStack_2f8);
      goto code_r0x06cd08d3;
    }
    (**(code **)*param_2)(param_2,ppuVar11,auStack_348);
code_r0x06cd08f7:
    ppuVar11 = ppuStack_328;
    param_3 = param_3 + 1;
    ppuStack_328 = (undefined **)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      (**(code **)(*ppuVar11 + 8))();
    }
    ppuVar11 = ppuStack_340;
    ppuVar13 = ppuStack_330;
    if (((ulong)ppuStack_340 & 1) != 0) {
LAB_06cd0925:
      func_0x0412a280(ppuVar13,(ulong)ppuVar11 & 0xfffffffffffffffe);
    }
    goto LAB_06cd3058;
  case 5:
    _auStack_348 = (undefined **)0x0;
    ppuStack_340 = (undefined **)0x0;
    ppuStack_338 = (undefined **)0x0;
    pppuStack_308 = (undefined ***)0x0;
    ppuStack_2b8 = (undefined **)&UNK_0f0877d0;
    pppuStack_298 = &ppuStack_2b8;
    cVar6 = func_0x04865100(param_4,&UNK_012f4ca8);
    if (cVar6 != '\0') {
      uVar12 = func_0x048648e0(param_4,&UNK_012f4ca8);
      cVar6 = func_0x04865490(uVar12);
      if (cVar6 != '\0') {
        uVar12 = func_0x048648e0(param_4,&UNK_012f4ca8);
        func_0x04160690(&ppuStack_218,&UNK_01254d89);
        FUN_04863cb0(auStack_268,uVar12,&ppuStack_218);
        puVar14 = (undefined8 *)((ulong)auStack_268 >> 1 & 0x7f);
        ppuVar11 = (undefined **)(auStack_268 + 1);
        if (((ulong)auStack_268 & 1) != 0) {
          puVar14 = puStack_260;
          ppuVar11 = ppuStack_258;
        }
        func_0x0edfb9d0(&ppuStack_2f8,ppuVar11,puVar14);
        func_0x06cd4de0(auStack_348,&ppuStack_2f8);
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_268 & 1) != 0) {
          func_0x0412a280(ppuStack_258,(ulong)auStack_268 & 0xfffffffffffffffe);
        }
        if (((ulong)ppuStack_218 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_204,uStack_208),(ulong)ppuStack_218 & 0xfffffffffffffffe);
        }
      }
    }
    cVar6 = func_0x04865100(param_4,&UNK_0128e3dc);
    if (cVar6 != '\0') {
      uVar12 = func_0x048648e0(param_4,&UNK_0128e3dc);
      cVar6 = func_0x04865490(uVar12);
      if (cVar6 != '\0') {
        uVar12 = func_0x048648e0(param_4,&UNK_0128e3dc);
        func_0x04160690(&ppuStack_218,&UNK_01254d89);
        FUN_04863cb0(auStack_268,uVar12,&ppuStack_218);
        puVar14 = (undefined8 *)((ulong)auStack_268 >> 1 & 0x7f);
        ppuVar11 = (undefined **)(auStack_268 + 1);
        if (((ulong)auStack_268 & 1) != 0) {
          puVar14 = puStack_260;
          ppuVar11 = ppuStack_258;
        }
        func_0x0edfb9d0(&ppuStack_2f8,ppuVar11,puVar14);
        func_0x06cd5130(auStack_348,&ppuStack_2f8);
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_268 & 1) != 0) {
          func_0x0412a280(ppuStack_258,(ulong)auStack_268 & 0xfffffffffffffffe);
        }
        if (((ulong)ppuStack_218 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_204,uStack_208),(ulong)ppuStack_218 & 0xfffffffffffffffe);
        }
      }
    }
    cVar6 = func_0x04865100(param_4,&UNK_01374325);
    if (cVar6 != '\0') {
      uVar12 = func_0x048648e0(param_4,&UNK_01374325);
      cVar6 = func_0x04865490(uVar12);
      if (cVar6 != '\0') {
        uVar12 = func_0x048648e0(param_4,&UNK_01374325);
        func_0x04160690(&ppuStack_218,&UNK_01254d89);
        FUN_04863cb0(auStack_268,uVar12,&ppuStack_218);
        puVar14 = (undefined8 *)((ulong)auStack_268 >> 1 & 0x7f);
        ppuVar11 = (undefined **)(auStack_268 + 1);
        if (((ulong)auStack_268 & 1) != 0) {
          puVar14 = puStack_260;
          ppuVar11 = ppuStack_258;
        }
        func_0x0edfb9d0(&ppuStack_2f8,ppuVar11,puVar14);
        func_0x06cd5480(auStack_348,&ppuStack_2f8);
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_268 & 1) != 0) {
          func_0x0412a280(ppuStack_258,(ulong)auStack_268 & 0xfffffffffffffffe);
        }
        if (((ulong)ppuStack_218 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_204,uStack_208),(ulong)ppuStack_218 & 0xfffffffffffffffe);
        }
      }
    }
    if (pppuStack_298 == (undefined ***)0x0) {
      pppuStack_2d8 = (undefined ***)0x0;
    }
    else if (pppuStack_298 == &ppuStack_2b8) {
      pppuStack_2d8 = &ppuStack_2f8;
      (*(code *)(*pppuStack_298)[3])();
    }
    else {
      pppuStack_2d8 = (undefined ***)(*(code *)(*pppuStack_298)[2])();
    }
    pppuVar19 = pppuStack_2d8;
    if (pppuStack_2d8 == &ppuStack_2f8) {
      if (pppuStack_308 == &ppuStack_328) {
        (*(code *)(*pppuStack_2d8)[3])(pppuStack_2d8,auStack_268);
        (*(code *)(*pppuStack_2d8)[4])();
        pppuStack_2d8 = (undefined ***)0x0;
        (*(code *)(*pppuStack_308)[3])(pppuStack_308,&ppuStack_2f8);
        (*(code *)(*pppuStack_308)[4])();
        pppuStack_308 = (undefined ***)0x0;
        pppuStack_2d8 = &ppuStack_2f8;
        (**(code **)((long)auStack_268 + 0x18))(auStack_268,&ppuStack_328);
        (**(code **)((long)auStack_268 + 0x20))(auStack_268);
        pppuStack_308 = &ppuStack_328;
      }
      else {
        (*(code *)(*pppuStack_2d8)[3])(pppuStack_2d8,&ppuStack_328);
        (*(code *)(*pppuStack_2d8)[4])();
        pppuStack_2d8 = pppuStack_308;
        pppuStack_308 = &ppuStack_328;
      }
code_r0x06cd137b:
      if (pppuStack_2d8 == &ppuStack_2f8) {
        lVar10 = 0x20;
        goto code_r0x06cd1391;
      }
      lVar10 = 0x28;
      if (pppuStack_2d8 != (undefined ***)0x0) goto code_r0x06cd1391;
    }
    else {
      if (pppuStack_308 != &ppuStack_328) {
        pppuStack_2d8 = pppuStack_308;
        pppuStack_308 = pppuVar19;
        goto code_r0x06cd137b;
      }
      (*(code *)(*pppuStack_308)[3])();
      (*(code *)(*pppuStack_308)[4])();
      pppuStack_308 = pppuStack_2d8;
      pppuStack_2d8 = &ppuStack_2f8;
      lVar10 = 0x20;
code_r0x06cd1391:
      (**(code **)((long)*pppuStack_2d8 + lVar10))();
    }
    param_3 = param_3 + 1;
    (**(code **)(*param_2 + 0x10))(param_2,param_3,auStack_348);
    if (pppuStack_298 == &ppuStack_2b8) {
      lVar10 = 0x20;
code_r0x06cd13ca:
      (**(code **)((long)*pppuStack_298 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (pppuStack_298 != (undefined ***)0x0) goto code_r0x06cd13ca;
    }
    if (pppuStack_308 == &ppuStack_328) {
      lVar10 = 0x20;
code_r0x06cd13eb:
      (**(code **)((long)*pppuStack_308 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (pppuStack_308 != (undefined ***)0x0) goto code_r0x06cd13eb;
    }
    param_2 = _auStack_348;
    ppuVar11 = ppuStack_340;
    if (_auStack_348 != (undefined **)0x0) {
joined_r0x06cd140a:
      param_3 = ppuVar11;
      if (param_2 != param_3) {
        ppuVar13 = (undefined **)param_3[-2];
        ppuVar11 = param_3 + -6;
        if (ppuVar11 != ppuVar13) goto code_r0x06cd142d;
        lVar10 = 0x20;
        goto code_r0x06cd1415;
      }
      ppuStack_340 = param_2;
      func_0x0412a280(_auStack_348,(long)ppuStack_338 - (long)_auStack_348);
    }
    goto LAB_06cd3058;
  case 6:
    cVar6 = func_0x04865100(param_4,&UNK_0128cb06);
    ppuVar11 = param_3 + 1;
    lVar10 = 0x20;
    if (cVar6 == '\0') break;
    uVar12 = func_0x048648e0(param_4,&UNK_0128cb06);
    ppuStack_2f8 = (undefined **)((ulong)ppuStack_2f8 & 0xffffffffffff0000);
    FUN_04863cb0(auStack_348,uVar12,&ppuStack_2f8);
    (**(code **)(*param_2 + 0x18))(param_2,ppuVar11,auStack_348);
    param_3 = ppuVar11;
    ppuVar11 = ppuStack_2f8;
    ppuVar13 = ppuStack_2e8;
    if (((ulong)_auStack_348 & 1) != 0) {
      func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
      ppuVar11 = ppuStack_2f8;
      ppuVar13 = ppuStack_2e8;
    }
    goto joined_r0x06cd0874;
  case 7:
    lVar10 = 0x28;
    break;
  case 8:
    lVar10 = 0x30;
    break;
  case 9:
    lVar10 = 0x38;
    break;
  case 10:
    cVar6 = func_0x04865100(param_4,&UNK_012a2c09);
    if ((cVar6 != '\0') && (cVar6 = func_0x04865100(param_4,&UNK_01220f4f), cVar6 != '\0')) {
      _auStack_348 = (undefined **)((ulong)_auStack_348 & 0xffffffffffffff00);
      ppuStack_340 = (undefined **)0x0;
      ppuStack_338 = (undefined **)0x0;
      ppuStack_330 = (undefined **)0x0;
      ppuStack_328 = (undefined **)0x0;
      uStack_320 = 0;
      appuStack_318[0] = (undefined **)0x0;
      uVar12 = func_0x048648e0(param_4,&UNK_012a2c09);
      func_0x04160690(&ppuStack_2b8,&UNK_01254d89);
      FUN_04863cb0(&ppuStack_2f8,uVar12,&ppuStack_2b8);
      if (((ulong)ppuStack_340 & 1) != 0) {
        func_0x0412a280(ppuStack_330,(ulong)ppuStack_340 & 0xfffffffffffffffe);
      }
      ppuStack_330 = ppuStack_2e8;
      ppuStack_340 = ppuStack_2f8;
      ppuStack_338 = ppuStack_2f0;
      ppuStack_2f8 = (undefined **)((ulong)ppuStack_2f8 & 0xffffffffffff0000);
      if (((ulong)ppuStack_2b8 & 1) != 0) {
        func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
      }
      uVar12 = func_0x048648e0(param_4,&UNK_01220f4f);
      func_0x04160690(&ppuStack_2b8,&UNK_01254d89);
      FUN_04863cb0(&ppuStack_2f8,uVar12,&ppuStack_2b8);
      if (((ulong)ppuStack_328 & 1) != 0) {
        func_0x0412a280(appuStack_318[0],(ulong)ppuStack_328 & 0xfffffffffffffffe);
      }
      appuStack_318[0] = ppuStack_2e8;
      ppuStack_328 = ppuStack_2f8;
      ppuStack_2f8 = (undefined **)((ulong)ppuStack_2f8 & 0xffffffffffff0000);
      if (((ulong)ppuStack_2b8 & 1) != 0) {
        func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
      }
      cVar6 = func_0x04865100(param_4,&UNK_01493f37);
      if (cVar6 == '\0') {
code_r0x06cd219f:
        (**(code **)(*param_2 + 0x58))(param_2,param_3 + 1,auStack_348);
      }
      else {
        uVar12 = func_0x048648e0(param_4,&UNK_01493f37);
        cVar6 = func_0x04865470(uVar12);
        if (cVar6 != '\0') {
          uVar7 = func_0x04863e00(uVar12,0);
          _auStack_348 = (undefined **)CONCAT71(stack0xfffffffffffffcb9,uVar7);
          goto code_r0x06cd219f;
        }
        func_0x04160690(&ppuStack_2b8,&UNK_01254d89);
        FUN_04863cb0(&ppuStack_2f8,uVar12,&ppuStack_2b8);
        cVar6 = func_0x06cd5870(&ppuStack_2f8,auStack_348);
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
        uVar5 = _DAT_0f77847c;
        if (((ulong)ppuStack_2b8 & 1) != 0) {
          func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
          uVar5 = _DAT_0f77847c;
        }
        _DAT_0f77847c = uVar5;
        if (cVar6 != '\0') goto code_r0x06cd219f;
        plVar16 = (long *)func_0x08b67060();
        func_0x04160690(auStack_268,&DAT_0122652c);
        uStack_88 = 0;
        uStack_80 = 0;
        (**(code **)(*plVar16 + 0x90))(&ppuStack_2b8,plVar16,auStack_268,&uStack_88);
        func_0x06cd7510(&ppuStack_2f8,param_3 + 1,uVar5,&ppuStack_2b8);
        if (((ulong)ppuStack_2b8 & 1) != 0) {
          func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
        }
        func_0x0488b480(&uStack_88);
        if (((ulong)auStack_268 & 1) != 0) {
          func_0x0412a280(ppuStack_258,(ulong)auStack_268 & 0xfffffffffffffffe);
        }
        (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,&ppuStack_2f8);
        func_0x06cd4d70(&ppuStack_2f8);
      }
      param_3 = param_3 + 1;
      func_0x06cd5b50(auStack_348);
      goto LAB_06cd3058;
    }
    ppuVar13 = (undefined **)(ulong)_DAT_0f77847c;
    if (DAT_0f5ea4a0 == '\0') goto code_r0x06cd352f;
code_r0x06cd06fd:
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar12 = _UNK_01226543;
    ppuStack_2b8 = (undefined **)0x21;
    lStack_2b0 = 0x1f;
    *(ulong *)((long)puVar14 + 0xf) = CONCAT71(_UNK_0122653c,DAT_0122653b);
    *(undefined8 *)((long)puVar14 + 0x17) = uVar12;
    uVar12 = CONCAT17(DAT_0122653b,_UNK_01226534);
    *puVar14 = _DAT_0122652c;
    puVar14[1] = uVar12;
    *(undefined1 *)((long)puVar14 + 0x1f) = 0;
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    uStack_2a8 = puVar14;
    (**(code **)(_DAT_0f5ea138 + 0x90))(&ppuStack_2f8,&DAT_0f5ea138,&ppuStack_2b8,&uStack_78);
    param_3 = param_3 + 1;
    func_0x06cd7430(auStack_348,param_3,(ulong)ppuVar13 & 0xffffffff);
    func_0x048631d0(auStack_268,&ppuStack_2f8);
    uVar12 = func_0x04864680(&ppuStack_330,&UNK_012c0cae);
    func_0x04863790(uVar12,auStack_268);
    func_0x04863610(auStack_268);
    if (((ulong)ppuStack_2f8 & 1) != 0) {
      func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
    }
    plVar16 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar10 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        func_0x0412c2d0(plVar16);
      }
    }
    if (((ulong)ppuStack_2b8 & 1) != 0) {
      func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
    }
    (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
    goto LAB_06cd0867;
  case 0xb:
    func_0x048631d0(auStack_348,&UNK_01e79d90);
    func_0x04864d90(&ppuStack_218,param_4,&UNK_013aa12a,auStack_348);
    func_0x04863610(auStack_348);
    cVar6 = func_0x04865490(&ppuStack_218);
    if (cVar6 != '\0') {
      ppuStack_2f8 = (undefined **)((ulong)ppuStack_2f8 & 0xffffffffffff0000);
      FUN_04863cb0(auStack_348,&ppuStack_218,&ppuStack_2f8);
      if (((ulong)ppuStack_2f8 & 1) != 0) {
        func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
      }
      ppuVar11 = ppuStack_340;
      if (((ulong)_auStack_348 & 1) == 0) {
        ppuVar11 = (undefined **)(ulong)(auStack_348[0] >> 1);
      }
      if (ppuVar11 != (undefined **)0x0) {
        param_3 = param_3 + 1;
        (**(code **)(*param_2 + 0x40))(param_2,param_3,auStack_348);
      }
      if ((auStack_348[0] & 1) == 0) goto code_r0x06cd304b;
      goto code_r0x06cd0d06;
    }
    plVar16 = (long *)(ulong)_DAT_0f77847c;
    if (DAT_0f5ea4a0 == '\0') goto code_r0x06cd357f;
    goto code_r0x06cd0a6b;
  case 0xc:
    func_0x048631d0(auStack_348,&UNK_01e79d90);
    func_0x04864d90(&ppuStack_218,param_4,&UNK_01410416,auStack_348);
    func_0x04863610(auStack_348);
    uVar12 = func_0x048648e0(param_4,&UNK_01446a5b);
    func_0x04863480(&puStack_1a8,uVar12);
    cVar6 = func_0x04864260(&puStack_1a8);
    uVar5 = _DAT_0f77847c;
    if (cVar6 != '\0') {
      if ((DAT_0f5ea4a0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5ea4a0), iVar9 != 0)) {
        func_0x08b670e0(&DAT_0f5ea138);
        func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
        func_0x0410844d(&DAT_0f5ea4a0);
      }
      uStack_2a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (uStack_2a8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar12 = _UNK_01226543;
      ppuStack_2b8 = (undefined **)0x21;
      lStack_2b0 = 0x1f;
      *(ulong *)((long)uStack_2a8 + 0xf) = CONCAT71(_UNK_0122653c,DAT_0122653b);
      *(undefined8 *)((long)uStack_2a8 + 0x17) = uVar12;
      uVar12 = CONCAT17(DAT_0122653b,_UNK_01226534);
      *uStack_2a8 = _DAT_0122652c;
      uStack_2a8[1] = uVar12;
      *(undefined1 *)((long)uStack_2a8 + 0x1f) = 0;
      uStack_98 = 0;
      plStack_90 = (long *)0x0;
      (**(code **)(_DAT_0f5ea138 + 0x90))(&ppuStack_2f8,&DAT_0f5ea138,&ppuStack_2b8,&uStack_98);
      param_3 = param_3 + 1;
      func_0x06cd7430(auStack_348,param_3,uVar5);
      func_0x048631d0(auStack_268,&ppuStack_2f8);
      uVar12 = func_0x04864680(&ppuStack_330,&UNK_012c0cae);
      func_0x04863790(uVar12,auStack_268);
      func_0x04863610(auStack_268);
      if (((ulong)ppuStack_2f8 & 1) != 0) {
        func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
      }
      plVar16 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_90 + 1;
        lVar10 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          func_0x0412c2d0(plVar16);
        }
      }
      if (((ulong)ppuStack_2b8 & 1) != 0) {
        func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
      }
      (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
      func_0x04863610(&ppuStack_330);
      if (((ulong)_auStack_348 & 1) == 0) goto LAB_06cd303e;
      func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
      goto LAB_06cd303e;
    }
    func_0x04863120(auStack_348,&UNK_011bbc9e);
    cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
    func_0x04863610(auStack_348);
    if (cVar6 != '\0') {
      ppuVar11 = &puStack_1d8;
      if (cStack_1c0 == '\0') {
        ppuVar11 = (undefined **)0x0;
      }
      func_0x0d772c90(ppuVar11,4,&UNK_01e79d91,0,0,0,0);
      goto LAB_06cd303e;
    }
    func_0x04863120(auStack_348,&UNK_014b183a);
    cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
    func_0x04863610(auStack_348);
    if (cVar6 == '\0') {
      func_0x04863120(auStack_348,&UNK_012f4caf);
      cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
      func_0x04863610(auStack_348);
      if (cVar6 != '\0') {
        func_0x048631d0(auStack_348,&UNK_01e79d90);
        func_0x04864d90(auStack_268,&puStack_1a8,&UNK_012a730f,auStack_348);
        func_0x04863610(auStack_348);
        cVar6 = func_0x04865490(auStack_268);
        uVar5 = _DAT_0f77847c;
        if (cVar6 == '\0') {
          plVar16 = (long *)func_0x08b67060();
          func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
          uStack_b8 = 0;
          uStack_b0 = 0;
          (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_b8);
          func_0x06cd7510(auStack_348,param_3 + 1,uVar5,&ppuStack_2f8);
          if (((ulong)ppuStack_2f8 & 1) != 0) {
            func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
          }
          func_0x0488b480(&uStack_b8);
          if (((ulong)ppuStack_2b8 & 1) != 0) {
            func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
          }
          (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,auStack_348);
          goto code_r0x06cd24ef;
        }
        param_2 = &puStack_1d8;
        if (cStack_1c0 == '\0') {
          param_2 = (undefined **)0x0;
        }
        func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
        FUN_04863cb0(auStack_348,auStack_268,&ppuStack_2f8);
        ppuVar13 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
        ppuVar11 = (undefined **)(auStack_348 + 1);
        if (((ulong)_auStack_348 & 1) != 0) {
          ppuVar13 = ppuStack_340;
          ppuVar11 = ppuStack_338;
        }
        func_0x0d772c90(param_2,6,ppuVar11,ppuVar13,0,0,0);
        goto code_r0x06cd15a0;
      }
      func_0x04863120(auStack_348,&UNK_014cce4d);
      cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
      func_0x04863610(auStack_348);
      if (cVar6 == '\0') {
        func_0x04863120(auStack_348,&UNK_01498a99);
        cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
        func_0x04863610(auStack_348);
        if (cVar6 != '\0') {
          func_0x048631d0(auStack_348,&UNK_01e79d90);
          func_0x04864d90(auStack_268,&puStack_1a8,&UNK_012a730f,auStack_348);
          func_0x04863610(auStack_348);
          func_0x048631d0(auStack_348,&UNK_01e79d90);
          func_0x04864d90(auStack_278,&puStack_1a8,&UNK_012f4cbd,auStack_348);
          func_0x04863610(auStack_348);
          cVar6 = func_0x04865490(auStack_278);
          uVar5 = _DAT_0f77847c;
          if (cVar6 == '\0') {
            plVar16 = (long *)func_0x08b67060();
            func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
            uStack_d8 = 0;
            uStack_d0 = 0;
            (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_d8);
            func_0x06cd7510(auStack_348,param_3 + 1,uVar5,&ppuStack_2f8);
            if (((ulong)ppuStack_2f8 & 1) != 0) {
              func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
            }
            func_0x0488b480(&uStack_d8);
            if (((ulong)ppuStack_2b8 & 1) != 0) {
              func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
            }
            (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,auStack_348);
            goto code_r0x06cd301a;
          }
          func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
          FUN_04863cb0(auStack_348,auStack_278,&ppuStack_2f8);
          if (((ulong)ppuStack_2f8 & 1) != 0) {
            func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
          }
          bVar8 = (**(code **)(*param_2 + 0x78))(param_2,auStack_348);
          uRam000000000f724738 = (ulong)bVar8 << 7 | uRam000000000f724738 & 0xffffffffffffff7f;
          ppuVar11 = &puStack_1d8;
          if (cStack_1c0 == '\0') {
            ppuVar11 = (undefined **)0x0;
          }
          ppuVar15 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
          ppuVar13 = (undefined **)(auStack_348 + 1);
          if (((ulong)_auStack_348 & 1) != 0) {
            ppuVar15 = ppuStack_340;
            ppuVar13 = ppuStack_338;
          }
          func_0x0d772c90(ppuVar11,8,ppuVar13,ppuVar15,0,0,0);
          goto code_r0x06cd2409;
        }
        func_0x04863120(auStack_348,&UNK_013947f9);
        cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
        func_0x04863610(auStack_348);
        if (cVar6 != '\0') {
          func_0x048631d0(auStack_348,&UNK_01e79d90);
          func_0x04864d90(auStack_268,&puStack_1a8,&UNK_011eb0a8,auStack_348);
          func_0x04863610(auStack_348);
          func_0x048631d0(auStack_348,&UNK_01e79d90);
          func_0x04864d90(auStack_278,&puStack_1a8,&UNK_012a730f,auStack_348);
          func_0x04863610(auStack_348);
          cVar6 = func_0x04865490(auStack_278);
          uVar5 = _DAT_0f77847c;
          if (cVar6 == '\0') {
            plVar16 = (long *)func_0x08b67060();
            func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
            uStack_e8 = 0;
            uStack_e0 = 0;
            (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_e8);
            func_0x06cd7510(auStack_348,param_3 + 1,uVar5,&ppuStack_2f8);
            if (((ulong)ppuStack_2f8 & 1) != 0) {
              func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
            }
            func_0x0488b480(&uStack_e8);
            if (((ulong)ppuStack_2b8 & 1) != 0) {
              func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
            }
            (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,auStack_348);
            goto code_r0x06cd301a;
          }
          param_2 = &puStack_1d8;
          if (cStack_1c0 == '\0') {
            param_2 = (undefined **)0x0;
          }
          func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
          FUN_04863cb0(auStack_348,auStack_278,&ppuStack_2f8);
          ppuVar13 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
          ppuVar11 = (undefined **)(auStack_348 + 1);
          if (((ulong)_auStack_348 & 1) != 0) {
            ppuVar13 = ppuStack_340;
            ppuVar11 = ppuStack_338;
          }
          func_0x0d772c90(param_2,9,ppuVar11,ppuVar13,0,0,0);
          if (((ulong)_auStack_348 & 1) != 0) {
            func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
          }
          ppuVar11 = ppuStack_2f8;
          ppuVar13 = ppuStack_2e8;
          if (((ulong)ppuStack_2f8 & 1) == 0) goto code_r0x06cd3024;
          goto code_r0x06cd241e;
        }
        func_0x04863120(auStack_348,&UNK_013602d5);
        cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
        func_0x04863610(auStack_348);
        if (cVar6 == '\0') {
          func_0x04863120(auStack_348,&UNK_0142ff06);
          cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
          func_0x04863610(auStack_348);
          if (cVar6 == '\0') {
            func_0x04863120(auStack_348,&UNK_013fc8f9);
            cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
            func_0x04863610(auStack_348);
            if (cVar6 == '\0') {
              func_0x04863120(auStack_348,&UNK_013602e1);
              cVar6 = func_0x04863a80(&ppuStack_218,auStack_348);
              func_0x04863610(auStack_348);
              if (cVar6 == '\0') goto code_r0x06cd3279;
              func_0x048631d0(&ppuStack_2f8,&UNK_01e79d90);
              func_0x04864d90(auStack_348,&puStack_1a8,&UNK_011eb0a8,&ppuStack_2f8);
              func_0x04863610(&ppuStack_2f8);
              ppuVar11 = &puStack_1d8;
              if (cStack_1c0 == '\0') {
                ppuVar11 = (undefined **)0x0;
              }
              func_0x0d772c90(ppuVar11,0xd,&UNK_01e79d91,0,0,0,0);
              puVar18 = auStack_348;
              goto code_r0x06cd3039;
            }
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(auStack_268,&puStack_1a8,&UNK_01198f52,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(auStack_278,&puStack_1a8,&UNK_013decd9,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(&ppuStack_1b8,&puStack_1a8,&UNK_011bbcaf,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(&uStack_158,&puStack_1a8,&UNK_013e2967,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(appuStack_168,&puStack_1a8,&UNK_0119a681,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(auStack_148,&puStack_1a8,&UNK_01222e20,auStack_348);
            func_0x04863610(auStack_348);
            cVar6 = func_0x04865460(auStack_148);
            uVar5 = _DAT_0f77847c;
            if (cVar6 == '\0') {
              plVar16 = (long *)func_0x08b67060();
              func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
              uStack_118 = 0;
              uStack_110 = 0;
              (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_118);
              param_3 = param_3 + 1;
              func_0x06cd7510(auStack_348,param_3,uVar5,&ppuStack_2f8);
              if (((ulong)ppuStack_2f8 & 1) != 0) {
                func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
              }
              func_0x0488b480(&uStack_118);
              if (((ulong)ppuStack_2b8 & 1) != 0) {
                func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
              }
              (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
              func_0x06cd4d70(auStack_348);
            }
            else {
              plStack_228 = (long *)func_0x04863f20(0,auStack_148);
              param_2 = &puStack_1d8;
              if (cStack_1c0 == '\0') {
                param_2 = (undefined **)0x0;
              }
              func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
              FUN_04863cb0(auStack_348,appuStack_168,&ppuStack_2f8);
              ppuVar13 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
              ppuVar11 = (undefined **)(auStack_348 + 1);
              if (((ulong)_auStack_348 & 1) != 0) {
                ppuVar13 = ppuStack_340;
                ppuVar11 = ppuStack_338;
              }
              func_0x0d772c90(param_2,0xc,ppuVar11,ppuVar13,0,0,(long)(double)plStack_228);
              if (((ulong)_auStack_348 & 1) != 0) {
                func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
              }
              if (((ulong)ppuStack_2f8 & 1) != 0) {
                func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
              }
            }
            func_0x04863610(auStack_148);
            func_0x04863610(appuStack_168);
            func_0x04863610(&uStack_158);
          }
          else {
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(auStack_268,&puStack_1a8,&UNK_012a730f,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(auStack_278,&puStack_1a8,&UNK_01198f52,auStack_348);
            func_0x04863610(auStack_348);
            func_0x048631d0(auStack_348,&UNK_01e79d90);
            func_0x04864d90(&ppuStack_1b8,&puStack_1a8,&UNK_01222e20,auStack_348);
            func_0x04863610(auStack_348);
            cVar6 = func_0x04865460(&ppuStack_1b8);
            uVar5 = _DAT_0f77847c;
            if (cVar6 == '\0') {
              plVar16 = (long *)func_0x08b67060();
              func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
              uStack_108 = 0;
              uStack_100 = 0;
              (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_108);
              param_3 = param_3 + 1;
              func_0x06cd7510(auStack_348,param_3,uVar5,&ppuStack_2f8);
              if (((ulong)ppuStack_2f8 & 1) != 0) {
                func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
              }
              func_0x0488b480(&uStack_108);
              if (((ulong)ppuStack_2b8 & 1) != 0) {
                func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
              }
              (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
              func_0x06cd4d70(auStack_348);
            }
            else {
              plStack_228 = (long *)func_0x04863f20(0,&ppuStack_1b8);
              param_2 = &puStack_1d8;
              if (cStack_1c0 == '\0') {
                param_2 = (undefined **)0x0;
              }
              func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
              FUN_04863cb0(auStack_348,auStack_268,&ppuStack_2f8);
              ppuVar13 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
              ppuVar11 = (undefined **)(auStack_348 + 1);
              if (((ulong)_auStack_348 & 1) != 0) {
                ppuVar13 = ppuStack_340;
                ppuVar11 = ppuStack_338;
              }
              func_0x0d772c90(param_2,0xb,ppuVar11,ppuVar13,0,0,(long)(double)plStack_228);
              if (((ulong)_auStack_348 & 1) != 0) {
                func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
              }
              if (((ulong)ppuStack_2f8 & 1) != 0) {
                func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
              }
            }
          }
          func_0x04863610(&ppuStack_1b8);
        }
        else {
          func_0x048631d0(auStack_348,&UNK_01e79d90);
          func_0x04864d90(auStack_268,&puStack_1a8,&UNK_01198f52,auStack_348);
          func_0x04863610(auStack_348);
          func_0x048631d0(auStack_348,&UNK_01e79d90);
          func_0x04864d90(auStack_278,&puStack_1a8,&UNK_01222e20,auStack_348);
          func_0x04863610(auStack_348);
          cVar6 = func_0x04865460(auStack_278);
          uVar5 = _DAT_0f77847c;
          if (cVar6 == '\0') {
            plVar16 = (long *)func_0x08b67060();
            func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
            uStack_f8 = 0;
            uStack_f0 = 0;
            (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_f8);
            func_0x06cd7510(auStack_348,param_3 + 1,uVar5,&ppuStack_2f8);
            if (((ulong)ppuStack_2f8 & 1) != 0) {
              func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
            }
            func_0x0488b480(&uStack_f8);
            if (((ulong)ppuStack_2b8 & 1) != 0) {
              func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
            }
            (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,auStack_348);
            goto code_r0x06cd301a;
          }
          dVar4 = (double)func_0x04863f20(0,auStack_278);
          ppuVar11 = &puStack_1d8;
          if (cStack_1c0 == '\0') {
            ppuVar11 = (undefined **)0x0;
          }
          func_0x0d772c90(ppuVar11,10,&UNK_01e79d91,0,0,0,(long)dVar4);
        }
      }
      else {
        func_0x048631d0(auStack_348,&UNK_01e79d90);
        func_0x04864d90(auStack_268,&puStack_1a8,&UNK_0139155b,auStack_348);
        func_0x04863610(auStack_348);
        func_0x048631d0(auStack_348,&UNK_01e79d90);
        func_0x04864d90(auStack_278,&puStack_1a8,&UNK_01462d0b,auStack_348);
        func_0x04863610(auStack_348);
        cVar6 = func_0x04865490(auStack_278);
        uVar5 = _DAT_0f77847c;
        if (cVar6 == '\0') {
          plVar16 = (long *)func_0x08b67060();
          func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
          uStack_c8 = 0;
          uStack_c0 = 0;
          (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_c8);
          func_0x06cd7510(auStack_348,param_3 + 1,uVar5,&ppuStack_2f8);
          if (((ulong)ppuStack_2f8 & 1) != 0) {
            func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
          }
          func_0x0488b480(&uStack_c8);
          if (((ulong)ppuStack_2b8 & 1) != 0) {
            func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
          }
          (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,auStack_348);
code_r0x06cd301a:
          param_3 = param_3 + 1;
          func_0x06cd4d70(auStack_348);
          goto code_r0x06cd3024;
        }
        func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
        FUN_04863cb0(auStack_348,auStack_278,&ppuStack_2f8);
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
        bVar8 = (**(code **)(*param_2 + 0x78))(param_2,auStack_348);
        uRam000000000f724738 = (ulong)bVar8 << 7 | uRam000000000f724738 & 0xffffffffffffff7f;
        ppuVar11 = &puStack_1d8;
        if (cStack_1c0 == '\0') {
          ppuVar11 = (undefined **)0x0;
        }
        ppuVar15 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
        ppuVar13 = (undefined **)(auStack_348 + 1);
        if (((ulong)_auStack_348 & 1) != 0) {
          ppuVar15 = ppuStack_340;
          ppuVar13 = ppuStack_338;
        }
        func_0x0d772c90(ppuVar11,7,ppuVar13,ppuVar15,0,0,0);
code_r0x06cd2409:
        ppuVar11 = _auStack_348;
        ppuVar13 = ppuStack_338;
        if (((ulong)_auStack_348 & 1) != 0) {
code_r0x06cd241e:
          func_0x0412a280(ppuVar13,(ulong)ppuVar11 & 0xfffffffffffffffe);
        }
      }
code_r0x06cd3024:
      func_0x04863610(auStack_278);
    }
    else {
      func_0x048631d0(auStack_348,&UNK_01e79d90);
      func_0x04864d90(auStack_268,&puStack_1a8,&UNK_012a730f,auStack_348);
      func_0x04863610(auStack_348);
      cVar6 = func_0x04865490(auStack_268);
      uVar5 = _DAT_0f77847c;
      if (cVar6 == '\0') {
        plVar16 = (long *)func_0x08b67060();
        func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
        uStack_a8 = 0;
        uStack_a0 = 0;
        (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_a8);
        func_0x06cd7510(auStack_348,param_3 + 1,uVar5,&ppuStack_2f8);
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
        func_0x0488b480(&uStack_a8);
        if (((ulong)ppuStack_2b8 & 1) != 0) {
          func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
        }
        (**(code **)(*param_2 + 0x70))(param_2,param_3 + 1,auStack_348);
code_r0x06cd24ef:
        param_3 = param_3 + 1;
        func_0x06cd4d70(auStack_348);
      }
      else {
        param_2 = &puStack_1d8;
        if (cStack_1c0 == '\0') {
          param_2 = (undefined **)0x0;
        }
        func_0x04160690(&ppuStack_2f8,&UNK_01254d89);
        FUN_04863cb0(auStack_348,auStack_268,&ppuStack_2f8);
        ppuVar13 = (undefined **)((ulong)_auStack_348 >> 1 & 0x7f);
        ppuVar11 = (undefined **)(auStack_348 + 1);
        if (((ulong)_auStack_348 & 1) != 0) {
          ppuVar13 = ppuStack_340;
          ppuVar11 = ppuStack_338;
        }
        func_0x0d772c90(param_2,5,ppuVar11,ppuVar13,0,0,0);
code_r0x06cd15a0:
        if (((ulong)_auStack_348 & 1) != 0) {
          func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
        }
        if (((ulong)ppuStack_2f8 & 1) != 0) {
          func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
        }
      }
    }
    puVar18 = auStack_268;
code_r0x06cd3039:
    func_0x04863610(puVar18);
    goto LAB_06cd303e;
  case 0xd:
    uVar12 = func_0x048648e0(param_4,&UNK_0147bf3d);
    func_0x04863120(auStack_348,&UNK_012a731f);
    cVar6 = func_0x04863a80(uVar12,auStack_348);
    func_0x04863610(auStack_348);
    if (cVar6 == '\0') {
      uVar12 = func_0x048648e0(param_4,&UNK_0147bf3d);
      func_0x04863120(auStack_348,&UNK_01240680);
      cVar6 = func_0x04863a80(uVar12,auStack_348);
      func_0x04863610(auStack_348);
      if (cVar6 != '\0') {
        uVar12 = *param_1;
        func_0x04863480(auStack_268,param_4);
        func_0x06cd5c40(&ppuStack_2b8,uVar12,auStack_268);
        ppuStack_2f8 = (undefined **)&UNK_012405f7;
        ppuStack_2f0 = (undefined **)0x88;
        ppuStack_2e8 = _DAT_0f778528;
        uStack_2e0 = 0xffffffff00000001;
        uStack_2d0 = 0;
        pppuStack_2d8 = (undefined ***)CONCAT71(pppuStack_2d8._1_7_,1);
        _auStack_348 = param_2;
        func_0x06cd5b90(&ppuStack_340,param_3);
        func_0x04863480(appuStack_318,param_4);
        func_0x06cd6520(auStack_48,&ppuStack_2b8,&ppuStack_2f8,auStack_348);
        func_0x0488b060(auStack_48);
        func_0x06cd6e30(auStack_348);
        func_0x06cd6e60(lStack_2b0);
        pppuVar19 = (undefined ***)auStack_268;
        goto code_r0x06cd3053;
      }
      goto LAB_06cd3058;
    }
    plVar16 = (long *)*param_1;
    func_0x04863480(appuStack_168,param_4);
    auStack_268 = (undefined1  [8])&UNK_012405f7;
    puStack_260 = (undefined8 *)0x88;
    ppuStack_258 = _DAT_0f778528;
    uStack_250 = 0xffffffff00000001;
    uStack_248 = 0;
    uStack_240 = 0;
    uVar7 = (**(code **)(*plVar16 + 0x48))(plVar16);
    uStack_158 = 0;
    plStack_150 = (long *)0x0;
    plStack_228 = plVar16;
    func_0x04863480(auStack_278,appuStack_168);
    ppuStack_1b8 = (undefined **)0x0;
    ppuStack_1b0 = (undefined **)0x0;
    uStack_158 = 0;
    plStack_150 = (long *)0x0;
    lStack_2b0 = 0;
    ppuStack_2b8 = (undefined **)&UNK_0f086cd8;
    lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (lVar10 == 0) {
      FUN_0eec74c0(0x10,0);
    }
    func_0x04863480(lVar10,auStack_278);
    lStack_2b0 = lVar10;
    ppuVar11 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x180);
    plVar16 = plStack_228;
    if (ppuVar11 == (undefined **)0x0) {
      FUN_0eec74c0(0x180,0);
    }
    ppuVar11[1] = (undefined *)0x0;
    ppuVar11[2] = (undefined *)0x0;
    *ppuVar11 = &UNK_0f086a98;
    ppuStack_220 = ppuVar11 + 4;
    ppuStack_2f8 = (undefined **)0x0;
    ppuStack_2f0 = (undefined **)0x0;
    if (ppuStack_2b8 == (undefined **)0x0) {
      ppuStack_2f8 = (undefined **)0x0;
    }
    else {
      (*(code *)*ppuStack_2b8)(&ppuStack_2b8,&ppuStack_2f8);
      ppuStack_2f8 = ppuStack_2b8;
    }
    ppuStack_2b8 = (undefined **)0x0;
    func_0x0ee25c30(ppuStack_220,plVar16,auStack_268,uVar7);
    _auStack_348 = (undefined **)0x0;
    ppuStack_340 = (undefined **)0x0;
    if (ppuStack_2f8 == (undefined **)0x0) {
      _auStack_348 = (undefined **)0x0;
    }
    else {
      (*(code *)*ppuStack_2f8)(&ppuStack_2f8,auStack_348);
      _auStack_348 = ppuStack_2f8;
    }
    ppuStack_2f8 = (undefined **)0x0;
    ppuVar11[0x13] = (undefined *)0x0;
    ppuVar11[0x14] = (undefined *)0x0;
    ppuVar11[0x12] = &UNK_0f086c20;
    ppuVar11[0x16] = (undefined *)0x0;
    ppuVar11[0x17] = (undefined *)0x0;
    if (_auStack_348 == (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      (*(code *)*_auStack_348)(auStack_348,ppuVar11 + 0x16);
      ppuVar13 = _auStack_348;
    }
    ppuStack_170 = ppuVar11 + 0x12;
    _auStack_348 = (undefined **)0x0;
    ppuVar11[0x16] = (undefined *)ppuVar13;
    *(undefined1 *)(ppuVar11 + 0x1e) = 0;
    *(undefined1 *)(ppuVar11 + 0x22) = 0;
    ppuVar11[4] = &UNK_0f086ae8;
    ppuVar11[0x12] = &UNK_0f086b38;
    ppuVar11[0x23] = (undefined *)0x0;
    ppuVar11[0x24] = (undefined *)0x0;
    ppuVar11[0x25] = (undefined *)0x0;
    ppuVar11[0x26] = (undefined *)0x0;
    ppuVar11[0x27] = (undefined *)0x0;
    *(undefined4 *)(ppuVar11 + 0x28) = 1;
    ppuVar11[0x2d] = (undefined *)0x0;
    ppuVar11[0x2e] = (undefined *)0x0;
    ppuVar11[0x29] = (undefined *)0x0;
    ppuVar11[0x2a] = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar11 + 0x151) = 0;
    *(undefined8 *)((long)ppuVar11 + 0x159) = 0;
    if (ppuVar13 == (undefined **)0x0) {
      ppuStack_178 = ppuVar11 + 0x29;
      cVar6 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_0122658b);
      if (cVar6 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if (ppuStack_2f8 != (undefined **)0x0) {
      (*(code *)ppuStack_2f8[1])(&ppuStack_2f8);
    }
    ppuVar13 = ppuVar11 + 1;
    if (ppuVar11[0x14] == (undefined *)0x0) {
      LOCK();
      ppuVar11[1] = ppuVar11[1] + 1;
      UNLOCK();
      LOCK();
      ppuVar11[2] = ppuVar11[2] + 1;
      UNLOCK();
      ppuVar11[0x13] = (undefined *)(ppuVar11 + 0x13);
      ppuVar11[0x14] = (undefined *)ppuVar11;
code_r0x06cd10da:
      LOCK();
      puVar2 = *ppuVar13;
      *ppuVar13 = *ppuVar13 + -1;
      UNLOCK();
      if (puVar2 == (undefined *)0x0) {
        (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
        func_0x0412c2d0(ppuVar11);
      }
    }
    else if (*(long *)(ppuVar11[0x14] + 8) == -1) {
      LOCK();
      ppuVar11[1] = ppuVar11[1] + 1;
      UNLOCK();
      LOCK();
      ppuVar11[2] = ppuVar11[2] + 1;
      UNLOCK();
      ppuVar11[0x13] = (undefined *)(ppuVar11 + 0x13);
      ppuVar11[0x14] = (undefined *)ppuVar11;
      func_0x0412c2d0();
      goto code_r0x06cd10da;
    }
    ppuStack_2f8 = ppuStack_220;
    LOCK();
    ppuVar11[1] = ppuVar11[1] + 1;
    UNLOCK();
    ppuStack_2f0 = ppuVar11;
    ppuStack_178 = ppuVar13;
    (**(code **)(*plVar16 + 0x20))(plVar16,&ppuStack_2f8);
    ppuVar13 = ppuStack_2f0;
    if (ppuStack_2f0 != (undefined **)0x0) {
      LOCK();
      ppuVar15 = ppuStack_2f0 + 1;
      puVar2 = *ppuVar15;
      *ppuVar15 = *ppuVar15 + -1;
      UNLOCK();
      if (puVar2 == (undefined *)0x0) {
        (**(code **)(*ppuStack_2f0 + 0x10))(ppuStack_2f0);
        func_0x0412c2d0(ppuVar13);
      }
    }
    ppuVar13 = ppuStack_1b8;
    if (ppuStack_1b8 == (undefined **)0x0) {
code_r0x06cd16e4:
      plVar16 = plStack_228;
      if (ppuStack_2b8 != (undefined **)0x0) {
        (*(code *)ppuStack_2b8[1])(&ppuStack_2b8);
      }
      ppuVar13 = ppuStack_1b0;
      if (ppuStack_1b0 != (undefined **)0x0) {
        LOCK();
        ppuVar15 = ppuStack_1b0 + 1;
        puVar2 = *ppuVar15;
        *ppuVar15 = *ppuVar15 + -1;
        UNLOCK();
        if (puVar2 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b0 + 0x10))(ppuStack_1b0);
          func_0x0412c2d0(ppuVar13);
        }
      }
      ppuStack_2f8 = ppuStack_220;
      LOCK();
      ppuVar11[1] = ppuVar11[1] + 1;
      UNLOCK();
      iVar9 = (int)plVar16[0x10];
      ppuStack_2f0 = ppuVar11;
      if (iVar9 != 1) {
        if (iVar9 == 3) {
          *(undefined4 *)(ppuVar11 + 10) = 0;
        }
        else if (iVar9 == 2) {
          (**(code **)(*ppuStack_220 + 0x10))();
          goto code_r0x06cd17cf;
        }
        _auStack_348 = ppuStack_220;
        LOCK();
        ppuVar11[1] = ppuVar11[1] + 1;
        UNLOCK();
        ppuStack_340 = ppuVar11;
        (**(code **)(*plVar16 + 0x28))(plVar16,auStack_348,0);
        ppuVar13 = ppuStack_340;
        if (ppuStack_340 != (undefined **)0x0) {
          LOCK();
          ppuVar15 = ppuStack_340 + 1;
          puVar2 = *ppuVar15;
          *ppuVar15 = *ppuVar15 + -1;
          UNLOCK();
          if (puVar2 == (undefined *)0x0) {
            (**(code **)(*ppuStack_340 + 0x10))(ppuStack_340);
            func_0x0412c2d0(ppuVar13);
          }
        }
      }
code_r0x06cd17cf:
      ppuVar13 = ppuStack_2f0;
      if (ppuStack_2f0 != (undefined **)0x0) {
        LOCK();
        ppuVar15 = ppuStack_2f0 + 1;
        puVar2 = *ppuVar15;
        *ppuVar15 = *ppuVar15 + -1;
        UNLOCK();
        if (puVar2 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2f0 + 0x10))(ppuStack_2f0);
          func_0x0412c2d0(ppuVar13);
        }
      }
      func_0x04863610(auStack_278);
      plVar16 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        LOCK();
        plVar3 = plStack_150 + 1;
        lVar10 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          func_0x0412c2d0(plVar16);
        }
      }
      puStack_1a8 = &UNK_012405f7;
      plStack_1a0 = (long *)0x88;
      ppuStack_198 = _DAT_0f778528;
      uStack_190 = 0xffffffff00000001;
      uStack_180 = 0;
      uStack_188 = 1;
      ppuStack_210 = (undefined **)CONCAT44(ppuStack_210._4_4_,*(undefined4 *)param_3);
      ppuStack_218 = param_2;
      if (((ulong)param_3[1] & 1) == 0) {
        pppuStack_1f8 = (undefined ***)param_3[3];
        uStack_208 = *(uint *)(param_3 + 1);
        uStack_204 = *(undefined4 *)((long)param_3 + 0xc);
        uStack_200 = *(undefined4 *)(param_3 + 2);
        uStack_1fc = *(undefined4 *)((long)param_3 + 0x14);
      }
      else {
        func_0x0412e5e0(&uStack_208,param_3[3],param_3[2]);
      }
      uStack_1f0 = *(undefined1 *)(param_3 + 4);
      func_0x04863480(auStack_1e8,param_4);
      ppuStack_2b8 = ppuStack_218;
      lStack_2b0 = CONCAT44(lStack_2b0._4_4_,ppuStack_210._0_4_);
      if ((uStack_208 & 1) == 0) {
        pppuStack_298 = pppuStack_1f8;
        uStack_2a8 = (undefined8 *)CONCAT44(uStack_204,uStack_208);
        uStack_2a0 = uStack_200;
        uStack_29c = uStack_1fc;
      }
      else {
        func_0x0412e5e0(&uStack_2a8,pppuStack_1f8,CONCAT44(uStack_1fc,uStack_200));
      }
      uStack_290 = uStack_1f0;
      func_0x04863480(auStack_288,auStack_1e8);
      puStack_260 = (undefined8 *)0x0;
      auStack_268 = (undefined1  [8])&UNK_0f086f00;
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar14 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      *puVar14 = ppuStack_2b8;
      *(undefined4 *)(puVar14 + 1) = (undefined4)lStack_2b0;
      if (((ulong)uStack_2a8 & 1) == 0) {
        puVar14[4] = pppuStack_298;
        *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_2a8;
        *(undefined4 *)((long)puVar14 + 0x14) = uStack_2a8._4_4_;
        *(undefined4 *)(puVar14 + 3) = uStack_2a0;
        *(undefined4 *)((long)puVar14 + 0x1c) = uStack_29c;
      }
      else {
        func_0x0412e5e0(puVar14 + 2,pppuStack_298,CONCAT44(uStack_29c,uStack_2a0));
      }
      *(undefined1 *)(puVar14 + 5) = uStack_290;
      func_0x04863480(puVar14 + 6,auStack_288);
      puStack_260 = puVar14;
      param_3 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x180);
      if (param_3 == (undefined **)0x0) {
        FUN_0eec74c0(0x180,0);
      }
      param_3[1] = (undefined *)0x0;
      param_3[2] = (undefined *)0x0;
      *param_3 = &UNK_0f086d00;
      ppuVar13 = param_3 + 4;
      ppuStack_2f8 = (undefined **)0x0;
      ppuStack_2f0 = (undefined **)0x0;
      if (auStack_268 == (undefined1  [8])0x0) {
        ppuStack_2f8 = (undefined **)0x0;
      }
      else {
        (**(code **)auStack_268)(auStack_268,&ppuStack_2f8);
        ppuStack_2f8 = (undefined **)auStack_268;
      }
      auStack_268 = (undefined1  [8])0x0;
      func_0x0ee25c30(ppuVar13,plStack_228,&puStack_1a8,0);
      _auStack_348 = (undefined **)0x0;
      ppuStack_340 = (undefined **)0x0;
      if (ppuStack_2f8 == (undefined **)0x0) {
        _auStack_348 = (undefined **)0x0;
      }
      else {
        (*(code *)*ppuStack_2f8)(&ppuStack_2f8,auStack_348);
        _auStack_348 = ppuStack_2f8;
      }
      ppuStack_2f8 = (undefined **)0x0;
      param_3[0x13] = (undefined *)0x0;
      param_3[0x14] = (undefined *)0x0;
      param_3[0x12] = &UNK_0f086e38;
      param_3[0x16] = (undefined *)0x0;
      param_3[0x17] = (undefined *)0x0;
      if (_auStack_348 == (undefined **)0x0) {
        ppuVar15 = (undefined **)0x0;
      }
      else {
        (*(code *)*_auStack_348)(auStack_348,param_3 + 0x16);
        ppuVar15 = _auStack_348;
      }
      _auStack_348 = (undefined **)0x0;
      param_3[0x16] = (undefined *)ppuVar15;
      param_3[0x1e] = (undefined *)0x0;
      param_3[0x1f] = (undefined *)0x0;
      param_3[0x20] = (undefined *)0x0;
      param_3[0x21] = (undefined *)0x0;
      *(undefined1 *)(param_3 + 0x22) = 1;
      *(undefined2 *)(param_3 + 0x23) = 0;
      param_3[4] = &UNK_0f086d50;
      param_3[0x12] = &UNK_0f086da0;
      param_3[0x24] = (undefined *)0x0;
      param_3[0x25] = (undefined *)0x0;
      param_3[0x26] = (undefined *)0x0;
      param_3[0x27] = (undefined *)0x0;
      param_3[0x28] = (undefined *)0x0;
      *(undefined4 *)(param_3 + 0x29) = 1;
      param_3[0x2e] = (undefined *)0x0;
      param_3[0x2f] = (undefined *)0x0;
      param_3[0x2a] = (undefined *)0x0;
      param_3[0x2b] = (undefined *)0x0;
      *(undefined8 *)((long)param_3 + 0x159) = 0;
      *(undefined8 *)((long)param_3 + 0x161) = 0;
      if ((ppuVar15 == (undefined **)0x0) &&
         (cVar6 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_01379daa),
         cVar6 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if (ppuStack_2f8 != (undefined **)0x0) {
        (*(code *)ppuStack_2f8[1])(&ppuStack_2f8);
      }
      ppuVar15 = param_3 + 1;
      if (param_3[0x14] == (undefined *)0x0) {
        LOCK();
        param_3[1] = param_3[1] + 1;
        UNLOCK();
        LOCK();
        param_3[2] = param_3[2] + 1;
        UNLOCK();
        param_3[0x13] = (undefined *)(param_3 + 0x13);
        param_3[0x14] = (undefined *)param_3;
code_r0x06cd1c7c:
        LOCK();
        puVar2 = *ppuVar15;
        *ppuVar15 = *ppuVar15 + -1;
        UNLOCK();
        if (puVar2 == (undefined *)0x0) {
          (**(code **)(*param_3 + 0x10))(param_3);
          func_0x0412c2d0(param_3);
        }
      }
      else if (*(long *)(param_3[0x14] + 8) == -1) {
        LOCK();
        param_3[1] = param_3[1] + 1;
        UNLOCK();
        LOCK();
        param_3[2] = param_3[2] + 1;
        UNLOCK();
        param_3[0x13] = (undefined *)(param_3 + 0x13);
        param_3[0x14] = (undefined *)param_3;
        func_0x0412c2d0();
        goto code_r0x06cd1c7c;
      }
      LOCK();
      param_3[1] = param_3[1] + 1;
      UNLOCK();
      ppuStack_2f8 = ppuVar13;
      ppuStack_2f0 = param_3;
      (**(code **)(*plStack_228 + 0x20))(plStack_228,&ppuStack_2f8);
      ppuVar17 = ppuStack_2f0;
      if (ppuStack_2f0 != (undefined **)0x0) {
        LOCK();
        ppuVar1 = ppuStack_2f0 + 1;
        puVar2 = *ppuVar1;
        *ppuVar1 = *ppuVar1 + -1;
        UNLOCK();
        if (puVar2 == (undefined *)0x0) {
          (**(code **)(*ppuStack_2f0 + 0x10))(ppuStack_2f0);
          func_0x0412c2d0(ppuVar17);
        }
      }
      func_0x06cef030(ppuVar13,0,0,0);
      uVar7 = uStack_188;
      func_0x0412d680(param_3 + 0x24);
      *(undefined1 *)(param_3 + 0x2d) = uVar7;
      LOCK();
      ppuVar11[1] = ppuVar11[1] + 1;
      UNLOCK();
      param_3[0x2e] = (undefined *)ppuStack_170;
      param_2 = (undefined **)param_3[0x2f];
      param_3[0x2f] = (undefined *)ppuVar11;
      ppuStack_220 = ppuVar15;
      if (param_2 != (undefined **)0x0) {
        LOCK();
        ppuVar15 = param_2 + 1;
        puVar2 = *ppuVar15;
        *ppuVar15 = *ppuVar15 + -1;
        UNLOCK();
        if (puVar2 == (undefined *)0x0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          func_0x0412c2d0(param_2);
        }
      }
      func_0x0412d6b0(param_3 + 0x24);
      if (param_3[0x14] != (undefined *)0x0) {
        puVar2 = param_3[0x13];
        ppuVar15 = (undefined **)FUN_0412c300();
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar17 = (undefined **)(puVar2 + -0x78);
          if (puVar2 == (undefined *)0x0) {
            ppuVar17 = (undefined **)0x0;
          }
          LOCK();
          ppuVar15[2] = ppuVar15[2] + 1;
          UNLOCK();
          LOCK();
          ppuVar1 = ppuVar15 + 1;
          puVar2 = *ppuVar1;
          *ppuVar1 = *ppuVar1 + -1;
          UNLOCK();
          if (puVar2 == (undefined *)0x0) {
            (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
            func_0x0412c2d0(ppuVar15);
          }
          _auStack_348 = (undefined **)&UNK_0f086e80;
          ppuStack_340 = ppuVar17;
          ppuStack_338 = ppuVar15;
          ppuStack_328 = (undefined **)auStack_348;
          (**(code **)(*ppuStack_170 + 0x30))(ppuStack_170,auStack_348);
          ppuVar15 = ppuStack_178;
          if (ppuStack_328 == (undefined **)auStack_348) {
            lVar10 = 0x20;
code_r0x06cd1e30:
            (**(code **)(*ppuStack_328 + lVar10))();
          }
          else {
            lVar10 = 0x28;
            if (ppuStack_328 != (undefined **)0x0) goto code_r0x06cd1e30;
          }
          LOCK();
          puVar2 = *ppuVar15;
          *ppuVar15 = *ppuVar15 + -1;
          UNLOCK();
          if (puVar2 == (undefined *)0x0) {
            (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
            func_0x0412c2d0(ppuVar11);
          }
          if (auStack_268 != (undefined1  [8])0x0) {
            (**(code **)((long)auStack_268 + 8))(auStack_268);
          }
          LOCK();
          param_3[1] = param_3[1] + 1;
          UNLOCK();
          iVar9 = (int)plStack_228[0x10];
          ppuStack_2f8 = ppuVar13;
          ppuStack_2f0 = param_3;
          if (iVar9 != 1) {
            if (iVar9 == 3) {
              *(undefined4 *)(param_3 + 10) = 0;
            }
            else if (iVar9 == 2) {
              (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
              goto code_r0x06cd1f01;
            }
            LOCK();
            param_3[1] = param_3[1] + 1;
            UNLOCK();
            _auStack_348 = ppuVar13;
            ppuStack_340 = param_3;
            (**(code **)(*plStack_228 + 0x28))(plStack_228,auStack_348,0);
            ppuVar11 = ppuStack_340;
            if (ppuStack_340 != (undefined **)0x0) {
              LOCK();
              ppuVar13 = ppuStack_340 + 1;
              puVar2 = *ppuVar13;
              *ppuVar13 = *ppuVar13 + -1;
              UNLOCK();
              if (puVar2 == (undefined *)0x0) {
                (**(code **)(*ppuStack_340 + 0x10))(ppuStack_340);
                func_0x0412c2d0(ppuVar11);
              }
            }
          }
code_r0x06cd1f01:
          param_2 = ppuStack_2f0;
          if (ppuStack_2f0 != (undefined **)0x0) {
            LOCK();
            ppuVar11 = ppuStack_2f0 + 1;
            puVar2 = *ppuVar11;
            *ppuVar11 = *ppuVar11 + -1;
            UNLOCK();
            if (puVar2 == (undefined *)0x0) {
              (**(code **)(*ppuStack_2f0 + 0x10))(ppuStack_2f0);
              func_0x0412c2d0(param_2);
            }
          }
          func_0x04863610(auStack_288);
          if (((ulong)uStack_2a8 & 1) != 0) {
            func_0x0412a280(pppuStack_298,(ulong)uStack_2a8 & 0xfffffffffffffffe);
          }
          LOCK();
          puVar2 = *ppuStack_220;
          *ppuStack_220 = *ppuStack_220 + -1;
          UNLOCK();
          if (puVar2 == (undefined *)0x0) {
            (**(code **)(*param_3 + 0x10))(param_3);
            func_0x0412c2d0(param_3);
          }
          func_0x04863610(auStack_1e8);
          if ((uStack_208 & 1) != 0) {
            func_0x0412a280(pppuStack_1f8,CONCAT44(uStack_204,uStack_208) & 0xfffffffffffffffe);
          }
          pppuVar19 = appuStack_168;
          goto code_r0x06cd3053;
        }
      }
      func_0x04891290();
code_r0x06cd352f:
      iVar9 = func_0x04108328(&DAT_0f5ea4a0);
      if (iVar9 != 0) {
        func_0x08b670e0(&DAT_0f5ea138);
        func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
        func_0x0410844d(&DAT_0f5ea4a0);
      }
      goto code_r0x06cd06fd;
    }
    ppuStack_58 = param_2;
    ppuStack_50 = param_3;
    func_0x06cedb40(ppuStack_220,0,0,0);
    param_2 = ppuStack_1b0;
    uVar7 = uStack_248;
    ppuStack_1b8 = (undefined **)0x0;
    ppuStack_1b0 = (undefined **)0x0;
    ppuStack_218 = ppuVar13;
    ppuStack_210 = param_2;
    puStack_1a8 = (undefined *)0x0;
    plStack_1a0 = (long *)0x0;
    func_0x0412d680(ppuVar11 + 0x23);
    param_3 = ppuStack_50;
    *(undefined1 *)(ppuVar11 + 0x2c) = uVar7;
    if (param_2 != (undefined **)0x0) {
      LOCK();
      param_2[1] = param_2[1] + 1;
      UNLOCK();
    }
    ppuVar11[0x2d] = (undefined *)ppuVar13;
    plVar16 = (long *)ppuVar11[0x2e];
    ppuVar11[0x2e] = (undefined *)param_2;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar3 = plVar16 + 1;
      lVar10 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
      }
    }
    func_0x0412d6b0(ppuVar11 + 0x23);
    if (ppuVar11[0x14] != (undefined *)0x0) {
      param_2 = (undefined **)ppuVar11[0x13];
      ppuVar13 = (undefined **)FUN_0412c300();
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar15 = param_2 + -0xf;
        if (param_2 == (undefined **)0x0) {
          ppuVar15 = (undefined **)0x0;
        }
        LOCK();
        ppuVar13[2] = ppuVar13[2] + 1;
        UNLOCK();
        LOCK();
        ppuVar17 = ppuVar13 + 1;
        puVar2 = *ppuVar17;
        *ppuVar17 = *ppuVar17 + -1;
        UNLOCK();
        if (puVar2 == (undefined *)0x0) {
          (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
          func_0x0412c2d0(ppuVar13);
        }
        _auStack_348 = (undefined **)&UNK_0f086c68;
        ppuStack_340 = ppuVar15;
        ppuStack_338 = ppuVar13;
        ppuStack_328 = (undefined **)auStack_348;
        (**(code **)(*ppuStack_218 + 0x30))(ppuStack_218,auStack_348);
        param_2 = ppuStack_58;
        if (ppuStack_328 == (undefined **)auStack_348) {
          lVar10 = 0x20;
code_r0x06cd167c:
          (**(code **)(*ppuStack_328 + lVar10))();
        }
        else {
          lVar10 = 0x28;
          if (ppuStack_328 != (undefined **)0x0) goto code_r0x06cd167c;
        }
        ppuVar13 = ppuStack_210;
        if (ppuStack_210 != (undefined **)0x0) {
          LOCK();
          ppuVar15 = ppuStack_210 + 1;
          puVar2 = *ppuVar15;
          *ppuVar15 = *ppuVar15 + -1;
          UNLOCK();
          if (puVar2 == (undefined *)0x0) {
            (**(code **)(*ppuStack_210 + 0x10))(ppuStack_210);
            func_0x0412c2d0(ppuVar13);
          }
        }
        plVar16 = plStack_1a0;
        if (plStack_1a0 != (long *)0x0) {
          LOCK();
          plVar3 = plStack_1a0 + 1;
          lVar10 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
            func_0x0412c2d0(plVar16);
          }
        }
        goto code_r0x06cd16e4;
      }
    }
    func_0x04891290();
code_r0x06cd357f:
    iVar9 = func_0x04108328(&DAT_0f5ea4a0);
    if (iVar9 != 0) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
code_r0x06cd0a6b:
    uStack_2a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (uStack_2a8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar12 = _UNK_01226543;
    ppuStack_2b8 = (undefined **)0x21;
    lStack_2b0 = 0x1f;
    *(ulong *)((long)uStack_2a8 + 0xf) = CONCAT71(_UNK_0122653c,DAT_0122653b);
    *(undefined8 *)((long)uStack_2a8 + 0x17) = uVar12;
    uVar12 = CONCAT17(DAT_0122653b,_UNK_01226534);
    *uStack_2a8 = _DAT_0122652c;
    uStack_2a8[1] = uVar12;
    *(undefined1 *)((long)uStack_2a8 + 0x1f) = 0;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x90))(&ppuStack_2f8,&DAT_0f5ea138,&ppuStack_2b8,&uStack_68);
    param_3 = param_3 + 1;
    func_0x06cd7430(auStack_348,param_3,(ulong)plVar16 & 0xffffffff);
    func_0x048631d0(auStack_268,&ppuStack_2f8);
    uVar12 = func_0x04864680(&ppuStack_330,&UNK_012c0cae);
    func_0x04863790(uVar12,auStack_268);
    func_0x04863610(auStack_268);
    if (((ulong)ppuStack_2f8 & 1) != 0) {
      func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
    }
    plVar16 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      lVar10 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar16);
      }
    }
    if (((ulong)ppuStack_2b8 & 1) != 0) {
      func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
    }
    (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
    func_0x04863610(&ppuStack_330);
    if (((ulong)_auStack_348 & 1) == 0) goto code_r0x06cd304b;
code_r0x06cd0d06:
    func_0x0412a280(ppuStack_338,(ulong)_auStack_348 & 0xfffffffffffffffe);
    goto code_r0x06cd304b;
  default:
    if ((DAT_0f5ea4a0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5ea4a0), iVar9 != 0)) {
      func_0x08b670e0(&DAT_0f5ea138);
      func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
      func_0x0410844d(&DAT_0f5ea4a0);
    }
    uStack_2a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (uStack_2a8 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar12 = _UNK_01226543;
    ppuStack_2b8 = (undefined **)0x21;
    lStack_2b0 = 0x1f;
    *(ulong *)((long)uStack_2a8 + 0xf) = CONCAT71(_UNK_0122653c,DAT_0122653b);
    *(undefined8 *)((long)uStack_2a8 + 0x17) = uVar12;
    uVar12 = CONCAT17(DAT_0122653b,_UNK_01226534);
    *uStack_2a8 = _DAT_0122652c;
    uStack_2a8[1] = uVar12;
    *(undefined1 *)((long)uStack_2a8 + 0x1f) = 0;
    uStack_138 = 0;
    plStack_130 = (long *)0x0;
    (**(code **)(_DAT_0f5ea138 + 0x90))(&ppuStack_2f8,&DAT_0f5ea138,&ppuStack_2b8,&uStack_138);
    param_3 = param_3 + 1;
    func_0x06cd7430(auStack_348,param_3,uVar5);
    func_0x048631d0(auStack_268,&ppuStack_2f8);
    uVar12 = func_0x04864680(&ppuStack_330,&UNK_012c0cae);
    func_0x04863790(uVar12,auStack_268);
    func_0x04863610(auStack_268);
    if (((ulong)ppuStack_2f8 & 1) != 0) {
      func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
    }
    plVar16 = plStack_130;
    if (plStack_130 != (long *)0x0) {
      LOCK();
      plVar3 = plStack_130 + 1;
      lVar10 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        func_0x0412c2d0(plVar16);
      }
    }
    if (((ulong)ppuStack_2b8 & 1) != 0) {
      func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
    }
    (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
LAB_06cd0867:
    func_0x04863610(&ppuStack_330);
    ppuVar11 = _auStack_348;
    ppuVar13 = ppuStack_338;
joined_r0x06cd0874:
    if (((ulong)ppuVar11 & 1) == 0) goto LAB_06cd3058;
    goto LAB_06cd0925;
  }
  param_3 = param_3 + 1;
  (**(code **)(*param_2 + lVar10))(param_2,param_3);
LAB_06cd3058:
  do {
    if (cStack_1c0 != '\x01') {
      return;
    }
    puStack_1d8 = &UNK_0f087cf8;
    if (lStack_1d0 == 0) {
      return;
    }
    plVar16 = *(long **)(lStack_1d0 + 8);
    plVar3 = *(long **)(lStack_1d0 + 0x10);
    if (plVar16 == plVar3) {
      return;
    }
    if (&puStack_1d8 == (undefined **)plVar3[-1]) {
LAB_06cd30d7:
      *(long **)(lStack_1d0 + 0x10) = plVar3 + -1;
      return;
    }
    do {
      plVar20 = plVar16;
      if ((undefined **)*plVar16 == &puStack_1d8) break;
      plVar16 = plVar16 + 1;
      plVar20 = plVar3;
    } while (plVar16 != plVar3);
    lVar10 = *plVar20;
    if (lVar10 != 0) {
      *plVar20 = plVar3[-1];
      plVar3[-1] = lVar10;
      goto LAB_06cd30d7;
    }
    func_0x04890760();
code_r0x06cd3279:
    uVar5 = _DAT_0f77847c;
    plVar16 = (long *)func_0x08b67060();
    func_0x04160690(&ppuStack_2b8,&DAT_0122652c);
    uStack_128 = 0;
    uStack_120 = 0;
    (**(code **)(*plVar16 + 0x90))(&ppuStack_2f8,plVar16,&ppuStack_2b8,&uStack_128);
    param_3 = param_3 + 1;
    func_0x06cd7510(auStack_348,param_3,uVar5,&ppuStack_2f8);
    if (((ulong)ppuStack_2f8 & 1) != 0) {
      func_0x0412a280(ppuStack_2e8,(ulong)ppuStack_2f8 & 0xfffffffffffffffe);
    }
    func_0x0488b480(&uStack_128);
    if (((ulong)ppuStack_2b8 & 1) != 0) {
      func_0x0412a280(uStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
    }
    (**(code **)(*param_2 + 0x70))(param_2,param_3,auStack_348);
    func_0x06cd4d70(auStack_348);
LAB_06cd303e:
    func_0x04863610(&puStack_1a8);
code_r0x06cd304b:
    pppuVar19 = &ppuStack_218;
code_r0x06cd3053:
    func_0x04863610(pppuVar19);
  } while( true );
code_r0x06cd142d:
  lVar10 = 0x28;
  if (ppuVar13 != (undefined **)0x0) {
code_r0x06cd1415:
    (**(code **)(*ppuVar13 + lVar10))();
  }
  goto joined_r0x06cd140a;
}



/* ---- referenced strings ----
 * 0x122652c  commands.generic.malformed.type
 * 0x122653b  c.malformed.type
 */
