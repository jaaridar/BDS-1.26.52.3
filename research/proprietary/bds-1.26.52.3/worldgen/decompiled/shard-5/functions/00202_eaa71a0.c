/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeba71a0 (ELF vaddr 0xeaa71a0)
 * Label: caller-of-callee
 * Body:  [[0eba71a0, 0eba7408] [0eba7410, 0eba7452] [0eba7460, 0eba7e71] [0eba7e80, 0eba7ff6]]
 * Ghidra: FUN_0eba71a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eba71a0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined *puVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_3a8 [16];
  undefined8 uStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined4 uStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined2 uStack_2e8;
  undefined2 uStack_2e6;
  uint uStack_2e4;
  uint uStack_2e0;
  undefined1 uStack_2dc;
  ulong uStack_2d8;
  long *plStack_2d0;
  undefined8 *puStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  ulong uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  char cStack_1b8;
  undefined7 uStack_1b7;
  ulong uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_168;
  long *plStack_160;
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  
  lVar7 = func_0x0c090050(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar17 = (*(byte *)(lVar7 + 8) & 1) != 0;
    puVar13 = (undefined *)(lVar7 + 9);
    if (bVar17) {
      puVar13 = *(undefined **)(lVar7 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar17) {
      uVar11 = *(ulong *)(lVar7 + 0x10);
    }
  }
  else {
    puVar13 = &UNK_01443b2e;
    uVar11 = 9;
  }
  func_0x0c40a160(auStack_3a8,param_1,puVar13,uVar11,0);
  puVar13 = puStack_378;
  puStack_378._0_5_ = (uint5)(uint)puStack_378;
  puVar4 = puStack_378;
  uStack_370 = uStack_370 & 0xffffffffffffff00;
  puStack_378._0_1_ = (char)puVar13;
  bVar17 = (char)puStack_378 == '\0';
  puStack_378 = puVar4;
  if (bVar17) {
    func_0x0c388e70(auStack_e8,auStack_3a8,&UNK_013c28d2,4);
    func_0x0c389250(auStack_a8,auStack_e8,&UNK_011c98b8,3);
    func_0x0c389630(auStack_68,auStack_a8,&UNK_012cd2db,5);
    func_0x0c389a10(&uStack_168,auStack_68,&UNK_01447599,5);
    func_0x0c389df0(&uStack_1a8,&uStack_168,&UNK_012f4d49,3);
    func_0x0c38a1d0(&uStack_228,&uStack_1a8,&UNK_0137a61f,6);
    func_0x0c38a5b0(&uStack_2d8,&uStack_228,&UNK_0136dc07,8);
    func_0x0c38a990(&uStack_1e8,&uStack_2d8,&UNK_014bdfb3,5);
    func_0x0c38ad70(&plStack_298,&uStack_1e8,&UNK_0143e64a,8);
    func_0x0c38b150(auStack_128,&plStack_298,&UNK_01267c8f,5);
  }
  lVar7 = func_0x0c4ded10(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar17 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar14 = lVar7 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar7 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar17) {
      uVar11 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0ec91380(&uStack_1e8,param_1,lVar14,uVar11);
  }
  else {
    func_0x0ec91380(&uStack_1e8,param_1,&DAT_0138617a,0x17);
  }
  if (cStack_1b8 != '\0') {
    return;
  }
  lVar14 = uStack_1e8 + 0x18;
  lVar7 = func_0x0c4ded10(lVar14);
  for (pbVar12 = *(byte **)(uStack_1e8 + 0x50); pbVar12 != *(byte **)(uStack_1e8 + 0x58);
      pbVar12 = pbVar12 + 0x38) {
    bVar2 = *pbVar12;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eba746a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1a) {
LAB_0eba746a:
      if ((bVar2 & 1) == 0) {
        pbVar15 = pbVar12 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar12 + 0x10);
      }
      auVar18[0] = -(*pbVar15 == DAT_014eaba0);
      auVar18[1] = -(pbVar15[1] == DAT_014eaba0._1_1_);
      auVar18[2] = -(pbVar15[2] == DAT_014eaba0._2_1_);
      auVar18[3] = -(pbVar15[3] == DAT_014eaba0._3_1_);
      auVar18[4] = -(pbVar15[4] == DAT_014eaba0._4_1_);
      auVar18[5] = -(pbVar15[5] == DAT_014eaba0._5_1_);
      auVar18[6] = -(pbVar15[6] == DAT_014eaba0._6_1_);
      auVar18[7] = -(pbVar15[7] == DAT_014eaba0._7_1_);
      auVar18[8] = -(pbVar15[8] == DAT_014eaba0._8_1_);
      auVar18[9] = -(pbVar15[9] == DAT_014eaba0._9_1_);
      auVar18[10] = -(pbVar15[10] == DAT_014eaba0._10_1_);
      auVar18[0xb] = -(pbVar15[0xb] == DAT_014eaba0._11_1_);
      auVar18[0xc] = -(pbVar15[0xc] == DAT_014eaba0._12_1_);
      auVar18[0xd] = -(pbVar15[0xd] == DAT_014eaba0._13_1_);
      auVar18[0xe] = -(pbVar15[0xe] == DAT_014eaba0._14_1_);
      auVar18[0xf] = -(pbVar15[0xf] == DAT_014eaba0._15_1_);
      auVar19[0] = -(pbVar15[10] == DAT_014e4ff0);
      auVar19[1] = -(pbVar15[0xb] == DAT_014e4ff0._1_1_);
      auVar19[2] = -(pbVar15[0xc] == DAT_014e4ff0._2_1_);
      auVar19[3] = -(pbVar15[0xd] == DAT_014e4ff0._3_1_);
      auVar19[4] = -(pbVar15[0xe] == DAT_014e4ff0._4_1_);
      auVar19[5] = -(pbVar15[0xf] == DAT_014e4ff0._5_1_);
      auVar19[6] = -(pbVar15[0x10] == DAT_014e4ff0._6_1_);
      auVar19[7] = -(pbVar15[0x11] == DAT_014e4ff0._7_1_);
      auVar19[8] = -(pbVar15[0x12] == DAT_014e4ff0._8_1_);
      auVar19[9] = -(pbVar15[0x13] == DAT_014e4ff0._9_1_);
      auVar19[10] = -(pbVar15[0x14] == DAT_014e4ff0._10_1_);
      auVar19[0xb] = -(pbVar15[0x15] == DAT_014e4ff0._11_1_);
      auVar19[0xc] = -(pbVar15[0x16] == DAT_014e4ff0._12_1_);
      auVar19[0xd] = -(pbVar15[0x17] == DAT_014e4ff0._13_1_);
      auVar19[0xe] = -(pbVar15[0x18] == DAT_014e4ff0._14_1_);
      auVar19[0xf] = -(pbVar15[0x19] == DAT_014e4ff0._15_1_);
      auVar19 = auVar19 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar12 == *(byte **)(uStack_1e8 + 0x58)) {
LAB_0eba7499:
    if (iStack_1c0 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0eba7509;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      auStack_3a8._0_8_ = func_0x048b0c90(lVar14,lVar7,uStack_1bc,1);
      if (auStack_3a8._0_8_ == 0) {
        auStack_3a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_3a8);
        if (auStack_3a8._0_8_ == 0) goto LAB_0eba7509;
      }
      if ((*(int *)(auStack_3a8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_3a8._0_8_ + 0x58) != 0)) {
        lVar7 = *(long *)(auStack_3a8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eba7509:
        lVar7 = 0;
      }
    }
    plStack_288 = (long *)&UNK_0488e0b0;
    pcStack_280 = (code *)0x0;
    uStack_278 = CONCAT35(uStack_278._5_3_,0x48b5725f);
    plStack_298 = (long *)0x0;
    auStack_3a8 = (undefined1  [16])0x0;
    uStack_390 = (code *)&UNK_0488e0b0;
    pcStack_388 = (code *)0x0;
    uStack_380 = (undefined *)CONCAT35(uStack_380._5_3_,0x48b5725f);
    puStack_2c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_2c8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_2d8 = 0x21;
    plStack_2d0 = (long *)0x1a;
    *(ulong *)((long)puStack_2c8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_2c8 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_2c8 = _DAT_013bbacd;
    puStack_2c8[1] = uVar3;
    *(undefined1 *)((long)puStack_2c8 + 0x1a) = 0;
    lVar7 = func_0x048b5060(lVar7,&uStack_2d8);
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if ((undefined1 *)(lVar7 + 0x20) == auStack_3a8) {
      pcVar8 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar7 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar7 + 0x28);
        (**(code **)(lVar7 + 0x40))(puVar16);
        if (uStack_380._4_1_ != '\0') {
          if (uStack_380._4_1_ == '\x02') {
            (*uStack_390)(5,auStack_3a8 + 8,puVar16);
          }
          else {
            uVar3 = auStack_3a8._8_8_;
            auStack_3a8._8_8_ = 0;
            *puVar16 = uVar3;
          }
        }
      }
      *(code **)(lVar7 + 0x38) = uStack_390;
      *(code **)(lVar7 + 0x40) = pcStack_388;
      *(undefined4 *)(lVar7 + 0x48) = (undefined4)uStack_380;
      *(char *)(lVar7 + 0x4c) = uStack_380._4_1_;
      pcVar8 = pcStack_388;
    }
    if ((uStack_2d8 & 1) != 0) {
      func_0x0412a280(puStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
      pcVar8 = pcStack_388;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_3a8 + 8);
    }
    if (pcStack_280 != (code *)0x0) {
      (*pcStack_280)(&plStack_298);
    }
  }
  else {
    iVar5 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0eba7499;
  }
  uStack_1f8 = CONCAT71(uStack_1b7,cStack_1b8);
  uStack_188 = uStack_1c8;
  uStack_198 = uStack_1d8;
  uStack_190 = uStack_1d0;
  uStack_1a8 = uStack_1e8;
  plStack_1a0 = plStack_1e0;
  uStack_208 = uStack_1c8;
  uStack_228 = uStack_1e8;
  plStack_220 = plStack_1e0;
  uStack_218 = uStack_1d8;
  uStack_210 = uStack_1d0;
  uStack_200 = 0x1e1bc4d500000004;
  if ((DAT_0f6e8140 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e8140), iVar5 != 0)) {
    func_0x0c4deca0(0xf6e8128);
    FUN_0410844d(&DAT_0f6e8140);
  }
  auStack_3a8._0_4_ = uStack_200._4_4_;
  auStack_3a8._8_8_ = 0;
  uStack_398 = (long *)((ulong)uStack_398._4_4_ << 0x20);
  uStack_390 = (code *)0x1;
  pcStack_388 = (code *)&SUB_048aead0;
  uStack_380 = &UNK_0c08fe50;
  puStack_378 = &UNK_0ec91c20;
  uStack_370 = 0;
  uStack_368 = (ulong)uStack_368._4_4_ << 0x20;
  lStack_360 = 0;
  lStack_358 = 0;
  func_0x049057f0(&plStack_220,auStack_3a8);
  func_0x048aea50(auStack_3a8);
  plStack_288 = (long *)uStack_210;
  pcStack_280 = (code *)uStack_208;
  plStack_298 = plStack_220;
  plStack_290 = (long *)uStack_218;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f34f260;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  auStack_3a8._0_4_ = _DAT_0f551bb4;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plVar9[3] = (long)puVar16;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  auStack_3a8._8_8_ = plVar9 + 3;
  uStack_2d8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_398 = plVar9;
  func_0x048afd20(&plStack_298,auStack_3a8);
  plVar9 = uStack_398;
  if (uStack_398 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_398 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_398 + 0x10))(uStack_398);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_2d0;
  if (plStack_2d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2d0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      func_0x0412c2d0(plVar9);
    }
  }
  uStack_2d8 = uStack_228;
  plStack_2d0 = plStack_220;
  puStack_2c8 = (undefined8 *)uStack_218;
  uStack_2c0 = uStack_210;
  uStack_2b8 = uStack_208;
  uStack_2b0 = uStack_200;
  uStack_2a8 = uStack_1f8;
  func_0x0ec918c0(auStack_3a8,uStack_228 + 0x18);
  if (uStack_390._4_4_ == 2) {
    piVar10 = *(int **)(uStack_398[0xf] + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_390) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    lVar7 = *(long *)(piVar10 + 0xc);
    while (lVar7 != auStack_3a8._8_8_) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar7 = *(long *)(piVar10 + 0xc);
    }
