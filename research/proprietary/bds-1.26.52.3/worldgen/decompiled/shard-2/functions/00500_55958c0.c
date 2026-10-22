/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x56958c0 (ELF vaddr 0x55958c0)
 * Label: caller-of-callee
 * Body:  [[056958c0, 05696ccd] [05696cd0, 05697295] [056972a0, 056972dc] [056972e0, 05698afc] [0569903e, 0569905b] [056991be, 056994e0] [0569965a, 05699664] [056996c0, 056996f5]]
 * Ghidra: FUN_056958c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_056958c0(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long *plVar31;
  undefined8 *puVar32;
  long lVar33;
  long *plVar34;
  ulong uVar35;
  long **pplVar36;
  long lVar37;
  byte *pbVar38;
  bool bVar39;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  byte *pbStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_308;
  undefined1 uStack_2f9;
  long *plStack_2f8;
  byte bStack_2f0;
  undefined5 uStack_2ef;
  undefined2 uStack_2ea;
  undefined1 uStack_2e8;
  undefined5 uStack_2e7;
  undefined2 uStack_2e2;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint *puStack_2b0;
  long *plStack_2a8;
  byte bStack_2a0;
  undefined4 uStack_29f;
  undefined4 uStack_29b;
  undefined4 uStack_297;
  undefined4 uStack_293;
  undefined2 uStack_28f;
  undefined5 uStack_28d;
  undefined8 uStack_288;
  long *plStack_268;
  byte bStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined8 uStack_250;
  undefined8 uStack_248;
  byte *pbStack_220;
  ulong uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  byte *pbStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 *puStack_1c8;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined8 uStack_1b0;
  ulong auStack_1a8 [4];
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint *puStack_110;
  byte bStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined5 uStack_105;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined5 uStack_ed;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *pbStack_58;
  byte bStack_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined8 uStack_38;
  
  puStack_1c8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_1c8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar27 = _UNK_0128b670;
  uStack_1d8 = 0x29;
  uStack_1d0 = 0x24;
  *(undefined8 *)(puStack_1c8 + 4) = _DAT_0128b668;
  *(undefined8 *)(puStack_1c8 + 6) = uVar27;
  uVar10 = _UNK_0128b664;
  uVar9 = _UNK_0128b660;
  uVar8 = _UNK_0128b65c;
  *puStack_1c8 = _DAT_0128b658;
  puStack_1c8[1] = uVar8;
  puStack_1c8[2] = uVar9;
  puStack_1c8[3] = uVar10;
  puStack_1c8[8] = 0x65766976;
  *(undefined1 *)(puStack_1c8 + 9) = 0;
  bStack_1c0 = 0x10;
  uStack_1bf = 0x7469726f697270;
  uStack_1b8 = 0x79;
  uStack_1b7 = 0;
  bStack_f0 = 2;
  uStack_ef = 0x30;
  uStack_ee = 0;
  bStack_108 = 2;
  uStack_107 = 0x30;
  uStack_106 = 0;
  bStack_48 = 0;
  uStack_47 = 0;
  func_0x0564aad0(&plStack_d8,&uStack_1d8,&bStack_1c0,0,&bStack_f0,0,&bStack_108,&bStack_48);
  uVar27 = *param_1;
  uStack_218 = 0;
  plStack_308 = param_1;
  if ((uStack_68 & 1) == 0) {
    pbStack_200 = pbStack_58;
    uStack_210 = uStack_68;
    uStack_20c = uStack_64;
    uStack_208 = uStack_60;
    uStack_204 = uStack_5c;
  }
  else {
    func_0x0412e5e0(&uStack_210,pbStack_58,CONCAT44(uStack_5c,uStack_60));
  }
  uStack_1f8 = 0;
  if ((uStack_210 & 1) == 0) {
    if ((byte)uStack_210 >> 1 != 0) goto LAB_05695a51;
LAB_05695b45:
    uVar35 = 0;
  }
  else {
    if (CONCAT44(uStack_204,uStack_208) == 0) goto LAB_05695b45;
LAB_05695a51:
    if ((uStack_210 & 1) == 0) {
      pbVar38 = (byte *)((long)&uStack_210 + 1);
      if (pbVar38 != (byte *)0x0) goto LAB_05695a78;
      goto LAB_05695b45;
    }
    pbVar38 = pbStack_200;
    if (pbStack_200 == (byte *)0x0) goto LAB_05695b45;
LAB_05695a78:
    if (*pbVar38 == 0) goto LAB_05695b45;
    uVar35 = 0xcbf29ce484222325;
    uVar15 = func_0x0eee2e90(pbVar38);
    if (uVar15 != 0) {
      uVar30 = (ulong)((uint)uVar15 & 7);
      if (7 < uVar15) {
        uVar15 = uVar15 & 0xfffffffffffffff8;
        do {
          uVar35 = (((((((uVar35 * 0x100000001b3 ^ (ulong)*pbVar38) * 0x100000001b3 ^
                        (ulong)pbVar38[1]) * 0x100000001b3 ^ (ulong)pbVar38[2]) * 0x100000001b3 ^
                      (ulong)pbVar38[3]) * 0x100000001b3 ^ (ulong)pbVar38[4]) * 0x100000001b3 ^
                    (ulong)pbVar38[5]) * 0x100000001b3 ^ (ulong)pbVar38[6]) * 0x100000001b3 ^
                   (ulong)pbVar38[7];
          pbVar38 = pbVar38 + 8;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar30 != 0) {
        uVar15 = 0;
        do {
          uVar35 = uVar35 * 0x100000001b3 ^ (ulong)pbVar38[uVar15];
          uVar15 = uVar15 + 1;
        } while (uVar30 != uVar15);
      }
    }
  }
  plStack_3a8 = (long *)0x0;
  uStack_218 = uVar35;
  func_0x0564b850(&plStack_3a0,&plStack_d8);
  bStack_260 = 0;
  uStack_25f = 0;
  plStack_268 = (long *)&UNK_0efd8668;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar16 = plStack_3a8;
  puVar16[1] = plStack_3a0;
  puVar16[5] = uStack_380;
  puVar16[3] = plStack_390;
  puVar16[4] = pbStack_388;
  plStack_390 = (long *)0x0;
  pbStack_388 = (byte *)0x0;
  uStack_380 = 0;
  puVar16[8] = uStack_368;
  puVar16[6] = uStack_378;
  puVar16[7] = uStack_370;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  puVar16[0xb] = uStack_350;
  puVar16[9] = uStack_360;
  puVar16[10] = uStack_358;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  puVar16[0xe] = uStack_338;
  puVar16[0xc] = uStack_348;
  puVar16[0xd] = uStack_340;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  puVar16[0x11] = uStack_320;
  *(undefined4 *)(puVar16 + 0xf) = (undefined4)uStack_330;
  *(undefined4 *)((long)puVar16 + 0x7c) = uStack_330._4_4_;
  *(undefined4 *)(puVar16 + 0x10) = (undefined4)uStack_328;
  *(undefined4 *)((long)puVar16 + 0x84) = uStack_328._4_4_;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  bStack_260 = (byte)puVar16;
  uStack_25f = (undefined7)((ulong)puVar16 >> 8);
  plStack_2a8 = (long *)0x0;
  bStack_2a0 = 0;
  uStack_29f = 0;
  uStack_29b = (uint)uStack_29b._3_1_ << 0x18;
  if (plStack_268 == (long *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_268)(&plStack_268,&plStack_2a8);
    plVar19 = plStack_268;
  }
  plStack_268 = (long *)0x0;
  plStack_2a8 = plVar19;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0efd8498;
  plStack_2f8 = (long *)0x0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2ea = 0;
  if (plVar19 == (long *)0x0) {
    plStack_2f8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar19)(&plStack_2a8,&plStack_2f8);
    plStack_2f8 = plStack_2a8;
  }
  plStack_2a8 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  func_0x04aa75f0(plVar17 + 0xe,&uStack_2f9,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar19 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0efd84e8;
  plVar17[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar17 + 0x2f) = 1;
  plVar17[0x30] = 0;
  plVar17[0x31] = 0;
  if (plStack_2f8 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2f8)(&plStack_2f8,plVar17 + 0x30);
    plVar20 = plStack_2f8;
  }
  plStack_2f8 = (long *)0x0;
  plVar17[0x30] = (long)plVar20;
  puVar1 = (uint *)(plVar17 + 0x12);
  if (plVar19 == (long *)&DAT_0f552078) {
    plVar17[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552090;
        uVar10 = uRam000000000f55208c;
        uVar9 = _DAT_0f552088;
        uVar8 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
        *(undefined4 *)(plVar17 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar39 = (_DAT_0f552080 & 1) != 0;
      lVar28 = 0xf552081;
      if (bVar39) {
        lVar28 = _DAT_0f552090;
      }
      uVar35 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar39) {
        uVar35 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar28,uVar35);
    }
    plVar17[0x11] = _DAT_0f552078;
    plVar17[0x15] = 0;
    if (plStack_2f8 != (long *)0x0) {
      (*(code *)plStack_2f8[1])(&plStack_2f8);
    }
  }
  plVar20 = plVar17 + 1;
  if (plStack_2a8 != (long *)0x0) {
    (*(code *)plStack_2a8[1])(&plStack_2a8);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0efd85c8;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0efd8618;
  puVar16[0xe] = plVar17 + 4;
  puVar16[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  bStack_2f0 = (byte)puVar16;
  uStack_2ef = (undefined5)((ulong)puVar16 >> 8);
  uStack_2ea = (undefined2)((ulong)puVar16 >> 0x30);
  plStack_2f8 = puVar16 + 4;
  puVar18 = (undefined4 *)func_0x056d56e0(uVar27,&uStack_218);
  plVar21 = *(long **)(puVar18 + 0x24);
  if (plVar21 < *(long **)(puVar18 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar19) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar17[0x14];
        lVar28 = plVar17[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar28;
      }
      else {
        func_0x04885070(plVar21 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar21 = *plVar19;
    plVar21[5] = (long)(puVar16 + 4);
    plVar21[6] = (long)puVar16;
    LOCK();
    puVar16[1] = puVar16[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar18 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x056d74a0(puVar18 + 0x22,plVar19,&plStack_2f8);
  }
  *(long **)(puVar18 + 0x24) = plVar21;
  uVar8 = *puVar18;
  uVar9 = puVar18[1];
  uVar10 = puVar18[2];
  uVar11 = puVar18[3];
  if (*(long *)(puVar18 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar18 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
  *(undefined4 *)(plVar17 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar21 = plVar19 + 1;
    lVar28 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      FUN_0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
  plVar19 = (long *)CONCAT26(uStack_2ea,CONCAT51(uStack_2ef,bStack_2f0));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar21 = plVar19 + 1;
    lVar28 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      FUN_0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar28 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
    LOCK();
    lVar28 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  if ((uStack_330 & 1) != 0) {
    func_0x0412a280(uStack_320,uStack_330 & 0xfffffffffffffffe);
  }
  if ((uStack_348 & 1) != 0) {
    func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
  }
  if ((uStack_360 & 1) != 0) {
    func_0x0412a280(uStack_350,uStack_360 & 0xfffffffffffffffe);
  }
  if ((uStack_378 & 1) != 0) {
    func_0x0412a280(uStack_368,uStack_378 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,(ulong)plStack_390 & 0xfffffffffffffffe);
  }
  if ((uStack_210 & 1) != 0) {
    func_0x0412a280(pbStack_200,CONCAT44(uStack_20c,uStack_210) & 0xfffffffffffffffe);
  }
  plStack_3a8 = (long *)0x0;
  plStack_3a0 = (long *)((ulong)plStack_3a0 & 0xffffffffffffff00);
  func_0x0564b850(&plStack_398,&plStack_d8);
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2ea = 0;
  plStack_2f8 = (long *)&UNK_0efd8680;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  pplVar36 = (long **)(plVar17 + 0x26);
  *(undefined1 *)(puVar16 + 1) = plStack_3a0._0_1_;
  *puVar16 = plStack_3a8;
  puVar16[2] = plStack_398;
  puVar16[6] = uStack_378;
  puVar16[4] = pbStack_388;
  puVar16[5] = uStack_380;
  pbStack_388 = (byte *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  puVar16[9] = uStack_360;
  puVar16[7] = uStack_370;
  puVar16[8] = uStack_368;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  puVar16[0xc] = uStack_348;
  puVar16[10] = uStack_358;
  puVar16[0xb] = uStack_350;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  puVar16[0xf] = uStack_330;
  puVar16[0xd] = uStack_340;
  puVar16[0xe] = uStack_338;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  puVar16[0x12] = uStack_318;
  *(undefined4 *)(puVar16 + 0x10) = (undefined4)uStack_328;
  *(undefined4 *)((long)puVar16 + 0x84) = uStack_328._4_4_;
  *(undefined4 *)(puVar16 + 0x11) = (undefined4)uStack_320;
  *(undefined4 *)((long)puVar16 + 0x8c) = uStack_320._4_4_;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  bStack_2f0 = (byte)puVar16;
  uStack_2ef = (undefined5)((ulong)puVar16 >> 8);
  uStack_2ea = (undefined2)((ulong)puVar16 >> 0x30);
  if (pplVar36 == &plStack_2f8) {
    func_0x0564b7b0(puVar16 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar16);
    plVar19 = plStack_308;
  }
  else {
    plVar19 = (long *)&UNK_0efd8680;
    if ((*pplVar36 == (long *)0x0) ||
       ((*(code *)(*pplVar36)[1])(pplVar36), plVar19 = plStack_2f8, plStack_2f8 != (long *)0x0)) {
      (*(code *)*plVar19)(&plStack_2f8,pplVar36);
      plVar19 = plStack_2f8;
    }
    else {
      plVar19 = (long *)0x0;
    }
    plStack_2f8 = (long *)0x0;
    *pplVar36 = plVar19;
    plVar19 = plStack_308;
  }
  plStack_308 = plVar19;
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,uStack_328 & 0xfffffffffffffffe);
  }
  if ((uStack_340 & 1) != 0) {
    func_0x0412a280(uStack_330,uStack_340 & 0xfffffffffffffffe);
  }
  if ((uStack_358 & 1) != 0) {
    func_0x0412a280(uStack_348,uStack_358 & 0xfffffffffffffffe);
  }
  if ((uStack_370 & 1) != 0) {
    func_0x0412a280(uStack_360,uStack_370 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,(ulong)pbStack_388 & 0xfffffffffffffffe);
  }
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,CONCAT44(uStack_64,uStack_68) & 0xfffffffffffffffe);
  }
  if ((bStack_80 & 1) != 0) {
    func_0x0412a280(uStack_70,CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
  }
  if ((bStack_98 & 1) != 0) {
    func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
  }
  if ((bStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
  }
  if ((bStack_c8 & 1) != 0) {
    func_0x0412a280(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
  }
  if ((bStack_48 & 1) != 0) {
    func_0x0412a280(uStack_38,CONCAT62(uStack_46,CONCAT11(uStack_47,bStack_48)) & 0xfffffffffffffffe
                   );
  }
  if ((bStack_108 & 1) != 0) {
    func_0x0412a280(uStack_f8,
                    CONCAT53(uStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,bStack_108))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,
                    CONCAT53(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,bStack_f0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_1c0 & 1) != 0) {
    func_0x0412a280(uStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
  }
  uVar27 = *plVar19;
  uStack_2e2 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  bStack_2f0 = 0x1a;
  uStack_2ef = 0x72746e6f63;
  uStack_2ea = 0x6c6f;
  uStack_2e8 = 0x5f;
  uStack_2e7 = 0x7367616c66;
  plStack_2f8 = (long *)0x86e3afe1b1c6e2ac;
  bStack_2a0 = 0;
  uStack_29f = 0;
  uStack_29b = uStack_29b & 0xff000000;
  plStack_2a8 = (long *)&UNK_0efd8890;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0efd86a8;
  plStack_3a8 = (long *)0x0;
  plStack_3a0 = (long *)0x0;
  if (plStack_2a8 == (long *)0x0) {
    plStack_3a8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2a8)(&plStack_2a8,&plStack_3a8);
    plStack_3a8 = plStack_2a8;
  }
  plStack_2a8 = (long *)0x0;
  plVar19[4] = (long)&UNK_0f2ccd78;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[0xc] = 0;
  *(undefined1 *)(plVar19 + 0xd) = 0;
  func_0x04aa75f0(plVar19 + 0xe,&plStack_268,&UNK_01254d89);
  *(undefined1 *)(plVar19 + 0x10) = 0;
  plVar17 = plVar19 + 0x11;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0xffffffff;
  plVar19[0x26] = 0;
  plVar19[0x27] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[4] = (long)&UNK_0efd86f8;
  pplVar36 = (long **)(plVar19 + 0x2e);
  plVar19[0x2e] = 0;
  plVar19[0x2f] = 0;
  if (pplVar36 != &plStack_3a8) {
    if (plStack_3a8 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_3a8)(&plStack_3a8,pplVar36);
      plVar20 = plStack_3a8;
    }
    plStack_3a8 = (long *)0x0;
    *pplVar36 = plVar20;
  }
  puVar1 = (uint *)(plVar19 + 0x12);
  if (plVar17 != (long *)&DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar19[0x14] = _DAT_0f551f70;
        uVar10 = uRam000000000f551f6c;
        uVar9 = _DAT_0f551f68;
        uVar8 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar19 + 0x94) = uVar8;
        *(undefined4 *)(plVar19 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar19 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar39 = (_DAT_0f551f60 & 1) != 0;
      lVar28 = 0xf551f61;
      if (bVar39) {
        lVar28 = _DAT_0f551f70;
      }
      uVar35 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar39) {
        uVar35 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar1,lVar28,uVar35);
    }
  }
  pbVar38 = (byte *)(plVar19 + 1);
  plVar19[0x11] = _DAT_0f551f58;
  plVar19[0x15] = 0;
  if (plStack_3a8 != (long *)0x0) {
    (*(code *)plStack_3a8[1])(&plStack_3a8);
  }
  LOCK();
  *(long *)pbVar38 = *(long *)pbVar38 + 1;
  UNLOCK();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0efd87f0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0efd8840;
  plVar20[0xe] = (long)(plVar19 + 4);
  plVar20[0xf] = (long)plVar19;
  LOCK();
  plVar19[1] = plVar19[1] + 1;
  UNLOCK();
  plStack_3a8 = plVar20 + 4;
  plStack_3a0 = plVar20;
  puVar18 = (undefined4 *)func_0x056d56e0(uVar27,&plStack_2f8);
  plVar21 = *(long **)(puVar18 + 0x24);
  if (plVar21 < *(long **)(puVar18 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar17) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar19[0x14];
        lVar28 = plVar19[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar28;
      }
      else {
        func_0x04885070(plVar21 + 1,plVar19[0x14],plVar19[0x13]);
      }
    }
    *plVar21 = *plVar17;
    plVar21[5] = (long)(plVar20 + 4);
    plVar21[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar18 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x056d74a0(puVar18 + 0x22,plVar17,&plStack_3a8);
  }
  *(long **)(puVar18 + 0x24) = plVar21;
  uVar8 = *puVar18;
  uVar9 = puVar18[1];
  uVar10 = puVar18[2];
  uVar11 = puVar18[3];
  if (*(long *)(puVar18 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar18 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar19[0xf];
  *(undefined4 *)(plVar19 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar19 + 0x74) = uVar9;
  *(undefined4 *)(plVar19 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar19 + 0x7c) = uVar11;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar20 = plVar17 + 1;
    lVar28 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_3a0;
  *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
  if (plStack_3a0 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_3a0 + 1;
    lVar28 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar28 == 0) {
      (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
      FUN_0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar28 = *(long *)pbVar38;
  *(long *)pbVar38 = *(long *)pbVar38 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_0412c2d0(plVar19);
    LOCK();
    lVar28 = *(long *)pbVar38;
    *(long *)pbVar38 = *(long *)pbVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *(long *)pbVar38;
    *(long *)pbVar38 = *(long *)pbVar38 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_0412c2d0(plVar19);
  }
  if (plStack_2a8 != (long *)0x0) {
    (*(code *)plStack_2a8[1])(&plStack_2a8);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(uStack_2e0,
                    CONCAT26(uStack_2ea,CONCAT51(uStack_2ef,bStack_2f0)) & 0xfffffffffffffffe);
  }
  bStack_260 = 0;
  uStack_25f = 0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2ea = 0;
  plStack_268 = (long *)0x0;
  plStack_2f8 = (long *)&UNK_0efd8ae0;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_3a8 = plStack_2f8;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0efd88b8;
  plStack_3a0 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
  plVar17[4] = (long)&UNK_0f2ccd78;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  *(undefined1 *)(plVar17 + 0xd) = 0;
  func_0x04aa75f0(plVar17 + 0xe,&uStack_218,&UNK_01254d89);
  *(undefined1 *)(plVar17 + 0x10) = 0;
  plVar20 = plVar17 + 0x11;
  plVar17[0x11] = 0;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  plVar17[0x16] = 0;
  plVar17[0x17] = 0xffffffff;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x18] = 0;
  plVar17[0x19] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x1f] = 0;
  plVar17[4] = (long)&UNK_0efd8908;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  plVar17[0x30] = 0;
  plVar17[0x31] = 0;
  plVar17[0x32] = 0;
  plVar17[0x33] = 0;
  plVar17[0x34] = 0;
  *(undefined4 *)(plVar17 + 0x35) = 0x3f800000;
  plVar17[0x36] = 0;
  plVar17[0x37] = 0;
  if (plStack_3a8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_3a8)(&plStack_3a8,plVar17 + 0x36);
    plVar21 = plStack_3a8;
  }
  plStack_3a8 = (long *)0x0;
  plVar17[0x36] = (long)plVar21;
  *(undefined1 *)(plVar17 + 0x3e) = 0;
  puStack_110 = (uint *)(plVar17 + 0x12);
  if (plVar20 != (long *)&DAT_0f552138) {
    if ((*puStack_110 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar17[0x14] = _DAT_0f552150;
        uVar10 = uRam000000000f55214c;
        uVar9 = _DAT_0f552148;
        uVar8 = uRam000000000f552144;
        *puStack_110 = _DAT_0f552140;
        *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
        *(undefined4 *)(plVar17 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puStack_110,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar39 = (_DAT_0f552140 & 1) != 0;
      lVar28 = 0xf552141;
      if (bVar39) {
        lVar28 = _DAT_0f552150;
      }
      uVar35 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar39) {
        uVar35 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_110,lVar28,uVar35);
    }
  }
  plVar17[0x11] = _DAT_0f552138;
  plVar17[0x15] = 0;
  if (plStack_3a8 != (long *)0x0) {
    (*(code *)plStack_3a8[1])(&plStack_3a8);
  }
  plVar21 = plVar17 + 1;
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar22 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar22[8] = 0;
  pbVar22[9] = 0;
  pbVar22[10] = 0;
  pbVar22[0xb] = 0;
  pbVar22[0xc] = 0;
  pbVar22[0xd] = 0;
  pbVar22[0xe] = 0;
  pbVar22[0xf] = 0;
  pbVar22[0x10] = 0;
  pbVar22[0x11] = 0;
  pbVar22[0x12] = 0;
  pbVar22[0x13] = 0;
  pbVar22[0x14] = 0;
  pbVar22[0x15] = 0;
  pbVar22[0x16] = 0;
  pbVar22[0x17] = 0;
  *(undefined **)pbVar22 = &UNK_0efd89e8;
  pbVar22[0x30] = 0;
  pbVar22[0x31] = 0;
  pbVar22[0x32] = 0;
  pbVar22[0x33] = 0;
  pbVar22[0x34] = 0;
  pbVar22[0x35] = 0;
  pbVar22[0x36] = 0;
  pbVar22[0x37] = 0;
  pbVar22[0x38] = 0;
  pbVar22[0x39] = 0;
  pbVar22[0x3a] = 0;
  pbVar22[0x3b] = 0;
  pbVar22[0x3c] = 0;
  pbVar22[0x3d] = 0;
  pbVar22[0x3e] = 0;
  pbVar22[0x3f] = 0;
  *(undefined **)(pbVar22 + 0x20) = &UNK_0efd8a38;
  *(long **)(pbVar22 + 0x70) = plVar17 + 4;
  *(long **)(pbVar22 + 0x78) = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  puStack_2b0 = (uint *)(pbVar22 + 8);
  plVar25 = (long *)plVar19[0x1c];
  plVar24 = (long *)plVar19[0x1b];
  for (plVar26 = plVar24; plVar26 != plVar25; plVar26 = plVar26 + 0x15) {
    if ((plVar26[0xf] == 0) && (plVar26[0x10] == -1)) goto LAB_05697015;
  }
  if (plVar25 < (long *)plVar19[0x1d]) {
    func_0x0572ea90(plVar25);
    plVar25 = plVar25 + 0x15;
    plVar19[0x1c] = (long)plVar25;
LAB_05696fa9:
    plVar19[0x1c] = (long)plVar25;
    pbVar38 = (byte *)plVar25[-0x15];
    if ((*pbVar38 & 1) == 0) {
      *pbVar38 = 0x26;
      pbVar38 = pbVar38 + 1;
    }
    else {
      pbVar38[8] = 0x13;
      pbVar38[9] = 0;
      pbVar38[10] = 0;
      pbVar38[0xb] = 0;
      pbVar38[0xc] = 0;
      pbVar38[0xd] = 0;
      pbVar38[0xe] = 0;
      pbVar38[0xf] = 0;
      pbVar38 = *(byte **)(pbVar38 + 0x10);
    }
    uVar10 = _UNK_01494d69;
    uVar9 = _UNK_01494d65;
    uVar8 = _UNK_01494d61;
    *(undefined4 *)pbVar38 = _DAT_01494d5d;
    *(undefined4 *)(pbVar38 + 4) = uVar8;
    *(undefined4 *)(pbVar38 + 8) = uVar9;
    *(undefined4 *)(pbVar38 + 0xc) = uVar10;
    pbVar38[0xf] = 0x65;
    pbVar38[0x10] = 0x6e;
    pbVar38[0x11] = 0x74;
    pbVar38[0x12] = 0x3e;
    pbVar38[0x13] = 0;
    lVar28 = plVar19[0x1c];
    plVar26 = (long *)(lVar28 + -0xa8);
    *(char *)(lVar28 + -7) = (char)plVar19[0x10];
    *(undefined8 *)(lVar28 + -0x30) = 0;
    *(undefined8 *)(lVar28 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar28 + -8) = 0;
LAB_05697015:
    pbVar38 = pbVar22 + 0x20;
    plVar31 = (long *)plVar26[0x12];
    if (plVar31 < (long *)plVar26[0x13]) {
      plVar31[2] = 0;
      plVar31[3] = 0;
      *plVar31 = 0;
      plVar31[1] = 0;
      plVar31[4] = 0;
      if (plVar31 != plVar20) {
        if ((*puStack_110 & 1) == 0) {
          plVar31[3] = *(long *)(puStack_110 + 4);
          lVar28 = *(long *)(puStack_110 + 2);
          plVar31[1] = *(long *)puStack_110;
          plVar31[2] = lVar28;
        }
        else {
          func_0x04885070(plVar31 + 1,plVar17[0x14],plVar17[0x13]);
        }
      }
      *plVar31 = *plVar20;
      plVar31[5] = (long)pbVar38;
      plVar31[6] = (long)pbVar22;
      LOCK();
      *(long *)(pbVar22 + 8) = *(long *)(pbVar22 + 8) + 1;
      UNLOCK();
      plVar31 = plVar31 + 7;
      plVar26[0x12] = (long)plVar31;
      goto LAB_0569733f;
    }
    plVar31 = (long *)((long)plVar31 - plVar26[0x11]);
    plVar34 = (long *)(((long)plVar31 >> 3) * 0x6db6db6db6db6db7 + 1);
    if (plVar34 < (long *)0x492492492492493) {
      lVar28 = plVar26[0x13] - plVar26[0x11] >> 3;
      plVar24 = (long *)(lVar28 * -0x2492492492492492);
      if (plVar34 < plVar24) {
        plVar34 = plVar24;
      }
      pbStack_388 = (byte *)(plVar26 + 0x11);
      if (0x249249249249248 < (ulong)(lVar28 * 0x6db6db6db6db6db7)) {
        plVar34 = (long *)0x492492492492492;
      }
      pbStack_220 = pbStack_388;
      if (plVar34 == (long *)0x0) {
        plVar24 = (long *)0x0;
      }
      else {
        if ((long *)0x492492492492492 < plVar34) goto LAB_05698ac3;
        plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar34 * 0x38);
        if (plVar24 == (long *)0x0) {
          func_0x0eec74c0((long)plVar34 * 0x38,0);
          plVar24 = (long *)0x0;
        }
      }
      plVar25 = (long *)((long)plVar24 + (long)plVar31);
      plStack_390 = plVar24 + (long)plVar34 * 7;
      *(undefined8 *)((long)(plVar24 + 2) + (long)plVar31) = 0;
      ((undefined8 *)((long)(plVar24 + 2) + (long)plVar31))[1] = 0;
      *(undefined8 *)((long)plVar24 + (long)plVar31) = 0;
      ((undefined8 *)((long)plVar24 + (long)plVar31))[1] = 0;
      *(undefined8 *)((long)(plVar24 + 4) + (long)plVar31) = 0;
      plStack_398 = plVar25;
      plStack_3a8 = plVar24;
      plStack_3a0 = plVar25;
      if (plVar25 != plVar20) {
        if ((*puStack_110 & 1) == 0) {
          *(long *)((long)plVar31 + (long)(plVar24 + 3)) = *(long *)(puStack_110 + 4);
          uVar12 = puStack_110[1];
          uVar13 = puStack_110[2];
          uVar14 = puStack_110[3];
          *(uint *)((long)plVar31 + (long)(plVar24 + 1)) = *puStack_110;
          *(uint *)((long)plVar31 + (long)plVar24 + 0xc) = uVar12;
          *(uint *)((long)plVar31 + (long)(plVar24 + 2)) = uVar13;
          *(uint *)((long)plVar31 + (long)plVar24 + 0x14) = uVar14;
        }
        else {
          func_0x04885070((uint *)((long)plVar31 + (long)(plVar24 + 1)),plVar17[0x14],plVar17[0x13])
          ;
        }
      }
      *plVar25 = *plVar20;
      plVar25[5] = (long)pbVar38;
      plVar25[6] = (long)pbVar22;
      LOCK();
      *(long *)(pbVar22 + 8) = *(long *)(pbVar22 + 8) + 1;
      UNLOCK();
      plStack_398 = plStack_398 + 7;
      puVar32 = (undefined8 *)plVar26[0x11];
      puVar6 = (undefined8 *)plVar26[0x12];
      puVar16 = (undefined8 *)((long)plStack_3a0 + ((long)puVar32 - (long)puVar6));
      puVar23 = puVar16;
      puVar29 = puVar32;
      if ((long)puVar32 - (long)puVar6 != 0) {
        do {
          puVar23[2] = 0;
          puVar23[3] = 0;
          *puVar23 = 0;
          puVar23[1] = 0;
          puVar23[4] = 0;
          puVar23[3] = puVar29[3];
          uVar27 = puVar29[2];
          puVar23[1] = puVar29[1];
          puVar23[2] = uVar27;
          *(undefined2 *)(puVar29 + 1) = 0;
          *puVar23 = *puVar29;
          uVar8 = *(undefined4 *)((long)puVar29 + 0x2c);
          uVar9 = *(undefined4 *)(puVar29 + 6);
          uVar10 = *(undefined4 *)((long)puVar29 + 0x34);
          *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(puVar29 + 5);
          *(undefined4 *)((long)puVar23 + 0x2c) = uVar8;
          *(undefined4 *)(puVar23 + 6) = uVar9;
          *(undefined4 *)((long)puVar23 + 0x34) = uVar10;
          puVar29[5] = 0;
          puVar29[6] = 0;
          puVar29 = puVar29 + 7;
          puVar23 = puVar23 + 7;
        } while (puVar29 != puVar6);
        do {
          plVar20 = (long *)puVar32[6];
          if (plVar20 == (long *)0x0) {
LAB_056972c4:
            bVar4 = *(byte *)(puVar32 + 1);
          }
          else {
            LOCK();
            plVar24 = plVar20 + 1;
            lVar28 = *plVar24;
            *plVar24 = *plVar24 + -1;
            UNLOCK();
            if (lVar28 != 0) goto LAB_056972c4;
            (**(code **)(*plVar20 + 0x10))(plVar20);
            FUN_0412c2d0(plVar20);
            bVar4 = *(byte *)(puVar32 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar32[3],puVar32[1] & 0xfffffffffffffffe);
          }
          puVar32 = puVar32 + 7;
        } while (puVar32 != puVar6);
        puVar32 = *(undefined8 **)pbStack_220;
      }
      plVar31 = plStack_398;
      plVar26[0x11] = (long)puVar16;
      plVar26[0x12] = (long)plStack_398;
      lVar28 = plVar26[0x13];
      plVar26[0x13] = (long)plStack_390;
      if (puVar32 != (undefined8 *)0x0) {
        func_0x0412a280(puVar32,lVar28 - (long)puVar32);
      }
LAB_0569733f:
      plVar26[0x12] = (long)plVar31;
      lVar28 = *plVar26;
      uVar8 = *(undefined4 *)((long)plVar26 + 4);
      lVar5 = plVar26[1];
      uVar9 = *(undefined4 *)((long)plVar26 + 0xc);
      if (plVar26[1] != 0) {
        LOCK();
        plVar20 = (long *)(plVar26[1] + 8);
        *plVar20 = *plVar20 + 1;
        UNLOCK();
      }
      plVar20 = (long *)plVar17[0xf];
      *(int *)(plVar17 + 0xe) = (int)lVar28;
      *(undefined4 *)((long)plVar17 + 0x74) = uVar8;
      *(int *)(plVar17 + 0xf) = (int)lVar5;
      *(undefined4 *)((long)plVar17 + 0x7c) = uVar9;
      if (plVar20 != (long *)0x0) {
        LOCK();
        plVar24 = plVar20 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          FUN_0412c2d0(plVar20);
        }
      }
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)plVar26 + 0xa1);
      LOCK();
      lVar28 = *(long *)puStack_2b0;
      *(long *)puStack_2b0 = *(long *)puStack_2b0 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*(long *)pbVar22 + 0x10))(pbVar22);
        FUN_0412c2d0(pbVar22);
      }
      LOCK();
      lVar28 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
        LOCK();
        lVar28 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
      }
      plVar17 = plStack_308;
      pplVar36 = (long **)(plVar19 + 0x26);
      if (plStack_268 != (long *)0x0) {
        (*(code *)plStack_268[1])(&plStack_268);
      }
      plStack_3a0 = (long *)0x0;
      plStack_3a8 = (long *)&UNK_0efd8af8;
      if (pplVar36 != &plStack_3a8) {
        if ((*pplVar36 == (long *)0x0) ||
           ((*(code *)(*pplVar36)[1])(pplVar36), plStack_3a8 != (long *)0x0)) {
          (*(code *)*plStack_3a8)(&plStack_3a8,pplVar36);
          plVar19 = plStack_3a8;
        }
        else {
          plVar19 = (long *)0x0;
        }
        *pplVar36 = plVar19;
      }
      if ((uStack_1d8 & 1) != 0) {
        func_0x0412a280(puStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
      }
      plVar19 = (long *)*plVar17;
      puStack_1e0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puStack_1e0 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x48,0);
        plVar17 = plStack_308;
      }
      uVar27 = _UNK_012d7838;
      uStack_1f0 = 0x49;
      uStack_1e8 = 0x47;
      *(undefined8 *)(puStack_1e0 + 0xc) = _DAT_012d7830;
      *(undefined8 *)(puStack_1e0 + 0xe) = uVar27;
      uVar27 = _UNK_012d7828;
      *(undefined8 *)(puStack_1e0 + 8) = _DAT_012d7820;
      *(undefined8 *)(puStack_1e0 + 10) = uVar27;
      uVar27 = _UNK_012d7818;
      *(undefined8 *)(puStack_1e0 + 4) = _DAT_012d7810;
      *(undefined8 *)(puStack_1e0 + 6) = uVar27;
      uVar10 = _UNK_012d780c;
      uVar9 = _UNK_012d7808;
      uVar8 = _UNK_012d7804;
      *puStack_1e0 = _DAT_012d7800;
      puStack_1e0[1] = uVar8;
      puStack_1e0[2] = uVar9;
      puStack_1e0[3] = uVar10;
      *(undefined8 *)((long)puStack_1e0 + 0x3f) = 0x2e736b726f776572;
      *(undefined1 *)((long)puStack_1e0 + 0x47) = 0;
      (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_1f0);
      if ((uStack_1f0 & 1) != 0) {
        func_0x0412a280(puStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
      }
      uVar27 = *plVar17;
      plVar19 = (long *)plVar17[1];
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
      }
      uStack_257 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      bStack_260 = 0x10;
      uStack_25f = 0x6f697461727564;
      uStack_258 = 0x6e;
      plStack_268 = (long *)0x6489ce9716a286f9;
      bStack_2f0 = 8;
      uStack_2ef = 0;
      uStack_2ea = 0;
      plStack_d0 = (long *)0x8;
      plStack_2f8 = (long *)0x0;
      plStack_d8 = (long *)&UNK_0efd2b38;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      plStack_3a8 = plStack_d8;
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0efd2910;
      plStack_d8 = (long *)0x0;
      plStack_3a0 = plStack_d0;
      plVar17[4] = (long)&UNK_0f2ccd78;
      plVar17[5] = 0;
      plVar17[6] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[9] = 0;
      plVar17[10] = 0;
      plVar17[0xb] = 0;
      plVar17[0xc] = 0;
      *(undefined1 *)(plVar17 + 0xd) = 0;
      func_0x04aa75f0(plVar17 + 0xe,&uStack_218,&UNK_01254d89);
      *(undefined1 *)(plVar17 + 0x10) = 0;
      plVar20 = plVar17 + 0x11;
      plVar17[0x11] = 0;
      plVar17[0x12] = 0;
      plVar17[0x13] = 0;
      plVar17[0x14] = 0;
      plVar17[0x15] = 0;
      plVar17[0x16] = 0;
      plVar17[0x17] = 0xffffffff;
      plVar17[0x26] = 0;
      plVar17[0x27] = 0;
      plVar17[0x18] = 0;
      plVar17[0x19] = 0;
      plVar17[0x1a] = 0;
      plVar17[0x1b] = 0;
      plVar17[0x1c] = 0;
      plVar17[0x1d] = 0;
      plVar17[0x1e] = 0;
      plVar17[0x1f] = 0;
      plVar17[4] = (long)&UNK_0efd2960;
      plVar17[0x2e] = _DAT_014eae60;
      *(undefined1 *)(plVar17 + 0x2f) = 1;
      plVar17[0x30] = 0;
      plVar17[0x31] = 0;
      if (plStack_3a8 == (long *)0x0) {
        plVar21 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_3a8)(&plStack_3a8,plVar17 + 0x30);
        plVar21 = plStack_3a8;
      }
      plVar26 = plVar17 + 4;
      plStack_3a8 = (long *)0x0;
      plVar17[0x30] = (long)plVar21;
      puStack_2b0 = (uint *)(plVar17 + 0x12);
      if (plVar20 == (long *)&DAT_0f552018) {
        plVar17[0x15] = 0;
      }
      else {
        if ((*puStack_2b0 & 1) == 0) {
          if ((_DAT_0f552020 & 1) == 0) {
            plVar17[0x14] = _DAT_0f552030;
            uVar10 = uRam000000000f55202c;
            uVar9 = _DAT_0f552028;
            uVar8 = uRam000000000f552024;
            *puStack_2b0 = _DAT_0f552020;
            *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
            *(undefined4 *)(plVar17 + 0x13) = uVar9;
            *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
          }
          else {
            func_0x04885070(puStack_2b0,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
          }
        }
        else {
          bVar39 = (_DAT_0f552020 & 1) != 0;
          lVar28 = 0xf552021;
          if (bVar39) {
            lVar28 = _DAT_0f552030;
          }
          uVar35 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
          if (bVar39) {
            uVar35 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
          }
          func_0x04885120(puStack_2b0,lVar28,uVar35);
        }
        plVar17[0x11] = _DAT_0f552018;
        plVar17[0x15] = 0;
        if (plStack_3a8 != (long *)0x0) {
          (*(code *)plStack_3a8[1])(&plStack_3a8);
        }
      }
      plVar21 = plVar17 + 1;
      if (plStack_d8 != (long *)0x0) {
        (*(code *)plStack_d8[1])(&plStack_d8);
      }
      LOCK();
      *plVar21 = *plVar21 + 1;
      UNLOCK();
      plVar24 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar24 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar24[1] = 0;
      plVar24[2] = 0;
      *plVar24 = (long)&UNK_0efd2a40;
      plVar24[6] = 0;
      plVar24[7] = 0;
      plVar24[4] = (long)&UNK_0efd2a90;
      plVar24[0xe] = (long)plVar26;
      plVar24[0xf] = (long)plVar17;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      plStack_3a8 = plVar24 + 4;
      plStack_3a0 = plVar24;
      puVar18 = (undefined4 *)func_0x056d56e0(uVar27,&plStack_268);
      plVar25 = *(long **)(puVar18 + 0x24);
      if (plVar25 < *(long **)(puVar18 + 0x26)) {
        plVar25[2] = 0;
        plVar25[3] = 0;
        *plVar25 = 0;
        plVar25[1] = 0;
        plVar25[4] = 0;
        if (plVar25 != plVar20) {
          if ((*puStack_2b0 & 1) == 0) {
            plVar25[3] = *(long *)(puStack_2b0 + 4);
            lVar28 = *(long *)(puStack_2b0 + 2);
            plVar25[1] = *(long *)puStack_2b0;
            plVar25[2] = lVar28;
          }
          else {
            func_0x04885070(plVar25 + 1,plVar17[0x14],plVar17[0x13]);
          }
        }
        *plVar25 = *plVar20;
        plVar25[5] = (long)(plVar24 + 4);
        plVar25[6] = (long)plVar24;
        LOCK();
        plVar24[1] = plVar24[1] + 1;
        UNLOCK();
        plVar25 = plVar25 + 7;
        *(long **)(puVar18 + 0x24) = plVar25;
      }
      else {
        plVar25 = (long *)func_0x056d74a0(puVar18 + 0x22,plVar20,&plStack_3a8);
      }
      plVar20 = plStack_308;
      *(long **)(puVar18 + 0x24) = plVar25;
      uVar8 = *puVar18;
      uVar9 = puVar18[1];
      uVar10 = puVar18[2];
      uVar11 = puVar18[3];
      if (*(long *)(puVar18 + 2) != 0) {
        LOCK();
        plVar24 = (long *)(*(long *)(puVar18 + 2) + 8);
        *plVar24 = *plVar24 + 1;
        UNLOCK();
      }
      plVar24 = (long *)plVar17[0xf];
      *(undefined4 *)(plVar17 + 0xe) = uVar8;
      *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
      *(undefined4 *)(plVar17 + 0xf) = uVar10;
      *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
      if (plVar24 != (long *)0x0) {
        LOCK();
        plVar25 = plVar24 + 1;
        lVar28 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          FUN_0412c2d0(plVar24);
        }
      }
      plVar24 = plStack_3a0;
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
      if (plStack_3a0 != (long *)0x0) {
        LOCK();
        plVar25 = plStack_3a0 + 1;
        lVar28 = *plVar25;
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
          FUN_0412c2d0(plVar24);
        }
      }
      LOCK();
      lVar28 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
        LOCK();
        lVar28 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
      }
      if (plStack_2f8 != (long *)0x0) {
        (*(code *)plStack_2f8[1])(&plStack_2f8);
      }
      if ((bStack_260 & 1) != 0) {
        func_0x0412a280(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
      }
      pplVar36 = (long **)(plVar17 + 0x26);
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar17 = plVar19 + 1;
        lVar28 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          FUN_0412c2d0(plVar19);
        }
      }
      plStack_2a8 = (long *)&UNK_0efd2b50;
      bStack_2a0 = 8;
      uStack_29f = 0;
      uStack_29b = 0;
      uStack_297 = CONCAT13(uStack_297._3_1_,0x41f000);
      if (pplVar36 != &plStack_2a8) {
        if ((*pplVar36 == (long *)0x0) ||
           ((*(code *)(*pplVar36)[1])(pplVar36), plStack_2a8 != (long *)0x0)) {
          (*(code *)*plStack_2a8)(&plStack_2a8,pplVar36);
          plVar17 = plStack_2a8;
        }
        else {
          plVar17 = (long *)0x0;
        }
        *pplVar36 = plVar17;
      }
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      (**(code **)(*plVar26 + 0x18))(plVar26,&uStack_128,&uStack_148);
      if ((uStack_148 & 1) != 0) {
        func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
      }
      if ((uStack_128 & 1) != 0) {
        func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar17 = plVar19 + 1;
        lVar28 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          FUN_0412c2d0(plVar19);
        }
      }
      uVar27 = *plVar20;
      plVar19 = (long *)plVar20[1];
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar19[1] = plVar19[1] + 1;
        UNLOCK();
      }
      uStack_28d = 0;
      uStack_288 = 0;
      bStack_2a0 = 0x24;
      uStack_29f = _DAT_0125853d;
      uStack_29b = _UNK_01258541;
      uStack_297 = _UNK_01258545;
      uStack_293 = _UNK_01258549;
      uStack_28f = 0x6c61;
      plStack_2a8 = (long *)0xab0c5f17ac942253;
      bStack_2f0 = 0xc;
      uStack_2ef = 0;
      uStack_2ea = 0;
      plStack_d0 = (long *)0xc;
      plStack_2f8 = (long *)0x0;
      plStack_d8 = (long *)&UNK_0efd2d48;
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(0x1c0,0);
      }
      plStack_3a8 = plStack_d8;
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0efd2b78;
      plStack_d8 = (long *)0x0;
      plStack_3a0 = plStack_d0;
      plVar17[4] = (long)&UNK_0f2ccd78;
      plVar17[5] = 0;
      plVar17[6] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[9] = 0;
      plVar17[10] = 0;
      plVar17[0xb] = 0;
      plVar17[0xc] = 0;
      *(undefined1 *)(plVar17 + 0xd) = 0;
      func_0x04aa75f0(plVar17 + 0xe,&plStack_268,&UNK_01254d89);
      *(undefined1 *)(plVar17 + 0x10) = 0;
      plVar20 = plVar17 + 0x11;
      plVar17[0x11] = 0;
      plVar17[0x12] = 0;
      plVar17[0x13] = 0;
      plVar17[0x14] = 0;
      plVar17[0x15] = 0;
      plVar17[0x16] = 0;
      plVar17[0x17] = 0xffffffff;
      plVar17[0x26] = 0;
      plVar17[0x27] = 0;
      plVar17[0x18] = 0;
      plVar17[0x19] = 0;
      plVar17[0x1a] = 0;
      plVar17[0x1b] = 0;
      plVar17[0x1c] = 0;
      plVar17[0x1d] = 0;
      plVar17[0x1e] = 0;
      plVar17[0x1f] = 0;
      plVar17[4] = (long)&UNK_0efd2bc8;
      plVar17[0x2e] = _DAT_014eae60;
      plVar17[0x30] = 0;
      plVar17[0x31] = 0;
      if (plStack_3a8 == (long *)0x0) {
        plVar21 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_3a8)(&plStack_3a8,plVar17 + 0x30);
        plVar21 = plStack_3a8;
      }
      plStack_3a8 = (long *)0x0;
      plVar17[0x30] = (long)plVar21;
      puVar1 = (uint *)(plVar17 + 0x12);
      if (plVar20 == (long *)&DAT_0f552048) {
        plVar17[0x15] = 0;
      }
      else {
        if ((*puVar1 & 1) == 0) {
          if ((_DAT_0f552050 & 1) == 0) {
            plVar17[0x14] = _DAT_0f552060;
            uVar10 = uRam000000000f55205c;
            uVar9 = _DAT_0f552058;
            uVar8 = uRam000000000f552054;
            *puVar1 = _DAT_0f552050;
            *(undefined4 *)((long)plVar17 + 0x94) = uVar8;
            *(undefined4 *)(plVar17 + 0x13) = uVar9;
            *(undefined4 *)((long)plVar17 + 0x9c) = uVar10;
          }
          else {
            func_0x04885070(puVar1,_DAT_0f552060,CONCAT44(uRam000000000f55205c,_DAT_0f552058));
          }
        }
        else {
          bVar39 = (_DAT_0f552050 & 1) != 0;
          lVar28 = 0xf552051;
          if (bVar39) {
            lVar28 = _DAT_0f552060;
          }
          uVar35 = (ulong)((_DAT_0f552050 & 0xff) >> 1);
          if (bVar39) {
            uVar35 = CONCAT44(uRam000000000f55205c,_DAT_0f552058);
          }
          func_0x04885120(puVar1,lVar28,uVar35);
        }
        plVar17[0x11] = _DAT_0f552048;
        plVar17[0x15] = 0;
        if (plStack_3a8 != (long *)0x0) {
          (*(code *)plStack_3a8[1])(&plStack_3a8);
        }
      }
      plVar21 = plVar17 + 1;
      if (plStack_d8 != (long *)0x0) {
        (*(code *)plStack_d8[1])(&plStack_d8);
      }
      LOCK();
      *plVar21 = *plVar21 + 1;
      UNLOCK();
      plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar26 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar26[1] = 0;
      plVar26[2] = 0;
      *plVar26 = (long)&UNK_0efd2ca8;
      plVar26[6] = 0;
      plVar26[7] = 0;
      plVar26[4] = (long)&UNK_0efd2cf8;
      plVar26[0xe] = (long)(plVar17 + 4);
      plVar26[0xf] = (long)plVar17;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      plStack_3a8 = plVar26 + 4;
      plStack_3a0 = plVar26;
      puStack_2b0 = (uint *)(plVar17 + 4);
      puVar18 = (undefined4 *)func_0x056d56e0(uVar27,&plStack_2a8);
      plVar24 = *(long **)(puVar18 + 0x24);
      if (plVar24 < *(long **)(puVar18 + 0x26)) {
        plVar24[2] = 0;
        plVar24[3] = 0;
        *plVar24 = 0;
        plVar24[1] = 0;
        plVar24[4] = 0;
        if (plVar24 != plVar20) {
          if ((*puVar1 & 1) == 0) {
            plVar24[3] = plVar17[0x14];
            lVar28 = plVar17[0x13];
            plVar24[1] = *(long *)puVar1;
            plVar24[2] = lVar28;
          }
          else {
            func_0x04885070(plVar24 + 1,plVar17[0x14],plVar17[0x13]);
          }
        }
        *plVar24 = *plVar20;
        plVar24[5] = (long)(plVar26 + 4);
        plVar24[6] = (long)plVar26;
        LOCK();
        plVar26[1] = plVar26[1] + 1;
        UNLOCK();
        plVar24 = plVar24 + 7;
        *(long **)(puVar18 + 0x24) = plVar24;
      }
      else {
        plVar24 = (long *)func_0x056d74a0(puVar18 + 0x22,plVar20,&plStack_3a8);
      }
      plVar20 = plStack_308;
      *(long **)(puVar18 + 0x24) = plVar24;
      uVar8 = *puVar18;
      uVar9 = puVar18[1];
      uVar10 = puVar18[2];
      uVar11 = puVar18[3];
      if (*(long *)(puVar18 + 2) != 0) {
        LOCK();
        plVar26 = (long *)(*(long *)(puVar18 + 2) + 8);
        *plVar26 = *plVar26 + 1;
        UNLOCK();
      }
      plVar26 = (long *)plVar17[0xf];
      *(undefined4 *)(plVar17 + 0xe) = uVar8;
      *(undefined4 *)((long)plVar17 + 0x74) = uVar9;
      *(undefined4 *)(plVar17 + 0xf) = uVar10;
      *(undefined4 *)((long)plVar17 + 0x7c) = uVar11;
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar24 = plVar26 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          FUN_0412c2d0(plVar26);
        }
      }
      plVar26 = plStack_3a0;
      *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
      if (plStack_3a0 != (long *)0x0) {
        LOCK();
        plVar24 = plStack_3a0 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
          FUN_0412c2d0(plVar26);
        }
      }
      LOCK();
      lVar28 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
        LOCK();
        lVar28 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar21;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
      }
      if (plStack_2f8 != (long *)0x0) {
        (*(code *)plStack_2f8[1])(&plStack_2f8);
      }
      if ((bStack_2a0 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_28d,CONCAT21(uStack_28f,uStack_293._3_1_)),
                        CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,bStack_2a0)) &
                        0xfffffffffffffffe);
      }
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      (**(code **)(*(long *)puStack_2b0 + 0x18))(puStack_2b0,&uStack_168,&uStack_188);
      if ((uStack_188 & 1) != 0) {
        func_0x0412a280(uStack_178,uStack_188 & 0xfffffffffffffffe);
      }
      if ((uStack_168 & 1) != 0) {
        func_0x0412a280(uStack_158,uStack_168 & 0xfffffffffffffffe);
      }
      if (plVar19 != (long *)0x0) {
        LOCK();
        plVar17 = plVar19 + 1;
        lVar28 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          FUN_0412c2d0(plVar19);
        }
      }
      uVar27 = *plVar20;
      plStack_308 = (long *)plVar20[1];
      if (plStack_308 != (long *)0x0) {
        LOCK();
        plStack_308[1] = plStack_308[1] + 1;
        UNLOCK();
      }
      uStack_297 = 0;
      uStack_293 = 0;
      uStack_28f = 0;
      uStack_28d = 0;
      plStack_2a8 = (long *)0x0;
      bStack_2a0 = 0;
      uStack_29f = 0;
      uStack_29b = 0;
      uStack_288 = 0;
      func_0x0412f5e0(&bStack_2a0,&UNK_014958dd,0x18);
      plStack_2a8 = (long *)0x6aa6125f41be39e0;
      bStack_2f0 = 0x18;
      uStack_2ef = 0;
      uStack_2ea = 0;
      plStack_d0 = (long *)0x18;
      plStack_2f8 = (long *)0x0;
      plStack_d8 = (long *)&UNK_0efd2f40;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar19 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      plStack_3a8 = plStack_d8;
      plVar19[1] = 0;
      plVar19[2] = 0;
      *plVar19 = (long)&UNK_0efd2d70;
      plStack_d8 = (long *)0x0;
      plStack_3a0 = plStack_d0;
      plVar19[4] = (long)&UNK_0f2ccd78;
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[10] = 0;
      plVar19[0xb] = 0;
      plVar19[0xc] = 0;
      *(undefined1 *)(plVar19 + 0xd) = 0;
      func_0x04aa75f0(plVar19 + 0xe,&plStack_268,&UNK_01254d89);
      *(undefined1 *)(plVar19 + 0x10) = 0;
      plVar17 = plVar19 + 0x11;
      plVar19[0x11] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0xffffffff;
      plVar19[0x26] = 0;
      plVar19[0x27] = 0;
      plVar19[0x18] = 0;
      plVar19[0x19] = 0;
      plVar19[0x1a] = 0;
      plVar19[0x1b] = 0;
      plVar19[0x1c] = 0;
      plVar19[0x1d] = 0;
      plVar19[0x1e] = 0;
      plVar19[0x1f] = 0;
      plVar19[4] = (long)&UNK_0efd2dc0;
      plVar19[0x2e] = 0;
      plVar19[0x2f] = 0;
      if (plStack_3a8 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        (*(code *)*plStack_3a8)(&plStack_3a8,plVar19 + 0x2e);
        plVar20 = plStack_3a8;
      }
      plVar21 = plVar19 + 4;
      plStack_3a8 = (long *)0x0;
      plVar19[0x2e] = (long)plVar20;
      puVar1 = (uint *)(plVar19 + 0x12);
      if (plVar17 == (long *)&DAT_0f551ef8) {
        plVar19[0x15] = 0;
      }
      else {
        if ((*puVar1 & 1) == 0) {
          if ((_DAT_0f551f00 & 1) == 0) {
            plVar19[0x14] = _DAT_0f551f10;
            uVar10 = uRam000000000f551f0c;
            uVar9 = _DAT_0f551f08;
            uVar8 = uRam000000000f551f04;
            *puVar1 = _DAT_0f551f00;
            *(undefined4 *)((long)plVar19 + 0x94) = uVar8;
            *(undefined4 *)(plVar19 + 0x13) = uVar9;
            *(undefined4 *)((long)plVar19 + 0x9c) = uVar10;
          }
          else {
            func_0x04885070(puVar1,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
          }
        }
        else {
          bVar39 = (_DAT_0f551f00 & 1) != 0;
          lVar28 = 0xf551f01;
          if (bVar39) {
            lVar28 = _DAT_0f551f10;
          }
          uVar35 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
          if (bVar39) {
            uVar35 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
          }
          func_0x04885120(puVar1,lVar28,uVar35);
        }
        plVar19[0x11] = _DAT_0f551ef8;
        plVar19[0x15] = 0;
        if (plStack_3a8 != (long *)0x0) {
          (*(code *)plStack_3a8[1])(&plStack_3a8);
        }
      }
      plVar20 = plVar19 + 1;
      if (plStack_d8 != (long *)0x0) {
        (*(code *)plStack_d8[1])(&plStack_d8);
      }
      LOCK();
      *plVar20 = *plVar20 + 1;
      UNLOCK();
      plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (plVar26 == (long *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      plVar26[1] = 0;
      plVar26[2] = 0;
      *plVar26 = (long)&UNK_0efd2ea0;
      plVar26[6] = 0;
      plVar26[7] = 0;
      plVar26[4] = (long)&UNK_0efd2ef0;
      plVar26[0xe] = (long)plVar21;
      plVar26[0xf] = (long)plVar19;
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
      plStack_3a8 = plVar26 + 4;
      plStack_3a0 = plVar26;
      puVar18 = (undefined4 *)func_0x056d56e0(uVar27,&plStack_2a8);
      plVar24 = *(long **)(puVar18 + 0x24);
      if (plVar24 < *(long **)(puVar18 + 0x26)) {
        plVar24[2] = 0;
        plVar24[3] = 0;
        *plVar24 = 0;
        plVar24[1] = 0;
        plVar24[4] = 0;
        if (plVar24 != plVar17) {
          if ((*puVar1 & 1) == 0) {
            plVar24[3] = plVar19[0x14];
            lVar28 = plVar19[0x13];
            plVar24[1] = *(long *)puVar1;
            plVar24[2] = lVar28;
          }
          else {
            func_0x04885070(plVar24 + 1,plVar19[0x14],plVar19[0x13]);
          }
        }
        *plVar24 = *plVar17;
        plVar24[5] = (long)(plVar26 + 4);
        plVar24[6] = (long)plVar26;
        LOCK();
        plVar26[1] = plVar26[1] + 1;
        UNLOCK();
        plVar24 = plVar24 + 7;
        *(long **)(puVar18 + 0x24) = plVar24;
      }
      else {
        plVar24 = (long *)func_0x056d74a0(puVar18 + 0x22,plVar17,&plStack_3a8);
      }
      plVar17 = plStack_308;
      *(long **)(puVar18 + 0x24) = plVar24;
      uVar8 = *puVar18;
      uVar9 = puVar18[1];
      uVar10 = puVar18[2];
      uVar11 = puVar18[3];
      if (*(long *)(puVar18 + 2) != 0) {
        LOCK();
        plVar26 = (long *)(*(long *)(puVar18 + 2) + 8);
        *plVar26 = *plVar26 + 1;
        UNLOCK();
      }
      plVar26 = (long *)plVar19[0xf];
      *(undefined4 *)(plVar19 + 0xe) = uVar8;
      *(undefined4 *)((long)plVar19 + 0x74) = uVar9;
      *(undefined4 *)(plVar19 + 0xf) = uVar10;
      *(undefined4 *)((long)plVar19 + 0x7c) = uVar11;
      if (plVar26 != (long *)0x0) {
        LOCK();
        plVar24 = plVar26 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          FUN_0412c2d0(plVar26);
        }
      }
      plVar26 = plStack_3a0;
      *(undefined1 *)(plVar19 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
      if (plStack_3a0 != (long *)0x0) {
        LOCK();
        plVar24 = plStack_3a0 + 1;
        lVar28 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
          FUN_0412c2d0(plVar26);
        }
      }
      LOCK();
      lVar28 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0412c2d0(plVar19);
        LOCK();
        lVar28 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar28 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
      }
      if (lVar28 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0412c2d0(plVar19);
      }
      if (plStack_2f8 != (long *)0x0) {
        (*(code *)plStack_2f8[1])(&plStack_2f8);
      }
      if ((bStack_2a0 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_28d,CONCAT21(uStack_28f,uStack_293._3_1_)),
                        CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,bStack_2a0)) &
                        0xfffffffffffffffe);
      }
      auStack_1a8[0] = 0;
      auStack_1a8[1] = 0;
      auStack_1a8[2] = 0;
      (**(code **)(*plVar21 + 0x10))(plVar21,auStack_1a8);
      if ((auStack_1a8[0] & 1) != 0) {
        func_0x0412a280(auStack_1a8[2],auStack_1a8[0] & 0xfffffffffffffffe);
      }
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar19 = plVar17 + 1;
        lVar28 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar28 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          FUN_0412c2d0(plVar17);
        }
      }
      return;
    }
  }
  else {
    plVar25 = (long *)((long)plVar25 - (long)plVar24);
    plVar34 = (long *)(((long)plVar25 >> 3) * -0x30c30c30c30c30c3 + 1);
    plVar31 = plVar19;
    plVar26 = plVar19;
    if ((long *)0x186186186186186 < plVar34) goto LAB_05698acd;
    lVar28 = plVar19[0x1d] - (long)plVar24 >> 3;
    plVar24 = (long *)(lVar28 * -0x6186186186186186);
    if (plVar34 < plVar24) {
      plVar34 = plVar24;
    }
    pbVar38 = (byte *)(plVar19 + 0x1b);
    if (0xc30c30c30c30c2 < (ulong)(lVar28 * -0x30c30c30c30c30c3)) {
      plVar34 = (long *)0x186186186186186;
    }
    pbStack_388 = pbVar38;
    if (plVar34 == (long *)0x0) {
      plVar26 = (long *)0x0;
LAB_05696dc2:
      plStack_3a0 = (long *)((long)plVar25 + (long)plVar26);
      plStack_390 = plVar26 + (long)plVar34 * 0x15;
      plStack_3a8 = plVar26;
      plStack_398 = plStack_3a0;
      func_0x0572ea90(plStack_3a0);
      plVar25 = plStack_398 + 0x15;
      lVar28 = plVar19[0x1b];
      lVar5 = plVar19[0x1c];
      lVar33 = (lVar28 - lVar5) + (long)plStack_3a0;
      if (lVar28 != lVar5) {
        lVar37 = 0;
        pbStack_220 = pbVar38;
        do {
          uVar27 = ((undefined8 *)(lVar28 + lVar37))[1];
          *(undefined8 *)(lVar33 + lVar37) = *(undefined8 *)(lVar28 + lVar37);
          ((undefined8 *)(lVar33 + lVar37))[1] = uVar27;
          *(undefined8 *)(lVar28 + lVar37) = 0;
          ((undefined8 *)(lVar28 + lVar37))[1] = 0;
          puVar16 = (undefined8 *)(lVar33 + 0x20 + lVar37);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16 = (undefined8 *)(lVar33 + 0x10 + lVar37);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar33 + 0x30 + lVar37) = 0;
          *(undefined8 *)(lVar33 + 0x28 + lVar37) = *(undefined8 *)(lVar28 + 0x28 + lVar37);
          puVar18 = (undefined4 *)(lVar28 + 0x18 + lVar37);
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          puVar3 = (undefined4 *)(lVar33 + 0x18 + lVar37);
          *puVar3 = *puVar18;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined2 *)(lVar28 + 0x18 + lVar37) = 0;
          *(undefined8 *)(lVar33 + 0x10 + lVar37) = *(undefined8 *)(lVar28 + 0x10 + lVar37);
          func_0x04167a20(lVar37 + lVar33 + 0x38,lVar28 + lVar37 + 0x38);
          puVar16 = (undefined8 *)(lVar28 + 0x40 + lVar37);
          uVar27 = puVar16[1];
          puVar32 = (undefined8 *)(lVar33 + 0x40 + lVar37);
          *puVar32 = *puVar16;
          puVar32[1] = uVar27;
          puVar16 = (undefined8 *)(lVar28 + 0x50 + lVar37);
          uVar27 = puVar16[1];
          puVar32 = (undefined8 *)(lVar33 + 0x50 + lVar37);
          *puVar32 = *puVar16;
          puVar32[1] = uVar27;
          puVar16 = (undefined8 *)(lVar28 + 0x60 + lVar37);
          uVar27 = puVar16[1];
          puVar32 = (undefined8 *)(lVar33 + 0x60 + lVar37);
          *puVar32 = *puVar16;
          puVar32[1] = uVar27;
          puVar16 = (undefined8 *)(lVar28 + 0x60 + lVar37);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar33 + 0x70 + lVar37) = *(undefined8 *)(lVar28 + 0x70 + lVar37);
          puVar16 = (undefined8 *)(lVar28 + 0x78 + lVar37);
          uVar27 = puVar16[1];
          puVar32 = (undefined8 *)(lVar33 + 0x78 + lVar37);
          *puVar32 = *puVar16;
          puVar32[1] = uVar27;
          puVar16 = (undefined8 *)(lVar33 + 0x88 + lVar37);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar33 + 0x98 + lVar37) = 0;
          puVar18 = (undefined4 *)(lVar28 + 0x88 + lVar37);
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          puVar3 = (undefined4 *)(lVar33 + 0x88 + lVar37);
          *puVar3 = *puVar18;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined8 *)(lVar33 + 0x98 + lVar37) = *(undefined8 *)(lVar28 + 0x98 + lVar37);
          puVar16 = (undefined8 *)(lVar28 + 0x88 + lVar37);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar28 + 0x98 + lVar37) = 0;
          *(undefined2 *)(lVar33 + 0xa0 + lVar37) = *(undefined2 *)(lVar28 + 0xa0 + lVar37);
          lVar2 = lVar28 + lVar37;
          lVar37 = lVar37 + 0xa8;
        } while (lVar2 + 0xa8 != lVar5);
        do {
          func_0x0572b390(lVar28);
          lVar28 = lVar28 + 0xa8;
        } while (lVar28 != lVar5);
        lVar28 = *(long *)pbStack_220;
      }
      plVar19[0x1b] = lVar33;
      plVar19[0x1c] = (long)plVar25;
      lVar5 = plVar19[0x1d];
      plVar19[0x1d] = (long)plStack_390;
      if (lVar28 != 0) {
        func_0x0412a280(lVar28,lVar5 - lVar28);
      }
      goto LAB_05696fa9;
    }
    if (plVar34 < (long *)0x186186186186187) {
      plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar34 * 0xa8);
      if (plVar26 == (long *)0x0) {
        func_0x0eec74c0((long)plVar34 * 0xa8,0);
        plVar26 = (long *)0x0;
      }
      goto LAB_05696dc2;
    }
