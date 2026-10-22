/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeccb210 (ELF vaddr 0xebcb210)
 * Label: caller-of-callee
 * Body:  [[0eccb210, 0eccb429] [0eccb430, 0eccb471] [0eccb480, 0eccc001] [0eccc010, 0eccc279] [0eccc280, 0eccc2c1] [0eccc2d0, 0eccce39] [0eccce40, 0eccce81] [0eccce90, 0eccd781] [0eccd790, 0eccd9d0] [0eccd9e0, 0eccdcd9] [0eccdce0, 0eccdd21] [0eccdd30, 0ecce939] [0ecce940, 0ecce981] [0ecce990, 0ecd18d3]]
 * Ghidra: FUN_0eccb210
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eccb210(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long lVar21;
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
  undefined8 uStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  code *pcStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined1 *puStack_478;
  undefined1 *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined4 uStack_458;
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [16];
  undefined4 uStack_428;
  undefined4 uStack_424;
  int iStack_420;
  undefined4 uStack_41c;
  undefined1 uStack_418;
  undefined1 uStack_417;
  undefined5 uStack_416;
  undefined1 uStack_411;
  undefined4 uStack_410;
  uint uStack_40c;
  char cStack_408;
  undefined6 uStack_407;
  undefined1 uStack_401;
  undefined1 uStack_400;
  undefined1 uStack_3ff;
  undefined5 uStack_3fe;
  undefined1 uStack_3f9;
  undefined4 uStack_3f8;
  undefined1 uStack_3f4;
  undefined2 uStack_3f3;
  undefined1 uStack_3f1;
  undefined1 uStack_3f0;
  undefined5 uStack_3ef;
  undefined1 uStack_3ea;
  undefined1 uStack_3e9;
  undefined1 uStack_3e8;
  undefined5 uStack_3e7;
  undefined1 uStack_3e2;
  undefined1 uStack_3e1;
  undefined7 uStack_3e0;
  undefined1 uStack_3d9;
  long lStack_3d8;
  undefined7 uStack_3d0;
  undefined1 uStack_3c9;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  long lStack_3c0;
  long lStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined2 uStack_390;
  undefined2 uStack_38e;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  long lStack_380;
  undefined2 uStack_378;
  undefined2 uStack_376;
  uint uStack_374;
  uint uStack_370;
  undefined1 uStack_36c;
  undefined1 auStack_368 [16];
  undefined8 *puStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined2 uStack_330;
  undefined4 uStack_32e;
  undefined2 uStack_32a;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined2 uStack_2f0;
  undefined4 uStack_2ee;
  undefined2 uStack_2ea;
  undefined1 auStack_2e8 [16];
  undefined8 *puStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [16];
  undefined8 *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0db3ca80();
  if ((DAT_0f773528 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773528), iVar7 != 0)) {
    func_0x0ed1d050();
    __cxa_atexit(&UNK_048ae800,&DAT_0f7734a8,0xf53dab8);
    func_0x0410844d(&DAT_0f773528);
  }
  lVar16 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7734a8 + 4)) * 8);
  do {
    lVar21 = *plVar13;
    if (lVar21 == -1) goto LAB_0eccb290;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f7734a8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eccb290:
    puVar9 = &DAT_0f7734a8;
    if (iRam000000000f773508 != -0x2b3da790) goto LAB_0eccb312;
LAB_0eccb2bb:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_0eccb312;
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar14 = lVar21 + 9;
    if (bVar22) {
      lVar14 = *(long *)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x0ed1d470(&puStack_328,param_1,lVar14,uVar17);
    if ((char)uStack_2f8 != '\0') goto LAB_0eccb2f8;
LAB_0eccb338:
    puVar9 = puStack_328;
    if ((DAT_0f773528 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773528), iVar7 != 0)) {
      func_0x0ed1d050();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7734a8,0xf53dab8);
      func_0x0410844d(&DAT_0f773528);
    }
    plVar13 = (long *)(*(long *)(puVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7734a8 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_0eccb3b1;
      plVar13 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f7734a8 + 4)
            );
    if (plVar13 == *(long **)(puVar9 + 0x38)) {
LAB_0eccb3b1:
      puVar19 = &DAT_0f7734a8;
    }
    else {
      puVar19 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(puStack_328 + 0x50); pbVar10 != *(byte **)(puStack_328 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar3 = *pbVar10;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0eccb48a;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0eccb48a:
        if ((bVar3 & 1) == 0) {
          pbVar18 = pbVar10 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar10 + 0x10);
        }
        auVar23[0] = -(*pbVar18 == 0x5b);
        auVar23[1] = -(pbVar18[1] == 99);
        auVar23[2] = -(pbVar18[2] == 0x65);
        auVar23[3] = -(pbVar18[3] == 0x72);
        auVar23[4] = -(pbVar18[4] == 0x65);
        auVar23[5] = -(pbVar18[5] == 0x61);
        auVar23[6] = -(pbVar18[6] == 0x6c);
        auVar23[7] = -(pbVar18[7] == 0x3a);
        auVar23[8] = -(pbVar18[8] == 100);
        auVar23[9] = -(pbVar18[9] == 0x6f);
        auVar23[10] = -(pbVar18[10] == 99);
        auVar23[0xb] = -(pbVar18[0xb] == 0x75);
        auVar23[0xc] = -(pbVar18[0xc] == 0x6d);
        auVar23[0xd] = -(pbVar18[0xd] == 0x65);
        auVar23[0xe] = -(pbVar18[0xe] == 0x6e);
        auVar23[0xf] = -(pbVar18[0xf] == 0x74);
        auVar28[0] = -(pbVar18[10] == 99);
        auVar28[1] = -(pbVar18[0xb] == 0x75);
        auVar28[2] = -(pbVar18[0xc] == 0x6d);
        auVar28[3] = -(pbVar18[0xd] == 0x65);
        auVar28[4] = -(pbVar18[0xe] == 0x6e);
        auVar28[5] = -(pbVar18[0xf] == 0x74);
        auVar28[6] = -(pbVar18[0x10] == 0x61);
        auVar28[7] = -(pbVar18[0x11] == 0x74);
        auVar28[8] = -(pbVar18[0x12] == 0x69);
        auVar28[9] = -(pbVar18[0x13] == 0x6f);
        auVar28[10] = -(pbVar18[0x14] == 0x6e);
        auVar28[0xb] = -(pbVar18[0x15] == 0x5f);
        auVar28[0xc] = -(pbVar18[0x16] == 0x74);
        auVar28[0xd] = -(pbVar18[0x17] == 0x61);
        auVar28[0xe] = -(pbVar18[0x18] == 0x67);
        auVar28[0xf] = -(pbVar18[0x19] == 0x5d);
        auVar28 = auVar28 & auVar23;
        if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar10 == *(byte **)(puStack_328 + 0x58)) {
LAB_0eccb4b8:
      if ((int)uStack_300 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0eccb549;
        lVar21 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_300._4_4_;
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(puVar9 + 0x18);
        }
        auStack_438._0_8_ = FUN_048b0c90(puVar9 + 0x18,puVar19,uVar5,1);
        if (auStack_438._0_8_ == 0) {
          auStack_438 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_438);
          if (auStack_438._0_8_ == 0) goto LAB_0eccb549;
        }
        if ((*(int *)(auStack_438._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_438._0_8_ + 0x58) != 0)) {
          lVar21 = *(long *)(auStack_438._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0eccb549:
          lVar21 = 0;
        }
      }
      plStack_498 = (long *)&UNK_0488e0b0;
      pcStack_490 = (code *)0x0;
      uStack_488 = CONCAT35(uStack_488._5_3_,0x48b5725f);
      uStack_4a8 = 0;
      auStack_438 = (undefined1  [16])0x0;
      iStack_420 = 0x488e0b0;
      uStack_41c = 0;
      uStack_418 = 0;
      uStack_417 = 0;
      uStack_416 = 0;
      uStack_411 = 0;
      uStack_410 = 0x48b5725f;
      uStack_40c = uStack_40c & 0xffffff00;
      puStack_358 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_358 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_368._8_8_ = 0x1a;
      auStack_368._0_8_ = 0x21;
      *(ulong *)((long)puStack_358 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_358 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_358 = _DAT_013bbacd;
      puStack_358[1] = uVar4;
      *(undefined1 *)((long)puStack_358 + 0x1a) = 0;
      lVar21 = func_0x048b5060(lVar21,auStack_368);
      *(undefined8 *)(lVar21 + 0x20) = 0;
      if ((undefined1 *)(lVar21 + 0x20) == auStack_438) {
        pcVar11 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar21 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar21 + 0x28);
          (**(code **)(lVar21 + 0x40))(puVar20);
          if ((char)uStack_40c != '\0') {
            if ((char)uStack_40c == '\x02') {
              (*(code *)CONCAT44(uStack_41c,iStack_420))(5,auStack_438 + 8,puVar20);
            }
            else {
              uVar4 = auStack_438._8_8_;
              auStack_438._8_8_ = 0;
              *puVar20 = uVar4;
            }
          }
        }
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(ulong *)(lVar21 + 0x38) = CONCAT44(uStack_41c,iStack_420);
        *(ulong *)(lVar21 + 0x40) =
             CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(undefined4 *)(lVar21 + 0x48) = uStack_410;
        *(char *)(lVar21 + 0x4c) = (char)uStack_40c;
      }
      if ((auStack_368[0] & 1) != 0) {
        func_0x0412a280(puStack_358,auStack_368._0_8_ & 0xfffffffffffffffe);
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(auStack_438 + 8);
      }
      if (pcStack_490 != (code *)0x0) {
        (*pcStack_490)(&uStack_4a8);
      }
    }
    else {
      iVar7 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0eccb4b8;
    }
    uStack_2d0 = CONCAT71(uStack_30f,uStack_310);
    uStack_2c8 = uStack_308;
    uStack_2b8 = uStack_2f8;
    puStack_2d8 = puStack_318;
    auStack_2e8._8_8_ = uStack_320;
    auStack_2e8._0_8_ = puStack_328;
    uStack_2c0 = 0x1e1bc4d500000004;
    if ((DAT_0f773548 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773548), iVar7 != 0)) {
      func_0x0ed1d160();
      func_0x0410844d(&DAT_0f773548);
    }
    auStack_438._0_4_ = uStack_2c0._4_4_;
    auStack_438._8_8_ = 0;
    uStack_428 = 0;
    iStack_420 = 1;
    uStack_41c = 0;
    uStack_418 = 0xd0;
    uStack_417 = 0xea;
    uStack_416 = 0x48a;
    uStack_411 = 0;
    uStack_410 = 0x79523d0;
    uStack_40c = 0;
    cStack_408 = 0xc0;
    uStack_407 = 0xed1df;
    uStack_401 = 0;
    uStack_400 = 0;
    uStack_3ff = 0;
    uStack_3fe = 0;
    uStack_3f9 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    FUN_049057f0(auStack_2e8 + 8,auStack_438);
    func_0x048aea50(auStack_438);
    plStack_498 = (long *)uStack_2d0;
    pcStack_490 = (code *)uStack_2c8;
    uStack_4a8 = auStack_2e8._8_8_;
    plStack_4a0 = puStack_2d8;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef46ef8;
    if ((DAT_0f551bc8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f551bc8), iVar7 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_438._0_4_ = _DAT_0f551bb4;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
    *puVar12 = &UNK_0ef46c48;
    puVar12[3] = puVar20;
    puVar12[4] = 0;
    *(undefined1 *)(puVar12 + 5) = 0xff;
    auStack_438._8_8_ = puVar12 + 3;
    uStack_428 = SUB84(puVar12,0);
    uStack_424 = (undefined4)((ulong)puVar12 >> 0x20);
    auStack_368 = (undefined1  [16])0x0;
    func_0x048afd20(&uStack_4a8,auStack_438);
    plVar13 = (long *)CONCAT44(uStack_424,uStack_428);
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar4 = auStack_368._8_8_;
    if ((long *)auStack_368._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_368._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_368._8_8_ + 0x10))(auStack_368._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    auStack_368 = auStack_2e8;
    puStack_358 = puStack_2d8;
    uStack_350 = uStack_2d0;
    uStack_348 = uStack_2c8;
    uStack_340 = uStack_2c0;
    uStack_338 = uStack_2b8;
    func_0x0ed1da60(auStack_438,auStack_2e8._0_8_ + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0eccba1f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eccba1f;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    if ((DAT_0f773548 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773548), iVar7 != 0)) {
      func_0x0ed1d160();
      func_0x0410844d(&DAT_0f773548);
    }
    uStack_340 = 0x425ed3ca00000001;
    uVar4 = auStack_368._0_8_;
    if ((DAT_0f773528 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773528), iVar7 != 0)) {
      func_0x0ed1d050();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7734a8,0xf53dab8);
      func_0x0410844d(&DAT_0f773528);
    }
    plVar13 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f7734a8 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_0eccbac1;
      plVar13 = (long *)(*(long *)(uVar4 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f7734a8 + 4))
    ;
    if (plVar13 == *(long **)(uVar4 + 0x38)) {
LAB_0eccbac1:
      auStack_438._0_8_ = &DAT_0f7734a8;
    }
    else {
      auStack_438._0_8_ = plVar13[2];
    }
    auStack_438._8_8_ = uVar4 + 0x18;
    func_0x0ed621a0(auStack_438,uStack_340._4_4_);
    auStack_438._0_2_ = 0x10;
    auStack_438._8_8_ = auStack_368 + 8;
    uStack_428 = uStack_340._4_4_;
    iStack_420 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_417 = 0;
    uStack_416 = 0;
    uStack_411 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    cStack_408 = 0;
    uStack_407 = 0;
    uStack_401 = 0;
    uStack_400 = 0;
    uStack_3ff = 0;
    uStack_3fe = 0;
    uStack_3f9 = 0;
    uStack_3f8 = 0x6c61760a;
    uStack_3f4 = 0x75;
    uStack_3f3 = 0x65;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_3b0 = 0x3f600000;
    func_0x048afb10(&uStack_3e0,8);
    uStack_388 = 0;
    uStack_384 = 0;
    lStack_380 = 0;
    lStack_398 = 0;
    uStack_390 = 0;
    uStack_38e = 0;
    uStack_38c = 0;
    lStack_3a8 = 0;
    lStack_3a0 = 0;
    uStack_378 = 0xff00;
    uStack_374 = uStack_374 & 0xffffff00;
    uStack_370 = uStack_370 & 0xffffff00;
    uStack_36c = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef46ef8;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_04906f70;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_04906c50;
    puStack_468 = &UNK_0ed1e1b0;
    puStack_460 = &UNK_0ed1e310;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uVar4 = auStack_438._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_4a0 = plVar13 + 3;
    lVar21 = CONCAT44(uStack_41c,iStack_420);
    lVar14 = CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
    iStack_420 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_417 = 0;
    uStack_416 = 0;
    uStack_411 = 0;
    plVar13[3] = lVar21;
    plVar13[4] = lVar14;
    plVar13[7] = CONCAT17(uStack_3f9,CONCAT52(uStack_3fe,CONCAT11(uStack_3ff,uStack_400)));
    plVar13[5] = CONCAT44(uStack_40c,uStack_410);
    plVar13[6] = CONCAT17(uStack_401,CONCAT61(uStack_407,cStack_408));
    uStack_410 = 0;
    uStack_40c = 0;
    cStack_408 = '\0';
    uStack_407 = 0;
    uStack_401 = 0;
    uStack_400 = 0;
    uStack_3ff = 0;
    uStack_3fe = 0;
    uStack_3f9 = 0;
    plVar13[10] = CONCAT17(uStack_3e1,CONCAT16(uStack_3e2,CONCAT51(uStack_3e7,uStack_3e8)));
    plVar13[8] = CONCAT17(uStack_3f1,CONCAT25(uStack_3f3,CONCAT14(uStack_3f4,uStack_3f8)));
    plVar13[9] = CONCAT17(uStack_3e9,CONCAT16(uStack_3ea,CONCAT51(uStack_3ef,uStack_3f0)));
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    plVar13[0xb] = CONCAT17(uStack_3d9,uStack_3e0);
    plVar13[0xc] = lStack_3d8;
    plVar13[0xd] = CONCAT17(uStack_3c9,uStack_3d0);
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    plVar13[0xe] = CONCAT44(uStack_3c4,uStack_3c8);
    plVar13[0xf] = lStack_3c0;
    plVar13[0x10] = lStack_3b8;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_3b0;
    plVar13[0x12] = lStack_3a8;
    plVar13[0x13] = lStack_3a0;
    plVar13[0x14] = lStack_398;
    lStack_3a8 = 0;
    lStack_3a0 = 0;
    lStack_398 = 0;
    plVar13[0x17] = lStack_380;
    plVar13[0x15] = CONCAT44(uStack_38c,CONCAT22(uStack_38e,uStack_390));
    plVar13[0x16] = CONCAT44(uStack_384,uStack_388);
    uStack_390 = 0;
    uStack_38e = 0;
    uStack_38c = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    lStack_380 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_36c,CONCAT43(uStack_370,uStack_374._1_3_));
    plVar13[0x18] = CONCAT44(uStack_374,CONCAT22(uStack_376,uStack_378));
    auStack_2a8 = (undefined1  [16])0x0;
    plStack_498 = plVar13;
    func_0x048afd20(uVar4,&uStack_4a8);
    plVar13 = plStack_498;
    if (plStack_498 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_498 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_498 + 0x10))(plStack_498);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar6 = auStack_2a8._8_8_;
    if ((long *)auStack_2a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_2a8._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_2a8._8_8_ + 0x10))(auStack_2a8._8_8_);
        func_0x0412c2d0(uVar6);
      }
    }
    lVar21 = *(long *)(uVar4 + 0x10);
    iVar7 = *(int *)(uVar4 + 0x1c);
    if (iVar7 == 2) {
      piVar15 = *(int **)(*(long *)(lVar21 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != *(int *)(uVar4 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != *(long *)(uVar4 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
      }
LAB_0eccc01a:
      piVar15[4] = piVar15[4] | auStack_438._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar15 = *(int **)(*(long *)(lVar21 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != *(int *)(uVar4 + 0x18)) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eccc01a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar21 + 0x18) = *(uint *)(lVar21 + 0x18) | auStack_438._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_420);
    lVar21 = func_0x0d8b6680(lVar16);
    if (*(int *)(lVar21 + 0x60) != -0x2b3da790) goto LAB_0eccc060;
LAB_0eccc033:
    lVar21 = *(long *)(lVar21 + 0x68);
    if (lVar21 == 0) goto LAB_0eccc060;
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar21 + 9);
    if (bVar22) {
      puVar9 = *(undefined **)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0eccb2bb;
LAB_0eccb312:
    func_0x0ed1d470(&puStack_328,param_1,&UNK_01357cbb,0x1f);
    if ((char)uStack_2f8 == '\0') goto LAB_0eccb338;
LAB_0eccb2f8:
    lVar21 = func_0x0d8b6680(lVar16);
    if (*(int *)(lVar21 + 0x60) == -0x2b3da790) goto LAB_0eccc033;
LAB_0eccc060:
    puVar9 = &UNK_0129d4a7;
    uVar17 = 0xe;
  }
  func_0x0d8b6ca0(auStack_438,param_1,puVar9,uVar17,0);
  if (cStack_408 == '\0') {
    func_0x0d8a3430(&uStack_4a8,auStack_438);
  }
  func_0x0ecaf190(param_1);
  if ((DAT_0f7735e0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7735e0), iVar7 != 0)) {
    func_0x0ed1e5a0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f773560,0xf53dab8);
    func_0x0410844d(&DAT_0f7735e0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773560 + 4)) * 8);
  do {
    lVar21 = *plVar13;
    if (lVar21 == -1) goto LAB_0eccc100;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773560 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eccc100:
    puVar9 = &DAT_0f773560;
    if (iRam000000000f7735c0 != -0x2b3da790) goto LAB_0eccc16d;
LAB_0eccc12b:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_0eccc16d;
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar14 = lVar21 + 9;
    if (bVar22) {
      lVar14 = *(long *)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x0ed1ec20(&puStack_328,param_1,lVar14,uVar17);
    puVar9 = puStack_328;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0eccc12b;
LAB_0eccc16d:
    func_0x0ed1ec20(&puStack_328,param_1,&UNK_011d000f,0x37);
    puVar9 = puStack_328;
  }
  puStack_328 = puVar9;
  if ((char)uStack_2f8 == '\0') {
    if ((DAT_0f7735e0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7735e0), iVar7 != 0)) {
      func_0x0ed1e5a0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773560,0xf53dab8);
      func_0x0410844d(&DAT_0f7735e0);
    }
    plVar13 = (long *)(*(long *)(puVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f773560 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_0eccc201;
      plVar13 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773560 + 4)
            );
    if (plVar13 == *(long **)(puVar9 + 0x38)) {
LAB_0eccc201:
      puVar19 = &DAT_0f773560;
    }
    else {
      puVar19 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(puStack_328 + 0x50); pbVar10 != *(byte **)(puStack_328 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar3 = *pbVar10;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0eccc2da;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0eccc2da:
        if ((bVar3 & 1) == 0) {
          pbVar18 = pbVar10 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar10 + 0x10);
        }
        auVar24[0] = -(*pbVar18 == 0x5b);
        auVar24[1] = -(pbVar18[1] == 99);
        auVar24[2] = -(pbVar18[2] == 0x65);
        auVar24[3] = -(pbVar18[3] == 0x72);
        auVar24[4] = -(pbVar18[4] == 0x65);
        auVar24[5] = -(pbVar18[5] == 0x61);
        auVar24[6] = -(pbVar18[6] == 0x6c);
        auVar24[7] = -(pbVar18[7] == 0x3a);
        auVar24[8] = -(pbVar18[8] == 100);
        auVar24[9] = -(pbVar18[9] == 0x6f);
        auVar24[10] = -(pbVar18[10] == 99);
        auVar24[0xb] = -(pbVar18[0xb] == 0x75);
        auVar24[0xc] = -(pbVar18[0xc] == 0x6d);
        auVar24[0xd] = -(pbVar18[0xd] == 0x65);
        auVar24[0xe] = -(pbVar18[0xe] == 0x6e);
        auVar24[0xf] = -(pbVar18[0xf] == 0x74);
        auVar29[0] = -(pbVar18[10] == 99);
        auVar29[1] = -(pbVar18[0xb] == 0x75);
        auVar29[2] = -(pbVar18[0xc] == 0x6d);
        auVar29[3] = -(pbVar18[0xd] == 0x65);
        auVar29[4] = -(pbVar18[0xe] == 0x6e);
        auVar29[5] = -(pbVar18[0xf] == 0x74);
        auVar29[6] = -(pbVar18[0x10] == 0x61);
        auVar29[7] = -(pbVar18[0x11] == 0x74);
        auVar29[8] = -(pbVar18[0x12] == 0x69);
        auVar29[9] = -(pbVar18[0x13] == 0x6f);
        auVar29[10] = -(pbVar18[0x14] == 0x6e);
        auVar29[0xb] = -(pbVar18[0x15] == 0x5f);
        auVar29[0xc] = -(pbVar18[0x16] == 0x74);
        auVar29[0xd] = -(pbVar18[0x17] == 0x61);
        auVar29[0xe] = -(pbVar18[0x18] == 0x67);
        auVar29[0xf] = -(pbVar18[0x19] == 0x5d);
        auVar29 = auVar29 & auVar24;
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
    if (pbVar10 == *(byte **)(puStack_328 + 0x58)) {
LAB_0eccc308:
      if ((int)uStack_300 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0eccc399;
        lVar21 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_300._4_4_;
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(puVar9 + 0x18);
        }
        auStack_438._0_8_ = FUN_048b0c90(puVar9 + 0x18,puVar19,uVar5,1);
        if (auStack_438._0_8_ == 0) {
          auStack_438 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_438);
          if (auStack_438._0_8_ == 0) goto LAB_0eccc399;
        }
        if ((*(int *)(auStack_438._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_438._0_8_ + 0x58) != 0)) {
          lVar21 = *(long *)(auStack_438._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0eccc399:
          lVar21 = 0;
        }
      }
      plStack_498 = (long *)&UNK_0488e0b0;
      pcStack_490 = (code *)0x0;
      uStack_488 = CONCAT35(uStack_488._5_3_,0x48b5725f);
      uStack_4a8 = 0;
      auStack_438 = (undefined1  [16])0x0;
      iStack_420 = 0x488e0b0;
      uStack_41c = 0;
      uStack_418 = 0;
      uStack_417 = 0;
      uStack_416 = 0;
      uStack_411 = 0;
      uStack_410 = 0x48b5725f;
      uStack_40c = uStack_40c & 0xffffff00;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_368._8_8_ = 0x1a;
      auStack_368._0_8_ = 0x21;
      *(ulong *)((long)puVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar20 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar20 = _DAT_013bbacd;
      puVar20[1] = uVar4;
      *(undefined1 *)((long)puVar20 + 0x1a) = 0;
      puStack_358 = puVar20;
      lVar21 = func_0x048b5060(lVar21,auStack_368);
      *(undefined8 *)(lVar21 + 0x20) = 0;
      if ((undefined1 *)(lVar21 + 0x20) == auStack_438) {
        pcVar11 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar21 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar21 + 0x28);
          (**(code **)(lVar21 + 0x40))(puVar20);
          if ((char)uStack_40c != '\0') {
            if ((char)uStack_40c == '\x02') {
              (*(code *)CONCAT44(uStack_41c,iStack_420))(5,auStack_438 + 8,puVar20);
            }
            else {
              uVar4 = auStack_438._8_8_;
              auStack_438._8_8_ = 0;
              *puVar20 = uVar4;
            }
          }
        }
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(ulong *)(lVar21 + 0x38) = CONCAT44(uStack_41c,iStack_420);
        *(ulong *)(lVar21 + 0x40) =
             CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(undefined4 *)(lVar21 + 0x48) = uStack_410;
        *(char *)(lVar21 + 0x4c) = (char)uStack_40c;
      }
      if ((auStack_368[0] & 1) != 0) {
        func_0x0412a280(puStack_358,auStack_368._0_8_ & 0xfffffffffffffffe);
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(auStack_438 + 8);
      }
      if (pcStack_490 != (code *)0x0) {
        (*pcStack_490)(&uStack_4a8);
      }
    }
    else {
      iVar7 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0eccc308;
    }
    uStack_238 = uStack_2f8;
    uStack_250 = CONCAT71(uStack_30f,uStack_310);
    uStack_248 = uStack_308;
    uStack_240 = uStack_300;
    puStack_258 = puStack_318;
    puStack_268 = puStack_328;
    uStack_260 = uStack_320;
    func_0x0ed1f210(auStack_438,puStack_328 + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0eccc61f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eccc61f;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0ed1f7b0(auStack_438,&puStack_268,&UNK_011c3fb1,10);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef46ce8;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0490ce30;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_0490cb20;
    puStack_468 = &UNK_0ed1fd60;
    puStack_460 = &UNK_0ed1fec0;
    uStack_458 = 0;
    auStack_450._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed1fa60(auStack_438);
    uStack_278 = CONCAT71(uStack_278._1_7_,(undefined1)uStack_238);
    uStack_288 = uStack_248;
    uStack_280 = uStack_240;
    puStack_298 = puStack_258;
    uStack_290 = uStack_250;
    auStack_2a8._8_8_ = uStack_260;
    auStack_2a8._0_8_ = puStack_268;
    func_0x048b0bc0(&iStack_420);
    auStack_2e8 = auStack_2a8;
    puStack_2d8 = puStack_298;
    uStack_2d0 = uStack_290;
    uStack_2c8 = uStack_288;
    uStack_2c0 = uStack_280;
    uStack_2b8 = uStack_278;
    func_0x0ed1f210(auStack_438,auStack_2a8._0_8_ + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0eccc8bf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eccc8bf;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0ed1f7b0(auStack_438,auStack_2e8,&UNK_011a1060,0xd);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f48fcb8;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0d9452a0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_0d944cb0;
    puStack_468 = &UNK_0ed20090;
    puStack_460 = &UNK_0ed201f0;
    uStack_458 = 0;
    auStack_450._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed1fa60(auStack_438);
    uStack_338 = CONCAT71(uStack_338._1_7_,(char)uStack_2b8);
    uStack_348 = uStack_2c8;
    uStack_340 = uStack_2c0;
    puStack_358 = puStack_2d8;
    uStack_350 = uStack_2d0;
    auStack_368 = auStack_2e8;
    func_0x048b0bc0(&iStack_420);
    func_0x0ed1f210(auStack_438,auStack_368._0_8_ + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0ecccb1f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ecccb1f;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0ed1f7b0(auStack_438,auStack_368,&UNK_01483087,0xb);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e1b88;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0ed205f0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_0d8b6680;
    puStack_468 = &UNK_0ed20600;
    puStack_460 = &UNK_0ed207d0;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed1fa60(auStack_438);
    func_0x048b0bc0(&iStack_420);
  }
  if ((DAT_0f773698 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773698), iVar7 != 0)) {
    func_0x0ed20d10();
    __cxa_atexit(&UNK_048ae800,&DAT_0f773618,0xf53dab8);
    func_0x0410844d(&DAT_0f773698);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773618 + 4)) * 8);
  do {
    lVar21 = *plVar13;
    if (lVar21 == -1) goto LAB_0eccccc0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773618 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eccccc0:
    puVar9 = &DAT_0f773618;
    if (iRam000000000f773678 != -0x2b3da790) goto LAB_0ecccd2d;
LAB_0ecccceb:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_0ecccd2d;
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar14 = lVar21 + 9;
    if (bVar22) {
      lVar14 = *(long *)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x0ed21a10(&puStack_328,param_1,lVar14,uVar17);
    puVar9 = puStack_328;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0ecccceb;
LAB_0ecccd2d:
    func_0x0ed21a10(&puStack_328,param_1,&UNK_012a07a5,0x22);
    puVar9 = puStack_328;
  }
  puStack_328 = puVar9;
  if ((char)uStack_2f8 == '\0') {
    if ((DAT_0f773698 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773698), iVar7 != 0)) {
      func_0x0ed20d10();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773618,0xf53dab8);
      func_0x0410844d(&DAT_0f773698);
    }
    plVar13 = (long *)(*(long *)(puVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f773618 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_0ecccdc1;
      plVar13 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773618 + 4)
            );
    if (plVar13 == *(long **)(puVar9 + 0x38)) {
LAB_0ecccdc1:
      puVar19 = &DAT_0f773618;
    }
    else {
      puVar19 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(puStack_328 + 0x50); pbVar10 != *(byte **)(puStack_328 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar3 = *pbVar10;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0eccce9a;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0eccce9a:
        if ((bVar3 & 1) == 0) {
          pbVar18 = pbVar10 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar10 + 0x10);
        }
        auVar25[0] = -(*pbVar18 == 0x5b);
        auVar25[1] = -(pbVar18[1] == 99);
        auVar25[2] = -(pbVar18[2] == 0x65);
        auVar25[3] = -(pbVar18[3] == 0x72);
        auVar25[4] = -(pbVar18[4] == 0x65);
        auVar25[5] = -(pbVar18[5] == 0x61);
        auVar25[6] = -(pbVar18[6] == 0x6c);
        auVar25[7] = -(pbVar18[7] == 0x3a);
        auVar25[8] = -(pbVar18[8] == 100);
        auVar25[9] = -(pbVar18[9] == 0x6f);
        auVar25[10] = -(pbVar18[10] == 99);
        auVar25[0xb] = -(pbVar18[0xb] == 0x75);
        auVar25[0xc] = -(pbVar18[0xc] == 0x6d);
        auVar25[0xd] = -(pbVar18[0xd] == 0x65);
        auVar25[0xe] = -(pbVar18[0xe] == 0x6e);
        auVar25[0xf] = -(pbVar18[0xf] == 0x74);
        auVar30[0] = -(pbVar18[10] == 99);
        auVar30[1] = -(pbVar18[0xb] == 0x75);
        auVar30[2] = -(pbVar18[0xc] == 0x6d);
        auVar30[3] = -(pbVar18[0xd] == 0x65);
        auVar30[4] = -(pbVar18[0xe] == 0x6e);
        auVar30[5] = -(pbVar18[0xf] == 0x74);
        auVar30[6] = -(pbVar18[0x10] == 0x61);
        auVar30[7] = -(pbVar18[0x11] == 0x74);
        auVar30[8] = -(pbVar18[0x12] == 0x69);
        auVar30[9] = -(pbVar18[0x13] == 0x6f);
        auVar30[10] = -(pbVar18[0x14] == 0x6e);
        auVar30[0xb] = -(pbVar18[0x15] == 0x5f);
        auVar30[0xc] = -(pbVar18[0x16] == 0x74);
        auVar30[0xd] = -(pbVar18[0x17] == 0x61);
        auVar30[0xe] = -(pbVar18[0x18] == 0x67);
        auVar30[0xf] = -(pbVar18[0x19] == 0x5d);
        auVar30 = auVar30 & auVar25;
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
    if (pbVar10 == *(byte **)(puStack_328 + 0x58)) {
LAB_0ecccec8:
      if ((int)uStack_300 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0ecccf59;
        lVar21 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_300._4_4_;
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(puVar9 + 0x18);
        }
        auStack_438._0_8_ = FUN_048b0c90(puVar9 + 0x18,puVar19,uVar5,1);
        if (auStack_438._0_8_ == 0) {
          auStack_438 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_438);
          if (auStack_438._0_8_ == 0) goto LAB_0ecccf59;
        }
        if ((*(int *)(auStack_438._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_438._0_8_ + 0x58) != 0)) {
          lVar21 = *(long *)(auStack_438._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0ecccf59:
          lVar21 = 0;
        }
      }
      plStack_498 = (long *)&UNK_0488e0b0;
      pcStack_490 = (code *)0x0;
      uStack_488 = CONCAT35(uStack_488._5_3_,0x48b5725f);
      uStack_4a8 = 0;
      auStack_438 = (undefined1  [16])0x0;
      iStack_420 = 0x488e0b0;
      uStack_41c = 0;
      uStack_418 = 0;
      uStack_417 = 0;
      uStack_416 = 0;
      uStack_411 = 0;
      uStack_410 = 0x48b5725f;
      uStack_40c = uStack_40c & 0xffffff00;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_368._8_8_ = 0x1a;
      auStack_368._0_8_ = 0x21;
      *(ulong *)((long)puVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar20 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar20 = _DAT_013bbacd;
      puVar20[1] = uVar4;
      *(undefined1 *)((long)puVar20 + 0x1a) = 0;
      puStack_358 = puVar20;
      lVar21 = func_0x048b5060(lVar21,auStack_368);
      *(undefined8 *)(lVar21 + 0x20) = 0;
      if ((undefined1 *)(lVar21 + 0x20) == auStack_438) {
        pcVar11 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar21 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar21 + 0x28);
          (**(code **)(lVar21 + 0x40))(puVar20);
          if ((char)uStack_40c != '\0') {
            if ((char)uStack_40c == '\x02') {
              (*(code *)CONCAT44(uStack_41c,iStack_420))(5,auStack_438 + 8,puVar20);
            }
            else {
              uVar4 = auStack_438._8_8_;
              auStack_438._8_8_ = 0;
              *puVar20 = uVar4;
            }
          }
        }
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(ulong *)(lVar21 + 0x38) = CONCAT44(uStack_41c,iStack_420);
        *(ulong *)(lVar21 + 0x40) =
             CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(undefined4 *)(lVar21 + 0x48) = uStack_410;
        *(char *)(lVar21 + 0x4c) = (char)uStack_40c;
      }
      if ((auStack_368[0] & 1) != 0) {
        func_0x0412a280(puStack_358,auStack_368._0_8_ & 0xfffffffffffffffe);
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(auStack_438 + 8);
      }
      if (pcStack_490 != (code *)0x0) {
        (*pcStack_490)(&uStack_4a8);
      }
    }
    else {
      iVar7 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0ecccec8;
    }
    uStack_338 = uStack_2f8;
    uStack_350 = CONCAT71(uStack_30f,uStack_310);
    uStack_348 = uStack_308;
    uStack_340 = uStack_300;
    puStack_358 = puStack_318;
    auStack_368._8_8_ = uStack_320;
    auStack_368._0_8_ = puStack_328;
    if ((DAT_0f7736b8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7736b8), iVar7 != 0)) {
      func_0x0ed20e20();
      func_0x0410844d(&DAT_0f7736b8);
    }
    uStack_340 = 0xc6ae08df00000001;
    uVar4 = auStack_368._0_8_;
    if ((DAT_0f773698 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773698), iVar7 != 0)) {
      func_0x0ed20d10();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773618,0xf53dab8);
      func_0x0410844d(&DAT_0f773698);
    }
    plVar13 = (long *)(*(long *)(uVar4 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f773618 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_0eccd291;
      plVar13 = (long *)(*(long *)(uVar4 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773618 + 4))
    ;
    if (plVar13 == *(long **)(uVar4 + 0x38)) {
LAB_0eccd291:
      auStack_438._0_8_ = &DAT_0f773618;
    }
    else {
      auStack_438._0_8_ = plVar13[2];
    }
    auStack_438._8_8_ = uVar4 + 0x18;
    func_0x0ed621a0(auStack_438,uStack_340._4_4_);
    auStack_438._0_2_ = 1;
    auStack_438._8_8_ = auStack_368 + 8;
    uStack_428 = uStack_340._4_4_;
    iStack_420 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_417 = 0;
    uStack_416 = 0;
    uStack_411 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    cStack_408 = 0;
    uStack_407 = 0;
    uStack_401 = 0;
    uStack_400 = 0;
    uStack_3ff = 0;
    uStack_3fe = 0;
    uStack_3f9 = 0;
    uStack_3f8 = CONCAT31((int3)_DAT_012ed459,0x2a);
    uStack_3f4 = (undefined1)((ulong)_DAT_012ed459 >> 0x18);
    uStack_3f3 = (undefined2)((ulong)_DAT_012ed459 >> 0x20);
    uStack_3f1 = (undefined1)((ulong)_DAT_012ed459 >> 0x30);
    uStack_3f0 = (undefined1)((ulong)_DAT_012ed459 >> 0x38);
    uStack_3ef = (undefined5)_UNK_012ed461;
    uStack_3ea = 0x72;
    uStack_3e9 = 0x65;
    uStack_3e8 = 0x73;
    uStack_3e7 = 0x73646c6f68;
    uStack_3e2 = 0;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_3b0 = 0x3f600000;
    func_0x048afb10(&uStack_3e0,8);
    uStack_388 = 0;
    uStack_384 = 0;
    lStack_380 = 0;
    lStack_398 = 0;
    uStack_390 = 0;
    uStack_38e = 0;
    uStack_38c = 0;
    lStack_3a8 = 0;
    lStack_3a0 = 0;
    uStack_378 = 0xff00;
    uStack_374 = uStack_374 & 0xffffff00;
    uStack_370 = uStack_370 & 0xffffff00;
    uStack_36c = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e1c70;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0ed25a40;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &UNK_0ed24590;
    puStack_468 = &UNK_0ed25b00;
    puStack_460 = &UNK_0ed25cf0;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    uVar4 = auStack_438._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_4a0 = plVar13 + 3;
    lVar21 = CONCAT44(uStack_41c,iStack_420);
    lVar14 = CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
    iStack_420 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_417 = 0;
    uStack_416 = 0;
    uStack_411 = 0;
    plVar13[3] = lVar21;
    plVar13[4] = lVar14;
    plVar13[7] = CONCAT17(uStack_3f9,CONCAT52(uStack_3fe,CONCAT11(uStack_3ff,uStack_400)));
    plVar13[5] = CONCAT44(uStack_40c,uStack_410);
    plVar13[6] = CONCAT17(uStack_401,CONCAT61(uStack_407,cStack_408));
    uStack_410 = 0;
    uStack_40c = 0;
    cStack_408 = '\0';
    uStack_407 = 0;
    uStack_401 = 0;
    uStack_400 = 0;
    uStack_3ff = 0;
    uStack_3fe = 0;
    uStack_3f9 = 0;
    plVar13[10] = CONCAT17(uStack_3e1,CONCAT16(uStack_3e2,CONCAT51(uStack_3e7,uStack_3e8)));
    plVar13[8] = CONCAT17(uStack_3f1,CONCAT25(uStack_3f3,CONCAT14(uStack_3f4,uStack_3f8)));
    plVar13[9] = CONCAT17(uStack_3e9,CONCAT16(uStack_3ea,CONCAT51(uStack_3ef,uStack_3f0)));
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    plVar13[0xb] = CONCAT17(uStack_3d9,uStack_3e0);
    plVar13[0xc] = lStack_3d8;
    plVar13[0xd] = CONCAT17(uStack_3c9,uStack_3d0);
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    plVar13[0xe] = CONCAT44(uStack_3c4,uStack_3c8);
    plVar13[0xf] = lStack_3c0;
    plVar13[0x10] = lStack_3b8;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_3b0;
    plVar13[0x12] = lStack_3a8;
    plVar13[0x13] = lStack_3a0;
    plVar13[0x14] = lStack_398;
    lStack_3a8 = 0;
    lStack_3a0 = 0;
    lStack_398 = 0;
    plVar13[0x17] = lStack_380;
    plVar13[0x15] = CONCAT44(uStack_38c,CONCAT22(uStack_38e,uStack_390));
    plVar13[0x16] = CONCAT44(uStack_384,uStack_388);
    uStack_390 = 0;
    uStack_38e = 0;
    uStack_38c = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    lStack_380 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_36c,CONCAT43(uStack_370,uStack_374._1_3_));
    plVar13[0x18] = CONCAT44(uStack_374,CONCAT22(uStack_376,uStack_378));
    auStack_2e8 = (undefined1  [16])0x0;
    plStack_498 = plVar13;
    func_0x048afd20(uVar4,&uStack_4a8);
    plVar13 = plStack_498;
    if (plStack_498 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_498 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_498 + 0x10))(plStack_498);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar6 = auStack_2e8._8_8_;
    if ((long *)auStack_2e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_2e8._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_2e8._8_8_ + 0x10))(auStack_2e8._8_8_);
        func_0x0412c2d0(uVar6);
      }
    }
    lVar21 = *(long *)(uVar4 + 0x10);
    iVar7 = *(int *)(uVar4 + 0x1c);
    if (iVar7 == 2) {
      piVar15 = *(int **)(*(long *)(lVar21 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != *(int *)(uVar4 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != *(long *)(uVar4 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
      }
LAB_0eccd79a:
      piVar15[4] = piVar15[4] | auStack_438._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar15 = *(int **)(*(long *)(lVar21 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != *(int *)(uVar4 + 0x18)) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eccd79a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar21 + 0x18) = *(uint *)(lVar21 + 0x18) | auStack_438._0_4_ << 0x10;
      }
    }
    uVar4 = auStack_368._0_8_;
    iVar7 = (int)uStack_340;
    uVar5 = uStack_340._4_4_;
    func_0x048b0bc0(&iStack_420);
    if (iVar7 == 4) {
      if ((DAT_0f773698 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773698), iVar7 != 0)) {
        func_0x0ed20d10();
        __cxa_atexit(&UNK_048ae800,&DAT_0f773618,0xf53dab8);
        func_0x0410844d(&DAT_0f773698);
      }
      plVar13 = (long *)(*(long *)(uVar4 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >>
                                     3) - 1U & *(uint *)(_DAT_0f773618 + 4)) * 8);
      do {
        lVar21 = *plVar13;
        if (lVar21 == -1) goto LAB_0eccd8b8;
        plVar13 = (long *)(*(long *)(uVar4 + 0x30) + lVar21 * 0x18);
      } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar21 * 0x18) !=
               *(uint *)(_DAT_0f773618 + 4));
      if (plVar13 == *(long **)(uVar4 + 0x38)) {
LAB_0eccd8b8:
        puVar9 = &DAT_0f773618;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar21 = func_0x048b1040(uVar4 + 0x18,puVar9,uVar5,1);
      if (lVar21 == 0) {
        auStack_438 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_438);
        lVar14 = *(long *)(auStack_438._0_8_ + 0x38);
        lVar21 = auStack_438._0_8_;
        if (lVar14 == 0) goto LAB_0eccd9a0;
LAB_0eccd9c7:
        do {
          lVar21 = lVar14;
          lVar14 = *(long *)(lVar21 + 0x38);
          if (*(long *)(lVar21 + 0x38) == 0) {
            auStack_438 = (undefined1  [16])0x0;
            func_0x048b10d0(auStack_438);
            lVar14 = auStack_438._0_8_;
          }
        } while (lVar14 != 0);
      }
      else {
        lVar14 = *(long *)(lVar21 + 0x38);
        if (*(long *)(lVar21 + 0x38) != 0) goto LAB_0eccd9c7;
LAB_0eccd9a0:
        auStack_438 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_438);
        lVar14 = auStack_438._0_8_;
        if (auStack_438._0_8_ != 0) goto LAB_0eccd9c7;
      }
      lVar21 = *(long *)(lVar21 + 0x48);
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar7 != 1) goto LAB_0eccda81;
      if ((DAT_0f773698 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773698), iVar7 != 0)) {
        func_0x0ed20d10();
        __cxa_atexit(&UNK_048ae800,&DAT_0f773618,0xf53dab8);
        func_0x0410844d(&DAT_0f773698);
      }
      plVar13 = (long *)(*(long *)(uVar4 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >>
                                     3) - 1U & *(uint *)(_DAT_0f773618 + 4)) * 8);
      do {
        lVar21 = *plVar13;
        if (lVar21 == -1) goto LAB_0eccd838;
        plVar13 = (long *)(*(long *)(uVar4 + 0x30) + lVar21 * 0x18);
      } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar21 * 0x18) !=
               *(uint *)(_DAT_0f773618 + 4));
      if (plVar13 == *(long **)(uVar4 + 0x38)) {
LAB_0eccd838:
        puVar9 = &DAT_0f773618;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar21 = FUN_048b0c90(uVar4 + 0x18,puVar9,uVar5,1);
      if (lVar21 == 0) {
        auStack_438 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_438);
        lVar21 = auStack_438._0_8_;
      }
      lVar21 = *(long *)(lVar21 + 0x58);
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar20[1] = 0xffffffffffffffff;
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 0xff;
    *puVar20 = &UNK_0f4e3cf0;
    puVar20[4] = 1;
    *(undefined1 (*) [16])(puVar20 + 5) = (undefined1  [16])0x0;
    *(undefined1 *)(puVar20 + 7) = 0;
    plVar13 = *(long **)(lVar21 + 8);
    *(undefined8 **)(lVar21 + 8) = puVar20;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x28))();
    }
  }
