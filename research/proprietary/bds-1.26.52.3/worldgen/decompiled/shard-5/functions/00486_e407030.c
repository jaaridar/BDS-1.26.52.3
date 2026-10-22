/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe507030 (ELF vaddr 0xe407030)
 * Label: callee2-of:0xe3db7a0
 * Body:  [[0e507030, 0e507231] [0e507240, 0e5087e1]]
 * Ghidra: FUN_0e507030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e507030(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  byte *pbVar9;
  code *pcVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  code *pcStack_538;
  undefined8 uStack_530;
  undefined *puStack_528;
  undefined1 *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined4 uStack_500;
  undefined8 uStack_4f8;
  long *plStack_4f0;
  undefined1 auStack_4e8 [16];
  undefined4 uStack_4d8;
  code *pcStack_4d0;
  code *pcStack_4c8;
  undefined4 uStack_4c0;
  char cStack_4bc;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  int iStack_3b8;
  undefined4 uStack_3b4;
  char cStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  char cStack_378;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char cStack_1b8;
  undefined7 uStack_1b7;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
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
  
  func_0x0e506840();
  if ((DAT_0f759ea0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f759ea0), iVar6 != 0)) {
    func_0x0e5f88e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f759e20,0xf53dab8);
    FUN_0410844d(&DAT_0f759ea0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f759e20 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0e5070b0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f759e20 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e5070b0:
    puVar8 = &DAT_0f759e20;
    if (iRam000000000f759e80 != -0x2b3da790) goto LAB_0e50711d;
LAB_0e5070db:
    lVar16 = *(long *)(puVar8 + 0x68);
    if (lVar16 == 0) goto LAB_0e50711d;
    bVar18 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar14 = lVar16 + 9;
    if (bVar18) {
      lVar14 = *(long *)(lVar16 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar18) {
      uVar12 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e5f8e80(&uStack_3e0,param_1,lVar14,uVar12);
    uVar12 = uStack_3e0;
  }
  else {
    puVar8 = (undefined *)plVar13[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e5070db;
LAB_0e50711d:
    func_0x0e5f8e80(&uStack_3e0,param_1,&UNK_013c0312,0x10);
    uVar12 = uStack_3e0;
  }
  if (cStack_3b0 != '\0') {
    return;
  }
  uStack_3e0 = uVar12;
  if ((DAT_0f759ea0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f759ea0), iVar6 != 0)) {
    func_0x0e5f88e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f759e20,0xf53dab8);
    FUN_0410844d(&DAT_0f759ea0);
  }
  plVar13 = (long *)(*(long *)(uVar12 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f759e20 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0e5071b0;
    plVar13 = (long *)(*(long *)(uVar12 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f759e20 + 4));
  if (plVar13 == *(long **)(uVar12 + 0x38)) {
LAB_0e5071b0:
    puVar8 = &DAT_0f759e20;
  }
  else {
    puVar8 = (undefined *)plVar13[2];
  }
  for (pbVar9 = *(byte **)(uStack_3e0 + 0x50); pbVar9 != *(byte **)(uStack_3e0 + 0x58);
      pbVar9 = pbVar9 + 0x38) {
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e50724a;
    }
    else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e50724a:
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
  if (pbVar9 != *(byte **)(uStack_3e0 + 0x58)) {
    iVar6 = *(int *)(pbVar9 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar6 != _DAT_0f550ac4) goto LAB_0e5074b9;
  }
  uVar5 = uStack_3b4;
  if (iStack_3b8 == 0) {
    if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e507300;
    lVar16 = *(long *)(puVar8 + 0x68) + 0x38;
  }
  else {
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)func_0x048aead0(uVar12 + 0x18);
    }
    auStack_4e8._0_8_ = func_0x048b0c90(uVar12 + 0x18,puVar8,uVar5,1);
    if (auStack_4e8._0_8_ == 0) {
      auStack_4e8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_4e8);
      if (auStack_4e8._0_8_ == 0) goto LAB_0e507300;
    }
    if ((*(int *)(auStack_4e8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_4e8._0_8_ + 0x58) != 0)) {
      lVar16 = *(long *)(auStack_4e8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e507300:
      lVar16 = 0;
    }
  }
  puStack_540 = &UNK_0488e0b0;
  pcStack_538 = (code *)0x0;
  uStack_530 = CONCAT35(uStack_530._5_3_,0x48b5725f);
  uStack_550 = 0;
  auStack_4e8 = (undefined1  [16])0x0;
  pcStack_4d0 = (code *)&UNK_0488e0b0;
  pcStack_4c8 = (code *)0x0;
  uStack_4c0 = 0x48b5725f;
  cStack_4bc = '\0';
  puStack_408 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_408 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013bbadf;
  uStack_418 = 0x21;
  uStack_410 = 0x1a;
  *(ulong *)((long)puStack_408 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puStack_408 + 0x12) = uVar4;
  uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puStack_408 = _DAT_013bbacd;
  puStack_408[1] = uVar4;
  *(undefined1 *)((long)puStack_408 + 0x1a) = 0;
  lVar16 = func_0x048b5060(lVar16,&uStack_418);
  *(undefined8 *)(lVar16 + 0x20) = 0;
  if ((undefined1 *)(lVar16 + 0x20) == auStack_4e8) {
    pcVar10 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar16 + 0x40) != (code *)0x0) {
      puVar17 = (undefined8 *)(lVar16 + 0x28);
      (**(code **)(lVar16 + 0x40))(puVar17);
      if (cStack_4bc != '\0') {
        if (cStack_4bc == '\x02') {
          (*pcStack_4d0)(5,auStack_4e8 + 8,puVar17);
        }
        else {
          uVar4 = auStack_4e8._8_8_;
          auStack_4e8._8_8_ = 0;
          *puVar17 = uVar4;
        }
      }
    }
    *(code **)(lVar16 + 0x38) = pcStack_4d0;
    *(code **)(lVar16 + 0x40) = pcStack_4c8;
    *(undefined4 *)(lVar16 + 0x48) = uStack_4c0;
    *(char *)(lVar16 + 0x4c) = cStack_4bc;
    pcVar10 = pcStack_4c8;
  }
  if ((uStack_418 & 1) != 0) {
    func_0x0412a280(puStack_408,uStack_418 & 0xfffffffffffffffe);
    pcVar10 = pcStack_4c8;
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(auStack_4e8 + 8);
  }
  if (pcStack_538 != (code *)0x0) {
    (*pcStack_538)(&uStack_550);
  }
