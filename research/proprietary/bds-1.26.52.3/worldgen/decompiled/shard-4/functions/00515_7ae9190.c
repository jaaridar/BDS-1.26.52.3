/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7be9190 (ELF vaddr 0x7ae9190)
 * Label: caller-of-callee
 * Body:  [[07be9190, 07bea2b0]]
 * Ghidra: FUN_07be9190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07be9190(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong uVar14;
  bool bVar15;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  char cStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  char cStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  char cStack_f8;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  char cStack_38;
  
  if ((DAT_0f5b5c78 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5b5c78), iVar5 != 0)) {
    func_0x07c6a440();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5b5bf8,0xf53dab8);
    func_0x0410844d(&DAT_0f5b5c78);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b5bf8 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_07be9210;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5b5bf8 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_07be9210:
    puVar7 = &DAT_0f5b5bf8;
    if (iRam000000000f5b5c58 != -0x2b3da790) goto LAB_07be9292;
LAB_07be923b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_07be9292;
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar9 = lVar10 + 9;
    if (bVar15) {
      lVar9 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x07c6c580(&uStack_1d0,param_1,lVar9,uVar14);
    if ((char)puStack_1a0 != '\0') goto LAB_07be9278;
LAB_07be92b8:
    func_0x07c6d090(&lStack_2a8,&uStack_1d0,&UNK_012a8a84,0x16);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012080;
    if (uStack_290 != (long *)0x0) {
      lVar10 = *uStack_290;
      uStack_290 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_290;
    }
    uStack_290 = plVar8;
    puStack_368 = (undefined *)CONCAT44(puStack_368._4_4_,uStack_298);
    uStack_360 = 0;
    uStack_358 = (ulong)uStack_358._4_4_ << 0x20;
    uStack_350 = 1;
    uStack_348 = 0;
    puStack_340 = &UNK_05dd3ca0;
    puStack_338 = &SUB_048b06d0;
    uStack_330 = &UNK_05dd3990;
    uStack_328 = &UNK_07c6d690;
    puStack_320 = &UNK_07c6d7f0;
    uStack_318 = (long *)((ulong)uStack_318._4_4_ << 0x20);
    uStack_310 = 0;
    plStack_308 = (long *)0x0;
    func_0x048b05a0(lStack_2a0,&puStack_368);
    plVar8 = plStack_308;
    if (plStack_308 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_308 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07c6d390(&lStack_2a8);
    lVar10 = CONCAT44(uStack_1cc,uStack_1d0);
    uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_128 = uStack_1c8;
    uStack_118 = (undefined4)uStack_1b8;
    uStack_114 = uStack_1b8._4_4_;
    uStack_110 = (undefined4)uStack_1b0;
    uStack_10c = uStack_1b0._4_4_;
    lStack_2b0 = param_1 + 0x18;
    func_0x048b0bc0(&uStack_290);
    if ((DAT_0f5b5c78 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5b5c78), iVar5 != 0)) {
      func_0x07c6a440();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b5bf8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b5c78);
    }
    plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b5bf8 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_07be94a0;
      plVar8 = (long *)(*(long *)(lVar10 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b5bf8 + 4))
    ;
    if (plVar8 == *(long **)(lVar10 + 0x38)) {
LAB_07be94a0:
      puVar7 = &DAT_0f5b5bf8;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < (int)uStack_1a8 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012dcb68),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar9 = FUN_048b0c90(lVar10 + 0x18,puVar7,uStack_1a8._4_4_,1);
    if (lVar9 == 0) {
      lStack_2a8 = 0;
      lStack_2a0 = 0;
      func_0x048b0d20(&lStack_2a8);
      lVar9 = lStack_2a8;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0xa8) = 1;
    uStack_2e0 = (undefined4)uStack_128;
    uStack_2dc = uStack_128._4_4_;
    uStack_2d8 = (undefined4)uStack_120;
    uStack_2d4 = uStack_120._4_4_;
    uStack_2d0 = uStack_118;
    uStack_2cc = uStack_114;
    uStack_2c8 = uStack_110;
    uStack_2c4 = uStack_10c;
    iStack_2c0 = (int)uStack_1a8;
    uStack_2bc = uStack_1a8._4_4_;
    cStack_2b8 = (char)puStack_1a0;
    uStack_2e8 = lVar10;
    func_0x07c6d090(&lStack_2a8,&uStack_2e8,&UNK_01431aeb,0x17);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012080;
    if (uStack_290 != (long *)0x0) {
      lVar10 = *uStack_290;
      uStack_290 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_290;
    }
    uStack_290 = plVar8;
    puStack_368 = (undefined *)CONCAT44(puStack_368._4_4_,uStack_298);
    uStack_360 = 0;
    uStack_358 = uStack_358 & 0xffffffff00000000;
    uStack_350 = 1;
    uStack_348 = 0;
    puStack_340 = &UNK_05dd3ca0;
    puStack_338 = &SUB_048b06d0;
    uStack_330 = &UNK_05dd3990;
    uStack_328 = &UNK_07c6d9c0;
    puStack_320 = &UNK_07c6db20;
    uStack_318 = (long *)((ulong)uStack_318 & 0xffffffff00000000);
    uStack_310 = 0;
    plStack_308 = (long *)0x0;
    func_0x048b05a0(lStack_2a0,&puStack_368);
    plVar8 = plStack_308;
    if (plStack_308 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_308 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x07c6d390(&lStack_2a8);
    uVar3 = uStack_2bc;
    iVar5 = iStack_2c0;
    lVar10 = uStack_2e8;
    func_0x048b0bc0(&uStack_290);
    if ((DAT_0f5b5c78 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5b5c78), iVar6 != 0)) {
      func_0x07c6a440();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5b5bf8,0xf53dab8);
      func_0x0410844d(&DAT_0f5b5c78);
    }
    plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar10 + 0x20) - *(long *)(lVar10 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5b5bf8 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_07be9741;
      plVar8 = (long *)(*(long *)(lVar10 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar10 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5b5bf8 + 4))
    ;
    if (plVar8 == *(long **)(lVar10 + 0x38)) {
LAB_07be9741:
      puVar7 = &DAT_0f5b5bf8;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    if ((1 < iVar5 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012dcb68),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar9 = FUN_048b0c90(lVar10 + 0x18,puVar7,uVar3,1);
    lVar10 = lStack_2b0;
    if (lVar9 == 0) {
      lStack_2a8 = 0;
      lStack_2a0 = 0;
      func_0x048b0d20(&lStack_2a8);
      lVar9 = lStack_2a8;
    }
    *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0xa8) = 1;
    lVar10 = func_0x07c66f80(lVar10);
    if (*(int *)(lVar10 + 0x60) != -0x2b3da790) goto LAB_07be9841;
LAB_07be97ff:
    lVar10 = *(long *)(lVar10 + 0x68);
    if (lVar10 == 0) goto LAB_07be9841;
    bVar15 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar9 = lVar10 + 9;
    if (bVar15) {
      lVar9 = *(long *)(lVar10 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x07c678d0(&uStack_2e8,param_1,lVar9,uVar14);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_07be923b;
LAB_07be9292:
    func_0x07c6c580(&uStack_1d0,param_1,&UNK_011d8a5f,0x34);
    if ((char)puStack_1a0 == '\0') goto LAB_07be92b8;
LAB_07be9278:
    lVar10 = func_0x07c66f80(param_1 + 0x18);
    if (*(int *)(lVar10 + 0x60) == -0x2b3da790) goto LAB_07be97ff;
LAB_07be9841:
    func_0x07c678d0(&uStack_2e8,param_1,&UNK_0128f906,0x2c);
  }
  if (cStack_2b8 != '\0') {
    return;
  }
  func_0x07c681c0(&lStack_2a8,&uStack_2e8,&UNK_012f0cac,4,1);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef44b00;
  if (uStack_290 != (long *)0x0) {
    lVar10 = *uStack_290;
    uStack_290 = plVar8;
    (**(code **)(lVar10 + 8))();
    plVar8 = uStack_290;
  }
  uStack_290 = plVar8;
  puStack_368 = (undefined *)CONCAT44(puStack_368._4_4_,uStack_298);
  uStack_360 = 0;
  uStack_358 = uStack_358 & 0xffffffff00000000;
  uStack_350 = 1;
  uStack_348 = 0;
  puStack_340 = &UNK_048b3f30;
  puStack_338 = &SUB_048b06d0;
  uStack_330 = &SUB_048b2190;
  uStack_328 = &UNK_07c686c0;
  puStack_320 = &UNK_07c68880;
  uStack_318 = (long *)((ulong)uStack_318 & 0xffffffff00000000);
  uStack_310 = 0;
  plStack_308 = (long *)0x0;
  func_0x048b05a0(lStack_2a0,&puStack_368);
  plVar8 = plStack_308;
  if (plStack_308 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_308 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_308 + 0x10))(plStack_308);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x07c683c0(&lStack_2a8);
  cStack_138 = cStack_2b8;
  uStack_148 = uStack_2c8;
  uStack_144 = uStack_2c4;
  iStack_140 = iStack_2c0;
  uStack_13c = uStack_2bc;
  uStack_158 = uStack_2d8;
  uStack_154 = uStack_2d4;
  uStack_150 = uStack_2d0;
  uStack_14c = uStack_2cc;
  uStack_168 = (undefined4)uStack_2e8;
  uStack_164 = uStack_2e8._4_4_;
  uStack_160 = uStack_2e0;
  uStack_15c = uStack_2dc;
  func_0x048b0bc0(&uStack_290);
  uStack_348 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_310 = 0;
  plStack_308 = (long *)0x0;
  puStack_320 = (undefined *)0x0;
  uStack_318 = (long *)0x0;
  uStack_330 = (undefined *)0x0;
  uStack_328 = (undefined *)0x0;
  puStack_340 = (undefined *)0x0;
  puStack_338 = (undefined1 *)0x0;
  uStack_2f0 = 0;
  uStack_360 = 0xffffffffffffffff;
  uStack_358 = 0;
  uStack_350 = 0xff;
  puStack_368 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_348);
  puStack_340 = (undefined *)FUN_041681f0(&uStack_348,0xf547a30);
  puStack_338 = (undefined1 *)FUN_041681f0(&uStack_348,0xf547770);
  uStack_330 = (undefined *)0x0;
  uStack_328 = (undefined *)0x0;
  puStack_320 = (undefined *)0x0;
  uStack_318 = (long *)0x0;
  uStack_310 = 0;
  plStack_308 = (long *)0x0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_360 = 0x200;
  uStack_e0 = 0x200;
  uStack_dc = 0;
  uStack_d8 = (undefined4)uStack_358;
  uStack_d4 = uStack_358._4_4_;
  uStack_d0 = (undefined1)uStack_350;
  puStack_e8 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_c8,&uStack_348);
  uStack_c0 = puStack_340;
  uStack_b8 = puStack_338;
  uStack_b0 = (undefined4)uStack_330;
  uStack_ac = uStack_330._4_4_;
  uStack_a8 = (undefined4)uStack_328;
  uStack_a4 = uStack_328._4_4_;
  uStack_a0 = puStack_320;
  plStack_98 = uStack_318;
  if (uStack_318 != (long *)0x0) {
    LOCK();
    uStack_318[1] = uStack_318[1] + 1;
    UNLOCK();
  }
  uStack_90 = uStack_310;
  if (((ulong)plStack_308 & 1) == 0) {
    uStack_78 = uStack_2f8;
    uStack_88 = (ulong)plStack_308;
    uStack_80 = uStack_300;
  }
  else {
    func_0x0412e5e0(&uStack_88,uStack_2f8,uStack_300);
  }
  uStack_70 = uStack_2f0;
  if (iStack_140 == 4) {
    lVar10 = func_0x07c68a50(&uStack_168);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
LAB_07be9c32:
    *(undefined1 *)(puVar12 + 3) = uStack_d0;
    *(undefined4 *)(puVar12 + 1) = uStack_e0;
    *(undefined4 *)((long)puVar12 + 0xc) = uStack_dc;
    *(undefined4 *)(puVar12 + 2) = uStack_d8;
    *(undefined4 *)((long)puVar12 + 0x14) = uStack_d4;
    *puVar12 = &UNK_0f4e3c70;
    FUN_04167a20(puVar12 + 4,auStack_c8);
    puVar12[5] = uStack_c0;
    puVar12[6] = uStack_b8;
    puVar12[7] = CONCAT44(uStack_ac,uStack_b0);
    puVar12[8] = CONCAT44(uStack_a4,uStack_a8);
    puVar12[9] = uStack_a0;
    puVar12[10] = plStack_98;
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    puVar12[0xb] = uStack_90;
    puVar12[0xe] = uStack_78;
    *(undefined4 *)(puVar12 + 0xc) = (undefined4)uStack_88;
    *(undefined4 *)((long)puVar12 + 100) = uStack_88._4_4_;
    *(undefined4 *)(puVar12 + 0xd) = (undefined4)uStack_80;
    *(undefined4 *)((long)puVar12 + 0x6c) = uStack_80._4_4_;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puVar12[0xf] = uStack_70;
    plVar8 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar12;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x28))();
    }
  }
  else if (iStack_140 == 1) {
    lVar10 = CONCAT44(uStack_164,uStack_168) + 0x18;
    uVar11 = func_0x07c66f80(lVar10);
    lVar10 = FUN_048b0c90(lVar10,uVar11,uStack_13c,1);
    if (lVar10 == 0) {
      lStack_2a8 = 0;
      lStack_2a0 = 0;
      func_0x048b0d20(&lStack_2a8);
      lVar10 = lStack_2a8;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    goto LAB_07be9c32;
  }
  cStack_38 = cStack_138;
  uStack_48 = uStack_148;
  uStack_44 = uStack_144;
  iStack_40 = iStack_140;
  uStack_3c = uStack_13c;
  uStack_58 = uStack_158;
  uStack_54 = uStack_154;
  uStack_50 = uStack_150;
  uStack_4c = uStack_14c;
  uStack_68 = uStack_168;
  uStack_64 = uStack_164;
  uStack_60 = uStack_160;
  uStack_5c = uStack_15c;
  func_0x07c67e10(&lStack_2a8,CONCAT44(uStack_164,uStack_168) + 0x18);
  if (uStack_290._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_294,uStack_298) + 0x78) + 0x60);
    iVar5 = *piVar13;
    while (iVar5 != (int)uStack_290) {
      piVar13 = piVar13 + 0x16;
      iVar5 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != lStack_2a0) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