LAB_0eba797f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_390._4_4_ == 1) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_390) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0eba797f;
    }
    if (uStack_390._4_4_ == 0) {
      *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
    }
  }
  if ((DAT_0f6e8140 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e8140), iVar5 != 0)) {
    func_0x0c4deca0(0xf6e8128);
    FUN_0410844d(&DAT_0f6e8140);
  }
  uStack_2b0 = 0x425ed3ca00000001;
  lVar7 = uStack_2d8 + 0x18;
  auStack_3a8._0_8_ = func_0x0c4ded10(lVar7);
  auStack_3a8._8_8_ = lVar7;
  func_0x0ed621a0(auStack_3a8,uStack_2b0._4_4_);
  auStack_3a8._0_2_ = 0x10;
  auStack_3a8._8_8_ = &plStack_2d0;
  uStack_398 = (long *)CONCAT44(uStack_398._4_4_,uStack_2b0._4_4_);
  uStack_390 = (code *)0x0;
  pcStack_388 = (code *)0x0;
  uStack_380 = (undefined *)0x0;
  puStack_378 = (undefined *)0x0;
  uStack_370 = 0;
  uStack_368 = CONCAT17(uStack_368._7_1_,0x65756c61760a);
  lStack_350 = 0;
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  uStack_320 = 0x3f600000;
  FUN_048afb10(&lStack_350,8);
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_2e8 = 0xff00;
  uStack_2e4 = uStack_2e4 & 0xffffff00;
  uStack_2e0 = uStack_2e0 & 0xffffff00;
  uStack_2dc = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f34f260;
  if (uStack_390 != (code *)0x0) {
    lVar7 = *(long *)uStack_390;
    uStack_390 = (code *)puVar16;
    (**(code **)(lVar7 + 8))();
    puVar16 = (undefined8 *)uStack_390;
  }
  uStack_390 = (code *)puVar16;
  plStack_298 = (long *)CONCAT44(plStack_298._4_4_,(undefined4)uStack_398);
  plStack_290 = (long *)0x0;
  plStack_288 = (long *)((ulong)plStack_288 & 0xffffffff00000000);
  pcStack_280 = (code *)0x1;
  uStack_278 = 0;
  puStack_270 = &UNK_0c0937d0;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_0c090050;
  puStack_258 = &UNK_0ec91e10;
  puStack_250 = &UNK_0ec91f70;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  func_0x048b05a0(auStack_3a8._8_8_,&plStack_298);
  plVar9 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_238 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar3 = auStack_3a8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  plStack_298 = (long *)CONCAT44(plStack_298._4_4_,_DAT_0f550a0c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  pcVar8 = pcStack_388;
  puVar16 = (undefined8 *)uStack_390;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_290 = plVar9 + 3;
  uStack_390 = (code *)0x0;
  pcStack_388 = (code *)0x0;
  plVar9[3] = (long)puVar16;
  plVar9[4] = (long)pcVar8;
  plVar9[7] = uStack_370;
  plVar9[5] = (long)uStack_380;
  plVar9[6] = (long)puStack_378;
  uStack_380 = (undefined *)0x0;
  puStack_378 = (undefined *)0x0;
  uStack_370 = 0;
  plVar9[10] = lStack_358;
  plVar9[8] = uStack_368;
  plVar9[9] = lStack_360;
  uStack_368 = 0;
  lStack_360 = 0;
  lStack_358 = 0;
  plVar9[0xb] = lStack_350;
  plVar9[0xc] = lStack_348;
  plVar9[0xd] = lStack_340;
  lStack_350 = 0;
  lStack_348 = 0;
  lStack_340 = 0;
  plVar9[0xe] = lStack_338;
  plVar9[0xf] = lStack_330;
  plVar9[0x10] = lStack_328;
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_320;
  plVar9[0x12] = lStack_318;
  plVar9[0x13] = lStack_310;
  plVar9[0x14] = lStack_308;
  lStack_318 = 0;
  lStack_310 = 0;
  lStack_308 = 0;
  plVar9[0x17] = lStack_2f0;
  plVar9[0x15] = lStack_300;
  plVar9[0x16] = lStack_2f8;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_2dc,CONCAT43(uStack_2e0,uStack_2e4._1_3_));
  plVar9[0x18] = CONCAT44(uStack_2e4,CONCAT22(uStack_2e6,uStack_2e8));
  uStack_168 = 0;
  plStack_160 = (long *)0x0;
  plStack_288 = plVar9;
  func_0x048afd20(uVar3,&plStack_298);
  plVar9 = plStack_288;
  if (plStack_288 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_288 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_160;
  if (plStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_160 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar7 = *(long *)(uVar3 + 0x10);
  iVar5 = *(int *)(uVar3 + 0x1c);
  if (iVar5 == 2) {
    piVar10 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != *(int *)(uVar3 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(uVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | auStack_3a8._0_4_ << 0x10;
      }
      goto LAB_0eba7e8d;
    }
    piVar10 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
    iVar5 = *piVar10;
    while (iVar5 != *(int *)(uVar3 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar5 = *piVar10;
    }
  }
  piVar10[4] = piVar10[4] | auStack_3a8._0_4_ << 0x10;
LAB_0eba7e8d:
  func_0x048b0bc0(&uStack_390);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
