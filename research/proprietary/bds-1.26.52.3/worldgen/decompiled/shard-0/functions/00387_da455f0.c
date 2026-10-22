/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb455f0 (ELF vaddr 0xda455f0)
 * Label: caller-of-callee
 * Body:  [[0db455f0, 0db457e9] [0db457f0, 0db45824] [0db45830, 0db46077] [0db46080, 0db46897] [0db468a0, 0db468d4] [0db468e0, 0db469bc]]
 * Ghidra: FUN_0db455f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db455f0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
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
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  long *plVar25;
  code *pcVar26;
  bool bVar27;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  undefined2 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined *puStack_328;
  ulong *puStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  char cStack_2fc;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  long lStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  char cStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  char cStack_f8;
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
  char cStack_c0;
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
  undefined1 uStack_7c;
  undefined3 uStack_7b;
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
  func_0x0db3ca80(param_1);
  lVar13 = param_1 + 0x18;
  lVar12 = func_0x0dbb09a0(lVar13);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar27 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar22 = lVar12 + 9;
    if (bVar27) {
      lVar22 = *(long *)(lVar12 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar27) {
      uVar21 = *(ulong *)(lVar12 + 0x10);
    }
  }
  else {
    lVar22 = 0;
    uVar21 = 0;
  }
  func_0x0dbb1000(&puStack_328,param_1,lVar22,uVar21,0);
  lVar12 = func_0x0dbb4390(lVar13);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar27 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar22 = lVar12 + 9;
    if (bVar27) {
      lVar22 = *(long *)(lVar12 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar27) {
      uVar21 = *(ulong *)(lVar12 + 0x10);
    }
  }
  else {
    lVar22 = 0;
    uVar21 = 0;
  }
  func_0x0ebdb040(&puStack_328,param_1,lVar22,uVar21,0);
  lVar13 = func_0x0ca4c610(lVar13);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar27 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar12 = lVar13 + 9;
    if (bVar27) {
      lVar12 = *(long *)(lVar13 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar27) {
      uVar21 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0dbb19e0(&uStack_160,param_1,lVar12,uVar21);
  }
  else {
    func_0x0dbb19e0(&uStack_160,param_1,&UNK_01235c84,0xd);
  }
  if (cStack_130 != '\0') {
    return;
  }
  func_0x05d54750(&uStack_258,&UNK_0f3ec648);
  uStack_338 = uStack_248;
  uStack_368 = 0x636f446d65744918;
  uStack_360 = 0x746e656d75;
  uStack_358 = 0;
  uStack_350 = 0x902;
  uStack_348 = uStack_258;
  uStack_340 = uStack_250;
  uStack_250 = 0;
  uStack_248 = 0;
  lVar12 = CONCAT44(uStack_15c,uStack_160) + 0x18;
  lVar13 = func_0x0ca4c610(lVar12);
  pbVar4 = *(byte **)(CONCAT44(uStack_15c,uStack_160) + 0x58);
  for (pbVar24 = *(byte **)(CONCAT44(uStack_15c,uStack_160) + 0x50); pbVar24 != pbVar4;
      pbVar24 = pbVar24 + 0x38) {
    bVar3 = *pbVar24;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0db4583a;
    }
    else if (*(long *)(pbVar24 + 8) == 0x24) {
LAB_0db4583a:
      if ((bVar3 & 1) == 0) {
        pbVar23 = pbVar24 + 1;
      }
      else {
        pbVar23 = *(byte **)(pbVar24 + 0x10);
      }
      iVar10 = func_0x0eee3000(&DAT_014518a9,pbVar23,0x24);
      if (iVar10 == 0) break;
    }
  }
  if (pbVar24 == pbVar4) {
LAB_0db4586a:
    if (iStack_138 == 0) {
      if ((*(int *)(lVar13 + 0x60) != -0x2b3da790) || (*(long *)(lVar13 + 0x68) == 0))
      goto LAB_0db458e6;
      lVar13 = *(long *)(lVar13 + 0x68) + 0x38;
    }
    else {
      puVar14 = (undefined *)func_0x048b0c90(lVar12,lVar13,uStack_134,1);
      if (puVar14 == (undefined *)0x0) {
        puStack_328 = (undefined *)0x0;
        puStack_320 = (ulong *)0x0;
        func_0x048b0d20(&puStack_328);
        puVar14 = puStack_328;
        if (puStack_328 == (undefined *)0x0) goto LAB_0db458e6;
      }
      if ((*(int *)(puVar14 + 0x50) == -0x45dcb126) && (*(long *)(puVar14 + 0x58) != 0)) {
        lVar13 = *(long *)(puVar14 + 0x58) + 0x40;
      }
      else {
LAB_0db458e6:
        lVar13 = 0;
      }
    }
    uStack_3d0 = 0;
    puStack_3c0 = &UNK_048b4ab0;
    pcStack_3b8 = (code *)&UNK_048b49f0;
    uStack_3b0 = CONCAT35(uStack_3b0._5_3_,0x1d33bd9c5);
    puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar15[2] = uStack_358;
    *puVar15 = uStack_368;
    puVar15[1] = uStack_360;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    *(undefined2 *)(puVar15 + 3) = uStack_350;
    puVar15[4] = uStack_348;
    puVar15[5] = uStack_340;
    uStack_340 = 0;
    puVar15[6] = uStack_338;
    uStack_338 = 0;
    puStack_328 = &UNK_048b46e0;
    uStack_310 = (code *)&UNK_048b4ab0;
    uStack_308 = (code *)&UNK_048b49f0;
    uStack_300 = 0xd33bd9c5;
    cStack_2fc = '\x01';
    uStack_3d0 = 0;
    puStack_320 = puVar15;
    puStack_1d8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_1d8 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar16 = _UNK_014518c1;
    puStack_1e8 = (undefined *)0x29;
    uStack_1e0 = 0x24;
    *(undefined8 *)(puStack_1d8 + 4) = _DAT_014518b9;
    *(undefined8 *)(puStack_1d8 + 6) = uVar16;
    uVar8 = _UNK_014518b5;
    uVar7 = _UNK_014518b1;
    uVar6 = _UNK_014518ad;
    *puStack_1d8 = _DAT_014518a9;
    puStack_1d8[1] = uVar6;
    puStack_1d8[2] = uVar7;
    puStack_1d8[3] = uVar8;
    puStack_1d8[8] = 0x5d797472;
    *(undefined1 *)(puStack_1d8 + 9) = 0;
    lVar13 = func_0x048b5060(lVar13,&puStack_1e8);
    *(undefined **)(lVar13 + 0x20) = &UNK_048b46e0;
    pcVar26 = (code *)&UNK_048b49f0;
    if ((undefined **)(lVar13 + 0x20) != &puStack_328) {
      plVar25 = (long *)(lVar13 + 0x28);
      if (*(code **)(lVar13 + 0x40) == (code *)0x0) {
LAB_0db45abd:
        puVar15 = puStack_320;
        puStack_320 = (ulong *)0x0;
        *plVar25 = (long)puVar15;
      }
      else {
        (**(code **)(lVar13 + 0x40))(plVar25);
        if (cStack_2fc != '\0') {
          if (cStack_2fc != '\x02') goto LAB_0db45abd;
          (*uStack_310)(5,&puStack_320,plVar25);
        }
      }
      *(int *)(lVar13 + 0x38) = (int)uStack_310;
      *(int *)(lVar13 + 0x3c) = uStack_310._4_4_;
      *(undefined4 *)(lVar13 + 0x40) = (undefined4)uStack_308;
      *(undefined4 *)(lVar13 + 0x44) = uStack_308._4_4_;
      *(undefined4 *)(lVar13 + 0x48) = uStack_300;
      *(char *)(lVar13 + 0x4c) = cStack_2fc;
      pcVar26 = uStack_308;
    }
    if (((ulong)puStack_1e8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1d8,(ulong)puStack_1e8 & 0xfffffffffffffffe);
      pcVar26 = uStack_308;
    }
    if (pcVar26 != (code *)0x0) {
      (*pcVar26)(&puStack_320);
    }
    if (pcStack_3b8 != (code *)0x0) {
      (*pcStack_3b8)(&uStack_3d0);
    }
  }
  else {
    iVar10 = *(int *)(pbVar24 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550768), iVar11 != 0)) {
      func_0x048b46f0(&DAT_0f550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar10 == _DAT_0f550754) goto LAB_0db4586a;
  }
  cStack_f8 = cStack_130;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  iStack_100 = iStack_138;
  uStack_fc = uStack_134;
  uStack_118 = uStack_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  uStack_128 = uStack_160;
  uStack_124 = uStack_15c;
  uStack_120 = uStack_158;
  uStack_11c = uStack_154;
  func_0x0dbb2330(&puStack_328,&uStack_128,&UNK_011ea907,0xb,1);
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar25 = (long)&UNK_0f3611b8;
  if (uStack_310 != (code *)0x0) {
    lVar13 = *(long *)uStack_310;
    uStack_310 = (code *)plVar25;
    (**(code **)(lVar13 + 8))();
    plVar25 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar25;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uStack_318);
  uStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  pcStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0c2c3c90;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_0c2c3970;
  puStack_390 = &UNK_0dbb2890;
  puStack_388 = &UNK_0dbb2ac0;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(puStack_320,&uStack_3d0);
  plVar25 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar25);
    }
  }
  func_0x0dbb2590(&puStack_328);
  cStack_168 = cStack_f8;
  uStack_178 = uStack_108;
  uStack_174 = uStack_104;
  iStack_170 = iStack_100;
  uStack_16c = uStack_fc;
  uStack_188 = uStack_118;
  uStack_184 = uStack_114;
  uStack_180 = uStack_110;
  uStack_17c = uStack_10c;
  uStack_198 = uStack_128;
  uStack_194 = uStack_124;
  uStack_190 = uStack_120;
  uStack_18c = uStack_11c;
  FUN_048b0bc0(&uStack_310);
  func_0x0dbb2330(&puStack_328,&uStack_198,&UNK_011ed181,10,1);
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar25 = (long)&UNK_0f494918;
  if (uStack_310 != (code *)0x0) {
    lVar13 = *(long *)uStack_310;
    uStack_310 = (code *)plVar25;
    (**(code **)(lVar13 + 8))();
    plVar25 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar25;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uStack_318);
  uStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  pcStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0dbb2ec0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_0a7abf30;
  puStack_390 = &UNK_0dbb2ed0;
  puStack_388 = &UNK_0dbb3200;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(puStack_320,&uStack_3d0);
  plVar25 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar25);
    }
  }
  func_0x0dbb2590(&puStack_328);
  cVar9 = cStack_168;
  uVar6 = uStack_16c;
  iVar10 = iStack_170;
  lVar13 = CONCAT44(uStack_194,uStack_198);
  uStack_b8 = CONCAT44(uStack_18c,uStack_190);
  uStack_b0 = CONCAT44(uStack_184,uStack_188);
  uStack_a8 = uStack_180;
  uStack_a4 = uStack_17c;
  uStack_a0 = uStack_178;
  uStack_9c = uStack_174;
  FUN_048b0bc0(&uStack_310);
  uStack_1a0 = 0;
  uStack_1e0 = 0xffffffffffffffff;
  uStack_1d0 = 0xff;
  puStack_1e8 = &UNK_0f4e3df0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0x3f800000;
  puStack_1d8 = (undefined4 *)0x1;
  uStack_230 = 0xffffffffffffffff;
  uStack_228 = 1;
  uStack_220 = 0xff;
  puStack_238 = &UNK_0f4e3df0;
  func_0x04907a10(&lStack_218,&lStack_1c8);
  uStack_1f0 = (undefined1)uStack_1a0;
  if (iVar10 == 4) {
    uVar16 = func_0x0ca4c610(lVar13 + 0x18);
    puVar14 = (undefined *)func_0x048b1040(lVar13 + 0x18,uVar16,uVar6,1);
    if (puVar14 == (undefined *)0x0) {
      puStack_328 = (undefined *)0x0;
      puStack_320 = (ulong *)0x0;
      func_0x048b10d0(&puStack_328);
      puVar18 = *(undefined **)(puStack_328 + 0x38);
      puVar14 = puStack_328;
      if (puVar18 == (undefined *)0x0) goto LAB_0db46049;
LAB_0db4606e:
      do {
        puVar14 = puVar18;
        puVar18 = *(undefined **)(puVar14 + 0x38);
        if (*(undefined **)(puVar14 + 0x38) == (undefined *)0x0) {
          puStack_328 = (undefined *)0x0;
          puStack_320 = (ulong *)0x0;
          func_0x048b10d0(&puStack_328);
          puVar18 = puStack_328;
        }
      } while (puVar18 != (undefined *)0x0);
    }
    else {
      puVar18 = *(undefined **)(puVar14 + 0x38);
      if (*(undefined **)(puVar14 + 0x38) != (undefined *)0x0) goto LAB_0db4606e;
LAB_0db46049:
      puStack_328 = (undefined *)0x0;
      puStack_320 = (ulong *)0x0;
      func_0x048b10d0(&puStack_328);
      puVar18 = puStack_328;
      if (puStack_328 != (undefined *)0x0) goto LAB_0db4606e;
    }
    lVar12 = *(long *)(puVar14 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
LAB_0db460d4:
    uVar21 = uStack_210;
    lVar22 = lStack_218;
    *(undefined1 *)(puVar17 + 3) = uStack_220;
    puVar17[1] = uStack_230;
    puVar17[2] = uStack_228;
    *puVar17 = &UNK_0f4e3df0;
    lStack_218 = 0;
    puVar17[4] = lVar22;
    puVar17[5] = uStack_210;
    uStack_210 = 0;
    puVar17[6] = puStack_208;
    puVar17[7] = lStack_200;
    *(undefined4 *)(puVar17 + 8) = uStack_1f8;
    if (lStack_200 != 0) {
      uVar19 = puStack_208[1];
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar19 = uVar19 & uVar21 - 1;
      }
      else if (uVar21 <= uVar19) {
        if ((uVar19 | uVar21) >> 0x20 == 0) {
          uVar19 = (uVar19 & 0xffffffff) % (uVar21 & 0xffffffff);
        }
        else {
          uVar19 = uVar19 % uVar21;
        }
      }
      *(undefined8 **)(lVar22 + uVar19 * 8) = puVar17 + 6;
      puStack_208 = (undefined8 *)0x0;
      lStack_200 = 0;
    }
    *(undefined1 *)(puVar17 + 9) = uStack_1f0;
    plVar25 = *(long **)(lVar12 + 8);
    *(undefined8 **)(lVar12 + 8) = puVar17;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x28))();
    }
  }
  else if (iVar10 == 1) {
    uVar16 = func_0x0ca4c610(lVar13 + 0x18);
    puVar14 = (undefined *)func_0x048b0c90(lVar13 + 0x18,uVar16,uVar6,1);
    if (puVar14 == (undefined *)0x0) {
      puStack_328 = (undefined *)0x0;
      puStack_320 = (ulong *)0x0;
      func_0x048b0d20(&puStack_328);
      puVar14 = puStack_328;
    }
    lVar12 = *(long *)(puVar14 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    goto LAB_0db460d4;
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
  uStack_c4 = uVar6;
  cStack_c0 = cVar9;
  lStack_f0 = lVar13;
  func_0x0dbb1f20(&puStack_328,lVar13 + 0x18);
  if (uStack_310._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_310) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    puVar15 = *(ulong **)(piVar20 + 0xc);
    while (puVar15 != puStack_320) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar15 = *(ulong **)(piVar20 + 0xc);
    }
LAB_0db462ff:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_310._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x48);
      iVar10 = *piVar20;
      while (iVar10 != (int)uStack_310) {
        piVar20 = piVar20 + 0x1a;
        iVar10 = *piVar20;
      }
      goto LAB_0db462ff;
    }
    if (uStack_310._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_314,uStack_318) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0dbb2330(&puStack_328,&lStack_f0,&UNK_014dd36e,0x19,0x10);
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar25 = (long)&UNK_0f497680;
  if (uStack_310 != (code *)0x0) {
    lVar13 = *(long *)uStack_310;
    uStack_310 = (code *)plVar25;
    (**(code **)(lVar13 + 8))();
    plVar25 = (long *)uStack_310;
  }
  uStack_310 = (code *)plVar25;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uStack_318);
  uStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  pcStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0dbb38c0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_0dbb09a0;
  puStack_390 = &UNK_0dbb38d0;
  puStack_388 = &UNK_0dbb3ab0;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(puStack_320,&uStack_3d0);
  plVar25 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar25);
    }
  }
  func_0x0dbb2590(&puStack_328);
  lVar13 = lStack_f0;
  uStack_77 = CONCAT13((undefined1)uStack_c4,iStack_c8._1_3_);
  uStack_73 = CONCAT13(cStack_c0,uStack_c4._1_3_);
  uStack_98 = uStack_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  uStack_88 = uStack_d8;
  uStack_84 = uStack_d4;
  uStack_80 = uStack_d0;
  uStack_7c = (undefined1)uStack_cc;
  uStack_7b = uStack_cc._1_3_;
  uStack_78 = (undefined1)iStack_c8;
  FUN_048b0bc0(&uStack_310);
  puVar15 = (ulong *)(lVar13 + 0x18);
  puStack_328 = (undefined *)func_0x0ca4c610(puVar15);
  puStack_320 = puVar15;
  func_0x0ed624b0(&puStack_328,&UNK_014dd36e,0x19);
  lStack_68 = lVar13;
  uStack_60 = CONCAT44(uStack_94,uStack_98);
  uStack_58 = CONCAT44(uStack_8c,uStack_90);
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = CONCAT31(uStack_7b,uStack_7c);
  uStack_40 = uStack_78;
  uStack_3f = uStack_77;
  uStack_3b = uStack_73;
  func_0x0dbb1f20(&puStack_328,puVar15);
  if (uStack_310._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x60);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_310) {
      piVar20 = piVar20 + 0x16;
      iVar10 = *piVar20;
    }
    puVar15 = *(ulong **)(piVar20 + 0xc);
    while (puVar15 != puStack_320) {
      piVar20 = *(int **)(piVar20 + 0xe);
      puVar15 = *(ulong **)(piVar20 + 0xc);
    }
  }
  else {
    if (uStack_310._4_4_ != 1) {
      if (uStack_310._4_4_ == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_314,uStack_318) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
      goto LAB_0db4659e;
    }
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack_314,uStack_318) + 0x78) + 0x48);
    iVar10 = *piVar20;
    while (iVar10 != (int)uStack_310) {
      piVar20 = piVar20 + 0x1a;
      iVar10 = *piVar20;
    }
  }
  *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