LAB_07be9d8f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_290._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_294,uStack_298) + 0x78) + 0x48);
      iVar5 = *piVar13;
      while (iVar5 != (int)uStack_290) {
        piVar13 = piVar13 + 0x1a;
        iVar5 = *piVar13;
      }
      goto LAB_07be9d8f;
    }
    if (uStack_290._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_294,uStack_298) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x07c681c0(&lStack_2a8,&uStack_68,&UNK_012a8a72,0x11,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f0f1070;
  if (uStack_290 != (long *)0x0) {
    lVar10 = *uStack_290;
    uStack_290 = puVar12;
    (**(code **)(lVar10 + 8))();
    puVar12 = uStack_290;
  }
  uStack_290 = puVar12;
  uStack_1d0 = uStack_298;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 1;
  uStack_1b0 = 0;
  uStack_1a8 = &UNK_07c6be50;
  puStack_1a0 = &SUB_048b06d0;
  puStack_198 = &UNK_07c6ace0;
  puStack_190 = &UNK_07c6bf10;
  puStack_188 = &UNK_07c6c100;
  uStack_180 = 0;
  uStack_178 = 0;
  plStack_170 = (long *)0x0;
  func_0x048b05a0(lStack_2a0,&uStack_1d0);
  plVar8 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x07c683c0(&lStack_2a8);
  cStack_f8 = cStack_38;
  uStack_108 = uStack_48;
  uStack_104 = uStack_44;
  iStack_100 = iStack_40;
  uStack_fc = uStack_3c;
  uStack_118 = uStack_58;
  uStack_114 = uStack_54;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  uStack_128 = CONCAT44(uStack_64,uStack_68);
  uStack_120 = CONCAT44(uStack_5c,uStack_60);
  func_0x048b0bc0(&uStack_290);
  if (iStack_100 == 4) {
    lVar10 = func_0x07c68a50(&uStack_128);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iStack_100 != 1) goto LAB_07bea041;
    lVar10 = uStack_128 + 0x18;
    uVar11 = func_0x07c66f80(lVar10);
    lVar10 = FUN_048b0c90(lVar10,uVar11,uStack_fc,1);
    if (lVar10 == 0) {
      lStack_2a8 = 0;
      lStack_2a0 = 0;
      func_0x048b0d20(&lStack_2a8);
      lVar10 = lStack_2a8;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar12[1] = 0x20;
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0xff;
  *puVar12 = &UNK_0f4e3cf0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  *(undefined8 *)((long)puVar12 + 0x29) = 0;
  *(undefined8 *)((long)puVar12 + 0x31) = 0;
  plVar8 = *(long **)(lVar10 + 8);
  *(undefined8 **)(lVar10 + 8) = puVar12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
LAB_07bea041:
  puStack_e8 = &UNK_0f4e3c70;
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(uStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  plVar8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(auStack_c8);
  puStack_368 = &UNK_0f4e3c70;
  if (((ulong)plStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,(ulong)plStack_308 & 0xfffffffffffffffe);
  }
  plVar8 = uStack_318;
  if (uStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_318 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_318 + 0x10))(uStack_318);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(&uStack_348);
  return;
}


