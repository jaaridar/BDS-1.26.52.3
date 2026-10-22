/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5003f0 (ELF vaddr 0xe4003f0)
 * Label: callee-of:0xe401380
 * Body:  [[0e5003f0, 0e5005f1] [0e500600, 0e501306]]
 * Ghidra: FUN_0e5003f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e5003f0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  byte *pbVar9;
  code *pcVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined1 *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined4 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  undefined1 auStack_328 [16];
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined4 uStack_300;
  char cStack_2fc;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  int iStack_1f8;
  undefined4 uStack_1f4;
  char cStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char cStack_1b8;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0e5118a0();
  if ((DAT_0f7561a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7561a0), iVar6 != 0)) {
    func_0x0e560c10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f756120,0xf53dab8);
    FUN_0410844d(&DAT_0f7561a0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f756120 + 4)) * 8);
  do {
    lVar16 = *plVar11;
    if (lVar16 == -1) goto LAB_0e500470;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f756120 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e500470:
    puVar8 = &DAT_0f756120;
    if (iRam000000000f756180 != -0x2b3da790) goto LAB_0e5004dd;
LAB_0e50049b:
    lVar16 = *(long *)(puVar8 + 0x68);
    if (lVar16 == 0) goto LAB_0e5004dd;
    bVar18 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar14 = lVar16 + 9;
    if (bVar18) {
      lVar14 = *(long *)(lVar16 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e6c2ed0(&uStack_220,param_1,lVar14,uVar13);
    uVar13 = uStack_220;
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e50049b;
LAB_0e5004dd:
    func_0x0e6c2ed0(&uStack_220,param_1,&UNK_014dedb7,0xe);
    uVar13 = uStack_220;
  }
  if (cStack_1f0 != '\0') {
    return;
  }
  uStack_220 = uVar13;
  if ((DAT_0f7561a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7561a0), iVar6 != 0)) {
    func_0x0e560c10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f756120,0xf53dab8);
    FUN_0410844d(&DAT_0f7561a0);
  }
  plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f756120 + 4)) * 8);
  do {
    lVar16 = *plVar11;
    if (lVar16 == -1) goto LAB_0e500570;
    plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f756120 + 4));
  if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e500570:
    puVar8 = &DAT_0f756120;
  }
  else {
    puVar8 = (undefined *)plVar11[2];
  }
  for (pbVar9 = *(byte **)(uStack_220 + 0x50); pbVar9 != *(byte **)(uStack_220 + 0x58);
      pbVar9 = pbVar9 + 0x38) {
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e50060a;
    }
    else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e50060a:
      if ((bVar3 & 1) == 0) {
        pbVar15 = pbVar9 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar9 + 0x10);
      }
      auVar19[0] = -(*pbVar15 == DAT_014eaba0);
      auVar19[1] = -(pbVar15[1] == DAT_014eaba0._1_1_);
      auVar19[2] = -(pbVar15[2] == DAT_014eaba0._2_1_);
      auVar19[3] = -(pbVar15[3] == DAT_014eaba0._3_1_);
      auVar19[4] = -(pbVar15[4] == DAT_014eaba0._4_1_);
      auVar19[5] = -(pbVar15[5] == DAT_014eaba0._5_1_);
      auVar19[6] = -(pbVar15[6] == DAT_014eaba0._6_1_);
      auVar19[7] = -(pbVar15[7] == DAT_014eaba0._7_1_);
      auVar19[8] = -(pbVar15[8] == DAT_014eaba0._8_1_);
      auVar19[9] = -(pbVar15[9] == DAT_014eaba0._9_1_);
      auVar19[10] = -(pbVar15[10] == DAT_014eaba0._10_1_);
      auVar19[0xb] = -(pbVar15[0xb] == DAT_014eaba0._11_1_);
      auVar19[0xc] = -(pbVar15[0xc] == DAT_014eaba0._12_1_);
      auVar19[0xd] = -(pbVar15[0xd] == DAT_014eaba0._13_1_);
      auVar19[0xe] = -(pbVar15[0xe] == DAT_014eaba0._14_1_);
      auVar19[0xf] = -(pbVar15[0xf] == DAT_014eaba0._15_1_);
      auVar20[0] = -(pbVar15[10] == DAT_014e4ff0);
      auVar20[1] = -(pbVar15[0xb] == DAT_014e4ff0._1_1_);
      auVar20[2] = -(pbVar15[0xc] == DAT_014e4ff0._2_1_);
      auVar20[3] = -(pbVar15[0xd] == DAT_014e4ff0._3_1_);
      auVar20[4] = -(pbVar15[0xe] == DAT_014e4ff0._4_1_);
      auVar20[5] = -(pbVar15[0xf] == DAT_014e4ff0._5_1_);
      auVar20[6] = -(pbVar15[0x10] == DAT_014e4ff0._6_1_);
      auVar20[7] = -(pbVar15[0x11] == DAT_014e4ff0._7_1_);
      auVar20[8] = -(pbVar15[0x12] == DAT_014e4ff0._8_1_);
      auVar20[9] = -(pbVar15[0x13] == DAT_014e4ff0._9_1_);
      auVar20[10] = -(pbVar15[0x14] == DAT_014e4ff0._10_1_);
      auVar20[0xb] = -(pbVar15[0x15] == DAT_014e4ff0._11_1_);
      auVar20[0xc] = -(pbVar15[0x16] == DAT_014e4ff0._12_1_);
      auVar20[0xd] = -(pbVar15[0x17] == DAT_014e4ff0._13_1_);
      auVar20[0xe] = -(pbVar15[0x18] == DAT_014e4ff0._14_1_);
      auVar20[0xf] = -(pbVar15[0x19] == DAT_014e4ff0._15_1_);
      auVar20 = auVar20 & auVar19;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar9 == *(byte **)(uStack_220 + 0x58)) {
LAB_0e500638:
    uVar5 = uStack_1f4;
    if (iStack_1f8 == 0) {
      if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e5006c0;
      lVar16 = *(long *)(puVar8 + 0x68) + 0x38;
    }
    else {
      if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)func_0x048aead0(uVar13 + 0x18);
      }
      auStack_328._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar8,uVar5,1);
      if (auStack_328._0_8_ == 0) {
        auStack_328 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_328);
        if (auStack_328._0_8_ == 0) goto LAB_0e5006c0;
      }
      if ((*(int *)(auStack_328._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_328._0_8_ + 0x58) != 0)) {
        lVar16 = *(long *)(auStack_328._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e5006c0:
        lVar16 = 0;
      }
    }
    puStack_380 = &UNK_0488e0b0;
    pcStack_378 = (code *)0x0;
    uStack_370 = CONCAT35(uStack_370._5_3_,0x48b5725f);
    uStack_390 = 0;
    auStack_328 = (undefined1  [16])0x0;
    uStack_310 = (code *)&UNK_0488e0b0;
    pcStack_308 = (code *)0x0;
    uStack_300 = 0x48b5725f;
    cStack_2fc = '\0';
    puStack_248 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_248 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_258 = 0x21;
    uStack_250 = 0x1a;
    *(ulong *)((long)puStack_248 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_248 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_248 = _DAT_013bbacd;
    puStack_248[1] = uVar4;
    *(undefined1 *)((long)puStack_248 + 0x1a) = 0;
    lVar16 = func_0x048b5060(lVar16,&uStack_258);
    *(undefined8 *)(lVar16 + 0x20) = 0;
    if ((undefined1 *)(lVar16 + 0x20) == auStack_328) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar16 + 0x40) != (code *)0x0) {
        puVar17 = (undefined8 *)(lVar16 + 0x28);
        (**(code **)(lVar16 + 0x40))(puVar17);
        if (cStack_2fc != '\0') {
          if (cStack_2fc == '\x02') {
            (*uStack_310)(5,auStack_328 + 8,puVar17);
          }
          else {
            uVar4 = auStack_328._8_8_;
            auStack_328._8_8_ = 0;
            *puVar17 = uVar4;
          }
        }
      }
      *(code **)(lVar16 + 0x38) = uStack_310;
      *(code **)(lVar16 + 0x40) = pcStack_308;
      *(undefined4 *)(lVar16 + 0x48) = uStack_300;
      *(char *)(lVar16 + 0x4c) = cStack_2fc;
      pcVar10 = pcStack_308;
    }
    if ((uStack_258 & 1) != 0) {
      func_0x0412a280(puStack_248,uStack_258 & 0xfffffffffffffffe);
      pcVar10 = pcStack_308;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_328 + 8);
    }
    if (pcStack_378 != (code *)0x0) {
      (*pcStack_378)(&uStack_390);
    }
  }
  else {
    iVar6 = *(int *)(pbVar9 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0e500638;
  }
  cStack_1b8 = cStack_1f0;
  uStack_1c0 = CONCAT44(uStack_1f4,iStack_1f8);
  uStack_48 = uStack_200;
  uStack_58 = uStack_210;
  uStack_50 = uStack_208;
  uStack_68 = uStack_220;
  uStack_60 = uStack_218;
  uStack_1e8 = uStack_220;
  uStack_1e0 = uStack_218;
  uStack_1d8 = uStack_210;
  uStack_1d0 = uStack_208;
  uStack_1c8 = uStack_200;
  func_0x0e6c34c0(auStack_328,uStack_220 + 0x18);
  if (uStack_310._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_310) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar16 = *(long *)(piVar12 + 0xc);
    while (lVar16 != auStack_328._8_8_) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar16 = *(long *)(piVar12 + 0xc);
    }
