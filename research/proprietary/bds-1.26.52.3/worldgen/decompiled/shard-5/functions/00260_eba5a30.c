/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca5a30 (ELF vaddr 0xeba5a30)
 * Label: caller-of-callee
 * Body:  [[0eca5a30, 0eca5b36] [0eca5b40, 0eca5b7c] [0eca5b80, 0eca5dcb] [0eca5dd0, 0eca5e00] [0eca5e10, 0eca665b] [0eca6660, 0eca6e81] [0eca6e90, 0eca6ec5] [0eca6ed0, 0eca6fad]]
 * Ghidra: FUN_0eca5a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca5a30(long param_1,long *param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  int *piVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  byte *pbVar25;
  byte *pbVar26;
  long *plVar27;
  bool bVar28;
  long *plStack_408;
  long lStack_400;
  undefined *puStack_3f8;
  code *pcStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined2 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  long lStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  undefined4 uStack_218;
  undefined1 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined4 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined1 uStack_138;
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
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  
  func_0x0e812740();
  func_0x0eccb210(param_1);
  lVar13 = param_1 + 0x18;
  lVar12 = func_0x0dbb09a0(lVar13);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar28 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar23 = lVar12 + 9;
    if (bVar28) {
      lVar23 = *(long *)(lVar12 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar28) {
      uVar22 = *(ulong *)(lVar12 + 0x10);
    }
  }
  else {
    lVar23 = 0;
    uVar22 = 0;
  }
  func_0x0dbb1000(&uStack_388,param_1,lVar23,uVar22,0);
  lVar12 = func_0x0dbb4390(lVar13);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar28 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar23 = lVar12 + 9;
    if (bVar28) {
      lVar23 = *(long *)(lVar12 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar28) {
      uVar22 = *(ulong *)(lVar12 + 0x10);
    }
  }
  else {
    lVar23 = 0;
    uVar22 = 0;
  }
  func_0x0ebdb040(&uStack_388,param_1,lVar23,uVar22,0);
  lStack_398 = 0;
  puStack_390 = (undefined *)0x0;
  plVar27 = (long *)*param_2;
  plStack_3a0 = &lStack_398;
  if (plVar27 != param_2 + 1) {
    do {
      func_0x0629ec20(&plStack_3a0,&lStack_398,plVar27 + 4);
      plVar9 = (long *)plVar27[1];
      plVar24 = plVar27;
      if ((long *)plVar27[1] == (long *)0x0) {
        do {
          plVar27 = (long *)plVar24[2];
          bVar28 = plVar24 != (long *)*plVar27;
          plVar24 = plVar27;
        } while (bVar28);
      }
      else {
        do {
          plVar27 = plVar9;
          plVar9 = (long *)*plVar27;
        } while ((long *)*plVar27 != (long *)0x0);
      }
    } while (plVar27 != param_2 + 1);
  }
  lVar13 = func_0x0ca495b0(lVar13);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar28 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar14 = (undefined *)(lVar13 + 9);
    if (bVar28) {
      puVar14 = *(undefined **)(lVar13 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar28) {
      uVar22 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar14 = &UNK_012b9dd8;
    uVar22 = 0x14;
  }
  func_0x0ed34db0(&uStack_388,param_1,puVar14,uVar22,param_3);
  puStack_1c0 = puStack_390;
  lStack_1c8 = lStack_398;
  plStack_408 = &lStack_400;
  if (puStack_390 == (undefined *)0x0) {
    plStack_1d0 = &lStack_1c8;
  }
  else {
    *(long **)(lStack_398 + 0x10) = plStack_408;
    lStack_398 = 0;
    puStack_390 = (undefined *)0x0;
    *(long **)(lStack_1c8 + 0x10) = &lStack_1c8;
    plStack_1d0 = plStack_3a0;
    plStack_3a0 = &lStack_398;
  }
  uStack_1e8 = uStack_368;
  uStack_1e0 = CONCAT44(uStack_35c,uStack_360);
  uStack_1d8 = uStack_358;
  uStack_1ec = uStack_370._4_4_;
  uStack_1f0 = (int)uStack_370;
  uStack_1f4 = uStack_374;
  uStack_1f8 = uStack_378;
  uStack_1fc = uStack_380._4_4_;
  uStack_200 = (undefined4)uStack_380;
  uStack_204 = uStack_388._4_4_;
  uStack_208 = (undefined4)uStack_388;
  lStack_400 = lStack_398;
  puStack_3f8 = puStack_390;
  func_0x049dc470(&plStack_408,lStack_398);
  func_0x049dc470(&plStack_3a0,lStack_398);
  if ((char)uStack_1d8 != '\0') goto LAB_0eca6e60;
  func_0x05d54750(&uStack_278,&UNK_0f3ec768);
  uStack_288 = uStack_268;
  uStack_2b8 = 0x636f446d65744918;
  uStack_2b0 = 0x746e656d75;
  uStack_2a8 = 0;
  uStack_2a0 = 0x902;
  uStack_298 = uStack_278;
  uStack_290 = uStack_270;
  uStack_270 = 0;
  uStack_268 = 0;
  lVar12 = CONCAT44(uStack_204,uStack_208) + 0x18;
  lVar13 = func_0x0ca495b0(lVar12);
  pbVar3 = *(byte **)(CONCAT44(uStack_204,uStack_208) + 0x58);
  for (pbVar25 = *(byte **)(CONCAT44(uStack_204,uStack_208) + 0x50); pbVar25 != pbVar3;
      pbVar25 = pbVar25 + 0x38) {
    bVar2 = *pbVar25;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0eca5e1a;
    }
    else if (*(long *)(pbVar25 + 8) == 0x24) {
LAB_0eca5e1a:
      if ((bVar2 & 1) == 0) {
        pbVar26 = pbVar25 + 1;
      }
      else {
        pbVar26 = *(byte **)(pbVar25 + 0x10);
      }
      iVar10 = func_0x0eee3000(&DAT_014518a9,pbVar26,0x24);
      if (iVar10 == 0) break;
    }
  }
  if (pbVar25 == pbVar3) {
LAB_0eca5e47:
    if ((int)uStack_1e0 == 0) {
      if ((*(int *)(lVar13 + 0x60) != -0x2b3da790) || (*(long *)(lVar13 + 0x68) == 0))
      goto LAB_0eca5ec3;
      lVar13 = *(long *)(lVar13 + 0x68) + 0x38;
    }
    else {
      puVar14 = (undefined *)func_0x048b0c90(lVar12,lVar13,uStack_1e0._4_4_,1);
      if (puVar14 == (undefined *)0x0) {
        uStack_388 = (undefined *)0x0;
        uStack_380 = (ulong *)0x0;
        func_0x048b0d20(&uStack_388);
        puVar14 = uStack_388;
        if (uStack_388 == (undefined *)0x0) goto LAB_0eca5ec3;
      }
      if ((*(int *)(puVar14 + 0x50) == -0x45dcb126) && (*(long *)(puVar14 + 0x58) != 0)) {
        lVar13 = *(long *)(puVar14 + 0x58) + 0x40;
      }
      else {
LAB_0eca5ec3:
        lVar13 = 0;
      }
    }
    plStack_408 = (long *)0x0;
    puStack_3f8 = &UNK_048b4ab0;
    pcStack_3f0 = (code *)&UNK_048b49f0;
    uStack_3e8 = CONCAT35(uStack_3e8._5_3_,0x1d33bd9c5);
    puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar15[2] = uStack_2a8;
    *puVar15 = uStack_2b8;
    puVar15[1] = uStack_2b0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    *(undefined2 *)(puVar15 + 3) = uStack_2a0;
    puVar15[4] = uStack_298;
    puVar15[5] = uStack_290;
    uStack_290 = 0;
    puVar15[6] = uStack_288;
    uStack_288 = 0;
    uStack_388 = &UNK_048b46e0;
    uStack_370 = (code *)&UNK_048b4ab0;
    uStack_368 = (code *)&UNK_048b49f0;
    uStack_360 = 0xd33bd9c5;
    uStack_35c = CONCAT31(uStack_35c._1_3_,1);
    plStack_408 = (long *)0x0;
    uStack_380 = puVar15;
    puStack_1a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_1a8 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar16 = _UNK_014518c1;
    puStack_1b8 = (undefined *)0x29;
    uStack_1b0 = 0x24;
    *(undefined8 *)(puStack_1a8 + 4) = _DAT_014518b9;
    *(undefined8 *)(puStack_1a8 + 6) = uVar16;
    uVar7 = _UNK_014518b5;
    uVar6 = _UNK_014518b1;
    uVar5 = _UNK_014518ad;
    *puStack_1a8 = _DAT_014518a9;
    puStack_1a8[1] = uVar5;
    puStack_1a8[2] = uVar6;
    puStack_1a8[3] = uVar7;
    puStack_1a8[8] = 0x5d797472;
    *(undefined1 *)(puStack_1a8 + 9) = 0;
    lVar13 = func_0x048b5060(lVar13,&puStack_1b8);
    *(undefined **)(lVar13 + 0x20) = &UNK_048b46e0;
    pcVar21 = (code *)&UNK_048b49f0;
    if ((undefined8 *)(lVar13 + 0x20) != &uStack_388) {
      plVar27 = (long *)(lVar13 + 0x28);
      if (*(code **)(lVar13 + 0x40) == (code *)0x0) {
LAB_0eca60a1:
        puVar15 = uStack_380;
        uStack_380 = (ulong *)0x0;
        *plVar27 = (long)puVar15;
      }
      else {
        (**(code **)(lVar13 + 0x40))(plVar27);
        if ((char)uStack_35c != '\0') {
          if ((char)uStack_35c != '\x02') goto LAB_0eca60a1;
          (*uStack_370)(5,&uStack_380,plVar27);
        }
      }
      *(int *)(lVar13 + 0x38) = (int)uStack_370;
      *(int *)(lVar13 + 0x3c) = uStack_370._4_4_;
      *(undefined4 *)(lVar13 + 0x40) = (undefined4)uStack_368;
      *(undefined4 *)(lVar13 + 0x44) = uStack_368._4_4_;
      *(undefined4 *)(lVar13 + 0x48) = uStack_360;
      *(char *)(lVar13 + 0x4c) = (char)uStack_35c;
      pcVar21 = uStack_368;
    }
    if (((ulong)puStack_1b8 & 1) != 0) {
      func_0x0412a280(puStack_1a8,(ulong)puStack_1b8 & 0xfffffffffffffffe);
      pcVar21 = uStack_368;
    }
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(&uStack_380);
    }
    if (pcStack_3f0 != (code *)0x0) {
      (*pcStack_3f0)(&plStack_408);
    }
  }
  else {
    iVar10 = *(int *)(pbVar25 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550768), iVar11 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    if (iVar10 == _DAT_0f550754) goto LAB_0eca5e47;
  }
  uStack_f8 = uStack_1d8;
  uStack_108 = (undefined4)uStack_1e8;
  uStack_104 = uStack_1e8._4_4_;
  iStack_100 = (int)uStack_1e0;
  uStack_fc = uStack_1e0._4_4_;
  uStack_118 = uStack_1f8;
  uStack_114 = uStack_1f4;
  uStack_110 = uStack_1f0;
  uStack_10c = uStack_1ec;
  uStack_128 = uStack_208;
  uStack_124 = uStack_204;
  uStack_120 = uStack_200;
  uStack_11c = uStack_1fc;
  func_0x0ed357e0(&uStack_388,&uStack_128,&UNK_011ea907,0xb,1);
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar27 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar27 = (long)&UNK_0f3611b8;
  if (uStack_370 != (code *)0x0) {
    lVar13 = *(long *)uStack_370;
    uStack_370 = (code *)plVar27;
    (**(code **)(lVar13 + 8))();
    plVar27 = (long *)uStack_370;
  }
  uStack_370 = (code *)plVar27;
  plStack_408 = (long *)CONCAT44(plStack_408._4_4_,uStack_378);
  lStack_400 = 0;
  puStack_3f8 = (undefined *)((ulong)puStack_3f8 & 0xffffffff00000000);
  pcStack_3f0 = (code *)0x1;
  uStack_3e8 = 0;
  puStack_3e0 = &UNK_0c2c3c90;
  puStack_3d8 = &SUB_048b06d0;
  puStack_3d0 = &SUB_0c2c3970;
  puStack_3c8 = &UNK_0ed35d40;
  puStack_3c0 = &UNK_0ed35f70;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  func_0x048b05a0(uStack_380,&plStack_408);
  plVar27 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_3a8 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      func_0x0412c2d0(plVar27);
    }
  }
  func_0x0ed35a40(&uStack_388);
  uStack_138 = (undefined1)uStack_f8;
  uStack_148 = uStack_108;
  uStack_144 = uStack_104;
  iStack_140 = iStack_100;
  uStack_13c = uStack_fc;
  uStack_158 = uStack_118;
  uStack_154 = uStack_114;
  uStack_150 = uStack_110;
  uStack_14c = uStack_10c;
  uStack_168 = uStack_128;
  uStack_164 = uStack_124;
  uStack_160 = uStack_120;
  uStack_15c = uStack_11c;
  func_0x048b0bc0(&uStack_370);
  func_0x0ed357e0(&uStack_388,&uStack_168,&UNK_011ed181,10,1);
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar27 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar27 = (long)&UNK_0f4e2340;
  if (uStack_370 != (code *)0x0) {
    lVar13 = *(long *)uStack_370;
    uStack_370 = (code *)plVar27;
    (**(code **)(lVar13 + 8))();
    plVar27 = (long *)uStack_370;
  }
  uStack_370 = (code *)plVar27;
  plStack_408 = (long *)CONCAT44(plStack_408._4_4_,uStack_378);
  lStack_400 = 0;
  puStack_3f8 = (undefined *)((ulong)puStack_3f8 & 0xffffffff00000000);
  pcStack_3f0 = (code *)0x1;
  uStack_3e8 = 0;
  puStack_3e0 = &UNK_0ed36370;
  puStack_3d8 = &SUB_048b06d0;
  puStack_3d0 = &UNK_0ed2e7a0;
  puStack_3c8 = &UNK_0ed36430;
  puStack_3c0 = &UNK_0ed36760;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  func_0x048b05a0(uStack_380,&plStack_408);
  plVar27 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_3a8 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      func_0x0412c2d0(plVar27);
    }
  }
  func_0x0ed35a40(&uStack_388);
  uVar8 = uStack_138;
  uVar5 = uStack_13c;
  iVar10 = iStack_140;
  lVar13 = CONCAT44(uStack_164,uStack_168);
  uStack_b8 = CONCAT44(uStack_15c,uStack_160);
  uStack_b0 = CONCAT44(uStack_154,uStack_158);
  uStack_a8 = uStack_150;
  uStack_a4 = uStack_14c;
  uStack_a0 = uStack_148;
  uStack_9c = uStack_144;
  func_0x048b0bc0(&uStack_370);
  uStack_170 = 0;
  uStack_1b0 = 0xffffffffffffffff;
  uStack_1a0 = 0xff;
  puStack_1b8 = &UNK_0f4e3df0;
  lStack_198 = 0;
  lStack_190 = 0;
  puStack_188 = (undefined8 *)0x0;
  uStack_180 = 0;
  uStack_178 = 0x3f800000;
  puStack_1a8 = (undefined4 *)0x1;
  uStack_250 = 0xffffffffffffffff;
  uStack_248 = 1;
  uStack_240 = 0xff;
  puStack_258 = &UNK_0f4e3df0;
  func_0x04907a10(&lStack_238,&lStack_198);
  uStack_210 = (undefined1)uStack_170;
  if (iVar10 == 4) {
    uVar16 = func_0x0ca495b0(lVar13 + 0x18);
    puVar14 = (undefined *)FUN_048b1040(lVar13 + 0x18,uVar16,uVar5,1);
    if (puVar14 == (undefined *)0x0) {
      uStack_388 = (undefined *)0x0;
      uStack_380 = (ulong *)0x0;
      func_0x048b10d0(&uStack_388);
      puVar18 = *(undefined **)(uStack_388 + 0x38);
      puVar14 = uStack_388;
      if (puVar18 == (undefined *)0x0) goto LAB_0eca662d;
LAB_0eca6652:
      do {
        puVar14 = puVar18;
        puVar18 = *(undefined **)(puVar14 + 0x38);
        if (*(undefined **)(puVar14 + 0x38) == (undefined *)0x0) {
          uStack_388 = (undefined *)0x0;
          uStack_380 = (ulong *)0x0;
          func_0x048b10d0(&uStack_388);
          puVar18 = uStack_388;
        }
      } while (puVar18 != (undefined *)0x0);
    }
    else {
      puVar18 = *(undefined **)(puVar14 + 0x38);
      if (*(undefined **)(puVar14 + 0x38) != (undefined *)0x0) goto LAB_0eca6652;
LAB_0eca662d:
      uStack_388 = (undefined *)0x0;
      uStack_380 = (ulong *)0x0;
      func_0x048b10d0(&uStack_388);
      puVar18 = uStack_388;
      if (uStack_388 != (undefined *)0x0) goto LAB_0eca6652;
    }
    lVar12 = *(long *)(puVar14 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
LAB_0eca66b4:
    uVar22 = uStack_230;
    lVar23 = lStack_238;
    *(undefined1 *)(puVar17 + 3) = uStack_240;
    puVar17[1] = uStack_250;
    puVar17[2] = uStack_248;
    *puVar17 = &UNK_0f4e3df0;
    lStack_238 = 0;
    puVar17[4] = lVar23;
    puVar17[5] = uStack_230;
    uStack_230 = 0;
    puVar17[6] = puStack_228;
    puVar17[7] = lStack_220;
    *(undefined4 *)(puVar17 + 8) = uStack_218;
    if (lStack_220 != 0) {
      uVar19 = puStack_228[1];
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar19 = uVar19 & uVar22 - 1;
      }
      else if (uVar22 <= uVar19) {
        if ((uVar19 | uVar22) >> 0x20 == 0) {
          uVar19 = (uVar19 & 0xffffffff) % (uVar22 & 0xffffffff);
        }
        else {
          uVar19 = uVar19 % uVar22;
        }
      }
      *(undefined8 **)(lVar23 + uVar19 * 8) = puVar17 + 6;
      puStack_228 = (undefined8 *)0x0;
      lStack_220 = 0;
    }
    *(undefined1 *)(puVar17 + 9) = uStack_210;
    plVar27 = *(long **)(lVar12 + 8);
    *(undefined8 **)(lVar12 + 8) = puVar17;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x28))();
    }
  }
  else if (iVar10 == 1) {
    uVar16 = func_0x0ca495b0(lVar13 + 0x18);
    puVar14 = (undefined *)func_0x048b0c90(lVar13 + 0x18,uVar16,uVar5,1);
    if (puVar14 == (undefined *)0x0) {
      uStack_388 = (undefined *)0x0;
      uStack_380 = (ulong *)0x0;
      func_0x048b0d20(&uStack_388);
      puVar14 = uStack_388;
    }
    lVar12 = *(long *)(puVar14 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    goto LAB_0eca66b4;
  }
  uStack_e8 = (undefined4)uStack_b8;
  uStack_e4 = uStack_b8._4_4_;
  uStack_e0 = (undefined4)uStack_b0;
  uStack_dc = uStack_b0._4_4_;
  uStack_d8 = uStack_a8;
  uStack_d4 = uStack_a4;
  uStack_d0 = uStack_a0;
  uStack_cc = uStack_9c;
  iStack_c8 = iVar10;
  uStack_c4 = uVar5;
  uStack_c0 = uVar8;
  lStack_f0 = lVar13;
  func_0x0ed353d0(&uStack_388,lVar13 + 0x18);
  if (uStack_370._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack_374,uStack_378) + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_370) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    puVar15 = *(ulong **)(piVar20 + 0xc);
    while (puVar15 != uStack_380) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar15 = *(ulong **)(piVar20 + 0xc);
    }