LAB_0db4659e:
  func_0x0dbb2330(&puStack_328,&lStack_68,&UNK_01251320,0xb,0x10);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f4976f8;
  if (uStack_310 != (code *)0x0) {
    lVar13 = *(long *)uStack_310;
    uStack_310 = (code *)puVar17;
    (**(code **)(lVar13 + 8))();
    puVar17 = (undefined8 *)uStack_310;
  }
  uStack_310 = (code *)puVar17;
  uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uStack_318);
  uStack_3c8 = 0;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffff00000000);
  pcStack_3b8 = (code *)0x1;
  uStack_3b0 = 0;
  puStack_3a8 = &UNK_0dbb46f0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_0dbb4390;
  puStack_390 = &UNK_0dbb4700;
  puStack_388 = &UNK_0dbb4880;
  uStack_380 = 0;
  uStack_378 = 0;
  plStack_370 = (long *)0x0;
  func_0x048b05a0(puStack_320,&uStack_3d0);
  plVar25 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar25);
    }
  }
  func_0x0dbb2590(&puStack_328);
  lVar13 = lStack_68;
  FUN_048b0bc0(&uStack_310);
  puStack_328 = (undefined *)func_0x0ca4c610((ulong *)(lVar13 + 0x18));
  puStack_320 = (ulong *)(lVar13 + 0x18);
  func_0x0ed624b0(&puStack_328,&UNK_01251320,0xb);
  puStack_238 = &UNK_0f4e3df0;
  lVar13 = lStack_218;
  puVar17 = puStack_208;
  while (puVar17 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar17;
    lStack_218 = lVar13;
    if ((*(byte *)(puVar17 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar17,0x28);
    lVar13 = lStack_218;
    puVar17 = puVar5;
  }
  lStack_218 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,uStack_210 << 3);
  }
  puStack_1e8 = &UNK_0f4e3df0;
  lVar13 = lStack_1c8;
  puVar17 = puStack_1b8;
  while (puVar17 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar17;
    lStack_1c8 = lVar13;
    if ((*(byte *)(puVar17 + 2) & 1) != 0) {
      thunk_FUN_0ee326a0(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(puVar17,0x28);
    lVar13 = lStack_1c8;
    puVar17 = puVar5;
  }
  lStack_1c8 = 0;
  if (lVar13 != 0) {
    thunk_FUN_0ee326a0(lVar13,lStack_1c0 << 3);
  }
  if ((uStack_338 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_338 & 0xff00ffffffffffff) - 8);
  }
  uStack_338 = 0;
  if ((uStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  uStack_340 = 0;
  if ((uStack_368 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_358,uStack_368 & 0xfffffffffffffffe);
  }
  if ((uStack_248 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_248 & 0xff00ffffffffffff) - 8);
  }
  uStack_248 = 0;
  if ((uStack_250 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_250 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
