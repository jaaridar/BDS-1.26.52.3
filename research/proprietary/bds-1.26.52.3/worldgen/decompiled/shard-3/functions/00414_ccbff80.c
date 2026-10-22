/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdbff80 (ELF vaddr 0xccbff80)
 * Label: caller-of-callee
 * Body:  [[0cdbff80, 0cdc04b0] [0cdc04c0, 0cdc0e7f]]
 * Ghidra: FUN_0cdbff80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cdbff80(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  bool bVar16;
  undefined4 auStack_298 [2];
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  char cStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  undefined7 uStack_a7;
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
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0bf59010();
  if ((DAT_0f7063b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7063b8), iVar5 != 0)) {
    func_0x0ce31df0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f706338,0xf53dab8);
    func_0x0410844d(&DAT_0f7063b8);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f706338 + 4)) * 8);
  do {
    lVar13 = *plVar7;
    if (lVar13 == -1) goto LAB_0cdc0000;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f706338 + 4))
  ;
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_0cdc0000:
    puVar6 = &DAT_0f706338;
    if (iRam000000000f706398 != -0x2b3da790) goto LAB_0cdc0082;
LAB_0cdc002b:
    lVar13 = *(long *)(puVar6 + 0x68);
    if (lVar13 == 0) goto LAB_0cdc0082;
    bVar16 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar8 = lVar13 + 9;
    if (bVar16) {
      lVar8 = *(long *)(lVar13 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar16) {
      uVar15 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0ce326f0(&uStack_228,param_1,lVar8,uVar15);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0cdc002b;
LAB_0cdc0082:
    func_0x0ce326f0(&uStack_228,param_1,&UNK_01233de7,0x20);
  }
  if ((char)puStack_1f8 != '\0') {
    uStack_1d8._4_4_ = (uint)((ulong)uStack_1d8 >> 0x20);
    lVar13 = func_0x0ce343a0(param_1 + 0x18);
    iVar5 = *(int *)(lVar13 + 0x60);
    goto joined_r0x0cdc0077;
  }
  func_0x0ce33310(&lStack_1e8,&uStack_228,&UNK_011aeb53,0xe,1);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f02e460;
  if (uStack_1d0 != (long *)0x0) {
    lVar13 = *uStack_1d0;
    uStack_1d0 = plVar7;
    (**(code **)(lVar13 + 8))();
    plVar7 = uStack_1d0;
  }
  uStack_1d0 = plVar7;
  auStack_298[0] = (undefined4)uStack_1d8;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_063f1bc0;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &UNK_063f0b80;
  puStack_258 = &UNK_0ce338d0;
  puStack_250 = &UNK_0ce33ac0;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  FUN_048b05a0(plStack_1e0,auStack_298);
  plVar7 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_238 + 1;
    lVar13 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0ce335d0(&lStack_1e8);
  lVar13 = CONCAT44(uStack_224,uStack_228);
  uStack_58 = CONCAT44(uStack_21c,uStack_220);
  uStack_50 = CONCAT44(uStack_214,uStack_218);
  uStack_48 = uStack_210;
  uStack_44 = uStack_20c;
  uStack_40 = uStack_208;
  uStack_3c = uStack_204;
  lStack_118 = param_1 + 0x18;
  func_0x048b0bc0(&uStack_1d0);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plVar7 == (long *)0x0) {
    FUN_0eec74c0(0x58,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0f403128;
  plStack_230 = plVar7 + 3;
  plVar7[4] = -1;
  plVar7[5] = 0;
  *(undefined1 *)(plVar7 + 6) = 0xff;
  plVar7[3] = (long)&UNK_0f0edc68;
  lVar8 = _DAT_014f0238;
  plVar7[7] = 0;
  plVar7[8] = lVar8;
  plVar7[9] = 0;
  plVar7[10] = 0;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  if ((int)uStack_200 == 4) {
    if ((DAT_0f7063b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7063b8), iVar5 != 0)) {
      func_0x0ce31df0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f706338,0xf53dab8);
      func_0x0410844d(&DAT_0f7063b8);
    }
    plVar14 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f706338 + 4)) * 8);
    do {
      lVar8 = *plVar14;
      if (lVar8 == -1) goto LAB_0cdc0398;
      plVar14 = (long *)(*(long *)(lVar13 + 0x30) + lVar8 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f706338 + 4))
    ;
    if (plVar14 == *(long **)(lVar13 + 0x38)) {
LAB_0cdc0398:
      puVar6 = &DAT_0f706338;
    }
    else {
      puVar6 = (undefined *)plVar14[2];
    }
    lVar8 = func_0x048b1040(lVar13 + 0x18,puVar6,uStack_200._4_4_,1);
    if (lVar8 == 0) {
      lStack_1e8 = 0;
      plStack_1e0 = (long *)0x0;
      func_0x048b10d0(&lStack_1e8);
      lVar10 = *(long *)(lStack_1e8 + 0x38);
      lVar8 = lStack_1e8;
      if (lVar10 == 0) goto LAB_0cdc0482;
LAB_0cdc04a7:
      do {
        lVar8 = lVar10;
        lVar10 = *(long *)(lVar8 + 0x38);
        if (*(long *)(lVar8 + 0x38) == 0) {
          lStack_1e8 = 0;
          plStack_1e0 = (long *)0x0;
          func_0x048b10d0(&lStack_1e8);
          lVar10 = lStack_1e8;
        }
      } while (lVar10 != 0);
    }
    else {
      lVar10 = *(long *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x38) != 0) goto LAB_0cdc04a7;
