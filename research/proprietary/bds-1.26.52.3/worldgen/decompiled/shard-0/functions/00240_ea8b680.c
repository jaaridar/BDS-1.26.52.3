/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb8b680 (ELF vaddr 0xea8b680)
 * Label: caller-of-callee
 * Body:  [[0eb8b680, 0eb8b891] [0eb8b8a0, 0eb8c72b] [0eb8c744, 0eb8c796] [0eb8c7be, 0eb8c81b]]
 * Ghidra: FUN_0eb8b680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb8b680(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined4 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 auStack_388 [16];
  undefined4 uStack_378;
  code *pcStack_370;
  code *pcStack_368;
  undefined4 uStack_360;
  char cStack_35c;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  char cStack_288;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  char cStack_248;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int iStack_210;
  undefined4 uStack_20c;
  char cStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte bStack_180;
  undefined7 uStack_17f;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_138;
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
  undefined7 uStack_b7;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0eb89800();
  if ((DAT_0f771670 == '\0') && (iVar4 = func_0x04108328(&DAT_0f771670), iVar4 != 0)) {
    func_0x0ec4e480();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7715f0,0xf53dab8);
    func_0x0410844d(&DAT_0f771670);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7715f0 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_0eb8b700;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f7715f0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eb8b700:
    puVar6 = &DAT_0f7715f0;
    if (iRam000000000f771650 != -0x2b3da790) goto LAB_0eb8b76e;
LAB_0eb8b72b:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0eb8b76e;
    bVar18 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar9 = lVar15 + 9;
    if (bVar18) {
      lVar9 = *(long *)(lVar15 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar18) {
      uVar12 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0ec4f680(&lStack_238,param_1,lVar9,uVar12);
  }
  else {
    puVar6 = (undefined *)plVar13[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0eb8b72b;
LAB_0eb8b76e:
    func_0x0ec4f680(&lStack_238,param_1,&UNK_011ff877,0xd);
  }
  if (cStack_208 != '\0') {
    return;
  }
  func_0x0d928aa0(&puStack_200);
  lVar15 = lStack_238;
  if ((DAT_0f771670 == '\0') && (iVar4 = func_0x04108328(&DAT_0f771670), iVar4 != 0)) {
    func_0x0ec4e480();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7715f0,0xf53dab8);
    func_0x0410844d(&DAT_0f771670);
  }
  plVar13 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f7715f0 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0eb8b810;
    plVar13 = (long *)(*(long *)(lVar15 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f7715f0 + 4));
  if (plVar13 == *(long **)(lVar15 + 0x38)) {
LAB_0eb8b810:
    puVar6 = &DAT_0f7715f0;
  }
  else {
    puVar6 = (undefined *)plVar13[2];
  }
  for (pbVar7 = *(byte **)(lStack_238 + 0x50); pbVar7 != *(byte **)(lStack_238 + 0x58);
      pbVar7 = pbVar7 + 0x38) {
    bVar2 = *pbVar7;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eb8b8aa;
    }
    else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0eb8b8aa:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar7 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar7 + 0x10);
      }
      auVar19[0] = -(*pbVar14 == DAT_014eaba0);
      auVar19[1] = -(pbVar14[1] == DAT_014eaba0._1_1_);
      auVar19[2] = -(pbVar14[2] == DAT_014eaba0._2_1_);
      auVar19[3] = -(pbVar14[3] == DAT_014eaba0._3_1_);
      auVar19[4] = -(pbVar14[4] == DAT_014eaba0._4_1_);
      auVar19[5] = -(pbVar14[5] == DAT_014eaba0._5_1_);
      auVar19[6] = -(pbVar14[6] == DAT_014eaba0._6_1_);
      auVar19[7] = -(pbVar14[7] == DAT_014eaba0._7_1_);
      auVar19[8] = -(pbVar14[8] == DAT_014eaba0._8_1_);
      auVar19[9] = -(pbVar14[9] == DAT_014eaba0._9_1_);
      auVar19[10] = -(pbVar14[10] == DAT_014eaba0._10_1_);
      auVar19[0xb] = -(pbVar14[0xb] == DAT_014eaba0._11_1_);
      auVar19[0xc] = -(pbVar14[0xc] == DAT_014eaba0._12_1_);
      auVar19[0xd] = -(pbVar14[0xd] == DAT_014eaba0._13_1_);
      auVar19[0xe] = -(pbVar14[0xe] == DAT_014eaba0._14_1_);
      auVar19[0xf] = -(pbVar14[0xf] == DAT_014eaba0._15_1_);
      auVar20[0] = -(pbVar14[10] == DAT_014e4ff0);
      auVar20[1] = -(pbVar14[0xb] == DAT_014e4ff0._1_1_);
      auVar20[2] = -(pbVar14[0xc] == DAT_014e4ff0._2_1_);
      auVar20[3] = -(pbVar14[0xd] == DAT_014e4ff0._3_1_);
      auVar20[4] = -(pbVar14[0xe] == DAT_014e4ff0._4_1_);
      auVar20[5] = -(pbVar14[0xf] == DAT_014e4ff0._5_1_);
      auVar20[6] = -(pbVar14[0x10] == DAT_014e4ff0._6_1_);
      auVar20[7] = -(pbVar14[0x11] == DAT_014e4ff0._7_1_);
      auVar20[8] = -(pbVar14[0x12] == DAT_014e4ff0._8_1_);
      auVar20[9] = -(pbVar14[0x13] == DAT_014e4ff0._9_1_);
      auVar20[10] = -(pbVar14[0x14] == DAT_014e4ff0._10_1_);
      auVar20[0xb] = -(pbVar14[0x15] == DAT_014e4ff0._11_1_);
      auVar20[0xc] = -(pbVar14[0x16] == DAT_014e4ff0._12_1_);
      auVar20[0xd] = -(pbVar14[0x17] == DAT_014e4ff0._13_1_);
      auVar20[0xe] = -(pbVar14[0x18] == DAT_014e4ff0._14_1_);
      auVar20[0xf] = -(pbVar14[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar7 == *(byte **)(lStack_238 + 0x58)) {
LAB_0eb8b8d8:
    uVar3 = uStack_20c;
    if (iStack_210 == 0) {
      if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0eb8b969;
      lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)func_0x048aead0(lVar15 + 0x18);
      }
      auStack_388._0_8_ = func_0x048b0c90(lVar15 + 0x18,puVar6,uVar3,1);
      if (auStack_388._0_8_ == 0) {
        auStack_388 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_388);
        if (auStack_388._0_8_ == 0) goto LAB_0eb8b969;
      }
      if ((*(int *)(auStack_388._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_388._0_8_ + 0x58) != 0)) {
        lVar15 = *(long *)(auStack_388._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eb8b969:
        lVar15 = 0;
      }
    }
    puStack_4c0 = &UNK_0488e0b0;
    pcStack_4b8 = (code *)0x0;
    uStack_4b0 = CONCAT35(uStack_4b0._5_3_,0x48b5725f);
    uStack_4d0 = 0;
    auStack_388 = (undefined1  [16])0x0;
    pcStack_370 = (code *)&UNK_0488e0b0;
    pcStack_368 = (code *)0x0;
    uStack_360 = 0x48b5725f;
    cStack_35c = '\0';
    puStack_458 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_458 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar11 = _UNK_013bbadf;
    puStack_468 = (undefined *)0x21;
    uStack_460 = 0x1a;
    *(ulong *)((long)puStack_458 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_458 + 0x12) = uVar11;
    uVar11 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_458 = _DAT_013bbacd;
    puStack_458[1] = uVar11;
    *(undefined1 *)((long)puStack_458 + 0x1a) = 0;
    lVar15 = func_0x048b5060(lVar15,&puStack_468);
    *(undefined8 *)(lVar15 + 0x20) = 0;
    if ((undefined1 *)(lVar15 + 0x20) == auStack_388) {
      pcVar8 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
        puVar17 = (undefined8 *)(lVar15 + 0x28);
        (**(code **)(lVar15 + 0x40))(puVar17);
        if (cStack_35c != '\0') {
          if (cStack_35c == '\x02') {
            (*pcStack_370)(5,auStack_388 + 8,puVar17);
          }
          else {
            uVar11 = auStack_388._8_8_;
            auStack_388._8_8_ = 0;
            *puVar17 = uVar11;
          }
        }
      }
      *(code **)(lVar15 + 0x38) = pcStack_370;
      *(code **)(lVar15 + 0x40) = pcStack_368;
      *(undefined4 *)(lVar15 + 0x48) = uStack_360;
      *(char *)(lVar15 + 0x4c) = cStack_35c;
      pcVar8 = pcStack_368;
    }
    if (((ulong)puStack_468 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
      pcVar8 = pcStack_368;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_388 + 8);
    }
    if (pcStack_4b8 != (code *)0x0) {
      (*pcStack_4b8)(&uStack_4d0);
    }
  }
  else {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0eb8b8d8;
  }
  cStack_138 = cStack_208;
  uStack_140 = CONCAT44(uStack_20c,iStack_210);
  uStack_48 = uStack_218;
  uStack_58 = uStack_228;
  uStack_50 = uStack_220;
  lStack_68 = lStack_238;
  uStack_60 = uStack_230;
  lStack_168 = lStack_238;
  uStack_160 = uStack_230;
  uStack_158 = uStack_228;
  uStack_150 = uStack_220;
  uStack_148 = uStack_218;
  func_0x0ec501e0(auStack_388,&lStack_168,&UNK_01391889,8);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f4de820;
  if (pcStack_370 != (code *)0x0) {
    lVar15 = *(long *)pcStack_370;
    pcStack_370 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_370;
  }
  pcStack_370 = pcVar8;
  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uStack_378);
  uStack_4c8 = 0;
  puStack_4c0 = (undefined *)((ulong)puStack_4c0 & 0xffffffff00000000);
  pcStack_4b8 = (code *)0x1;
  uStack_4b0 = 0;
  puStack_4a8 = &UNK_0ec4b980;
  puStack_4a0 = &SUB_048b06d0;
  puStack_498 = &UNK_0ec4b680;
  puStack_490 = &UNK_0ec50790;
  puStack_488 = &UNK_0ec508f0;
  uStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x0;
  func_0x048b05a0(auStack_388._8_8_,&uStack_4d0);
  plVar13 = plStack_470;
  if (plStack_470 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_470 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_470 + 0x10))(plStack_470);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ec50490(auStack_388);
  cStack_288 = cStack_138;
  uStack_298 = uStack_148;
  uStack_290 = uStack_140;
  uStack_2a8 = uStack_158;
  uStack_2a0 = uStack_150;
  lStack_2b8 = lStack_168;
  uStack_2b0 = uStack_160;
  FUN_048b0bc0(&pcStack_370);
  uStack_450 = 0xff;
  uStack_460 = 0xffffffffffffffff;
  puStack_458 = (undefined8 *)0x0;
  puStack_468 = &UNK_0f4e3aa0;
  lStack_448 = 0;
  lStack_440 = 0;
  lStack_438 = 0;
  lVar9 = func_0x0e2b5260(&puStack_468,&UNK_01e3fc20,5);
  uStack_418 = *(undefined1 *)(lVar9 + 0x18);
  uStack_428 = *(undefined8 *)(lVar9 + 8);
  uStack_420 = *(undefined8 *)(lVar9 + 0x10);
  lVar15 = *(long *)(lVar9 + 0x20);
  lVar9 = *(long *)(lVar9 + 0x28) - lVar15;
  if (lVar9 == 0) {
    lVar10 = 0;
    lVar16 = 0;
    if ((int)uStack_290 != 4) goto LAB_0eb8bdc1;
LAB_0eb8be18:
    lVar15 = func_0x0ec50c10(&lStack_2b8);
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
LAB_0eb8be4b:
    *(undefined1 *)(puVar17 + 3) = uStack_418;
    puVar17[1] = uStack_428;
    puVar17[2] = uStack_420;
    *puVar17 = &UNK_0f4e3aa0;
    puVar17[4] = lVar10;
    puVar17[5] = lVar16;
    puVar17[6] = lVar16;
    plVar13 = *(long **)(lVar15 + 8);
    *(undefined8 **)(lVar15 + 8) = puVar17;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x28))();
    }
    lVar10 = 0;
    lVar16 = 0;
  }
  else {
    if (lVar9 < 0) {
      uVar11 = func_0x0774b760();
      uVar11 = FUN_04882e20(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      func_0x0488e520(auStack_3e8);
      if (plVar13 != (long *)0x0) goto LAB_0eb8c770;
      while (lStack_448 == 0) {
        puStack_468 = &UNK_0f4e3aa0;
        func_0x04885660(&puStack_200);
        func_0x0eee2d70(uVar11);
LAB_0eb8c770:
        thunk_FUN_0ee326a0(plVar13,lStack_430 - (long)plVar13);
      }
      puStack_468 = &UNK_0f4e3aa0;
      lStack_440 = lStack_448;
      thunk_FUN_0ee326a0(lStack_448,lStack_438 - lStack_448);
      func_0x04885660(&puStack_200);
      uVar11 = func_0x0eee2d70(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      uVar11 = FUN_04882e20(uVar11);
      FUN_04882e20(uVar11);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
    if (lVar10 == 0) {
      func_0x0eec74c0(lVar9,0);
    }
    lVar16 = lVar10 + lVar9;
    func_0x0eee2f00(lVar10,lVar15,lVar9);
    if ((int)uStack_290 == 4) goto LAB_0eb8be18;
LAB_0eb8bdc1:
    if ((int)uStack_290 == 1) {
      lVar15 = func_0x0ec50ac0(&lStack_2b8);
      lVar15 = *(long *)(lVar15 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      goto LAB_0eb8be4b;
    }
  }
  cStack_f8 = cStack_288;
  uStack_108 = uStack_298;
  uStack_100 = uStack_290;
  uStack_118 = uStack_2a8;
  uStack_110 = uStack_2a0;
  lStack_128 = lStack_2b8;
  uStack_120 = uStack_2b0;
  func_0x0ec501e0(auStack_388,&lStack_128,&UNK_011d5876,5);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f0123c0;
  if (pcStack_370 != (code *)0x0) {
    lVar15 = *(long *)pcStack_370;
    pcStack_370 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_370;
  }
  pcStack_370 = pcVar8;
  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uStack_378);
  uStack_4c8 = 0;
  puStack_4c0 = (undefined *)((ulong)puStack_4c0 & 0xffffffff00000000);
  pcStack_4b8 = (code *)0x1;
  uStack_4b0 = 0;
  puStack_4a8 = &UNK_05e08030;
  puStack_4a0 = &SUB_048b06d0;
  puStack_498 = &SUB_05e07cf0;
  puStack_490 = &UNK_0ec50d90;
  puStack_488 = &UNK_0ec50f40;
  uStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x0;
  func_0x048b05a0(auStack_388._8_8_,&uStack_4d0);
  plVar13 = plStack_470;
  if (plStack_470 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_470 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_470 + 0x10))(plStack_470);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ec50490(auStack_388);
  cStack_248 = cStack_f8;
  uStack_258 = uStack_108;
  uStack_250 = uStack_100;
  uStack_268 = uStack_118;
  uStack_260 = uStack_110;
  lStack_278 = lStack_128;
  uStack_270 = uStack_120;
  lStack_430 = lVar16;
  FUN_048b0bc0(&pcStack_370);
  uStack_400 = uStack_1f8;
  uStack_3f8 = uStack_1f0;
  uStack_3f0 = uStack_1e8;
  puStack_408 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_3e8,auStack_1e0);
  uStack_3e0 = uStack_1d8;
  uStack_3d8 = uStack_1d0;
  uStack_3d0 = uStack_1c8;
  uStack_3c8 = uStack_1c0;
  uStack_3c0 = uStack_1b8;
  plStack_3b8 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plStack_1b0[1] = plStack_1b0[1] + 1;
    UNLOCK();
  }
  uStack_3b0 = uStack_1a8;
  if ((bStack_1a0 & 1) == 0) {
    uStack_398 = uStack_190;
    uStack_3a8 = CONCAT71(uStack_19f,bStack_1a0);
    uStack_3a0 = uStack_198;
  }
  else {
    FUN_0412e5e0(&uStack_3a8,uStack_190,uStack_198);
  }
  uStack_390 = uStack_188;
  if ((int)uStack_250 == 4) {
    lVar15 = func_0x0ec50c10(&lStack_278);
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if ((int)uStack_250 != 1) goto LAB_0eb8c260;
    lVar15 = func_0x0ec50ac0(&lStack_278);
    lVar15 = *(long *)(lVar15 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar17 + 3) = uStack_3f0;
  puVar17[1] = uStack_400;
  puVar17[2] = uStack_3f8;
  *puVar17 = &UNK_0f4e3c70;
  func_0x04167a20(puVar17 + 4,auStack_3e8);
  puVar17[5] = uStack_3e0;
  puVar17[6] = uStack_3d8;
  puVar17[7] = uStack_3d0;
  puVar17[8] = uStack_3c8;
  puVar17[9] = uStack_3c0;
  puVar17[10] = plStack_3b8;
  uStack_3c0 = 0;
  plStack_3b8 = (long *)0x0;
  puVar17[0xb] = uStack_3b0;
  puVar17[0xe] = uStack_398;
  puVar17[0xc] = uStack_3a8;
  puVar17[0xd] = uStack_3a0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  puVar17[0xf] = uStack_390;
  plVar13 = *(long **)(lVar15 + 8);
  *(undefined8 **)(lVar15 + 8) = puVar17;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))();
  }
