/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb93bb0 (ELF vaddr 0xea93bb0)
 * Label: caller-of-callee
 * Body:  [[0eb93bb0, 0eb93c80] [0eb93c90, 0eb93cd2] [0eb93ce0, 0eb94941]]
 * Ghidra: FUN_0eb93bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb93bb0(long param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined4 uStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  char cStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int iStack_138;
  undefined4 uStack_134;
  char cStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = func_0x0c4c4ad0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar14 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar11 = lVar6 + 9;
    if (bVar14) {
      lVar11 = *(long *)(lVar6 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar14) {
      uVar9 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0ec6c8f0(&lStack_160,param_1,lVar11,uVar9);
  }
  else {
    func_0x0ec6c8f0(&lStack_160,param_1,&DAT_011fdfde,0x15);
  }
  if (cStack_130 != '\0') {
    return;
  }
  lVar11 = lStack_160 + 0x18;
  lVar6 = func_0x0c4c4ad0(lVar11);
  for (pbVar10 = *(byte **)(lStack_160 + 0x50); pbVar10 != *(byte **)(lStack_160 + 0x58);
      pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eb93cea;
    }
    else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0eb93cea:
      if ((bVar2 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      auVar15[0] = -(*pbVar12 == DAT_014eaba0);
      auVar15[1] = -(pbVar12[1] == DAT_014eaba0._1_1_);
      auVar15[2] = -(pbVar12[2] == DAT_014eaba0._2_1_);
      auVar15[3] = -(pbVar12[3] == DAT_014eaba0._3_1_);
      auVar15[4] = -(pbVar12[4] == DAT_014eaba0._4_1_);
      auVar15[5] = -(pbVar12[5] == DAT_014eaba0._5_1_);
      auVar15[6] = -(pbVar12[6] == DAT_014eaba0._6_1_);
      auVar15[7] = -(pbVar12[7] == DAT_014eaba0._7_1_);
      auVar15[8] = -(pbVar12[8] == DAT_014eaba0._8_1_);
      auVar15[9] = -(pbVar12[9] == DAT_014eaba0._9_1_);
      auVar15[10] = -(pbVar12[10] == DAT_014eaba0._10_1_);
      auVar15[0xb] = -(pbVar12[0xb] == DAT_014eaba0._11_1_);
      auVar15[0xc] = -(pbVar12[0xc] == DAT_014eaba0._12_1_);
      auVar15[0xd] = -(pbVar12[0xd] == DAT_014eaba0._13_1_);
      auVar15[0xe] = -(pbVar12[0xe] == DAT_014eaba0._14_1_);
      auVar15[0xf] = -(pbVar12[0xf] == DAT_014eaba0._15_1_);
      auVar16[0] = -(pbVar12[10] == DAT_014e4ff0);
      auVar16[1] = -(pbVar12[0xb] == DAT_014e4ff0._1_1_);
      auVar16[2] = -(pbVar12[0xc] == DAT_014e4ff0._2_1_);
      auVar16[3] = -(pbVar12[0xd] == DAT_014e4ff0._3_1_);
      auVar16[4] = -(pbVar12[0xe] == DAT_014e4ff0._4_1_);
      auVar16[5] = -(pbVar12[0xf] == DAT_014e4ff0._5_1_);
      auVar16[6] = -(pbVar12[0x10] == DAT_014e4ff0._6_1_);
      auVar16[7] = -(pbVar12[0x11] == DAT_014e4ff0._7_1_);
      auVar16[8] = -(pbVar12[0x12] == DAT_014e4ff0._8_1_);
      auVar16[9] = -(pbVar12[0x13] == DAT_014e4ff0._9_1_);
      auVar16[10] = -(pbVar12[0x14] == DAT_014e4ff0._10_1_);
      auVar16[0xb] = -(pbVar12[0x15] == DAT_014e4ff0._11_1_);
      auVar16[0xc] = -(pbVar12[0x16] == DAT_014e4ff0._12_1_);
      auVar16[0xd] = -(pbVar12[0x17] == DAT_014e4ff0._13_1_);
      auVar16[0xe] = -(pbVar12[0x18] == DAT_014e4ff0._14_1_);
      auVar16[0xf] = -(pbVar12[0x19] == DAT_014e4ff0._15_1_);
      auVar16 = auVar16 & auVar15;
      if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar10 == *(byte **)(lStack_160 + 0x58)) {
LAB_0eb93d19:
    if (iStack_138 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0eb93d96;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_308._0_8_ = func_0x048b0c90(lVar11,lVar6,uStack_134,1);
      if (auStack_308._0_8_ == 0) {
        auStack_308 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_308);
        if (auStack_308._0_8_ == 0) goto LAB_0eb93d96;
      }
      if ((*(int *)(auStack_308._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_308._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_308._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eb93d96:
        lVar6 = 0;
      }
    }
    puStack_368 = &UNK_0488e0b0;
    pcStack_360 = (code *)0x0;
    uStack_358 = CONCAT35(uStack_358._5_3_,0x48b5725f);
    lStack_378 = 0;
    auStack_308 = (undefined1  [16])0x0;
    pcStack_2f0 = (code *)&UNK_0488e0b0;
    pcStack_2e8 = (code *)0x0;
    uStack_2e0 = CONCAT35(uStack_2e0._5_3_,0x48b5725f);
    puStack_220 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_220 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar8 = _UNK_013bbadf;
    uStack_230 = 0x21;
    uStack_228 = 0x1a;
    *(ulong *)((long)puStack_220 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_220 + 0x12) = uVar8;
    uVar8 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_220 = _DAT_013bbacd;
    puStack_220[1] = uVar8;
    *(undefined1 *)((long)puStack_220 + 0x1a) = 0;
    lVar6 = func_0x048b5060(lVar6,&uStack_230);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_308) {
      pcVar7 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar13 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar13);
        if (uStack_2e0._4_1_ != '\0') {
          if (uStack_2e0._4_1_ == '\x02') {
            (*pcStack_2f0)(5,auStack_308 + 8,puVar13);
          }
          else {
            uVar8 = auStack_308._8_8_;
            auStack_308._8_8_ = 0;
            *puVar13 = uVar8;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_2f0;
      *(code **)(lVar6 + 0x40) = pcStack_2e8;
      *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_2e0;
      *(char *)(lVar6 + 0x4c) = uStack_2e0._4_1_;
      pcVar7 = pcStack_2e8;
    }
    if ((uStack_230 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_220,uStack_230 & 0xfffffffffffffffe);
      pcVar7 = pcStack_2e8;
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_308 + 8);
    }
    if (pcStack_360 != (code *)0x0) {
      (*pcStack_360)(&lStack_378);
    }
  }
  else {
    iVar3 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar3 == _DAT_0f550ac4) goto LAB_0eb93d19;
  }
  cStack_f8 = cStack_130;
  uStack_100 = CONCAT44(uStack_134,iStack_138);
  uStack_48 = uStack_140;
  uStack_58 = uStack_150;
  uStack_50 = uStack_148;
  lStack_68 = lStack_160;
  uStack_60 = uStack_158;
  lStack_128 = lStack_160;
  uStack_120 = uStack_158;
  uStack_118 = uStack_150;
  uStack_110 = uStack_148;
  uStack_108 = uStack_140;
  func_0x0ec6d1a0(auStack_308,&lStack_128,&UNK_0138e8dd,5);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f0c2a88;
  if (pcStack_2f0 != (code *)0x0) {
    lVar6 = *(long *)pcStack_2f0;
    pcStack_2f0 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_2f0;
  }
  pcStack_2f0 = pcVar7;
  lStack_378 = CONCAT44(lStack_378._4_4_,(undefined4)uStack_2f8);
  uStack_370 = 0;
  puStack_368 = (undefined *)((ulong)puStack_368 & 0xffffffff00000000);
  pcStack_360 = (code *)0x1;
  uStack_358 = 0;
  puStack_350 = &UNK_0729f0a0;
  puStack_348 = &SUB_048b06d0;
  puStack_340 = &UNK_0651e820;
  puStack_338 = &UNK_0ec6d660;
  puStack_330 = &UNK_0ec6d7c0;
  uStack_328 = 0;
  uStack_320 = 0;
  plStack_318 = (long *)0x0;
  func_0x048b05a0(auStack_308._8_8_,&lStack_378);
  plVar4 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_318 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0ec6d360(auStack_308);
  cStack_1e8 = cStack_f8;
  uStack_1f8 = uStack_108;
  uStack_1f0 = uStack_100;
  uStack_208 = uStack_118;
  uStack_200 = uStack_110;
  lStack_218 = lStack_128;
  uStack_210 = uStack_120;
  FUN_048b0bc0(&pcStack_2f0);
  if ((int)uStack_1f0 == 4) {
    lVar6 = func_0x0ec6d990(&lStack_218);
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0eb94207:
    puVar13[1] = 0xffffffffffffffff;
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0xff;
    *puVar13 = &UNK_0f0edc68;
    uVar8 = _DAT_014f0238;
    puVar13[4] = 0;
    puVar13[5] = uVar8;
    puVar13[6] = 0;
    puVar13[7] = 0;
    plVar4 = *(long **)(lVar6 + 8);
    *(undefined8 **)(lVar6 + 8) = puVar13;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
    }
  }
  else if ((int)uStack_1f0 == 1) {
    lVar6 = lStack_218 + 0x18;
    uVar8 = func_0x0c4c4ad0(lVar6);
    lVar6 = func_0x048b0c90(lVar6,uVar8,uStack_1f0._4_4_,1);
    if (lVar6 == 0) {
      auStack_308 = ZEXT816(0);
      func_0x048b0d20(auStack_308);
      lVar6 = auStack_308._0_8_;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0eb94207;
  }
  cStack_b8 = cStack_1e8;
  uStack_c8 = uStack_1f8;
  uStack_c0 = uStack_1f0;
  uStack_d8 = uStack_208;
  uStack_d0 = uStack_200;
  lStack_e8 = lStack_218;
  uStack_e0 = uStack_210;
  func_0x0ec6d1a0(auStack_308,&lStack_e8,&UNK_01482f73,4);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0ef44b00;
  if (pcStack_2f0 != (code *)0x0) {
    lVar6 = *(long *)pcStack_2f0;
    pcStack_2f0 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_2f0;
  }
  pcStack_2f0 = pcVar7;
  lStack_378 = CONCAT44(lStack_378._4_4_,(undefined4)uStack_2f8);
  uStack_370 = 0;
  puStack_368 = (undefined *)((ulong)puStack_368 & 0xffffffff00000000);
  pcStack_360 = (code *)0x1;
  uStack_358 = 0;
  puStack_350 = &UNK_048b3f30;
  puStack_348 = &SUB_048b06d0;
  puStack_340 = &SUB_048b2190;
  puStack_338 = &UNK_0ec6da50;
  puStack_330 = &UNK_0ec6dc20;
  uStack_328 = 0;
  uStack_320 = 0;
  plStack_318 = (long *)0x0;
  func_0x048b05a0(auStack_308._8_8_,&lStack_378);
  plVar4 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_318 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x0ec6d360(auStack_308);
  cStack_78 = cStack_b8;
  uStack_88 = uStack_c8;
  uStack_80 = uStack_c0;
  uStack_98 = uStack_d8;
  uStack_90 = uStack_d0;
  lStack_a8 = lStack_e8;
  uStack_a0 = uStack_e0;
  FUN_048b0bc0(&pcStack_2f0);
  pcStack_2e8 = (code *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_290 = 0;
  uStack_2f8 = 0;
  pcStack_2f0 = (code *)0xff;
  auStack_308._8_8_ = 0xffffffffffffffff;
  auStack_308._0_8_ = &UNK_0f4e3c70;
  func_0x041679a0(&pcStack_2e8);
  uStack_2e0 = func_0x041681f0(&pcStack_2e8,0xf547a30);
  uStack_2d8 = func_0x041681f0(&pcStack_2e8,0xf547770);
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd8);
  if (lVar6 == 0) {
    func_0x0eec74c0(0xd8,0);
  }
  uStack_390 = 0xd9;
  uStack_388 = 0xd1;
  lStack_380 = lVar6;
  func_0x0eee2f00(lVar6,&UNK_01474ecb,0xd1);
  *(undefined1 *)(lVar6 + 0xd1) = 0;
  func_0x0ed60210(auStack_308,&uStack_390,0);
  uStack_1c8 = pcStack_2f0._0_1_;
  uStack_1d8 = auStack_308._8_8_;
  uStack_1d0 = uStack_2f8;
  puStack_1e0 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_1c0,&pcStack_2e8);
  uStack_1b8 = uStack_2e0;
  uStack_1b0 = uStack_2d8;
  uStack_1a8 = uStack_2d0;
  uStack_1a0 = uStack_2c8;
  uStack_198 = uStack_2c0;
  plStack_190 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plStack_2b8[1] = plStack_2b8[1] + 1;
    UNLOCK();
  }
  uStack_188 = uStack_2b0;
  if ((uStack_2a8 & 1) == 0) {
    uStack_170 = uStack_298;
    uStack_180 = uStack_2a8;
    uStack_178 = uStack_2a0;
  }
  else {
    FUN_0412e5e0(&uStack_180,uStack_298,uStack_2a0);
  }
  uStack_168 = uStack_290;
  if ((int)uStack_80 == 4) {
    lVar6 = func_0x0ec6d990(&lStack_a8);
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if ((int)uStack_80 != 1) goto LAB_0eb94788;
    lVar6 = lStack_a8 + 0x18;
    uVar8 = func_0x0c4c4ad0(lVar6);
    lVar6 = func_0x048b0c90(lVar6,uVar8,uStack_80._4_4_,1);
    if (lVar6 == 0) {
      lStack_378 = 0;
      uStack_370 = 0;
      func_0x048b0d20(&lStack_378);
      lVar6 = lStack_378;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar13 + 3) = uStack_1c8;
  puVar13[1] = uStack_1d8;
  puVar13[2] = uStack_1d0;
  *puVar13 = &UNK_0f4e3c70;
  func_0x04167a20(puVar13 + 4,auStack_1c0);
  puVar13[5] = uStack_1b8;
  puVar13[6] = uStack_1b0;
  puVar13[7] = uStack_1a8;
  puVar13[8] = uStack_1a0;
  puVar13[9] = uStack_198;
  puVar13[10] = plStack_190;
  uStack_198 = 0;
  plStack_190 = (long *)0x0;
  puVar13[0xb] = uStack_188;
  puVar13[0xe] = uStack_170;
  puVar13[0xc] = uStack_180;
  puVar13[0xd] = uStack_178;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  puVar13[0xf] = uStack_168;
  plVar4 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar13;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
LAB_0eb94788:
  puStack_1e0 = &UNK_0f4e3c70;
  if ((uStack_180 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_170,uStack_180 & 0xfffffffffffffffe);
  }
  plVar4 = plStack_190;
  if (plStack_190 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_190 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x04167a40(auStack_1c0);
  if ((uStack_390 & 1) == 0) {
    auStack_308._0_8_ = &UNK_0f4e3c70;
  }
  else {
    thunk_FUN_0ee326a0(lStack_380,uStack_390 & 0xfffffffffffffffe);
    auStack_308._0_8_ = &UNK_0f4e3c70;
  }
  plVar4 = plStack_2b8;
  if ((uStack_2a8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_298,uStack_2a8 & 0xfffffffffffffffe);
    plVar4 = plStack_2b8;
  }
  plStack_2b8 = plVar4;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  func_0x04167a40(&pcStack_2e8);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