LAB_0cdc0482:
      lStack_1e8 = 0;
      plStack_1e0 = (long *)0x0;
      func_0x048b10d0(&lStack_1e8);
      lVar10 = lStack_1e8;
      if (lStack_1e8 != 0) goto LAB_0cdc04a7;
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
LAB_0cdc0515:
    puVar9[1] = 2;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0xff;
    *puVar9 = &UNK_0f4e3cf0;
    puVar9[4] = 2;
    puVar9[5] = plStack_230;
    puVar9[6] = plVar7;
    *(undefined1 *)(puVar9 + 7) = 0;
    plVar14 = *(long **)(lVar8 + 8);
    *(undefined8 **)(lVar8 + 8) = puVar9;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x28))();
    }
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = plVar7;
    if ((int)uStack_200 == 1) {
      if ((DAT_0f7063b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7063b8), iVar5 != 0)) {
        func_0x0ce31df0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f706338,0xf53dab8);
        func_0x0410844d(&DAT_0f7063b8);
      }
      plVar14 = (long *)(*(long *)(lVar13 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f706338 + 4)) * 8);
      do {
        lVar8 = *plVar14;
        if (lVar8 == -1) goto LAB_0cdc0328;
        plVar14 = (long *)(*(long *)(lVar13 + 0x30) + lVar8 * 0x18);
      } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar8 * 0x18) !=
               *(uint *)(_DAT_0f706338 + 4));
      if (plVar14 == *(long **)(lVar13 + 0x38)) {
LAB_0cdc0328:
        puVar6 = &DAT_0f706338;
      }
      else {
        puVar6 = (undefined *)plVar14[2];
      }
      lVar8 = func_0x048b0c90(lVar13 + 0x18,puVar6,uStack_200._4_4_,1);
      if (lVar8 == 0) {
        lStack_1e8 = 0;
        plStack_1e0 = (long *)0x0;
        FUN_048b0d20(&lStack_1e8);
        lVar8 = lStack_1e8;
      }
      lVar8 = *(long *)(lVar8 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar9 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      goto LAB_0cdc0515;
    }
  }
  uStack_f8 = uStack_48;
  uStack_f4 = uStack_44;
  uStack_f0 = uStack_40;
  uStack_ec = uStack_3c;
  uStack_108 = (undefined4)uStack_58;
  uStack_104 = uStack_58._4_4_;
  uStack_100 = (undefined4)uStack_50;
  uStack_fc = uStack_50._4_4_;
  iStack_e8 = (int)uStack_200;
  uStack_e4 = uStack_200._4_4_;
  cStack_e0 = (char)puStack_1f8;
  lStack_110 = lVar13;
  func_0x0ce33310(&lStack_1e8,&lStack_110,&UNK_011cac6f,7,1);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f2ba8e0;
  if (uStack_1d0 != (long *)0x0) {
    lVar13 = *uStack_1d0;
    uStack_1d0 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_1d0;
  }
  uStack_1d0 = plVar11;
  auStack_298[0] = (undefined4)uStack_1d8;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_0c0a1440;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_0b5ad7b0;
  puStack_258 = &UNK_0ce33c90;
  puStack_250 = &UNK_0ce33e80;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  FUN_048b05a0(plStack_1e0,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_238 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0ce335d0(&lStack_1e8);
  cStack_a8 = cStack_e0;
  uStack_b8 = uStack_f0;
  uStack_b4 = uStack_ec;
  iStack_b0 = iStack_e8;
  uStack_ac = uStack_e4;
  uStack_c8 = uStack_100;
  uStack_c4 = uStack_fc;
  uStack_c0 = uStack_f8;
  uStack_bc = uStack_f4;
  uStack_d8 = lStack_110;
  uStack_d0 = (long *)CONCAT44(uStack_104,uStack_108);
  func_0x048b0bc0(&uStack_1d0);
  uStack_98 = (undefined4)uStack_d8;
  uStack_94 = uStack_d8._4_4_;
  uStack_90 = (undefined4)uStack_d0;
  uStack_8c = uStack_d0._4_4_;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  uStack_78 = uStack_b8;
  uStack_74 = uStack_b4;
  iStack_70 = iStack_b0;
  uStack_6c = uStack_ac;
  uStack_68 = CONCAT71(uStack_a7,cStack_a8);
  func_0x0ce32ce0(&lStack_1e8,uStack_d8 + 0x18);
  if (uStack_1d0._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)((long)uStack_1d8 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != (int)uStack_1d0) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    lVar13 = *(long *)(piVar12 + 0xc);
    while ((long *)lVar13 != plStack_1e0) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar13 = *(long *)(piVar12 + 0xc);
    }