LAB_05698ac3:
    func_0x04882eb0();
  }
  func_0x0572ecd0();
LAB_05698acd:
  uVar27 = func_0x0572ec00();
  if ((*pbVar22 & 1) != 0) {
    func_0x0412a280(plVar31[3],plVar31[1] & 0xfffffffffffffffe);
  }
  plVar34[0x12] = (long)plVar31;
  plVar21 = plVar25 + 1;
  LOCK();
  lVar28 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    FUN_0412c2d0(plVar25);
  }
  LOCK();
  lVar28 = *plVar26;
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  LOCK();
  lVar28 = *plVar26;
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_28d,CONCAT21(uStack_28f,uStack_293._3_1_)),
                    CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,bStack_2a0)) &
                    0xfffffffffffffffe);
  }
  func_0x05699700(plStack_308);
  uVar27 = func_0x0eee2d70(uVar27);
  plVar21 = plVar25 + 1;
  LOCK();
  lVar28 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    FUN_0412c2d0(plVar25);
  }
  LOCK();
  lVar28 = *plVar26;
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  LOCK();
  lVar28 = *plVar26;
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_28d,CONCAT21(uStack_28f,uStack_293._3_1_)),
                    CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,bStack_2a0)) &
                    0xfffffffffffffffe);
  }
  func_0x05699700(pbVar22);
  uVar27 = func_0x0eee2d70(uVar27);
  plVar21 = plVar34 + 1;
  LOCK();
  lVar28 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    FUN_0412c2d0(plVar34);
  }
  LOCK();
  lVar28 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  LOCK();
  lVar28 = *plVar20;
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
  }
  if (plStack_2f8 != (long *)0x0) {
    (*(code *)plStack_2f8[1])(&plStack_2f8);
  }
  if ((bStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
  }
  func_0x05699700(pbVar22);
  func_0x05699700(pbVar22);
  uVar27 = func_0x0eee2d70(uVar27);
  plVar17 = plVar34 + 1;
  LOCK();
  lVar28 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    FUN_0412c2d0(plVar34);
  }
  LOCK();
  lVar28 = *(long *)pbVar38;
  *(long *)pbVar38 = *(long *)pbVar38 + -1;
  UNLOCK();
  if (lVar28 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_0412c2d0(plVar19);
    LOCK();
    lVar28 = *(long *)pbVar38;
    *(long *)pbVar38 = *(long *)pbVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar28 = *(long *)pbVar38;
    *(long *)pbVar38 = *(long *)pbVar38 + -1;
    UNLOCK();
  }
  if (lVar28 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_0412c2d0(plVar19);
  }
  if (plStack_2a8 != (long *)0x0) {
    (*(code *)plStack_2a8[1])(&plStack_2a8);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(uStack_2e0,
                    CONCAT26(uStack_2ea,CONCAT51(uStack_2ef,bStack_2f0)) & 0xfffffffffffffffe);
  }
  if ((uStack_1d8 & 1) == 0) {
    func_0x0eee2d70(uVar27);
  }
  func_0x0412a280(puStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
  func_0x0eee2d70(uVar27);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}



/* ---- referenced strings ----
 * 0x125853d  fireworks_interval
 * 0x128b658  minecraft:behavior.celebrate_survive
 * 0x128b668  or.celebrate_survive
 * 0x12d7800  Allows this entity to celebrate surviving a raid by shooting fireworks.
 * 0x12d7810  ty to celebrate surviving a raid by shooting fireworks.
 * 0x12d7820  surviving a raid by shooting fireworks.
 * 0x12d7830   by shooting fireworks.
 * 0x1494d5d  <any array element>
 */