LAB_0e50094f:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
  }
  else {
    if (uStack_310._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_310) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0e50094f;
    }
    if (uStack_310._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_314,uStack_318) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e6c3a80(auStack_328,&uStack_1e8,&UNK_014c397c,0xf,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4c64a8;
  if (uStack_310 != (code *)0x0) {
    lVar16 = *(long *)uStack_310;
    uStack_310 = (code *)plVar11;
    (**(code **)(lVar16 + 8))();
    plVar11 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar11;
  uStack_390 = CONCAT44(uStack_390._4_4_,uStack_318);
  uStack_388 = 0;
  puStack_380 = (undefined *)((ulong)puStack_380 & 0xffffffff00000000);
  pcStack_378 = (code *)0x1;
  uStack_370 = 0;
  puStack_368 = &UNK_0e6c4040;
  puStack_360 = &SUB_048b06d0;
  puStack_358 = &UNK_0e6b1d90;
  puStack_350 = &UNK_0e6c4100;
  puStack_348 = &UNK_0e6c4340;
  uStack_340 = 0;
  uStack_338 = 0;
  plStack_330 = (long *)0x0;
  func_0x048b05a0(auStack_328._8_8_,&uStack_390);
  plVar11 = plStack_330;
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_330 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e6c3d40(auStack_328);
  cStack_b8 = cStack_1b8;
  uStack_c8 = uStack_1c8;
  uStack_c0 = uStack_1c0;
  uStack_d8 = uStack_1d8;
  uStack_d0 = uStack_1d0;
  uStack_e8 = uStack_1e8;
  uStack_e0 = uStack_1e0;
  func_0x048b0bc0(&uStack_310);
  uStack_1a8 = uStack_e8;
  uStack_1a0 = uStack_e0;
  uStack_198 = uStack_d8;
  uStack_190 = uStack_d0;
  uStack_188 = uStack_c8;
  uStack_180 = uStack_c0;
  uStack_178 = CONCAT71(uStack_b7,cStack_b8);
  func_0x0e6c34c0(auStack_328,uStack_e8 + 0x18);
  if (uStack_310._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_310) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    lVar16 = *(long *)(piVar12 + 0xc);
    while (lVar16 != auStack_328._8_8_) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar16 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_310._4_4_ != 1) {
      if (uStack_310._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_314,uStack_318) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0e500bd3;
    }
    piVar12 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x48);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_310) {
      piVar12 = piVar12 + 0x1a;
      iVar6 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
LAB_0e500bd3:
  func_0x0e6c3a80(auStack_328,&uStack_1a8,&UNK_0129f366,0x12,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4c64a8;
  if (uStack_310 != (code *)0x0) {
    lVar16 = *(long *)uStack_310;
    uStack_310 = (code *)plVar11;
    (**(code **)(lVar16 + 8))();
    plVar11 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar11;
  uStack_390 = CONCAT44(uStack_390._4_4_,uStack_318);
  uStack_388 = 0;
  puStack_380 = (undefined *)((ulong)puStack_380 & 0xffffffff00000000);
  pcStack_378 = (code *)0x1;
  uStack_370 = 0;
  puStack_368 = &UNK_0e6c4040;
  puStack_360 = &SUB_048b06d0;
  puStack_358 = &UNK_0e6b1d90;
  puStack_350 = &UNK_0e6c47b0;
  puStack_348 = &UNK_0e6c49f0;
  uStack_340 = 0;
  uStack_338 = 0;
  plStack_330 = (long *)0x0;
  func_0x048b05a0(auStack_328._8_8_,&uStack_390);
  plVar11 = plStack_330;
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_330 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e6c3d40(auStack_328);
  uStack_78 = (undefined1)uStack_178;
  uStack_88 = uStack_188;
  uStack_80 = uStack_180;
  uStack_98 = uStack_198;
  uStack_90 = uStack_190;
  uStack_a8 = uStack_1a8;
  uStack_a0 = uStack_1a0;
  func_0x048b0bc0(&uStack_310);
  uStack_168 = uStack_a8;
  uStack_160 = uStack_a0;
  uStack_158 = uStack_98;
  uStack_150 = uStack_90;
  uStack_148 = uStack_88;
  uStack_140 = uStack_80;
  uStack_138 = CONCAT71(uStack_77,uStack_78);
  func_0x0e6c3a80(auStack_328,&uStack_168,&UNK_0142754f,0x12,0);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4c6d40;
  if (uStack_310 != (code *)0x0) {
    lVar16 = *(long *)uStack_310;
    uStack_310 = (code *)plVar11;
    (**(code **)(lVar16 + 8))();
    plVar11 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar11;
  uStack_390 = CONCAT44(uStack_390._4_4_,uStack_318);
  uStack_388 = 0;
  puStack_380 = (undefined *)((ulong)puStack_380 & 0xffffffff00000000);
  pcStack_378 = (code *)0x1;
  uStack_370 = 0;
  puStack_368 = &UNK_0e6c59f0;
  puStack_360 = &SUB_048b06d0;
  puStack_358 = &UNK_0e6c5620;
  puStack_350 = &UNK_0e6c5ab0;
  puStack_348 = &UNK_0e6c5c30;
  uStack_340 = 0;
  uStack_338 = 0;
  plStack_330 = (long *)0x0;
  func_0x048b05a0(auStack_328._8_8_,&uStack_390);
  plVar11 = plStack_330;
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_330 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e6c3d40(auStack_328);
  uStack_f8 = (undefined1)uStack_138;
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  uStack_118 = uStack_158;
  uStack_110 = uStack_150;
  uStack_128 = uStack_168;
  uStack_120 = uStack_160;
  func_0x048b0bc0(&uStack_310);
  func_0x0e6c3a80(auStack_328,&uStack_128,&UNK_01473944,0x15,0);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4c6db8;
  if (uStack_310 != (code *)0x0) {
    lVar16 = *(long *)uStack_310;
    uStack_310 = (code *)plVar11;
    (**(code **)(lVar16 + 8))();
    plVar11 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar11;
  uStack_390 = CONCAT44(uStack_390._4_4_,uStack_318);
  uStack_388 = 0;
  puStack_380 = (undefined *)((ulong)puStack_380 & 0xffffffff00000000);
  pcStack_378 = (code *)0x1;
  uStack_370 = 0;
  puStack_368 = &UNK_0e6c6fa0;
  puStack_360 = &SUB_048b06d0;
  puStack_358 = &UNK_0e6c6bd0;
  puStack_350 = &UNK_0e6c7060;
  puStack_348 = &UNK_0e6c72a0;
  uStack_340 = 0;
  uStack_338 = 0;
  plStack_330 = (long *)0x0;
  func_0x048b05a0(auStack_328._8_8_,&uStack_390);
  plVar11 = plStack_330;
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_330 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e6c3d40(auStack_328);
  uStack_228 = uStack_f8;
  uStack_238 = uStack_108;
  uStack_230 = uStack_100;
  puStack_248 = (undefined8 *)uStack_118;
  uStack_240 = uStack_110;
  uStack_258 = uStack_128;
  uStack_250 = uStack_120;
  func_0x048b0bc0(&uStack_310);
  func_0x0e6c3a80(auStack_328,&uStack_258,&UNK_01304a46,0xc,1);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f4726f8;
  if (uStack_310 != (code *)0x0) {
    lVar16 = *(long *)uStack_310;
    uStack_310 = (code *)puVar17;
    (**(code **)(lVar16 + 8))();
    puVar17 = (undefined8 *)uStack_310;
  }
  uStack_310 = (code *)puVar17;
  uStack_390 = CONCAT44(uStack_390._4_4_,uStack_318);
  uStack_388 = 0;
  puStack_380 = (undefined *)((ulong)puStack_380 & 0xffffffff00000000);
  pcStack_378 = (code *)0x1;
  uStack_370 = 0;
  puStack_368 = &UNK_0db8dd10;
  puStack_360 = &SUB_048b06d0;
  puStack_358 = &SUB_0d4858f0;
  puStack_350 = &UNK_0e6c7720;
  puStack_348 = &UNK_0e6c7950;
  uStack_340 = 0;
  uStack_338 = 0;
  plStack_330 = (long *)0x0;
  func_0x048b05a0(auStack_328._8_8_,&uStack_390);
  plVar11 = plStack_330;
  if (plStack_330 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_330 + 1;
    lVar16 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_330 + 0x10))(plStack_330);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e6c3d40(auStack_328);
  func_0x048b0bc0(&uStack_310);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