LAB_0cdc080f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_1d0._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)((long)uStack_1d8 + 0x78) + 0x48);
      iVar5 = *piVar12;
      while (iVar5 != (int)uStack_1d0) {
        piVar12 = piVar12 + 0x1a;
        iVar5 = *piVar12;
      }
      goto LAB_0cdc080f;
    }
    if (uStack_1d0._4_4_ == 0) {
      *(uint *)((long)uStack_1d8 + 0x18) = *(uint *)((long)uStack_1d8 + 0x18) | 0x40000;
    }
  }
  func_0x0ce33310(&lStack_1e8,&uStack_98,&UNK_01367d32,7,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_1d0 != (long *)0x0) {
    lVar13 = *uStack_1d0;
    uStack_1d0 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_1d0;
  }
  uStack_1d0 = plVar11;
  auStack_298[0] = (undefined4)uStack_1d8;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_04906f70;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_04906c50;
  puStack_258 = &UNK_0ce34060;
  puStack_250 = &UNK_0ce341c0;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  FUN_048b05a0(plStack_1e0,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_238 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0ce335d0(&lStack_1e8);
  plVar11 = plVar7 + 1;
  func_0x048b0bc0(&uStack_1d0);
  if (plVar14 == (long *)0x0) {
LAB_0cdc0972:
    LOCK();
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 != 0) goto LAB_0cdc0972;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    func_0x0412c2d0(plVar7);
  }
  lVar13 = func_0x0ce343a0(lStack_118);
  iVar5 = *(int *)(lVar13 + 0x60);
joined_r0x0cdc0077:
  if ((iVar5 == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0)) {
    bVar16 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar8 = lVar13 + 9;
    if (bVar16) {
      lVar8 = *(long *)(lVar13 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar16) {
      uVar15 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0ce34b60(auStack_298,param_1,lVar8,uVar15);
    uVar2 = uStack_290;
    uStack_214 = uStack_284;
    uVar3 = uStack_280;
    uVar4 = uStack_278;
  }
  else {
    func_0x0ce34b60(auStack_298,param_1,&UNK_012b4f7b,0xe);
    uVar2 = uStack_290;
    uStack_214 = uStack_284;
    uVar3 = uStack_280;
    uVar4 = uStack_278;
  }
  if ((char)puStack_268 == '\0') {
    uStack_290._0_4_ = (undefined4)uVar2;
    uStack_290._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_280._0_4_ = (undefined4)uVar3;
    uStack_280._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
    uStack_278._0_4_ = (undefined4)uVar4;
    uStack_278._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
    uStack_208 = (undefined4)uStack_278;
    uStack_204 = uStack_278._4_4_;
    uStack_210 = (undefined4)uStack_280;
    uStack_20c = uStack_280._4_4_;
    uStack_220 = (undefined4)uStack_290;
    uStack_21c = uStack_290._4_4_;
    uStack_200 = 0x1e1bc4d500000004;
    uStack_290 = uVar2;
    uStack_280 = uVar3;
    uStack_278 = uVar4;
    uStack_228 = auStack_298[0];
    uStack_218 = uStack_288;
    puStack_1f8 = puStack_268;
    if ((DAT_0f706e08 == '\0') && (iVar5 = func_0x04108328(&DAT_0f706e08), iVar5 != 0)) {
      func_0x0ce34590(0xf706df0);
      func_0x0410844d(&DAT_0f706e08);
    }
    lStack_1e8 = CONCAT44(lStack_1e8._4_4_,uStack_200._4_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8._4_4_ << 0x20);
    uStack_1d0 = (long *)0x1;
    puStack_1c8 = &SUB_048aead0;
    puStack_1c0 = &UNK_0ce354f0;
    puStack_1b8 = &UNK_0ce355b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    func_0x049057f0(&uStack_220,&lStack_1e8);
    func_0x048aea50(&lStack_1e8);
    uStack_88 = uStack_210;
    uStack_84 = uStack_20c;
    uStack_80 = uStack_208;
    uStack_7c = uStack_204;
    uStack_98 = uStack_220;
    uStack_94 = uStack_21c;
    uStack_90 = uStack_218;
    uStack_8c = uStack_214;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f406790;
    if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
      FUN_04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    lStack_1e8 = CONCAT44(lStack_1e8._4_4_,_DAT_0f551bb4);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar7 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef46c48;
    plStack_1e0 = plVar7 + 3;
    plVar7[3] = (long)puVar9;
    plVar7[4] = 0;
    *(undefined1 *)(plVar7 + 5) = 0xff;
    uStack_d8 = 0;
    uStack_d0 = (long *)0x0;
    uStack_1d8 = plVar7;
    func_0x048afd20(&uStack_98,&lStack_1e8);
    plVar7 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_1d8 + 1;
      lVar13 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = uStack_d0;
    if (uStack_d0 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_d0 + 1;
      lVar13 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
        func_0x0412c2d0(plVar7);
      }
    }
  }
  return;
}