LAB_0eccda81:
  lVar21 = func_0x0d8b6680(lVar16);
  if ((*(int *)(lVar21 + 0x60) == -0x2b3da790) && (lVar21 = *(long *)(lVar21 + 0x68), lVar21 != 0))
  {
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar21 + 9);
    if (bVar22) {
      puVar9 = *(undefined **)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
  }
  else {
    puVar9 = &UNK_0129d4a7;
    uVar17 = 0xe;
  }
  func_0x0d8b6ca0(auStack_438,param_1,puVar9,uVar17,0);
  if (cStack_408 == '\0') {
    func_0x0d8a3430(&uStack_4a8,auStack_438);
  }
  if ((DAT_0f773920 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773920), iVar7 != 0)) {
    func_0x0ed26220();
    __cxa_atexit(&UNK_048ae800,&DAT_0f7738a0,0xf53dab8);
    func_0x0410844d(&DAT_0f773920);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7738a0 + 4)) * 8);
  do {
    lVar21 = *plVar13;
    if (lVar21 == -1) goto LAB_0eccdb60;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f7738a0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eccdb60:
    puVar9 = &DAT_0f7738a0;
    if (iRam000000000f773900 != -0x2b3da790) goto LAB_0eccdbcd;
LAB_0eccdb8b:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_0eccdbcd;
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar14 = lVar21 + 9;
    if (bVar22) {
      lVar14 = *(long *)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x0ed26840(&puStack_328,param_1,lVar14,uVar17);
    puVar9 = puStack_328;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0eccdb8b;
LAB_0eccdbcd:
    func_0x0ed26840(&puStack_328,param_1,&UNK_01306683,0x17);
    puVar9 = puStack_328;
  }
  puStack_328 = puVar9;
  if ((char)uStack_2f8 == '\0') {
    if ((DAT_0f773920 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773920), iVar7 != 0)) {
      func_0x0ed26220();
      __cxa_atexit(&UNK_048ae800,&DAT_0f7738a0,0xf53dab8);
      func_0x0410844d(&DAT_0f773920);
    }
    plVar13 = (long *)(*(long *)(puVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar9 + 0x20) - *(long *)(puVar9 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7738a0 + 4)) * 8);
    do {
      lVar21 = *plVar13;
      if (lVar21 == -1) goto LAB_0eccdc61;
      plVar13 = (long *)(*(long *)(puVar9 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(puVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f7738a0 + 4)
            );
    if (plVar13 == *(long **)(puVar9 + 0x38)) {
LAB_0eccdc61:
      puVar19 = &DAT_0f7738a0;
    }
    else {
      puVar19 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(puStack_328 + 0x50); pbVar10 != *(byte **)(puStack_328 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar3 = *pbVar10;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0eccdd3a;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0eccdd3a:
        if ((bVar3 & 1) == 0) {
          pbVar18 = pbVar10 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar10 + 0x10);
        }
        auVar26[0] = -(*pbVar18 == 0x5b);
        auVar26[1] = -(pbVar18[1] == 99);
        auVar26[2] = -(pbVar18[2] == 0x65);
        auVar26[3] = -(pbVar18[3] == 0x72);
        auVar26[4] = -(pbVar18[4] == 0x65);
        auVar26[5] = -(pbVar18[5] == 0x61);
        auVar26[6] = -(pbVar18[6] == 0x6c);
        auVar26[7] = -(pbVar18[7] == 0x3a);
        auVar26[8] = -(pbVar18[8] == 100);
        auVar26[9] = -(pbVar18[9] == 0x6f);
        auVar26[10] = -(pbVar18[10] == 99);
        auVar26[0xb] = -(pbVar18[0xb] == 0x75);
        auVar26[0xc] = -(pbVar18[0xc] == 0x6d);
        auVar26[0xd] = -(pbVar18[0xd] == 0x65);
        auVar26[0xe] = -(pbVar18[0xe] == 0x6e);
        auVar26[0xf] = -(pbVar18[0xf] == 0x74);
        auVar31[0] = -(pbVar18[10] == 99);
        auVar31[1] = -(pbVar18[0xb] == 0x75);
        auVar31[2] = -(pbVar18[0xc] == 0x6d);
        auVar31[3] = -(pbVar18[0xd] == 0x65);
        auVar31[4] = -(pbVar18[0xe] == 0x6e);
        auVar31[5] = -(pbVar18[0xf] == 0x74);
        auVar31[6] = -(pbVar18[0x10] == 0x61);
        auVar31[7] = -(pbVar18[0x11] == 0x74);
        auVar31[8] = -(pbVar18[0x12] == 0x69);
        auVar31[9] = -(pbVar18[0x13] == 0x6f);
        auVar31[10] = -(pbVar18[0x14] == 0x6e);
        auVar31[0xb] = -(pbVar18[0x15] == 0x5f);
        auVar31[0xc] = -(pbVar18[0x16] == 0x74);
        auVar31[0xd] = -(pbVar18[0x17] == 0x61);
        auVar31[0xe] = -(pbVar18[0x18] == 0x67);
        auVar31[0xf] = -(pbVar18[0x19] == 0x5d);
        auVar31 = auVar31 & auVar26;
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
    if (pbVar10 == *(byte **)(puStack_328 + 0x58)) {
LAB_0eccdd68:
      if ((int)uStack_300 == 0) {
        if (((puVar19 == (undefined *)0x0) || (*(int *)(puVar19 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar19 + 0x68) == 0)) goto LAB_0eccddf9;
        lVar21 = *(long *)(puVar19 + 0x68) + 0x38;
      }
      else {
        uVar5 = uStack_300._4_4_;
        if (puVar19 == (undefined *)0x0) {
          puVar19 = (undefined *)func_0x048aead0(puVar9 + 0x18);
        }
        auStack_438._0_8_ = FUN_048b0c90(puVar9 + 0x18,puVar19,uVar5,1);
        if (auStack_438._0_8_ == 0) {
          auStack_438 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_438);
          if (auStack_438._0_8_ == 0) goto LAB_0eccddf9;
        }
        if ((*(int *)(auStack_438._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_438._0_8_ + 0x58) != 0)) {
          lVar21 = *(long *)(auStack_438._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0eccddf9:
          lVar21 = 0;
        }
      }
      plStack_498 = (long *)&UNK_0488e0b0;
      pcStack_490 = (code *)0x0;
      uStack_488 = CONCAT35(uStack_488._5_3_,0x48b5725f);
      uStack_4a8 = 0;
      auStack_438 = (undefined1  [16])0x0;
      iStack_420 = 0x488e0b0;
      uStack_41c = 0;
      uStack_418 = 0;
      uStack_417 = 0;
      uStack_416 = 0;
      uStack_411 = 0;
      uStack_410 = 0x48b5725f;
      uStack_40c = uStack_40c & 0xffffff00;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_013bbadf;
      auStack_368._8_8_ = 0x1a;
      auStack_368._0_8_ = 0x21;
      *(ulong *)((long)puVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar20 + 0x12) = uVar4;
      uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar20 = _DAT_013bbacd;
      puVar20[1] = uVar4;
      *(undefined1 *)((long)puVar20 + 0x1a) = 0;
      puStack_358 = puVar20;
      lVar21 = func_0x048b5060(lVar21,auStack_368);
      *(undefined8 *)(lVar21 + 0x20) = 0;
      if ((undefined1 *)(lVar21 + 0x20) == auStack_438) {
        pcVar11 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar21 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar21 + 0x28);
          (**(code **)(lVar21 + 0x40))(puVar20);
          if ((char)uStack_40c != '\0') {
            if ((char)uStack_40c == '\x02') {
              (*(code *)CONCAT44(uStack_41c,iStack_420))(5,auStack_438 + 8,puVar20);
            }
            else {
              uVar4 = auStack_438._8_8_;
              auStack_438._8_8_ = 0;
              *puVar20 = uVar4;
            }
          }
        }
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(ulong *)(lVar21 + 0x38) = CONCAT44(uStack_41c,iStack_420);
        *(ulong *)(lVar21 + 0x40) =
             CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
        *(undefined4 *)(lVar21 + 0x48) = uStack_410;
        *(char *)(lVar21 + 0x4c) = (char)uStack_40c;
      }
      if ((auStack_368[0] & 1) != 0) {
        func_0x0412a280(puStack_358,auStack_368._0_8_ & 0xfffffffffffffffe);
        pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(auStack_438 + 8);
      }
      if (pcStack_490 != (code *)0x0) {
        (*pcStack_490)(&uStack_4a8);
      }
    }
    else {
      iVar7 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0eccdd68;
    }
    uStack_238 = uStack_2f8;
    uStack_250 = CONCAT71(uStack_30f,uStack_310);
    uStack_248 = uStack_308;
    uStack_240 = uStack_300;
    puStack_258 = puStack_318;
    puStack_268 = puStack_328;
    uStack_260 = uStack_320;
    func_0x0ed26e30(auStack_438,puStack_328 + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0ecce07f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ecce07f;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0ed273d0(auStack_438,&puStack_268,&UNK_01483087,0xb);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e1b88;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0ed205f0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_0d8b6680;
    puStack_468 = &UNK_0ed27980;
    puStack_460 = &UNK_0ed27b40;
    uStack_458 = 0;
    auStack_450._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed27680(auStack_438);
    uStack_278 = CONCAT71(uStack_278._1_7_,(undefined1)uStack_238);
    uStack_288 = uStack_248;
    uStack_280 = uStack_240;
    puStack_298 = puStack_258;
    uStack_290 = uStack_250;
    auStack_2a8._8_8_ = uStack_260;
    auStack_2a8._0_8_ = puStack_268;
    func_0x048b0bc0(&iStack_420);
    auStack_2e8 = auStack_2a8;
    puStack_2d8 = puStack_298;
    uStack_2d0 = uStack_290;
    uStack_2c8 = uStack_288;
    uStack_2c0 = uStack_280;
    uStack_2b8 = uStack_278;
    func_0x0ed26e30(auStack_438,auStack_2a8._0_8_ + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0ecce31f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ecce31f;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0ed273d0(auStack_438,auStack_2e8,&UNK_01222e20,8);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_05daeda0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_05daea90;
    puStack_468 = &UNK_0ed27d10;
    puStack_460 = &UNK_0ed27e70;
    uStack_458 = 0;
    auStack_450._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed27680(auStack_438);
    uStack_338 = CONCAT71(uStack_338._1_7_,(char)uStack_2b8);
    uStack_348 = uStack_2c8;
    uStack_340 = uStack_2c0;
    puStack_358 = puStack_2d8;
    uStack_350 = uStack_2d0;
    auStack_368 = auStack_2e8;
    func_0x048b0bc0(&iStack_420);
    func_0x0ed26e30(auStack_438,auStack_368._0_8_ + 0x18);
    if (uStack_41c == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar21 = *(long *)(piVar15 + 0xc);
      while (lVar21 != auStack_438._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar21 = *(long *)(piVar15 + 0xc);
      }
LAB_0ecce57f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_41c == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != iStack_420) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ecce57f;
      }
      if (uStack_41c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0ed273d0(auStack_438,auStack_368,&UNK_01335c74,0x11);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef46ce8;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0490ce30;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &SUB_0490cb20;
    puStack_468 = &UNK_0ed28050;
    puStack_460 = &UNK_0ed281b0;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar21 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed27680(auStack_438);
    func_0x048b0bc0(&iStack_420);
  }
  func_0x0db3b1e0(param_1);
  lVar21 = func_0x0d8b6680(lVar16);
  if ((*(int *)(lVar21 + 0x60) == -0x2b3da790) && (lVar21 = *(long *)(lVar21 + 0x68), lVar21 != 0))
  {
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar21 + 9);
    if (bVar22) {
      puVar9 = *(undefined **)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
  }
  else {
    puVar9 = &UNK_0129d4a7;
    uVar17 = 0xe;
  }
  func_0x0d8b6ca0(auStack_438,param_1,puVar9,uVar17,0);
  if (cStack_408 == '\0') {
    func_0x0d8a3430(&uStack_4a8,auStack_438);
  }
  if ((DAT_0f7739d8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7739d8), iVar7 != 0)) {
    func_0x0ed28450();
    __cxa_atexit(&UNK_048ae800,&DAT_0f773958,0xf53dab8);
    func_0x0410844d(&DAT_0f7739d8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773958 + 4)) * 8);
  do {
    lVar21 = *plVar13;
    if (lVar21 == -1) goto LAB_0ecce7a0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773958 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0ecce7a0:
    puVar9 = &DAT_0f773958;
    if (iRam000000000f7739b8 != -0x2b3da790) goto LAB_0ecce822;
LAB_0ecce7cb:
    lVar21 = *(long *)(puVar9 + 0x68);
    if (lVar21 == 0) goto LAB_0ecce822;
    bVar22 = (*(byte *)(lVar21 + 8) & 1) != 0;
    lVar14 = lVar21 + 9;
    if (bVar22) {
      lVar14 = *(long *)(lVar21 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar21 + 0x10);
    }
    func_0x0ed28c90(auStack_2e8,param_1,lVar14,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0ecce7cb;
LAB_0ecce822:
    func_0x0ed28c90(auStack_2e8,param_1,&UNK_0121e876,0x1e);
  }
  if ((char)uStack_2b8 != '\0') {
    lVar16 = func_0x0d8b6680(lVar16);
    iVar7 = *(int *)(lVar16 + 0x60);
    goto joined_r0x0ecce817;
  }
  uVar4 = auStack_2e8._0_8_;
  if ((DAT_0f7739d8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7739d8), iVar7 != 0)) {
    func_0x0ed28450();
    __cxa_atexit(&UNK_048ae800,&DAT_0f773958,0xf53dab8);
    func_0x0410844d(&DAT_0f7739d8);
  }
  plVar13 = (long *)(*(long *)(uVar4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar4 + 0x20) - *(long *)(uVar4 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f773958 + 4)) * 8);
  do {
    lVar21 = *plVar13;
    if (lVar21 == -1) goto LAB_0ecce8c1;
    plVar13 = (long *)(*(long *)(uVar4 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(uVar4 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f773958 + 4));
  if (plVar13 == *(long **)(uVar4 + 0x38)) {
LAB_0ecce8c1:
    puVar9 = &DAT_0f773958;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
  }
  for (pbVar10 = *(byte **)(auStack_2e8._0_8_ + 0x50);
      pbVar10 != *(byte **)(auStack_2e8._0_8_ + 0x58); pbVar10 = pbVar10 + 0x38) {
    bVar3 = *pbVar10;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0ecce99a;
    }
    else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0ecce99a:
      if ((bVar3 & 1) == 0) {
        pbVar18 = pbVar10 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar10 + 0x10);
      }
      auVar27[0] = -(*pbVar18 == 0x5b);
      auVar27[1] = -(pbVar18[1] == 99);
      auVar27[2] = -(pbVar18[2] == 0x65);
      auVar27[3] = -(pbVar18[3] == 0x72);
      auVar27[4] = -(pbVar18[4] == 0x65);
      auVar27[5] = -(pbVar18[5] == 0x61);
      auVar27[6] = -(pbVar18[6] == 0x6c);
      auVar27[7] = -(pbVar18[7] == 0x3a);
      auVar27[8] = -(pbVar18[8] == 100);
      auVar27[9] = -(pbVar18[9] == 0x6f);
      auVar27[10] = -(pbVar18[10] == 99);
      auVar27[0xb] = -(pbVar18[0xb] == 0x75);
      auVar27[0xc] = -(pbVar18[0xc] == 0x6d);
      auVar27[0xd] = -(pbVar18[0xd] == 0x65);
      auVar27[0xe] = -(pbVar18[0xe] == 0x6e);
      auVar27[0xf] = -(pbVar18[0xf] == 0x74);
      auVar32[0] = -(pbVar18[10] == 99);
      auVar32[1] = -(pbVar18[0xb] == 0x75);
      auVar32[2] = -(pbVar18[0xc] == 0x6d);
      auVar32[3] = -(pbVar18[0xd] == 0x65);
      auVar32[4] = -(pbVar18[0xe] == 0x6e);
      auVar32[5] = -(pbVar18[0xf] == 0x74);
      auVar32[6] = -(pbVar18[0x10] == 0x61);
      auVar32[7] = -(pbVar18[0x11] == 0x74);
      auVar32[8] = -(pbVar18[0x12] == 0x69);
      auVar32[9] = -(pbVar18[0x13] == 0x6f);
      auVar32[10] = -(pbVar18[0x14] == 0x6e);
      auVar32[0xb] = -(pbVar18[0x15] == 0x5f);
      auVar32[0xc] = -(pbVar18[0x16] == 0x74);
      auVar32[0xd] = -(pbVar18[0x17] == 0x61);
      auVar32[0xe] = -(pbVar18[0x18] == 0x67);
      auVar32[0xf] = -(pbVar18[0x19] == 0x5d);
      auVar32 = auVar32 & auVar27;
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
  if (pbVar10 == *(byte **)(auStack_2e8._0_8_ + 0x58)) {
LAB_0ecce9c8:
    if ((int)uStack_2c0 == 0) {
      if (((puVar9 == (undefined *)0x0) || (*(int *)(puVar9 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar9 + 0x68) == 0)) goto LAB_0eccea59;
      lVar21 = *(long *)(puVar9 + 0x68) + 0x38;
    }
    else {
      uVar5 = uStack_2c0._4_4_;
      if (puVar9 == (undefined *)0x0) {
        puVar9 = (undefined *)func_0x048aead0(uVar4 + 0x18);
      }
      auStack_438._0_8_ = FUN_048b0c90(uVar4 + 0x18,puVar9,uVar5,1);
      if (auStack_438._0_8_ == 0) {
        auStack_438 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_438);
        if (auStack_438._0_8_ == 0) goto LAB_0eccea59;
      }
      if ((*(int *)(auStack_438._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_438._0_8_ + 0x58) != 0)) {
        lVar21 = *(long *)(auStack_438._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eccea59:
        lVar21 = 0;
      }
    }
    plStack_498 = (long *)&UNK_0488e0b0;
    pcStack_490 = (code *)0x0;
    uStack_488 = CONCAT35(uStack_488._5_3_,0x48b5725f);
    uStack_4a8 = 0;
    auStack_438 = (undefined1  [16])0x0;
    iStack_420 = 0x488e0b0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_417 = 0;
    uStack_416 = 0;
    uStack_411 = 0;
    uStack_410 = 0x48b5725f;
    uStack_40c = uStack_40c & 0xffffff00;
    puStack_318 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_318 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    puStack_328 = (undefined *)0x21;
    uStack_320 = 0x1a;
    *(ulong *)((long)puStack_318 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_318 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_318 = _DAT_013bbacd;
    puStack_318[1] = uVar4;
    *(undefined1 *)((long)puStack_318 + 0x1a) = 0;
    lVar21 = func_0x048b5060(lVar21,&puStack_328);
    *(undefined8 *)(lVar21 + 0x20) = 0;
    if ((undefined1 *)(lVar21 + 0x20) == auStack_438) {
      pcVar11 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar21 + 0x40) != (code *)0x0) {
        puVar20 = (undefined8 *)(lVar21 + 0x28);
        (**(code **)(lVar21 + 0x40))(puVar20);
        if ((char)uStack_40c != '\0') {
          if ((char)uStack_40c == '\x02') {
            (*(code *)CONCAT44(uStack_41c,iStack_420))(5,auStack_438 + 8,puVar20);
          }
          else {
            uVar4 = auStack_438._8_8_;
            auStack_438._8_8_ = 0;
            *puVar20 = uVar4;
          }
        }
      }
      pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
      *(ulong *)(lVar21 + 0x38) = CONCAT44(uStack_41c,iStack_420);
      *(ulong *)(lVar21 + 0x40) =
           CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
      *(undefined4 *)(lVar21 + 0x48) = uStack_410;
      *(char *)(lVar21 + 0x4c) = (char)uStack_40c;
    }
    if (((ulong)puStack_328 & 1) != 0) {
      func_0x0412a280(puStack_318,(ulong)puStack_328 & 0xfffffffffffffffe);
      pcVar11 = (code *)CONCAT17(uStack_411,CONCAT52(uStack_416,CONCAT11(uStack_417,uStack_418)));
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(auStack_438 + 8);
    }
    if (pcStack_490 != (code *)0x0) {
      (*pcStack_490)(&uStack_4a8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0ecce9c8;
  }
  uStack_178 = uStack_2b8;
  uStack_188 = uStack_2c8;
  uStack_180 = uStack_2c0;
  puStack_198 = puStack_2d8;
  uStack_190 = uStack_2d0;
  lStack_1a8 = auStack_2e8._0_8_;
  uStack_1a0 = auStack_2e8._8_8_;
  func_0x0ed29280(auStack_438,auStack_2e8._0_8_ + 0x18);
  if (uStack_41c == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != iStack_420) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    lVar21 = *(long *)(piVar15 + 0xc);
    while (lVar21 != auStack_438._8_8_) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar21 = *(long *)(piVar15 + 0xc);
    }
LAB_0ecced5f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_41c == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      goto LAB_0ecced5f;
    }
    if (uStack_41c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0ed29840(auStack_438,&lStack_1a8,&UNK_012ffebc,0xc,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0126a0;
  plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
  iStack_420 = (int)puVar20;
  uStack_41c = (int)((ulong)puVar20 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
  plStack_4a0 = (long *)0x0;
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
  pcStack_490 = (code *)0x1;
  uStack_488 = 0;
  puStack_480 = &UNK_05daeda0;
  puStack_478 = &SUB_048b06d0;
  puStack_470 = &SUB_05daea90;
  puStack_468 = &UNK_0ed29e00;
  puStack_460 = &UNK_0ed29f60;
  uStack_458 = 0;
  auStack_450._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
  uVar4 = auStack_450._8_8_;
  if ((long *)auStack_450._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_450._8_8_ + 8);
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0ed29b00(auStack_438);
  uStack_78 = (undefined1)uStack_178;
  uStack_88 = uStack_188;
  uStack_80 = uStack_180;
  puStack_98 = puStack_198;
  uStack_90 = uStack_190;
  lStack_a8 = lStack_1a8;
  uStack_a0 = uStack_1a0;
  func_0x048b0bc0(&iStack_420);
  uStack_2ee = 0;
  uStack_2ea = 0;
  uStack_320 = 0xffffffffffffffff;
  puStack_318 = (undefined8 *)0x0;
  uStack_310 = 0xff;
  puStack_328 = &UNK_0f0edc68;
  uStack_308 = 0;
  uStack_300 = _DAT_014f0238;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  func_0x0eccae40(&puStack_68,&lStack_a8,&puStack_328);
  uStack_138 = uStack_38;
  uStack_148 = uStack_48;
  uStack_140 = uStack_40;
  puStack_158 = puStack_58;
  uStack_150 = uStack_50;
  puStack_168 = puStack_68;
  uStack_160 = uStack_60;
  func_0x0ed29280(auStack_438,puStack_68 + 0x18);
  if (uStack_41c == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != iStack_420) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    lVar21 = *(long *)(piVar15 + 0xc);
    while (lVar21 != auStack_438._8_8_) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar21 = *(long *)(piVar15 + 0xc);
    }
LAB_0eccf08f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_41c == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      goto LAB_0eccf08f;
    }
    if (uStack_41c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0ed29840(auStack_438,&puStack_168,&UNK_0143dbc1,0xf,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0ef46ef8;
  plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
  iStack_420 = (int)puVar20;
  uStack_41c = (int)((ulong)puVar20 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
  plStack_4a0 = (long *)0x0;
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
  pcStack_490 = (code *)0x1;
  uStack_488 = 0;
  puStack_480 = &UNK_04906f70;
  puStack_478 = &SUB_048b06d0;
  puStack_470 = &SUB_04906c50;
  puStack_468 = &UNK_0ed2a130;
  puStack_460 = &UNK_0ed2a290;
  uStack_458 = 0;
  auStack_450._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
  uVar4 = auStack_450._8_8_;
  if ((long *)auStack_450._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_450._8_8_ + 8);
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0ed29b00(auStack_438);
  uStack_b8 = (undefined1)uStack_138;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  puStack_d8 = puStack_158;
  uStack_d0 = uStack_150;
  puStack_e8 = puStack_168;
  uStack_e0 = uStack_160;
  func_0x048b0bc0(&iStack_420);
  puStack_128 = puStack_e8;
  uStack_120 = uStack_e0;
  puStack_118 = puStack_d8;
  uStack_110 = uStack_d0;
  uStack_108 = uStack_c8;
  uStack_100 = uStack_c0;
  uStack_f8 = CONCAT71(uStack_b7,uStack_b8);
  func_0x0ed29840(auStack_438,&puStack_128,&UNK_0143dbd1,0xb,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4e1ed0;
  plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
  iStack_420 = (int)puVar20;
  uStack_41c = (int)((ulong)puVar20 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
  plStack_4a0 = (long *)0x0;
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
  pcStack_490 = (code *)0x1;
  uStack_488 = 0;
  puStack_480 = &UNK_0ed2b2f0;
  puStack_478 = &SUB_048b06d0;
  puStack_470 = &UNK_0ed2afd0;
  puStack_468 = &UNK_0ed2b3b0;
  puStack_460 = &UNK_0ed2b560;
  uStack_458 = 0;
  auStack_450._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
  uVar4 = auStack_450._8_8_;
  if ((long *)auStack_450._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_450._8_8_ + 8);
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0ed29b00(auStack_438);
  uStack_1b8 = (undefined1)uStack_f8;
  uStack_1c8 = uStack_108;
  uStack_1c0 = uStack_100;
  puStack_1d8 = puStack_118;
  uStack_1d0 = uStack_110;
  puStack_1e8 = puStack_128;
  puStack_1e0 = (undefined8 *)uStack_120;
  func_0x048b0bc0(&iStack_420);
  puStack_228 = puStack_1e8;
  uStack_220 = puStack_1e0;
  puStack_218 = puStack_1d8;
  uStack_210 = uStack_1d0;
  uStack_208 = uStack_1c8;
  uStack_200 = uStack_1c0;
  uStack_1f8 = CONCAT71(uStack_1b7,uStack_1b8);
  func_0x0ed29840(auStack_438,&puStack_228,&UNK_011fdda1,0x11,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
  iStack_420 = (int)puVar20;
  uStack_41c = (int)((ulong)puVar20 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
  plStack_4a0 = (long *)0x0;
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
  pcStack_490 = (code *)0x1;
  uStack_488 = 0;
  puStack_480 = &UNK_05de9430;
  puStack_478 = &SUB_048b06d0;
  puStack_470 = &UNK_05de9110;
  puStack_468 = &UNK_0ed2bac0;
  puStack_460 = &UNK_0ed2bc30;
  uStack_458 = 0;
  auStack_450._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
  uVar4 = auStack_450._8_8_;
  if ((long *)auStack_450._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_450._8_8_ + 8);
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0ed29b00(auStack_438);
  uStack_238 = CONCAT71(uStack_238._1_7_,(undefined1)uStack_1f8);
  uStack_248 = uStack_208;
  uStack_240 = uStack_200;
  puStack_258 = puStack_218;
  uStack_250 = uStack_210;
  puStack_268 = puStack_228;
  uStack_260 = uStack_220;
  func_0x048b0bc0(&iStack_420);
  uStack_32e = 0;
  uStack_32a = 0;
  puStack_358 = (undefined8 *)0x0;
  uStack_350 = CONCAT71(uStack_350._1_7_,0xff);
  auStack_368._8_8_ = 0xffffffffffffffff;
  auStack_368._0_8_ = &UNK_0f0edc68;
  uStack_348 = 0;
  uStack_340 = _DAT_014f0478;
  uStack_338 = 0;
  uStack_330 = 0;
  func_0x0eccae40(auStack_2a8,&puStack_268,auStack_368);
  func_0x0ed29280(auStack_438,auStack_2a8._0_8_ + 0x18);
  if (uStack_41c == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != iStack_420) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    lVar21 = *(long *)(piVar15 + 0xc);
    while (lVar21 != auStack_438._8_8_) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar21 = *(long *)(piVar15 + 0xc);
    }
LAB_0eccf6df:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_41c == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_424,uStack_428) + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != iStack_420) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      goto LAB_0eccf6df;
    }
    if (uStack_41c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_424,uStack_428) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0ed29840(auStack_438,auStack_2a8,&UNK_012ccad0,0xb,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f497610;
  plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
  iStack_420 = (int)puVar20;
  uStack_41c = (int)((ulong)puVar20 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
  plStack_4a0 = (long *)0x0;
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
  pcStack_490 = (code *)0x1;
  uStack_488 = 0;
  puStack_480 = &UNK_0db927d0;
  puStack_478 = &SUB_048b06d0;
  puStack_470 = &SUB_0db8e480;
  puStack_468 = &UNK_0ed2be10;
  puStack_460 = &UNK_0ed2bf70;
  uStack_458 = 0;
  auStack_450._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
  uVar4 = auStack_450._8_8_;
  if ((long *)auStack_450._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_450._8_8_ + 8);
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0ed29b00(auStack_438);
  func_0x048b0bc0(&iStack_420);
  lVar16 = func_0x0d8b6680(lVar16);
  iVar7 = *(int *)(lVar16 + 0x60);
joined_r0x0ecce817:
  if ((iVar7 == -0x2b3da790) && (lVar16 = *(long *)(lVar16 + 0x68), lVar16 != 0)) {
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar16 + 9);
    if (bVar22) {
      puVar9 = *(undefined **)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
  }
  else {
    puVar9 = &UNK_0129d4a7;
    uVar17 = 0xe;
  }
  func_0x0d8b6ca0(auStack_438,param_1,puVar9,uVar17,0);
  if (cStack_408 == '\0') {
    func_0x0d8a3430(&uStack_4a8,auStack_438);
  }
  if ((DAT_0f773b48 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773b48), iVar7 != 0)) {
    func_0x0ed2c210();
    __cxa_atexit(&UNK_048ae800,&DAT_0f773ac8,0xf53dab8);
    func_0x0410844d(&DAT_0f773b48);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773ac8 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0eccf900;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f773ac8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eccf900:
    puVar9 = &DAT_0f773ac8;
    iVar7 = iRam000000000f773b28;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    iVar7 = *(int *)(puVar9 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar16 = *(long *)(puVar9 + 0x68), lVar16 != 0)) {
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar21 = lVar16 + 9;
    if (bVar22) {
      lVar21 = *(long *)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0ed2cbe0(&puStack_328,param_1,lVar21,uVar17);
  }
  else {
    func_0x0ed2cbe0(&puStack_328,param_1,&UNK_013c19fe,0x1d);
  }
  if ((char)uStack_2f8 == '\0') {
    uStack_290 = CONCAT71(uStack_30f,uStack_310);
    auStack_2a8._8_8_ = uStack_320;
    auStack_2a8._0_8_ = puStack_328;
    puStack_298 = puStack_318;
    uStack_288 = uStack_308;
    uStack_280 = uStack_300;
    uStack_278 = uStack_2f8;
    func_0x0ed2d750(auStack_438,auStack_2a8,&UNK_012e749d,0xb);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e1ed0;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0ed2b2f0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &UNK_0ed2afd0;
    puStack_468 = &UNK_0ed2dd00;
    puStack_460 = &UNK_0ed2deb0;
    uStack_458 = 0;
    auStack_450._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed2da00(auStack_438);
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_278);
    uStack_2c8 = uStack_288;
    uStack_2c0 = uStack_280;
    puStack_2d8 = puStack_298;
    uStack_2d0 = uStack_290;
    auStack_2e8 = auStack_2a8;
    func_0x048b0bc0(&iStack_420);
    func_0x0ed2d750(auStack_438,auStack_2e8,&UNK_01422389,10);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e1ed0;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0ed2b2f0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &UNK_0ed2afd0;
    puStack_468 = &UNK_0ed2e080;
    puStack_460 = &UNK_0ed2e230;
    uStack_458 = 0;
    auStack_450._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed2da00(auStack_438);
    uStack_338 = CONCAT71(uStack_338._1_7_,(char)uStack_2b8);
    uStack_348 = uStack_2c8;
    uStack_340 = uStack_2c0;
    puStack_358 = puStack_2d8;
    uStack_350 = uStack_2d0;
    auStack_368 = auStack_2e8;
    func_0x048b0bc0(&iStack_420);
    func_0x0ed2d750(auStack_438,auStack_368,&UNK_012cca2b,0x13);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e1ed0;
    plVar13 = (long *)CONCAT44(uStack_41c,iStack_420);
    iStack_420 = (int)puVar20;
    uStack_41c = (int)((ulong)puVar20 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_428);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x1;
    uStack_488 = 0;
    puStack_480 = &UNK_0ed2b2f0;
    puStack_478 = &SUB_048b06d0;
    puStack_470 = &UNK_0ed2afd0;
    puStack_468 = &UNK_0ed2e410;
    puStack_460 = &UNK_0ed2e5c0;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_438._8_8_,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0ed2da00(auStack_438);
    func_0x048b0bc0(&iStack_420);
  }
  if ((DAT_0f773c00 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c00), iVar7 != 0)) {
    func_0x0ed2e860();
    __cxa_atexit(&UNK_048ae800,&DAT_0f773b80,0xf53dab8);
    func_0x0410844d(&DAT_0f773c00);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773b80 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0eccfe40;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f773b80 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0eccfe40:
    puVar9 = &DAT_0f773b80;
    iVar7 = iRam000000000f773be0;
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    iVar7 = *(int *)(puVar9 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar16 = *(long *)(puVar9 + 0x68), lVar16 != 0)) {
    bVar22 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar21 = lVar16 + 9;
    if (bVar22) {
      lVar21 = *(long *)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0ed2eff0(&puStack_328,param_1,lVar21,uVar17);
  }
  else {
    func_0x0ed2eff0(&puStack_328,param_1,&UNK_012b9dc1,0x16);
  }
  if ((char)uStack_2f8 == '\0') {
    if ((DAT_0f773c20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c20), iVar7 != 0)) {
      func_0x0ed2e970();
      func_0x0410844d(&DAT_0f773c20);
    }
    if ((DAT_0f67b808 == '\0') && (iVar7 = FUN_04108328(&DAT_0f67b808), iVar7 != 0)) {
      func_0x0a7ac120(0xf67b7f0);
      func_0x0410844d(&DAT_0f67b808);
    }
    auStack_438._0_4_ = _DAT_0f67b7f4;
    auStack_438._8_8_ = &SUB_0a7abf30;
    uStack_428 = 0xed2fa40;
    uStack_424 = 0;
    func_0x05da1460(&uStack_320);
    uStack_210 = CONCAT71(uStack_30f,uStack_310);
    uStack_208 = uStack_308;
    puStack_228 = puStack_328;
    uStack_220 = uStack_320;
    puStack_218 = puStack_318;
    uStack_1f8 = uStack_2f8;
    uStack_200 = 0xa72f9ddf00000003;
    if ((DAT_0f773c00 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c00), iVar7 != 0)) {
      func_0x0ed2e860();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773b80,0xf53dab8);
      func_0x0410844d(&DAT_0f773c00);
    }
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e2028;
    auStack_438._8_8_ = 0;
    auStack_438._0_8_ = puVar20;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_01408cd3;
    uStack_418 = SUB81(puVar20,0);
    uStack_417 = (undefined1)((ulong)puVar20 >> 8);
    uStack_416 = (undefined5)((ulong)puVar20 >> 0x10);
    uStack_411 = (undefined1)((ulong)puVar20 >> 0x38);
    uStack_428 = 0x21;
    uStack_424 = 0;
    iStack_420 = 0x18;
    uStack_41c = 0;
    *puVar20 = _DAT_01408ccb;
    puVar20[1] = uVar4;
    puVar20[2] = 0x646e61685f66666f;
    *(undefined1 *)(puVar20 + 3) = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_01408cd3;
    uStack_400 = SUB81(puVar20,0);
    uStack_3ff = (undefined1)((ulong)puVar20 >> 8);
    uStack_3fe = (undefined5)((ulong)puVar20 >> 0x10);
    uStack_3f9 = (undefined1)((ulong)puVar20 >> 0x38);
    uStack_410 = 0x21;
    uStack_40c = 0;
    cStack_408 = 0x18;
    uStack_407 = 0;
    uStack_401 = 0;
    *puVar20 = _DAT_01408ccb;
    puVar20[1] = uVar4;
    puVar20[2] = 0x646e61685f66666f;
    *(undefined1 *)(puVar20 + 3) = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3c8 = 0x3f600000;
    func_0x048afb10(&uStack_3f8,8);
    lStack_3a0 = 0;
    lStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    lStack_3a8 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_390 = 0xff00;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = uStack_388 & 0xffffff00;
    uStack_384 = uStack_384 & 0xffffff00;
    if ((DAT_0f773c20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c20), iVar7 != 0)) {
      func_0x0ed2e970();
      func_0x0410844d(&DAT_0f773c20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_200._4_4_);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x2;
    uStack_488 = 1;
    puStack_480 = &UNK_0ed2feb0;
    puStack_478 = &UNK_07d98660;
    puStack_470 = &UNK_0ed1cf90;
    puStack_468 = &UNK_0ed2fed0;
    puStack_460 = &UNK_0ed306c0;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&uStack_220,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_358 = (undefined8 *)uStack_210;
    uStack_350 = uStack_208;
    auStack_368._8_8_ = puStack_218;
    auStack_368._0_8_ = uStack_220;
    func_0x0ed2fa50(&uStack_4a8,auStack_368,auStack_438);
    puStack_268 = puStack_228;
    uStack_260 = uStack_220;
    puStack_258 = puStack_218;
    uStack_250 = uStack_210;
    uStack_248 = uStack_208;
    uStack_240 = uStack_200;
    uStack_238 = CONCAT71(uStack_238._1_7_,(undefined1)uStack_1f8);
    func_0x048b0bc0(auStack_438);
    uStack_240 = 0xacb6f51800000003;
    if ((DAT_0f773c00 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c00), iVar7 != 0)) {
      func_0x0ed2e860();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773b80,0xf53dab8);
      func_0x0410844d(&DAT_0f773c00);
    }
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e20b0;
    auStack_438._8_8_ = 0;
    auStack_438._0_8_ = puVar20;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_014be362;
    uStack_418 = SUB81(puVar20,0);
    uStack_417 = (undefined1)((ulong)puVar20 >> 8);
    uStack_416 = (undefined5)((ulong)puVar20 >> 0x10);
    uStack_411 = (undefined1)((ulong)puVar20 >> 0x38);
    uStack_428 = 0x21;
    uStack_424 = 0;
    iStack_420 = 0x1b;
    uStack_41c = 0;
    *(ulong *)((long)puVar20 + 0xb) = CONCAT35(_UNK_014be35f,_DAT_014be35a);
    *(undefined8 *)((long)puVar20 + 0x13) = uVar4;
    uVar4 = CONCAT53(_DAT_014be35a,_UNK_014be357);
    *puVar20 = _DAT_014be34f;
    puVar20[1] = uVar4;
    *(undefined1 *)((long)puVar20 + 0x1b) = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_014be362;
    uStack_400 = SUB81(puVar20,0);
    uStack_3ff = (undefined1)((ulong)puVar20 >> 8);
    uStack_3fe = (undefined5)((ulong)puVar20 >> 0x10);
    uStack_3f9 = (undefined1)((ulong)puVar20 >> 0x38);
    uStack_410 = 0x21;
    uStack_40c = 0;
    cStack_408 = 0x1b;
    uStack_407 = 0;
    uStack_401 = 0;
    *(ulong *)((long)puVar20 + 0xb) = CONCAT35(_UNK_014be35f,_DAT_014be35a);
    *(undefined8 *)((long)puVar20 + 0x13) = uVar4;
    uVar4 = CONCAT53(_DAT_014be35a,_UNK_014be357);
    *puVar20 = _DAT_014be34f;
    puVar20[1] = uVar4;
    *(undefined1 *)((long)puVar20 + 0x1b) = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3c8 = 0x3f600000;
    func_0x048afb10(&uStack_3f8,8);
    lStack_3a0 = 0;
    lStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    lStack_3a8 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_390 = 0xff00;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = uStack_388 & 0xffffff00;
    uStack_384 = uStack_384 & 0xffffff00;
    if ((DAT_0f773c20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c20), iVar7 != 0)) {
      func_0x0ed2e970();
      func_0x0410844d(&DAT_0f773c20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_240._4_4_);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x2;
    uStack_488 = 1;
    puStack_480 = &UNK_0ed30f60;
    puStack_478 = &UNK_07d98660;
    puStack_470 = &UNK_0ed20c50;
    puStack_468 = &UNK_0ed30f80;
    puStack_460 = &UNK_0ed31650;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(&uStack_260,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_358 = (undefined8 *)uStack_250;
    uStack_350 = uStack_248;
    auStack_368._8_8_ = puStack_258;
    auStack_368._0_8_ = uStack_260;
    func_0x0ed2fa50(&uStack_4a8,auStack_368,auStack_438);
    auStack_2a8._8_8_ = uStack_260;
    auStack_2a8._0_8_ = puStack_268;
    puStack_298 = puStack_258;
    uStack_290 = uStack_250;
    uStack_288 = uStack_248;
    uStack_280 = uStack_240;
    uStack_278 = CONCAT71(uStack_278._1_7_,(undefined1)uStack_238);
    func_0x048b0bc0(auStack_438);
    uStack_280 = 0xaac7de2300000003;
    if ((DAT_0f773c00 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c00), iVar7 != 0)) {
      func_0x0ed2e860();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773b80,0xf53dab8);
      func_0x0410844d(&DAT_0f773c00);
    }
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e2138;
    auStack_438._8_8_ = 0;
    auStack_438._0_8_ = puVar20;
    uStack_428._1_3_ = (undefined3)_DAT_01489283;
    uStack_428 = CONCAT31(uStack_428._1_3_,0x20);
    uStack_424 = (undefined4)((ulong)_DAT_01489283 >> 0x18);
    iStack_420._0_1_ = (undefined1)((ulong)_DAT_01489283 >> 0x38);
    iStack_420._1_3_ = (undefined3)_UNK_0148928b;
    uStack_41c = (int)((ulong)_UNK_0148928b >> 0x18);
    uStack_418 = (undefined1)((ulong)_UNK_0148928b >> 0x38);
    uStack_417 = 0;
    uStack_410 = CONCAT31(uStack_428._1_3_,0x20);
    uStack_407 = (undefined6)_UNK_0148928b;
    uStack_401 = (undefined1)((ulong)_UNK_0148928b >> 0x30);
    uStack_3ff = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3c8 = 0x3f600000;
    uStack_40c = uStack_424;
    cStack_408 = (undefined1)iStack_420;
    uStack_400 = uStack_418;
    func_0x048afb10(&uStack_3f8,8);
    lStack_3a0 = 0;
    lStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    lStack_3a8 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_390 = 0xff00;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = uStack_388 & 0xffffff00;
    uStack_384 = uStack_384 & 0xffffff00;
    if ((DAT_0f773c20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c20), iVar7 != 0)) {
      func_0x0ed2e970();
      func_0x0410844d(&DAT_0f773c20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_280._4_4_);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x2;
    uStack_488 = 1;
    puStack_480 = &UNK_0ed31f30;
    puStack_478 = &UNK_07d98660;
    puStack_470 = &UNK_0ed26160;
    puStack_468 = &UNK_0ed31f50;
    puStack_460 = &UNK_0ed32620;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2a8 + 8,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_358 = (undefined8 *)uStack_290;
    uStack_350 = uStack_288;
    auStack_368._8_8_ = puStack_298;
    auStack_368._0_8_ = auStack_2a8._8_8_;
    func_0x0ed2fa50(&uStack_4a8,auStack_368,auStack_438);
    auStack_2e8 = auStack_2a8;
    puStack_2d8 = puStack_298;
    uStack_2d0 = uStack_290;
    uStack_2c8 = uStack_288;
    uStack_2c0 = uStack_280;
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_278);
    func_0x048b0bc0(auStack_438);
    uStack_2c0 = 0x9403693c00000003;
    if ((DAT_0f773c00 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c00), iVar7 != 0)) {
      func_0x0ed2e860();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773b80,0xf53dab8);
      func_0x0410844d(&DAT_0f773c00);
    }
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e21c0;
    auStack_438._8_8_ = 0;
    auStack_438._0_8_ = puVar20;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar4 = _UNK_012e74b1;
    uStack_418 = SUB81(puVar20,0);
    uStack_417 = (undefined1)((ulong)puVar20 >> 8);
    uStack_416 = (undefined5)((ulong)puVar20 >> 0x10);
    uStack_411 = (undefined1)((ulong)puVar20 >> 0x38);
    uStack_428 = 0x1b;
    uStack_424 = 0;
    iStack_420 = 0x17;
    uStack_41c = 0;
    *puVar20 = _DAT_012e74a9;
    puVar20[1] = uVar4;
    *(undefined8 *)((long)puVar20 + 0xf) = 0x737265696669646f;
    *(undefined1 *)((long)puVar20 + 0x17) = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar4 = _UNK_012e74b1;
    uStack_400 = SUB81(puVar20,0);
    uStack_3ff = (undefined1)((ulong)puVar20 >> 8);
    uStack_3fe = (undefined5)((ulong)puVar20 >> 0x10);
    uStack_3f9 = (undefined1)((ulong)puVar20 >> 0x38);
    uStack_410 = 0x1b;
    uStack_40c = 0;
    cStack_408 = 0x17;
    uStack_407 = 0;
    uStack_401 = 0;
    *puVar20 = _DAT_012e74a9;
    puVar20[1] = uVar4;
    *(undefined8 *)((long)puVar20 + 0xf) = 0x737265696669646f;
    *(undefined1 *)((long)puVar20 + 0x17) = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3c8 = 0x3f600000;
    func_0x048afb10(&uStack_3f8,8);
    lStack_3a0 = 0;
    lStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    lStack_3a8 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_390 = 0xff00;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = uStack_388 & 0xffffff00;
    uStack_384 = uStack_384 & 0xffffff00;
    if ((DAT_0f773c20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c20), iVar7 != 0)) {
      func_0x0ed2e970();
      func_0x0410844d(&DAT_0f773c20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_2c0._4_4_);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x2;
    uStack_488 = 1;
    puStack_480 = &UNK_0ed32f20;
    puStack_478 = &UNK_07d98660;
    puStack_470 = &UNK_0ed28390;
    puStack_468 = &UNK_0ed32f40;
    puStack_460 = &UNK_0ed33610;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2e8 + 8,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_358 = (undefined8 *)uStack_2d0;
    uStack_350 = uStack_2c8;
    auStack_368._0_8_ = auStack_2e8._8_8_;
    auStack_368._8_8_ = puStack_2d8;
    func_0x0ed2fa50(&uStack_4a8,auStack_368,auStack_438);
    auStack_368 = auStack_2e8;
    puStack_358 = puStack_2d8;
    uStack_350 = uStack_2d0;
    uStack_348 = uStack_2c8;
    uStack_340 = uStack_2c0;
    uStack_338 = CONCAT71(uStack_338._1_7_,(char)uStack_2b8);
    func_0x048b0bc0(auStack_438);
    uStack_340 = 0x486f92d00000003;
    if ((DAT_0f773c00 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c00), iVar7 != 0)) {
      func_0x0ed2e860();
      __cxa_atexit(&UNK_048ae800,&DAT_0f773b80,0xf53dab8);
      func_0x0410844d(&DAT_0f773c00);
    }
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4e2248;
    auStack_438._8_8_ = 0;
    auStack_438._0_8_ = puVar20;
    uStack_428._1_3_ = (undefined3)_DAT_0131a80d;
    uStack_428 = CONCAT31(uStack_428._1_3_,0x2c);
    uStack_424 = (undefined4)((ulong)_DAT_0131a80d >> 0x18);
    iStack_420._0_1_ = (undefined1)((ulong)_DAT_0131a80d >> 0x38);
    iStack_420._1_3_ = (undefined3)_UNK_0131a815;
    uStack_41c = CONCAT13(0x67,(int3)((ulong)_UNK_0131a815 >> 0x18));
    uStack_418 = 0x5f;
    uStack_417 = 0x73;
    uStack_416 = 0x73646e756f;
    uStack_411 = 0;
    uStack_410 = CONCAT31(uStack_428._1_3_,0x2c);
    uStack_407 = (undefined6)_UNK_0131a815;
    uStack_401 = 0x67;
    uStack_400 = 0x5f;
    uStack_3ff = 0x73;
    uStack_3fe = 0x73646e756f;
    uStack_3f9 = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_3f3 = 0;
    uStack_3f1 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_3ea = 0;
    uStack_3e9 = 0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    uStack_3e2 = 0;
    uStack_3e1 = 0;
    uStack_3e0 = 0;
    uStack_3d9 = 0;
    lStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c9 = 0;
    uStack_3c8 = 0x3f600000;
    uStack_40c = uStack_424;
    cStack_408 = (undefined1)iStack_420;
    func_0x048afb10(&uStack_3f8,8);
    lStack_3a0 = 0;
    lStack_398 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    lStack_3a8 = 0;
    lStack_3c0 = 0;
    lStack_3b8 = 0;
    uStack_390 = 0xff00;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = uStack_388 & 0xffffff00;
    uStack_384 = uStack_384 & 0xffffff00;
    if ((DAT_0f773c20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f773c20), iVar7 != 0)) {
      func_0x0ed2e970();
      func_0x0410844d(&DAT_0f773c20);
    }
    uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uStack_340._4_4_);
    plStack_4a0 = (long *)0x0;
    plStack_498 = (long *)((ulong)plStack_498 & 0xffffffff00000000);
    pcStack_490 = (code *)0x2;
    uStack_488 = 1;
    puStack_480 = &UNK_0ed33f40;
    puStack_478 = &UNK_07d98660;
    puStack_470 = &UNK_0ed2c150;
    puStack_468 = &UNK_0ed33f60;
    puStack_460 = &UNK_0ed34630;
    uStack_458 = 0;
    auStack_450._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_368 + 8,&uStack_4a8);
    uVar4 = auStack_450._8_8_;
    if ((long *)auStack_450._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_450._8_8_ + 8);
      lVar16 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_450._8_8_ + 0x10))(auStack_450._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    puStack_1d8 = (undefined8 *)uStack_350;
    uStack_1d0 = uStack_348;
    puStack_1e8 = (undefined *)auStack_368._8_8_;
    puStack_1e0 = puStack_358;
    func_0x0ed2fa50(&uStack_4a8,&puStack_1e8,auStack_438);
    func_0x048b0bc0(auStack_438);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12e74a9  minecraft:use_modifiers
 * 0x12ed459  durability_thresholds
 * 0x131a80d  minecraft:swing_sounds
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x1408ccb  minecraft:allow_off_hand
 * 0x1489283  minecraft:record
 * 0x14be34f  minecraft:durability_sensor
 * 0x14be35a  urability_sensor
 */