LAB_0eca68ba:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_370._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack_374,uStack_378) + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_370) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0eca68ba;
    }
    if (uStack_370._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_374,uStack_378) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0ed357e0(&uStack_388,&lStack_f0,&UNK_014dd36e,0x19,0x10);
  plVar27 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar27 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar27 = (long)&UNK_0f497680;
  if (uStack_370 != (code *)0x0) {
    lVar13 = *(long *)uStack_370;
    uStack_370 = (code *)plVar27;
    (**(code **)(lVar13 + 8))();
    plVar27 = (long *)uStack_370;
  }
  uStack_370 = (code *)plVar27;
  plStack_408 = (long *)CONCAT44(plStack_408._4_4_,uStack_378);
  lStack_400 = 0;
  puStack_3f8 = (undefined *)((ulong)puStack_3f8 & 0xffffffff00000000);
  pcStack_3f0 = (code *)0x1;
  uStack_3e8 = 0;
  puStack_3e0 = &UNK_0dbb38c0;
  puStack_3d8 = &SUB_048b06d0;
  puStack_3d0 = &SUB_0dbb09a0;
  puStack_3c8 = &UNK_0ed36be0;
  puStack_3c0 = &UNK_0ed36dc0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  func_0x048b05a0(uStack_380,&plStack_408);
  plVar27 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_3a8 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      func_0x0412c2d0(plVar27);
    }
  }
  func_0x0ed35a40(&uStack_388);
  lVar12 = lStack_f0;
  uStack_77 = CONCAT13((undefined1)uStack_c4,iStack_c8._1_3_);
  uStack_73 = CONCAT13(uStack_c0,uStack_c4._1_3_);
  uStack_98 = uStack_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  uStack_88 = uStack_d8;
  uStack_84 = uStack_d4;
  uStack_80 = uStack_d0;
  uStack_7c = uStack_cc;
  uStack_78 = (undefined1)iStack_c8;
  func_0x048b0bc0(&uStack_370);
  lVar13 = lVar12 + 0x18;
  uStack_388 = (undefined *)func_0x0ca495b0(lVar13);
  uStack_380 = (ulong *)lVar13;
  func_0x0ed624b0(&uStack_388,&UNK_014dd36e,0x19);
  lStack_68 = lVar12;
  uStack_60 = CONCAT44(uStack_94,uStack_98);
  uStack_58 = CONCAT44(uStack_8c,uStack_90);
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = uStack_7c;
  uStack_40 = uStack_78;
  uStack_3f = uStack_77;
  uStack_3b = uStack_73;
  func_0x0ed353d0(&uStack_388,lVar13);
  if (uStack_370._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack_374,uStack_378) + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_370) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    lVar13 = *(long *)(piVar20 + 0xc);
    while ((ulong *)lVar13 != uStack_380) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar13 = *(long *)(piVar20 + 0xc);
    }
