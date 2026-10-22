/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86d2b40 (ELF vaddr 0x85d2b40)
 * Label: caller-of-callee
 * Body:  [[086d2b40, 086d3187] [086d3190, 086d3c2d]]
 * Ghidra: FUN_086d2b40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_086d2b40(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 auStack_3a0 [2];
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined4 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  byte bStack_320;
  undefined7 uStack_31f;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  char cStack_2c0;
  undefined *puStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  long *aplStack_220 [24];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  char cStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  func_0x07bf35c0();
  func_0x079ce400(param_1);
  if ((DAT_0f5dd1e0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dd1e0), iVar4 != 0)) {
    func_0x08799d00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dd160,0xf53dab8);
    func_0x0410844d(&DAT_0f5dd1e0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5dd160 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_086d2bc0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f5dd160 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_086d2bc0:
    puVar5 = &DAT_0f5dd160;
    if (iRam000000000f5dd1c0 != -0x2b3da790) goto LAB_086d2c2d;
LAB_086d2beb:
    lVar7 = *(long *)(puVar5 + 0x68);
    if (lVar7 == 0) goto LAB_086d2c2d;
    bVar12 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar9 = lVar7 + 9;
    if (bVar12) {
      lVar9 = *(long *)(lVar7 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar12) {
      uVar11 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0879bbe0(&lStack_160,param_1,lVar9,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_086d2beb;
LAB_086d2c2d:
    func_0x0879bbe0(&lStack_160,param_1,&UNK_0137cfa8,0x1b);
  }
  if (cStack_130 != '\0') {
    return;
  }
  func_0x0879c750(&lStack_238,&lStack_160,&UNK_014b3477,7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (aplStack_220[0] != (long *)0x0) {
    lVar7 = *aplStack_220[0];
    aplStack_220[0] = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = aplStack_220[0];
  }
  aplStack_220[0] = plVar6;
  uStack_420 = (undefined *)CONCAT44(uStack_420._4_4_,uStack_228);
  uStack_418 = 0;
  uStack_410 = (ulong)uStack_410._4_4_ << 0x20;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_048b3f30;
  puStack_3f0 = &SUB_048b06d0;
  uStack_3e8 = &SUB_048b2190;
  uStack_3e0 = &UNK_0879cd00;
  puStack_3d8 = &UNK_0879cec0;
  uStack_3d0 = (long *)((ulong)uStack_3d0._4_4_ << 0x20);
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  func_0x048b05a0(uStack_230,&uStack_420);
  plVar6 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3c0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0879ca00(&lStack_238);
  uStack_a8 = uStack_158;
  uStack_a0 = uStack_150;
  uStack_98 = uStack_148;
  uStack_94 = uStack_144;
  uStack_90 = uStack_140;
  uStack_8c = uStack_13c;
  func_0x048b0bc0(aplStack_220);
  uStack_400 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  puStack_3d8 = (undefined *)0x0;
  uStack_3d0 = (long *)0x0;
  uStack_3e8 = (undefined1 *)0x0;
  uStack_3e0 = (undefined *)0x0;
  puStack_3f8 = (undefined *)0x0;
  puStack_3f0 = (undefined1 *)0x0;
  uStack_3a8 = 0;
  uStack_418 = 0xffffffffffffffff;
  uStack_410 = 0;
  uStack_408 = 0xff;
  uStack_420 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_400);
  puStack_3f8 = (undefined *)func_0x041681f0(&uStack_400,0xf547a30);
  puStack_3f0 = (undefined1 *)func_0x041681f0(&uStack_400,0xf547770);
  uStack_3e8 = (undefined1 *)0x0;
  uStack_3e0 = (undefined *)0x0;
  puStack_3d8 = (undefined *)0x0;
  uStack_3d0 = (long *)0x0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_418 = 0x200;
  uStack_2b0 = 0x200;
  uStack_2ac = 0;
  uStack_2a8 = (undefined4)uStack_410;
  uStack_2a4 = uStack_410._4_4_;
  uStack_2a0 = (undefined1)uStack_408;
  puStack_2b8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_298,&uStack_400);
  uStack_290 = puStack_3f8;
  uStack_288 = puStack_3f0;
  uStack_280 = (undefined4)uStack_3e8;
  uStack_27c = uStack_3e8._4_4_;
  uStack_278 = (undefined4)uStack_3e0;
  uStack_274 = uStack_3e0._4_4_;
  uStack_270 = puStack_3d8;
  plStack_268 = uStack_3d0;
  if (uStack_3d0 != (long *)0x0) {
    LOCK();
    uStack_3d0[1] = uStack_3d0[1] + 1;
    UNLOCK();
  }
  uStack_260 = uStack_3c8;
  if (((ulong)plStack_3c0 & 1) == 0) {
    uStack_248 = uStack_3b0;
    uStack_258 = (ulong)plStack_3c0;
    uStack_250 = uStack_3b8;
  }
  else {
    func_0x0412e5e0(&uStack_258,uStack_3b0,uStack_3b8);
  }
  uStack_240 = uStack_3a8;
  if (iStack_138 == 4) {
    if ((DAT_0f5dd1e0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dd1e0), iVar4 != 0)) {
      func_0x08799d00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dd160,0xf53dab8);
      func_0x0410844d(&DAT_0f5dd1e0);
    }
    plVar6 = (long *)(*(long *)(lStack_160 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_160 + 0x20) -
                                          *(long *)(lStack_160 + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f5dd160 + 4)) * 8);
    do {
      lVar7 = *plVar6;
      if (lVar7 == -1) goto LAB_086d3058;
      plVar6 = (long *)(*(long *)(lStack_160 + 0x30) + lVar7 * 0x18);
    } while (*(uint *)(*(long *)(lStack_160 + 0x30) + 8 + lVar7 * 0x18) !=
             *(uint *)(_DAT_0f5dd160 + 4));
    if (plVar6 == *(long **)(lStack_160 + 0x38)) {
LAB_086d3058:
      puVar5 = &DAT_0f5dd160;
    }
    else {
      puVar5 = (undefined *)plVar6[2];
    }
    lVar7 = func_0x048b1040(lStack_160 + 0x18,puVar5,uStack_134,1);
    if (lVar7 == 0) {
      lStack_238 = 0;
      uStack_230 = 0;
      FUN_048b10d0(&lStack_238);
      lVar9 = *(long *)(lStack_238 + 0x38);
      lVar7 = lStack_238;
      if (lVar9 == 0) goto LAB_086d3159;
LAB_086d317e:
      do {
        lVar7 = lVar9;
        lVar9 = *(long *)(lVar7 + 0x38);
        if (*(long *)(lVar7 + 0x38) == 0) {
          lStack_238 = 0;
          uStack_230 = 0;
          FUN_048b10d0(&lStack_238);
          lVar9 = lStack_238;
        }
      } while (lVar9 != 0);
    }
    else {
      lVar9 = *(long *)(lVar7 + 0x38);
      if (*(long *)(lVar7 + 0x38) != 0) goto LAB_086d317e;
LAB_086d3159:
      lStack_238 = 0;
      uStack_230 = 0;
      FUN_048b10d0(&lStack_238);
      lVar9 = lStack_238;
      if (lStack_238 != 0) goto LAB_086d317e;
    }
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar8 + 3) = uStack_2a0;
    *(undefined4 *)(puVar8 + 1) = uStack_2b0;
    *(undefined4 *)((long)puVar8 + 0xc) = uStack_2ac;
    *(undefined4 *)(puVar8 + 2) = uStack_2a8;
    *(undefined4 *)((long)puVar8 + 0x14) = uStack_2a4;
  }
  else {
    if (iStack_138 != 1) goto LAB_086d3297;
    if ((DAT_0f5dd1e0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5dd1e0), iVar4 != 0)) {
      func_0x08799d00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dd160,0xf53dab8);
      func_0x0410844d(&DAT_0f5dd1e0);
    }
    plVar6 = (long *)(*(long *)(lStack_160 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_160 + 0x20) -
                                          *(long *)(lStack_160 + 0x18)) >> 3) - 1U &
                            *(uint *)(_DAT_0f5dd160 + 4)) * 8);
    do {
      lVar7 = *plVar6;
      if (lVar7 == -1) goto LAB_086d2fd8;
      plVar6 = (long *)(*(long *)(lStack_160 + 0x30) + lVar7 * 0x18);
    } while (*(uint *)(*(long *)(lStack_160 + 0x30) + 8 + lVar7 * 0x18) !=
             *(uint *)(_DAT_0f5dd160 + 4));
    if (plVar6 == *(long **)(lStack_160 + 0x38)) {
LAB_086d2fd8:
      puVar5 = &DAT_0f5dd160;
    }
    else {
      puVar5 = (undefined *)plVar6[2];
    }
    lVar7 = func_0x048b0c90(lStack_160 + 0x18,puVar5,uStack_134,1);
    if (lVar7 == 0) {
      lStack_238 = 0;
      uStack_230 = 0;
      func_0x048b0d20(&lStack_238);
      lVar7 = lStack_238;
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar8 + 3) = uStack_2a0;
    *(undefined4 *)(puVar8 + 1) = uStack_2b0;
    *(undefined4 *)((long)puVar8 + 0xc) = uStack_2ac;
    *(undefined4 *)(puVar8 + 2) = uStack_2a8;
    *(undefined4 *)((long)puVar8 + 0x14) = uStack_2a4;
  }
  *puVar8 = &UNK_0f4e3c70;
  func_0x04167a20(puVar8 + 4,auStack_298);
  puVar8[5] = uStack_290;
  puVar8[6] = uStack_288;
  puVar8[7] = CONCAT44(uStack_27c,uStack_280);
  puVar8[8] = CONCAT44(uStack_274,uStack_278);
  puVar8[9] = uStack_270;
  puVar8[10] = plStack_268;
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  puVar8[0xb] = uStack_260;
  puVar8[0xe] = uStack_248;
  *(undefined4 *)(puVar8 + 0xc) = (undefined4)uStack_258;
  *(undefined4 *)((long)puVar8 + 100) = uStack_258._4_4_;
  *(undefined4 *)(puVar8 + 0xd) = (undefined4)uStack_250;
  *(undefined4 *)((long)puVar8 + 0x6c) = uStack_250._4_4_;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  puVar8[0xf] = uStack_240;
  plVar6 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
