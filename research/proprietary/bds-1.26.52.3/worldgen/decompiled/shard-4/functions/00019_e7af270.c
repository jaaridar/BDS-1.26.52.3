/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8af270 (ELF vaddr 0xe7af270)
 * Label: callee-of:0xda370f0
 * Body:  [[0e8af270, 0e8af640] [0e8af650, 0e8af692] [0e8af6a0, 0e8aff00] [0e8aff10, 0e8b0026] [0e8b0030, 0e8b0072] [0e8b0080, 0e8b110b] [0e8b1110, 0e8b1152] [0e8b1160, 0e8b2386] [0e8b2390, 0e8b23d2] [0e8b23e0, 0e8b2c71] [0e8b2c80, 0e8b3c42] [0e8b3c50, 0e8b4481] [0e8b4490, 0e8b4e52] [0e8b4e60, 0e8b5691] [0e8b56a0, 0e8b64c1]]
 * Ghidra: FUN_0e8af270
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e8af270(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  int *piVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined4 uStack_560;
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [16];
  undefined1 auStack_538 [16];
  code *pcStack_528;
  uint uStack_520;
  char cStack_51c;
  undefined1 uStack_51b;
  undefined2 uStack_51a;
  undefined4 uStack_518;
  uint uStack_514;
  undefined1 uStack_510;
  undefined1 uStack_50f;
  undefined4 uStack_50e;
  undefined2 uStack_50a;
  undefined1 auStack_508 [16];
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  undefined4 uStack_4d8;
  undefined1 auStack_4d0 [16];
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined2 uStack_4a0;
  undefined2 uStack_49e;
  uint uStack_49c;
  uint uStack_498;
  undefined1 uStack_494;
  long lStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  long *plStack_438;
  undefined2 uStack_430;
  undefined4 uStack_42e;
  undefined2 uStack_42a;
  byte bStack_428;
  undefined7 uStack_427;
  byte bStack_420;
  undefined7 uStack_41f;
  undefined4 uStack_418;
  uint uStack_414;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  byte bStack_3e8;
  undefined7 uStack_3e7;
  byte bStack_3e0;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined1 uStack_3d7;
  undefined6 uStack_3d6;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  undefined1 uStack_330;
  byte bStack_328;
  undefined7 uStack_327;
  byte bStack_320;
  undefined7 uStack_31f;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  byte bStack_2e8;
  undefined7 uStack_2e7;
  byte bStack_2e0;
  undefined6 uStack_2df;
  undefined1 uStack_2d9;
  undefined1 uStack_2d8;
  undefined6 uStack_2d7;
  undefined1 uStack_2d1;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  byte bStack_2a8;
  undefined6 uStack_2a7;
  undefined1 uStack_2a1;
  byte bStack_2a0;
  undefined6 uStack_29f;
  undefined1 uStack_299;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long lStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  char cStack_1f8;
  undefined7 uStack_1f7;
  undefined1 auStack_1e8 [16];
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined2 uStack_197;
  undefined5 uStack_195;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  char cStack_138;
  undefined7 uStack_137;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  lStack_270 = param_1 + 0x18;
  lStack_470 = param_1;
  lVar9 = func_0x0db61aa0();
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar9 + 9);
    if (bVar22) {
      puVar17 = *(undefined **)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar17 = &UNK_01339a9c;
    uVar16 = 0x12;
  }
  func_0x0db61e90(auStack_548,lStack_470,puVar17,uVar16,0);
  uStack_514 = uStack_514 & 0xffffff00;
  uStack_510 = 0;
  if ((char)uStack_518 == '\0') {
    bStack_428 = 0x26;
    uStack_427 = (undefined7)_DAT_0142bedc;
    bStack_420 = (byte)((ulong)_DAT_0142bedc >> 0x38);
    uStack_41f = (undefined7)_UNK_0142bee4;
    uStack_418 = 0x646c726f;
    uStack_414 = uStack_414 & 0xffffff00;
    func_0x0db5fe60(auStack_1e8,auStack_548,&uStack_427,0x13);
    bStack_2e8 = 0x2c;
    uStack_2e7 = (undefined7)_DAT_011b8f64;
    bStack_2e0 = (byte)((ulong)_DAT_011b8f64 >> 0x38);
    uStack_2df = (undefined6)_UNK_011b8f6c;
    uStack_2d9 = 0x65;
    uStack_2d8 = 0x6e;
    uStack_2d7 = 0x6e6165636f5f;
    uStack_2d1 = 0;
    func_0x0db60240(&puStack_3a8,auStack_1e8,&uStack_2e7,0x16);
    bStack_2a8 = 0x1c;
    uStack_2a7 = 0x7263656e696d;
    uStack_2a1 = 0x61;
    bStack_2a0 = 0x66;
    uStack_29f = 0x6173656d3a74;
    uStack_299 = 0;
    func_0x0db60620(&puStack_368,&puStack_3a8,&uStack_2a7,0xe);
    bStack_328 = 0x1e;
    uStack_327 = 0x617263656e696d;
    bStack_320 = 0x66;
    uStack_31f = 0x706d6177733a74;
    puStack_318 = (undefined8 *)((ulong)puStack_318 & 0xffffffffffffff00);
    func_0x0db60a00(&puStack_468,&puStack_368,&uStack_327,0xf);
    bStack_3e8 = 0x20;
    uStack_3e7 = (undefined7)_DAT_01222b04;
    bStack_3e0 = (byte)((ulong)_DAT_01222b04 >> 0x38);
    uStack_3df = (undefined7)_UNK_01222b0c;
    uStack_3d8 = (undefined1)((ulong)_UNK_01222b0c >> 0x38);
    uStack_3d7 = 0;
    FUN_0db60de0(&uStack_5b0,&puStack_468,&uStack_3e7,0x10);
    bStack_1a8 = 0x22;
    uStack_1a7 = (undefined7)_DAT_013df14a;
    bStack_1a0 = (byte)((ulong)_DAT_013df14a >> 0x38);
    uStack_19f = (undefined7)_UNK_013df152;
    uStack_198 = (undefined1)((ulong)_UNK_013df152 >> 0x38);
    uStack_197 = 100;
    func_0x0db611c0(&puStack_268,&uStack_5b0,&uStack_1a7,0x11);
    if ((bStack_1a8 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_195,CONCAT21(uStack_197,uStack_198)),
                      CONCAT71(uStack_1a7,bStack_1a8) & 0xfffffffffffffffe);
    }
    if ((bStack_3e8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8)),
                      CONCAT71(uStack_3e7,bStack_3e8) & 0xfffffffffffffffe);
    }
    if ((bStack_328 & 1) != 0) {
      func_0x0412a280(puStack_318,CONCAT71(uStack_327,bStack_328) & 0xfffffffffffffffe);
    }
    if ((bStack_2a8 & 1) != 0) {
      func_0x0412a280(puStack_298,
                      CONCAT17(uStack_2a1,CONCAT61(uStack_2a7,bStack_2a8)) & 0xfffffffffffffffe);
    }
    if ((bStack_2e8 & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_2d1,CONCAT61(uStack_2d7,uStack_2d8)),
                      CONCAT71(uStack_2e7,bStack_2e8) & 0xfffffffffffffffe);
    }
    if ((bStack_428 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_414,uStack_418),
                      CONCAT71(uStack_427,bStack_428) & 0xfffffffffffffffe);
    }
  }
  lVar9 = func_0x0db805f0(lStack_270);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e8b6fc0(&puStack_468,lStack_470,lVar18,uVar16);
    if ((char)plStack_438 != '\0') goto LAB_0e8af584;
LAB_0e8af5ce:
    puVar21 = puStack_468 + 3;
    lVar9 = func_0x0db805f0(puVar21);
    for (pbVar15 = (byte *)puStack_468[10]; pbVar15 != (byte *)puStack_468[0xb];
        pbVar15 = pbVar15 + 0x38) {
      bVar1 = *pbVar15;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e8af6aa;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0e8af6aa:
        if ((bVar1 & 1) == 0) {
          pbVar19 = pbVar15 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar15 + 0x10);
        }
        auVar23[0] = -(*pbVar19 == 0x5b);
        auVar23[1] = -(pbVar19[1] == 99);
        auVar23[2] = -(pbVar19[2] == 0x65);
        auVar23[3] = -(pbVar19[3] == 0x72);
        auVar23[4] = -(pbVar19[4] == 0x65);
        auVar23[5] = -(pbVar19[5] == 0x61);
        auVar23[6] = -(pbVar19[6] == 0x6c);
        auVar23[7] = -(pbVar19[7] == 0x3a);
        auVar23[8] = -(pbVar19[8] == 100);
        auVar23[9] = -(pbVar19[9] == 0x6f);
        auVar23[10] = -(pbVar19[10] == 99);
        auVar23[0xb] = -(pbVar19[0xb] == 0x75);
        auVar23[0xc] = -(pbVar19[0xc] == 0x6d);
        auVar23[0xd] = -(pbVar19[0xd] == 0x65);
        auVar23[0xe] = -(pbVar19[0xe] == 0x6e);
        auVar23[0xf] = -(pbVar19[0xf] == 0x74);
        auVar29[0] = -(pbVar19[10] == 99);
        auVar29[1] = -(pbVar19[0xb] == 0x75);
        auVar29[2] = -(pbVar19[0xc] == 0x6d);
        auVar29[3] = -(pbVar19[0xd] == 0x65);
        auVar29[4] = -(pbVar19[0xe] == 0x6e);
        auVar29[5] = -(pbVar19[0xf] == 0x74);
        auVar29[6] = -(pbVar19[0x10] == 0x61);
        auVar29[7] = -(pbVar19[0x11] == 0x74);
        auVar29[8] = -(pbVar19[0x12] == 0x69);
        auVar29[9] = -(pbVar19[0x13] == 0x6f);
        auVar29[10] = -(pbVar19[0x14] == 0x6e);
        auVar29[0xb] = -(pbVar19[0x15] == 0x5f);
        auVar29[0xc] = -(pbVar19[0x16] == 0x74);
        auVar29[0xd] = -(pbVar19[0x17] == 0x61);
        auVar29[0xe] = -(pbVar19[0x18] == 0x67);
        auVar29[0xf] = -(pbVar19[0x19] == 0x5d);
        auVar29 = auVar29 & auVar23;
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == (byte *)puStack_468[0xb]) {
LAB_0e8af6d9:
      if ((int)uStack_440 == 0) {
        if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
        goto LAB_0e8af828;
        lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
      }
      else {
        auStack_548._0_8_ = FUN_048b0c90(puVar21,lVar9,uStack_440._4_4_,1);
        if (auStack_548._0_8_ == 0) {
          auStack_548 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_548);
          if (auStack_548._0_8_ == 0) goto LAB_0e8af828;
        }
        if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e8af828:
          lVar9 = 0;
        }
      }
      plStack_5a0 = (long *)&UNK_0488e0b0;
      uStack_598 = (code *)0x0;
      uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
      uStack_5b0 = 0;
      auStack_548 = (undefined1  [16])0x0;
      auStack_538._8_8_ = &UNK_0488e0b0;
      pcStack_528 = (code *)0x0;
      uStack_520 = 0x48b5725f;
      cStack_51c = '\0';
      puStack_358 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_358 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      puStack_368 = (undefined8 *)0x21;
      puStack_360 = (undefined8 *)0x1a;
      *(ulong *)((long)puStack_358 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_358 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_358 = _DAT_013bbacd;
      puStack_358[1] = uVar3;
      *(undefined1 *)((long)puStack_358 + 0x1a) = 0;
      lVar9 = func_0x048b5060(lVar9,&puStack_368);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_548) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar21 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar21);
          if (cStack_51c != '\0') {
            if (cStack_51c == '\x02') {
              (*(code *)auStack_538._8_8_)(5,auStack_548 + 8,puVar21);
            }
            else {
              uVar3 = auStack_548._8_8_;
              auStack_548._8_8_ = 0;
              *puVar21 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_538._8_8_;
        *(code **)(lVar9 + 0x40) = pcStack_528;
        *(uint *)(lVar9 + 0x48) = uStack_520;
        *(char *)(lVar9 + 0x4c) = cStack_51c;
        pcVar12 = pcStack_528;
      }
      if (((ulong)puStack_368 & 1) != 0) {
        func_0x0412a280(puStack_358,(ulong)puStack_368 & 0xfffffffffffffffe);
        pcVar12 = pcStack_528;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_548 + 8);
      }
      if (uStack_598 != (code *)0x0) {
        (*uStack_598)(&uStack_5b0);
      }
    }
    else {
      iVar7 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e8af6d9;
    }
    puStack_348 = puStack_448;
    plStack_338 = plStack_438;
    puStack_358 = puStack_458;
    puStack_350 = puStack_450;
    puStack_368 = puStack_468;
    puStack_360 = puStack_460;
    uStack_340 = 0x5127f14d00000002;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    auStack_508 = (undefined1  [16])0x0;
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    uStack_50e = 0;
    uStack_50a = 0;
    pcStack_528 = (code *)0x0;
    uStack_520 = 0;
    cStack_51c = 0;
    uStack_51b = 0;
    uStack_51a = 0;
    auStack_538 = (undefined1  [16])0x0;
    auStack_548 = (undefined1  [16])0x0;
    uStack_4d8 = 0x3f600000;
    func_0x048afb10(auStack_508,8);
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    auStack_4d0 = (undefined1  [16])0x0;
    uStack_4a0 = 0xff00;
    uStack_49c = uStack_49c & 0xffffff00;
    uStack_498 = uStack_498 & 0xffffff00;
    uStack_494 = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497e98;
    uVar3 = auStack_548._0_8_;
    auStack_548._0_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    if ((uStack_520 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510))),
                      CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520))) &
                      0xfffffffffffffffe);
    }
    uStack_520 = 0x70797408;
    cStack_51c = 0x65;
    uStack_51b = 0;
    if ((DAT_0f737218 == '\0') && (iVar7 = FUN_04108328(&DAT_0f737218), iVar7 != 0)) {
      func_0x0db82560(0xf737200);
      func_0x0410844d(&DAT_0f737218);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_340._4_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)CONCAT44(plStack_5a0._4_4_,3);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db65ce0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0db61aa0;
    puStack_570 = &UNK_0e8b7820;
    puStack_568 = &UNK_0e8b7830;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(&puStack_360,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    puStack_398 = puStack_350;
    uStack_390 = puStack_348;
    puStack_3a8 = puStack_360;
    puStack_3a0 = puStack_358;
    if ((DAT_0f550a20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,_DAT_0f550a0c);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar10 + 1) = (undefined1  [16])0x0;
    *plVar10 = (long)&UNK_0ef439d0;
    plStack_5a8 = plVar10 + 3;
    uVar3 = auStack_548._0_8_;
    uVar11 = auStack_548._8_8_;
    auStack_548 = (undefined1  [16])0x0;
    plVar10[3] = uVar3;
    plVar10[4] = uVar11;
    plVar10[7] = (long)pcStack_528;
    plVar10[5] = auStack_538._0_8_;
    plVar10[6] = auStack_538._8_8_;
    auStack_538 = (undefined1  [16])0x0;
    pcStack_528 = (code *)0x0;
    plVar10[10] = CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510)));
    plVar10[8] = CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520)));
    plVar10[9] = CONCAT44(uStack_514,uStack_518);
    uStack_520 = 0;
    cStack_51c = 0;
    uStack_51b = 0;
    uStack_51a = 0;
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    uStack_50e = 0;
    uStack_50a = 0;
    plVar10[0xb] = auStack_508._0_8_;
    plVar10[0xc] = auStack_508._8_8_;
    plVar10[0xd] = lStack_4f8;
    auStack_508 = (undefined1  [16])0x0;
    lStack_4f8 = 0;
    plVar10[0xe] = lStack_4f0;
    plVar10[0xf] = lStack_4e8;
    plVar10[0x10] = lStack_4e0;
    lStack_4f0 = 0;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    *(undefined4 *)(plVar10 + 0x11) = uStack_4d8;
    plVar10[0x12] = auStack_4d0._0_8_;
    plVar10[0x13] = auStack_4d0._8_8_;
    plVar10[0x14] = lStack_4c0;
    auStack_4d0 = (undefined1  [16])0x0;
    lStack_4c0 = 0;
    plVar10[0x17] = lStack_4a8;
    plVar10[0x15] = lStack_4b8;
    plVar10[0x16] = lStack_4b0;
    lStack_4b8 = 0;
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_494,CONCAT43(uStack_498,uStack_49c._1_3_));
    plVar10[0x18] = CONCAT44(uStack_49c,CONCAT22(uStack_49e,uStack_4a0));
    auStack_1e8 = (undefined1  [16])0x0;
    plStack_5a0 = plVar10;
    func_0x048afd20(&puStack_3a8,&uStack_5b0);
    plVar10 = plStack_5a0;
    if (plStack_5a0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_5a0 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_5a0 + 0x10))(plStack_5a0);
        func_0x0412c2d0(plVar10);
      }
    }
    uVar3 = auStack_1e8._8_8_;
    if ((long *)auStack_1e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_1e8._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_1e8._8_8_ + 0x10))(auStack_1e8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    if (uStack_390._4_4_ == 2) {
      piVar13 = *(int **)(puStack_398[0xf] + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != (int)uStack_390) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      for (; *(undefined8 **)(piVar13 + 0xc) != puStack_3a0; piVar13 = *(int **)(piVar13 + 0xe)) {
      }
LAB_0e8aff1a:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_390._4_4_ == 1) {
        piVar13 = *(int **)(puStack_398[0xf] + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != (int)uStack_390) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0e8aff1a;
      }
      if (uStack_390._4_4_ == 0) {
        *(byte *)((long)puStack_398 + 0x1a) = *(byte *)((long)puStack_398 + 0x1a) | 9;
      }
    }
    func_0x048b0bc0(auStack_548);
    lVar9 = func_0x0db80510(lStack_270);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e8aff3e;
LAB_0e8aff85:
    FUN_0e8b7ad0(&puStack_3a8,lStack_470,&DAT_01222b04,0x10);
    if ((char)plStack_378 != '\0') goto LAB_0e8b0f6a;
LAB_0e8affb4:
    puVar21 = puStack_3a8 + 3;
    lVar9 = func_0x0db80510(puVar21);
    for (pbVar15 = (byte *)puStack_3a8[10]; pbVar15 != (byte *)puStack_3a8[0xb];
        pbVar15 = pbVar15 + 0x38) {
      bVar1 = *pbVar15;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e8b008a;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0e8b008a:
        if ((bVar1 & 1) == 0) {
          pbVar19 = pbVar15 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar15 + 0x10);
        }
        auVar24[0] = -(*pbVar19 == 0x5b);
        auVar24[1] = -(pbVar19[1] == 99);
        auVar24[2] = -(pbVar19[2] == 0x65);
        auVar24[3] = -(pbVar19[3] == 0x72);
        auVar24[4] = -(pbVar19[4] == 0x65);
        auVar24[5] = -(pbVar19[5] == 0x61);
        auVar24[6] = -(pbVar19[6] == 0x6c);
        auVar24[7] = -(pbVar19[7] == 0x3a);
        auVar24[8] = -(pbVar19[8] == 100);
        auVar24[9] = -(pbVar19[9] == 0x6f);
        auVar24[10] = -(pbVar19[10] == 99);
        auVar24[0xb] = -(pbVar19[0xb] == 0x75);
        auVar24[0xc] = -(pbVar19[0xc] == 0x6d);
        auVar24[0xd] = -(pbVar19[0xd] == 0x65);
        auVar24[0xe] = -(pbVar19[0xe] == 0x6e);
        auVar24[0xf] = -(pbVar19[0xf] == 0x74);
        auVar30[0] = -(pbVar19[10] == 99);
        auVar30[1] = -(pbVar19[0xb] == 0x75);
        auVar30[2] = -(pbVar19[0xc] == 0x6d);
        auVar30[3] = -(pbVar19[0xd] == 0x65);
        auVar30[4] = -(pbVar19[0xe] == 0x6e);
        auVar30[5] = -(pbVar19[0xf] == 0x74);
        auVar30[6] = -(pbVar19[0x10] == 0x61);
        auVar30[7] = -(pbVar19[0x11] == 0x74);
        auVar30[8] = -(pbVar19[0x12] == 0x69);
        auVar30[9] = -(pbVar19[0x13] == 0x6f);
        auVar30[10] = -(pbVar19[0x14] == 0x6e);
        auVar30[0xb] = -(pbVar19[0x15] == 0x5f);
        auVar30[0xc] = -(pbVar19[0x16] == 0x74);
        auVar30[0xd] = -(pbVar19[0x17] == 0x61);
        auVar30[0xe] = -(pbVar19[0x18] == 0x67);
        auVar30[0xf] = -(pbVar19[0x19] == 0x5d);
        auVar30 = auVar30 & auVar24;
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == (byte *)puStack_3a8[0xb]) {
LAB_0e8b00b9:
      if ((int)uStack_380 == 0) {
        if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
        goto LAB_0e8b012d;
        lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
      }
      else {
        auStack_548._0_8_ = FUN_048b0c90(puVar21,lVar9,uStack_380._4_4_,1);
        if (auStack_548._0_8_ == 0) {
          auStack_548 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_548);
          if (auStack_548._0_8_ == 0) goto LAB_0e8b012d;
        }
        if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e8b012d:
          lVar9 = 0;
        }
      }
      plStack_5a0 = (long *)&UNK_0488e0b0;
      uStack_598 = (code *)0x0;
      uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
      uStack_5b0 = 0;
      auStack_548 = (undefined1  [16])0x0;
      auStack_538._8_8_ = &UNK_0488e0b0;
      pcStack_528 = (code *)0x0;
      uStack_520 = 0x48b5725f;
      cStack_51c = '\0';
      puStack_458 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_458 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      puStack_468 = (undefined8 *)0x21;
      puStack_460 = (undefined8 *)0x1a;
      *(ulong *)((long)puStack_458 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_458 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_458 = _DAT_013bbacd;
      puStack_458[1] = uVar3;
      *(undefined1 *)((long)puStack_458 + 0x1a) = 0;
      lVar9 = func_0x048b5060(lVar9,&puStack_468);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_548) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar21 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar21);
          if (cStack_51c != '\0') {
            if (cStack_51c == '\x02') {
              (*(code *)auStack_538._8_8_)(5,auStack_548 + 8,puVar21);
            }
            else {
              uVar3 = auStack_548._8_8_;
              auStack_548._8_8_ = 0;
              *puVar21 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_538._8_8_;
        *(code **)(lVar9 + 0x40) = pcStack_528;
        *(uint *)(lVar9 + 0x48) = uStack_520;
        *(char *)(lVar9 + 0x4c) = cStack_51c;
        pcVar12 = pcStack_528;
      }
      if (((ulong)puStack_468 & 1) != 0) {
        func_0x0412a280(puStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
        pcVar12 = pcStack_528;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_548 + 8);
      }
      if (uStack_598 != (code *)0x0) {
        (*uStack_598)(&uStack_5b0);
      }
    }
    else {
      iVar7 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e8b00b9;
    }
    plStack_38 = plStack_378;
    puStack_48 = puStack_388;
    uStack_40 = uStack_380;
    puStack_58 = puStack_398;
    puStack_50 = uStack_390;
    puStack_68 = puStack_3a8;
    puStack_60 = puStack_3a0;
    puStack_88 = puStack_388;
    puStack_a8 = puStack_3a8;
    puStack_a0 = puStack_3a0;
    puStack_98 = puStack_398;
    puStack_90 = uStack_390;
    plStack_78 = plStack_378;
    uStack_80 = 0x5127f14d00000002;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    auStack_508 = (undefined1  [16])0x0;
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    uStack_50e = 0;
    uStack_50a = 0;
    pcStack_528 = (code *)0x0;
    uStack_520 = 0;
    cStack_51c = 0;
    uStack_51b = 0;
    uStack_51a = 0;
    auStack_538 = (undefined1  [16])0x0;
    auStack_548 = (undefined1  [16])0x0;
    uStack_4d8 = 0x3f600000;
    func_0x048afb10(auStack_508,8);
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    auStack_4d0 = (undefined1  [16])0x0;
    uStack_4a0 = 0xff00;
    uStack_49c = uStack_49c & 0xffffff00;
    uStack_498 = uStack_498 & 0xffffff00;
    uStack_494 = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497e98;
    uVar3 = auStack_548._0_8_;
    auStack_548._0_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    if ((uStack_520 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510))),
                      CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520))) &
                      0xfffffffffffffffe);
    }
    uStack_520 = 0x70797408;
    cStack_51c = 0x65;
    uStack_51b = 0;
    if ((DAT_0f7372d0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7372d0), iVar7 != 0)) {
      func_0x0db82040(0xf7372b8);
      func_0x0410844d(&DAT_0f7372d0);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_80._4_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)CONCAT44(plStack_5a0._4_4_,3);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db65ce0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0db61aa0;
    puStack_570 = &UNK_0e8b8660;
    puStack_568 = &UNK_0e8b8670;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(&puStack_a0,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    puStack_458 = puStack_90;
    puStack_450 = puStack_88;
    puStack_468 = puStack_a0;
    puStack_460 = puStack_98;
    func_0x0e8b83f0(&uStack_5b0,&puStack_468,auStack_548);
    if (uStack_598._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != (int)uStack_598) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar9 != plStack_5a8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
LAB_0e8b05df:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_598._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != (int)uStack_598) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0e8b05df;
      }
      if (uStack_598._4_4_ == 0) {
        *(uint *)((long)plStack_5a0 + 0x18U) = *(uint *)((long)plStack_5a0 + 0x18U) | 0x90000;
      }
    }
    puStack_168 = puStack_a8;
    puStack_160 = puStack_a0;
    puStack_158 = puStack_98;
    puStack_150 = puStack_90;
    puStack_148 = puStack_88;
    uStack_140 = uStack_80;
    cStack_138 = (char)plStack_78;
    func_0x048b0bc0(auStack_548);
    uStack_e8 = puStack_168;
    puStack_e0 = puStack_160;
    puStack_d8 = puStack_158;
    puStack_d0 = puStack_150;
    puStack_c8 = puStack_148;
    uStack_c0 = uStack_140;
    uStack_b8 = CONCAT71(uStack_137,cStack_138);
    func_0x0e8b86c0(auStack_548,&uStack_e8,&UNK_0135c48e,0xf,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497ef0;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0e8b8990;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0db6a1a0;
    puStack_570 = &UNK_0e8b89a0;
    puStack_568 = &UNK_0e8b8b10;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8b88c0(auStack_548);
    uStack_f8 = CONCAT71(uStack_f8._1_7_,(undefined1)uStack_b8);
    puStack_108 = puStack_c8;
    uStack_100 = uStack_c0;
    puStack_118 = puStack_d8;
    puStack_110 = puStack_d0;
    puStack_128 = uStack_e8;
    puStack_120 = puStack_e0;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_460 = (undefined8 *)0xffffffffffffffff;
    puStack_458 = (undefined8 *)0x0;
    puStack_450 = (undefined8 *)CONCAT71(puStack_450._1_7_,0xff);
    puStack_468 = (undefined8 *)&UNK_0f4e3cf0;
    puStack_448 = (undefined8 *)0x1;
    uStack_440 = 0;
    plStack_438 = (long *)0x0;
    uStack_430 = (ushort)uStack_430._1_1_ << 8;
    FUN_0e8b7880(&uStack_228,&puStack_128,&puStack_468);
    uStack_178 = CONCAT71(uStack_1f7,cStack_1f8);
    puStack_188 = puStack_208;
    uStack_180 = uStack_200;
    uStack_198 = SUB81(puStack_218,0);
    uStack_197 = (undefined2)((ulong)puStack_218 >> 8);
    uStack_195 = (undefined5)((ulong)puStack_218 >> 0x18);
    puStack_190 = puStack_210;
    bStack_1a8 = (byte)uStack_228;
    uStack_1a7 = (undefined7)((ulong)uStack_228 >> 8);
    bStack_1a0 = (byte)puStack_220;
    uStack_19f = (undefined7)((ulong)puStack_220 >> 8);
    func_0x0e8b86c0(auStack_548,&bStack_1a8,&UNK_01412f41,0x11,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497ef0;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0e8b8990;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0db6a1a0;
    puStack_570 = &UNK_0e8b90b0;
    puStack_568 = &UNK_0e8b9220;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8b88c0(auStack_548);
    uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_178);
    puStack_3c8 = puStack_188;
    uStack_3c0 = uStack_180;
    uStack_3d8 = uStack_198;
    uStack_3d7 = (undefined1)uStack_197;
    uStack_3d6 = (undefined6)(CONCAT53(uStack_195,CONCAT21(uStack_197,uStack_198)) >> 0x10);
    puStack_3d0 = puStack_190;
    bStack_3e8 = bStack_1a8;
    uStack_3e7 = uStack_1a7;
    bStack_3e0 = bStack_1a0;
    uStack_3df = uStack_19f;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_360 = (undefined8 *)0xffffffffffffffff;
    puStack_358 = (undefined8 *)0x0;
    puStack_350 = (undefined8 *)CONCAT71(puStack_350._1_7_,0xff);
    puStack_368 = (undefined8 *)&UNK_0f4e3cf0;
    puStack_348 = (undefined8 *)0x1;
    uStack_340 = 0;
    plStack_338 = (long *)0x0;
    uStack_330 = 0;
    FUN_0e8b7880(&bStack_328,&bStack_3e8,&puStack_368);
    plStack_278 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
    puStack_288 = puStack_308;
    uStack_280 = uStack_300;
    puStack_298 = puStack_318;
    puStack_290 = puStack_310;
    bStack_2a8 = bStack_328;
    uStack_2a7 = (undefined6)uStack_327;
    uStack_2a1 = (undefined1)((uint7)uStack_327 >> 0x30);
    bStack_2a0 = bStack_320;
    uStack_29f = (undefined6)uStack_31f;
    uStack_299 = (undefined1)((uint7)uStack_31f >> 0x30);
    func_0x0e8b86c0(auStack_548,&bStack_2a8,&UNK_01412f53,0xc,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8b9400;
    puStack_568 = &UNK_0e8b9600;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8b88c0(auStack_548);
    plStack_2b8 = (long *)CONCAT71(plStack_2b8._1_7_,plStack_278._0_1_);
    puStack_2c8 = puStack_288;
    uStack_2c0 = uStack_280;
    uStack_2d8 = SUB81(puStack_298,0);
    uStack_2d7 = (undefined6)((ulong)puStack_298 >> 8);
    uStack_2d1 = (undefined1)((ulong)puStack_298 >> 0x38);
    puStack_2d0 = puStack_290;
    bStack_2e8 = bStack_2a8;
    uStack_2e7 = (undefined7)(CONCAT17(uStack_2a1,CONCAT61(uStack_2a7,bStack_2a8)) >> 8);
    bStack_2e0 = bStack_2a0;
    uStack_2df = uStack_29f;
    uStack_2d9 = uStack_299;
    func_0x048b0bc0(auStack_538 + 8);
    bStack_428 = bStack_2e8;
    uStack_427 = uStack_2e7;
    bStack_420 = bStack_2e0;
    uStack_41f = (undefined7)(CONCAT17(uStack_2d9,CONCAT61(uStack_2df,bStack_2e0)) >> 8);
    uStack_418 = (undefined4)CONCAT61(uStack_2d7,uStack_2d8);
    uStack_414 = (uint)(CONCAT17(uStack_2d1,CONCAT61(uStack_2d7,uStack_2d8)) >> 0x20);
    puStack_410 = puStack_2d0;
    puStack_408 = puStack_2c8;
    uStack_400 = uStack_2c0;
    plStack_3f8 = plStack_2b8;
    func_0x0e8b86c0(auStack_548,&bStack_428,&UNK_0145f54d,0x13,1);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8b97e0;
    puStack_568 = &UNK_0e8b9a00;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8b88c0(auStack_548);
    plStack_238 = (long *)CONCAT71(plStack_238._1_7_,plStack_3f8._0_1_);
    puStack_268 = (undefined8 *)CONCAT71(uStack_427,bStack_428);
    puStack_260 = (undefined8 *)CONCAT71(uStack_41f,bStack_420);
    puStack_258 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    puStack_248 = puStack_408;
    uStack_240 = uStack_400;
    puStack_250 = puStack_410;
    func_0x048b0bc0(auStack_538 + 8);
    auStack_1e8._8_8_ = puStack_260;
    auStack_1e8._0_8_ = puStack_268;
    puStack_1d8 = puStack_258;
    puStack_1d0 = puStack_250;
    puStack_1c8 = puStack_248;
    uStack_1c0 = uStack_240;
    plStack_1b8 = plStack_238;
    func_0x0e8b86c0(auStack_548,auStack_1e8,&UNK_011b8f7b,0xe,0);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4cefc0;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0e8bab80;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &UNK_0e8ba840;
    puStack_570 = &UNK_0e8bab90;
    puStack_568 = &UNK_0e8bace0;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8b88c0(auStack_548);
    func_0x048b0bc0(auStack_538 + 8);
    plVar10 = plStack_338;
    puStack_368 = (undefined8 *)&UNK_0f4e3cf0;
    if (plStack_338 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_338 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = plStack_438;
    puStack_468 = (undefined8 *)&UNK_0f4e3cf0;
    if (plStack_438 == (long *)0x0) goto LAB_0e8b0f6a;
    LOCK();
    plVar2 = plStack_438 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_0e8b0f6a;
    (**(code **)(*plStack_438 + 0x10))(plStack_438);
    func_0x0412c2d0(plVar10);
    lVar9 = func_0x0db80430(lStack_270);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e8b0f84;
LAB_0e8b106a:
    func_0x0e8bb4b0(&puStack_168,lStack_470,&UNK_01390eeb,0xf);
    if (cStack_138 != '\0') goto LAB_0e8b0fce;
LAB_0e8b1099:
    puVar21 = puStack_168 + 3;
    lVar9 = func_0x0db80430(puVar21);
    for (pbVar15 = (byte *)puStack_168[10]; pbVar15 != (byte *)puStack_168[0xb];
        pbVar15 = pbVar15 + 0x38) {
      bVar1 = *pbVar15;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e8b116a;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0e8b116a:
        if ((bVar1 & 1) == 0) {
          pbVar19 = pbVar15 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar15 + 0x10);
        }
        auVar25[0] = -(*pbVar19 == 0x5b);
        auVar25[1] = -(pbVar19[1] == 99);
        auVar25[2] = -(pbVar19[2] == 0x65);
        auVar25[3] = -(pbVar19[3] == 0x72);
        auVar25[4] = -(pbVar19[4] == 0x65);
        auVar25[5] = -(pbVar19[5] == 0x61);
        auVar25[6] = -(pbVar19[6] == 0x6c);
        auVar25[7] = -(pbVar19[7] == 0x3a);
        auVar25[8] = -(pbVar19[8] == 100);
        auVar25[9] = -(pbVar19[9] == 0x6f);
        auVar25[10] = -(pbVar19[10] == 99);
        auVar25[0xb] = -(pbVar19[0xb] == 0x75);
        auVar25[0xc] = -(pbVar19[0xc] == 0x6d);
        auVar25[0xd] = -(pbVar19[0xd] == 0x65);
        auVar25[0xe] = -(pbVar19[0xe] == 0x6e);
        auVar25[0xf] = -(pbVar19[0xf] == 0x74);
        auVar31[0] = -(pbVar19[10] == 99);
        auVar31[1] = -(pbVar19[0xb] == 0x75);
        auVar31[2] = -(pbVar19[0xc] == 0x6d);
        auVar31[3] = -(pbVar19[0xd] == 0x65);
        auVar31[4] = -(pbVar19[0xe] == 0x6e);
        auVar31[5] = -(pbVar19[0xf] == 0x74);
        auVar31[6] = -(pbVar19[0x10] == 0x61);
        auVar31[7] = -(pbVar19[0x11] == 0x74);
        auVar31[8] = -(pbVar19[0x12] == 0x69);
        auVar31[9] = -(pbVar19[0x13] == 0x6f);
        auVar31[10] = -(pbVar19[0x14] == 0x6e);
        auVar31[0xb] = -(pbVar19[0x15] == 0x5f);
        auVar31[0xc] = -(pbVar19[0x16] == 0x74);
        auVar31[0xd] = -(pbVar19[0x17] == 0x61);
        auVar31[0xe] = -(pbVar19[0x18] == 0x67);
        auVar31[0xf] = -(pbVar19[0x19] == 0x5d);
        auVar31 = auVar31 & auVar25;
        if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == (byte *)puStack_168[0xb]) {
LAB_0e8b1199:
      if ((int)uStack_140 == 0) {
        if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
        goto LAB_0e8b120d;
        lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
      }
      else {
        auStack_548._0_8_ = FUN_048b0c90(puVar21,lVar9,uStack_140._4_4_,1);
        if (auStack_548._0_8_ == 0) {
          auStack_548 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_548);
          if (auStack_548._0_8_ == 0) goto LAB_0e8b120d;
        }
        if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e8b120d:
          lVar9 = 0;
        }
      }
      plStack_5a0 = (long *)&UNK_0488e0b0;
      uStack_598 = (code *)0x0;
      uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
      uStack_5b0 = 0;
      auStack_548 = (undefined1  [16])0x0;
      auStack_538._8_8_ = &UNK_0488e0b0;
      pcStack_528 = (code *)0x0;
      uStack_520 = 0x48b5725f;
      cStack_51c = '\0';
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      puStack_468 = (undefined8 *)0x21;
      puStack_460 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar21 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar21 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar21 = _DAT_013bbacd;
      puVar21[1] = uVar3;
      *(undefined1 *)((long)puVar21 + 0x1a) = 0;
      puStack_458 = puVar21;
      lVar9 = func_0x048b5060(lVar9,&puStack_468);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_548) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar21 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar21);
          if (cStack_51c != '\0') {
            if (cStack_51c == '\x02') {
              (*(code *)auStack_538._8_8_)(5,auStack_548 + 8,puVar21);
            }
            else {
              uVar3 = auStack_548._8_8_;
              auStack_548._8_8_ = 0;
              *puVar21 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_538._8_8_;
        *(code **)(lVar9 + 0x40) = pcStack_528;
        *(uint *)(lVar9 + 0x48) = uStack_520;
        *(char *)(lVar9 + 0x4c) = cStack_51c;
        pcVar12 = pcStack_528;
      }
      if (((ulong)puStack_468 & 1) != 0) {
        func_0x0412a280(puStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
        pcVar12 = pcStack_528;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_548 + 8);
      }
      if (uStack_598 != (code *)0x0) {
        (*uStack_598)(&uStack_5b0);
      }
    }
    else {
      iVar7 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e8b1199;
    }
    uStack_140 = 0x5127f14d00000002;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    auStack_508 = (undefined1  [16])0x0;
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    uStack_50e = 0;
    uStack_50a = 0;
    pcStack_528 = (code *)0x0;
    uStack_520 = 0;
    cStack_51c = 0;
    uStack_51b = 0;
    uStack_51a = 0;
    auStack_538 = (undefined1  [16])0x0;
    auStack_548 = (undefined1  [16])0x0;
    uStack_4d8 = 0x3f600000;
    func_0x048afb10(auStack_508,8);
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    auStack_4d0 = (undefined1  [16])0x0;
    uStack_4a0 = 0xff00;
    uStack_49c = uStack_49c & 0xffffff00;
    uStack_498 = uStack_498 & 0xffffff00;
    uStack_494 = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497e98;
    uVar3 = auStack_548._0_8_;
    auStack_548._0_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    if ((uStack_520 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510))),
                      CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520))) &
                      0xfffffffffffffffe);
    }
    uStack_520 = 0x70797408;
    cStack_51c = 0x65;
    uStack_51b = 0;
    if ((DAT_0f737558 == '\0') && (iVar7 = FUN_04108328(&DAT_0f737558), iVar7 != 0)) {
      func_0x0db81a90(0xf737540);
      func_0x0410844d(&DAT_0f737558);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_140._4_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)CONCAT44(plStack_5a0._4_4_,3);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db65ce0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0db61aa0;
    puStack_570 = &UNK_0e8bc080;
    puStack_568 = &UNK_0e8bc090;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(&puStack_160,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    puStack_458 = puStack_150;
    puStack_450 = puStack_148;
    puStack_468 = puStack_160;
    puStack_460 = puStack_158;
    func_0x0e8bbe10(&uStack_5b0,&puStack_468,auStack_548);
    if (uStack_598._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != (int)uStack_598) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar9 != plStack_5a8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
LAB_0e8b164f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_598._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != (int)uStack_598) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0e8b164f;
      }
      if (uStack_598._4_4_ == 0) {
        *(uint *)((long)plStack_5a0 + 0x18U) = *(uint *)((long)plStack_5a0 + 0x18U) | 0x90000;
      }
    }
    uStack_e8 = puStack_168;
    puStack_e0 = puStack_160;
    puStack_d8 = puStack_158;
    puStack_d0 = puStack_150;
    puStack_c8 = puStack_148;
    uStack_c0 = uStack_140;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,cStack_138);
    func_0x048b0bc0(auStack_548);
    puStack_128 = uStack_e8;
    puStack_120 = puStack_e0;
    puStack_118 = puStack_d8;
    puStack_110 = puStack_d0;
    puStack_108 = puStack_c8;
    uStack_100 = uStack_c0;
    uStack_f8 = uStack_b8;
    func_0x0e8bc0e0(auStack_548,&puStack_128,&UNK_0126cda9,0xf);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef46ce8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0490cb20;
    puStack_570 = &UNK_0e8bc440;
    puStack_568 = &UNK_0e8bc5a0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    cStack_1f8 = (char)uStack_f8;
    puStack_208 = puStack_108;
    uStack_200 = uStack_100;
    puStack_218 = puStack_118;
    puStack_210 = puStack_110;
    uStack_228 = puStack_128;
    puStack_220 = puStack_120;
    func_0x048b0bc0(auStack_538 + 8);
    uStack_42e = 0;
    uStack_42a = 0;
    puStack_460 = (undefined8 *)0xffffffffffffffff;
    puStack_458 = (undefined8 *)0x0;
    puStack_450 = (undefined8 *)CONCAT71(puStack_450._1_7_,0xff);
    puStack_468 = (undefined8 *)&UNK_0f0edc68;
    puStack_448 = (undefined8 *)0x0;
    uStack_440 = _DAT_014f0710;
    plStack_438 = (long *)0x0;
    uStack_430 = 0;
    func_0x0e8bb270(&bStack_1a8,&uStack_228,&puStack_468);
    uStack_3b8 = uStack_178;
    puStack_3c8 = puStack_188;
    uStack_3c0 = uStack_180;
    uStack_3d8 = uStack_198;
    uStack_3d7 = (undefined1)uStack_197;
    uStack_3d6 = (undefined6)(CONCAT53(uStack_195,CONCAT21(uStack_197,uStack_198)) >> 0x10);
    puStack_3d0 = puStack_190;
    bStack_3e8 = bStack_1a8;
    uStack_3e7 = uStack_1a7;
    bStack_3e0 = bStack_1a0;
    uStack_3df = uStack_19f;
    func_0x0e8bc0e0(auStack_548,&bStack_3e8,&UNK_01376c53,0x12);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bc770;
    puStack_568 = &UNK_0e8bc970;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_3b8);
    puStack_318 = (undefined8 *)CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8));
    puStack_308 = puStack_3c8;
    uStack_300 = uStack_3c0;
    puStack_310 = puStack_3d0;
    bStack_328 = bStack_3e8;
    uStack_327 = uStack_3e7;
    bStack_320 = bStack_3e0;
    uStack_31f = uStack_3df;
    func_0x048b0bc0(auStack_538 + 8);
    bStack_2a8 = bStack_328;
    uStack_2a7 = (undefined6)uStack_327;
    uStack_2a1 = (undefined1)((uint7)uStack_327 >> 0x30);
    bStack_2a0 = bStack_320;
    uStack_29f = (undefined6)uStack_31f;
    uStack_299 = (undefined1)((uint7)uStack_31f >> 0x30);
    puStack_298 = puStack_318;
    puStack_290 = puStack_310;
    puStack_288 = puStack_308;
    uStack_280 = uStack_300;
    plStack_278 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
    func_0x0e8bc0e0(auStack_548,&bStack_2a8,&UNK_0145f54d,0x13);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bcb50;
    puStack_568 = &UNK_0e8bcd60;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    plStack_2b8 = (long *)CONCAT71(plStack_2b8._1_7_,plStack_278._0_1_);
    puStack_2c8 = puStack_288;
    uStack_2c0 = uStack_280;
    uStack_2d8 = SUB81(puStack_298,0);
    uStack_2d7 = (undefined6)((ulong)puStack_298 >> 8);
    uStack_2d1 = (undefined1)((ulong)puStack_298 >> 0x38);
    puStack_2d0 = puStack_290;
    bStack_2e8 = bStack_2a8;
    uStack_2e7 = (undefined7)(CONCAT17(uStack_2a1,CONCAT61(uStack_2a7,bStack_2a8)) >> 8);
    bStack_2e0 = bStack_2a0;
    uStack_2df = uStack_29f;
    uStack_2d9 = uStack_299;
    func_0x048b0bc0(auStack_538 + 8);
    bStack_428 = bStack_2e8;
    uStack_427 = uStack_2e7;
    bStack_420 = bStack_2e0;
    uStack_41f = (undefined7)(CONCAT17(uStack_2d9,CONCAT61(uStack_2df,bStack_2e0)) >> 8);
    uStack_418 = (undefined4)CONCAT61(uStack_2d7,uStack_2d8);
    uStack_414 = (uint)(CONCAT17(uStack_2d1,CONCAT61(uStack_2d7,uStack_2d8)) >> 0x20);
    puStack_410 = puStack_2d0;
    puStack_408 = puStack_2c8;
    uStack_400 = uStack_2c0;
    plStack_3f8 = plStack_2b8;
    func_0x0e8bc0e0(auStack_548,&bStack_428,&UNK_0119d142,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bcf40;
    puStack_568 = &UNK_0e8bd170;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    plStack_238 = (long *)CONCAT71(plStack_238._1_7_,plStack_3f8._0_1_);
    puStack_268 = (undefined8 *)CONCAT71(uStack_427,bStack_428);
    puStack_260 = (undefined8 *)CONCAT71(uStack_41f,bStack_420);
    puStack_258 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    puStack_248 = puStack_408;
    uStack_240 = uStack_400;
    puStack_250 = puStack_410;
    func_0x048b0bc0(auStack_538 + 8);
    auStack_1e8._8_8_ = puStack_260;
    auStack_1e8._0_8_ = puStack_268;
    puStack_1d8 = puStack_258;
    puStack_1d0 = puStack_250;
    puStack_1c8 = puStack_248;
    uStack_1c0 = uStack_240;
    plStack_1b8 = plStack_238;
    func_0x0e8bc0e0(auStack_548,auStack_1e8,&UNK_011ed174,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bd350;
    puStack_568 = &UNK_0e8bd580;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    plStack_378 = (long *)CONCAT71(plStack_378._1_7_,plStack_1b8._0_1_);
    puStack_388 = puStack_1c8;
    uStack_380 = uStack_1c0;
    puStack_398 = puStack_1d8;
    uStack_390 = puStack_1d0;
    puStack_3a8 = (undefined8 *)auStack_1e8._0_8_;
    puStack_3a0 = (undefined8 *)auStack_1e8._8_8_;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_368 = puStack_3a8;
    puStack_360 = puStack_3a0;
    puStack_358 = puStack_398;
    puStack_350 = uStack_390;
    puStack_348 = puStack_388;
    uStack_340 = uStack_380;
    plStack_338 = plStack_378;
    func_0x0e8bc0e0(auStack_548,&puStack_368,&UNK_01412f53,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bd760;
    puStack_568 = &UNK_0e8bd990;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    func_0x048b0bc0(auStack_538 + 8);
    func_0x0e8bc0e0(auStack_548,&puStack_168,&UNK_014ecd00,0x20);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef46ce8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0490cb20;
    puStack_570 = &UNK_0e8bdb70;
    puStack_568 = &UNK_0e8bdcd0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bc370(auStack_548);
    plStack_438 = (long *)CONCAT71(plStack_438._1_7_,cStack_138);
    puStack_448 = puStack_148;
    uStack_440 = uStack_140;
    puStack_458 = puStack_158;
    puStack_450 = puStack_150;
    puStack_468 = puStack_168;
    puStack_460 = puStack_160;
    func_0x048b0bc0(auStack_538 + 8);
    uStack_50e = 0;
    uStack_50a = 0;
    auStack_538._0_9_ = (unkuint9)0xff << 0x40;
    auStack_548._8_8_ = 0xffffffffffffffff;
    auStack_548._0_8_ = &UNK_0f0edc68;
    pcStack_528 = (code *)0x0;
    uStack_520 = (uint)_DAT_014f0710;
    cStack_51c = (char)((ulong)_DAT_014f0710 >> 0x20);
    uStack_51b = (undefined1)((ulong)_DAT_014f0710 >> 0x28);
    uStack_51a = (undefined2)((ulong)_DAT_014f0710 >> 0x30);
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    func_0x0e8bb270(&uStack_5b0,&puStack_468,auStack_548);
    lVar9 = func_0x0db80350(lStack_270);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e8b2288;
LAB_0e8b22e9:
    func_0x0e8bdeb0(&uStack_228,lStack_470,&UNK_0130a8d3,0xe);
    if (cStack_1f8 == '\0') goto LAB_0e8b2314;
LAB_0e8b22ca:
    lVar9 = func_0x0db80270(lStack_270);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e8b3b01;
LAB_0e8b3b62:
    func_0x0e8c1470(&uStack_228,lStack_470,&DAT_011b8f64,0x16);
    if (cStack_1f8 != '\0') goto LAB_0e8b3b43;
LAB_0e8b3b8d:
    puVar21 = uStack_228 + 3;
    lVar9 = func_0x0db80270(puVar21);
    for (pbVar15 = (byte *)uStack_228[10]; pbVar15 != (byte *)uStack_228[0xb];
        pbVar15 = pbVar15 + 0x38) {
      bVar1 = *pbVar15;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e8b3c5a;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0e8b3c5a:
        if ((bVar1 & 1) == 0) {
          pbVar19 = pbVar15 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar15 + 0x10);
        }
        auVar27[0] = -(*pbVar19 == 0x5b);
        auVar27[1] = -(pbVar19[1] == 99);
        auVar27[2] = -(pbVar19[2] == 0x65);
        auVar27[3] = -(pbVar19[3] == 0x72);
        auVar27[4] = -(pbVar19[4] == 0x65);
        auVar27[5] = -(pbVar19[5] == 0x61);
        auVar27[6] = -(pbVar19[6] == 0x6c);
        auVar27[7] = -(pbVar19[7] == 0x3a);
        auVar27[8] = -(pbVar19[8] == 100);
        auVar27[9] = -(pbVar19[9] == 0x6f);
        auVar27[10] = -(pbVar19[10] == 99);
        auVar27[0xb] = -(pbVar19[0xb] == 0x75);
        auVar27[0xc] = -(pbVar19[0xc] == 0x6d);
        auVar27[0xd] = -(pbVar19[0xd] == 0x65);
        auVar27[0xe] = -(pbVar19[0xe] == 0x6e);
        auVar27[0xf] = -(pbVar19[0xf] == 0x74);
        auVar33[0] = -(pbVar19[10] == 99);
        auVar33[1] = -(pbVar19[0xb] == 0x75);
        auVar33[2] = -(pbVar19[0xc] == 0x6d);
        auVar33[3] = -(pbVar19[0xd] == 0x65);
        auVar33[4] = -(pbVar19[0xe] == 0x6e);
        auVar33[5] = -(pbVar19[0xf] == 0x74);
        auVar33[6] = -(pbVar19[0x10] == 0x61);
        auVar33[7] = -(pbVar19[0x11] == 0x74);
        auVar33[8] = -(pbVar19[0x12] == 0x69);
        auVar33[9] = -(pbVar19[0x13] == 0x6f);
        auVar33[10] = -(pbVar19[0x14] == 0x6e);
        auVar33[0xb] = -(pbVar19[0x15] == 0x5f);
        auVar33[0xc] = -(pbVar19[0x16] == 0x74);
        auVar33[0xd] = -(pbVar19[0x17] == 0x61);
        auVar33[0xe] = -(pbVar19[0x18] == 0x67);
        auVar33[0xf] = -(pbVar19[0x19] == 0x5d);
        auVar33 = auVar33 & auVar27;
        if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == (byte *)uStack_228[0xb]) {
LAB_0e8b3c89:
      if ((int)uStack_200 == 0) {
        if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
        goto LAB_0e8b3cfd;
        lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
      }
      else {
        auStack_548._0_8_ = FUN_048b0c90(puVar21,lVar9,uStack_200._4_4_,1);
        if (auStack_548._0_8_ == 0) {
          auStack_548 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_548);
          if (auStack_548._0_8_ == 0) goto LAB_0e8b3cfd;
        }
        if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e8b3cfd:
          lVar9 = 0;
        }
      }
      plStack_5a0 = (long *)&UNK_0488e0b0;
      uStack_598 = (code *)0x0;
      uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
      uStack_5b0 = 0;
      auStack_548 = (undefined1  [16])0x0;
      auStack_538._8_8_ = &UNK_0488e0b0;
      pcStack_528 = (code *)0x0;
      uStack_520 = 0x48b5725f;
      cStack_51c = '\0';
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      puStack_468 = (undefined8 *)0x21;
      puStack_460 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar21 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar21 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar21 = _DAT_013bbacd;
      puVar21[1] = uVar3;
      *(undefined1 *)((long)puVar21 + 0x1a) = 0;
      puStack_458 = puVar21;
      lVar9 = func_0x048b5060(lVar9,&puStack_468);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_548) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar21 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar21);
          if (cStack_51c != '\0') {
            if (cStack_51c == '\x02') {
              (*(code *)auStack_538._8_8_)(5,auStack_548 + 8,puVar21);
            }
            else {
              uVar3 = auStack_548._8_8_;
              auStack_548._8_8_ = 0;
              *puVar21 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_538._8_8_;
        *(code **)(lVar9 + 0x40) = pcStack_528;
        *(uint *)(lVar9 + 0x48) = uStack_520;
        *(char *)(lVar9 + 0x4c) = cStack_51c;
        pcVar12 = pcStack_528;
      }
      if (((ulong)puStack_468 & 1) != 0) {
        func_0x0412a280(puStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
        pcVar12 = pcStack_528;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_548 + 8);
      }
      if (uStack_598 != (code *)0x0) {
        (*uStack_598)(&uStack_5b0);
      }
    }
    else {
      iVar7 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e8b3c89;
    }
    uStack_200 = 0x5127f14d00000002;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    auStack_508 = (undefined1  [16])0x0;
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    uStack_50e = 0;
    uStack_50a = 0;
    pcStack_528 = (code *)0x0;
    uStack_520 = 0;
    cStack_51c = 0;
    uStack_51b = 0;
    uStack_51a = 0;
    auStack_538 = (undefined1  [16])0x0;
    auStack_548 = (undefined1  [16])0x0;
    uStack_4d8 = 0x3f600000;
    func_0x048afb10(auStack_508,8);
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    auStack_4d0 = (undefined1  [16])0x0;
    uStack_4a0 = 0xff00;
    uStack_49c = uStack_49c & 0xffffff00;
    uStack_498 = uStack_498 & 0xffffff00;
    uStack_494 = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497e98;
    uVar3 = auStack_548._0_8_;
    auStack_548._0_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    if ((uStack_520 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510))),
                      CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520))) &
                      0xfffffffffffffffe);
    }
    uStack_520 = 0x70797408;
    cStack_51c = 0x65;
    uStack_51b = 0;
    if ((DAT_0f7376c8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7376c8), iVar7 != 0)) {
      func_0x0db80e80(0xf7376b0);
      func_0x0410844d(&DAT_0f7376c8);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_200._4_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)CONCAT44(plStack_5a0._4_4_,3);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db65ce0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0db61aa0;
    puStack_570 = &UNK_0e8c2040;
    puStack_568 = &UNK_0e8c2050;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(&puStack_220,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    puStack_458 = puStack_210;
    puStack_450 = puStack_208;
    puStack_468 = puStack_220;
    puStack_460 = puStack_218;
    FUN_0e8c1dd0(&uStack_5b0,&puStack_468,auStack_548);
    if (uStack_598._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != (int)uStack_598) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar9 != plStack_5a8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
LAB_0e8b413f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_598._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != (int)uStack_598) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0e8b413f;
      }
      if (uStack_598._4_4_ == 0) {
        *(uint *)((long)plStack_5a0 + 0x18U) = *(uint *)((long)plStack_5a0 + 0x18U) | 0x90000;
      }
    }
    bStack_1a8 = (byte)uStack_228;
    uStack_1a7 = (undefined7)((ulong)uStack_228 >> 8);
    bStack_1a0 = (byte)puStack_220;
    uStack_19f = (undefined7)((ulong)puStack_220 >> 8);
    uStack_198 = SUB81(puStack_218,0);
    uStack_197 = (undefined2)((ulong)puStack_218 >> 8);
    uStack_195 = (undefined5)((ulong)puStack_218 >> 0x18);
    puStack_190 = puStack_210;
    puStack_188 = puStack_208;
    uStack_180 = uStack_200;
    uStack_178 = CONCAT71(uStack_178._1_7_,cStack_1f8);
    func_0x048b0bc0(auStack_548);
    bStack_3e8 = bStack_1a8;
    uStack_3e7 = uStack_1a7;
    bStack_3e0 = bStack_1a0;
    uStack_3df = uStack_19f;
    uStack_3d8 = uStack_198;
    uStack_3d7 = (undefined1)uStack_197;
    uStack_3d6 = (undefined6)(CONCAT53(uStack_195,CONCAT21(uStack_197,uStack_198)) >> 0x10);
    puStack_3d0 = puStack_190;
    puStack_3c8 = puStack_188;
    uStack_3c0 = uStack_180;
    uStack_3b8 = uStack_178;
    func_0x0e8c20a0(auStack_548,&bStack_3e8,&UNK_0126cda9,0xf);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef46ce8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0490cb20;
    puStack_570 = &UNK_0e8c2360;
    puStack_568 = &UNK_0e8c24c0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8c2290(auStack_548);
    uVar3 = uStack_3c0;
    uVar4 = uStack_3e7;
    bVar1 = bStack_3e8;
    lVar9 = CONCAT71(uStack_3e7,bStack_3e8);
    puStack_128 = (undefined8 *)CONCAT71(uStack_3df,bStack_3e0);
    puStack_120 = (undefined8 *)CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8));
    puStack_118 = puStack_3d0;
    puStack_110 = puStack_3c8;
    iVar7 = (int)uStack_3c0;
    uVar5 = uStack_3c0._4_4_;
    uVar6 = (char)uStack_3b8;
    func_0x048b0bc0(auStack_538 + 8);
    if (iVar7 == 4) {
      lVar9 = lVar9 + 0x18;
      uVar11 = func_0x0db80270(lVar9);
      lVar9 = func_0x048b1040(lVar9,uVar11,uVar5,1);
      if (lVar9 == 0) {
        auStack_548 = ZEXT816(0);
        func_0x048b10d0(auStack_548);
        lVar18 = *(long *)(auStack_548._0_8_ + 0x38);
        lVar9 = auStack_548._0_8_;
        if (lVar18 == 0) goto LAB_0e8b445f;
LAB_0e8b447b:
        do {
          lVar9 = lVar18;
          lVar18 = *(long *)(lVar9 + 0x38);
          if (*(long *)(lVar9 + 0x38) == 0) {
            auStack_548 = ZEXT816(0);
            func_0x048b10d0(auStack_548);
            lVar18 = auStack_548._0_8_;
          }
        } while (lVar18 != 0);
      }
      else {
        lVar18 = *(long *)(lVar9 + 0x38);
        if (*(long *)(lVar9 + 0x38) != 0) goto LAB_0e8b447b;
LAB_0e8b445f:
        auStack_548 = ZEXT816(0);
        func_0x048b10d0(auStack_548);
        lVar18 = auStack_548._0_8_;
        if (auStack_548._0_8_ != 0) goto LAB_0e8b447b;
      }
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0e8b44de:
      puVar21[1] = 0xffffffffffffffff;
      puVar21[2] = 0;
      *(undefined1 *)(puVar21 + 3) = 0xff;
      *puVar21 = &UNK_0f0edc68;
      uVar11 = _DAT_014f0710;
      puVar21[4] = 0;
      puVar21[5] = uVar11;
      puVar21[6] = 0;
      puVar21[7] = 0;
      plVar10 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar21;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x28))();
      }
    }
    else if (iVar7 == 1) {
      lVar9 = lVar9 + 0x18;
      uVar11 = func_0x0db80270(lVar9);
      lVar9 = FUN_048b0c90(lVar9,uVar11,uVar5,1);
      if (lVar9 == 0) {
        auStack_548 = ZEXT816(0);
        func_0x048b0d20(auStack_548);
        lVar9 = auStack_548._0_8_;
      }
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0e8b44de;
    }
    puStack_310 = puStack_118;
    puStack_308 = puStack_110;
    bStack_320 = (byte)puStack_128;
    uStack_31f = (undefined7)((ulong)puStack_128 >> 8);
    puStack_318 = puStack_120;
    bStack_328 = bVar1;
    uStack_327 = uVar4;
    uStack_300 = uVar3;
    uStack_2f8._1_3_ = SUB83(uStack_e8,0);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,uVar6);
    uStack_2f4 = uStack_e8._3_4_;
    func_0x0e8c20a0(auStack_548,&bStack_328,&UNK_01376c53,0x12);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c2690;
    puStack_568 = &UNK_0e8c2890;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8c2290(auStack_548);
    plStack_278 = (long *)CONCAT71(plStack_278._1_7_,(undefined1)uStack_2f8);
    puStack_288 = puStack_308;
    uStack_280 = uStack_300;
    puStack_298 = puStack_318;
    puStack_290 = puStack_310;
    bStack_2a8 = bStack_328;
    uStack_2a7 = (undefined6)uStack_327;
    uStack_2a1 = (undefined1)((uint7)uStack_327 >> 0x30);
    bStack_2a0 = bStack_320;
    uStack_29f = (undefined6)uStack_31f;
    uStack_299 = (undefined1)((uint7)uStack_31f >> 0x30);
    func_0x048b0bc0(auStack_538 + 8);
    bStack_2e8 = bStack_2a8;
    uStack_2e7 = (undefined7)(CONCAT17(uStack_2a1,CONCAT61(uStack_2a7,bStack_2a8)) >> 8);
    bStack_2e0 = bStack_2a0;
    uStack_2df = uStack_29f;
    uStack_2d9 = uStack_299;
    uStack_2d8 = SUB81(puStack_298,0);
    uStack_2d7 = (undefined6)((ulong)puStack_298 >> 8);
    uStack_2d1 = (undefined1)((ulong)puStack_298 >> 0x38);
    puStack_2d0 = puStack_290;
    puStack_2c8 = puStack_288;
    uStack_2c0 = uStack_280;
    plStack_2b8 = plStack_278;
    func_0x0e8c20a0(auStack_548,&bStack_2e8,&UNK_0145f54d,0x13);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c2a70;
    puStack_568 = &UNK_0e8c2c80;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8c2290(auStack_548);
    plStack_3f8 = (long *)CONCAT71(plStack_3f8._1_7_,plStack_2b8._0_1_);
    puStack_408 = puStack_2c8;
    uStack_400 = uStack_2c0;
    uStack_418 = (undefined4)CONCAT61(uStack_2d7,uStack_2d8);
    uStack_414 = (uint)(CONCAT17(uStack_2d1,CONCAT61(uStack_2d7,uStack_2d8)) >> 0x20);
    puStack_410 = puStack_2d0;
    bStack_428 = bStack_2e8;
    uStack_427 = uStack_2e7;
    bStack_420 = bStack_2e0;
    uStack_41f = (undefined7)(CONCAT17(uStack_2d9,CONCAT61(uStack_2df,bStack_2e0)) >> 8);
    func_0x048b0bc0(auStack_538 + 8);
    puStack_268 = (undefined8 *)CONCAT71(uStack_427,bStack_428);
    puStack_260 = (undefined8 *)CONCAT71(uStack_41f,bStack_420);
    puStack_258 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    puStack_250 = puStack_410;
    puStack_248 = puStack_408;
    uStack_240 = uStack_400;
    plStack_238 = plStack_3f8;
    func_0x0e8c20a0(auStack_548,&puStack_268,&UNK_0119d142,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c2e60;
    puStack_568 = &UNK_0e8c3090;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8c2290(auStack_548);
    plStack_1b8 = (long *)CONCAT71(plStack_1b8._1_7_,plStack_238._0_1_);
    puStack_1c8 = puStack_248;
    uStack_1c0 = uStack_240;
    puStack_1d8 = puStack_258;
    puStack_1d0 = puStack_250;
    auStack_1e8._8_8_ = puStack_260;
    auStack_1e8._0_8_ = puStack_268;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_3a8 = (undefined8 *)auStack_1e8._0_8_;
    puStack_3a0 = (undefined8 *)auStack_1e8._8_8_;
    puStack_398 = puStack_1d8;
    uStack_390 = puStack_1d0;
    puStack_388 = puStack_1c8;
    uStack_380 = uStack_1c0;
    plStack_378 = plStack_1b8;
    func_0x0e8c20a0(auStack_548,&puStack_3a8,&UNK_011ed174,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c3270;
    puStack_568 = &UNK_0e8c34a0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8c2290(auStack_548);
    plStack_338 = (long *)CONCAT71(plStack_338._1_7_,(char)plStack_378);
    puStack_348 = puStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    puStack_350 = uStack_390;
    puStack_368 = puStack_3a8;
    puStack_360 = puStack_3a0;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_468 = puStack_368;
    puStack_460 = puStack_360;
    puStack_458 = puStack_358;
    puStack_450 = puStack_350;
    puStack_448 = puStack_348;
    uStack_440 = uStack_340;
    plStack_438 = plStack_338;
    func_0x0e8c20a0(auStack_548,&puStack_468,&UNK_01412f53,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c3680;
    puStack_568 = &UNK_0e8c38b0;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8c2290(auStack_548);
    func_0x048b0bc0(auStack_538 + 8);
    lVar9 = func_0x0db80190(lStack_270);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e8b4d27;
LAB_0e8b4d6e:
    func_0x0e8c3a90(&bStack_3e8,lStack_470,&DAT_0142bedc,0x13);
  }
  else {
    func_0x0e8b6fc0(&puStack_468,lStack_470,&DAT_013df14a,0x11);
    if ((char)plStack_438 == '\0') goto LAB_0e8af5ce;
LAB_0e8af584:
    lVar9 = func_0x0db80510(lStack_270);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e8aff85;
LAB_0e8aff3e:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e8aff85;
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    FUN_0e8b7ad0(&puStack_3a8,lStack_470,lVar18,uVar16);
    if ((char)plStack_378 == '\0') goto LAB_0e8affb4;
LAB_0e8b0f6a:
    lVar9 = func_0x0db80430(lStack_270);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e8b106a;
LAB_0e8b0f84:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e8b106a;
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e8bb4b0(&puStack_168,lStack_470,lVar18,uVar16);
    if (cStack_138 == '\0') goto LAB_0e8b1099;
LAB_0e8b0fce:
    lVar9 = func_0x0db80350(lStack_270);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e8b22e9;
LAB_0e8b2288:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e8b22e9;
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e8bdeb0(&uStack_228,lStack_470,lVar18,uVar16);
    if (cStack_1f8 != '\0') goto LAB_0e8b22ca;
LAB_0e8b2314:
    puVar21 = uStack_228 + 3;
    lVar9 = func_0x0db80350(puVar21);
    for (pbVar15 = (byte *)uStack_228[10]; pbVar15 != (byte *)uStack_228[0xb];
        pbVar15 = pbVar15 + 0x38) {
      bVar1 = *pbVar15;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e8b23ea;
      }
      else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0e8b23ea:
        if ((bVar1 & 1) == 0) {
          pbVar19 = pbVar15 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar15 + 0x10);
        }
        auVar26[0] = -(*pbVar19 == 0x5b);
        auVar26[1] = -(pbVar19[1] == 99);
        auVar26[2] = -(pbVar19[2] == 0x65);
        auVar26[3] = -(pbVar19[3] == 0x72);
        auVar26[4] = -(pbVar19[4] == 0x65);
        auVar26[5] = -(pbVar19[5] == 0x61);
        auVar26[6] = -(pbVar19[6] == 0x6c);
        auVar26[7] = -(pbVar19[7] == 0x3a);
        auVar26[8] = -(pbVar19[8] == 100);
        auVar26[9] = -(pbVar19[9] == 0x6f);
        auVar26[10] = -(pbVar19[10] == 99);
        auVar26[0xb] = -(pbVar19[0xb] == 0x75);
        auVar26[0xc] = -(pbVar19[0xc] == 0x6d);
        auVar26[0xd] = -(pbVar19[0xd] == 0x65);
        auVar26[0xe] = -(pbVar19[0xe] == 0x6e);
        auVar26[0xf] = -(pbVar19[0xf] == 0x74);
        auVar32[0] = -(pbVar19[10] == 99);
        auVar32[1] = -(pbVar19[0xb] == 0x75);
        auVar32[2] = -(pbVar19[0xc] == 0x6d);
        auVar32[3] = -(pbVar19[0xd] == 0x65);
        auVar32[4] = -(pbVar19[0xe] == 0x6e);
        auVar32[5] = -(pbVar19[0xf] == 0x74);
        auVar32[6] = -(pbVar19[0x10] == 0x61);
        auVar32[7] = -(pbVar19[0x11] == 0x74);
        auVar32[8] = -(pbVar19[0x12] == 0x69);
        auVar32[9] = -(pbVar19[0x13] == 0x6f);
        auVar32[10] = -(pbVar19[0x14] == 0x6e);
        auVar32[0xb] = -(pbVar19[0x15] == 0x5f);
        auVar32[0xc] = -(pbVar19[0x16] == 0x74);
        auVar32[0xd] = -(pbVar19[0x17] == 0x61);
        auVar32[0xe] = -(pbVar19[0x18] == 0x67);
        auVar32[0xf] = -(pbVar19[0x19] == 0x5d);
        auVar32 = auVar32 & auVar26;
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar15 == (byte *)uStack_228[0xb]) {
LAB_0e8b2419:
      if ((int)uStack_200 == 0) {
        if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
        goto LAB_0e8b248d;
        lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
      }
      else {
        auStack_548._0_8_ = FUN_048b0c90(puVar21,lVar9,uStack_200._4_4_,1);
        if (auStack_548._0_8_ == 0) {
          auStack_548 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_548);
          if (auStack_548._0_8_ == 0) goto LAB_0e8b248d;
        }
        if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e8b248d:
          lVar9 = 0;
        }
      }
      plStack_5a0 = (long *)&UNK_0488e0b0;
      uStack_598 = (code *)0x0;
      uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
      uStack_5b0 = 0;
      auStack_548 = (undefined1  [16])0x0;
      auStack_538._8_8_ = &UNK_0488e0b0;
      pcStack_528 = (code *)0x0;
      uStack_520 = 0x48b5725f;
      cStack_51c = '\0';
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      puStack_468 = (undefined8 *)0x21;
      puStack_460 = (undefined8 *)0x1a;
      *(ulong *)((long)puVar21 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar21 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar21 = _DAT_013bbacd;
      puVar21[1] = uVar3;
      *(undefined1 *)((long)puVar21 + 0x1a) = 0;
      puStack_458 = puVar21;
      lVar9 = func_0x048b5060(lVar9,&puStack_468);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_548) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar21 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar21);
          if (cStack_51c != '\0') {
            if (cStack_51c == '\x02') {
              (*(code *)auStack_538._8_8_)(5,auStack_548 + 8,puVar21);
            }
            else {
              uVar3 = auStack_548._8_8_;
              auStack_548._8_8_ = 0;
              *puVar21 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_538._8_8_;
        *(code **)(lVar9 + 0x40) = pcStack_528;
        *(uint *)(lVar9 + 0x48) = uStack_520;
        *(char *)(lVar9 + 0x4c) = cStack_51c;
        pcVar12 = pcStack_528;
      }
      if (((ulong)puStack_468 & 1) != 0) {
        func_0x0412a280(puStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
        pcVar12 = pcStack_528;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_548 + 8);
      }
      if (uStack_598 != (code *)0x0) {
        (*uStack_598)(&uStack_5b0);
      }
    }
    else {
      iVar7 = *(int *)(pbVar15 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e8b2419;
    }
    uStack_200 = 0x5127f14d00000002;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    lStack_4f8 = 0;
    lStack_4f0 = 0;
    auStack_508 = (undefined1  [16])0x0;
    uStack_518 = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    uStack_50f = 0;
    uStack_50e = 0;
    uStack_50a = 0;
    pcStack_528 = (code *)0x0;
    uStack_520 = 0;
    cStack_51c = 0;
    uStack_51b = 0;
    uStack_51a = 0;
    auStack_538 = (undefined1  [16])0x0;
    auStack_548 = (undefined1  [16])0x0;
    uStack_4d8 = 0x3f600000;
    func_0x048afb10(auStack_508,8);
    lStack_4b0 = 0;
    lStack_4a8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    auStack_4d0 = (undefined1  [16])0x0;
    uStack_4a0 = 0xff00;
    uStack_49c = uStack_49c & 0xffffff00;
    uStack_498 = uStack_498 & 0xffffff00;
    uStack_494 = 0;
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f497e98;
    uVar3 = auStack_548._0_8_;
    auStack_548._0_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    if ((uStack_520 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510))),
                      CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520))) &
                      0xfffffffffffffffe);
    }
    uStack_520 = 0x70797408;
    cStack_51c = 0x65;
    uStack_51b = 0;
    if ((DAT_0f737610 == '\0') && (iVar7 = FUN_04108328(&DAT_0f737610), iVar7 != 0)) {
      func_0x0db813f0(0xf7375f8);
      func_0x0410844d(&DAT_0f737610);
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_200._4_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)CONCAT44(plStack_5a0._4_4_,3);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db65ce0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0db61aa0;
    puStack_570 = &UNK_0e8beae0;
    puStack_568 = &UNK_0e8beaf0;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(&puStack_220,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    puStack_458 = puStack_210;
    puStack_450 = puStack_208;
    puStack_468 = puStack_220;
    puStack_460 = puStack_218;
    func_0x0e8be870(&uStack_5b0,&puStack_468,auStack_548);
    if (uStack_598._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != (int)uStack_598) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar9 != plStack_5a8) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
LAB_0e8b292f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_598._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != (int)uStack_598) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0e8b292f;
      }
      if (uStack_598._4_4_ == 0) {
        *(uint *)((long)plStack_5a0 + 0x18U) = *(uint *)((long)plStack_5a0 + 0x18U) | 0x90000;
      }
    }
    bStack_1a8 = (byte)uStack_228;
    uStack_1a7 = (undefined7)((ulong)uStack_228 >> 8);
    bStack_1a0 = (byte)puStack_220;
    uStack_19f = (undefined7)((ulong)puStack_220 >> 8);
    uStack_198 = SUB81(puStack_218,0);
    uStack_197 = (undefined2)((ulong)puStack_218 >> 8);
    uStack_195 = (undefined5)((ulong)puStack_218 >> 0x18);
    puStack_190 = puStack_210;
    puStack_188 = puStack_208;
    uStack_180 = uStack_200;
    uStack_178 = CONCAT71(uStack_178._1_7_,cStack_1f8);
    func_0x048b0bc0(auStack_548);
    bStack_3e8 = bStack_1a8;
    uStack_3e7 = uStack_1a7;
    bStack_3e0 = bStack_1a0;
    uStack_3df = uStack_19f;
    uStack_3d8 = uStack_198;
    uStack_3d7 = (undefined1)uStack_197;
    uStack_3d6 = (undefined6)(CONCAT53(uStack_195,CONCAT21(uStack_197,uStack_198)) >> 0x10);
    puStack_3d0 = puStack_190;
    puStack_3c8 = puStack_188;
    uStack_3c0 = uStack_180;
    uStack_3b8 = uStack_178;
    func_0x0e8beb40(auStack_548,&bStack_3e8,&UNK_0126cda9,0xf);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef46ce8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0490ce30;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0490cb20;
    puStack_570 = &UNK_0e8beea0;
    puStack_568 = &UNK_0e8bf000;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    uVar3 = uStack_3c0;
    uVar4 = uStack_3e7;
    bVar1 = bStack_3e8;
    lVar9 = CONCAT71(uStack_3e7,bStack_3e8);
    puStack_128 = (undefined8 *)CONCAT71(uStack_3df,bStack_3e0);
    puStack_120 = (undefined8 *)CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8));
    puStack_118 = puStack_3d0;
    puStack_110 = puStack_3c8;
    iVar7 = (int)uStack_3c0;
    uVar5 = uStack_3c0._4_4_;
    uVar6 = (char)uStack_3b8;
    func_0x048b0bc0(auStack_538 + 8);
    if (iVar7 == 4) {
      lVar9 = lVar9 + 0x18;
      uVar11 = func_0x0db80350(lVar9);
      lVar9 = func_0x048b1040(lVar9,uVar11,uVar5,1);
      if (lVar9 == 0) {
        auStack_548 = ZEXT816(0);
        func_0x048b10d0(auStack_548);
        lVar18 = *(long *)(auStack_548._0_8_ + 0x38);
        lVar9 = auStack_548._0_8_;
        if (lVar18 == 0) goto LAB_0e8b2c4f;
LAB_0e8b2c6b:
        do {
          lVar9 = lVar18;
          lVar18 = *(long *)(lVar9 + 0x38);
          if (*(long *)(lVar9 + 0x38) == 0) {
            auStack_548 = ZEXT816(0);
            func_0x048b10d0(auStack_548);
            lVar18 = auStack_548._0_8_;
          }
        } while (lVar18 != 0);
      }
      else {
        lVar18 = *(long *)(lVar9 + 0x38);
        if (*(long *)(lVar9 + 0x38) != 0) goto LAB_0e8b2c6b;
LAB_0e8b2c4f:
        auStack_548 = ZEXT816(0);
        func_0x048b10d0(auStack_548);
        lVar18 = auStack_548._0_8_;
        if (auStack_548._0_8_ != 0) goto LAB_0e8b2c6b;
      }
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0e8b2cce:
      puVar21[1] = 0xffffffffffffffff;
      puVar21[2] = 0;
      *(undefined1 *)(puVar21 + 3) = 0xff;
      *puVar21 = &UNK_0f0edc68;
      uVar11 = _DAT_014f0710;
      puVar21[4] = 0;
      puVar21[5] = uVar11;
      puVar21[6] = 0;
      puVar21[7] = 0;
      plVar10 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar21;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x28))();
      }
    }
    else if (iVar7 == 1) {
      lVar9 = lVar9 + 0x18;
      uVar11 = func_0x0db80350(lVar9);
      lVar9 = FUN_048b0c90(lVar9,uVar11,uVar5,1);
      if (lVar9 == 0) {
        auStack_548 = ZEXT816(0);
        func_0x048b0d20(auStack_548);
        lVar9 = auStack_548._0_8_;
      }
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0e8b2cce;
    }
    puStack_310 = puStack_118;
    puStack_308 = puStack_110;
    bStack_320 = (byte)puStack_128;
    uStack_31f = (undefined7)((ulong)puStack_128 >> 8);
    puStack_318 = puStack_120;
    bStack_328 = bVar1;
    uStack_327 = uVar4;
    uStack_300 = uVar3;
    uStack_2f8._1_3_ = SUB83(uStack_e8,0);
    uStack_2f8 = CONCAT31(uStack_2f8._1_3_,uVar6);
    uStack_2f4 = uStack_e8._3_4_;
    func_0x0e8beb40(auStack_548,&bStack_328,&UNK_01376c53,0x12);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bf1d0;
    puStack_568 = &UNK_0e8bf3d0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_278 = (long *)CONCAT71(plStack_278._1_7_,(undefined1)uStack_2f8);
    puStack_288 = puStack_308;
    uStack_280 = uStack_300;
    puStack_298 = puStack_318;
    puStack_290 = puStack_310;
    bStack_2a8 = bStack_328;
    uStack_2a7 = (undefined6)uStack_327;
    uStack_2a1 = (undefined1)((uint7)uStack_327 >> 0x30);
    bStack_2a0 = bStack_320;
    uStack_29f = (undefined6)uStack_31f;
    uStack_299 = (undefined1)((uint7)uStack_31f >> 0x30);
    func_0x048b0bc0(auStack_538 + 8);
    bStack_2e8 = bStack_2a8;
    uStack_2e7 = (undefined7)(CONCAT17(uStack_2a1,CONCAT61(uStack_2a7,bStack_2a8)) >> 8);
    bStack_2e0 = bStack_2a0;
    uStack_2df = uStack_29f;
    uStack_2d9 = uStack_299;
    uStack_2d8 = SUB81(puStack_298,0);
    uStack_2d7 = (undefined6)((ulong)puStack_298 >> 8);
    uStack_2d1 = (undefined1)((ulong)puStack_298 >> 0x38);
    puStack_2d0 = puStack_290;
    puStack_2c8 = puStack_288;
    uStack_2c0 = uStack_280;
    plStack_2b8 = plStack_278;
    func_0x0e8beb40(auStack_548,&bStack_2e8,&UNK_0145f54d,0x13);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bf5b0;
    puStack_568 = &UNK_0e8bf7c0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_3f8 = (long *)CONCAT71(plStack_3f8._1_7_,plStack_2b8._0_1_);
    puStack_408 = puStack_2c8;
    uStack_400 = uStack_2c0;
    uStack_418 = (undefined4)CONCAT61(uStack_2d7,uStack_2d8);
    uStack_414 = (uint)(CONCAT17(uStack_2d1,CONCAT61(uStack_2d7,uStack_2d8)) >> 0x20);
    puStack_410 = puStack_2d0;
    bStack_428 = bStack_2e8;
    uStack_427 = uStack_2e7;
    bStack_420 = bStack_2e0;
    uStack_41f = (undefined7)(CONCAT17(uStack_2d9,CONCAT61(uStack_2df,bStack_2e0)) >> 8);
    func_0x048b0bc0(auStack_538 + 8);
    puStack_268 = (undefined8 *)CONCAT71(uStack_427,bStack_428);
    puStack_260 = (undefined8 *)CONCAT71(uStack_41f,bStack_420);
    puStack_258 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    puStack_250 = puStack_410;
    puStack_248 = puStack_408;
    uStack_240 = uStack_400;
    plStack_238 = plStack_3f8;
    func_0x0e8beb40(auStack_548,&puStack_268,&UNK_0119d142,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bf9a0;
    puStack_568 = &UNK_0e8bfbd0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_1b8 = (long *)CONCAT71(plStack_1b8._1_7_,plStack_238._0_1_);
    puStack_1c8 = puStack_248;
    uStack_1c0 = uStack_240;
    puStack_1d8 = puStack_258;
    puStack_1d0 = puStack_250;
    auStack_1e8._0_8_ = puStack_268;
    auStack_1e8._8_8_ = puStack_260;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_3a8 = (undefined8 *)auStack_1e8._0_8_;
    puStack_3a0 = (undefined8 *)auStack_1e8._8_8_;
    puStack_398 = puStack_1d8;
    uStack_390 = puStack_1d0;
    puStack_388 = puStack_1c8;
    uStack_380 = uStack_1c0;
    plStack_378 = plStack_1b8;
    func_0x0e8beb40(auStack_548,&puStack_3a8,&UNK_011ed174,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8bfdb0;
    puStack_568 = &UNK_0e8bffe0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_338 = (long *)CONCAT71(plStack_338._1_7_,(char)plStack_378);
    puStack_348 = puStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    puStack_350 = uStack_390;
    puStack_368 = puStack_3a8;
    puStack_360 = puStack_3a0;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_468 = puStack_368;
    puStack_460 = puStack_360;
    puStack_458 = puStack_358;
    puStack_450 = puStack_350;
    puStack_448 = puStack_348;
    uStack_440 = uStack_340;
    plStack_438 = plStack_338;
    func_0x0e8beb40(auStack_548,&puStack_468,&UNK_01412f53,0xc);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c01c0;
    puStack_568 = &UNK_0e8c03f0;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    func_0x048b0bc0(auStack_538 + 8);
    func_0x0e8beb40(auStack_548,&uStack_228,&UNK_0119d134,0xd);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c05d0;
    puStack_568 = &UNK_0e8c0800;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_3f8 = (long *)CONCAT71(plStack_3f8._1_7_,cStack_1f8);
    puStack_408 = puStack_208;
    uStack_400 = uStack_200;
    uStack_418 = SUB84(puStack_218,0);
    uStack_414 = (uint)((ulong)puStack_218 >> 0x20);
    puStack_410 = puStack_210;
    bStack_428 = (byte)uStack_228;
    uStack_427 = (undefined7)((ulong)uStack_228 >> 8);
    bStack_420 = (byte)puStack_220;
    uStack_41f = (undefined7)((ulong)puStack_220 >> 8);
    func_0x048b0bc0(auStack_538 + 8);
    puStack_268 = (undefined8 *)CONCAT71(uStack_427,bStack_428);
    puStack_260 = (undefined8 *)CONCAT71(uStack_41f,bStack_420);
    puStack_258 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
    puStack_250 = puStack_410;
    puStack_248 = puStack_408;
    uStack_240 = uStack_400;
    plStack_238 = plStack_3f8;
    func_0x0e8beb40(auStack_548,&puStack_268,&UNK_014ecbe0,0x12);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0f4726f8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_0db8dd10;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_0d4858f0;
    puStack_570 = &UNK_0e8c09e0;
    puStack_568 = &UNK_0e8c0c10;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_1b8 = (long *)CONCAT71(plStack_1b8._1_7_,plStack_238._0_1_);
    puStack_1c8 = puStack_248;
    uStack_1c0 = uStack_240;
    puStack_1d8 = puStack_258;
    puStack_1d0 = puStack_250;
    auStack_1e8._8_8_ = puStack_260;
    auStack_1e8._0_8_ = puStack_268;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_3a8 = (undefined8 *)auStack_1e8._0_8_;
    puStack_3a0 = (undefined8 *)auStack_1e8._8_8_;
    puStack_398 = puStack_1d8;
    uStack_390 = puStack_1d0;
    puStack_388 = puStack_1c8;
    uStack_380 = uStack_1c0;
    plStack_378 = plStack_1b8;
    func_0x0e8beb40(auStack_548,&puStack_3a8,&UNK_0121dc40,0xd);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef46ef8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_04906f70;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_04906c50;
    puStack_570 = &UNK_0e8c0df0;
    puStack_568 = &UNK_0e8c0f50;
    uStack_560 = 0;
    auStack_558 = ZEXT816(0);
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    plStack_338 = (long *)CONCAT71(plStack_338._1_7_,(char)plStack_378);
    puStack_348 = puStack_388;
    uStack_340 = uStack_380;
    puStack_358 = puStack_398;
    puStack_350 = uStack_390;
    puStack_368 = puStack_3a8;
    puStack_360 = puStack_3a0;
    func_0x048b0bc0(auStack_538 + 8);
    puStack_468 = puStack_368;
    puStack_460 = puStack_360;
    puStack_458 = puStack_358;
    puStack_450 = puStack_350;
    puStack_448 = puStack_348;
    uStack_440 = uStack_340;
    plStack_438 = plStack_338;
    func_0x0e8beb40(auStack_548,&puStack_468,&UNK_0145ad9c,10);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar21 = &UNK_0ef46ef8;
    uVar3 = auStack_538._8_8_;
    auStack_538._8_8_ = puVar21;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
    plStack_5a8 = (long *)0x0;
    plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
    uStack_598 = (code *)0x1;
    uStack_590 = 0;
    puStack_588 = &UNK_04906f70;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_04906c50;
    puStack_570 = &UNK_0e8c1130;
    puStack_568 = &UNK_0e8c1290;
    uStack_560 = 0;
    auStack_558 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
    uVar3 = auStack_558._8_8_;
    if ((long *)auStack_558._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_558._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e8bedd0(auStack_548);
    func_0x048b0bc0(auStack_538 + 8);
    lVar9 = func_0x0db80270(lStack_270);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e8b3b62;
LAB_0e8b3b01:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e8b3b62;
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e8c1470(&uStack_228,lStack_470,lVar18,uVar16);
    if (cStack_1f8 == '\0') goto LAB_0e8b3b8d;
LAB_0e8b3b43:
    lVar9 = func_0x0db80190(lStack_270);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e8b4d6e;
LAB_0e8b4d27:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e8b4d6e;
    bVar22 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e8c3a90(&bStack_3e8,lStack_470,lVar18,uVar16);
  }
  if ((char)uStack_3b8 != '\0') {
    return;
  }
  lVar18 = CONCAT71(uStack_3e7,bStack_3e8) + 0x18;
  lVar9 = func_0x0db80190(lVar18);
  pbVar19 = *(byte **)(CONCAT71(uStack_3e7,bStack_3e8) + 0x58);
  for (pbVar15 = *(byte **)(CONCAT71(uStack_3e7,bStack_3e8) + 0x50); pbVar15 != pbVar19;
      pbVar15 = pbVar15 + 0x38) {
    bVar1 = *pbVar15;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e8b4e6a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0e8b4e6a:
      if ((bVar1 & 1) == 0) {
        pbVar20 = pbVar15 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar15 + 0x10);
      }
      auVar28[0] = -(*pbVar20 == 0x5b);
      auVar28[1] = -(pbVar20[1] == 99);
      auVar28[2] = -(pbVar20[2] == 0x65);
      auVar28[3] = -(pbVar20[3] == 0x72);
      auVar28[4] = -(pbVar20[4] == 0x65);
      auVar28[5] = -(pbVar20[5] == 0x61);
      auVar28[6] = -(pbVar20[6] == 0x6c);
      auVar28[7] = -(pbVar20[7] == 0x3a);
      auVar28[8] = -(pbVar20[8] == 100);
      auVar28[9] = -(pbVar20[9] == 0x6f);
      auVar28[10] = -(pbVar20[10] == 99);
      auVar28[0xb] = -(pbVar20[0xb] == 0x75);
      auVar28[0xc] = -(pbVar20[0xc] == 0x6d);
      auVar28[0xd] = -(pbVar20[0xd] == 0x65);
      auVar28[0xe] = -(pbVar20[0xe] == 0x6e);
      auVar28[0xf] = -(pbVar20[0xf] == 0x74);
      auVar34[0] = -(pbVar20[10] == 99);
      auVar34[1] = -(pbVar20[0xb] == 0x75);
      auVar34[2] = -(pbVar20[0xc] == 0x6d);
      auVar34[3] = -(pbVar20[0xd] == 0x65);
      auVar34[4] = -(pbVar20[0xe] == 0x6e);
      auVar34[5] = -(pbVar20[0xf] == 0x74);
      auVar34[6] = -(pbVar20[0x10] == 0x61);
      auVar34[7] = -(pbVar20[0x11] == 0x74);
      auVar34[8] = -(pbVar20[0x12] == 0x69);
      auVar34[9] = -(pbVar20[0x13] == 0x6f);
      auVar34[10] = -(pbVar20[0x14] == 0x6e);
      auVar34[0xb] = -(pbVar20[0x15] == 0x5f);
      auVar34[0xc] = -(pbVar20[0x16] == 0x74);
      auVar34[0xd] = -(pbVar20[0x17] == 0x61);
      auVar34[0xe] = -(pbVar20[0x18] == 0x67);
      auVar34[0xf] = -(pbVar20[0x19] == 0x5d);
      auVar34 = auVar34 & auVar28;
      if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == pbVar19) {
LAB_0e8b4e99:
    if ((int)uStack_3c0 == 0) {
      if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
      goto LAB_0e8b4f0d;
      lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
    }
    else {
      auStack_548._0_8_ = FUN_048b0c90(lVar18,lVar9,uStack_3c0._4_4_,1);
      if (auStack_548._0_8_ == 0) {
        auStack_548 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_548);
        if (auStack_548._0_8_ == 0) goto LAB_0e8b4f0d;
      }
      if ((*(int *)(auStack_548._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_548._0_8_ + 0x58) != 0)) {
        lVar9 = *(long *)(auStack_548._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e8b4f0d:
        lVar9 = 0;
      }
    }
    plStack_5a0 = (long *)&UNK_0488e0b0;
    uStack_598 = (code *)0x0;
    uStack_590 = CONCAT35(uStack_590._5_3_,0x48b5725f);
    uStack_5b0 = 0;
    auStack_548 = (undefined1  [16])0x0;
    auStack_538._8_8_ = &UNK_0488e0b0;
    pcStack_528 = (code *)0x0;
    uStack_520 = 0x48b5725f;
    cStack_51c = '\0';
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    puStack_468 = (undefined8 *)0x21;
    puStack_460 = (undefined8 *)0x1a;
    *(ulong *)((long)puVar21 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar21 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar21 = _DAT_013bbacd;
    puVar21[1] = uVar3;
    *(undefined1 *)((long)puVar21 + 0x1a) = 0;
    puStack_458 = puVar21;
    lVar9 = func_0x048b5060(lVar9,&puStack_468);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if ((undefined1 *)(lVar9 + 0x20) == auStack_548) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
        puVar21 = (undefined8 *)(lVar9 + 0x28);
        (**(code **)(lVar9 + 0x40))(puVar21);
        if (cStack_51c != '\0') {
          if (cStack_51c == '\x02') {
            (*(code *)auStack_538._8_8_)(5,auStack_548 + 8,puVar21);
          }
          else {
            uVar3 = auStack_548._8_8_;
            auStack_548._8_8_ = 0;
            *puVar21 = uVar3;
          }
        }
      }
      *(undefined8 *)(lVar9 + 0x38) = auStack_538._8_8_;
      *(code **)(lVar9 + 0x40) = pcStack_528;
      *(uint *)(lVar9 + 0x48) = uStack_520;
      *(char *)(lVar9 + 0x4c) = cStack_51c;
      pcVar12 = pcStack_528;
    }
    if (((ulong)puStack_468 & 1) != 0) {
      func_0x0412a280(puStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
      pcVar12 = pcStack_528;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_548 + 8);
    }
    if (uStack_598 != (code *)0x0) {
      (*uStack_598)(&uStack_5b0);
    }
  }
  else {
    iVar7 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e8b4e99;
  }
  uStack_3c0 = 0x5127f14d00000002;
  lStack_4e8 = 0;
  lStack_4e0 = 0;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  auStack_508 = (undefined1  [16])0x0;
  uStack_518 = 0;
  uStack_514 = 0;
  uStack_510 = 0;
  uStack_50f = 0;
  uStack_50e = 0;
  uStack_50a = 0;
  pcStack_528 = (code *)0x0;
  uStack_520 = 0;
  cStack_51c = 0;
  uStack_51b = 0;
  uStack_51a = 0;
  auStack_538 = (undefined1  [16])0x0;
  auStack_548 = (undefined1  [16])0x0;
  uStack_4d8 = 0x3f600000;
  func_0x048afb10(auStack_508,8);
  lStack_4b0 = 0;
  lStack_4a8 = 0;
  lStack_4c0 = 0;
  lStack_4b8 = 0;
  auStack_4d0 = (undefined1  [16])0x0;
  uStack_4a0 = 0xff00;
  uStack_49c = uStack_49c & 0xffffff00;
  uStack_498 = uStack_498 & 0xffffff00;
  uStack_494 = 0;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f497e98;
  uVar3 = auStack_548._0_8_;
  auStack_548._0_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  if ((uStack_520 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_50a,CONCAT42(uStack_50e,CONCAT11(uStack_50f,uStack_510))),
                    CONCAT26(uStack_51a,CONCAT15(uStack_51b,CONCAT14(cStack_51c,uStack_520))) &
                    0xfffffffffffffffe);
  }
  uStack_520 = 0x70797408;
  cStack_51c = 0x65;
  uStack_51b = 0;
  if ((DAT_0f737780 == '\0') && (iVar7 = FUN_04108328(&DAT_0f737780), iVar7 != 0)) {
    func_0x0db807e0(0xf737768);
    func_0x0410844d(&DAT_0f737780);
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uStack_3c0._4_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)CONCAT44(plStack_5a0._4_4_,3);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0db65ce0;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0db61aa0;
  puStack_570 = &UNK_0e8c4660;
  puStack_568 = &UNK_0e8c4670;
  uStack_560 = 0;
  auStack_558 = (undefined1  [16])0x0;
  func_0x048b05a0(&bStack_3e0,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_468 = (undefined8 *)CONCAT71(uStack_3df,bStack_3e0);
  puStack_460 = (undefined8 *)CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8));
  puStack_458 = puStack_3d0;
  puStack_450 = puStack_3c8;
  func_0x0e8c43f0(&uStack_5b0,&puStack_468,auStack_548);
  if (uStack_598._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != (int)uStack_598) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    lVar9 = *(long *)(piVar13 + 0xc);
    while ((long *)lVar9 != plStack_5a8) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar9 = *(long *)(piVar13 + 0xc);
    }
LAB_0e8b534f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
  }
  else {
    if (uStack_598._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)((long)plStack_5a0 + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != (int)uStack_598) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0e8b534f;
    }
    if (uStack_598._4_4_ == 0) {
      *(uint *)((long)plStack_5a0 + 0x18U) = *(uint *)((long)plStack_5a0 + 0x18U) | 0x90000;
    }
  }
  puStack_318 = (undefined8 *)CONCAT62(uStack_3d6,CONCAT11(uStack_3d7,uStack_3d8));
  bStack_328 = bStack_3e8;
  uStack_327 = uStack_3e7;
  bStack_320 = bStack_3e0;
  uStack_31f = uStack_3df;
  puStack_310 = puStack_3d0;
  puStack_308 = puStack_3c8;
  uStack_300 = uStack_3c0;
  uStack_2f8 = CONCAT31(uStack_2f8._1_3_,(char)uStack_3b8);
  func_0x048b0bc0(auStack_548);
  bStack_2a8 = bStack_328;
  uStack_2a7 = (undefined6)uStack_327;
  uStack_2a1 = (undefined1)((uint7)uStack_327 >> 0x30);
  bStack_2a0 = bStack_320;
  uStack_29f = (undefined6)uStack_31f;
  uStack_299 = (undefined1)((uint7)uStack_31f >> 0x30);
  puStack_298 = puStack_318;
  puStack_290 = puStack_310;
  puStack_288 = puStack_308;
  uStack_280 = uStack_300;
  plStack_278 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
  func_0x0e8c46c0(auStack_548,&bStack_2a8,&UNK_0126cda9,0xf);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0ef46ce8;
  uVar3 = auStack_538._8_8_;
  auStack_538._8_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0490ce30;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0490cb20;
  puStack_570 = &UNK_0e8c4980;
  puStack_568 = &UNK_0e8c4ae0;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e8c48b0(auStack_548);
  plVar10 = plStack_278;
  uVar3 = uStack_280;
  bVar1 = bStack_2a8;
  lVar9 = CONCAT17(uStack_2a1,CONCAT61(uStack_2a7,bStack_2a8));
  bStack_1a8 = bStack_2a0;
  uStack_1a7 = (undefined7)(CONCAT17(uStack_299,CONCAT61(uStack_29f,bStack_2a0)) >> 8);
  bStack_1a0 = (byte)puStack_298;
  uStack_19f = (undefined7)((ulong)puStack_298 >> 8);
  uStack_198 = SUB81(puStack_290,0);
  uStack_197 = (undefined2)((ulong)puStack_290 >> 8);
  uStack_195 = (undefined5)((ulong)puStack_290 >> 0x18);
  puStack_190 = puStack_288;
  iVar7 = (int)uStack_280;
  uVar5 = uStack_280._4_4_;
  func_0x048b0bc0(auStack_538 + 8);
  if (iVar7 == 4) {
    uVar11 = func_0x0db80190(lVar9 + 0x18);
    lVar18 = func_0x048b1040(lVar9 + 0x18,uVar11,uVar5,1);
    if (lVar18 == 0) {
      auStack_548 = ZEXT816(0);
      func_0x048b10d0(auStack_548);
      lVar14 = *(long *)(auStack_548._0_8_ + 0x38);
      lVar18 = auStack_548._0_8_;
      if (lVar14 == 0) goto LAB_0e8b566f;
LAB_0e8b568b:
      do {
        lVar18 = lVar14;
        lVar14 = *(long *)(lVar18 + 0x38);
        if (*(long *)(lVar18 + 0x38) == 0) {
          auStack_548 = ZEXT816(0);
          func_0x048b10d0(auStack_548);
          lVar14 = auStack_548._0_8_;
        }
      } while (lVar14 != 0);
    }
    else {
      lVar14 = *(long *)(lVar18 + 0x38);
      if (*(long *)(lVar18 + 0x38) != 0) goto LAB_0e8b568b;
LAB_0e8b566f:
      auStack_548 = ZEXT816(0);
      func_0x048b10d0(auStack_548);
      lVar14 = auStack_548._0_8_;
      if (auStack_548._0_8_ != 0) goto LAB_0e8b568b;
    }
    lVar18 = *(long *)(lVar18 + 0x48);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar7 != 1) goto LAB_0e8b5737;
    uVar11 = func_0x0db80190(lVar9 + 0x18);
    lVar18 = FUN_048b0c90(lVar9 + 0x18,uVar11,uVar5,1);
    if (lVar18 == 0) {
      auStack_548 = ZEXT816(0);
      func_0x048b0d20(auStack_548);
      lVar18 = auStack_548._0_8_;
    }
    lVar18 = *(long *)(lVar18 + 0x58);
    puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar21[1] = 0xffffffffffffffff;
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 0xff;
  *puVar21 = &UNK_0f0edc68;
  uVar11 = _DAT_014f0710;
  puVar21[4] = 0;
  puVar21[5] = uVar11;
  puVar21[6] = 0;
  puVar21[7] = 0;
  plVar2 = *(long **)(lVar18 + 8);
  *(undefined8 **)(lVar18 + 8) = puVar21;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
LAB_0e8b5737:
  puStack_2d0 = (undefined8 *)CONCAT53(uStack_195,CONCAT21(uStack_197,uStack_198));
  puStack_2c8 = puStack_190;
  bStack_2e0 = bStack_1a8;
  uStack_2df = (undefined6)uStack_1a7;
  uStack_2d9 = (undefined1)((uint7)uStack_1a7 >> 0x30);
  uStack_2d8 = bStack_1a0;
  uStack_2d7 = (undefined6)uStack_19f;
  uStack_2d1 = (undefined1)((uint7)uStack_19f >> 0x30);
  bStack_2e8 = bVar1;
  uStack_2e7 = (undefined7)((ulong)lVar9 >> 8);
  uStack_2c0 = uVar3;
  uVar5 = (undefined4)uStack_228;
  plStack_2b8 = (long *)CONCAT44(uStack_228._3_4_,(int)CONCAT41(uVar5,(char)plVar10));
  func_0x0e8c46c0(auStack_548,&bStack_2e8,&UNK_01376c53,0x12);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4726f8;
  uVar3 = auStack_538._8_8_;
  auStack_538._8_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0db8dd10;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0d4858f0;
  puStack_570 = &UNK_0e8c4cb0;
  puStack_568 = &UNK_0e8c4eb0;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e8c48b0(auStack_548);
  plStack_3f8 = (long *)CONCAT71(plStack_3f8._1_7_,plStack_2b8._0_1_);
  puStack_408 = puStack_2c8;
  uStack_400 = uStack_2c0;
  uStack_418 = (undefined4)CONCAT61(uStack_2d7,uStack_2d8);
  uStack_414 = (uint)(CONCAT17(uStack_2d1,CONCAT61(uStack_2d7,uStack_2d8)) >> 0x20);
  puStack_410 = puStack_2d0;
  bStack_428 = bStack_2e8;
  uStack_427 = uStack_2e7;
  bStack_420 = bStack_2e0;
  uStack_41f = (undefined7)(CONCAT17(uStack_2d9,CONCAT61(uStack_2df,bStack_2e0)) >> 8);
  func_0x048b0bc0(auStack_538 + 8);
  puStack_268 = (undefined8 *)CONCAT71(uStack_427,bStack_428);
  puStack_260 = (undefined8 *)CONCAT71(uStack_41f,bStack_420);
  puStack_258 = (undefined8 *)CONCAT44(uStack_414,uStack_418);
  puStack_250 = puStack_410;
  puStack_248 = puStack_408;
  uStack_240 = uStack_400;
  plStack_238 = plStack_3f8;
  func_0x0e8c46c0(auStack_548,&puStack_268,&UNK_0145f54d,0x13);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4726f8;
  uVar3 = auStack_538._8_8_;
  auStack_538._8_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0db8dd10;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0d4858f0;
  puStack_570 = &UNK_0e8c5090;
  puStack_568 = &UNK_0e8c52a0;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e8c48b0(auStack_548);
  plStack_1b8 = (long *)CONCAT71(plStack_1b8._1_7_,plStack_238._0_1_);
  puStack_1c8 = puStack_248;
  uStack_1c0 = uStack_240;
  puStack_1d8 = puStack_258;
  puStack_1d0 = puStack_250;
  auStack_1e8._0_8_ = puStack_268;
  auStack_1e8._8_8_ = puStack_260;
  func_0x048b0bc0(auStack_538 + 8);
  puStack_3a8 = (undefined8 *)auStack_1e8._0_8_;
  puStack_3a0 = (undefined8 *)auStack_1e8._8_8_;
  puStack_398 = puStack_1d8;
  uStack_390 = puStack_1d0;
  puStack_388 = puStack_1c8;
  uStack_380 = uStack_1c0;
  plStack_378 = plStack_1b8;
  func_0x0e8c46c0(auStack_548,&puStack_3a8,&UNK_0119d142,0xc);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4726f8;
  uVar3 = auStack_538._8_8_;
  auStack_538._8_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0db8dd10;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0d4858f0;
  puStack_570 = &UNK_0e8c5480;
  puStack_568 = &UNK_0e8c56b0;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e8c48b0(auStack_548);
  plStack_338 = (long *)CONCAT71(plStack_338._1_7_,(char)plStack_378);
  puStack_348 = puStack_388;
  uStack_340 = uStack_380;
  puStack_358 = puStack_398;
  puStack_350 = uStack_390;
  puStack_368 = puStack_3a8;
  puStack_360 = puStack_3a0;
  func_0x048b0bc0(auStack_538 + 8);
  func_0x0e8c46c0(auStack_548,&puStack_368,&UNK_011ed174,0xc);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4726f8;
  uVar3 = auStack_538._8_8_;
  auStack_538._8_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0db8dd10;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0d4858f0;
  puStack_570 = &UNK_0e8c5890;
  puStack_568 = &UNK_0e8c5ac0;
  uStack_560 = 0;
  auStack_558 = ZEXT816(0);
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e8c48b0(auStack_548);
  plStack_438 = (long *)CONCAT71(plStack_438._1_7_,plStack_338._0_1_);
  puStack_448 = puStack_348;
  uStack_440 = uStack_340;
  puStack_458 = puStack_358;
  puStack_450 = puStack_350;
  puStack_468 = puStack_368;
  puStack_460 = puStack_360;
  func_0x048b0bc0(auStack_538 + 8);
  func_0x0e8c46c0(auStack_548,&puStack_468,&UNK_01412f53,0xc);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4726f8;
  uVar3 = auStack_538._8_8_;
  auStack_538._8_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_5b0 = CONCAT44(uStack_5b0._4_4_,auStack_538._0_4_);
  plStack_5a8 = (long *)0x0;
  plStack_5a0 = (long *)((ulong)plStack_5a0 & 0xffffffff00000000);
  uStack_598 = (code *)0x1;
  uStack_590 = 0;
  puStack_588 = &UNK_0db8dd10;
  puStack_580 = &SUB_048b06d0;
  puStack_578 = &SUB_0d4858f0;
  puStack_570 = &UNK_0e8c5ca0;
  puStack_568 = &UNK_0e8c5ed0;
  uStack_560 = 0;
  auStack_558 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_548._8_8_,&uStack_5b0);
  uVar3 = auStack_558._8_8_;
  if ((long *)auStack_558._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_558._8_8_ + 8);
    lVar9 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_558._8_8_ + 0x10))(auStack_558._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e8c48b0(auStack_548);
  func_0x048b0bc0(auStack_538 + 8);
  return;
}



/* ---- referenced strings ----
 * 0x11b8f64  minecraft:frozen_ocean
 * 0x1222b04  minecraft:capped
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13df14a  minecraft:the_end
 * 0x142bedc  minecraft:overworld
 */

/* ---- assembly ---- */
/* 0e8af270 */  PUSH RBP
/* 0e8af271 */  PUSH R15
/* 0e8af273 */  PUSH R14
/* 0e8af275 */  PUSH R13
/* 0e8af277 */  PUSH R12
/* 0e8af279 */  PUSH RBX
/* 0e8af27a */  SUB RSP,0x588
/* 0e8af281 */  MOV qword ptr [RSP + 0x148],RDI
/* 0e8af289 */  ADD RDI,0x18
/* 0e8af28d */  MOV qword ptr [RSP + 0x348],RDI
/* 0e8af295 */  CALL 0x0db61aa0
/* 0e8af29a */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8af2a1 */  JNZ 0x0e8af2cd
/* 0e8af2a3 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e8af2a7 */  TEST RAX,RAX
/* 0e8af2aa */  JZ 0x0e8af2cd
/* 0e8af2ac */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e8af2b0 */  LEA RDX,[RAX + 0x9]
/* 0e8af2b4 */  MOV ECX,ESI
/* 0e8af2b6 */  SHR ECX,0x1
/* 0e8af2b8 */  TEST SIL,0x1
/* 0e8af2bc */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e8af2c1 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e8af2c6 */  LEA RDI,[RSP + 0x70]
/* 0e8af2cb */  JMP 0x0e8af2de
/* 0e8af2cd */  LEA RDX,[0x1339a9c]
/* 0e8af2d4 */  LEA RDI,[RSP + 0x70]
/* 0e8af2d9 */  MOV ECX,0x12
/* 0e8af2de */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8af2e6 */  XOR R8D,R8D
/* 0e8af2e9 */  CALL 0x0db61e90
/* 0e8af2ee */  MOV byte ptr [RSP + 0xa4],0x0
/* 0e8af2f6 */  MOV byte ptr [RSP + 0xa8],0x0
/* 0e8af2fe */  CMP byte ptr [RSP + 0xa0],0x0
/* 0e8af306 */  JNZ 0x0e8af52c
/* 0e8af30c */  MOV byte ptr [RSP + 0x190],0x26
/* 0e8af314 */  LEA RDX,[RSP + 0x191]
/* 0e8af31c */  MOVUPS XMM0,xmmword ptr [0x0142bedc]
/* 0e8af323 */  MOVUPS xmmword ptr [RSP + 0x191],XMM0
/* 0e8af32b */  MOV dword ptr [RSP + 0x1a0],0x646c726f
/* 0e8af336 */  MOV byte ptr [RSP + 0x1a4],0x0
/* 0e8af33e */  LEA R15,[RSP + 0x3d0]
/* 0e8af346 */  LEA RSI,[RSP + 0x70]
/* 0e8af34b */  MOV ECX,0x13
/* 0e8af350 */  MOV RDI,R15
/* 0e8af353 */  CALL 0x0db5fe60
/* 0e8af358 */  MOV byte ptr [RSP + 0x2d0],0x2c
/* 0e8af360 */  LEA RDX,[RSP + 0x2d1]
/* 0e8af368 */  MOVUPS XMM0,xmmword ptr [0x011b8f64]
/* 0e8af36f */  MOVUPS xmmword ptr [RSP + 0x2d1],XMM0
/* 0e8af377 */  MOV RAX,0x6e6165636f5f6e65
/* 0e8af381 */  MOV qword ptr [RSP + 0x2df],RAX
/* 0e8af389 */  MOV byte ptr [RSP + 0x2e7],0x0
/* 0e8af391 */  LEA R12,[RSP + 0x210]
/* 0e8af399 */  MOV ECX,0x16
/* 0e8af39e */  MOV RDI,R12
/* 0e8af3a1 */  MOV RSI,R15
/* 0e8af3a4 */  CALL 0x0db60240
/* 0e8af3a9 */  MOV byte ptr [RSP + 0x310],0x1c
/* 0e8af3b1 */  LEA RDX,[RSP + 0x311]
/* 0e8af3b9 */  MOV RBX,0x66617263656e696d
/* 0e8af3c3 */  MOV qword ptr [RSP + 0x311],RBX
/* 0e8af3cb */  MOV RAX,0x6173656d3a746661
/* 0e8af3d5 */  MOV qword ptr [RSP + 0x317],RAX
/* 0e8af3dd */  MOV byte ptr [RSP + 0x31f],0x0
/* 0e8af3e5 */  LEA R15,[RSP + 0x250]
/* 0e8af3ed */  MOV ECX,0xe
/* 0e8af3f2 */  MOV RDI,R15
/* 0e8af3f5 */  MOV RSI,R12
/* 0e8af3f8 */  CALL 0x0db60620
/* 0e8af3fd */  MOV byte ptr [RSP + 0x290],0x1e
/* 0e8af405 */  LEA RDX,[RSP + 0x291]
/* 0e8af40d */  MOV qword ptr [RSP + 0x291],RBX
/* 0e8af415 */  MOV RAX,0x706d6177733a7466
/* 0e8af41f */  MOV qword ptr [RSP + 0x298],RAX
/* 0e8af427 */  MOV byte ptr [RSP + 0x2a0],0x0
/* 0e8af42f */  LEA R12,[RSP + 0x150]
/* 0e8af437 */  MOV ECX,0xf
/* 0e8af43c */  MOV RDI,R12
/* 0e8af43f */  MOV RSI,R15
/* 0e8af442 */  CALL 0x0db60a00
/* 0e8af447 */  MOV byte ptr [RSP + 0x1d0],0x20
/* 0e8af44f */  LEA RDX,[RSP + 0x1d1]
/* 0e8af457 */  MOVUPS XMM0,xmmword ptr [0x01222b04]
/* 0e8af45e */  MOVUPS xmmword ptr [RSP + 0x1d1],XMM0
/* 0e8af466 */  MOV byte ptr [RSP + 0x1e1],0x0
/* 0e8af46e */  LEA R15,[RSP + 0x8]
/* 0e8af473 */  MOV ECX,0x10
/* 0e8af478 */  MOV RDI,R15
/* 0e8af47b */  MOV RSI,R12
/* 0e8af47e */  CALL 0x0db60de0
/* 0e8af483 */  MOV byte ptr [RSP + 0x410],0x22
/* 0e8af48b */  LEA RDX,[RSP + 0x411]
/* 0e8af493 */  MOVDQU XMM0,xmmword ptr [0x013df14a]
/* 0e8af49b */  MOVDQU xmmword ptr [RSP + 0x411],XMM0
/* 0e8af4a4 */  MOV word ptr [RSP + 0x421],0x64
/* 0e8af4ae */  LEA RDI,[RSP + 0x350]
/* 0e8af4b6 */  MOV ECX,0x11
/* 0e8af4bb */  MOV RSI,R15
/* 0e8af4be */  CALL 0x0db611c0
/* 0e8af4c3 */  TEST byte ptr [RSP + 0x410],0x1
/* 0e8af4cb */  JNZ 0x0e8af748
/* 0e8af4d1 */  TEST byte ptr [RSP + 0x1d0],0x1
/* 0e8af4d9 */  JNZ 0x0e8af76f
/* 0e8af4df */  TEST byte ptr [RSP + 0x290],0x1
/* 0e8af4e7 */  JNZ 0x0e8af796
/* 0e8af4ed */  TEST byte ptr [RSP + 0x310],0x1
/* 0e8af4f5 */  JNZ 0x0e8af7bd
/* 0e8af4fb */  TEST byte ptr [RSP + 0x2d0],0x1
/* 0e8af503 */  JNZ 0x0e8af7e4
/* 0e8af509 */  TEST byte ptr [RSP + 0x190],0x1
/* 0e8af511 */  JZ 0x0e8af52c
/* 0e8af513 */  MOV RSI,qword ptr [RSP + 0x190]
/* 0e8af51b */  MOV RDI,qword ptr [RSP + 0x1a0]
/* 0e8af523 */  AND RSI,-0x2
/* 0e8af527 */  CALL 0x0412a280
/* 0e8af52c */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8af534 */  CALL 0x0db805f0
/* 0e8af539 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8af540 */  JNZ 0x0e8af5a3
/* 0e8af542 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e8af546 */  TEST RAX,RAX
/* 0e8af549 */  JZ 0x0e8af5a3
/* 0e8af54b */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e8af54f */  LEA RDX,[RAX + 0x9]
/* 0e8af553 */  MOV ECX,ESI
/* 0e8af555 */  SHR ECX,0x1
/* 0e8af557 */  TEST SIL,0x1
/* 0e8af55b */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e8af560 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e8af565 */  LEA RDI,[RSP + 0x150]
/* 0e8af56d */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8af575 */  CALL 0x0e8b6fc0
/* 0e8af57a */  CMP byte ptr [RSP + 0x180],0x0
/* 0e8af582 */  JZ 0x0e8af5ce
/* 0e8af584 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8af58c */  CALL 0x0db80510
/* 0e8af591 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8af598 */  JZ 0x0e8aff3e
/* 0e8af59e */  JMP 0x0e8aff85
/* 0e8af5a3 */  LEA RDX,[0x13df14a]
/* 0e8af5aa */  LEA RDI,[RSP + 0x150]
/* 0e8af5b2 */  MOV ECX,0x11
/* 0e8af5b7 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8af5bf */  CALL 0x0e8b6fc0
/* 0e8af5c4 */  CMP byte ptr [RSP + 0x180],0x0
/* 0e8af5cc */  JNZ 0x0e8af584
/* 0e8af5ce */  MOV R15,qword ptr [RSP + 0x150]
/* 0e8af5d6 */  ADD R15,0x18
/* 0e8af5da */  MOV RDI,R15
/* 0e8af5dd */  CALL 0x0db805f0
/* 0e8af5e2 */  MOV RDX,qword ptr [RSP + 0x150]
/* 0e8af5ea */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e8af5ee */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e8af5f2 */  CMP RCX,RDX
/* 0e8af5f5 */  JZ 0x0e8af6b6
/* 0e8af5fb */  MOV RSI,0x3a6c61657265635b
/* 0e8af605 */  MOVQ XMM0,RSI
/* 0e8af60a */  MOV RSI,0x746e656d75636f64
/* 0e8af614 */  MOVQ XMM1,RSI
/* 0e8af619 */  PUNPCKLQDQ XMM0,XMM1
/* 0e8af61d */  MOV RSI,0x7461746e656d7563
/* 0e8af627 */  MOVQ XMM1,RSI
/* 0e8af62c */  MOV RSI,0x5d6761745f6e6f69
/* 0e8af636 */  MOVQ XMM2,RSI
/* 0e8af63b */  PUNPCKLQDQ XMM1,XMM2
/* 0e8af63f */  JMP 0x0e8af67e
/* 0e8af650 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e8af654 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e8af658 */  PCMPEQB XMM2,XMM0
/* 0e8af65c */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e8af661 */  PCMPEQB XMM3,XMM1
/* 0e8af665 */  PAND XMM3,XMM2
/* 0e8af669 */  PMOVMSKB ESI,XMM3
/* 0e8af66d */  CMP ESI,0xffff
/* 0e8af673 */  JZ 0x0e8af6b6
/* 0e8af675 */  ADD RCX,0x38
/* 0e8af679 */  CMP RCX,RDX
/* 0e8af67c */  JZ 0x0e8af6b6
/* 0e8af67e */  MOVZX ESI,byte ptr [RCX]
/* 0e8af681 */  TEST SIL,0x1
/* 0e8af685 */  JZ 0x0e8af6a0
/* 0e8af687 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e8af68b */  CMP RDI,0x1a
/* 0e8af68f */  JNZ 0x0e8af675
/* 0e8af691 */  JMP 0x0e8af6aa
/* 0e8af6a0 */  MOV EDI,ESI
/* 0e8af6a2 */  SHR EDI,0x1
/* 0e8af6a4 */  CMP RDI,0x1a
/* 0e8af6a8 */  JNZ 0x0e8af675
/* 0e8af6aa */  TEST SIL,0x1
/* 0e8af6ae */  JNZ 0x0e8af650
/* 0e8af6b0 */  LEA RSI,[RCX + 0x1]
/* 0e8af6b4 */  JMP 0x0e8af654
/* 0e8af6b6 */  CMP RCX,RDX
/* 0e8af6b9 */  JZ 0x0e8af6d9
/* 0e8af6bb */  MOV EBX,dword ptr [RCX + 0x1c]
/* 0e8af6be */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e8af6c5 */  TEST CL,CL
/* 0e8af6c7 */  JZ 0x0e8b635a
/* 0e8af6cd */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e8af6d3 */  JNZ 0x0e8af9eb
/* 0e8af6d9 */  CMP dword ptr [RSP + 0x178],0x0
/* 0e8af6e1 */  JZ 0x0e8af810
/* 0e8af6e7 */  MOV EDX,dword ptr [RSP + 0x17c]
/* 0e8af6ee */  MOV RDI,R15
/* 0e8af6f1 */  MOV RSI,RAX
/* 0e8af6f4 */  MOV ECX,0x1
/* 0e8af6f9 */  CALL 0x048b0c90
/* 0e8af6fe */  TEST RAX,RAX
/* 0e8af701 */  JNZ 0x0e8af725
/* 0e8af703 */  PXOR XMM0,XMM0
/* 0e8af707 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8af70d */  LEA RDI,[RSP + 0x70]
/* 0e8af712 */  CALL 0x048b0d20
/* 0e8af717 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8af71c */  TEST RAX,RAX
/* 0e8af71f */  JZ 0x0e8af828
/* 0e8af725 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e8af72c */  JNZ 0x0e8af828
/* 0e8af732 */  MOV R15,qword ptr [RAX + 0x58]
/* 0e8af736 */  TEST R15,R15
/* 0e8af739 */  JZ 0x0e8af828
/* 0e8af73f */  ADD R15,0x40
/* 0e8af743 */  JMP 0x0e8af82b
/* 0e8af748 */  MOV RSI,qword ptr [RSP + 0x410]
/* 0e8af750 */  MOV RDI,qword ptr [RSP + 0x420]
/* 0e8af758 */  AND RSI,-0x2
/* 0e8af75c */  CALL 0x0412a280
/* 0e8af761 */  TEST byte ptr [RSP + 0x1d0],0x1
/* 0e8af769 */  JZ 0x0e8af4df
/* 0e8af76f */  MOV RSI,qword ptr [RSP + 0x1d0]
/* 0e8af777 */  MOV RDI,qword ptr [RSP + 0x1e0]
/* 0e8af77f */  AND RSI,-0x2
/* 0e8af783 */  CALL 0x0412a280
/* 0e8af788 */  TEST byte ptr [RSP + 0x290],0x1
/* 0e8af790 */  JZ 0x0e8af4ed
/* 0e8af796 */  MOV RSI,qword ptr [RSP + 0x290]
/* 0e8af79e */  MOV RDI,qword ptr [RSP + 0x2a0]
/* 0e8af7a6 */  AND RSI,-0x2
/* 0e8af7aa */  CALL 0x0412a280
/* 0e8af7af */  TEST byte ptr [RSP + 0x310],0x1
/* 0e8af7b7 */  JZ 0x0e8af4fb
/* 0e8af7bd */  MOV RSI,qword ptr [RSP + 0x310]
/* 0e8af7c5 */  MOV RDI,qword ptr [RSP + 0x320]
/* 0e8af7cd */  AND RSI,-0x2
/* 0e8af7d1 */  CALL 0x0412a280
/* 0e8af7d6 */  TEST byte ptr [RSP + 0x2d0],0x1
/* 0e8af7de */  JZ 0x0e8af509
/* 0e8af7e4 */  MOV RSI,qword ptr [RSP + 0x2d0]
/* 0e8af7ec */  MOV RDI,qword ptr [RSP + 0x2e0]
/* 0e8af7f4 */  AND RSI,-0x2
/* 0e8af7f8 */  CALL 0x0412a280
/* 0e8af7fd */  TEST byte ptr [RSP + 0x190],0x1
/* 0e8af805 */  JNZ 0x0e8af513
/* 0e8af80b */  JMP 0x0e8af52c
/* 0e8af810 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8af817 */  JNZ 0x0e8af828
/* 0e8af819 */  MOV R15,qword ptr [RAX + 0x68]
/* 0e8af81d */  TEST R15,R15
/* 0e8af820 */  JZ 0x0e8af828
/* 0e8af822 */  ADD R15,0x38
/* 0e8af826 */  JMP 0x0e8af82b
/* 0e8af828 */  XOR R15D,R15D
/* 0e8af82b */  LEA RAX,[0x488e0b0]
/* 0e8af832 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e8af837 */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e8af83f */  MOV qword ptr [RSP + 0x20],0x0
/* 0e8af848 */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e8af84d */  MOV qword ptr [RSP + 0x8],0x0
/* 0e8af856 */  PXOR XMM0,XMM0
/* 0e8af85a */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8af860 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e8af868 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e8af874 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e8af87f */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e8af887 */  LEA RDI,[0xf5463b0]
/* 0e8af88e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8af895 */  MOV ESI,0x20
/* 0e8af89a */  CALL qword ptr [RAX + 0x10]
/* 0e8af89d */  MOV R12,RAX
/* 0e8af8a0 */  TEST RAX,RAX
/* 0e8af8a3 */  JZ 0x0e8b616a
/* 0e8af8a9 */  MOV qword ptr [RSP + 0x260],R12
/* 0e8af8b1 */  MOV qword ptr [RSP + 0x250],0x21
/* 0e8af8bd */  MOV qword ptr [RSP + 0x258],0x1a
/* 0e8af8c9 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e8af8d0 */  MOVUPS xmmword ptr [R12 + 0xa],XMM0
/* 0e8af8d6 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e8af8de */  MOVDQU xmmword ptr [R12],XMM0
/* 0e8af8e4 */  MOV byte ptr [R12 + 0x1a],0x0
/* 0e8af8ea */  LEA RSI,[RSP + 0x250]
/* 0e8af8f2 */  MOV RDI,R15
/* 0e8af8f5 */  CALL 0x048b5060
/* 0e8af8fa */  MOV R12,RAX
/* 0e8af8fd */  LEA R15,[RSP + 0x78]
/* 0e8af902 */  ADD RAX,0x20
/* 0e8af906 */  MOV qword ptr [R12 + 0x20],0x0
/* 0e8af90f */  LEA RCX,[RSP + 0x70]
/* 0e8af914 */  CMP RAX,RCX
/* 0e8af917 */  JZ 0x0e8af954
/* 0e8af919 */  MOV RAX,qword ptr [R12 + 0x40]
/* 0e8af91e */  TEST RAX,RAX
/* 0e8af921 */  JZ 0x0e8af974
/* 0e8af923 */  MOV R13,R12
/* 0e8af926 */  ADD R13,0x28
/* 0e8af92a */  MOV RDI,R13
/* 0e8af92d */  CALL RAX
/* 0e8af92f */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e8af937 */  TEST EAX,EAX
/* 0e8af939 */  JZ 0x0e8af974
/* 0e8af93b */  CMP EAX,0x2
/* 0e8af93e */  JNZ 0x0e8af962
/* 0e8af940 */  MOV EDI,0x5
/* 0e8af945 */  MOV RSI,R15
/* 0e8af948 */  MOV RDX,R13
/* 0e8af94b */  CALL qword ptr [RSP + 0x88]
/* 0e8af952 */  JMP 0x0e8af974
/* 0e8af954 */  XOR EAX,EAX
/* 0e8af956 */  TEST byte ptr [RSP + 0x250],0x1
/* 0e8af95e */  JNZ 0x0e8af9af
/* 0e8af960 */  JMP 0x0e8af9d0
/* 0e8af962 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e8af967 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e8af970 */  MOV qword ptr [R13],RAX
/* 0e8af974 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8af97c */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e8af985 */  MOVDQU xmmword ptr [R12 + 0x38],XMM0
/* 0e8af98c */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e8af993 */  MOV dword ptr [R12 + 0x48],ECX
/* 0e8af998 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e8af9a0 */  MOV byte ptr [R12 + 0x4c],CL
/* 0e8af9a5 */  TEST byte ptr [RSP + 0x250],0x1
/* 0e8af9ad */  JZ 0x0e8af9d0
/* 0e8af9af */  MOV RSI,qword ptr [RSP + 0x250]
/* 0e8af9b7 */  MOV RDI,qword ptr [RSP + 0x260]
/* 0e8af9bf */  AND RSI,-0x2
/* 0e8af9c3 */  CALL 0x0412a280
/* 0e8af9c8 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8af9d0 */  TEST RAX,RAX
/* 0e8af9d3 */  JZ 0x0e8af9da
/* 0e8af9d5 */  MOV RDI,R15
/* 0e8af9d8 */  CALL RAX
/* 0e8af9da */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e8af9df */  TEST RAX,RAX
/* 0e8af9e2 */  JZ 0x0e8af9eb
/* 0e8af9e4 */  LEA RDI,[RSP + 0x8]
/* 0e8af9e9 */  CALL RAX
/* 0e8af9eb */  MOVDQU XMM0,xmmword ptr [RSP + 0x150]
/* 0e8af9f4 */  MOVDQU XMM1,xmmword ptr [RSP + 0x160]
/* 0e8af9fd */  MOVDQU XMM2,xmmword ptr [RSP + 0x170]
/* 0e8afa06 */  MOVDQA xmmword ptr [RSP + 0x270],XMM2
/* 0e8afa0f */  MOV RAX,qword ptr [RSP + 0x180]
/* 0e8afa17 */  MOV qword ptr [RSP + 0x280],RAX
/* 0e8afa1f */  MOVDQA xmmword ptr [RSP + 0x260],XMM1
/* 0e8afa28 */  MOVDQA xmmword ptr [RSP + 0x250],XMM0
/* 0e8afa31 */  MOV RAX,0x5127f14d00000002
/* 0e8afa3b */  MOV qword ptr [RSP + 0x278],RAX
/* 0e8afa43 */  LEA R15,[RSP + 0xb0]
/* 0e8afa4b */  PXOR XMM0,XMM0
/* 0e8afa4f */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e8afa58 */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e8afa61 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e8afa6a */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e8afa73 */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e8afa7c */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e8afa85 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8afa8b */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e8afa96 */  MOV ESI,0x8
/* 0e8afa9b */  MOV RDI,R15
/* 0e8afa9e */  CALL 0x048afb10
/* 0e8afaa3 */  PXOR XMM0,XMM0
/* 0e8afaa7 */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e8afab0 */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e8afab9 */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e8afac2 */  MOV word ptr [RSP + 0x118],0xff00
/* 0e8afacc */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e8afad4 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e8afadc */  MOV byte ptr [RSP + 0x124],0x0
/* 0e8afae4 */  LEA RDI,[0xf5463b0]
/* 0e8afaeb */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8afaf2 */  MOV ESI,0x8
/* 0e8afaf7 */  CALL qword ptr [RAX + 0x10]
/* 0e8afafa */  MOV R12,RAX
/* 0e8afafd */  TEST RAX,RAX
/* 0e8afb00 */  JZ 0x0e8b5eb1
/* 0e8afb06 */  LEA RAX,[0xf497e98]
/* 0e8afb0d */  MOV qword ptr [R12],RAX
/* 0e8afb11 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e8afb16 */  MOV qword ptr [RSP + 0x70],R12
/* 0e8afb1b */  TEST RDI,RDI
/* 0e8afb1e */  JZ 0x0e8afb26
/* 0e8afb20 */  MOV RAX,qword ptr [RDI]
/* 0e8afb23 */  CALL qword ptr [RAX + 0x8]
/* 0e8afb26 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e8afb2e */  JZ 0x0e8afb49
/* 0e8afb30 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e8afb38 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e8afb40 */  AND RSI,-0x2
/* 0e8afb44 */  CALL 0x0412a280
/* 0e8afb49 */  MOV byte ptr [RSP + 0x98],0x8
/* 0e8afb51 */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e8afb5c */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e8afb64 */  MOVZX EAX,byte ptr [0x0f737218]
/* 0e8afb6b */  TEST AL,AL
/* 0e8afb6d */  JZ 0x0e8b6203
/* 0e8afb73 */  LEA R12,[RSP + 0x258]
/* 0e8afb7b */  MOV EAX,dword ptr [RSP + 0x27c]
/* 0e8afb82 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8afb86 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8afb8f */  MOV dword ptr [RSP + 0x18],0x3
/* 0e8afb97 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8afba0 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8afba9 */  LEA RAX,[0xdb65ce0]
/* 0e8afbb0 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8afbb5 */  LEA RAX,[0x48b06d0]
/* 0e8afbbc */  MOV qword ptr [RSP + 0x38],RAX
/* 0e8afbc1 */  LEA RAX,[0xdb61aa0]
/* 0e8afbc8 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8afbcd */  LEA RAX,[0xe8b7820]
/* 0e8afbd4 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8afbd9 */  LEA RAX,[0xe8b7830]
/* 0e8afbe0 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8afbe5 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8afbed */  PXOR XMM0,XMM0
/* 0e8afbf1 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8afbf7 */  LEA RSI,[RSP + 0x8]
/* 0e8afbfc */  MOV RDI,R12
/* 0e8afbff */  CALL 0x048b05a0
/* 0e8afc04 */  MOV R13,qword ptr [RSP + 0x68]
/* 0e8afc09 */  TEST R13,R13
/* 0e8afc0c */  JZ 0x0e8afc32
/* 0e8afc0e */  MOV RAX,-0x1
/* 0e8afc15 */  XADD.LOCK qword ptr [R13 + 0x8],RAX
/* 0e8afc1b */  TEST RAX,RAX
/* 0e8afc1e */  JNZ 0x0e8afc32
/* 0e8afc20 */  MOV RAX,qword ptr [R13]
/* 0e8afc24 */  MOV RDI,R13
/* 0e8afc27 */  CALL qword ptr [RAX + 0x10]
/* 0e8afc2a */  MOV RDI,R13
/* 0e8afc2d */  CALL 0x0412c2d0
/* 0e8afc32 */  MOVDQU XMM0,xmmword ptr [R12]
/* 0e8afc38 */  MOVDQU XMM1,xmmword ptr [R12 + 0x10]
/* 0e8afc3f */  MOVDQA xmmword ptr [RSP + 0x220],XMM1
/* 0e8afc48 */  MOVDQA xmmword ptr [RSP + 0x210],XMM0
/* 0e8afc51 */  MOVZX EAX,byte ptr [0x0f550a20]
/* 0e8afc58 */  TEST AL,AL
/* 0e8afc5a */  JZ 0x0e8b6234
/* 0e8afc60 */  MOV EAX,dword ptr [0x0f550a0c]
/* 0e8afc66 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8afc6a */  LEA RDI,[0xf5463b0]
/* 0e8afc71 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8afc78 */  MOV ESI,0xd0
/* 0e8afc7d */  CALL qword ptr [RAX + 0x10]
/* 0e8afc80 */  MOV R12,RAX
/* 0e8afc83 */  TEST RAX,RAX
/* 0e8afc86 */  JZ 0x0e8b5ec2
/* 0e8afc8c */  LEA RCX,[RSP + 0x98]
/* 0e8afc94 */  PXOR XMM0,XMM0
/* 0e8afc98 */  MOVDQU xmmword ptr [R12 + 0x8],XMM0
/* 0e8afc9f */  LEA RAX,[0xef439d0]
/* 0e8afca6 */  MOV qword ptr [R12],RAX
/* 0e8afcaa */  MOV RAX,R12
/* 0e8afcad */  ADD RAX,0x18
/* 0e8afcb1 */  MOVAPS XMM1,xmmword ptr [RSP + 0x70]
/* 0e8afcb6 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8afcbc */  MOVUPS xmmword ptr [R12 + 0x18],XMM1
/* 0e8afcc2 */  MOV RDX,qword ptr [RSP + 0x90]
/* 0e8afcca */  MOV qword ptr [R12 + 0x38],RDX
/* 0e8afccf */  MOVAPS XMM1,xmmword ptr [RSP + 0x80]
/* 0e8afcd7 */  MOVUPS xmmword ptr [R12 + 0x28],XMM1
/* 0e8afcdd */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e8afce6 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e8afcf2 */  MOV RDX,qword ptr [RCX + 0x10]
/* 0e8afcf6 */  MOV qword ptr [R12 + 0x50],RDX
/* 0e8afcfb */  MOVUPS XMM1,xmmword ptr [RCX]
/* 0e8afcfe */  MOVUPS xmmword ptr [R12 + 0x40],XMM1
/* 0e8afd04 */  MOVDQU xmmword ptr [RCX],XMM0
/* 0e8afd08 */  MOV qword ptr [RCX + 0x10],0x0
/* 0e8afd10 */  MOVAPS XMM1,xmmword ptr [RSP + 0xb0]
/* 0e8afd18 */  MOVUPS xmmword ptr [R12 + 0x58],XMM1
/* 0e8afd1e */  MOV RDX,qword ptr [RSP + 0xc0]
/* 0e8afd26 */  MOV qword ptr [R12 + 0x68],RDX
/* 0e8afd2b */  MOVDQA xmmword ptr [R15],XMM0
/* 0e8afd30 */  MOV qword ptr [R15 + 0x10],0x0
/* 0e8afd38 */  MOVUPS XMM1,xmmword ptr [RSP + 0xc8]
/* 0e8afd40 */  MOVUPS xmmword ptr [R12 + 0x70],XMM1
/* 0e8afd46 */  MOV RDX,qword ptr [RSP + 0xd8]
/* 0e8afd4e */  MOV qword ptr [R12 + 0x80],RDX
/* 0e8afd56 */  MOVDQU xmmword ptr [RSP + 0xc8],XMM0
/* 0e8afd5f */  MOV qword ptr [RSP + 0xd8],0x0
/* 0e8afd6b */  MOVSS XMM1,dword ptr [RSP + 0xe0]
/* 0e8afd74 */  MOVSS dword ptr [R12 + 0x88],XMM1
/* 0e8afd7e */  MOVUPS XMM1,xmmword ptr [RSP + 0xe8]
/* 0e8afd86 */  MOVUPS xmmword ptr [R12 + 0x90],XMM1
/* 0e8afd8f */  MOV RDX,qword ptr [RSP + 0xf8]
/* 0e8afd97 */  MOV qword ptr [R12 + 0xa0],RDX
/* 0e8afd9f */  MOVDQU xmmword ptr [RCX + 0x50],XMM0
/* 0e8afda4 */  MOV qword ptr [RCX + 0x60],0x0
/* 0e8afdac */  MOV RCX,qword ptr [RSP + 0x110]
/* 0e8afdb4 */  MOV qword ptr [R12 + 0xb8],RCX
/* 0e8afdbc */  MOVDQA XMM1,xmmword ptr [RSP + 0x100]
/* 0e8afdc5 */  MOVDQU xmmword ptr [R12 + 0xa8],XMM1
/* 0e8afdcf */  MOVDQA xmmword ptr [RSP + 0x100],XMM0
/* 0e8afdd8 */  MOV qword ptr [RSP + 0x110],0x0
/* 0e8afde4 */  MOV RCX,qword ptr [RSP + 0x118]
/* 0e8afdec */  MOV RDX,qword ptr [RSP + 0x11d]
/* 0e8afdf4 */  MOV qword ptr [R12 + 0xc5],RDX
/* 0e8afdfc */  MOV qword ptr [R12 + 0xc0],RCX
/* 0e8afe04 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e8afe09 */  MOV qword ptr [RSP + 0x18],R12
/* 0e8afe0e */  MOVDQA xmmword ptr [RSP + 0x3d0],XMM0
/* 0e8afe17 */  LEA RDI,[RSP + 0x210]
/* 0e8afe1f */  LEA RSI,[RSP + 0x8]
/* 0e8afe24 */  CALL 0x048afd20
/* 0e8afe29 */  MOV R15,qword ptr [RSP + 0x18]
/* 0e8afe2e */  TEST R15,R15
/* 0e8afe31 */  JZ 0x0e8afe56
/* 0e8afe33 */  MOV RAX,-0x1
/* 0e8afe3a */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8afe40 */  TEST RAX,RAX
/* 0e8afe43 */  JNZ 0x0e8afe56
/* 0e8afe45 */  MOV RAX,qword ptr [R15]
/* 0e8afe48 */  MOV RDI,R15
/* 0e8afe4b */  CALL qword ptr [RAX + 0x10]
/* 0e8afe4e */  MOV RDI,R15
/* 0e8afe51 */  CALL 0x0412c2d0
/* 0e8afe56 */  MOV R15,qword ptr [RSP + 0x3d8]
/* 0e8afe5e */  TEST R15,R15
/* 0e8afe61 */  JZ 0x0e8afe86
/* 0e8afe63 */  MOV RAX,-0x1
/* 0e8afe6a */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8afe70 */  TEST RAX,RAX
/* 0e8afe73 */  JNZ 0x0e8afe86
/* 0e8afe75 */  MOV RAX,qword ptr [R15]
/* 0e8afe78 */  MOV RDI,R15
/* 0e8afe7b */  CALL qword ptr [RAX + 0x10]
/* 0e8afe7e */  MOV RDI,R15
/* 0e8afe81 */  CALL 0x0412c2d0
/* 0e8afe86 */  MOV RCX,qword ptr [RSP + 0x220]
/* 0e8afe8e */  MOV EAX,dword ptr [RSP + 0x228]
/* 0e8afe95 */  MOV EDX,dword ptr [RSP + 0x22c]
/* 0e8afe9c */  CMP EDX,0x2
/* 0e8afe9f */  JZ 0x0e8afed1
/* 0e8afea1 */  CMP EDX,0x1
/* 0e8afea4 */  JZ 0x0e8afeb0
/* 0e8afea6 */  TEST EDX,EDX
/* 0e8afea8 */  JNZ 0x0e8aff1e
/* 0e8afeaa */  OR byte ptr [RCX + 0x1a],0x9
/* 0e8afeae */  JMP 0x0e8aff1e
/* 0e8afeb0 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0e8afeb4 */  MOV RCX,qword ptr [RCX + 0x48]
/* 0e8afeb8 */  CMP dword ptr [RCX],EAX
/* 0e8afeba */  JZ 0x0e8aff1a
/* 0e8afebc */  ADD RCX,0x68
/* 0e8afec0 */  MOV RDX,RCX
/* 0e8afec3 */  ADD RCX,0x68
/* 0e8afec7 */  CMP dword ptr [RDX],EAX
/* 0e8afec9 */  JNZ 0x0e8afec0
/* 0e8afecb */  ADD RCX,-0x68
/* 0e8afecf */  JMP 0x0e8aff1a
/* 0e8afed1 */  MOV RDX,qword ptr [RSP + 0x218]
/* 0e8afed9 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0e8afedd */  MOV RCX,qword ptr [RCX + 0x60]
/* 0e8afee1 */  CMP dword ptr [RCX],EAX
/* 0e8afee3 */  JZ 0x0e8aff14
/* 0e8afee5 */  ADD RCX,0x58
/* 0e8afee9 */  NOP dword ptr [RAX]
/* 0e8afef0 */  MOV RSI,RCX
/* 0e8afef3 */  ADD RCX,0x58
/* 0e8afef7 */  CMP dword ptr [RSI],EAX
/* 0e8afef9 */  JNZ 0x0e8afef0
/* 0e8afefb */  ADD RCX,-0x58
/* 0e8afeff */  JMP 0x0e8aff14
/* 0e8aff10 */  MOV RCX,qword ptr [RCX + 0x38]
/* 0e8aff14 */  CMP qword ptr [RCX + 0x30],RDX
/* 0e8aff18 */  JNZ 0x0e8aff10
/* 0e8aff1a */  OR byte ptr [RCX + 0x12],0x9
/* 0e8aff1e */  LEA RDI,[RSP + 0x70]
/* 0e8aff23 */  CALL 0x048b0bc0
/* 0e8aff28 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8aff30 */  CALL 0x0db80510
/* 0e8aff35 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8aff3c */  JNZ 0x0e8aff85
/* 0e8aff3e */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e8aff42 */  TEST RAX,RAX
/* 0e8aff45 */  JZ 0x0e8aff85
/* 0e8aff47 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e8aff4b */  LEA RDX,[RAX + 0x9]
/* 0e8aff4f */  MOV ECX,ESI
/* 0e8aff51 */  SHR ECX,0x1
/* 0e8aff53 */  TEST SIL,0x1
/* 0e8aff57 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e8aff5c */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e8aff61 */  LEA RDI,[RSP + 0x210]
/* 0e8aff69 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8aff71 */  CALL 0x0e8b7ad0
/* 0e8aff76 */  CMP byte ptr [RSP + 0x240],0x0
/* 0e8aff7e */  JZ 0x0e8affb4
/* 0e8aff80 */  JMP 0x0e8b0f6a
/* 0e8aff85 */  LEA RDX,[0x1222b04]
/* 0e8aff8c */  LEA RDI,[RSP + 0x210]
/* 0e8aff94 */  MOV ECX,0x10
/* 0e8aff99 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8affa1 */  CALL 0x0e8b7ad0
/* 0e8affa6 */  CMP byte ptr [RSP + 0x240],0x0
/* 0e8affae */  JNZ 0x0e8b0f6a
/* 0e8affb4 */  MOV R15,qword ptr [RSP + 0x210]
/* 0e8affbc */  ADD R15,0x18
/* 0e8affc0 */  MOV RDI,R15
/* 0e8affc3 */  CALL 0x0db80510
/* 0e8affc8 */  MOV RDX,qword ptr [RSP + 0x210]
/* 0e8affd0 */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e8affd4 */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e8affd8 */  CMP RCX,RDX
/* 0e8affdb */  JZ 0x0e8b0096
/* 0e8affe1 */  MOV RSI,0x3a6c61657265635b
/* 0e8affeb */  MOVQ XMM0,RSI
/* 0e8afff0 */  MOV RSI,0x746e656d75636f64
/* 0e8afffa */  MOVQ XMM1,RSI
/* 0e8affff */  PUNPCKLQDQ XMM0,XMM1
/* 0e8b0003 */  MOV RSI,0x7461746e656d7563
/* 0e8b000d */  MOVQ XMM1,RSI
/* 0e8b0012 */  MOV RSI,0x5d6761745f6e6f69
/* 0e8b001c */  MOVQ XMM2,RSI
/* 0e8b0021 */  PUNPCKLQDQ XMM1,XMM2
/* 0e8b0025 */  JMP 0x0e8b005e
/* 0e8b0030 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e8b0034 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e8b0038 */  PCMPEQB XMM2,XMM0
/* 0e8b003c */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e8b0041 */  PCMPEQB XMM3,XMM1
/* 0e8b0045 */  PAND XMM3,XMM2
/* 0e8b0049 */  PMOVMSKB ESI,XMM3
/* 0e8b004d */  CMP ESI,0xffff
/* 0e8b0053 */  JZ 0x0e8b0096
/* 0e8b0055 */  ADD RCX,0x38
/* 0e8b0059 */  CMP RCX,RDX
/* 0e8b005c */  JZ 0x0e8b0096
/* 0e8b005e */  MOVZX ESI,byte ptr [RCX]
/* 0e8b0061 */  TEST SIL,0x1
/* 0e8b0065 */  JZ 0x0e8b0080
/* 0e8b0067 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e8b006b */  CMP RDI,0x1a
/* 0e8b006f */  JNZ 0x0e8b0055
/* 0e8b0071 */  JMP 0x0e8b008a
/* 0e8b0080 */  MOV EDI,ESI
/* 0e8b0082 */  SHR EDI,0x1
/* 0e8b0084 */  CMP RDI,0x1a
/* 0e8b0088 */  JNZ 0x0e8b0055
/* 0e8b008a */  TEST SIL,0x1
/* 0e8b008e */  JNZ 0x0e8b0030
/* 0e8b0090 */  LEA RSI,[RCX + 0x1]
/* 0e8b0094 */  JMP 0x0e8b0034
/* 0e8b0096 */  CMP RCX,RDX
/* 0e8b0099 */  JZ 0x0e8b00b9
/* 0e8b009b */  MOV EBX,dword ptr [RCX + 0x1c]
/* 0e8b009e */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e8b00a5 */  TEST CL,CL
/* 0e8b00a7 */  JZ 0x0e8b6396
/* 0e8b00ad */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e8b00b3 */  JNZ 0x0e8b02f0
/* 0e8b00b9 */  CMP dword ptr [RSP + 0x238],0x0
/* 0e8b00c1 */  JZ 0x0e8b0115
/* 0e8b00c3 */  MOV EDX,dword ptr [RSP + 0x23c]
/* 0e8b00ca */  MOV RDI,R15
/* 0e8b00cd */  MOV RSI,RAX
/* 0e8b00d0 */  MOV ECX,0x1
/* 0e8b00d5 */  CALL 0x048b0c90
/* 0e8b00da */  TEST RAX,RAX
/* 0e8b00dd */  JNZ 0x0e8b00fd
/* 0e8b00df */  PXOR XMM0,XMM0
/* 0e8b00e3 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b00e9 */  LEA RDI,[RSP + 0x70]
/* 0e8b00ee */  CALL 0x048b0d20
/* 0e8b00f3 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b00f8 */  TEST RAX,RAX
/* 0e8b00fb */  JZ 0x0e8b012d
/* 0e8b00fd */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e8b0104 */  JNZ 0x0e8b012d
/* 0e8b0106 */  MOV R15,qword ptr [RAX + 0x58]
/* 0e8b010a */  TEST R15,R15
/* 0e8b010d */  JZ 0x0e8b012d
/* 0e8b010f */  ADD R15,0x40
/* 0e8b0113 */  JMP 0x0e8b0130
/* 0e8b0115 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b011c */  JNZ 0x0e8b012d
/* 0e8b011e */  MOV R15,qword ptr [RAX + 0x68]
/* 0e8b0122 */  TEST R15,R15
/* 0e8b0125 */  JZ 0x0e8b012d
/* 0e8b0127 */  ADD R15,0x38
/* 0e8b012b */  JMP 0x0e8b0130
/* 0e8b012d */  XOR R15D,R15D
/* 0e8b0130 */  LEA RAX,[0x488e0b0]
/* 0e8b0137 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e8b013c */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e8b0144 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e8b014d */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e8b0152 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e8b015b */  PXOR XMM0,XMM0
/* 0e8b015f */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b0165 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e8b016d */  MOV qword ptr [RSP + 0x90],0x0
/* 0e8b0179 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e8b0184 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e8b018c */  LEA RDI,[0xf5463b0]
/* 0e8b0193 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b019a */  MOV ESI,0x20
/* 0e8b019f */  CALL qword ptr [RAX + 0x10]
/* 0e8b01a2 */  MOV R12,RAX
/* 0e8b01a5 */  TEST RAX,RAX
/* 0e8b01a8 */  JZ 0x0e8b617b
/* 0e8b01ae */  MOV qword ptr [RSP + 0x160],R12
/* 0e8b01b6 */  MOV qword ptr [RSP + 0x150],0x21
/* 0e8b01c2 */  MOV qword ptr [RSP + 0x158],0x1a
/* 0e8b01ce */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e8b01d5 */  MOVUPS xmmword ptr [R12 + 0xa],XMM0
/* 0e8b01db */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e8b01e3 */  MOVDQU xmmword ptr [R12],XMM0
/* 0e8b01e9 */  MOV byte ptr [R12 + 0x1a],0x0
/* 0e8b01ef */  LEA RSI,[RSP + 0x150]
/* 0e8b01f7 */  MOV RDI,R15
/* 0e8b01fa */  CALL 0x048b5060
/* 0e8b01ff */  MOV R12,RAX
/* 0e8b0202 */  LEA R15,[RSP + 0x78]
/* 0e8b0207 */  ADD RAX,0x20
/* 0e8b020b */  MOV qword ptr [R12 + 0x20],0x0
/* 0e8b0214 */  LEA RCX,[RSP + 0x70]
/* 0e8b0219 */  CMP RAX,RCX
/* 0e8b021c */  JZ 0x0e8b0259
/* 0e8b021e */  MOV RAX,qword ptr [R12 + 0x40]
/* 0e8b0223 */  TEST RAX,RAX
/* 0e8b0226 */  JZ 0x0e8b0279
/* 0e8b0228 */  MOV R13,R12
/* 0e8b022b */  ADD R13,0x28
/* 0e8b022f */  MOV RDI,R13
/* 0e8b0232 */  CALL RAX
/* 0e8b0234 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e8b023c */  TEST EAX,EAX
/* 0e8b023e */  JZ 0x0e8b0279
/* 0e8b0240 */  CMP EAX,0x2
/* 0e8b0243 */  JNZ 0x0e8b0267
/* 0e8b0245 */  MOV EDI,0x5
/* 0e8b024a */  MOV RSI,R15
/* 0e8b024d */  MOV RDX,R13
/* 0e8b0250 */  CALL qword ptr [RSP + 0x88]
/* 0e8b0257 */  JMP 0x0e8b0279
/* 0e8b0259 */  XOR EAX,EAX
/* 0e8b025b */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b0263 */  JNZ 0x0e8b02b4
/* 0e8b0265 */  JMP 0x0e8b02d5
/* 0e8b0267 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e8b026c */  MOV qword ptr [RSP + 0x78],0x0
/* 0e8b0275 */  MOV qword ptr [R13],RAX
/* 0e8b0279 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b0281 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e8b028a */  MOVDQU xmmword ptr [R12 + 0x38],XMM0
/* 0e8b0291 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e8b0298 */  MOV dword ptr [R12 + 0x48],ECX
/* 0e8b029d */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e8b02a5 */  MOV byte ptr [R12 + 0x4c],CL
/* 0e8b02aa */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b02b2 */  JZ 0x0e8b02d5
/* 0e8b02b4 */  MOV RSI,qword ptr [RSP + 0x150]
/* 0e8b02bc */  MOV RDI,qword ptr [RSP + 0x160]
/* 0e8b02c4 */  AND RSI,-0x2
/* 0e8b02c8 */  CALL 0x0412a280
/* 0e8b02cd */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b02d5 */  TEST RAX,RAX
/* 0e8b02d8 */  JZ 0x0e8b02df
/* 0e8b02da */  MOV RDI,R15
/* 0e8b02dd */  CALL RAX
/* 0e8b02df */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e8b02e4 */  TEST RAX,RAX
/* 0e8b02e7 */  JZ 0x0e8b02f0
/* 0e8b02e9 */  LEA RDI,[RSP + 0x8]
/* 0e8b02ee */  CALL RAX
/* 0e8b02f0 */  MOV RAX,qword ptr [RSP + 0x240]
/* 0e8b02f8 */  MOV qword ptr [RSP + 0x580],RAX
/* 0e8b0300 */  MOVDQU XMM0,xmmword ptr [RSP + 0x210]
/* 0e8b0309 */  MOVDQU XMM1,xmmword ptr [RSP + 0x220]
/* 0e8b0312 */  MOVDQU XMM2,xmmword ptr [RSP + 0x230]
/* 0e8b031b */  MOVDQA xmmword ptr [RSP + 0x570],XMM2
/* 0e8b0324 */  MOVDQA xmmword ptr [RSP + 0x560],XMM1
/* 0e8b032d */  MOVDQA xmmword ptr [RSP + 0x550],XMM0
/* 0e8b0336 */  MOVDQA xmmword ptr [RSP + 0x530],XMM2
/* 0e8b033f */  MOVDQA xmmword ptr [RSP + 0x510],XMM0
/* 0e8b0348 */  MOVDQA xmmword ptr [RSP + 0x520],XMM1
/* 0e8b0351 */  MOV qword ptr [RSP + 0x540],RAX
/* 0e8b0359 */  MOV RAX,0x5127f14d00000002
/* 0e8b0363 */  MOV qword ptr [RSP + 0x538],RAX
/* 0e8b036b */  LEA RDI,[RSP + 0xb0]
/* 0e8b0373 */  PXOR XMM0,XMM0
/* 0e8b0377 */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e8b0380 */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e8b0389 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e8b0392 */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e8b039b */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e8b03a4 */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e8b03ad */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b03b3 */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e8b03be */  MOV ESI,0x8
/* 0e8b03c3 */  CALL 0x048afb10
/* 0e8b03c8 */  PXOR XMM0,XMM0
/* 0e8b03cc */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e8b03d5 */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e8b03de */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e8b03e7 */  MOV word ptr [RSP + 0x118],0xff00
/* 0e8b03f1 */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e8b03f9 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e8b0401 */  MOV byte ptr [RSP + 0x124],0x0
/* 0e8b0409 */  LEA RDI,[0xf5463b0]
/* 0e8b0410 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b0417 */  MOV ESI,0x8
/* 0e8b041c */  CALL qword ptr [RAX + 0x10]
/* 0e8b041f */  MOV R15,RAX
/* 0e8b0422 */  TEST RAX,RAX
/* 0e8b0425 */  JZ 0x0e8b5ed3
/* 0e8b042b */  LEA RAX,[0xf497e98]
/* 0e8b0432 */  MOV qword ptr [R15],RAX
/* 0e8b0435 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e8b043a */  MOV qword ptr [RSP + 0x70],R15
/* 0e8b043f */  TEST RDI,RDI
/* 0e8b0442 */  JZ 0x0e8b044a
/* 0e8b0444 */  MOV RAX,qword ptr [RDI]
/* 0e8b0447 */  CALL qword ptr [RAX + 0x8]
/* 0e8b044a */  TEST byte ptr [RSP + 0x98],0x1
/* 0e8b0452 */  JZ 0x0e8b046d
/* 0e8b0454 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e8b045c */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e8b0464 */  AND RSI,-0x2
/* 0e8b0468 */  CALL 0x0412a280
/* 0e8b046d */  MOV byte ptr [RSP + 0x98],0x8
/* 0e8b0475 */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e8b0480 */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e8b0488 */  MOVZX EAX,byte ptr [0x0f7372d0]
/* 0e8b048f */  TEST AL,AL
/* 0e8b0491 */  JZ 0x0e8b6265
/* 0e8b0497 */  LEA R15,[RSP + 0x518]
/* 0e8b049f */  MOV EAX,dword ptr [RSP + 0x53c]
/* 0e8b04a6 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b04aa */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b04b3 */  MOV dword ptr [RSP + 0x18],0x3
/* 0e8b04bb */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b04c4 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b04cd */  LEA RAX,[0xdb65ce0]
/* 0e8b04d4 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b04d9 */  LEA R13,[0x48b06d0]
/* 0e8b04e0 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b04e5 */  LEA RAX,[0xdb61aa0]
/* 0e8b04ec */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b04f1 */  LEA RAX,[0xe8b8660]
/* 0e8b04f8 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b04fd */  LEA RAX,[0xe8b8670]
/* 0e8b0504 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b0509 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b0511 */  PXOR XMM0,XMM0
/* 0e8b0515 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8b051b */  LEA RSI,[RSP + 0x8]
/* 0e8b0520 */  MOV RDI,R15
/* 0e8b0523 */  CALL 0x048b05a0
/* 0e8b0528 */  MOV R12,qword ptr [RSP + 0x68]
/* 0e8b052d */  TEST R12,R12
/* 0e8b0530 */  JZ 0x0e8b0557
/* 0e8b0532 */  MOV RAX,-0x1
/* 0e8b0539 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e8b0540 */  TEST RAX,RAX
/* 0e8b0543 */  JNZ 0x0e8b0557
/* 0e8b0545 */  MOV RAX,qword ptr [R12]
/* 0e8b0549 */  MOV RDI,R12
/* 0e8b054c */  CALL qword ptr [RAX + 0x10]
/* 0e8b054f */  MOV RDI,R12
/* 0e8b0552 */  CALL 0x0412c2d0
/* 0e8b0557 */  MOVDQU XMM0,xmmword ptr [R15]
/* 0e8b055c */  MOVDQU XMM1,xmmword ptr [R15 + 0x10]
/* 0e8b0562 */  MOVDQA xmmword ptr [RSP + 0x160],XMM1
/* 0e8b056b */  MOVDQA xmmword ptr [RSP + 0x150],XMM0
/* 0e8b0574 */  LEA RDI,[RSP + 0x8]
/* 0e8b0579 */  LEA RSI,[RSP + 0x150]
/* 0e8b0581 */  LEA RDX,[RSP + 0x70]
/* 0e8b0586 */  CALL 0x0e8b83f0
/* 0e8b058b */  MOV EAX,dword ptr [RSP + 0x24]
/* 0e8b058f */  CMP EAX,0x2
/* 0e8b0592 */  JZ 0x0e8b0fed
/* 0e8b0598 */  CMP EAX,0x1
/* 0e8b059b */  JZ 0x0e8b05af
/* 0e8b059d */  TEST EAX,EAX
/* 0e8b059f */  JNZ 0x0e8b05e3
/* 0e8b05a1 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b05a6 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e8b05ad */  JMP 0x0e8b05e3
/* 0e8b05af */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b05b4 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b05b8 */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b05bc */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e8b05c0 */  CMP dword ptr [RAX],ECX
/* 0e8b05c2 */  JZ 0x0e8b05df
/* 0e8b05c4 */  ADD RAX,0x68
/* 0e8b05c8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e8b05d0 */  MOV RDX,RAX
/* 0e8b05d3 */  ADD RAX,0x68
/* 0e8b05d7 */  CMP dword ptr [RDX],ECX
/* 0e8b05d9 */  JNZ 0x0e8b05d0
/* 0e8b05db */  ADD RAX,-0x68
/* 0e8b05df */  OR byte ptr [RAX + 0x12],0x9
/* 0e8b05e3 */  MOVAPS XMM0,xmmword ptr [RSP + 0x510]
/* 0e8b05eb */  MOVAPS XMM1,xmmword ptr [RSP + 0x520]
/* 0e8b05f3 */  MOVAPS XMM2,xmmword ptr [RSP + 0x530]
/* 0e8b05fb */  MOVAPS xmmword ptr [RSP + 0x450],XMM0
/* 0e8b0603 */  MOVAPS xmmword ptr [RSP + 0x460],XMM1
/* 0e8b060b */  MOVAPS xmmword ptr [RSP + 0x470],XMM2
/* 0e8b0613 */  MOVZX EAX,byte ptr [RSP + 0x540]
/* 0e8b061b */  MOV byte ptr [RSP + 0x480],AL
/* 0e8b0622 */  LEA RDI,[RSP + 0x70]
/* 0e8b0627 */  CALL 0x048b0bc0
/* 0e8b062c */  MOVAPS XMM0,xmmword ptr [RSP + 0x450]
/* 0e8b0634 */  MOVAPS XMM1,xmmword ptr [RSP + 0x460]
/* 0e8b063c */  MOVAPS XMM2,xmmword ptr [RSP + 0x470]
/* 0e8b0644 */  MOVAPS xmmword ptr [RSP + 0x4d0],XMM0
/* 0e8b064c */  MOVAPS xmmword ptr [RSP + 0x4e0],XMM1
/* 0e8b0654 */  MOVAPS xmmword ptr [RSP + 0x4f0],XMM2
/* 0e8b065c */  MOV RAX,qword ptr [RSP + 0x480]
/* 0e8b0664 */  MOV qword ptr [RSP + 0x500],RAX
/* 0e8b066c */  LEA RDX,[0x135c48e]
/* 0e8b0673 */  LEA RDI,[RSP + 0x70]
/* 0e8b0678 */  LEA RSI,[RSP + 0x4d0]
/* 0e8b0680 */  MOV ECX,0xf
/* 0e8b0685 */  MOV R8D,0x1
/* 0e8b068b */  CALL 0x0e8b86c0
/* 0e8b0690 */  LEA RDI,[0xf5463b0]
/* 0e8b0697 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b069e */  MOV ESI,0x8
/* 0e8b06a3 */  CALL qword ptr [RAX + 0x10]
/* 0e8b06a6 */  MOV R15,RAX
/* 0e8b06a9 */  TEST RAX,RAX
/* 0e8b06ac */  JZ 0x0e8b5ee4
/* 0e8b06b2 */  LEA RBX,[0xf497ef0]
/* 0e8b06b9 */  MOV qword ptr [R15],RBX
/* 0e8b06bc */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b06c4 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b06cc */  TEST RDI,RDI
/* 0e8b06cf */  JZ 0x0e8b06d7
/* 0e8b06d1 */  MOV RAX,qword ptr [RDI]
/* 0e8b06d4 */  CALL qword ptr [RAX + 0x8]
/* 0e8b06d7 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b06dc */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b06e3 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b06e7 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b06f0 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b06f8 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b0701 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b070a */  LEA R12,[0xe8b8990]
/* 0e8b0711 */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b0716 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b071b */  LEA RBP,[0xdb6a1a0]
/* 0e8b0722 */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b0727 */  LEA RAX,[0xe8b89a0]
/* 0e8b072e */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b0733 */  LEA RAX,[0xe8b8b10]
/* 0e8b073a */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b073f */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b0747 */  XORPS XMM0,XMM0
/* 0e8b074a */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b074f */  LEA RSI,[RSP + 0x8]
/* 0e8b0754 */  CALL 0x048b05a0
/* 0e8b0759 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b075e */  TEST R15,R15
/* 0e8b0761 */  JZ 0x0e8b0786
/* 0e8b0763 */  MOV RAX,-0x1
/* 0e8b076a */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0770 */  TEST RAX,RAX
/* 0e8b0773 */  JNZ 0x0e8b0786
/* 0e8b0775 */  MOV RAX,qword ptr [R15]
/* 0e8b0778 */  MOV RDI,R15
/* 0e8b077b */  CALL qword ptr [RAX + 0x10]
/* 0e8b077e */  MOV RDI,R15
/* 0e8b0781 */  CALL 0x0412c2d0
/* 0e8b0786 */  LEA RDI,[RSP + 0x70]
/* 0e8b078b */  CALL 0x0e8b88c0
/* 0e8b0790 */  LEA RDI,[RSP + 0x88]
/* 0e8b0798 */  MOVZX EAX,byte ptr [RSP + 0x500]
/* 0e8b07a0 */  MOV byte ptr [RSP + 0x4c0],AL
/* 0e8b07a7 */  MOVAPS XMM0,xmmword ptr [RSP + 0x4d0]
/* 0e8b07af */  MOVAPS XMM1,xmmword ptr [RSP + 0x4e0]
/* 0e8b07b7 */  MOVAPS XMM2,xmmword ptr [RSP + 0x4f0]
/* 0e8b07bf */  MOVAPS xmmword ptr [RSP + 0x4b0],XMM2
/* 0e8b07c7 */  MOVAPS xmmword ptr [RSP + 0x4a0],XMM1
/* 0e8b07cf */  MOVAPS xmmword ptr [RSP + 0x490],XMM0
/* 0e8b07d7 */  CALL 0x048b0bc0
/* 0e8b07dc */  MOV qword ptr [RSP + 0x158],-0x1
/* 0e8b07e8 */  MOV qword ptr [RSP + 0x160],0x0
/* 0e8b07f4 */  MOV byte ptr [RSP + 0x168],0xff
/* 0e8b07fc */  LEA R14,[0xf4e3cf0]
/* 0e8b0803 */  MOV qword ptr [RSP + 0x150],R14
/* 0e8b080b */  MOV qword ptr [RSP + 0x170],0x1
/* 0e8b0817 */  XORPS XMM0,XMM0
/* 0e8b081a */  MOVUPS xmmword ptr [RSP + 0x178],XMM0
/* 0e8b0822 */  MOV byte ptr [RSP + 0x188],0x0
/* 0e8b082a */  LEA RDI,[RSP + 0x390]
/* 0e8b0832 */  LEA RSI,[RSP + 0x490]
/* 0e8b083a */  LEA RDX,[RSP + 0x150]
/* 0e8b0842 */  CALL 0x0e8b7880
/* 0e8b0847 */  MOV RAX,qword ptr [RSP + 0x3c0]
/* 0e8b084f */  MOV qword ptr [RSP + 0x440],RAX
/* 0e8b0857 */  MOVUPS XMM0,xmmword ptr [RSP + 0x390]
/* 0e8b085f */  MOVUPS XMM1,xmmword ptr [RSP + 0x3a0]
/* 0e8b0867 */  MOVUPS XMM2,xmmword ptr [RSP + 0x3b0]
/* 0e8b086f */  MOVAPS xmmword ptr [RSP + 0x430],XMM2
/* 0e8b0877 */  MOVAPS xmmword ptr [RSP + 0x420],XMM1
/* 0e8b087f */  MOVAPS xmmword ptr [RSP + 0x410],XMM0
/* 0e8b0887 */  LEA RDX,[0x1412f41]
/* 0e8b088e */  LEA RDI,[RSP + 0x70]
/* 0e8b0893 */  LEA RSI,[RSP + 0x410]
/* 0e8b089b */  MOV ECX,0x11
/* 0e8b08a0 */  MOV R8D,0x1
/* 0e8b08a6 */  CALL 0x0e8b86c0
/* 0e8b08ab */  LEA RDI,[0xf5463b0]
/* 0e8b08b2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b08b9 */  MOV ESI,0x8
/* 0e8b08be */  CALL qword ptr [RAX + 0x10]
/* 0e8b08c1 */  MOV R15,RAX
/* 0e8b08c4 */  TEST RAX,RAX
/* 0e8b08c7 */  JZ 0x0e8b5ef5
/* 0e8b08cd */  MOV qword ptr [R15],RBX
/* 0e8b08d0 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b08d8 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b08e0 */  TEST RDI,RDI
/* 0e8b08e3 */  JZ 0x0e8b08eb
/* 0e8b08e5 */  MOV RAX,qword ptr [RDI]
/* 0e8b08e8 */  CALL qword ptr [RAX + 0x8]
/* 0e8b08eb */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b08f0 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b08f7 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b08fb */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b0904 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b090c */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b0915 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b091e */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b0923 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b0928 */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b092d */  LEA RAX,[0xe8b90b0]
/* 0e8b0934 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b0939 */  LEA RAX,[0xe8b9220]
/* 0e8b0940 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b0945 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b094d */  XORPS XMM0,XMM0
/* 0e8b0950 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b0955 */  LEA RSI,[RSP + 0x8]
/* 0e8b095a */  CALL 0x048b05a0
/* 0e8b095f */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b0964 */  TEST R15,R15
/* 0e8b0967 */  JZ 0x0e8b098c
/* 0e8b0969 */  MOV RAX,-0x1
/* 0e8b0970 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0976 */  TEST RAX,RAX
/* 0e8b0979 */  JNZ 0x0e8b098c
/* 0e8b097b */  MOV RAX,qword ptr [R15]
/* 0e8b097e */  MOV RDI,R15
/* 0e8b0981 */  CALL qword ptr [RAX + 0x10]
/* 0e8b0984 */  MOV RDI,R15
/* 0e8b0987 */  CALL 0x0412c2d0
/* 0e8b098c */  LEA RDI,[RSP + 0x70]
/* 0e8b0991 */  CALL 0x0e8b88c0
/* 0e8b0996 */  LEA RDI,[RSP + 0x88]
/* 0e8b099e */  MOVZX EAX,byte ptr [RSP + 0x440]
/* 0e8b09a6 */  MOV byte ptr [RSP + 0x200],AL
/* 0e8b09ad */  MOVAPS XMM0,xmmword ptr [RSP + 0x410]
/* 0e8b09b5 */  MOVAPS XMM1,xmmword ptr [RSP + 0x420]
/* 0e8b09bd */  MOVAPS XMM2,xmmword ptr [RSP + 0x430]
/* 0e8b09c5 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM2
/* 0e8b09cd */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM1
/* 0e8b09d5 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0e8b09dd */  CALL 0x048b0bc0
/* 0e8b09e2 */  MOV qword ptr [RSP + 0x258],-0x1
/* 0e8b09ee */  MOV qword ptr [RSP + 0x260],0x0
/* 0e8b09fa */  MOV byte ptr [RSP + 0x268],0xff
/* 0e8b0a02 */  MOV qword ptr [RSP + 0x250],R14
/* 0e8b0a0a */  MOV qword ptr [RSP + 0x270],0x1
/* 0e8b0a16 */  XORPS XMM0,XMM0
/* 0e8b0a19 */  MOVUPS xmmword ptr [RSP + 0x278],XMM0
/* 0e8b0a21 */  MOV byte ptr [RSP + 0x288],0x0
/* 0e8b0a29 */  LEA RDI,[RSP + 0x290]
/* 0e8b0a31 */  LEA RSI,[RSP + 0x1d0]
/* 0e8b0a39 */  LEA RDX,[RSP + 0x250]
/* 0e8b0a41 */  CALL 0x0e8b7880
/* 0e8b0a46 */  MOV RAX,qword ptr [RSP + 0x2c0]
/* 0e8b0a4e */  MOV qword ptr [RSP + 0x340],RAX
/* 0e8b0a56 */  MOVUPS XMM0,xmmword ptr [RSP + 0x290]
/* 0e8b0a5e */  MOVUPS XMM1,xmmword ptr [RSP + 0x2a0]
/* 0e8b0a66 */  MOVUPS XMM2,xmmword ptr [RSP + 0x2b0]
/* 0e8b0a6e */  MOVAPS xmmword ptr [RSP + 0x330],XMM2
/* 0e8b0a76 */  MOVAPS xmmword ptr [RSP + 0x320],XMM1
/* 0e8b0a7e */  MOVAPS xmmword ptr [RSP + 0x310],XMM0
/* 0e8b0a86 */  LEA RDX,[0x1412f53]
/* 0e8b0a8d */  LEA RDI,[RSP + 0x70]
/* 0e8b0a92 */  LEA RSI,[RSP + 0x310]
/* 0e8b0a9a */  MOV ECX,0xc
/* 0e8b0a9f */  MOV R8D,0x1
/* 0e8b0aa5 */  CALL 0x0e8b86c0
/* 0e8b0aaa */  LEA RDI,[0xf5463b0]
/* 0e8b0ab1 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b0ab8 */  MOV ESI,0x8
/* 0e8b0abd */  CALL qword ptr [RAX + 0x10]
/* 0e8b0ac0 */  MOV R15,RAX
/* 0e8b0ac3 */  TEST RAX,RAX
/* 0e8b0ac6 */  JZ 0x0e8b5f06
/* 0e8b0acc */  LEA RBX,[0xf4726f8]
/* 0e8b0ad3 */  MOV qword ptr [R15],RBX
/* 0e8b0ad6 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b0ade */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b0ae6 */  TEST RDI,RDI
/* 0e8b0ae9 */  JZ 0x0e8b0af1
/* 0e8b0aeb */  MOV RAX,qword ptr [RDI]
/* 0e8b0aee */  CALL qword ptr [RAX + 0x8]
/* 0e8b0af1 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b0af6 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b0afd */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b0b01 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b0b0a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b0b12 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b0b1b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b0b24 */  LEA R12,[0xdb8dd10]
/* 0e8b0b2b */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b0b30 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b0b35 */  LEA RBP,[0xd4858f0]
/* 0e8b0b3c */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b0b41 */  LEA RAX,[0xe8b9400]
/* 0e8b0b48 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b0b4d */  LEA RAX,[0xe8b9600]
/* 0e8b0b54 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b0b59 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b0b61 */  XORPS XMM0,XMM0
/* 0e8b0b64 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b0b69 */  LEA RSI,[RSP + 0x8]
/* 0e8b0b6e */  CALL 0x048b05a0
/* 0e8b0b73 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b0b78 */  TEST R15,R15
/* 0e8b0b7b */  JZ 0x0e8b0ba0
/* 0e8b0b7d */  MOV RAX,-0x1
/* 0e8b0b84 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0b8a */  TEST RAX,RAX
/* 0e8b0b8d */  JNZ 0x0e8b0ba0
/* 0e8b0b8f */  MOV RAX,qword ptr [R15]
/* 0e8b0b92 */  MOV RDI,R15
/* 0e8b0b95 */  CALL qword ptr [RAX + 0x10]
/* 0e8b0b98 */  MOV RDI,R15
/* 0e8b0b9b */  CALL 0x0412c2d0
/* 0e8b0ba0 */  LEA RDI,[RSP + 0x70]
/* 0e8b0ba5 */  CALL 0x0e8b88c0
/* 0e8b0baa */  LEA RDI,[RSP + 0x88]
/* 0e8b0bb2 */  MOVZX EAX,byte ptr [RSP + 0x340]
/* 0e8b0bba */  MOV byte ptr [RSP + 0x300],AL
/* 0e8b0bc1 */  MOVAPS XMM0,xmmword ptr [RSP + 0x310]
/* 0e8b0bc9 */  MOVAPS XMM1,xmmword ptr [RSP + 0x320]
/* 0e8b0bd1 */  MOVAPS XMM2,xmmword ptr [RSP + 0x330]
/* 0e8b0bd9 */  MOVAPS xmmword ptr [RSP + 0x2f0],XMM2
/* 0e8b0be1 */  MOVAPS xmmword ptr [RSP + 0x2e0],XMM1
/* 0e8b0be9 */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0e8b0bf1 */  CALL 0x048b0bc0
/* 0e8b0bf6 */  MOVAPS XMM0,xmmword ptr [RSP + 0x2d0]
/* 0e8b0bfe */  MOVAPS XMM1,xmmword ptr [RSP + 0x2e0]
/* 0e8b0c06 */  MOVAPS XMM2,xmmword ptr [RSP + 0x2f0]
/* 0e8b0c0e */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0e8b0c16 */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM1
/* 0e8b0c1e */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM2
/* 0e8b0c26 */  MOV RAX,qword ptr [RSP + 0x300]
/* 0e8b0c2e */  MOV qword ptr [RSP + 0x1c0],RAX
/* 0e8b0c36 */  LEA RDX,[0x145f54d]
/* 0e8b0c3d */  LEA RDI,[RSP + 0x70]
/* 0e8b0c42 */  LEA RSI,[RSP + 0x190]
/* 0e8b0c4a */  MOV ECX,0x13
/* 0e8b0c4f */  MOV R8D,0x1
/* 0e8b0c55 */  CALL 0x0e8b86c0
/* 0e8b0c5a */  LEA RDI,[0xf5463b0]
/* 0e8b0c61 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b0c68 */  MOV ESI,0x8
/* 0e8b0c6d */  CALL qword ptr [RAX + 0x10]
/* 0e8b0c70 */  MOV R15,RAX
/* 0e8b0c73 */  TEST RAX,RAX
/* 0e8b0c76 */  JZ 0x0e8b5f28
/* 0e8b0c7c */  MOV qword ptr [R15],RBX
/* 0e8b0c7f */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b0c87 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b0c8f */  TEST RDI,RDI
/* 0e8b0c92 */  JZ 0x0e8b0c9a
/* 0e8b0c94 */  MOV RAX,qword ptr [RDI]
/* 0e8b0c97 */  CALL qword ptr [RAX + 0x8]
/* 0e8b0c9a */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b0c9f */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b0ca6 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b0caa */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b0cb3 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b0cbb */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b0cc4 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b0ccd */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b0cd2 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b0cd7 */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b0cdc */  LEA RAX,[0xe8b97e0]
/* 0e8b0ce3 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b0ce8 */  LEA RAX,[0xe8b9a00]
/* 0e8b0cef */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b0cf4 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b0cfc */  XORPS XMM0,XMM0
/* 0e8b0cff */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b0d04 */  LEA RSI,[RSP + 0x8]
/* 0e8b0d09 */  CALL 0x048b05a0
/* 0e8b0d0e */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b0d13 */  TEST R15,R15
/* 0e8b0d16 */  JZ 0x0e8b0d3b
/* 0e8b0d18 */  MOV RAX,-0x1
/* 0e8b0d1f */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0d25 */  TEST RAX,RAX
/* 0e8b0d28 */  JNZ 0x0e8b0d3b
/* 0e8b0d2a */  MOV RAX,qword ptr [R15]
/* 0e8b0d2d */  MOV RDI,R15
/* 0e8b0d30 */  CALL qword ptr [RAX + 0x10]
/* 0e8b0d33 */  MOV RDI,R15
/* 0e8b0d36 */  CALL 0x0412c2d0
/* 0e8b0d3b */  LEA RDI,[RSP + 0x70]
/* 0e8b0d40 */  CALL 0x0e8b88c0
/* 0e8b0d45 */  LEA RDI,[RSP + 0x88]
/* 0e8b0d4d */  MOVZX EAX,byte ptr [RSP + 0x1c0]
/* 0e8b0d55 */  MOV byte ptr [RSP + 0x380],AL
/* 0e8b0d5c */  MOVAPS XMM0,xmmword ptr [RSP + 0x190]
/* 0e8b0d64 */  MOVAPS XMM1,xmmword ptr [RSP + 0x1a0]
/* 0e8b0d6c */  MOVAPS XMM2,xmmword ptr [RSP + 0x1b0]
/* 0e8b0d74 */  MOVAPS xmmword ptr [RSP + 0x370],XMM2
/* 0e8b0d7c */  MOVAPS xmmword ptr [RSP + 0x360],XMM1
/* 0e8b0d84 */  MOVAPS xmmword ptr [RSP + 0x350],XMM0
/* 0e8b0d8c */  CALL 0x048b0bc0
/* 0e8b0d91 */  MOVDQA XMM0,xmmword ptr [RSP + 0x350]
/* 0e8b0d9a */  MOVDQA XMM1,xmmword ptr [RSP + 0x360]
/* 0e8b0da3 */  MOVDQA XMM2,xmmword ptr [RSP + 0x370]
/* 0e8b0dac */  MOVDQA xmmword ptr [RSP + 0x3d0],XMM0
/* 0e8b0db5 */  MOVDQA xmmword ptr [RSP + 0x3e0],XMM1
/* 0e8b0dbe */  MOVDQA xmmword ptr [RSP + 0x3f0],XMM2
/* 0e8b0dc7 */  MOV RAX,qword ptr [RSP + 0x380]
/* 0e8b0dcf */  MOV qword ptr [RSP + 0x400],RAX
/* 0e8b0dd7 */  LEA RDX,[0x11b8f7b]
/* 0e8b0dde */  LEA RDI,[RSP + 0x70]
/* 0e8b0de3 */  LEA RSI,[RSP + 0x3d0]
/* 0e8b0deb */  MOV ECX,0xe
/* 0e8b0df0 */  XOR R8D,R8D
/* 0e8b0df3 */  CALL 0x0e8b86c0
/* 0e8b0df8 */  LEA RDI,[0xf5463b0]
/* 0e8b0dff */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b0e06 */  MOV ESI,0x8
/* 0e8b0e0b */  CALL qword ptr [RAX + 0x10]
/* 0e8b0e0e */  MOV R15,RAX
/* 0e8b0e11 */  TEST RAX,RAX
/* 0e8b0e14 */  JZ 0x0e8b5f4a
/* 0e8b0e1a */  LEA RAX,[0xf4cefc0]
/* 0e8b0e21 */  MOV qword ptr [R15],RAX
/* 0e8b0e24 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b0e2c */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b0e34 */  TEST RDI,RDI
/* 0e8b0e37 */  JZ 0x0e8b0e3f
/* 0e8b0e39 */  MOV RAX,qword ptr [RDI]
/* 0e8b0e3c */  CALL qword ptr [RAX + 0x8]
/* 0e8b0e3f */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b0e44 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b0e4b */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b0e4f */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b0e58 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b0e60 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b0e69 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b0e72 */  LEA RAX,[0xe8bab80]
/* 0e8b0e79 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b0e7e */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b0e83 */  LEA RAX,[0xe8ba840]
/* 0e8b0e8a */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b0e8f */  LEA RAX,[0xe8bab90]
/* 0e8b0e96 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b0e9b */  LEA RAX,[0xe8bace0]
/* 0e8b0ea2 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b0ea7 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b0eaf */  PXOR XMM0,XMM0
/* 0e8b0eb3 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8b0eb9 */  LEA RSI,[RSP + 0x8]
/* 0e8b0ebe */  CALL 0x048b05a0
/* 0e8b0ec3 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b0ec8 */  TEST R15,R15
/* 0e8b0ecb */  JZ 0x0e8b0ef0
/* 0e8b0ecd */  MOV RAX,-0x1
/* 0e8b0ed4 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0eda */  TEST RAX,RAX
/* 0e8b0edd */  JNZ 0x0e8b0ef0
/* 0e8b0edf */  MOV RAX,qword ptr [R15]
/* 0e8b0ee2 */  MOV RDI,R15
/* 0e8b0ee5 */  CALL qword ptr [RAX + 0x10]
/* 0e8b0ee8 */  MOV RDI,R15
/* 0e8b0eeb */  CALL 0x0412c2d0
/* 0e8b0ef0 */  LEA RDI,[RSP + 0x70]
/* 0e8b0ef5 */  CALL 0x0e8b88c0
/* 0e8b0efa */  LEA RDI,[RSP + 0x88]
/* 0e8b0f02 */  CALL 0x048b0bc0
/* 0e8b0f07 */  MOV qword ptr [RSP + 0x250],R14
/* 0e8b0f0f */  MOV R15,qword ptr [RSP + 0x280]
/* 0e8b0f17 */  TEST R15,R15
/* 0e8b0f1a */  JZ 0x0e8b0f3f
/* 0e8b0f1c */  MOV RAX,-0x1
/* 0e8b0f23 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0f29 */  TEST RAX,RAX
/* 0e8b0f2c */  JNZ 0x0e8b0f3f
/* 0e8b0f2e */  MOV RAX,qword ptr [R15]
/* 0e8b0f31 */  MOV RDI,R15
/* 0e8b0f34 */  CALL qword ptr [RAX + 0x10]
/* 0e8b0f37 */  MOV RDI,R15
/* 0e8b0f3a */  CALL 0x0412c2d0
/* 0e8b0f3f */  MOV qword ptr [RSP + 0x150],R14
/* 0e8b0f47 */  MOV R15,qword ptr [RSP + 0x180]
/* 0e8b0f4f */  TEST R15,R15
/* 0e8b0f52 */  JZ 0x0e8b0f6a
/* 0e8b0f54 */  MOV RAX,-0x1
/* 0e8b0f5b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b0f61 */  TEST RAX,RAX
/* 0e8b0f64 */  JZ 0x0e8b103f
/* 0e8b0f6a */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b0f72 */  CALL 0x0db80430
/* 0e8b0f77 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b0f7e */  JNZ 0x0e8b106a
/* 0e8b0f84 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e8b0f88 */  TEST RAX,RAX
/* 0e8b0f8b */  JZ 0x0e8b106a
/* 0e8b0f91 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e8b0f95 */  LEA RDX,[RAX + 0x9]
/* 0e8b0f99 */  MOV ECX,ESI
/* 0e8b0f9b */  SHR ECX,0x1
/* 0e8b0f9d */  TEST SIL,0x1
/* 0e8b0fa1 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e8b0fa6 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e8b0fab */  LEA RDI,[RSP + 0x450]
/* 0e8b0fb3 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8b0fbb */  CALL 0x0e8bb4b0
/* 0e8b0fc0 */  CMP byte ptr [RSP + 0x480],0x0
/* 0e8b0fc8 */  JZ 0x0e8b1099
/* 0e8b0fce */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b0fd6 */  CALL 0x0db80350
/* 0e8b0fdb */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b0fe2 */  JZ 0x0e8b2288
/* 0e8b0fe8 */  JMP 0x0e8b22e9
/* 0e8b0fed */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b0ff2 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b0ff6 */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b0ffa */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e8b0ffe */  CMP dword ptr [RAX],ECX
/* 0e8b1000 */  JZ 0x0e8b101f
/* 0e8b1002 */  ADD RAX,0x58
/* 0e8b1006 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e8b1010 */  MOV RDX,RAX
/* 0e8b1013 */  ADD RAX,0x58
/* 0e8b1017 */  CMP dword ptr [RDX],ECX
/* 0e8b1019 */  JNZ 0x0e8b1010
/* 0e8b101b */  ADD RAX,-0x58
/* 0e8b101f */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e8b1024 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b1028 */  JZ 0x0e8b05df
/* 0e8b102e */  NOP
/* 0e8b1030 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e8b1034 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b1038 */  JNZ 0x0e8b1030
/* 0e8b103a */  JMP 0x0e8b05df
/* 0e8b103f */  MOV RAX,qword ptr [R15]
/* 0e8b1042 */  MOV RDI,R15
/* 0e8b1045 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1048 */  MOV RDI,R15
/* 0e8b104b */  CALL 0x0412c2d0
/* 0e8b1050 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b1058 */  CALL 0x0db80430
/* 0e8b105d */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b1064 */  JZ 0x0e8b0f84
/* 0e8b106a */  LEA RDX,[0x1390eeb]
/* 0e8b1071 */  LEA RDI,[RSP + 0x450]
/* 0e8b1079 */  MOV ECX,0xf
/* 0e8b107e */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8b1086 */  CALL 0x0e8bb4b0
/* 0e8b108b */  CMP byte ptr [RSP + 0x480],0x0
/* 0e8b1093 */  JNZ 0x0e8b0fce
/* 0e8b1099 */  MOV R15,qword ptr [RSP + 0x450]
/* 0e8b10a1 */  ADD R15,0x18
/* 0e8b10a5 */  MOV RDI,R15
/* 0e8b10a8 */  CALL 0x0db80430
/* 0e8b10ad */  MOV RDX,qword ptr [RSP + 0x450]
/* 0e8b10b5 */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e8b10b9 */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e8b10bd */  CMP RCX,RDX
/* 0e8b10c0 */  JZ 0x0e8b1176
/* 0e8b10c6 */  MOV RSI,0x3a6c61657265635b
/* 0e8b10d0 */  MOVQ XMM0,RSI
/* 0e8b10d5 */  MOV RSI,0x746e656d75636f64
/* 0e8b10df */  MOVQ XMM1,RSI
/* 0e8b10e4 */  PUNPCKLQDQ XMM0,XMM1
/* 0e8b10e8 */  MOV RSI,0x7461746e656d7563
/* 0e8b10f2 */  MOVQ XMM1,RSI
/* 0e8b10f7 */  MOV RSI,0x5d6761745f6e6f69
/* 0e8b1101 */  MOVQ XMM2,RSI
/* 0e8b1106 */  PUNPCKLQDQ XMM1,XMM2
/* 0e8b110a */  JMP 0x0e8b113e
/* 0e8b1110 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e8b1114 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e8b1118 */  PCMPEQB XMM2,XMM0
/* 0e8b111c */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e8b1121 */  PCMPEQB XMM3,XMM1
/* 0e8b1125 */  PAND XMM3,XMM2
/* 0e8b1129 */  PMOVMSKB ESI,XMM3
/* 0e8b112d */  CMP ESI,0xffff
/* 0e8b1133 */  JZ 0x0e8b1176
/* 0e8b1135 */  ADD RCX,0x38
/* 0e8b1139 */  CMP RCX,RDX
/* 0e8b113c */  JZ 0x0e8b1176
/* 0e8b113e */  MOVZX ESI,byte ptr [RCX]
/* 0e8b1141 */  TEST SIL,0x1
/* 0e8b1145 */  JZ 0x0e8b1160
/* 0e8b1147 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e8b114b */  CMP RDI,0x1a
/* 0e8b114f */  JNZ 0x0e8b1135
/* 0e8b1151 */  JMP 0x0e8b116a
/* 0e8b1160 */  MOV EDI,ESI
/* 0e8b1162 */  SHR EDI,0x1
/* 0e8b1164 */  CMP RDI,0x1a
/* 0e8b1168 */  JNZ 0x0e8b1135
/* 0e8b116a */  TEST SIL,0x1
/* 0e8b116e */  JNZ 0x0e8b1110
/* 0e8b1170 */  LEA RSI,[RCX + 0x1]
/* 0e8b1174 */  JMP 0x0e8b1114
/* 0e8b1176 */  CMP RCX,RDX
/* 0e8b1179 */  JZ 0x0e8b1199
/* 0e8b117b */  MOV EBX,dword ptr [RCX + 0x1c]
/* 0e8b117e */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e8b1185 */  TEST CL,CL
/* 0e8b1187 */  JZ 0x0e8b63d2
/* 0e8b118d */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e8b1193 */  JNZ 0x0e8b13d0
/* 0e8b1199 */  CMP dword ptr [RSP + 0x478],0x0
/* 0e8b11a1 */  JZ 0x0e8b11f5
/* 0e8b11a3 */  MOV EDX,dword ptr [RSP + 0x47c]
/* 0e8b11aa */  MOV RDI,R15
/* 0e8b11ad */  MOV RSI,RAX
/* 0e8b11b0 */  MOV ECX,0x1
/* 0e8b11b5 */  CALL 0x048b0c90
/* 0e8b11ba */  TEST RAX,RAX
/* 0e8b11bd */  JNZ 0x0e8b11dd
/* 0e8b11bf */  PXOR XMM0,XMM0
/* 0e8b11c3 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b11c9 */  LEA RDI,[RSP + 0x70]
/* 0e8b11ce */  CALL 0x048b0d20
/* 0e8b11d3 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b11d8 */  TEST RAX,RAX
/* 0e8b11db */  JZ 0x0e8b120d
/* 0e8b11dd */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e8b11e4 */  JNZ 0x0e8b120d
/* 0e8b11e6 */  MOV R15,qword ptr [RAX + 0x58]
/* 0e8b11ea */  TEST R15,R15
/* 0e8b11ed */  JZ 0x0e8b120d
/* 0e8b11ef */  ADD R15,0x40
/* 0e8b11f3 */  JMP 0x0e8b1210
/* 0e8b11f5 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b11fc */  JNZ 0x0e8b120d
/* 0e8b11fe */  MOV R15,qword ptr [RAX + 0x68]
/* 0e8b1202 */  TEST R15,R15
/* 0e8b1205 */  JZ 0x0e8b120d
/* 0e8b1207 */  ADD R15,0x38
/* 0e8b120b */  JMP 0x0e8b1210
/* 0e8b120d */  XOR R15D,R15D
/* 0e8b1210 */  LEA RAX,[0x488e0b0]
/* 0e8b1217 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e8b121c */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e8b1224 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e8b122d */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e8b1232 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e8b123b */  PXOR XMM0,XMM0
/* 0e8b123f */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b1245 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e8b124d */  MOV qword ptr [RSP + 0x90],0x0
/* 0e8b1259 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e8b1264 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e8b126c */  LEA RDI,[0xf5463b0]
/* 0e8b1273 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b127a */  MOV ESI,0x20
/* 0e8b127f */  CALL qword ptr [RAX + 0x10]
/* 0e8b1282 */  MOV R12,RAX
/* 0e8b1285 */  TEST RAX,RAX
/* 0e8b1288 */  JZ 0x0e8b618c
/* 0e8b128e */  MOV qword ptr [RSP + 0x160],R12
/* 0e8b1296 */  MOV qword ptr [RSP + 0x150],0x21
/* 0e8b12a2 */  MOV qword ptr [RSP + 0x158],0x1a
/* 0e8b12ae */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e8b12b5 */  MOVUPS xmmword ptr [R12 + 0xa],XMM0
/* 0e8b12bb */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e8b12c3 */  MOVDQU xmmword ptr [R12],XMM0
/* 0e8b12c9 */  MOV byte ptr [R12 + 0x1a],0x0
/* 0e8b12cf */  LEA RSI,[RSP + 0x150]
/* 0e8b12d7 */  MOV RDI,R15
/* 0e8b12da */  CALL 0x048b5060
/* 0e8b12df */  MOV R12,RAX
/* 0e8b12e2 */  LEA R15,[RSP + 0x78]
/* 0e8b12e7 */  ADD RAX,0x20
/* 0e8b12eb */  MOV qword ptr [R12 + 0x20],0x0
/* 0e8b12f4 */  LEA RCX,[RSP + 0x70]
/* 0e8b12f9 */  CMP RAX,RCX
/* 0e8b12fc */  JZ 0x0e8b1339
/* 0e8b12fe */  MOV RAX,qword ptr [R12 + 0x40]
/* 0e8b1303 */  TEST RAX,RAX
/* 0e8b1306 */  JZ 0x0e8b1359
/* 0e8b1308 */  MOV R13,R12
/* 0e8b130b */  ADD R13,0x28
/* 0e8b130f */  MOV RDI,R13
/* 0e8b1312 */  CALL RAX
/* 0e8b1314 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e8b131c */  TEST EAX,EAX
/* 0e8b131e */  JZ 0x0e8b1359
/* 0e8b1320 */  CMP EAX,0x2
/* 0e8b1323 */  JNZ 0x0e8b1347
/* 0e8b1325 */  MOV EDI,0x5
/* 0e8b132a */  MOV RSI,R15
/* 0e8b132d */  MOV RDX,R13
/* 0e8b1330 */  CALL qword ptr [RSP + 0x88]
/* 0e8b1337 */  JMP 0x0e8b1359
/* 0e8b1339 */  XOR EAX,EAX
/* 0e8b133b */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b1343 */  JNZ 0x0e8b1394
/* 0e8b1345 */  JMP 0x0e8b13b5
/* 0e8b1347 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e8b134c */  MOV qword ptr [RSP + 0x78],0x0
/* 0e8b1355 */  MOV qword ptr [R13],RAX
/* 0e8b1359 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b1361 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e8b136a */  MOVDQU xmmword ptr [R12 + 0x38],XMM0
/* 0e8b1371 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e8b1378 */  MOV dword ptr [R12 + 0x48],ECX
/* 0e8b137d */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e8b1385 */  MOV byte ptr [R12 + 0x4c],CL
/* 0e8b138a */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b1392 */  JZ 0x0e8b13b5
/* 0e8b1394 */  MOV RSI,qword ptr [RSP + 0x150]
/* 0e8b139c */  MOV RDI,qword ptr [RSP + 0x160]
/* 0e8b13a4 */  AND RSI,-0x2
/* 0e8b13a8 */  CALL 0x0412a280
/* 0e8b13ad */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b13b5 */  TEST RAX,RAX
/* 0e8b13b8 */  JZ 0x0e8b13bf
/* 0e8b13ba */  MOV RDI,R15
/* 0e8b13bd */  CALL RAX
/* 0e8b13bf */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e8b13c4 */  TEST RAX,RAX
/* 0e8b13c7 */  JZ 0x0e8b13d0
/* 0e8b13c9 */  LEA RDI,[RSP + 0x8]
/* 0e8b13ce */  CALL RAX
/* 0e8b13d0 */  MOV RAX,0x5127f14d00000002
/* 0e8b13da */  MOV qword ptr [RSP + 0x478],RAX
/* 0e8b13e2 */  LEA RDI,[RSP + 0xb0]
/* 0e8b13ea */  PXOR XMM0,XMM0
/* 0e8b13ee */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e8b13f7 */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e8b1400 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e8b1409 */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e8b1412 */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e8b141b */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e8b1424 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b142a */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e8b1435 */  MOV ESI,0x8
/* 0e8b143a */  CALL 0x048afb10
/* 0e8b143f */  PXOR XMM0,XMM0
/* 0e8b1443 */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e8b144c */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e8b1455 */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e8b145e */  MOV word ptr [RSP + 0x118],0xff00
/* 0e8b1468 */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e8b1470 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e8b1478 */  MOV byte ptr [RSP + 0x124],0x0
/* 0e8b1480 */  LEA RDI,[0xf5463b0]
/* 0e8b1487 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b148e */  MOV ESI,0x8
/* 0e8b1493 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1496 */  MOV R15,RAX
/* 0e8b1499 */  TEST RAX,RAX
/* 0e8b149c */  JZ 0x0e8b5f17
/* 0e8b14a2 */  LEA RAX,[0xf497e98]
/* 0e8b14a9 */  MOV qword ptr [R15],RAX
/* 0e8b14ac */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e8b14b1 */  MOV qword ptr [RSP + 0x70],R15
/* 0e8b14b6 */  TEST RDI,RDI
/* 0e8b14b9 */  JZ 0x0e8b14c1
/* 0e8b14bb */  MOV RAX,qword ptr [RDI]
/* 0e8b14be */  CALL qword ptr [RAX + 0x8]
/* 0e8b14c1 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e8b14c9 */  JZ 0x0e8b14e4
/* 0e8b14cb */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e8b14d3 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e8b14db */  AND RSI,-0x2
/* 0e8b14df */  CALL 0x0412a280
/* 0e8b14e4 */  MOV byte ptr [RSP + 0x98],0x8
/* 0e8b14ec */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e8b14f7 */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e8b14ff */  MOVZX EAX,byte ptr [0x0f737558]
/* 0e8b1506 */  TEST AL,AL
/* 0e8b1508 */  JZ 0x0e8b6296
/* 0e8b150e */  LEA R15,[RSP + 0x458]
/* 0e8b1516 */  MOV EAX,dword ptr [RSP + 0x47c]
/* 0e8b151d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1521 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b152a */  MOV dword ptr [RSP + 0x18],0x3
/* 0e8b1532 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b153b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b1544 */  LEA RAX,[0xdb65ce0]
/* 0e8b154b */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b1550 */  LEA R13,[0x48b06d0]
/* 0e8b1557 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b155c */  LEA RAX,[0xdb61aa0]
/* 0e8b1563 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b1568 */  LEA RAX,[0xe8bc080]
/* 0e8b156f */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b1574 */  LEA RAX,[0xe8bc090]
/* 0e8b157b */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b1580 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b1588 */  PXOR XMM0,XMM0
/* 0e8b158c */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8b1592 */  LEA RSI,[RSP + 0x8]
/* 0e8b1597 */  MOV RDI,R15
/* 0e8b159a */  CALL 0x048b05a0
/* 0e8b159f */  MOV R12,qword ptr [RSP + 0x68]
/* 0e8b15a4 */  TEST R12,R12
/* 0e8b15a7 */  JZ 0x0e8b15ce
/* 0e8b15a9 */  MOV RAX,-0x1
/* 0e8b15b0 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e8b15b7 */  TEST RAX,RAX
/* 0e8b15ba */  JNZ 0x0e8b15ce
/* 0e8b15bc */  MOV RAX,qword ptr [R12]
/* 0e8b15c0 */  MOV RDI,R12
/* 0e8b15c3 */  CALL qword ptr [RAX + 0x10]
/* 0e8b15c6 */  MOV RDI,R12
/* 0e8b15c9 */  CALL 0x0412c2d0
/* 0e8b15ce */  MOVDQU XMM0,xmmword ptr [R15]
/* 0e8b15d3 */  MOVDQU XMM1,xmmword ptr [R15 + 0x10]
/* 0e8b15d9 */  MOVDQA xmmword ptr [RSP + 0x160],XMM1
/* 0e8b15e2 */  MOVDQA xmmword ptr [RSP + 0x150],XMM0
/* 0e8b15eb */  LEA RDI,[RSP + 0x8]
/* 0e8b15f0 */  LEA RSI,[RSP + 0x150]
/* 0e8b15f8 */  LEA RDX,[RSP + 0x70]
/* 0e8b15fd */  CALL 0x0e8bbe10
/* 0e8b1602 */  MOV EAX,dword ptr [RSP + 0x24]
/* 0e8b1606 */  CMP EAX,0x2
/* 0e8b1609 */  JZ 0x0e8b25d6
/* 0e8b160f */  CMP EAX,0x1
/* 0e8b1612 */  JZ 0x0e8b1626
/* 0e8b1614 */  TEST EAX,EAX
/* 0e8b1616 */  JNZ 0x0e8b1653
/* 0e8b1618 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b161d */  OR dword ptr [RAX + 0x18],0x90000
/* 0e8b1624 */  JMP 0x0e8b1653
/* 0e8b1626 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b162b */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b162f */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b1633 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e8b1637 */  CMP dword ptr [RAX],ECX
/* 0e8b1639 */  JZ 0x0e8b164f
/* 0e8b163b */  ADD RAX,0x68
/* 0e8b163f */  NOP
/* 0e8b1640 */  MOV RDX,RAX
/* 0e8b1643 */  ADD RAX,0x68
/* 0e8b1647 */  CMP dword ptr [RDX],ECX
/* 0e8b1649 */  JNZ 0x0e8b1640
/* 0e8b164b */  ADD RAX,-0x68
/* 0e8b164f */  OR byte ptr [RAX + 0x12],0x9
/* 0e8b1653 */  MOVUPS XMM0,xmmword ptr [RSP + 0x450]
/* 0e8b165b */  MOVUPS XMM1,xmmword ptr [RSP + 0x460]
/* 0e8b1663 */  MOVUPS XMM2,xmmword ptr [RSP + 0x470]
/* 0e8b166b */  MOVAPS xmmword ptr [RSP + 0x4d0],XMM0
/* 0e8b1673 */  MOVAPS xmmword ptr [RSP + 0x4e0],XMM1
/* 0e8b167b */  MOVAPS xmmword ptr [RSP + 0x4f0],XMM2
/* 0e8b1683 */  MOVZX EAX,byte ptr [RSP + 0x480]
/* 0e8b168b */  MOV byte ptr [RSP + 0x500],AL
/* 0e8b1692 */  LEA RDI,[RSP + 0x70]
/* 0e8b1697 */  CALL 0x048b0bc0
/* 0e8b169c */  MOVAPS XMM0,xmmword ptr [RSP + 0x4d0]
/* 0e8b16a4 */  MOVAPS XMM1,xmmword ptr [RSP + 0x4e0]
/* 0e8b16ac */  MOVAPS XMM2,xmmword ptr [RSP + 0x4f0]
/* 0e8b16b4 */  MOVAPS xmmword ptr [RSP + 0x490],XMM0
/* 0e8b16bc */  MOVAPS xmmword ptr [RSP + 0x4a0],XMM1
/* 0e8b16c4 */  MOVAPS xmmword ptr [RSP + 0x4b0],XMM2
/* 0e8b16cc */  MOV RAX,qword ptr [RSP + 0x500]
/* 0e8b16d4 */  MOV qword ptr [RSP + 0x4c0],RAX
/* 0e8b16dc */  LEA RDX,[0x126cda9]
/* 0e8b16e3 */  LEA RDI,[RSP + 0x70]
/* 0e8b16e8 */  LEA RSI,[RSP + 0x490]
/* 0e8b16f0 */  MOV ECX,0xf
/* 0e8b16f5 */  CALL 0x0e8bc0e0
/* 0e8b16fa */  LEA RDI,[0xf5463b0]
/* 0e8b1701 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b1708 */  MOV ESI,0x8
/* 0e8b170d */  CALL qword ptr [RAX + 0x10]
/* 0e8b1710 */  MOV R15,RAX
/* 0e8b1713 */  TEST RAX,RAX
/* 0e8b1716 */  JZ 0x0e8b5f39
/* 0e8b171c */  LEA RAX,[0xef46ce8]
/* 0e8b1723 */  MOV qword ptr [R15],RAX
/* 0e8b1726 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b172e */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b1736 */  TEST RDI,RDI
/* 0e8b1739 */  JZ 0x0e8b1741
/* 0e8b173b */  MOV RAX,qword ptr [RDI]
/* 0e8b173e */  CALL qword ptr [RAX + 0x8]
/* 0e8b1741 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b1746 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b174d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1751 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b175a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b1762 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b176b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b1774 */  LEA RAX,[0x490ce30]
/* 0e8b177b */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b1780 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b1785 */  LEA RAX,[0x490cb20]
/* 0e8b178c */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b1791 */  LEA RAX,[0xe8bc440]
/* 0e8b1798 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b179d */  LEA RAX,[0xe8bc5a0]
/* 0e8b17a4 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b17a9 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b17b1 */  XORPS XMM0,XMM0
/* 0e8b17b4 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b17b9 */  LEA RSI,[RSP + 0x8]
/* 0e8b17be */  CALL 0x048b05a0
/* 0e8b17c3 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b17c8 */  TEST R15,R15
/* 0e8b17cb */  JZ 0x0e8b17f0
/* 0e8b17cd */  MOV RAX,-0x1
/* 0e8b17d4 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b17da */  TEST RAX,RAX
/* 0e8b17dd */  JNZ 0x0e8b17f0
/* 0e8b17df */  MOV RAX,qword ptr [R15]
/* 0e8b17e2 */  MOV RDI,R15
/* 0e8b17e5 */  CALL qword ptr [RAX + 0x10]
/* 0e8b17e8 */  MOV RDI,R15
/* 0e8b17eb */  CALL 0x0412c2d0
/* 0e8b17f0 */  LEA RDI,[RSP + 0x70]
/* 0e8b17f5 */  CALL 0x0e8bc370
/* 0e8b17fa */  LEA RDI,[RSP + 0x88]
/* 0e8b1802 */  MOVZX EAX,byte ptr [RSP + 0x4c0]
/* 0e8b180a */  MOV byte ptr [RSP + 0x3c0],AL
/* 0e8b1811 */  MOVAPS XMM0,xmmword ptr [RSP + 0x490]
/* 0e8b1819 */  MOVAPS XMM1,xmmword ptr [RSP + 0x4a0]
/* 0e8b1821 */  MOVAPS XMM2,xmmword ptr [RSP + 0x4b0]
/* 0e8b1829 */  MOVAPS xmmword ptr [RSP + 0x3b0],XMM2
/* 0e8b1831 */  MOVAPS xmmword ptr [RSP + 0x3a0],XMM1
/* 0e8b1839 */  MOVAPS xmmword ptr [RSP + 0x390],XMM0
/* 0e8b1841 */  CALL 0x048b0bc0
/* 0e8b1846 */  MOV dword ptr [RSP + 0x18a],0x0
/* 0e8b1851 */  MOV word ptr [RSP + 0x18e],0x0
/* 0e8b185b */  MOV qword ptr [RSP + 0x158],-0x1
/* 0e8b1867 */  MOV qword ptr [RSP + 0x160],0x0
/* 0e8b1873 */  MOV byte ptr [RSP + 0x168],0xff
/* 0e8b187b */  LEA RBX,[0xf0edc68]
/* 0e8b1882 */  XORPS XMM0,XMM0
/* 0e8b1885 */  MOVHPS XMM0,qword ptr [0x014f0710]
/* 0e8b188c */  MOV qword ptr [RSP + 0x150],RBX
/* 0e8b1894 */  MOVUPS xmmword ptr [RSP + 0x170],XMM0
/* 0e8b189c */  MOV qword ptr [RSP + 0x180],0x0
/* 0e8b18a8 */  MOV word ptr [RSP + 0x188],0x0
/* 0e8b18b2 */  LEA RDI,[RSP + 0x410]
/* 0e8b18ba */  LEA RSI,[RSP + 0x390]
/* 0e8b18c2 */  LEA RDX,[RSP + 0x150]
/* 0e8b18ca */  CALL 0x0e8bb270
/* 0e8b18cf */  MOV RAX,qword ptr [RSP + 0x440]
/* 0e8b18d7 */  MOV qword ptr [RSP + 0x200],RAX
/* 0e8b18df */  MOVUPS XMM0,xmmword ptr [RSP + 0x410]
/* 0e8b18e7 */  MOVUPS XMM1,xmmword ptr [RSP + 0x420]
/* 0e8b18ef */  MOVUPS XMM2,xmmword ptr [RSP + 0x430]
/* 0e8b18f7 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM2
/* 0e8b18ff */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM1
/* 0e8b1907 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0e8b190f */  LEA RDX,[0x1376c53]
/* 0e8b1916 */  LEA RDI,[RSP + 0x70]
/* 0e8b191b */  LEA RSI,[RSP + 0x1d0]
/* 0e8b1923 */  MOV ECX,0x12
/* 0e8b1928 */  CALL 0x0e8bc0e0
/* 0e8b192d */  LEA RDI,[0xf5463b0]
/* 0e8b1934 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b193b */  MOV ESI,0x8
/* 0e8b1940 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1943 */  MOV R15,RAX
/* 0e8b1946 */  TEST RAX,RAX
/* 0e8b1949 */  JZ 0x0e8b5f5b
/* 0e8b194f */  LEA R14,[0xf4726f8]
/* 0e8b1956 */  MOV qword ptr [R15],R14
/* 0e8b1959 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b1961 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b1969 */  TEST RDI,RDI
/* 0e8b196c */  JZ 0x0e8b1974
/* 0e8b196e */  MOV RAX,qword ptr [RDI]
/* 0e8b1971 */  CALL qword ptr [RAX + 0x8]
/* 0e8b1974 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b1979 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b1980 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1984 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b198d */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b1995 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b199e */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b19a7 */  LEA R12,[0xdb8dd10]
/* 0e8b19ae */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b19b3 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b19b8 */  LEA RBP,[0xd4858f0]
/* 0e8b19bf */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b19c4 */  LEA RAX,[0xe8bc770]
/* 0e8b19cb */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b19d0 */  LEA RAX,[0xe8bc970]
/* 0e8b19d7 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b19dc */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b19e4 */  XORPS XMM0,XMM0
/* 0e8b19e7 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b19ec */  LEA RSI,[RSP + 0x8]
/* 0e8b19f1 */  CALL 0x048b05a0
/* 0e8b19f6 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b19fb */  TEST R15,R15
/* 0e8b19fe */  JZ 0x0e8b1a23
/* 0e8b1a00 */  MOV RAX,-0x1
/* 0e8b1a07 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b1a0d */  TEST RAX,RAX
/* 0e8b1a10 */  JNZ 0x0e8b1a23
/* 0e8b1a12 */  MOV RAX,qword ptr [R15]
/* 0e8b1a15 */  MOV RDI,R15
/* 0e8b1a18 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1a1b */  MOV RDI,R15
/* 0e8b1a1e */  CALL 0x0412c2d0
/* 0e8b1a23 */  LEA RDI,[RSP + 0x70]
/* 0e8b1a28 */  CALL 0x0e8bc370
/* 0e8b1a2d */  LEA RDI,[RSP + 0x88]
/* 0e8b1a35 */  MOVZX EAX,byte ptr [RSP + 0x200]
/* 0e8b1a3d */  MOV byte ptr [RSP + 0x2c0],AL
/* 0e8b1a44 */  MOVAPS XMM0,xmmword ptr [RSP + 0x1d0]
/* 0e8b1a4c */  MOVAPS XMM1,xmmword ptr [RSP + 0x1e0]
/* 0e8b1a54 */  MOVAPS XMM2,xmmword ptr [RSP + 0x1f0]
/* 0e8b1a5c */  MOVAPS xmmword ptr [RSP + 0x2b0],XMM2
/* 0e8b1a64 */  MOVAPS xmmword ptr [RSP + 0x2a0],XMM1
/* 0e8b1a6c */  MOVAPS xmmword ptr [RSP + 0x290],XMM0
/* 0e8b1a74 */  CALL 0x048b0bc0
/* 0e8b1a79 */  MOVAPS XMM0,xmmword ptr [RSP + 0x290]
/* 0e8b1a81 */  MOVAPS XMM1,xmmword ptr [RSP + 0x2a0]
/* 0e8b1a89 */  MOVAPS XMM2,xmmword ptr [RSP + 0x2b0]
/* 0e8b1a91 */  MOVAPS xmmword ptr [RSP + 0x310],XMM0
/* 0e8b1a99 */  MOVAPS xmmword ptr [RSP + 0x320],XMM1
/* 0e8b1aa1 */  MOVAPS xmmword ptr [RSP + 0x330],XMM2
/* 0e8b1aa9 */  MOV RAX,qword ptr [RSP + 0x2c0]
/* 0e8b1ab1 */  MOV qword ptr [RSP + 0x340],RAX
/* 0e8b1ab9 */  LEA RDX,[0x145f54d]
/* 0e8b1ac0 */  LEA RDI,[RSP + 0x70]
/* 0e8b1ac5 */  LEA RSI,[RSP + 0x310]
/* 0e8b1acd */  MOV ECX,0x13
/* 0e8b1ad2 */  CALL 0x0e8bc0e0
/* 0e8b1ad7 */  LEA RDI,[0xf5463b0]
/* 0e8b1ade */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b1ae5 */  MOV ESI,0x8
/* 0e8b1aea */  CALL qword ptr [RAX + 0x10]
/* 0e8b1aed */  MOV R15,RAX
/* 0e8b1af0 */  TEST RAX,RAX
/* 0e8b1af3 */  JZ 0x0e8b5f6c
/* 0e8b1af9 */  MOV qword ptr [R15],R14
/* 0e8b1afc */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b1b04 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b1b0c */  TEST RDI,RDI
/* 0e8b1b0f */  JZ 0x0e8b1b17
/* 0e8b1b11 */  MOV RAX,qword ptr [RDI]
/* 0e8b1b14 */  CALL qword ptr [RAX + 0x8]
/* 0e8b1b17 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b1b1c */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b1b23 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1b27 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b1b30 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b1b38 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b1b41 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b1b4a */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b1b4f */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b1b54 */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b1b59 */  LEA RAX,[0xe8bcb50]
/* 0e8b1b60 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b1b65 */  LEA RAX,[0xe8bcd60]
/* 0e8b1b6c */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b1b71 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b1b79 */  XORPS XMM0,XMM0
/* 0e8b1b7c */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b1b81 */  LEA RSI,[RSP + 0x8]
/* 0e8b1b86 */  CALL 0x048b05a0
/* 0e8b1b8b */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b1b90 */  TEST R15,R15
/* 0e8b1b93 */  JZ 0x0e8b1bb8
/* 0e8b1b95 */  MOV RAX,-0x1
/* 0e8b1b9c */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b1ba2 */  TEST RAX,RAX
/* 0e8b1ba5 */  JNZ 0x0e8b1bb8
/* 0e8b1ba7 */  MOV RAX,qword ptr [R15]
/* 0e8b1baa */  MOV RDI,R15
/* 0e8b1bad */  CALL qword ptr [RAX + 0x10]
/* 0e8b1bb0 */  MOV RDI,R15
/* 0e8b1bb3 */  CALL 0x0412c2d0
/* 0e8b1bb8 */  LEA RDI,[RSP + 0x70]
/* 0e8b1bbd */  CALL 0x0e8bc370
/* 0e8b1bc2 */  LEA RDI,[RSP + 0x88]
/* 0e8b1bca */  MOVZX EAX,byte ptr [RSP + 0x340]
/* 0e8b1bd2 */  MOV byte ptr [RSP + 0x300],AL
/* 0e8b1bd9 */  MOVAPS XMM0,xmmword ptr [RSP + 0x310]
/* 0e8b1be1 */  MOVAPS XMM1,xmmword ptr [RSP + 0x320]
/* 0e8b1be9 */  MOVAPS XMM2,xmmword ptr [RSP + 0x330]
/* 0e8b1bf1 */  MOVAPS xmmword ptr [RSP + 0x2f0],XMM2
/* 0e8b1bf9 */  MOVAPS xmmword ptr [RSP + 0x2e0],XMM1
/* 0e8b1c01 */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0e8b1c09 */  CALL 0x048b0bc0
/* 0e8b1c0e */  MOVAPS XMM0,xmmword ptr [RSP + 0x2d0]
/* 0e8b1c16 */  MOVAPS XMM1,xmmword ptr [RSP + 0x2e0]
/* 0e8b1c1e */  MOVAPS XMM2,xmmword ptr [RSP + 0x2f0]
/* 0e8b1c26 */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0e8b1c2e */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM1
/* 0e8b1c36 */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM2
/* 0e8b1c3e */  MOV RAX,qword ptr [RSP + 0x300]
/* 0e8b1c46 */  MOV qword ptr [RSP + 0x1c0],RAX
/* 0e8b1c4e */  LEA RDX,[0x119d142]
/* 0e8b1c55 */  LEA RDI,[RSP + 0x70]
/* 0e8b1c5a */  LEA RSI,[RSP + 0x190]
/* 0e8b1c62 */  MOV ECX,0xc
/* 0e8b1c67 */  CALL 0x0e8bc0e0
/* 0e8b1c6c */  LEA RDI,[0xf5463b0]
/* 0e8b1c73 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b1c7a */  MOV ESI,0x8
/* 0e8b1c7f */  CALL qword ptr [RAX + 0x10]
/* 0e8b1c82 */  MOV R15,RAX
/* 0e8b1c85 */  TEST RAX,RAX
/* 0e8b1c88 */  JZ 0x0e8b5f7d
/* 0e8b1c8e */  MOV qword ptr [R15],R14
/* 0e8b1c91 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b1c99 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b1ca1 */  TEST RDI,RDI
/* 0e8b1ca4 */  JZ 0x0e8b1cac
/* 0e8b1ca6 */  MOV RAX,qword ptr [RDI]
/* 0e8b1ca9 */  CALL qword ptr [RAX + 0x8]
/* 0e8b1cac */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b1cb1 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b1cb8 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1cbc */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b1cc5 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b1ccd */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b1cd6 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b1cdf */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b1ce4 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b1ce9 */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b1cee */  LEA RAX,[0xe8bcf40]
/* 0e8b1cf5 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b1cfa */  LEA RAX,[0xe8bd170]
/* 0e8b1d01 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b1d06 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b1d0e */  XORPS XMM0,XMM0
/* 0e8b1d11 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b1d16 */  LEA RSI,[RSP + 0x8]
/* 0e8b1d1b */  CALL 0x048b05a0
/* 0e8b1d20 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b1d25 */  TEST R15,R15
/* 0e8b1d28 */  JZ 0x0e8b1d4d
/* 0e8b1d2a */  MOV RAX,-0x1
/* 0e8b1d31 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b1d37 */  TEST RAX,RAX
/* 0e8b1d3a */  JNZ 0x0e8b1d4d
/* 0e8b1d3c */  MOV RAX,qword ptr [R15]
/* 0e8b1d3f */  MOV RDI,R15
/* 0e8b1d42 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1d45 */  MOV RDI,R15
/* 0e8b1d48 */  CALL 0x0412c2d0
/* 0e8b1d4d */  LEA RDI,[RSP + 0x70]
/* 0e8b1d52 */  CALL 0x0e8bc370
/* 0e8b1d57 */  LEA RDI,[RSP + 0x88]
/* 0e8b1d5f */  MOVZX EAX,byte ptr [RSP + 0x1c0]
/* 0e8b1d67 */  MOV byte ptr [RSP + 0x380],AL
/* 0e8b1d6e */  MOVAPS XMM0,xmmword ptr [RSP + 0x190]
/* 0e8b1d76 */  MOVAPS XMM1,xmmword ptr [RSP + 0x1a0]
/* 0e8b1d7e */  MOVAPS XMM2,xmmword ptr [RSP + 0x1b0]
/* 0e8b1d86 */  MOVAPS xmmword ptr [RSP + 0x370],XMM2
/* 0e8b1d8e */  MOVAPS xmmword ptr [RSP + 0x360],XMM1
/* 0e8b1d96 */  MOVAPS xmmword ptr [RSP + 0x350],XMM0
/* 0e8b1d9e */  CALL 0x048b0bc0
/* 0e8b1da3 */  MOVAPS XMM0,xmmword ptr [RSP + 0x350]
/* 0e8b1dab */  MOVAPS XMM1,xmmword ptr [RSP + 0x360]
/* 0e8b1db3 */  MOVAPS XMM2,xmmword ptr [RSP + 0x370]
/* 0e8b1dbb */  MOVAPS xmmword ptr [RSP + 0x3d0],XMM0
/* 0e8b1dc3 */  MOVAPS xmmword ptr [RSP + 0x3e0],XMM1
/* 0e8b1dcb */  MOVAPS xmmword ptr [RSP + 0x3f0],XMM2
/* 0e8b1dd3 */  MOV RAX,qword ptr [RSP + 0x380]
/* 0e8b1ddb */  MOV qword ptr [RSP + 0x400],RAX
/* 0e8b1de3 */  LEA RDX,[0x11ed174]
/* 0e8b1dea */  LEA RDI,[RSP + 0x70]
/* 0e8b1def */  LEA RSI,[RSP + 0x3d0]
/* 0e8b1df7 */  MOV ECX,0xc
/* 0e8b1dfc */  CALL 0x0e8bc0e0
/* 0e8b1e01 */  LEA RDI,[0xf5463b0]
/* 0e8b1e08 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b1e0f */  MOV ESI,0x8
/* 0e8b1e14 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1e17 */  MOV R15,RAX
/* 0e8b1e1a */  TEST RAX,RAX
/* 0e8b1e1d */  JZ 0x0e8b5f9f
/* 0e8b1e23 */  MOV qword ptr [R15],R14
/* 0e8b1e26 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b1e2e */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b1e36 */  TEST RDI,RDI
/* 0e8b1e39 */  JZ 0x0e8b1e41
/* 0e8b1e3b */  MOV RAX,qword ptr [RDI]
/* 0e8b1e3e */  CALL qword ptr [RAX + 0x8]
/* 0e8b1e41 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b1e46 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b1e4d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1e51 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b1e5a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b1e62 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b1e6b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b1e74 */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b1e79 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b1e7e */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b1e83 */  LEA RAX,[0xe8bd350]
/* 0e8b1e8a */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b1e8f */  LEA RAX,[0xe8bd580]
/* 0e8b1e96 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b1e9b */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b1ea3 */  XORPS XMM0,XMM0
/* 0e8b1ea6 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b1eab */  LEA RSI,[RSP + 0x8]
/* 0e8b1eb0 */  CALL 0x048b05a0
/* 0e8b1eb5 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b1eba */  TEST R15,R15
/* 0e8b1ebd */  JZ 0x0e8b1ee2
/* 0e8b1ebf */  MOV RAX,-0x1
/* 0e8b1ec6 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b1ecc */  TEST RAX,RAX
/* 0e8b1ecf */  JNZ 0x0e8b1ee2
/* 0e8b1ed1 */  MOV RAX,qword ptr [R15]
/* 0e8b1ed4 */  MOV RDI,R15
/* 0e8b1ed7 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1eda */  MOV RDI,R15
/* 0e8b1edd */  CALL 0x0412c2d0
/* 0e8b1ee2 */  LEA RDI,[RSP + 0x70]
/* 0e8b1ee7 */  CALL 0x0e8bc370
/* 0e8b1eec */  LEA RDI,[RSP + 0x88]
/* 0e8b1ef4 */  MOVZX EAX,byte ptr [RSP + 0x400]
/* 0e8b1efc */  MOV byte ptr [RSP + 0x240],AL
/* 0e8b1f03 */  MOVAPS XMM0,xmmword ptr [RSP + 0x3d0]
/* 0e8b1f0b */  MOVAPS XMM1,xmmword ptr [RSP + 0x3e0]
/* 0e8b1f13 */  MOVAPS XMM2,xmmword ptr [RSP + 0x3f0]
/* 0e8b1f1b */  MOVAPS xmmword ptr [RSP + 0x230],XMM2
/* 0e8b1f23 */  MOVAPS xmmword ptr [RSP + 0x220],XMM1
/* 0e8b1f2b */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e8b1f33 */  CALL 0x048b0bc0
/* 0e8b1f38 */  MOVAPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e8b1f40 */  MOVAPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e8b1f48 */  MOVAPS XMM2,xmmword ptr [RSP + 0x230]
/* 0e8b1f50 */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 0e8b1f58 */  MOVAPS xmmword ptr [RSP + 0x260],XMM1
/* 0e8b1f60 */  MOVAPS xmmword ptr [RSP + 0x270],XMM2
/* 0e8b1f68 */  MOV RAX,qword ptr [RSP + 0x240]
/* 0e8b1f70 */  MOV qword ptr [RSP + 0x280],RAX
/* 0e8b1f78 */  LEA RDX,[0x1412f53]
/* 0e8b1f7f */  LEA RDI,[RSP + 0x70]
/* 0e8b1f84 */  LEA RSI,[RSP + 0x250]
/* 0e8b1f8c */  MOV ECX,0xc
/* 0e8b1f91 */  CALL 0x0e8bc0e0
/* 0e8b1f96 */  LEA RDI,[0xf5463b0]
/* 0e8b1f9d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b1fa4 */  MOV ESI,0x8
/* 0e8b1fa9 */  CALL qword ptr [RAX + 0x10]
/* 0e8b1fac */  MOV R15,RAX
/* 0e8b1faf */  TEST RAX,RAX
/* 0e8b1fb2 */  JZ 0x0e8b5fc1
/* 0e8b1fb8 */  MOV qword ptr [R15],R14
/* 0e8b1fbb */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b1fc3 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b1fcb */  TEST RDI,RDI
/* 0e8b1fce */  JZ 0x0e8b1fd6
/* 0e8b1fd0 */  MOV RAX,qword ptr [RDI]
/* 0e8b1fd3 */  CALL qword ptr [RAX + 0x8]
/* 0e8b1fd6 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b1fdb */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b1fe2 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b1fe6 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b1fef */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b1ff7 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b2000 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b2009 */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b200e */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b2013 */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b2018 */  LEA RAX,[0xe8bd760]
/* 0e8b201f */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b2024 */  LEA RAX,[0xe8bd990]
/* 0e8b202b */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b2030 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b2038 */  XORPS XMM0,XMM0
/* 0e8b203b */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b2040 */  LEA RSI,[RSP + 0x8]
/* 0e8b2045 */  CALL 0x048b05a0
/* 0e8b204a */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b204f */  TEST R15,R15
/* 0e8b2052 */  JZ 0x0e8b2077
/* 0e8b2054 */  MOV RAX,-0x1
/* 0e8b205b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b2061 */  TEST RAX,RAX
/* 0e8b2064 */  JNZ 0x0e8b2077
/* 0e8b2066 */  MOV RAX,qword ptr [R15]
/* 0e8b2069 */  MOV RDI,R15
/* 0e8b206c */  CALL qword ptr [RAX + 0x10]
/* 0e8b206f */  MOV RDI,R15
/* 0e8b2072 */  CALL 0x0412c2d0
/* 0e8b2077 */  LEA RDI,[RSP + 0x70]
/* 0e8b207c */  CALL 0x0e8bc370
/* 0e8b2081 */  LEA RDI,[RSP + 0x88]
/* 0e8b2089 */  CALL 0x048b0bc0
/* 0e8b208e */  LEA RDX,[0x14ecd00]
/* 0e8b2095 */  LEA RDI,[RSP + 0x70]
/* 0e8b209a */  LEA RSI,[RSP + 0x450]
/* 0e8b20a2 */  MOV ECX,0x20
/* 0e8b20a7 */  CALL 0x0e8bc0e0
/* 0e8b20ac */  LEA RDI,[0xf5463b0]
/* 0e8b20b3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b20ba */  MOV ESI,0x8
/* 0e8b20bf */  CALL qword ptr [RAX + 0x10]
/* 0e8b20c2 */  MOV R15,RAX
/* 0e8b20c5 */  TEST RAX,RAX
/* 0e8b20c8 */  JZ 0x0e8b5fd2
/* 0e8b20ce */  LEA RAX,[0xef46ce8]
/* 0e8b20d5 */  MOV qword ptr [R15],RAX
/* 0e8b20d8 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b20e0 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b20e8 */  TEST RDI,RDI
/* 0e8b20eb */  JZ 0x0e8b20f3
/* 0e8b20ed */  MOV RAX,qword ptr [RDI]
/* 0e8b20f0 */  CALL qword ptr [RAX + 0x8]
/* 0e8b20f3 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b20f8 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b20ff */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b2103 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b210c */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b2114 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b211d */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b2126 */  LEA RAX,[0x490ce30]
/* 0e8b212d */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b2132 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b2137 */  LEA RAX,[0x490cb20]
/* 0e8b213e */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b2143 */  LEA RAX,[0xe8bdb70]
/* 0e8b214a */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b214f */  LEA RAX,[0xe8bdcd0]
/* 0e8b2156 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b215b */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b2163 */  XORPS XMM0,XMM0
/* 0e8b2166 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b216b */  LEA RSI,[RSP + 0x8]
/* 0e8b2170 */  CALL 0x048b05a0
/* 0e8b2175 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b217a */  TEST R15,R15
/* 0e8b217d */  JZ 0x0e8b21a2
/* 0e8b217f */  MOV RAX,-0x1
/* 0e8b2186 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b218c */  TEST RAX,RAX
/* 0e8b218f */  JNZ 0x0e8b21a2
/* 0e8b2191 */  MOV RAX,qword ptr [R15]
/* 0e8b2194 */  MOV RDI,R15
/* 0e8b2197 */  CALL qword ptr [RAX + 0x10]
/* 0e8b219a */  MOV RDI,R15
/* 0e8b219d */  CALL 0x0412c2d0
/* 0e8b21a2 */  LEA RDI,[RSP + 0x70]
/* 0e8b21a7 */  CALL 0x0e8bc370
/* 0e8b21ac */  LEA RDI,[RSP + 0x88]
/* 0e8b21b4 */  MOVZX EAX,byte ptr [RSP + 0x480]
/* 0e8b21bc */  MOV byte ptr [RSP + 0x180],AL
/* 0e8b21c3 */  MOVUPS XMM0,xmmword ptr [RSP + 0x450]
/* 0e8b21cb */  MOVDQU XMM1,xmmword ptr [RSP + 0x460]
/* 0e8b21d4 */  MOVDQU XMM2,xmmword ptr [RSP + 0x470]
/* 0e8b21dd */  MOVDQA xmmword ptr [RSP + 0x170],XMM2
/* 0e8b21e6 */  MOVDQA xmmword ptr [RSP + 0x160],XMM1
/* 0e8b21ef */  MOVAPS xmmword ptr [RSP + 0x150],XMM0
/* 0e8b21f7 */  CALL 0x048b0bc0
/* 0e8b21fc */  MOV dword ptr [RSP + 0xaa],0x0
/* 0e8b2207 */  MOV word ptr [RSP + 0xae],0x0
/* 0e8b2211 */  MOV qword ptr [RSP + 0x78],-0x1
/* 0e8b221a */  MOV qword ptr [RSP + 0x80],0x0
/* 0e8b2226 */  MOV byte ptr [RSP + 0x88],0xff
/* 0e8b222e */  XORPS XMM0,XMM0
/* 0e8b2231 */  MOVHPS XMM0,qword ptr [0x014f0710]
/* 0e8b2238 */  MOV qword ptr [RSP + 0x70],RBX
/* 0e8b223d */  MOVUPS xmmword ptr [RSP + 0x90],XMM0
/* 0e8b2245 */  MOV qword ptr [RSP + 0xa0],0x0
/* 0e8b2251 */  MOV word ptr [RSP + 0xa8],0x0
/* 0e8b225b */  LEA RDI,[RSP + 0x8]
/* 0e8b2260 */  LEA RSI,[RSP + 0x150]
/* 0e8b2268 */  LEA RDX,[RSP + 0x70]
/* 0e8b226d */  CALL 0x0e8bb270
/* 0e8b2272 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b227a */  CALL 0x0db80350
/* 0e8b227f */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b2286 */  JNZ 0x0e8b22e9
/* 0e8b2288 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e8b228c */  TEST RAX,RAX
/* 0e8b228f */  JZ 0x0e8b22e9
/* 0e8b2291 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e8b2295 */  LEA RDX,[RAX + 0x9]
/* 0e8b2299 */  MOV ECX,ESI
/* 0e8b229b */  SHR ECX,0x1
/* 0e8b229d */  TEST SIL,0x1
/* 0e8b22a1 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e8b22a6 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e8b22ab */  LEA RDI,[RSP + 0x390]
/* 0e8b22b3 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8b22bb */  CALL 0x0e8bdeb0
/* 0e8b22c0 */  CMP byte ptr [RSP + 0x3c0],0x0
/* 0e8b22c8 */  JZ 0x0e8b2314
/* 0e8b22ca */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b22d2 */  CALL 0x0db80270
/* 0e8b22d7 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b22de */  JZ 0x0e8b3b01
/* 0e8b22e4 */  JMP 0x0e8b3b62
/* 0e8b22e9 */  LEA RDX,[0x130a8d3]
/* 0e8b22f0 */  LEA RDI,[RSP + 0x390]
/* 0e8b22f8 */  MOV ECX,0xe
/* 0e8b22fd */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8b2305 */  CALL 0x0e8bdeb0
/* 0e8b230a */  CMP byte ptr [RSP + 0x3c0],0x0
/* 0e8b2312 */  JNZ 0x0e8b22ca
/* 0e8b2314 */  MOV R15,qword ptr [RSP + 0x390]
/* 0e8b231c */  ADD R15,0x18
/* 0e8b2320 */  MOV RDI,R15
/* 0e8b2323 */  CALL 0x0db80350
/* 0e8b2328 */  MOV RDX,qword ptr [RSP + 0x390]
/* 0e8b2330 */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e8b2334 */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e8b2338 */  CMP RCX,RDX
/* 0e8b233b */  JZ 0x0e8b23f6
/* 0e8b2341 */  MOV RSI,0x3a6c61657265635b
/* 0e8b234b */  MOVQ XMM0,RSI
/* 0e8b2350 */  MOV RSI,0x746e656d75636f64
/* 0e8b235a */  MOVQ XMM1,RSI
/* 0e8b235f */  PUNPCKLQDQ XMM0,XMM1
/* 0e8b2363 */  MOV RSI,0x7461746e656d7563
/* 0e8b236d */  MOVQ XMM1,RSI
/* 0e8b2372 */  MOV RSI,0x5d6761745f6e6f69
/* 0e8b237c */  MOVQ XMM2,RSI
/* 0e8b2381 */  PUNPCKLQDQ XMM1,XMM2
/* 0e8b2385 */  JMP 0x0e8b23be
/* 0e8b2390 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e8b2394 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e8b2398 */  PCMPEQB XMM2,XMM0
/* 0e8b239c */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e8b23a1 */  PCMPEQB XMM3,XMM1
/* 0e8b23a5 */  PAND XMM3,XMM2
/* 0e8b23a9 */  PMOVMSKB ESI,XMM3
/* 0e8b23ad */  CMP ESI,0xffff
/* 0e8b23b3 */  JZ 0x0e8b23f6
/* 0e8b23b5 */  ADD RCX,0x38
/* 0e8b23b9 */  CMP RCX,RDX
/* 0e8b23bc */  JZ 0x0e8b23f6
/* 0e8b23be */  MOVZX ESI,byte ptr [RCX]
/* 0e8b23c1 */  TEST SIL,0x1
/* 0e8b23c5 */  JZ 0x0e8b23e0
/* 0e8b23c7 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e8b23cb */  CMP RDI,0x1a
/* 0e8b23cf */  JNZ 0x0e8b23b5
/* 0e8b23d1 */  JMP 0x0e8b23ea
/* 0e8b23e0 */  MOV EDI,ESI
/* 0e8b23e2 */  SHR EDI,0x1
/* 0e8b23e4 */  CMP RDI,0x1a
/* 0e8b23e8 */  JNZ 0x0e8b23b5
/* 0e8b23ea */  TEST SIL,0x1
/* 0e8b23ee */  JNZ 0x0e8b2390
/* 0e8b23f0 */  LEA RSI,[RCX + 0x1]
/* 0e8b23f4 */  JMP 0x0e8b2394
/* 0e8b23f6 */  CMP RCX,RDX
/* 0e8b23f9 */  JZ 0x0e8b2419
/* 0e8b23fb */  MOV EBX,dword ptr [RCX + 0x1c]
/* 0e8b23fe */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e8b2405 */  TEST CL,CL
/* 0e8b2407 */  JZ 0x0e8b640e
/* 0e8b240d */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e8b2413 */  JNZ 0x0e8b26a8
/* 0e8b2419 */  CMP dword ptr [RSP + 0x3b8],0x0
/* 0e8b2421 */  JZ 0x0e8b2475
/* 0e8b2423 */  MOV EDX,dword ptr [RSP + 0x3bc]
/* 0e8b242a */  MOV RDI,R15
/* 0e8b242d */  MOV RSI,RAX
/* 0e8b2430 */  MOV ECX,0x1
/* 0e8b2435 */  CALL 0x048b0c90
/* 0e8b243a */  TEST RAX,RAX
/* 0e8b243d */  JNZ 0x0e8b245d
/* 0e8b243f */  PXOR XMM0,XMM0
/* 0e8b2443 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b2449 */  LEA RDI,[RSP + 0x70]
/* 0e8b244e */  CALL 0x048b0d20
/* 0e8b2453 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b2458 */  TEST RAX,RAX
/* 0e8b245b */  JZ 0x0e8b248d
/* 0e8b245d */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e8b2464 */  JNZ 0x0e8b248d
/* 0e8b2466 */  MOV R15,qword ptr [RAX + 0x58]
/* 0e8b246a */  TEST R15,R15
/* 0e8b246d */  JZ 0x0e8b248d
/* 0e8b246f */  ADD R15,0x40
/* 0e8b2473 */  JMP 0x0e8b2490
/* 0e8b2475 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b247c */  JNZ 0x0e8b248d
/* 0e8b247e */  MOV R15,qword ptr [RAX + 0x68]
/* 0e8b2482 */  TEST R15,R15
/* 0e8b2485 */  JZ 0x0e8b248d
/* 0e8b2487 */  ADD R15,0x38
/* 0e8b248b */  JMP 0x0e8b2490
/* 0e8b248d */  XOR R15D,R15D
/* 0e8b2490 */  LEA RAX,[0x488e0b0]
/* 0e8b2497 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e8b249c */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e8b24a4 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e8b24ad */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e8b24b2 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e8b24bb */  PXOR XMM0,XMM0
/* 0e8b24bf */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b24c5 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e8b24cd */  MOV qword ptr [RSP + 0x90],0x0
/* 0e8b24d9 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e8b24e4 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e8b24ec */  LEA RDI,[0xf5463b0]
/* 0e8b24f3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b24fa */  MOV ESI,0x20
/* 0e8b24ff */  CALL qword ptr [RAX + 0x10]
/* 0e8b2502 */  MOV R12,RAX
/* 0e8b2505 */  TEST RAX,RAX
/* 0e8b2508 */  JZ 0x0e8b619d
/* 0e8b250e */  MOV qword ptr [RSP + 0x160],R12
/* 0e8b2516 */  MOV qword ptr [RSP + 0x150],0x21
/* 0e8b2522 */  MOV qword ptr [RSP + 0x158],0x1a
/* 0e8b252e */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e8b2535 */  MOVUPS xmmword ptr [R12 + 0xa],XMM0
/* 0e8b253b */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e8b2543 */  MOVDQU xmmword ptr [R12],XMM0
/* 0e8b2549 */  MOV byte ptr [R12 + 0x1a],0x0
/* 0e8b254f */  LEA RSI,[RSP + 0x150]
/* 0e8b2557 */  MOV RDI,R15
/* 0e8b255a */  CALL 0x048b5060
/* 0e8b255f */  MOV R12,RAX
/* 0e8b2562 */  LEA R15,[RSP + 0x78]
/* 0e8b2567 */  ADD RAX,0x20
/* 0e8b256b */  MOV qword ptr [R12 + 0x20],0x0
/* 0e8b2574 */  LEA RCX,[RSP + 0x70]
/* 0e8b2579 */  CMP RAX,RCX
/* 0e8b257c */  JZ 0x0e8b25c1
/* 0e8b257e */  MOV RAX,qword ptr [R12 + 0x40]
/* 0e8b2583 */  TEST RAX,RAX
/* 0e8b2586 */  JZ 0x0e8b2631
/* 0e8b258c */  MOV R13,R12
/* 0e8b258f */  ADD R13,0x28
/* 0e8b2593 */  MOV RDI,R13
/* 0e8b2596 */  CALL RAX
/* 0e8b2598 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e8b25a0 */  TEST EAX,EAX
/* 0e8b25a2 */  JZ 0x0e8b2631
/* 0e8b25a8 */  CMP EAX,0x2
/* 0e8b25ab */  JNZ 0x0e8b261f
/* 0e8b25ad */  MOV EDI,0x5
/* 0e8b25b2 */  MOV RSI,R15
/* 0e8b25b5 */  MOV RDX,R13
/* 0e8b25b8 */  CALL qword ptr [RSP + 0x88]
/* 0e8b25bf */  JMP 0x0e8b2631
/* 0e8b25c1 */  XOR EAX,EAX
/* 0e8b25c3 */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b25cb */  JNZ 0x0e8b266c
/* 0e8b25d1 */  JMP 0x0e8b268d
/* 0e8b25d6 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b25db */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b25df */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b25e3 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e8b25e7 */  CMP dword ptr [RAX],ECX
/* 0e8b25e9 */  JZ 0x0e8b25ff
/* 0e8b25eb */  ADD RAX,0x58
/* 0e8b25ef */  NOP
/* 0e8b25f0 */  MOV RDX,RAX
/* 0e8b25f3 */  ADD RAX,0x58
/* 0e8b25f7 */  CMP dword ptr [RDX],ECX
/* 0e8b25f9 */  JNZ 0x0e8b25f0
/* 0e8b25fb */  ADD RAX,-0x58
/* 0e8b25ff */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e8b2604 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b2608 */  JZ 0x0e8b164f
/* 0e8b260e */  NOP
/* 0e8b2610 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e8b2614 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b2618 */  JNZ 0x0e8b2610
/* 0e8b261a */  JMP 0x0e8b164f
/* 0e8b261f */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e8b2624 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e8b262d */  MOV qword ptr [R13],RAX
/* 0e8b2631 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b2639 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e8b2642 */  MOVDQU xmmword ptr [R12 + 0x38],XMM0
/* 0e8b2649 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e8b2650 */  MOV dword ptr [R12 + 0x48],ECX
/* 0e8b2655 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e8b265d */  MOV byte ptr [R12 + 0x4c],CL
/* 0e8b2662 */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b266a */  JZ 0x0e8b268d
/* 0e8b266c */  MOV RSI,qword ptr [RSP + 0x150]
/* 0e8b2674 */  MOV RDI,qword ptr [RSP + 0x160]
/* 0e8b267c */  AND RSI,-0x2
/* 0e8b2680 */  CALL 0x0412a280
/* 0e8b2685 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b268d */  TEST RAX,RAX
/* 0e8b2690 */  JZ 0x0e8b2697
/* 0e8b2692 */  MOV RDI,R15
/* 0e8b2695 */  CALL RAX
/* 0e8b2697 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e8b269c */  TEST RAX,RAX
/* 0e8b269f */  JZ 0x0e8b26a8
/* 0e8b26a1 */  LEA RDI,[RSP + 0x8]
/* 0e8b26a6 */  CALL RAX
/* 0e8b26a8 */  MOV RAX,0x5127f14d00000002
/* 0e8b26b2 */  MOV qword ptr [RSP + 0x3b8],RAX
/* 0e8b26ba */  LEA RDI,[RSP + 0xb0]
/* 0e8b26c2 */  PXOR XMM0,XMM0
/* 0e8b26c6 */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e8b26cf */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e8b26d8 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e8b26e1 */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e8b26ea */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e8b26f3 */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e8b26fc */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b2702 */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e8b270d */  MOV ESI,0x8
/* 0e8b2712 */  CALL 0x048afb10
/* 0e8b2717 */  PXOR XMM0,XMM0
/* 0e8b271b */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e8b2724 */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e8b272d */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e8b2736 */  MOV word ptr [RSP + 0x118],0xff00
/* 0e8b2740 */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e8b2748 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e8b2750 */  MOV byte ptr [RSP + 0x124],0x0
/* 0e8b2758 */  LEA RDI,[0xf5463b0]
/* 0e8b275f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b2766 */  MOV ESI,0x8
/* 0e8b276b */  CALL qword ptr [RAX + 0x10]
/* 0e8b276e */  MOV R15,RAX
/* 0e8b2771 */  TEST RAX,RAX
/* 0e8b2774 */  JZ 0x0e8b5f8e
/* 0e8b277a */  LEA RAX,[0xf497e98]
/* 0e8b2781 */  MOV qword ptr [R15],RAX
/* 0e8b2784 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e8b2789 */  MOV qword ptr [RSP + 0x70],R15
/* 0e8b278e */  TEST RDI,RDI
/* 0e8b2791 */  JZ 0x0e8b2799
/* 0e8b2793 */  MOV RAX,qword ptr [RDI]
/* 0e8b2796 */  CALL qword ptr [RAX + 0x8]
/* 0e8b2799 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e8b27a1 */  JZ 0x0e8b27bc
/* 0e8b27a3 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e8b27ab */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e8b27b3 */  AND RSI,-0x2
/* 0e8b27b7 */  CALL 0x0412a280
/* 0e8b27bc */  MOV byte ptr [RSP + 0x98],0x8
/* 0e8b27c4 */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e8b27cf */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e8b27d7 */  MOVZX EAX,byte ptr [0x0f737610]
/* 0e8b27de */  TEST AL,AL
/* 0e8b27e0 */  JZ 0x0e8b62c7
/* 0e8b27e6 */  LEA R15,[RSP + 0x398]
/* 0e8b27ee */  MOV EAX,dword ptr [RSP + 0x3bc]
/* 0e8b27f5 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b27f9 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b2802 */  MOV dword ptr [RSP + 0x18],0x3
/* 0e8b280a */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b2813 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b281c */  LEA RAX,[0xdb65ce0]
/* 0e8b2823 */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b2828 */  LEA RBX,[0x48b06d0]
/* 0e8b282f */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8b2834 */  LEA RAX,[0xdb61aa0]
/* 0e8b283b */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b2840 */  LEA RAX,[0xe8beae0]
/* 0e8b2847 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b284c */  LEA RAX,[0xe8beaf0]
/* 0e8b2853 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b2858 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b2860 */  PXOR XMM0,XMM0
/* 0e8b2864 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8b286a */  LEA RSI,[RSP + 0x8]
/* 0e8b286f */  MOV RDI,R15
/* 0e8b2872 */  CALL 0x048b05a0
/* 0e8b2877 */  MOV R12,qword ptr [RSP + 0x68]
/* 0e8b287c */  TEST R12,R12
/* 0e8b287f */  JZ 0x0e8b28a6
/* 0e8b2881 */  MOV RAX,-0x1
/* 0e8b2888 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e8b288f */  TEST RAX,RAX
/* 0e8b2892 */  JNZ 0x0e8b28a6
/* 0e8b2894 */  MOV RAX,qword ptr [R12]
/* 0e8b2898 */  MOV RDI,R12
/* 0e8b289b */  CALL qword ptr [RAX + 0x10]
/* 0e8b289e */  MOV RDI,R12
/* 0e8b28a1 */  CALL 0x0412c2d0
/* 0e8b28a6 */  MOVDQU XMM0,xmmword ptr [R15]
/* 0e8b28ab */  MOVDQU XMM1,xmmword ptr [R15 + 0x10]
/* 0e8b28b1 */  MOVDQA xmmword ptr [RSP + 0x160],XMM1
/* 0e8b28ba */  MOVDQA xmmword ptr [RSP + 0x150],XMM0
/* 0e8b28c3 */  LEA RDI,[RSP + 0x8]
/* 0e8b28c8 */  LEA RSI,[RSP + 0x150]
/* 0e8b28d0 */  LEA RDX,[RSP + 0x70]
/* 0e8b28d5 */  CALL 0x0e8be870
/* 0e8b28da */  MOV EAX,dword ptr [RSP + 0x24]
/* 0e8b28de */  CMP EAX,0x2
/* 0e8b28e1 */  JZ 0x0e8b2bda
/* 0e8b28e7 */  CMP EAX,0x1
/* 0e8b28ea */  JZ 0x0e8b28fe
/* 0e8b28ec */  TEST EAX,EAX
/* 0e8b28ee */  JNZ 0x0e8b2933
/* 0e8b28f0 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b28f5 */  OR dword ptr [RAX + 0x18],0x90000
/* 0e8b28fc */  JMP 0x0e8b2933
/* 0e8b28fe */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b2903 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b2907 */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b290b */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e8b290f */  CMP dword ptr [RAX],ECX
/* 0e8b2911 */  JZ 0x0e8b292f
/* 0e8b2913 */  ADD RAX,0x68
/* 0e8b2917 */  NOP word ptr [RAX + RAX*0x1]
/* 0e8b2920 */  MOV RDX,RAX
/* 0e8b2923 */  ADD RAX,0x68
/* 0e8b2927 */  CMP dword ptr [RDX],ECX
/* 0e8b2929 */  JNZ 0x0e8b2920
/* 0e8b292b */  ADD RAX,-0x68
/* 0e8b292f */  OR byte ptr [RAX + 0x12],0x9
/* 0e8b2933 */  MOVUPS XMM0,xmmword ptr [RSP + 0x390]
/* 0e8b293b */  MOVUPS XMM1,xmmword ptr [RSP + 0x3a0]
/* 0e8b2943 */  MOVUPS XMM2,xmmword ptr [RSP + 0x3b0]
/* 0e8b294b */  MOVAPS xmmword ptr [RSP + 0x410],XMM0
/* 0e8b2953 */  MOVAPS xmmword ptr [RSP + 0x420],XMM1
/* 0e8b295b */  MOVAPS xmmword ptr [RSP + 0x430],XMM2
/* 0e8b2963 */  MOVZX EAX,byte ptr [RSP + 0x3c0]
/* 0e8b296b */  MOV byte ptr [RSP + 0x440],AL
/* 0e8b2972 */  LEA RDI,[RSP + 0x70]
/* 0e8b2977 */  CALL 0x048b0bc0
/* 0e8b297c */  MOVAPS XMM0,xmmword ptr [RSP + 0x410]
/* 0e8b2984 */  MOVAPS XMM1,xmmword ptr [RSP + 0x420]
/* 0e8b298c */  MOVAPS XMM2,xmmword ptr [RSP + 0x430]
/* 0e8b2994 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0e8b299c */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM1
/* 0e8b29a4 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM2
/* 0e8b29ac */  MOV RAX,qword ptr [RSP + 0x440]
/* 0e8b29b4 */  MOV qword ptr [RSP + 0x200],RAX
/* 0e8b29bc */  LEA RDX,[0x126cda9]
/* 0e8b29c3 */  LEA RDI,[RSP + 0x70]
/* 0e8b29c8 */  LEA RSI,[RSP + 0x1d0]
/* 0e8b29d0 */  MOV ECX,0xf
/* 0e8b29d5 */  CALL 0x0e8beb40
/* 0e8b29da */  LEA RDI,[0xf5463b0]
/* 0e8b29e1 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b29e8 */  MOV ESI,0x8
/* 0e8b29ed */  CALL qword ptr [RAX + 0x10]
/* 0e8b29f0 */  MOV R15,RAX
/* 0e8b29f3 */  TEST RAX,RAX
/* 0e8b29f6 */  JZ 0x0e8b5fb0
/* 0e8b29fc */  LEA RAX,[0xef46ce8]
/* 0e8b2a03 */  MOV qword ptr [R15],RAX
/* 0e8b2a06 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b2a0e */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b2a16 */  TEST RDI,RDI
/* 0e8b2a19 */  JZ 0x0e8b2a21
/* 0e8b2a1b */  MOV RAX,qword ptr [RDI]
/* 0e8b2a1e */  CALL qword ptr [RAX + 0x8]
/* 0e8b2a21 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b2a26 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b2a2d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b2a31 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b2a3a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b2a42 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b2a4b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b2a54 */  LEA RAX,[0x490ce30]
/* 0e8b2a5b */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b2a60 */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8b2a65 */  LEA RAX,[0x490cb20]
/* 0e8b2a6c */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b2a71 */  LEA RAX,[0xe8beea0]
/* 0e8b2a78 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b2a7d */  LEA RAX,[0xe8bf000]
/* 0e8b2a84 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b2a89 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b2a91 */  XORPS XMM0,XMM0
/* 0e8b2a94 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b2a99 */  LEA RSI,[RSP + 0x8]
/* 0e8b2a9e */  CALL 0x048b05a0
/* 0e8b2aa3 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b2aa8 */  TEST R15,R15
/* 0e8b2aab */  JZ 0x0e8b2ad0
/* 0e8b2aad */  MOV RAX,-0x1
/* 0e8b2ab4 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b2aba */  TEST RAX,RAX
/* 0e8b2abd */  JNZ 0x0e8b2ad0
/* 0e8b2abf */  MOV RAX,qword ptr [R15]
/* 0e8b2ac2 */  MOV RDI,R15
/* 0e8b2ac5 */  CALL qword ptr [RAX + 0x10]
/* 0e8b2ac8 */  MOV RDI,R15
/* 0e8b2acb */  CALL 0x0412c2d0
/* 0e8b2ad0 */  LEA RDI,[RSP + 0x70]
/* 0e8b2ad5 */  CALL 0x0e8bedd0
/* 0e8b2ada */  LEA RDI,[RSP + 0x88]
/* 0e8b2ae2 */  MOV R14,qword ptr [RSP + 0x1d0]
/* 0e8b2aea */  MOVUPS XMM0,xmmword ptr [RSP + 0x1d8]
/* 0e8b2af2 */  MOVAPS xmmword ptr [RSP + 0x490],XMM0
/* 0e8b2afa */  MOVUPS XMM0,xmmword ptr [RSP + 0x1e8]
/* 0e8b2b02 */  MOVAPS xmmword ptr [RSP + 0x4a0],XMM0
/* 0e8b2b0a */  MOV EBX,dword ptr [RSP + 0x1f8]
/* 0e8b2b11 */  MOV EBP,dword ptr [RSP + 0x1fc]
/* 0e8b2b18 */  MOVZX R13D,byte ptr [RSP + 0x200]
/* 0e8b2b21 */  CALL 0x048b0bc0
/* 0e8b2b26 */  CMP EBX,0x4
/* 0e8b2b29 */  JZ 0x0e8b2ba5
/* 0e8b2b2b */  CMP EBX,0x1
/* 0e8b2b2e */  JNZ 0x0e8b2d19
/* 0e8b2b34 */  LEA R15,[R14 + 0x18]
/* 0e8b2b38 */  MOV RDI,R15
/* 0e8b2b3b */  CALL 0x0db80350
/* 0e8b2b40 */  MOV RDI,R15
/* 0e8b2b43 */  MOV RSI,RAX
/* 0e8b2b46 */  MOV EDX,EBP
/* 0e8b2b48 */  MOV ECX,0x1
/* 0e8b2b4d */  CALL 0x048b0c90
/* 0e8b2b52 */  TEST RAX,RAX
/* 0e8b2b55 */  JNZ 0x0e8b2b6e
/* 0e8b2b57 */  XORPS XMM0,XMM0
/* 0e8b2b5a */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b2b5f */  LEA RDI,[RSP + 0x70]
/* 0e8b2b64 */  CALL 0x048b0d20
/* 0e8b2b69 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b2b6e */  MOV R12,qword ptr [RAX + 0x58]
/* 0e8b2b72 */  LEA RDI,[0xf5463b0]
/* 0e8b2b79 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b2b80 */  MOV ESI,0x40
/* 0e8b2b85 */  CALL qword ptr [RAX + 0x10]
/* 0e8b2b88 */  MOV R15,RAX
/* 0e8b2b8b */  TEST RAX,RAX
/* 0e8b2b8e */  JNZ 0x0e8b2cce
/* 0e8b2b94 */  MOV EDI,0x40
/* 0e8b2b99 */  XOR ESI,ESI
/* 0e8b2b9b */  CALL 0x0eec74c0
/* 0e8b2ba0 */  JMP 0x0e8b2cce
/* 0e8b2ba5 */  LEA R15,[R14 + 0x18]
/* 0e8b2ba9 */  MOV RDI,R15
/* 0e8b2bac */  CALL 0x0db80350
/* 0e8b2bb1 */  MOV RDI,R15
/* 0e8b2bb4 */  MOV RSI,RAX
/* 0e8b2bb7 */  MOV EDX,EBP
/* 0e8b2bb9 */  MOV ECX,0x1
/* 0e8b2bbe */  CALL 0x048b1040
/* 0e8b2bc3 */  MOV R15,RAX
/* 0e8b2bc6 */  TEST RAX,RAX
/* 0e8b2bc9 */  JZ 0x0e8b2c2f
/* 0e8b2bcb */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e8b2bcf */  TEST RAX,RAX
/* 0e8b2bd2 */  JNZ 0x0e8b2c6b
/* 0e8b2bd8 */  JMP 0x0e8b2c4f
/* 0e8b2bda */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b2bdf */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b2be3 */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b2be7 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e8b2beb */  CMP dword ptr [RAX],ECX
/* 0e8b2bed */  JZ 0x0e8b2c0f
/* 0e8b2bef */  ADD RAX,0x58
/* 0e8b2bf3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e8b2c00 */  MOV RDX,RAX
/* 0e8b2c03 */  ADD RAX,0x58
/* 0e8b2c07 */  CMP dword ptr [RDX],ECX
/* 0e8b2c09 */  JNZ 0x0e8b2c00
/* 0e8b2c0b */  ADD RAX,-0x58
/* 0e8b2c0f */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e8b2c14 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b2c18 */  JZ 0x0e8b292f
/* 0e8b2c1e */  NOP
/* 0e8b2c20 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e8b2c24 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b2c28 */  JNZ 0x0e8b2c20
/* 0e8b2c2a */  JMP 0x0e8b292f
/* 0e8b2c2f */  XORPS XMM0,XMM0
/* 0e8b2c32 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b2c37 */  LEA RDI,[RSP + 0x70]
/* 0e8b2c3c */  CALL 0x048b10d0
/* 0e8b2c41 */  MOV R15,qword ptr [RSP + 0x70]
/* 0e8b2c46 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e8b2c4a */  TEST RAX,RAX
/* 0e8b2c4d */  JNZ 0x0e8b2c6b
/* 0e8b2c4f */  XORPS XMM0,XMM0
/* 0e8b2c52 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b2c57 */  LEA RDI,[RSP + 0x70]
/* 0e8b2c5c */  CALL 0x048b10d0
/* 0e8b2c61 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b2c66 */  TEST RAX,RAX
/* 0e8b2c69 */  JZ 0x0e8b2ca8
/* 0e8b2c6b */  LEA R12,[RSP + 0x70]
/* 0e8b2c70 */  JMP 0x0e8b2c85
/* 0e8b2c80 */  TEST RAX,RAX
/* 0e8b2c83 */  JZ 0x0e8b2ca8
/* 0e8b2c85 */  MOV R15,RAX
/* 0e8b2c88 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e8b2c8c */  TEST RAX,RAX
/* 0e8b2c8f */  JNZ 0x0e8b2c80
/* 0e8b2c91 */  XORPS XMM0,XMM0
/* 0e8b2c94 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b2c99 */  MOV RDI,R12
/* 0e8b2c9c */  CALL 0x048b10d0
/* 0e8b2ca1 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b2ca6 */  JMP 0x0e8b2c80
/* 0e8b2ca8 */  MOV R12,qword ptr [R15 + 0x48]
/* 0e8b2cac */  LEA RDI,[0xf5463b0]
/* 0e8b2cb3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b2cba */  MOV ESI,0x40
/* 0e8b2cbf */  CALL qword ptr [RAX + 0x10]
/* 0e8b2cc2 */  MOV R15,RAX
/* 0e8b2cc5 */  TEST RAX,RAX
/* 0e8b2cc8 */  JZ 0x0e8b61d0
/* 0e8b2cce */  MOV qword ptr [R15 + 0x8],-0x1
/* 0e8b2cd6 */  MOV qword ptr [R15 + 0x10],0x0
/* 0e8b2cde */  MOV byte ptr [R15 + 0x18],0xff
/* 0e8b2ce3 */  LEA RAX,[0xf0edc68]
/* 0e8b2cea */  MOV qword ptr [R15],RAX
/* 0e8b2ced */  XORPS XMM0,XMM0
/* 0e8b2cf0 */  XORPS XMM1,XMM1
/* 0e8b2cf3 */  MOVHPS XMM1,qword ptr [0x014f0710]
/* 0e8b2cfa */  MOVUPS xmmword ptr [R15 + 0x20],XMM1
/* 0e8b2cff */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 0e8b2d04 */  MOV RDI,qword ptr [R12 + 0x8]
/* 0e8b2d09 */  MOV qword ptr [R12 + 0x8],R15
/* 0e8b2d0e */  TEST RDI,RDI
/* 0e8b2d11 */  JZ 0x0e8b2d19
/* 0e8b2d13 */  MOV RAX,qword ptr [RDI]
/* 0e8b2d16 */  CALL qword ptr [RAX + 0x28]
/* 0e8b2d19 */  MOVAPS XMM0,xmmword ptr [RSP + 0x490]
/* 0e8b2d21 */  MOVAPS XMM1,xmmword ptr [RSP + 0x4a0]
/* 0e8b2d29 */  MOVUPS xmmword ptr [RSP + 0x2a8],XMM1
/* 0e8b2d31 */  MOVUPS xmmword ptr [RSP + 0x298],XMM0
/* 0e8b2d39 */  MOV qword ptr [RSP + 0x290],R14
/* 0e8b2d41 */  MOV dword ptr [RSP + 0x2b8],EBX
/* 0e8b2d48 */  MOV dword ptr [RSP + 0x2bc],EBP
/* 0e8b2d4f */  MOV byte ptr [RSP + 0x2c0],R13B
/* 0e8b2d57 */  MOV EAX,dword ptr [RSP + 0x4d0]
/* 0e8b2d5e */  MOV ECX,dword ptr [RSP + 0x4d3]
/* 0e8b2d65 */  MOV dword ptr [RSP + 0x2c1],EAX
/* 0e8b2d6c */  MOV dword ptr [RSP + 0x2c4],ECX
/* 0e8b2d73 */  LEA RDX,[0x1376c53]
/* 0e8b2d7a */  LEA RDI,[RSP + 0x70]
/* 0e8b2d7f */  LEA RSI,[RSP + 0x290]
/* 0e8b2d87 */  MOV ECX,0x12
/* 0e8b2d8c */  CALL 0x0e8beb40
/* 0e8b2d91 */  LEA RDI,[0xf5463b0]
/* 0e8b2d98 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b2d9f */  MOV ESI,0x8
/* 0e8b2da4 */  CALL qword ptr [RAX + 0x10]
/* 0e8b2da7 */  LEA R13,[0x48b06d0]
/* 0e8b2dae */  MOV R15,RAX
/* 0e8b2db1 */  TEST RAX,RAX
/* 0e8b2db4 */  JZ 0x0e8b5fe3
/* 0e8b2dba */  LEA R12,[0xf4726f8]
/* 0e8b2dc1 */  MOV qword ptr [R15],R12
/* 0e8b2dc4 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b2dcc */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b2dd4 */  TEST RDI,RDI
/* 0e8b2dd7 */  JZ 0x0e8b2ddf
/* 0e8b2dd9 */  MOV RAX,qword ptr [RDI]
/* 0e8b2ddc */  CALL qword ptr [RAX + 0x8]
/* 0e8b2ddf */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b2de4 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b2deb */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b2def */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b2df8 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b2e00 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b2e09 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b2e12 */  LEA RBP,[0xdb8dd10]
/* 0e8b2e19 */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b2e1e */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b2e23 */  LEA R14,[0xd4858f0]
/* 0e8b2e2a */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b2e2f */  LEA RAX,[0xe8bf1d0]
/* 0e8b2e36 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b2e3b */  LEA RAX,[0xe8bf3d0]
/* 0e8b2e42 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b2e47 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b2e4f */  XORPS XMM0,XMM0
/* 0e8b2e52 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b2e57 */  LEA RSI,[RSP + 0x8]
/* 0e8b2e5c */  CALL 0x048b05a0
/* 0e8b2e61 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b2e66 */  TEST R15,R15
/* 0e8b2e69 */  JZ 0x0e8b2e8e
/* 0e8b2e6b */  MOV RAX,-0x1
/* 0e8b2e72 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b2e78 */  TEST RAX,RAX
/* 0e8b2e7b */  JNZ 0x0e8b2e8e
/* 0e8b2e7d */  MOV RAX,qword ptr [R15]
/* 0e8b2e80 */  MOV RDI,R15
/* 0e8b2e83 */  CALL qword ptr [RAX + 0x10]
/* 0e8b2e86 */  MOV RDI,R15
/* 0e8b2e89 */  CALL 0x0412c2d0
/* 0e8b2e8e */  LEA RDI,[RSP + 0x70]
/* 0e8b2e93 */  CALL 0x0e8bedd0
/* 0e8b2e98 */  LEA RDI,[RSP + 0x88]
/* 0e8b2ea0 */  MOVZX EAX,byte ptr [RSP + 0x2c0]
/* 0e8b2ea8 */  MOV byte ptr [RSP + 0x340],AL
/* 0e8b2eaf */  MOVUPS XMM0,xmmword ptr [RSP + 0x290]
/* 0e8b2eb7 */  MOVUPS XMM1,xmmword ptr [RSP + 0x2a0]
/* 0e8b2ebf */  MOVUPS XMM2,xmmword ptr [RSP + 0x2b0]
/* 0e8b2ec7 */  MOVAPS xmmword ptr [RSP + 0x330],XMM2
/* 0e8b2ecf */  MOVAPS xmmword ptr [RSP + 0x320],XMM1
/* 0e8b2ed7 */  MOVAPS xmmword ptr [RSP + 0x310],XMM0
/* 0e8b2edf */  CALL 0x048b0bc0
/* 0e8b2ee4 */  MOVAPS XMM0,xmmword ptr [RSP + 0x310]
/* 0e8b2eec */  MOVAPS XMM1,xmmword ptr [RSP + 0x320]
/* 0e8b2ef4 */  MOVAPS XMM2,xmmword ptr [RSP + 0x330]
/* 0e8b2efc */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0e8b2f04 */  MOVAPS xmmword ptr [RSP + 0x2e0],XMM1
/* 0e8b2f0c */  MOVAPS xmmword ptr [RSP + 0x2f0],XMM2
/* 0e8b2f14 */  MOV RAX,qword ptr [RSP + 0x340]
/* 0e8b2f1c */  MOV qword ptr [RSP + 0x300],RAX
/* 0e8b2f24 */  LEA RDX,[0x145f54d]
/* 0e8b2f2b */  LEA RDI,[RSP + 0x70]
/* 0e8b2f30 */  LEA RSI,[RSP + 0x2d0]
/* 0e8b2f38 */  MOV ECX,0x13
/* 0e8b2f3d */  CALL 0x0e8beb40
/* 0e8b2f42 */  LEA RDI,[0xf5463b0]
/* 0e8b2f49 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b2f50 */  MOV ESI,0x8
/* 0e8b2f55 */  CALL qword ptr [RAX + 0x10]
/* 0e8b2f58 */  MOV R15,RAX
/* 0e8b2f5b */  TEST RAX,RAX
/* 0e8b2f5e */  JZ 0x0e8b5ff4
/* 0e8b2f64 */  MOV qword ptr [R15],R12
/* 0e8b2f67 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b2f6f */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b2f77 */  TEST RDI,RDI
/* 0e8b2f7a */  JZ 0x0e8b2f82
/* 0e8b2f7c */  MOV RAX,qword ptr [RDI]
/* 0e8b2f7f */  CALL qword ptr [RAX + 0x8]
/* 0e8b2f82 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b2f87 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b2f8e */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b2f92 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b2f9b */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b2fa3 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b2fac */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b2fb5 */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b2fba */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b2fbf */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b2fc4 */  LEA RAX,[0xe8bf5b0]
/* 0e8b2fcb */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b2fd0 */  LEA RAX,[0xe8bf7c0]
/* 0e8b2fd7 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b2fdc */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b2fe4 */  XORPS XMM0,XMM0
/* 0e8b2fe7 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b2fec */  LEA RSI,[RSP + 0x8]
/* 0e8b2ff1 */  CALL 0x048b05a0
/* 0e8b2ff6 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b2ffb */  TEST R15,R15
/* 0e8b2ffe */  JZ 0x0e8b3023
/* 0e8b3000 */  MOV RAX,-0x1
/* 0e8b3007 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b300d */  TEST RAX,RAX
/* 0e8b3010 */  JNZ 0x0e8b3023
/* 0e8b3012 */  MOV RAX,qword ptr [R15]
/* 0e8b3015 */  MOV RDI,R15
/* 0e8b3018 */  CALL qword ptr [RAX + 0x10]
/* 0e8b301b */  MOV RDI,R15
/* 0e8b301e */  CALL 0x0412c2d0
/* 0e8b3023 */  LEA RDI,[RSP + 0x70]
/* 0e8b3028 */  CALL 0x0e8bedd0
/* 0e8b302d */  LEA RDI,[RSP + 0x88]
/* 0e8b3035 */  MOVZX EAX,byte ptr [RSP + 0x300]
/* 0e8b303d */  MOV byte ptr [RSP + 0x1c0],AL
/* 0e8b3044 */  MOVAPS XMM0,xmmword ptr [RSP + 0x2d0]
/* 0e8b304c */  MOVAPS XMM1,xmmword ptr [RSP + 0x2e0]
/* 0e8b3054 */  MOVAPS XMM2,xmmword ptr [RSP + 0x2f0]
/* 0e8b305c */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM2
/* 0e8b3064 */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM1
/* 0e8b306c */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0e8b3074 */  CALL 0x048b0bc0
/* 0e8b3079 */  MOVAPS XMM0,xmmword ptr [RSP + 0x190]
/* 0e8b3081 */  MOVAPS XMM1,xmmword ptr [RSP + 0x1a0]
/* 0e8b3089 */  MOVAPS XMM2,xmmword ptr [RSP + 0x1b0]
/* 0e8b3091 */  MOVAPS xmmword ptr [RSP + 0x350],XMM0
/* 0e8b3099 */  MOVAPS xmmword ptr [RSP + 0x360],XMM1
/* 0e8b30a1 */  MOVAPS xmmword ptr [RSP + 0x370],XMM2
/* 0e8b30a9 */  MOV RAX,qword ptr [RSP + 0x1c0]
/* 0e8b30b1 */  MOV qword ptr [RSP + 0x380],RAX
/* 0e8b30b9 */  LEA RDX,[0x119d142]
/* 0e8b30c0 */  LEA RDI,[RSP + 0x70]
/* 0e8b30c5 */  LEA RSI,[RSP + 0x350]
/* 0e8b30cd */  MOV ECX,0xc
/* 0e8b30d2 */  CALL 0x0e8beb40
/* 0e8b30d7 */  LEA RDI,[0xf5463b0]
/* 0e8b30de */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b30e5 */  MOV ESI,0x8
/* 0e8b30ea */  CALL qword ptr [RAX + 0x10]
/* 0e8b30ed */  MOV R15,RAX
/* 0e8b30f0 */  TEST RAX,RAX
/* 0e8b30f3 */  JZ 0x0e8b6005
/* 0e8b30f9 */  MOV qword ptr [R15],R12
/* 0e8b30fc */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b3104 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b310c */  TEST RDI,RDI
/* 0e8b310f */  JZ 0x0e8b3117
/* 0e8b3111 */  MOV RAX,qword ptr [RDI]
/* 0e8b3114 */  CALL qword ptr [RAX + 0x8]
/* 0e8b3117 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b311c */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b3123 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b3127 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b3130 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b3138 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b3141 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b314a */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b314f */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b3154 */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b3159 */  LEA RAX,[0xe8bf9a0]
/* 0e8b3160 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b3165 */  LEA RAX,[0xe8bfbd0]
/* 0e8b316c */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b3171 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b3179 */  XORPS XMM0,XMM0
/* 0e8b317c */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b3181 */  LEA RSI,[RSP + 0x8]
/* 0e8b3186 */  CALL 0x048b05a0
/* 0e8b318b */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b3190 */  TEST R15,R15
/* 0e8b3193 */  JZ 0x0e8b31b8
/* 0e8b3195 */  MOV RAX,-0x1
/* 0e8b319c */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b31a2 */  TEST RAX,RAX
/* 0e8b31a5 */  JNZ 0x0e8b31b8
/* 0e8b31a7 */  MOV RAX,qword ptr [R15]
/* 0e8b31aa */  MOV RDI,R15
/* 0e8b31ad */  CALL qword ptr [RAX + 0x10]
/* 0e8b31b0 */  MOV RDI,R15
/* 0e8b31b3 */  CALL 0x0412c2d0
/* 0e8b31b8 */  LEA RDI,[RSP + 0x70]
/* 0e8b31bd */  CALL 0x0e8bedd0
/* 0e8b31c2 */  LEA RDI,[RSP + 0x88]
/* 0e8b31ca */  MOVZX EAX,byte ptr [RSP + 0x380]
/* 0e8b31d2 */  MOV byte ptr [RSP + 0x400],AL
/* 0e8b31d9 */  MOVAPS XMM0,xmmword ptr [RSP + 0x350]
/* 0e8b31e1 */  MOVAPS XMM1,xmmword ptr [RSP + 0x360]
/* 0e8b31e9 */  MOVAPS XMM2,xmmword ptr [RSP + 0x370]
/* 0e8b31f1 */  MOVAPS xmmword ptr [RSP + 0x3f0],XMM2
/* 0e8b31f9 */  MOVAPS xmmword ptr [RSP + 0x3e0],XMM1
/* 0e8b3201 */  MOVAPS xmmword ptr [RSP + 0x3d0],XMM0
/* 0e8b3209 */  CALL 0x048b0bc0
/* 0e8b320e */  MOVAPS XMM0,xmmword ptr [RSP + 0x3d0]
/* 0e8b3216 */  MOVAPS XMM1,xmmword ptr [RSP + 0x3e0]
/* 0e8b321e */  MOVAPS XMM2,xmmword ptr [RSP + 0x3f0]
/* 0e8b3226 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e8b322e */  MOVAPS xmmword ptr [RSP + 0x220],XMM1
/* 0e8b3236 */  MOVAPS xmmword ptr [RSP + 0x230],XMM2
/* 0e8b323e */  MOV RAX,qword ptr [RSP + 0x400]
/* 0e8b3246 */  MOV qword ptr [RSP + 0x240],RAX
/* 0e8b324e */  LEA RDX,[0x11ed174]
/* 0e8b3255 */  LEA RDI,[RSP + 0x70]
/* 0e8b325a */  LEA RSI,[RSP + 0x210]
/* 0e8b3262 */  MOV ECX,0xc
/* 0e8b3267 */  CALL 0x0e8beb40
/* 0e8b326c */  LEA RDI,[0xf5463b0]
/* 0e8b3273 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b327a */  MOV ESI,0x8
/* 0e8b327f */  CALL qword ptr [RAX + 0x10]
/* 0e8b3282 */  MOV R15,RAX
/* 0e8b3285 */  TEST RAX,RAX
/* 0e8b3288 */  JZ 0x0e8b6016
/* 0e8b328e */  MOV qword ptr [R15],R12
/* 0e8b3291 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b3299 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b32a1 */  TEST RDI,RDI
/* 0e8b32a4 */  JZ 0x0e8b32ac
/* 0e8b32a6 */  MOV RAX,qword ptr [RDI]
/* 0e8b32a9 */  CALL qword ptr [RAX + 0x8]
/* 0e8b32ac */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b32b1 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b32b8 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b32bc */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b32c5 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b32cd */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b32d6 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b32df */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b32e4 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b32e9 */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b32ee */  LEA RAX,[0xe8bfdb0]
/* 0e8b32f5 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b32fa */  LEA RAX,[0xe8bffe0]
/* 0e8b3301 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b3306 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b330e */  XORPS XMM0,XMM0
/* 0e8b3311 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b3316 */  LEA RSI,[RSP + 0x8]
/* 0e8b331b */  CALL 0x048b05a0
/* 0e8b3320 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b3325 */  TEST R15,R15
/* 0e8b3328 */  JZ 0x0e8b334d
/* 0e8b332a */  MOV RAX,-0x1
/* 0e8b3331 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b3337 */  TEST RAX,RAX
/* 0e8b333a */  JNZ 0x0e8b334d
/* 0e8b333c */  MOV RAX,qword ptr [R15]
/* 0e8b333f */  MOV RDI,R15
/* 0e8b3342 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3345 */  MOV RDI,R15
/* 0e8b3348 */  CALL 0x0412c2d0
/* 0e8b334d */  LEA RDI,[RSP + 0x70]
/* 0e8b3352 */  CALL 0x0e8bedd0
/* 0e8b3357 */  LEA RDI,[RSP + 0x88]
/* 0e8b335f */  MOVZX EAX,byte ptr [RSP + 0x240]
/* 0e8b3367 */  MOV byte ptr [RSP + 0x280],AL
/* 0e8b336e */  MOVAPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e8b3376 */  MOVAPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e8b337e */  MOVAPS XMM2,xmmword ptr [RSP + 0x230]
/* 0e8b3386 */  MOVAPS xmmword ptr [RSP + 0x270],XMM2
/* 0e8b338e */  MOVAPS xmmword ptr [RSP + 0x260],XMM1
/* 0e8b3396 */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 0e8b339e */  CALL 0x048b0bc0
/* 0e8b33a3 */  MOVAPS XMM0,xmmword ptr [RSP + 0x250]
/* 0e8b33ab */  MOVAPS XMM1,xmmword ptr [RSP + 0x260]
/* 0e8b33b3 */  MOVAPS XMM2,xmmword ptr [RSP + 0x270]
/* 0e8b33bb */  MOVAPS xmmword ptr [RSP + 0x150],XMM0
/* 0e8b33c3 */  MOVAPS xmmword ptr [RSP + 0x160],XMM1
/* 0e8b33cb */  MOVAPS xmmword ptr [RSP + 0x170],XMM2
/* 0e8b33d3 */  MOV RAX,qword ptr [RSP + 0x280]
/* 0e8b33db */  MOV qword ptr [RSP + 0x180],RAX
/* 0e8b33e3 */  LEA RDX,[0x1412f53]
/* 0e8b33ea */  LEA RDI,[RSP + 0x70]
/* 0e8b33ef */  LEA RSI,[RSP + 0x150]
/* 0e8b33f7 */  MOV ECX,0xc
/* 0e8b33fc */  CALL 0x0e8beb40
/* 0e8b3401 */  LEA RDI,[0xf5463b0]
/* 0e8b3408 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b340f */  MOV ESI,0x8
/* 0e8b3414 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3417 */  MOV R15,RAX
/* 0e8b341a */  TEST RAX,RAX
/* 0e8b341d */  JZ 0x0e8b6038
/* 0e8b3423 */  MOV qword ptr [R15],R12
/* 0e8b3426 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b342e */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b3436 */  TEST RDI,RDI
/* 0e8b3439 */  JZ 0x0e8b3441
/* 0e8b343b */  MOV RAX,qword ptr [RDI]
/* 0e8b343e */  CALL qword ptr [RAX + 0x8]
/* 0e8b3441 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b3446 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b344d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b3451 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b345a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b3462 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b346b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b3474 */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b3479 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b347e */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b3483 */  LEA RAX,[0xe8c01c0]
/* 0e8b348a */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b348f */  LEA RAX,[0xe8c03f0]
/* 0e8b3496 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b349b */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b34a3 */  XORPS XMM0,XMM0
/* 0e8b34a6 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b34ab */  LEA RSI,[RSP + 0x8]
/* 0e8b34b0 */  CALL 0x048b05a0
/* 0e8b34b5 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b34ba */  TEST R15,R15
/* 0e8b34bd */  JZ 0x0e8b34e2
/* 0e8b34bf */  MOV RAX,-0x1
/* 0e8b34c6 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b34cc */  TEST RAX,RAX
/* 0e8b34cf */  JNZ 0x0e8b34e2
/* 0e8b34d1 */  MOV RAX,qword ptr [R15]
/* 0e8b34d4 */  MOV RDI,R15
/* 0e8b34d7 */  CALL qword ptr [RAX + 0x10]
/* 0e8b34da */  MOV RDI,R15
/* 0e8b34dd */  CALL 0x0412c2d0
/* 0e8b34e2 */  LEA RDI,[RSP + 0x70]
/* 0e8b34e7 */  CALL 0x0e8bedd0
/* 0e8b34ec */  LEA RDI,[RSP + 0x88]
/* 0e8b34f4 */  CALL 0x048b0bc0
/* 0e8b34f9 */  LEA RDX,[0x119d134]
/* 0e8b3500 */  LEA RDI,[RSP + 0x70]
/* 0e8b3505 */  LEA RSI,[RSP + 0x390]
/* 0e8b350d */  MOV ECX,0xd
/* 0e8b3512 */  CALL 0x0e8beb40
/* 0e8b3517 */  LEA RDI,[0xf5463b0]
/* 0e8b351e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b3525 */  MOV ESI,0x8
/* 0e8b352a */  CALL qword ptr [RAX + 0x10]
/* 0e8b352d */  MOV R15,RAX
/* 0e8b3530 */  TEST RAX,RAX
/* 0e8b3533 */  JZ 0x0e8b605a
/* 0e8b3539 */  MOV qword ptr [R15],R12
/* 0e8b353c */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b3544 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b354c */  TEST RDI,RDI
/* 0e8b354f */  JZ 0x0e8b3557
/* 0e8b3551 */  MOV RAX,qword ptr [RDI]
/* 0e8b3554 */  CALL qword ptr [RAX + 0x8]
/* 0e8b3557 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b355c */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b3563 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b3567 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b3570 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b3578 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b3581 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b358a */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b358f */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b3594 */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b3599 */  LEA RAX,[0xe8c05d0]
/* 0e8b35a0 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b35a5 */  LEA RAX,[0xe8c0800]
/* 0e8b35ac */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b35b1 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b35b9 */  XORPS XMM0,XMM0
/* 0e8b35bc */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b35c1 */  LEA RSI,[RSP + 0x8]
/* 0e8b35c6 */  CALL 0x048b05a0
/* 0e8b35cb */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b35d0 */  TEST R15,R15
/* 0e8b35d3 */  JZ 0x0e8b35f8
/* 0e8b35d5 */  MOV RAX,-0x1
/* 0e8b35dc */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b35e2 */  TEST RAX,RAX
/* 0e8b35e5 */  JNZ 0x0e8b35f8
/* 0e8b35e7 */  MOV RAX,qword ptr [R15]
/* 0e8b35ea */  MOV RDI,R15
/* 0e8b35ed */  CALL qword ptr [RAX + 0x10]
/* 0e8b35f0 */  MOV RDI,R15
/* 0e8b35f3 */  CALL 0x0412c2d0
/* 0e8b35f8 */  LEA RDI,[RSP + 0x70]
/* 0e8b35fd */  CALL 0x0e8bedd0
/* 0e8b3602 */  LEA RDI,[RSP + 0x88]
/* 0e8b360a */  MOVZX EAX,byte ptr [RSP + 0x3c0]
/* 0e8b3612 */  MOV byte ptr [RSP + 0x1c0],AL
/* 0e8b3619 */  MOVUPS XMM0,xmmword ptr [RSP + 0x390]
/* 0e8b3621 */  MOVUPS XMM1,xmmword ptr [RSP + 0x3a0]
/* 0e8b3629 */  MOVUPS XMM2,xmmword ptr [RSP + 0x3b0]
/* 0e8b3631 */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM2
/* 0e8b3639 */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM1
/* 0e8b3641 */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0e8b3649 */  CALL 0x048b0bc0
/* 0e8b364e */  MOVAPS XMM0,xmmword ptr [RSP + 0x190]
/* 0e8b3656 */  MOVAPS XMM1,xmmword ptr [RSP + 0x1a0]
/* 0e8b365e */  MOVAPS XMM2,xmmword ptr [RSP + 0x1b0]
/* 0e8b3666 */  MOVAPS xmmword ptr [RSP + 0x350],XMM0
/* 0e8b366e */  MOVAPS xmmword ptr [RSP + 0x360],XMM1
/* 0e8b3676 */  MOVAPS xmmword ptr [RSP + 0x370],XMM2
/* 0e8b367e */  MOV RAX,qword ptr [RSP + 0x1c0]
/* 0e8b3686 */  MOV qword ptr [RSP + 0x380],RAX
/* 0e8b368e */  LEA RDX,[0x14ecbe0]
/* 0e8b3695 */  LEA RDI,[RSP + 0x70]
/* 0e8b369a */  LEA RSI,[RSP + 0x350]
/* 0e8b36a2 */  MOV ECX,0x12
/* 0e8b36a7 */  CALL 0x0e8beb40
/* 0e8b36ac */  LEA RDI,[0xf5463b0]
/* 0e8b36b3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b36ba */  MOV ESI,0x8
/* 0e8b36bf */  CALL qword ptr [RAX + 0x10]
/* 0e8b36c2 */  MOV R15,RAX
/* 0e8b36c5 */  TEST RAX,RAX
/* 0e8b36c8 */  JZ 0x0e8b606b
/* 0e8b36ce */  MOV qword ptr [R15],R12
/* 0e8b36d1 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b36d9 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b36e1 */  TEST RDI,RDI
/* 0e8b36e4 */  JZ 0x0e8b36ec
/* 0e8b36e6 */  MOV RAX,qword ptr [RDI]
/* 0e8b36e9 */  CALL qword ptr [RAX + 0x8]
/* 0e8b36ec */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b36f1 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b36f8 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b36fc */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b3705 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b370d */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b3716 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b371f */  MOV qword ptr [RSP + 0x30],RBP
/* 0e8b3724 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b3729 */  MOV qword ptr [RSP + 0x40],R14
/* 0e8b372e */  LEA RAX,[0xe8c09e0]
/* 0e8b3735 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b373a */  LEA RAX,[0xe8c0c10]
/* 0e8b3741 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b3746 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b374e */  XORPS XMM0,XMM0
/* 0e8b3751 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b3756 */  LEA RSI,[RSP + 0x8]
/* 0e8b375b */  CALL 0x048b05a0
/* 0e8b3760 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b3765 */  TEST R15,R15
/* 0e8b3768 */  JZ 0x0e8b378d
/* 0e8b376a */  MOV RAX,-0x1
/* 0e8b3771 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b3777 */  TEST RAX,RAX
/* 0e8b377a */  JNZ 0x0e8b378d
/* 0e8b377c */  MOV RAX,qword ptr [R15]
/* 0e8b377f */  MOV RDI,R15
/* 0e8b3782 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3785 */  MOV RDI,R15
/* 0e8b3788 */  CALL 0x0412c2d0
/* 0e8b378d */  LEA RDI,[RSP + 0x70]
/* 0e8b3792 */  CALL 0x0e8bedd0
/* 0e8b3797 */  LEA RDI,[RSP + 0x88]
/* 0e8b379f */  MOVZX EAX,byte ptr [RSP + 0x380]
/* 0e8b37a7 */  MOV byte ptr [RSP + 0x400],AL
/* 0e8b37ae */  MOVAPS XMM0,xmmword ptr [RSP + 0x350]
/* 0e8b37b6 */  MOVAPS XMM1,xmmword ptr [RSP + 0x360]
/* 0e8b37be */  MOVAPS XMM2,xmmword ptr [RSP + 0x370]
/* 0e8b37c6 */  MOVAPS xmmword ptr [RSP + 0x3f0],XMM2
/* 0e8b37ce */  MOVAPS xmmword ptr [RSP + 0x3e0],XMM1
/* 0e8b37d6 */  MOVAPS xmmword ptr [RSP + 0x3d0],XMM0
/* 0e8b37de */  CALL 0x048b0bc0
/* 0e8b37e3 */  MOVAPS XMM0,xmmword ptr [RSP + 0x3d0]
/* 0e8b37eb */  MOVAPS XMM1,xmmword ptr [RSP + 0x3e0]
/* 0e8b37f3 */  MOVAPS XMM2,xmmword ptr [RSP + 0x3f0]
/* 0e8b37fb */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e8b3803 */  MOVAPS xmmword ptr [RSP + 0x220],XMM1
/* 0e8b380b */  MOVAPS xmmword ptr [RSP + 0x230],XMM2
/* 0e8b3813 */  MOV RAX,qword ptr [RSP + 0x400]
/* 0e8b381b */  MOV qword ptr [RSP + 0x240],RAX
/* 0e8b3823 */  LEA RDX,[0x121dc40]
/* 0e8b382a */  LEA RDI,[RSP + 0x70]
/* 0e8b382f */  LEA RSI,[RSP + 0x210]
/* 0e8b3837 */  MOV ECX,0xd
/* 0e8b383c */  CALL 0x0e8beb40
/* 0e8b3841 */  LEA RDI,[0xf5463b0]
/* 0e8b3848 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b384f */  MOV ESI,0x8
/* 0e8b3854 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3857 */  MOV R15,RAX
/* 0e8b385a */  TEST RAX,RAX
/* 0e8b385d */  JZ 0x0e8b608d
/* 0e8b3863 */  LEA RBX,[0xef46ef8]
/* 0e8b386a */  MOV qword ptr [R15],RBX
/* 0e8b386d */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b3875 */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b387d */  TEST RDI,RDI
/* 0e8b3880 */  JZ 0x0e8b3888
/* 0e8b3882 */  MOV RAX,qword ptr [RDI]
/* 0e8b3885 */  CALL qword ptr [RAX + 0x8]
/* 0e8b3888 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b388d */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b3894 */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b3898 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b38a1 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b38a9 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b38b2 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b38bb */  LEA R14,[0x4906f70]
/* 0e8b38c2 */  MOV qword ptr [RSP + 0x30],R14
/* 0e8b38c7 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b38cc */  LEA R12,[0x4906c50]
/* 0e8b38d3 */  MOV qword ptr [RSP + 0x40],R12
/* 0e8b38d8 */  LEA RAX,[0xe8c0df0]
/* 0e8b38df */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b38e4 */  LEA RAX,[0xe8c0f50]
/* 0e8b38eb */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b38f0 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b38f8 */  XORPS XMM0,XMM0
/* 0e8b38fb */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b3900 */  LEA RSI,[RSP + 0x8]
/* 0e8b3905 */  CALL 0x048b05a0
/* 0e8b390a */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b390f */  TEST R15,R15
/* 0e8b3912 */  JZ 0x0e8b3937
/* 0e8b3914 */  MOV RAX,-0x1
/* 0e8b391b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b3921 */  TEST RAX,RAX
/* 0e8b3924 */  JNZ 0x0e8b3937
/* 0e8b3926 */  MOV RAX,qword ptr [R15]
/* 0e8b3929 */  MOV RDI,R15
/* 0e8b392c */  CALL qword ptr [RAX + 0x10]
/* 0e8b392f */  MOV RDI,R15
/* 0e8b3932 */  CALL 0x0412c2d0
/* 0e8b3937 */  LEA RDI,[RSP + 0x70]
/* 0e8b393c */  CALL 0x0e8bedd0
/* 0e8b3941 */  LEA RDI,[RSP + 0x88]
/* 0e8b3949 */  MOVZX EAX,byte ptr [RSP + 0x240]
/* 0e8b3951 */  MOV byte ptr [RSP + 0x280],AL
/* 0e8b3958 */  MOVAPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e8b3960 */  MOVAPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e8b3968 */  MOVAPS XMM2,xmmword ptr [RSP + 0x230]
/* 0e8b3970 */  MOVAPS xmmword ptr [RSP + 0x270],XMM2
/* 0e8b3978 */  MOVAPS xmmword ptr [RSP + 0x260],XMM1
/* 0e8b3980 */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 0e8b3988 */  CALL 0x048b0bc0
/* 0e8b398d */  MOVDQA XMM0,xmmword ptr [RSP + 0x250]
/* 0e8b3996 */  MOVDQA XMM1,xmmword ptr [RSP + 0x260]
/* 0e8b399f */  MOVDQA XMM2,xmmword ptr [RSP + 0x270]
/* 0e8b39a8 */  MOVDQA xmmword ptr [RSP + 0x150],XMM0
/* 0e8b39b1 */  MOVDQA xmmword ptr [RSP + 0x160],XMM1
/* 0e8b39ba */  MOVDQA xmmword ptr [RSP + 0x170],XMM2
/* 0e8b39c3 */  MOV RAX,qword ptr [RSP + 0x280]
/* 0e8b39cb */  MOV qword ptr [RSP + 0x180],RAX
/* 0e8b39d3 */  LEA RDX,[0x145ad9c]
/* 0e8b39da */  LEA RDI,[RSP + 0x70]
/* 0e8b39df */  LEA RSI,[RSP + 0x150]
/* 0e8b39e7 */  MOV ECX,0xa
/* 0e8b39ec */  CALL 0x0e8beb40
/* 0e8b39f1 */  LEA RDI,[0xf5463b0]
/* 0e8b39f8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b39ff */  MOV ESI,0x8
/* 0e8b3a04 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3a07 */  MOV R15,RAX
/* 0e8b3a0a */  TEST RAX,RAX
/* 0e8b3a0d */  JZ 0x0e8b60af
/* 0e8b3a13 */  MOV qword ptr [R15],RBX
/* 0e8b3a16 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b3a1e */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b3a26 */  TEST RDI,RDI
/* 0e8b3a29 */  JZ 0x0e8b3a31
/* 0e8b3a2b */  MOV RAX,qword ptr [RDI]
/* 0e8b3a2e */  CALL qword ptr [RAX + 0x8]
/* 0e8b3a31 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b3a36 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b3a3d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b3a41 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b3a4a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b3a52 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b3a5b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b3a64 */  MOV qword ptr [RSP + 0x30],R14
/* 0e8b3a69 */  MOV qword ptr [RSP + 0x38],R13
/* 0e8b3a6e */  MOV qword ptr [RSP + 0x40],R12
/* 0e8b3a73 */  LEA RAX,[0xe8c1130]
/* 0e8b3a7a */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b3a7f */  LEA RAX,[0xe8c1290]
/* 0e8b3a86 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b3a8b */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b3a93 */  PXOR XMM0,XMM0
/* 0e8b3a97 */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8b3a9d */  LEA RSI,[RSP + 0x8]
/* 0e8b3aa2 */  CALL 0x048b05a0
/* 0e8b3aa7 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b3aac */  TEST R15,R15
/* 0e8b3aaf */  JZ 0x0e8b3ad4
/* 0e8b3ab1 */  MOV RAX,-0x1
/* 0e8b3ab8 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b3abe */  TEST RAX,RAX
/* 0e8b3ac1 */  JNZ 0x0e8b3ad4
/* 0e8b3ac3 */  MOV RAX,qword ptr [R15]
/* 0e8b3ac6 */  MOV RDI,R15
/* 0e8b3ac9 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3acc */  MOV RDI,R15
/* 0e8b3acf */  CALL 0x0412c2d0
/* 0e8b3ad4 */  LEA RDI,[RSP + 0x70]
/* 0e8b3ad9 */  CALL 0x0e8bedd0
/* 0e8b3ade */  LEA RDI,[RSP + 0x88]
/* 0e8b3ae6 */  CALL 0x048b0bc0
/* 0e8b3aeb */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b3af3 */  CALL 0x0db80270
/* 0e8b3af8 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b3aff */  JNZ 0x0e8b3b62
/* 0e8b3b01 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e8b3b05 */  TEST RAX,RAX
/* 0e8b3b08 */  JZ 0x0e8b3b62
/* 0e8b3b0a */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e8b3b0e */  LEA RDX,[RAX + 0x9]
/* 0e8b3b12 */  MOV ECX,ESI
/* 0e8b3b14 */  SHR ECX,0x1
/* 0e8b3b16 */  TEST SIL,0x1
/* 0e8b3b1a */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e8b3b1f */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e8b3b24 */  LEA RDI,[RSP + 0x390]
/* 0e8b3b2c */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8b3b34 */  CALL 0x0e8c1470
/* 0e8b3b39 */  CMP byte ptr [RSP + 0x3c0],0x0
/* 0e8b3b41 */  JZ 0x0e8b3b8d
/* 0e8b3b43 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0e8b3b4b */  CALL 0x0db80190
/* 0e8b3b50 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b3b57 */  JZ 0x0e8b4d27
/* 0e8b3b5d */  JMP 0x0e8b4d6e
/* 0e8b3b62 */  LEA RDX,[0x11b8f64]
/* 0e8b3b69 */  LEA RDI,[RSP + 0x390]
/* 0e8b3b71 */  MOV ECX,0x16
/* 0e8b3b76 */  MOV RSI,qword ptr [RSP + 0x148]
/* 0e8b3b7e */  CALL 0x0e8c1470
/* 0e8b3b83 */  CMP byte ptr [RSP + 0x3c0],0x0
/* 0e8b3b8b */  JNZ 0x0e8b3b43
/* 0e8b3b8d */  MOV R15,qword ptr [RSP + 0x390]
/* 0e8b3b95 */  ADD R15,0x18
/* 0e8b3b99 */  MOV RDI,R15
/* 0e8b3b9c */  CALL 0x0db80270
/* 0e8b3ba1 */  MOV RDX,qword ptr [RSP + 0x390]
/* 0e8b3ba9 */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e8b3bad */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e8b3bb1 */  CMP RCX,RDX
/* 0e8b3bb4 */  JZ 0x0e8b3c66
/* 0e8b3bba */  MOV RSI,0x3a6c61657265635b
/* 0e8b3bc4 */  MOVQ XMM0,RSI
/* 0e8b3bc9 */  MOV RSI,0x746e656d75636f64
/* 0e8b3bd3 */  MOVQ XMM1,RSI
/* 0e8b3bd8 */  PUNPCKLQDQ XMM0,XMM1
/* 0e8b3bdc */  MOV RSI,0x7461746e656d7563
/* 0e8b3be6 */  MOVQ XMM1,RSI
/* 0e8b3beb */  MOV RSI,0x5d6761745f6e6f69
/* 0e8b3bf5 */  MOVQ XMM2,RSI
/* 0e8b3bfa */  PUNPCKLQDQ XMM1,XMM2
/* 0e8b3bfe */  JMP 0x0e8b3c2e
/* 0e8b3c00 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e8b3c04 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e8b3c08 */  PCMPEQB XMM2,XMM0
/* 0e8b3c0c */  MOVDQU XMM3,xmmword ptr [RSI + 0xa]
/* 0e8b3c11 */  PCMPEQB XMM3,XMM1
/* 0e8b3c15 */  PAND XMM3,XMM2
/* 0e8b3c19 */  PMOVMSKB ESI,XMM3
/* 0e8b3c1d */  CMP ESI,0xffff
/* 0e8b3c23 */  JZ 0x0e8b3c66
/* 0e8b3c25 */  ADD RCX,0x38
/* 0e8b3c29 */  CMP RCX,RDX
/* 0e8b3c2c */  JZ 0x0e8b3c66
/* 0e8b3c2e */  MOVZX ESI,byte ptr [RCX]
/* 0e8b3c31 */  TEST SIL,0x1
/* 0e8b3c35 */  JZ 0x0e8b3c50
/* 0e8b3c37 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e8b3c3b */  CMP RDI,0x1a
/* 0e8b3c3f */  JNZ 0x0e8b3c25
/* 0e8b3c41 */  JMP 0x0e8b3c5a
/* 0e8b3c50 */  MOV EDI,ESI
/* 0e8b3c52 */  SHR EDI,0x1
/* 0e8b3c54 */  CMP RDI,0x1a
/* 0e8b3c58 */  JNZ 0x0e8b3c25
/* 0e8b3c5a */  TEST SIL,0x1
/* 0e8b3c5e */  JNZ 0x0e8b3c00
/* 0e8b3c60 */  LEA RSI,[RCX + 0x1]
/* 0e8b3c64 */  JMP 0x0e8b3c04
/* 0e8b3c66 */  CMP RCX,RDX
/* 0e8b3c69 */  JZ 0x0e8b3c89
/* 0e8b3c6b */  MOV EBX,dword ptr [RCX + 0x1c]
/* 0e8b3c6e */  MOVZX ECX,byte ptr [0x0f550ad8]
/* 0e8b3c75 */  TEST CL,CL
/* 0e8b3c77 */  JZ 0x0e8b644a
/* 0e8b3c7d */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e8b3c83 */  JNZ 0x0e8b3ec0
/* 0e8b3c89 */  CMP dword ptr [RSP + 0x3b8],0x0
/* 0e8b3c91 */  JZ 0x0e8b3ce5
/* 0e8b3c93 */  MOV EDX,dword ptr [RSP + 0x3bc]
/* 0e8b3c9a */  MOV RDI,R15
/* 0e8b3c9d */  MOV RSI,RAX
/* 0e8b3ca0 */  MOV ECX,0x1
/* 0e8b3ca5 */  CALL 0x048b0c90
/* 0e8b3caa */  TEST RAX,RAX
/* 0e8b3cad */  JNZ 0x0e8b3ccd
/* 0e8b3caf */  PXOR XMM0,XMM0
/* 0e8b3cb3 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b3cb9 */  LEA RDI,[RSP + 0x70]
/* 0e8b3cbe */  CALL 0x048b0d20
/* 0e8b3cc3 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b3cc8 */  TEST RAX,RAX
/* 0e8b3ccb */  JZ 0x0e8b3cfd
/* 0e8b3ccd */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e8b3cd4 */  JNZ 0x0e8b3cfd
/* 0e8b3cd6 */  MOV R15,qword ptr [RAX + 0x58]
/* 0e8b3cda */  TEST R15,R15
/* 0e8b3cdd */  JZ 0x0e8b3cfd
/* 0e8b3cdf */  ADD R15,0x40
/* 0e8b3ce3 */  JMP 0x0e8b3d00
/* 0e8b3ce5 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e8b3cec */  JNZ 0x0e8b3cfd
/* 0e8b3cee */  MOV R15,qword ptr [RAX + 0x68]
/* 0e8b3cf2 */  TEST R15,R15
/* 0e8b3cf5 */  JZ 0x0e8b3cfd
/* 0e8b3cf7 */  ADD R15,0x38
/* 0e8b3cfb */  JMP 0x0e8b3d00
/* 0e8b3cfd */  XOR R15D,R15D
/* 0e8b3d00 */  LEA RAX,[0x488e0b0]
/* 0e8b3d07 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e8b3d0c */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e8b3d14 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e8b3d1d */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e8b3d22 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e8b3d2b */  PXOR XMM0,XMM0
/* 0e8b3d2f */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b3d35 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e8b3d3d */  MOV qword ptr [RSP + 0x90],0x0
/* 0e8b3d49 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e8b3d54 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e8b3d5c */  LEA RDI,[0xf5463b0]
/* 0e8b3d63 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b3d6a */  MOV ESI,0x20
/* 0e8b3d6f */  CALL qword ptr [RAX + 0x10]
/* 0e8b3d72 */  MOV R12,RAX
/* 0e8b3d75 */  TEST RAX,RAX
/* 0e8b3d78 */  JZ 0x0e8b61ae
/* 0e8b3d7e */  MOV qword ptr [RSP + 0x160],R12
/* 0e8b3d86 */  MOV qword ptr [RSP + 0x150],0x21
/* 0e8b3d92 */  MOV qword ptr [RSP + 0x158],0x1a
/* 0e8b3d9e */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e8b3da5 */  MOVUPS xmmword ptr [R12 + 0xa],XMM0
/* 0e8b3dab */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e8b3db3 */  MOVDQU xmmword ptr [R12],XMM0
/* 0e8b3db9 */  MOV byte ptr [R12 + 0x1a],0x0
/* 0e8b3dbf */  LEA RSI,[RSP + 0x150]
/* 0e8b3dc7 */  MOV RDI,R15
/* 0e8b3dca */  CALL 0x048b5060
/* 0e8b3dcf */  MOV R12,RAX
/* 0e8b3dd2 */  LEA R15,[RSP + 0x78]
/* 0e8b3dd7 */  ADD RAX,0x20
/* 0e8b3ddb */  MOV qword ptr [R12 + 0x20],0x0
/* 0e8b3de4 */  LEA RCX,[RSP + 0x70]
/* 0e8b3de9 */  CMP RAX,RCX
/* 0e8b3dec */  JZ 0x0e8b3e29
/* 0e8b3dee */  MOV RAX,qword ptr [R12 + 0x40]
/* 0e8b3df3 */  TEST RAX,RAX
/* 0e8b3df6 */  JZ 0x0e8b3e49
/* 0e8b3df8 */  MOV R13,R12
/* 0e8b3dfb */  ADD R13,0x28
/* 0e8b3dff */  MOV RDI,R13
/* 0e8b3e02 */  CALL RAX
/* 0e8b3e04 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e8b3e0c */  TEST EAX,EAX
/* 0e8b3e0e */  JZ 0x0e8b3e49
/* 0e8b3e10 */  CMP EAX,0x2
/* 0e8b3e13 */  JNZ 0x0e8b3e37
/* 0e8b3e15 */  MOV EDI,0x5
/* 0e8b3e1a */  MOV RSI,R15
/* 0e8b3e1d */  MOV RDX,R13
/* 0e8b3e20 */  CALL qword ptr [RSP + 0x88]
/* 0e8b3e27 */  JMP 0x0e8b3e49
/* 0e8b3e29 */  XOR EAX,EAX
/* 0e8b3e2b */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b3e33 */  JNZ 0x0e8b3e84
/* 0e8b3e35 */  JMP 0x0e8b3ea5
/* 0e8b3e37 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e8b3e3c */  MOV qword ptr [RSP + 0x78],0x0
/* 0e8b3e45 */  MOV qword ptr [R13],RAX
/* 0e8b3e49 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b3e51 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e8b3e5a */  MOVDQU xmmword ptr [R12 + 0x38],XMM0
/* 0e8b3e61 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e8b3e68 */  MOV dword ptr [R12 + 0x48],ECX
/* 0e8b3e6d */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e8b3e75 */  MOV byte ptr [R12 + 0x4c],CL
/* 0e8b3e7a */  TEST byte ptr [RSP + 0x150],0x1
/* 0e8b3e82 */  JZ 0x0e8b3ea5
/* 0e8b3e84 */  MOV RSI,qword ptr [RSP + 0x150]
/* 0e8b3e8c */  MOV RDI,qword ptr [RSP + 0x160]
/* 0e8b3e94 */  AND RSI,-0x2
/* 0e8b3e98 */  CALL 0x0412a280
/* 0e8b3e9d */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e8b3ea5 */  TEST RAX,RAX
/* 0e8b3ea8 */  JZ 0x0e8b3eaf
/* 0e8b3eaa */  MOV RDI,R15
/* 0e8b3ead */  CALL RAX
/* 0e8b3eaf */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e8b3eb4 */  TEST RAX,RAX
/* 0e8b3eb7 */  JZ 0x0e8b3ec0
/* 0e8b3eb9 */  LEA RDI,[RSP + 0x8]
/* 0e8b3ebe */  CALL RAX
/* 0e8b3ec0 */  MOV RAX,0x5127f14d00000002
/* 0e8b3eca */  MOV qword ptr [RSP + 0x3b8],RAX
/* 0e8b3ed2 */  LEA RDI,[RSP + 0xb0]
/* 0e8b3eda */  PXOR XMM0,XMM0
/* 0e8b3ede */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e8b3ee7 */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e8b3ef0 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e8b3ef9 */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e8b3f02 */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e8b3f0b */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e8b3f14 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e8b3f1a */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e8b3f25 */  MOV ESI,0x8
/* 0e8b3f2a */  CALL 0x048afb10
/* 0e8b3f2f */  PXOR XMM0,XMM0
/* 0e8b3f33 */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e8b3f3c */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e8b3f45 */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e8b3f4e */  MOV word ptr [RSP + 0x118],0xff00
/* 0e8b3f58 */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e8b3f60 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e8b3f68 */  MOV byte ptr [RSP + 0x124],0x0
/* 0e8b3f70 */  LEA RDI,[0xf5463b0]
/* 0e8b3f77 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b3f7e */  MOV ESI,0x8
/* 0e8b3f83 */  CALL qword ptr [RAX + 0x10]
/* 0e8b3f86 */  MOV R15,RAX
/* 0e8b3f89 */  TEST RAX,RAX
/* 0e8b3f8c */  JZ 0x0e8b6027
/* 0e8b3f92 */  LEA RAX,[0xf497e98]
/* 0e8b3f99 */  MOV qword ptr [R15],RAX
/* 0e8b3f9c */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e8b3fa1 */  MOV qword ptr [RSP + 0x70],R15
/* 0e8b3fa6 */  TEST RDI,RDI
/* 0e8b3fa9 */  JZ 0x0e8b3fb1
/* 0e8b3fab */  MOV RAX,qword ptr [RDI]
/* 0e8b3fae */  CALL qword ptr [RAX + 0x8]
/* 0e8b3fb1 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e8b3fb9 */  JZ 0x0e8b3fd4
/* 0e8b3fbb */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e8b3fc3 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e8b3fcb */  AND RSI,-0x2
/* 0e8b3fcf */  CALL 0x0412a280
/* 0e8b3fd4 */  MOV byte ptr [RSP + 0x98],0x8
/* 0e8b3fdc */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e8b3fe7 */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e8b3fef */  MOVZX EAX,byte ptr [0x0f7376c8]
/* 0e8b3ff6 */  TEST AL,AL
/* 0e8b3ff8 */  JZ 0x0e8b62f8
/* 0e8b3ffe */  LEA R15,[RSP + 0x398]
/* 0e8b4006 */  MOV EAX,dword ptr [RSP + 0x3bc]
/* 0e8b400d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b4011 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b401a */  MOV dword ptr [RSP + 0x18],0x3
/* 0e8b4022 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b402b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b4034 */  LEA RAX,[0xdb65ce0]
/* 0e8b403b */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b4040 */  LEA RBX,[0x48b06d0]
/* 0e8b4047 */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8b404c */  LEA RAX,[0xdb61aa0]
/* 0e8b4053 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b4058 */  LEA RAX,[0xe8c2040]
/* 0e8b405f */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b4064 */  LEA RAX,[0xe8c2050]
/* 0e8b406b */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b4070 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b4078 */  PXOR XMM0,XMM0
/* 0e8b407c */  MOVDQU xmmword ptr [RSP + 0x60],XMM0
/* 0e8b4082 */  LEA RSI,[RSP + 0x8]
/* 0e8b4087 */  MOV RDI,R15
/* 0e8b408a */  CALL 0x048b05a0
/* 0e8b408f */  MOV R12,qword ptr [RSP + 0x68]
/* 0e8b4094 */  TEST R12,R12
/* 0e8b4097 */  JZ 0x0e8b40be
/* 0e8b4099 */  MOV RAX,-0x1
/* 0e8b40a0 */  XADD.LOCK qword ptr [R12 + 0x8],RAX
/* 0e8b40a7 */  TEST RAX,RAX
/* 0e8b40aa */  JNZ 0x0e8b40be
/* 0e8b40ac */  MOV RAX,qword ptr [R12]
/* 0e8b40b0 */  MOV RDI,R12
/* 0e8b40b3 */  CALL qword ptr [RAX + 0x10]
/* 0e8b40b6 */  MOV RDI,R12
/* 0e8b40b9 */  CALL 0x0412c2d0
/* 0e8b40be */  MOVDQU XMM0,xmmword ptr [R15]
/* 0e8b40c3 */  MOVDQU XMM1,xmmword ptr [R15 + 0x10]
/* 0e8b40c9 */  MOVDQA xmmword ptr [RSP + 0x160],XMM1
/* 0e8b40d2 */  MOVDQA xmmword ptr [RSP + 0x150],XMM0
/* 0e8b40db */  LEA RDI,[RSP + 0x8]
/* 0e8b40e0 */  LEA RSI,[RSP + 0x150]
/* 0e8b40e8 */  LEA RDX,[RSP + 0x70]
/* 0e8b40ed */  CALL 0x0e8c1dd0
/* 0e8b40f2 */  MOV EAX,dword ptr [RSP + 0x24]
/* 0e8b40f6 */  CMP EAX,0x2
/* 0e8b40f9 */  JZ 0x0e8b43ea
/* 0e8b40ff */  CMP EAX,0x1
/* 0e8b4102 */  JZ 0x0e8b4116
/* 0e8b4104 */  TEST EAX,EAX
/* 0e8b4106 */  JNZ 0x0e8b4143
/* 0e8b4108 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b410d */  OR dword ptr [RAX + 0x18],0x90000
/* 0e8b4114 */  JMP 0x0e8b4143
/* 0e8b4116 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b411b */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b411f */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b4123 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e8b4127 */  CMP dword ptr [RAX],ECX
/* 0e8b4129 */  JZ 0x0e8b413f
/* 0e8b412b */  ADD RAX,0x68
/* 0e8b412f */  NOP
/* 0e8b4130 */  MOV RDX,RAX
/* 0e8b4133 */  ADD RAX,0x68
/* 0e8b4137 */  CMP dword ptr [RDX],ECX
/* 0e8b4139 */  JNZ 0x0e8b4130
/* 0e8b413b */  ADD RAX,-0x68
/* 0e8b413f */  OR byte ptr [RAX + 0x12],0x9
/* 0e8b4143 */  MOVUPS XMM0,xmmword ptr [RSP + 0x390]
/* 0e8b414b */  MOVUPS XMM1,xmmword ptr [RSP + 0x3a0]
/* 0e8b4153 */  MOVUPS XMM2,xmmword ptr [RSP + 0x3b0]
/* 0e8b415b */  MOVAPS xmmword ptr [RSP + 0x410],XMM0
/* 0e8b4163 */  MOVAPS xmmword ptr [RSP + 0x420],XMM1
/* 0e8b416b */  MOVAPS xmmword ptr [RSP + 0x430],XMM2
/* 0e8b4173 */  MOVZX EAX,byte ptr [RSP + 0x3c0]
/* 0e8b417b */  MOV byte ptr [RSP + 0x440],AL
/* 0e8b4182 */  LEA RDI,[RSP + 0x70]
/* 0e8b4187 */  CALL 0x048b0bc0
/* 0e8b418c */  MOVAPS XMM0,xmmword ptr [RSP + 0x410]
/* 0e8b4194 */  MOVAPS XMM1,xmmword ptr [RSP + 0x420]
/* 0e8b419c */  MOVAPS XMM2,xmmword ptr [RSP + 0x430]
/* 0e8b41a4 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0e8b41ac */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM1
/* 0e8b41b4 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM2
/* 0e8b41bc */  MOV RAX,qword ptr [RSP + 0x440]
/* 0e8b41c4 */  MOV qword ptr [RSP + 0x200],RAX
/* 0e8b41cc */  LEA RDX,[0x126cda9]
/* 0e8b41d3 */  LEA RDI,[RSP + 0x70]
/* 0e8b41d8 */  LEA RSI,[RSP + 0x1d0]
/* 0e8b41e0 */  MOV ECX,0xf
/* 0e8b41e5 */  CALL 0x0e8c20a0
/* 0e8b41ea */  LEA RDI,[0xf5463b0]
/* 0e8b41f1 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b41f8 */  MOV ESI,0x8
/* 0e8b41fd */  CALL qword ptr [RAX + 0x10]
/* 0e8b4200 */  MOV R15,RAX
/* 0e8b4203 */  TEST RAX,RAX
/* 0e8b4206 */  JZ 0x0e8b6049
/* 0e8b420c */  LEA RAX,[0xef46ce8]
/* 0e8b4213 */  MOV qword ptr [R15],RAX
/* 0e8b4216 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b421e */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b4226 */  TEST RDI,RDI
/* 0e8b4229 */  JZ 0x0e8b4231
/* 0e8b422b */  MOV RAX,qword ptr [RDI]
/* 0e8b422e */  CALL qword ptr [RAX + 0x8]
/* 0e8b4231 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b4236 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b423d */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b4241 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b424a */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b4252 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b425b */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b4264 */  LEA RAX,[0x490ce30]
/* 0e8b426b */  MOV qword ptr [RSP + 0x30],RAX
/* 0e8b4270 */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8b4275 */  LEA RAX,[0x490cb20]
/* 0e8b427c */  MOV qword ptr [RSP + 0x40],RAX
/* 0e8b4281 */  LEA RAX,[0xe8c2360]
/* 0e8b4288 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b428d */  LEA RAX,[0xe8c24c0]
/* 0e8b4294 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b4299 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b42a1 */  XORPS XMM0,XMM0
/* 0e8b42a4 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b42a9 */  LEA RSI,[RSP + 0x8]
/* 0e8b42ae */  CALL 0x048b05a0
/* 0e8b42b3 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b42b8 */  TEST R15,R15
/* 0e8b42bb */  JZ 0x0e8b42e0
/* 0e8b42bd */  MOV RAX,-0x1
/* 0e8b42c4 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b42ca */  TEST RAX,RAX
/* 0e8b42cd */  JNZ 0x0e8b42e0
/* 0e8b42cf */  MOV RAX,qword ptr [R15]
/* 0e8b42d2 */  MOV RDI,R15
/* 0e8b42d5 */  CALL qword ptr [RAX + 0x10]
/* 0e8b42d8 */  MOV RDI,R15
/* 0e8b42db */  CALL 0x0412c2d0
/* 0e8b42e0 */  LEA RDI,[RSP + 0x70]
/* 0e8b42e5 */  CALL 0x0e8c2290
/* 0e8b42ea */  LEA RDI,[RSP + 0x88]
/* 0e8b42f2 */  MOV R14,qword ptr [RSP + 0x1d0]
/* 0e8b42fa */  MOVUPS XMM0,xmmword ptr [RSP + 0x1d8]
/* 0e8b4302 */  MOVAPS xmmword ptr [RSP + 0x490],XMM0
/* 0e8b430a */  MOVUPS XMM0,xmmword ptr [RSP + 0x1e8]
/* 0e8b4312 */  MOVAPS xmmword ptr [RSP + 0x4a0],XMM0
/* 0e8b431a */  MOV EBX,dword ptr [RSP + 0x1f8]
/* 0e8b4321 */  MOV EBP,dword ptr [RSP + 0x1fc]
/* 0e8b4328 */  MOVZX R13D,byte ptr [RSP + 0x200]
/* 0e8b4331 */  CALL 0x048b0bc0
/* 0e8b4336 */  CMP EBX,0x4
/* 0e8b4339 */  JZ 0x0e8b43b5
/* 0e8b433b */  CMP EBX,0x1
/* 0e8b433e */  JNZ 0x0e8b4529
/* 0e8b4344 */  LEA R15,[R14 + 0x18]
/* 0e8b4348 */  MOV RDI,R15
/* 0e8b434b */  CALL 0x0db80270
/* 0e8b4350 */  MOV RDI,R15
/* 0e8b4353 */  MOV RSI,RAX
/* 0e8b4356 */  MOV EDX,EBP
/* 0e8b4358 */  MOV ECX,0x1
/* 0e8b435d */  CALL 0x048b0c90
/* 0e8b4362 */  TEST RAX,RAX
/* 0e8b4365 */  JNZ 0x0e8b437e
/* 0e8b4367 */  XORPS XMM0,XMM0
/* 0e8b436a */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b436f */  LEA RDI,[RSP + 0x70]
/* 0e8b4374 */  CALL 0x048b0d20
/* 0e8b4379 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b437e */  MOV R12,qword ptr [RAX + 0x58]
/* 0e8b4382 */  LEA RDI,[0xf5463b0]
/* 0e8b4389 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b4390 */  MOV ESI,0x40
/* 0e8b4395 */  CALL qword ptr [RAX + 0x10]
/* 0e8b4398 */  MOV R15,RAX
/* 0e8b439b */  TEST RAX,RAX
/* 0e8b439e */  JNZ 0x0e8b44de
/* 0e8b43a4 */  MOV EDI,0x40
/* 0e8b43a9 */  XOR ESI,ESI
/* 0e8b43ab */  CALL 0x0eec74c0
/* 0e8b43b0 */  JMP 0x0e8b44de
/* 0e8b43b5 */  LEA R15,[R14 + 0x18]
/* 0e8b43b9 */  MOV RDI,R15
/* 0e8b43bc */  CALL 0x0db80270
/* 0e8b43c1 */  MOV RDI,R15
/* 0e8b43c4 */  MOV RSI,RAX
/* 0e8b43c7 */  MOV EDX,EBP
/* 0e8b43c9 */  MOV ECX,0x1
/* 0e8b43ce */  CALL 0x048b1040
/* 0e8b43d3 */  MOV R15,RAX
/* 0e8b43d6 */  TEST RAX,RAX
/* 0e8b43d9 */  JZ 0x0e8b443f
/* 0e8b43db */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e8b43df */  TEST RAX,RAX
/* 0e8b43e2 */  JNZ 0x0e8b447b
/* 0e8b43e8 */  JMP 0x0e8b445f
/* 0e8b43ea */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e8b43ef */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e8b43f3 */  MOV ECX,dword ptr [RSP + 0x20]
/* 0e8b43f7 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e8b43fb */  CMP dword ptr [RAX],ECX
/* 0e8b43fd */  JZ 0x0e8b441f
/* 0e8b43ff */  ADD RAX,0x58
/* 0e8b4403 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e8b4410 */  MOV RDX,RAX
/* 0e8b4413 */  ADD RAX,0x58
/* 0e8b4417 */  CMP dword ptr [RDX],ECX
/* 0e8b4419 */  JNZ 0x0e8b4410
/* 0e8b441b */  ADD RAX,-0x58
/* 0e8b441f */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e8b4424 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b4428 */  JZ 0x0e8b413f
/* 0e8b442e */  NOP
/* 0e8b4430 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e8b4434 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e8b4438 */  JNZ 0x0e8b4430
/* 0e8b443a */  JMP 0x0e8b413f
/* 0e8b443f */  XORPS XMM0,XMM0
/* 0e8b4442 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b4447 */  LEA RDI,[RSP + 0x70]
/* 0e8b444c */  CALL 0x048b10d0
/* 0e8b4451 */  MOV R15,qword ptr [RSP + 0x70]
/* 0e8b4456 */  MOV RAX,qword ptr [R15 + 0x38]
/* 0e8b445a */  TEST RAX,RAX
/* 0e8b445d */  JNZ 0x0e8b447b
/* 0e8b445f */  XORPS XMM0,XMM0
/* 0e8b4462 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b4467 */  LEA RDI,[RSP + 0x70]
/* 0e8b446c */  CALL 0x048b10d0
/* 0e8b4471 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b4476 */  TEST RAX,RAX
/* 0e8b4479 */  JZ 0x0e8b44b8
/* 0e8b447b */  LEA R12,[RSP + 0x70]
/* 0e8b4480 */  JMP 0x0e8b4495
/* 0e8b4490 */  TEST RAX,RAX
/* 0e8b4493 */  JZ 0x0e8b44b8
/* 0e8b4495 */  MOV R15,RAX
/* 0e8b4498 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e8b449c */  TEST RAX,RAX
/* 0e8b449f */  JNZ 0x0e8b4490
/* 0e8b44a1 */  XORPS XMM0,XMM0
/* 0e8b44a4 */  MOVAPS xmmword ptr [RSP + 0x70],XMM0
/* 0e8b44a9 */  MOV RDI,R12
/* 0e8b44ac */  CALL 0x048b10d0
/* 0e8b44b1 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e8b44b6 */  JMP 0x0e8b4490
/* 0e8b44b8 */  MOV R12,qword ptr [R15 + 0x48]
/* 0e8b44bc */  LEA RDI,[0xf5463b0]
/* 0e8b44c3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b44ca */  MOV ESI,0x40
/* 0e8b44cf */  CALL qword ptr [RAX + 0x10]
/* 0e8b44d2 */  MOV R15,RAX
/* 0e8b44d5 */  TEST RAX,RAX
/* 0e8b44d8 */  JZ 0x0e8b61e1
/* 0e8b44de */  MOV qword ptr [R15 + 0x8],-0x1
/* 0e8b44e6 */  MOV qword ptr [R15 + 0x10],0x0
/* 0e8b44ee */  MOV byte ptr [R15 + 0x18],0xff
/* 0e8b44f3 */  LEA RAX,[0xf0edc68]
/* 0e8b44fa */  MOV qword ptr [R15],RAX
/* 0e8b44fd */  XORPS XMM0,XMM0
/* 0e8b4500 */  XORPS XMM1,XMM1
/* 0e8b4503 */  MOVHPS XMM1,qword ptr [0x014f0710]
/* 0e8b450a */  MOVUPS xmmword ptr [R15 + 0x20],XMM1
/* 0e8b450f */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 0e8b4514 */  MOV RDI,qword ptr [R12 + 0x8]
/* 0e8b4519 */  MOV qword ptr [R12 + 0x8],R15
/* 0e8b451e */  TEST RDI,RDI
/* 0e8b4521 */  JZ 0x0e8b4529
/* 0e8b4523 */  MOV RAX,qword ptr [RDI]
/* 0e8b4526 */  CALL qword ptr [RAX + 0x28]
/* 0e8b4529 */  MOVAPS XMM0,xmmword ptr [RSP + 0x490]
/* 0e8b4531 */  MOVAPS XMM1,xmmword ptr [RSP + 0x4a0]
/* 0e8b4539 */  MOVUPS xmmword ptr [RSP + 0x2a8],XMM1
/* 0e8b4541 */  MOVUPS xmmword ptr [RSP + 0x298],XMM0
/* 0e8b4549 */  MOV qword ptr [RSP + 0x290],R14
/* 0e8b4551 */  MOV dword ptr [RSP + 0x2b8],EBX
/* 0e8b4558 */  MOV dword ptr [RSP + 0x2bc],EBP
/* 0e8b455f */  MOV byte ptr [RSP + 0x2c0],R13B
/* 0e8b4567 */  MOV EAX,dword ptr [RSP + 0x4d0]
/* 0e8b456e */  MOV ECX,dword ptr [RSP + 0x4d3]
/* 0e8b4575 */  MOV dword ptr [RSP + 0x2c1],EAX
/* 0e8b457c */  MOV dword ptr [RSP + 0x2c4],ECX
/* 0e8b4583 */  LEA RDX,[0x1376c53]
/* 0e8b458a */  LEA RDI,[RSP + 0x70]
/* 0e8b458f */  LEA RSI,[RSP + 0x290]
/* 0e8b4597 */  MOV ECX,0x12
/* 0e8b459c */  CALL 0x0e8c20a0
/* 0e8b45a1 */  LEA RDI,[0xf5463b0]
/* 0e8b45a8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b45af */  MOV ESI,0x8
/* 0e8b45b4 */  CALL qword ptr [RAX + 0x10]
/* 0e8b45b7 */  LEA RBX,[0x48b06d0]
/* 0e8b45be */  MOV R15,RAX
/* 0e8b45c1 */  TEST RAX,RAX
/* 0e8b45c4 */  JZ 0x0e8b607c
/* 0e8b45ca */  LEA R14,[0xf4726f8]
/* 0e8b45d1 */  MOV qword ptr [R15],R14
/* 0e8b45d4 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b45dc */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b45e4 */  TEST RDI,RDI
/* 0e8b45e7 */  JZ 0x0e8b45ef
/* 0e8b45e9 */  MOV RAX,qword ptr [RDI]
/* 0e8b45ec */  CALL qword ptr [RAX + 0x8]
/* 0e8b45ef */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b45f4 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b45fb */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b45ff */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b4608 */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b4610 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b4619 */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b4622 */  LEA R12,[0xdb8dd10]
/* 0e8b4629 */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b462e */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8b4633 */  LEA RBP,[0xd4858f0]
/* 0e8b463a */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b463f */  LEA RAX,[0xe8c2690]
/* 0e8b4646 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b464b */  LEA RAX,[0xe8c2890]
/* 0e8b4652 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b4657 */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b465f */  XORPS XMM0,XMM0
/* 0e8b4662 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b4667 */  LEA RSI,[RSP + 0x8]
/* 0e8b466c */  CALL 0x048b05a0
/* 0e8b4671 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b4676 */  TEST R15,R15
/* 0e8b4679 */  JZ 0x0e8b469e
/* 0e8b467b */  MOV RAX,-0x1
/* 0e8b4682 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b4688 */  TEST RAX,RAX
/* 0e8b468b */  JNZ 0x0e8b469e
/* 0e8b468d */  MOV RAX,qword ptr [R15]
/* 0e8b4690 */  MOV RDI,R15
/* 0e8b4693 */  CALL qword ptr [RAX + 0x10]
/* 0e8b4696 */  MOV RDI,R15
/* 0e8b4699 */  CALL 0x0412c2d0
/* 0e8b469e */  LEA RDI,[RSP + 0x70]
/* 0e8b46a3 */  CALL 0x0e8c2290
/* 0e8b46a8 */  LEA RDI,[RSP + 0x88]
/* 0e8b46b0 */  MOVZX EAX,byte ptr [RSP + 0x2c0]
/* 0e8b46b8 */  MOV byte ptr [RSP + 0x340],AL
/* 0e8b46bf */  MOVUPS XMM0,xmmword ptr [RSP + 0x290]
/* 0e8b46c7 */  MOVUPS XMM1,xmmword ptr [RSP + 0x2a0]
/* 0e8b46cf */  MOVUPS XMM2,xmmword ptr [RSP + 0x2b0]
/* 0e8b46d7 */  MOVAPS xmmword ptr [RSP + 0x330],XMM2
/* 0e8b46df */  MOVAPS xmmword ptr [RSP + 0x320],XMM1
/* 0e8b46e7 */  MOVAPS xmmword ptr [RSP + 0x310],XMM0
/* 0e8b46ef */  CALL 0x048b0bc0
/* 0e8b46f4 */  MOVAPS XMM0,xmmword ptr [RSP + 0x310]
/* 0e8b46fc */  MOVAPS XMM1,xmmword ptr [RSP + 0x320]
/* 0e8b4704 */  MOVAPS XMM2,xmmword ptr [RSP + 0x330]
/* 0e8b470c */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0e8b4714 */  MOVAPS xmmword ptr [RSP + 0x2e0],XMM1
/* 0e8b471c */  MOVAPS xmmword ptr [RSP + 0x2f0],XMM2
/* 0e8b4724 */  MOV RAX,qword ptr [RSP + 0x340]
/* 0e8b472c */  MOV qword ptr [RSP + 0x300],RAX
/* 0e8b4734 */  LEA RDX,[0x145f54d]
/* 0e8b473b */  LEA RDI,[RSP + 0x70]
/* 0e8b4740 */  LEA RSI,[RSP + 0x2d0]
/* 0e8b4748 */  MOV ECX,0x13
/* 0e8b474d */  CALL 0x0e8c20a0
/* 0e8b4752 */  LEA RDI,[0xf5463b0]
/* 0e8b4759 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e8b4760 */  MOV ESI,0x8
/* 0e8b4765 */  CALL qword ptr [RAX + 0x10]
/* 0e8b4768 */  MOV R15,RAX
/* 0e8b476b */  TEST RAX,RAX
/* 0e8b476e */  JZ 0x0e8b609e
/* 0e8b4774 */  MOV qword ptr [R15],R14
/* 0e8b4777 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e8b477f */  MOV qword ptr [RSP + 0x88],R15
/* 0e8b4787 */  TEST RDI,RDI
/* 0e8b478a */  JZ 0x0e8b4792
/* 0e8b478c */  MOV RAX,qword ptr [RDI]
/* 0e8b478f */  CALL qword ptr [RAX + 0x8]
/* 0e8b4792 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e8b4797 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e8b479e */  MOV dword ptr [RSP + 0x8],EAX
/* 0e8b47a2 */  MOV qword ptr [RSP + 0x10],0x0
/* 0e8b47ab */  MOV dword ptr [RSP + 0x18],0x0
/* 0e8b47b3 */  MOV qword ptr [RSP + 0x20],0x1
/* 0e8b47bc */  MOV qword ptr [RSP + 0x28],0x0
/* 0e8b47c5 */  MOV qword ptr [RSP + 0x30],R12
/* 0e8b47ca */  MOV qword ptr [RSP + 0x38],RBX
/* 0e8b47cf */  MOV qword ptr [RSP + 0x40],RBP
/* 0e8b47d4 */  LEA RAX,[0xe8c2a70]
/* 0e8b47db */  MOV qword ptr [RSP + 0x48],RAX
/* 0e8b47e0 */  LEA RAX,[0xe8c2c80]
/* 0e8b47e7 */  MOV qword ptr [RSP + 0x50],RAX
/* 0e8b47ec */  MOV dword ptr [RSP + 0x58],0x0
/* 0e8b47f4 */  XORPS XMM0,XMM0
/* 0e8b47f7 */  MOVUPS xmmword ptr [RSP + 0x60],XMM0
/* 0e8b47fc */  LEA RSI,[RSP + 0x8]
/* 0e8b4801 */  CALL 0x048b05a0
/* 0e8b4806 */  MOV R15,qword ptr [RSP + 0x68]
/* 0e8b480b */  TEST R15,R15
/* 0e8b480e */  JZ 0x0e8b4833
/* 0e8b4810 */  MOV RAX,-0x1
/* 0e8b4817 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e8b481d */  TEST RAX,RAX
/* 0e8b4820 */  JNZ 0x0e8b4833
/* 0e8b4822 */  MOV RAX,qword ptr [R15]
/* 0e8b4825 */  MOV RDI,R15
/* 0e8b4828 */  CALL qword ptr [RAX + 0x10]
; truncated
