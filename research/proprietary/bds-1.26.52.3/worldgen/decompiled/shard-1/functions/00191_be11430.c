/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbf11430 (ELF vaddr 0xbe11430)
 * Label: caller-of-callee
 * Body:  [[0bf11430, 0bf11765] [0bf11770, 0bf118a3] [0bf118b0, 0bf11997] [0bf119a0, 0bf11f28]]
 * Ghidra: FUN_0bf11430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0bf11430(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte *extraout_RDX;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  byte bStack_3d8;
  undefined1 uStack_3d7;
  undefined6 uStack_3d6;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [16];
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 *puStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined4 *puStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined4 *puStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  byte bStack_308;
  undefined7 uStack_307;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long alStack_268 [4];
  long *plStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined1 auStack_f0 [192];
  
  cVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar6 != '\x01') {
    lStack_328 = 0;
    lStack_320 = 0;
    lStack_318 = 0;
    puStack_370 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puStack_370 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    uVar8 = _UNK_01456015;
    uStack_380 = 0x49;
    uStack_378 = 0x45;
    *(undefined8 *)(puStack_370 + 0xc) = _DAT_0145600d;
    *(undefined8 *)(puStack_370 + 0xe) = uVar8;
    uVar8 = _UNK_01456005;
    *(undefined8 *)(puStack_370 + 8) = _DAT_01455ffd;
    *(undefined8 *)(puStack_370 + 10) = uVar8;
    uVar8 = _UNK_01455ff5;
    *(undefined8 *)(puStack_370 + 4) = _DAT_01455fed;
    *(undefined8 *)(puStack_370 + 6) = uVar8;
    uVar4 = _UNK_01455fe9;
    uVar3 = _UNK_01455fe5;
    uVar2 = _UNK_01455fe1;
    *puStack_370 = _DAT_01455fdd;
    puStack_370[1] = uVar2;
    puStack_370[2] = uVar3;
    puStack_370[3] = uVar4;
    *(undefined8 *)((long)puStack_370 + 0x3d) = 0x74616d726f662074;
    *(undefined1 *)((long)puStack_370 + 0x45) = 0;
    func_0x0d6b13c0(param_3,0x10,&lStack_328,&uStack_380);
    if ((uStack_380 & 1) != 0) {
      func_0x0412a280(puStack_370,uStack_380 & 0xfffffffffffffffe);
    }
    lVar1 = lStack_328;
    lVar16 = lStack_320;
    if (lStack_328 != 0) {
      for (; lVar1 != lVar16; lVar16 = lVar16 + -0x20) {
        if ((*(byte *)(lVar16 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar16 + -8),
                          *(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe);
        }
      }
      lStack_320 = lVar1;
      func_0x0412a280(lStack_328,lStack_318 - lStack_328);
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0485e1c0(auStack_f0);
  func_0x04863060(auStack_3c0,0);
  bVar17 = (*extraout_RDX & 1) != 0;
  pbVar14 = extraout_RDX + 1;
  if (bVar17) {
    pbVar14 = *(byte **)(extraout_RDX + 0x10);
  }
  uVar13 = (ulong)(*extraout_RDX >> 1);
  if (bVar17) {
    uVar13 = *(ulong *)(extraout_RDX + 8);
  }
  cVar6 = func_0x0485e650(auStack_f0,pbVar14,uVar13,auStack_3c0,0);
  if (cVar6 == '\0') goto LAB_0bf119f7;
  cVar6 = func_0x04864290(auStack_3c0);
  if (cVar6 == '\0') {
    lStack_348 = 0;
    lStack_340 = 0;
    lStack_338 = 0;
    puStack_388 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_388 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar8 = _UNK_011e0917;
    uStack_398 = 0x31;
    uStack_390 = 0x2f;
    *(ulong *)((long)puStack_388 + 0x1f) = CONCAT71(_UNK_011e0910,DAT_011e090f);
    *(undefined8 *)((long)puStack_388 + 0x27) = uVar8;
    uVar8 = CONCAT17(DAT_011e090f,_UNK_011e0908);
    *(undefined8 *)(puStack_388 + 4) = _DAT_011e0900;
    *(undefined8 *)(puStack_388 + 6) = uVar8;
    uVar4 = _UNK_011e08fc;
    uVar3 = _UNK_011e08f8;
    uVar2 = _UNK_011e08f4;
    *puStack_388 = _DAT_011e08f0;
    puStack_388[1] = uVar2;
    puStack_388[2] = uVar3;
    puStack_388[3] = uVar4;
    *(undefined1 *)((long)puStack_388 + 0x2f) = 0;
    func_0x0d6b13c0(param_3,8,&lStack_348,&uStack_398);
    if ((uStack_398 & 1) != 0) {
      func_0x0412a280(puStack_388,uStack_398 & 0xfffffffffffffffe);
    }
    lVar5 = lStack_348;
    lVar16 = lStack_348;
    lVar1 = lStack_340;
    lVar15 = lStack_338;
    if (lStack_348 == 0) goto LAB_0bf119f7;
    for (; lStack_348 = lVar16, lStack_338 = lVar15, lVar5 != lVar1; lVar1 = lVar1 + -0x20) {
      if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
      }
      lVar16 = lStack_348;
      lVar15 = lStack_338;
    }
    lStack_340 = lVar5;
  }
  else {
    uVar8 = func_0x04864680(auStack_3c0,&UNK_013771cd);
    uVar9 = func_0x04864970(auStack_3c0,&UNK_01cc06e8);
    uVar10 = func_0x048648e0(uVar9,&UNK_011ea907);
    uVar11 = func_0x048648e0(uVar10,&UNK_013762e9);
    cVar6 = func_0x04864260(uVar11);
    if ((cVar6 == '\0') && (cVar6 = func_0x04865490(uVar11), cVar6 != '\0')) {
      bStack_3d8 = 0;
      uStack_3d7 = 0;
      func_0x04863cb0(&uStack_2b8,uVar11,&bStack_3d8);
      if ((*(byte *)(param_1 + 3) & 1) != 0) {
        func_0x0412a280(param_1[5],param_1[3] & 0xfffffffffffffffe);
      }
      param_1[5] = uStack_2a8;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_2b8;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_2b8._4_4_;
      *(undefined4 *)(param_1 + 4) = (undefined4)uStack_2b0;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_2b0._4_4_;
      uStack_2b8 = uStack_2b8 & 0xffffffffffff0000;
      if ((bStack_3d8 & 1) != 0) {
        func_0x0412a280(uStack_3c8,
                        CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,bStack_3d8)) & 0xfffffffffffffffe);
      }
      iVar7 = func_0x0ee36b90(uVar8,param_1,1);
      if (iVar7 == 2) {
        bVar17 = (*(byte *)(param_1 + 3) & 1) != 0;
        uStack_2b8 = (long)param_1 + 0x19;
        if (bVar17) {
          uStack_2b8 = param_1[5];
        }
        uStack_2b0 = (ulong)(*(byte *)(param_1 + 3) >> 1);
        if (bVar17) {
          uStack_2b0 = param_1[4];
        }
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        func_0x0470d9a0(&bStack_308,&UNK_014a2024,0x24,0xd,&uStack_2b8);
        func_0x0d6b13c0(param_3,8,&uStack_2d8,&bStack_308);
        if ((bStack_308 & 1) != 0) {
          func_0x0412a280(uStack_2f8,CONCAT71(uStack_307,bStack_308) & 0xfffffffffffffffe);
        }
        func_0x05d546e0(&uStack_2d8);
      }
      else {
        uVar8 = func_0x048648e0(uVar10,&UNK_012cacea);
        func_0x04160690(&bStack_3d8,&UNK_01254d89);
        func_0x04863cb0(&uStack_2b8,uVar8,&bStack_3d8);
        if ((*(byte *)(param_1 + 6) & 1) != 0) {
          func_0x0412a280(param_1[8],param_1[6] & 0xfffffffffffffffe);
        }
        param_1[8] = uStack_2a8;
        *(undefined4 *)(param_1 + 6) = (undefined4)uStack_2b8;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_2b8._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_2b0;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_2b0._4_4_;
        uStack_2b8 = uStack_2b8 & 0xffffffffffff0000;
        if ((bStack_3d8 & 1) != 0) {
          func_0x0412a280(uStack_3c8,
                          CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,bStack_3d8)) & 0xfffffffffffffffe)
          ;
        }
        cVar6 = func_0x04864260(uVar9);
        if ((cVar6 == '\0') && (cVar6 = func_0x04864290(uVar9), cVar6 != '\0')) {
          uVar8 = func_0x048648e0(uVar9,&UNK_014526bb);
          cVar6 = func_0x04864270(uVar8);
          if (cVar6 != '\0') {
            func_0x04865530(&bStack_3d8,uVar8);
            func_0x048655b0(auStack_2e8,uVar8);
            puStack_2f0 = param_1 + 9;
            while (cVar6 = func_0x04862c80(&bStack_3d8,auStack_2e8), cVar6 == '\0') {
              uVar8 = func_0x04862b80(&bStack_3d8);
              FUN_0bf12270(&uStack_2b8,param_1,uVar8,param_1 + 3,param_3);
              puVar12 = (undefined4 *)param_1[10];
              if (puVar12 < (undefined4 *)param_1[0xb]) {
                *puVar12 = (undefined4)uStack_2b8;
                func_0x049d00c0(puVar12 + 2,&uStack_2b0);
                *(undefined **)(puVar12 + 2) = &UNK_0ef516f8;
                if (plStack_248 == (long *)0x0) {
                  *(undefined8 *)(puVar12 + 0x1c) = 0;
                }
                else if (plStack_248 == alStack_268) {
                  *(undefined4 **)(puVar12 + 0x1c) = puVar12 + 0x14;
                  (**(code **)(*plStack_248 + 0x18))();
                }
                else {
                  *(long **)(puVar12 + 0x1c) = plStack_248;
                  plStack_248 = (long *)0x0;
                }
                *(undefined8 *)(puVar12 + 0x38) = uStack_1d8;
                *(undefined8 *)(puVar12 + 0x34) = uStack_1e8;
                *(undefined8 *)(puVar12 + 0x36) = uStack_1e0;
                *(undefined8 *)(puVar12 + 0x30) = uStack_1f8;
                *(undefined8 *)(puVar12 + 0x32) = uStack_1f0;
                *(undefined8 *)(puVar12 + 0x2c) = uStack_208;
                *(undefined8 *)(puVar12 + 0x2e) = uStack_200;
                *(undefined8 *)(puVar12 + 0x28) = uStack_218;
                *(undefined8 *)(puVar12 + 0x2a) = uStack_210;
                *(undefined8 *)(puVar12 + 0x24) = uStack_228;
                *(undefined8 *)(puVar12 + 0x26) = uStack_220;
                *(undefined8 *)(puVar12 + 0x20) = uStack_238;
                *(undefined8 *)(puVar12 + 0x22) = uStack_230;
                *(undefined8 *)(puVar12 + 0x3a) = 0;
                *(undefined8 *)(puVar12 + 0x3c) = 0;
                *(undefined8 *)(puVar12 + 0x3e) = 0;
                *(undefined8 *)(puVar12 + 0x3a) = uStack_1d0;
                *(undefined8 *)(puVar12 + 0x3c) = uStack_1c8;
                *(undefined8 *)(puVar12 + 0x3e) = uStack_1c0;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                uStack_1c0 = 0;
                *(undefined8 *)(puVar12 + 0x40) = 0;
                *(undefined8 *)(puVar12 + 0x42) = 0;
                *(undefined8 *)(puVar12 + 0x44) = 0;
                *(undefined8 *)(puVar12 + 0x40) = uStack_1b8;
                *(undefined8 *)(puVar12 + 0x42) = uStack_1b0;
                *(undefined8 *)(puVar12 + 0x44) = uStack_1a8;
                uStack_1b8 = 0;
                uStack_1b0 = 0;
                uStack_1a8 = 0;
                *(undefined8 *)(puVar12 + 0x4a) = uStack_190;
                *(undefined8 *)(puVar12 + 0x46) = uStack_1a0;
                *(undefined8 *)(puVar12 + 0x48) = uStack_198;
                uStack_1a0 = 0;
                uStack_198 = 0;
                uStack_190 = 0;
                *(undefined8 *)(puVar12 + 0x4c) = 0;
                *(undefined8 *)(puVar12 + 0x4e) = 0;
                *(undefined8 *)(puVar12 + 0x50) = 0;
                *(undefined8 *)(puVar12 + 0x4c) = uStack_188;
                *(undefined8 *)(puVar12 + 0x4e) = uStack_180;
                *(undefined8 *)(puVar12 + 0x50) = uStack_178;
                uStack_188 = 0;
                uStack_180 = 0;
                uStack_178 = 0;
                *(undefined8 *)(puVar12 + 0x52) = 0;
                *(undefined8 *)(puVar12 + 0x54) = 0;
                *(undefined8 *)(puVar12 + 0x56) = 0;
                *(undefined8 *)(puVar12 + 0x52) = uStack_170;
                *(undefined8 *)(puVar12 + 0x54) = uStack_168;
                *(undefined8 *)(puVar12 + 0x56) = uStack_160;
                uStack_170 = 0;
                uStack_168 = 0;
                uStack_160 = 0;
                *(undefined8 *)(puVar12 + 0x58) = 0;
                *(undefined8 *)(puVar12 + 0x5a) = 0;
                *(undefined8 *)(puVar12 + 0x5c) = 0;
                *(undefined8 *)(puVar12 + 0x58) = uStack_158;
                *(undefined8 *)(puVar12 + 0x5a) = uStack_150;
                *(undefined8 *)(puVar12 + 0x5c) = uStack_148;
                uStack_158 = 0;
                uStack_150 = 0;
                uStack_148 = 0;
                puVar12[0x5e] = uStack_140;
                *(undefined8 *)(puVar12 + 0x60) = 0;
                *(undefined8 *)(puVar12 + 0x62) = 0;
                *(undefined8 *)(puVar12 + 100) = 0;
                *(undefined8 *)(puVar12 + 0x60) = uStack_138;
                *(undefined8 *)(puVar12 + 0x62) = uStack_130;
                *(undefined8 *)(puVar12 + 100) = uStack_128;
                uStack_138 = 0;
                uStack_130 = 0;
                uStack_128 = 0;
                *(undefined8 *)(puVar12 + 0x6a) = uStack_110;
                puVar12[0x66] = (undefined4)uStack_120;
                puVar12[0x67] = uStack_120._4_4_;
                puVar12[0x68] = (undefined4)uStack_118;
                puVar12[0x69] = uStack_118._4_4_;
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                *(undefined1 *)(puVar12 + 0x6d) = uStack_104;
                puVar12[0x6c] = uStack_108;
                puVar12 = puVar12 + 0x70;
              }
              else {
                puVar12 = (undefined4 *)func_0x0b0bf6e0(puStack_2f0,&uStack_2b8);
              }
              param_1[10] = puVar12;
              func_0x0b0c04b0(alStack_268);
              func_0x049d2400(&uStack_2b0);
              func_0x04862ba0(&bStack_3d8);
            }
            func_0x04862b40(auStack_2e8);
            func_0x04862b40(&bStack_3d8);
          }
        }
      }
      goto LAB_0bf119f7;
    }
    lStack_368 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    puStack_3a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_3a0 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar8 = _UNK_0134e188;
    uStack_3b0 = 0x29;
    uStack_3a8 = 0x26;
    *(undefined8 *)(puStack_3a0 + 4) = _DAT_0134e180;
    *(undefined8 *)(puStack_3a0 + 6) = uVar8;
    uVar4 = _UNK_0134e17c;
    uVar3 = _UNK_0134e178;
    uVar2 = _UNK_0134e174;
    *puStack_3a0 = _DAT_0134e170;
    puStack_3a0[1] = uVar2;
    puStack_3a0[2] = uVar3;
    puStack_3a0[3] = uVar4;
    *(undefined8 *)((long)puStack_3a0 + 0x1e) = 0xa656c696620656c;
    *(undefined1 *)((long)puStack_3a0 + 0x26) = 0;
    func_0x0d6b13c0(param_3,8,&lStack_368,&uStack_3b0);
    if ((uStack_3b0 & 1) != 0) {
      func_0x0412a280(puStack_3a0,uStack_3b0 & 0xfffffffffffffffe);
    }
    lVar5 = lStack_368;
    lVar16 = lStack_368;
    lVar1 = lStack_360;
    lVar15 = lStack_358;
    if (lStack_368 == 0) goto LAB_0bf119f7;
    for (; lStack_368 = lVar16, lStack_358 = lVar15, lVar5 != lVar1; lVar1 = lVar1 + -0x20) {
      if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
      }
      lVar16 = lStack_368;
      lVar15 = lStack_358;
    }
    lStack_360 = lVar5;
  }
  func_0x0412a280(lVar16,lVar15 - lVar16);
LAB_0bf119f7:
  func_0x04863610(auStack_3c0);
  func_0x0485e2d0(auStack_f0);
  return param_1;
}



/* ---- referenced strings ----
 * 0x11e08f0  Spawn rules json was not formatted as an object
 * 0x11e0900   was not formatted as an object
 * 0x11e090f  ted as an object
 * 0x1455fdd  SpawnGroupsLegacyParser legacy parser expects jsonString input format
 * 0x1455fed  yParser legacy parser expects jsonString input format
 * 0x1455ffd  arser expects jsonString input format
 * 0x145600d  onString input format
 */