LAB_086d3297:
  uStack_78 = uStack_98;
  uStack_74 = uStack_94;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  uStack_88 = (undefined4)uStack_a8;
  uStack_84 = uStack_a8._4_4_;
  uStack_80 = (undefined4)uStack_a0;
  uStack_7c = uStack_a0._4_4_;
  func_0x041348b0(&bStack_320,0x200);
  puVar10 = (ulong *)func_0x0412f0e0(&bStack_320,0,&UNK_01229c01,0x20);
  uStack_328 = puVar10[2];
  uStack_338 = *puVar10;
  uStack_330 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar8 = (undefined8 *)func_0x0412f8c0(&uStack_338,&UNK_012f7c06,0xc);
  uVar13 = *(undefined4 *)puVar8;
  uVar15 = *(undefined4 *)(puVar8 + 1);
  uVar3 = puVar8[2];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  uVar14 = *(undefined4 *)((long)puVar8 + 4);
  uVar16 = *(undefined4 *)((long)puVar8 + 0xc);
  if ((DAT_0f5dd1e0 == '\0') &&
     (uStack_308 = uVar13, uStack_304 = *(undefined4 *)((long)puVar8 + 4), uStack_300 = uVar15,
     uStack_2fc = *(undefined4 *)((long)puVar8 + 0xc), iVar4 = func_0x04108328(&DAT_0f5dd1e0),
     uVar13 = uStack_308, uVar14 = uStack_304, uVar15 = uStack_300, uVar16 = uStack_2fc, iVar4 != 0)
     ) {
    func_0x08799d00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dd160,0xf53dab8);
    func_0x0410844d(&DAT_0f5dd1e0);
    uVar13 = uStack_308;
    uVar14 = uStack_304;
    uVar15 = uStack_300;
    uVar16 = uStack_2fc;
  }
  plVar6 = (long *)(*(long *)(lStack_160 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_160 + 0x20) - *(long *)(lStack_160 + 0x18)
                                        ) >> 3) - 1U & *(uint *)(_DAT_0f5dd160 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_086d33b0;
    plVar6 = (long *)(*(long *)(lStack_160 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(lStack_160 + 0x30) + 8 + lVar7 * 0x18) !=
           *(uint *)(_DAT_0f5dd160 + 4));
  if (plVar6 == *(long **)(lStack_160 + 0x38)) {
LAB_086d33b0:
    bVar2 = *(byte *)(_DAT_0f5dd1c8 + 0x88);
    lVar7 = _DAT_0f5dd1c8;
  }
  else {
    bVar2 = *(byte *)(*(long *)(plVar6[2] + 0x68) + 0x88);
    lVar7 = *(long *)(plVar6[2] + 0x68);
  }
  if ((bVar2 & 1) != 0) {
    uStack_308 = uVar13;
    uStack_304 = uVar14;
    uStack_300 = uVar15;
    uStack_2fc = uVar16;
    func_0x0412a280(*(undefined8 *)(lVar7 + 0x98),*(ulong *)(lVar7 + 0x88) & 0xfffffffffffffffe);
    uVar13 = uStack_308;
    uVar14 = uStack_304;
    uVar15 = uStack_300;
    uVar16 = uStack_2fc;
  }
  *(undefined4 *)(lVar7 + 0x88) = uVar13;
  *(undefined4 *)(lVar7 + 0x8c) = uVar14;
  *(undefined4 *)(lVar7 + 0x90) = uVar15;
  *(undefined4 *)(lVar7 + 0x94) = uVar16;
  *(undefined8 *)(lVar7 + 0x98) = uVar3;
  uStack_2f0 = lStack_160;
  uStack_2e8 = uStack_88;
  uStack_2e4 = uStack_84;
  uStack_2e0 = uStack_80;
  uStack_2dc = uStack_7c;
  uStack_2d8 = uStack_78;
  uStack_2d4 = uStack_74;
  uStack_2d0 = uStack_70;
  uStack_2cc = uStack_6c;
  iStack_2c8 = iStack_138;
  uStack_2c4 = uStack_134;
  cStack_2c0 = cStack_130;
  func_0x0879c750(&lStack_238,&uStack_2f0,&UNK_01445a35,6);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f12b2f0;
  if (aplStack_220[0] != (long *)0x0) {
    lVar7 = *aplStack_220[0];
    aplStack_220[0] = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = aplStack_220[0];
  }
  aplStack_220[0] = plVar6;
  auStack_3a0[0] = uStack_228;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 1;
  uStack_380 = 0;
  puStack_378 = &UNK_08798310;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_07c9a960;
  puStack_360 = &UNK_0879d090;
  puStack_358 = &UNK_0879d320;
  uStack_350 = 0;
  uStack_348 = 0;
  plStack_340 = (long *)0x0;
  func_0x048b05a0(uStack_230,auStack_3a0);
  plVar6 = plStack_340;
  if (plStack_340 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_340 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_340 + 0x10))(plStack_340);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0879ca00(&lStack_238);
  cStack_b8 = cStack_2c0;
  uStack_c8 = uStack_2d0;
  uStack_c4 = uStack_2cc;
  iStack_c0 = iStack_2c8;
  uStack_bc = uStack_2c4;
  uStack_d8 = uStack_2e0;
  uStack_d4 = uStack_2dc;
  uStack_d0 = uStack_2d8;
  uStack_cc = uStack_2d4;
  uStack_e8 = (undefined4)uStack_2f0;
  uStack_e4 = uStack_2f0._4_4_;
  uStack_e0 = uStack_2e8;
  uStack_dc = uStack_2e4;
  func_0x048b0bc0(aplStack_220);
  uStack_128 = uStack_e8;
  uStack_124 = uStack_e4;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  uStack_118 = uStack_d8;
  uStack_114 = uStack_d4;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  uStack_108 = uStack_c8;
  uStack_104 = uStack_c4;
  iStack_100 = iStack_c0;
  uStack_fc = uStack_bc;
  uStack_f8 = CONCAT71(uStack_b7,cStack_b8);
  func_0x0879c750(&lStack_238,&uStack_128,&UNK_0137cfc4,10);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (aplStack_220[0] != (long *)0x0) {
    lVar7 = *aplStack_220[0];
    aplStack_220[0] = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = aplStack_220[0];
  }
  aplStack_220[0] = plVar6;
  auStack_3a0[0] = uStack_228;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 1;
  uStack_380 = 0;
  puStack_378 = &UNK_04906f70;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_04906c50;
  puStack_360 = &UNK_0879d500;
  puStack_358 = &UNK_0879d660;
  uStack_350 = 0;
  uStack_348 = 0;
  plStack_340 = (long *)0x0;
  func_0x048b05a0(uStack_230,auStack_3a0);
  plVar6 = plStack_340;
  if (plStack_340 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_340 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_340 + 0x10))(plStack_340);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0879ca00(&lStack_238);
  uStack_38 = (undefined1)uStack_f8;
  uStack_48 = uStack_108;
  uStack_44 = uStack_104;
  iStack_40 = iStack_100;
  uStack_3c = uStack_fc;
  uStack_58 = uStack_118;
  uStack_54 = uStack_114;
  uStack_50 = uStack_110;
  uStack_4c = uStack_10c;
  uStack_68 = uStack_128;
  uStack_64 = uStack_124;
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  func_0x048b0bc0(aplStack_220);
  func_0x0879c750(&lStack_238,&uStack_68,&UNK_012bbd6c,7);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0eeb70;
  if (aplStack_220[0] != (long *)0x0) {
    lVar7 = *aplStack_220[0];
    aplStack_220[0] = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = aplStack_220[0];
  }
  aplStack_220[0] = plVar6;
  auStack_3a0[0] = uStack_228;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 1;
  uStack_380 = 0;
  puStack_378 = &UNK_07added0;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_07ad9cc0;
  puStack_360 = &UNK_0879d840;
  puStack_358 = &UNK_0879d9a0;
  uStack_350 = 0;
  uStack_348 = 0;
  plStack_340 = (long *)0x0;
  func_0x048b05a0(uStack_230,auStack_3a0);
  plVar6 = plStack_340;
  if (plStack_340 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_340 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_340 + 0x10))(plStack_340);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0879ca00(&lStack_238);
  func_0x048b0bc0(aplStack_220);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  if ((bStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,CONCAT71(uStack_31f,bStack_320) & 0xfffffffffffffffe);
  }
  if ((uStack_258 & 1) == 0) {
    puStack_2b8 = &UNK_0f4e3c70;
    plVar6 = plStack_268;
  }
  else {
    puStack_2b8 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
    plVar6 = plStack_268;
  }
  plStack_268 = plVar6;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x04167a40(auStack_298);
  uStack_420 = &UNK_0f4e3c70;
  if (((ulong)plStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,(ulong)plStack_3c0 & 0xfffffffffffffffe);
  }
  plVar6 = uStack_3d0;
  if (uStack_3d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_3d0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_3d0 + 0x10))(uStack_3d0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x04167a40(&uStack_400);
  return;
}


