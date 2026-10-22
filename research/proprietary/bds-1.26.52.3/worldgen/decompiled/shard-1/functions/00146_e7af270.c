/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8af270 (ELF vaddr 0xe7af270)
 * Label: string:SurfaceBuilderType
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
    func_0x0db60de0(&uStack_5b0,&puStack_468,&uStack_3e7,0x10);
    bStack_1a8 = 0x22;
    uStack_1a7 = (undefined7)_DAT_013df14a;
    bStack_1a0 = (byte)((ulong)_DAT_013df14a >> 0x38);
    uStack_19f = (undefined7)_UNK_013df152;
    uStack_198 = (undefined1)((ulong)_UNK_013df152 >> 0x38);
    uStack_197 = 100;
    FUN_0db611c0(&puStack_268,&uStack_5b0,&uStack_1a7,0x11);
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
        auStack_548._0_8_ = func_0x048b0c90(puVar21,lVar9,uStack_440._4_4_,1);
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
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
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
    if ((DAT_0f737218 == '\0') && (iVar7 = func_0x04108328(&DAT_0f737218), iVar7 != 0)) {
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
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
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
    func_0x0e8b7ad0(&puStack_3a8,lStack_470,&DAT_01222b04,0x10);
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
        auStack_548._0_8_ = func_0x048b0c90(puVar21,lVar9,uStack_380._4_4_,1);
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
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
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
    if ((DAT_0f7372d0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7372d0), iVar7 != 0)) {
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
    func_0x0e8b7880(&uStack_228,&puStack_128,&puStack_468);
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
    func_0x0e8b7880(&bStack_328,&bStack_3e8,&puStack_368);
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
    func_0x0e8b86c0(auStack_548,&bStack_428,&DAT_0145f54d,0x13,1);
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
        auStack_548._0_8_ = func_0x048b0c90(puVar21,lVar9,uStack_140._4_4_,1);
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
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
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
    if ((DAT_0f737558 == '\0') && (iVar7 = func_0x04108328(&DAT_0f737558), iVar7 != 0)) {
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
    puStack_578 = &UNK_0490cb20;
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
    func_0x0e8bc0e0(auStack_548,&bStack_3e8,&DAT_01376c53,0x12);
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
    func_0x0e8bc0e0(auStack_548,&bStack_2a8,&DAT_0145f54d,0x13);
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
    puStack_578 = &UNK_0490cb20;
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
        auStack_548._0_8_ = func_0x048b0c90(puVar21,lVar9,uStack_200._4_4_,1);
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
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
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
    if ((DAT_0f7376c8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7376c8), iVar7 != 0)) {
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
    func_0x0e8c1dd0(&uStack_5b0,&puStack_468,auStack_548);
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
    puStack_578 = &UNK_0490cb20;
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
      lVar9 = func_0x048b0c90(lVar9,uVar11,uVar5,1);
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
    func_0x0e8c20a0(auStack_548,&bStack_328,&DAT_01376c53,0x12);
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
    func_0x0e8c20a0(auStack_548,&bStack_2e8,&DAT_0145f54d,0x13);
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
    func_0x0e8b7ad0(&puStack_3a8,lStack_470,lVar18,uVar16);
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
        auStack_548._0_8_ = func_0x048b0c90(puVar21,lVar9,uStack_200._4_4_,1);
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
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
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
    if ((DAT_0f737610 == '\0') && (iVar7 = func_0x04108328(&DAT_0f737610), iVar7 != 0)) {
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
    puStack_578 = &UNK_0490cb20;
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
      lVar9 = func_0x048b0c90(lVar9,uVar11,uVar5,1);
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
    func_0x0e8beb40(auStack_548,&bStack_328,&DAT_01376c53,0x12);
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
    func_0x0e8beb40(auStack_548,&bStack_2e8,&DAT_0145f54d,0x13);
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
      auStack_548._0_8_ = func_0x048b0c90(lVar18,lVar9,uStack_3c0._4_4_,1);
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
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
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
  if ((DAT_0f737780 == '\0') && (iVar7 = func_0x04108328(&DAT_0f737780), iVar7 != 0)) {
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
  puStack_578 = &UNK_0490cb20;
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
    lVar18 = func_0x048b0c90(lVar9 + 0x18,uVar11,uVar5,1);
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
  func_0x0e8c46c0(auStack_548,&bStack_2e8,&DAT_01376c53,0x12);
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
  func_0x0e8c46c0(auStack_548,&puStack_268,&DAT_0145f54d,0x13);
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