LAB_0e5074b9:
  cStack_378 = cStack_3b0;
  uStack_380 = CONCAT44(uStack_3b4,iStack_3b8);
  uStack_48 = uStack_3c0;
  uStack_58 = uStack_3d0;
  uStack_50 = uStack_3c8;
  uStack_68 = uStack_3e0;
  uStack_60 = uStack_3d8;
  uStack_3a8 = uStack_3e0;
  uStack_3a0 = uStack_3d8;
  uStack_398 = uStack_3d0;
  uStack_390 = uStack_3c8;
  uStack_388 = uStack_3c0;
  func_0x0e5f99f0(auStack_4e8,&uStack_3a8,&UNK_014d74e7,6);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fa8d0;
  puStack_508 = &UNK_0e5fa920;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  cStack_1b8 = cStack_378;
  uStack_1c8 = uStack_388;
  uStack_1c0 = uStack_380;
  uStack_1d8 = uStack_398;
  uStack_1d0 = uStack_390;
  uStack_1e8 = uStack_3a8;
  uStack_1e0 = uStack_3a0;
  func_0x048b0bc0(&pcStack_4d0);
  uStack_368 = uStack_1e8;
  uStack_360 = uStack_1e0;
  uStack_358 = uStack_1d8;
  uStack_350 = uStack_1d0;
  uStack_348 = uStack_1c8;
  uStack_340 = uStack_1c0;
  uStack_338 = CONCAT71(uStack_1b7,cStack_1b8);
  func_0x0e5f99f0(auStack_4e8,&uStack_368,&UNK_014abe75,3);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fb1c0;
  puStack_508 = &UNK_0e5fb210;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  uStack_178 = (undefined1)uStack_338;
  uStack_188 = uStack_348;
  uStack_180 = uStack_340;
  uStack_198 = uStack_358;
  uStack_190 = uStack_350;
  uStack_1a8 = uStack_368;
  uStack_1a0 = uStack_360;
  func_0x048b0bc0(&pcStack_4d0);
  uStack_328 = uStack_1a8;
  uStack_320 = uStack_1a0;
  uStack_318 = uStack_198;
  uStack_310 = uStack_190;
  uStack_308 = uStack_188;
  uStack_300 = uStack_180;
  uStack_2f8 = CONCAT71(uStack_177,uStack_178);
  func_0x0e5f99f0(auStack_4e8,&uStack_328,&UNK_0125cee5,3);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fb660;
  puStack_508 = &UNK_0e5fb6b0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  uStack_138 = (undefined1)uStack_2f8;
  uStack_148 = uStack_308;
  uStack_140 = uStack_300;
  uStack_158 = uStack_318;
  uStack_150 = uStack_310;
  uStack_168 = uStack_328;
  uStack_160 = uStack_320;
  func_0x048b0bc0(&pcStack_4d0);
  uStack_2e8 = uStack_168;
  uStack_2e0 = uStack_160;
  uStack_2d8 = uStack_158;
  uStack_2d0 = uStack_150;
  uStack_2c8 = uStack_148;
  uStack_2c0 = uStack_140;
  uStack_2b8 = CONCAT71(uStack_137,uStack_138);
  func_0x0e5f99f0(auStack_4e8,&uStack_2e8,&UNK_0127ee67,6);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fbb00;
  puStack_508 = &UNK_0e5fbb50;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  uStack_f8 = (undefined1)uStack_2b8;
  uStack_108 = uStack_2c8;
  uStack_100 = uStack_2c0;
  uStack_118 = uStack_2d8;
  uStack_110 = uStack_2d0;
  uStack_128 = uStack_2e8;
  uStack_120 = uStack_2e0;
  func_0x048b0bc0(&pcStack_4d0);
  uStack_2a8 = uStack_128;
  uStack_2a0 = uStack_120;
  uStack_298 = uStack_118;
  uStack_290 = uStack_110;
  uStack_288 = uStack_108;
  uStack_280 = uStack_100;
  uStack_278 = CONCAT71(uStack_f7,uStack_f8);
  func_0x0e5f99f0(auStack_4e8,&uStack_2a8,&UNK_01288a83,3);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fbfd0;
  puStack_508 = &UNK_0e5fc020;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  uStack_b8 = (undefined1)uStack_278;
  uStack_c8 = uStack_288;
  uStack_c0 = uStack_280;
  uStack_d8 = uStack_298;
  uStack_d0 = uStack_290;
  uStack_e8 = uStack_2a8;
  uStack_e0 = uStack_2a0;
  func_0x048b0bc0(&pcStack_4d0);
  uStack_268 = uStack_e8;
  uStack_260 = uStack_e0;
  uStack_258 = uStack_d8;
  uStack_250 = uStack_d0;
  uStack_248 = uStack_c8;
  uStack_240 = uStack_c0;
  uStack_238 = CONCAT71(uStack_b7,uStack_b8);
  func_0x0e5f99f0(auStack_4e8,&uStack_268,&UNK_0137b4c3,2);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fc4a0;
  puStack_508 = &UNK_0e5fc4f0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  uStack_78 = (undefined1)uStack_238;
  uStack_88 = uStack_248;
  uStack_80 = uStack_240;
  uStack_98 = uStack_258;
  uStack_90 = uStack_250;
  uStack_a8 = uStack_268;
  uStack_a0 = uStack_260;
  func_0x048b0bc0(&pcStack_4d0);
  uStack_228 = uStack_a8;
  uStack_220 = uStack_a0;
  uStack_218 = uStack_98;
  uStack_210 = uStack_90;
  uStack_208 = uStack_88;
  uStack_200 = uStack_80;
  uStack_1f8 = CONCAT71(uStack_77,uStack_78);
  func_0x0e5f99f0(auStack_4e8,&uStack_228,&UNK_0143b78b,7);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fc960;
  puStack_508 = &UNK_0e5fc9b0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  uStack_3e8 = (undefined1)uStack_1f8;
  uStack_3f8 = uStack_208;
  uStack_3f0 = uStack_200;
  puStack_408 = (undefined8 *)uStack_218;
  uStack_400 = uStack_210;
  uStack_418 = uStack_228;
  uStack_410 = uStack_220;
  func_0x048b0bc0(&pcStack_4d0);
  func_0x0e5f99f0(auStack_4e8,&uStack_418,&UNK_012fdbf2,3);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4c2458;
  if (pcStack_4d0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_4d0;
    pcStack_4d0 = pcVar10;
    (**(code **)(lVar16 + 8))();
    pcVar10 = pcStack_4d0;
  }
  pcStack_4d0 = pcVar10;
  uStack_550 = CONCAT44(uStack_550._4_4_,uStack_4d8);
  uStack_548 = 0;
  puStack_540 = (undefined *)((ulong)puStack_540 & 0xffffffff00000000);
  pcStack_538 = (code *)0x1;
  uStack_530 = 0;
  puStack_528 = &UNK_0e5fa810;
  puStack_520 = &SUB_048b06d0;
  puStack_518 = &UNK_0e5f0770;
  puStack_510 = &UNK_0e5fce20;
  puStack_508 = &UNK_0e5fce70;
  uStack_500 = 0;
  uStack_4f8 = 0;
  plStack_4f0 = (long *)0x0;
  func_0x048b05a0(auStack_4e8._8_8_,&uStack_550);
  plVar13 = plStack_4f0;
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      func_0x0412c2d0(plVar13);
    }
  }
  iVar6 = *(int *)(auStack_4e8._8_8_ + 0x1c);
  if (iVar6 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar16 = *(long *)(piVar11 + 0xc);
    while (lVar16 != *(long *)(auStack_4e8._8_8_ + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar16 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x78) + 0x48);
    iVar6 = *piVar11;
    while (iVar6 != *(int *)(auStack_4e8._8_8_ + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar6 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar6 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_4e8._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e5f9fd0(auStack_4e8);
  func_0x048b0bc0(&pcStack_4d0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