LAB_0eca6b5a:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_370._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack_374,uStack_378) + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_370) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0eca6b5a;
    }
    if (uStack_370._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_374,uStack_378) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0ed357e0(&uStack_388,&lStack_68,&UNK_01251320,0xb,0x10);
  pcVar21 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar21 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar21 = &UNK_0f4976f8;
  if (uStack_370 != (code *)0x0) {
    lVar13 = *(long *)uStack_370;
    uStack_370 = pcVar21;
    (**(code **)(lVar13 + 8))();
    pcVar21 = uStack_370;
  }
  uStack_370 = pcVar21;
  plStack_408 = (long *)CONCAT44(plStack_408._4_4_,uStack_378);
  lStack_400 = 0;
  puStack_3f8 = (undefined *)((ulong)puStack_3f8 & 0xffffffff00000000);
  pcStack_3f0 = (code *)0x1;
  uStack_3e8 = 0;
  puStack_3e0 = &UNK_0dbb46f0;
  puStack_3d8 = &SUB_048b06d0;
  puStack_3d0 = &SUB_0dbb4390;
  puStack_3c8 = &UNK_0ed36fa0;
  puStack_3c0 = &UNK_0ed37120;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  func_0x048b05a0(uStack_380,&plStack_408);
  plVar27 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_3a8 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      func_0x0412c2d0(plVar27);
    }
  }
  func_0x0ed35a40(&uStack_388);
  lVar13 = lStack_68;
  func_0x048b0bc0(&uStack_370);
  uStack_388 = (undefined *)func_0x0ca495b0((ulong *)(lVar13 + 0x18));
  uStack_380 = (ulong *)(lVar13 + 0x18);
  func_0x0ed624b0(&uStack_388,&UNK_01251320,0xb);
  puStack_258 = &UNK_0f4e3df0;
  lVar13 = lStack_238;
  puVar17 = puStack_228;
  while (puVar17 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar17;
    lStack_238 = lVar13;
    if ((*(byte *)(puVar17 + 2) & 1) != 0) {
      func_0x0412a280(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar17,0x28);
    lVar13 = lStack_238;
    puVar17 = puVar4;
  }
  lStack_238 = 0;
  if (lVar13 != 0) {
    func_0x0412a280(lVar13,uStack_230 << 3);
  }
  puStack_1b8 = &UNK_0f4e3df0;
  lVar13 = lStack_198;
  puVar17 = puStack_188;
  while (puVar17 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar17;
    lStack_198 = lVar13;
    if ((*(byte *)(puVar17 + 2) & 1) != 0) {
      func_0x0412a280(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar17,0x28);
    lVar13 = lStack_198;
    puVar17 = puVar4;
  }
  lStack_198 = 0;
  if (lVar13 != 0) {
    func_0x0412a280(lVar13,lStack_190 << 3);
  }
  if ((uStack_288 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_288 & 0xff00ffffffffffff) - 8);
  }
  uStack_288 = 0;
  if ((uStack_290 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
  }
  uStack_290 = 0;
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if ((uStack_268 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
  }
  uStack_268 = 0;
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
LAB_0eca6e60:
  func_0x049dc470(&plStack_1d0,lStack_1c8);
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