LAB_0eb8c260:
  cStack_b8 = cStack_248;
  uStack_c8 = uStack_258;
  uStack_c0 = uStack_250;
  uStack_d8 = uStack_268;
  uStack_d0 = uStack_260;
  lStack_e8 = lStack_278;
  uStack_e0 = uStack_270;
  uVar11 = (**(code **)(puStack_200 + 0x10))(&puStack_200);
  auStack_388._0_8_ = uVar11;
  FUN_0470d9a0(&bStack_180,&UNK_013f5887,0x55,4,auStack_388);
  lStack_a8 = lStack_e8;
  uStack_a0 = uStack_e0;
  uStack_98 = uStack_d8;
  uStack_90 = uStack_d0;
  uStack_88 = uStack_c8;
  uStack_80 = uStack_c0;
  uStack_78 = CONCAT71(uStack_b7,cStack_b8);
  func_0x0ec501e0(auStack_388,&lStack_a8,&DAT_0148af92,0x15);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f0120f0;
  if (pcStack_370 != (code *)0x0) {
    lVar15 = *(long *)pcStack_370;
    pcStack_370 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_370;
  }
  pcStack_370 = pcVar8;
  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uStack_378);
  uStack_4c8 = 0;
  puStack_4c0 = (undefined *)((ulong)puStack_4c0 & 0xffffffff00000000);
  pcStack_4b8 = (code *)0x1;
  uStack_4b0 = 0;
  puStack_4a8 = &UNK_05de4ce0;
  puStack_4a0 = &SUB_048b06d0;
  puStack_498 = &UNK_05de49c0;
  puStack_490 = &UNK_0ec51120;
  puStack_488 = &UNK_0ec51280;
  uStack_480 = 0;
  uStack_478 = 0;
  plStack_470 = (long *)0x0;
  func_0x048b05a0(auStack_388._8_8_,&uStack_4d0);
  plVar13 = plStack_470;
  if (plStack_470 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_470 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_470 + 0x10))(plStack_470);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ec50490(auStack_388);
  FUN_048b0bc0(&pcStack_370);
  if ((bStack_180 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_170,CONCAT71(uStack_17f,bStack_180) & 0xfffffffffffffffe);
  }
  if ((uStack_3a8 & 1) == 0) {
    puStack_408 = &UNK_0f4e3c70;
    plVar13 = plStack_3b8;
  }
  else {
    puStack_408 = &UNK_0f4e3c70;
    thunk_FUN_0ee326a0(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
    plVar13 = plStack_3b8;
  }
  plStack_3b8 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_3e8);
  if (lVar10 != 0) {
    thunk_FUN_0ee326a0(lVar10,lStack_430 - lVar10);
  }
  puStack_468 = &UNK_0f4e3aa0;
  if (lStack_448 != 0) {
    lStack_440 = lStack_448;
    thunk_FUN_0ee326a0(lStack_448,lStack_438 - lStack_448);
  }
  puStack_200 = &UNK_0f4e3c70;
  if ((bStack_1a0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
  }
  if (plStack_1b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_1b0 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      func_0x0412c2d0(plStack_1b0);
    }
  }
  func_0x04167a40(auStack_1e0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
