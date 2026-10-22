/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2d0880 (ELF vaddr 0xe1d0880)
 * Label: string:Jigsaw Block Metadata
 * Body:  [[0e2d0880, 0e2d0b07] [0e2d0b10, 0e2d0b51] [0e2d0b60, 0e2d1e17] [0e2d1e20, 0e2d1e61] [0e2d1e70, 0e2d25d7] [0e2d25e0, 0e2d2621] [0e2d2630, 0e2d2e51] [0e2d2e60, 0e2d2f66] [0e2d2f70, 0e2d2fb2] [0e2d2fc0, 0e2d32e4] [0e2d32f0, 0e2d3321] [0e2d3330, 0e2d3def]]
 * Ghidra: FUN_0e2d0880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2d0880(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  byte *pbVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  int *piVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_570;
  long *plStack_568;
  long *plStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined1 *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined4 uStack_520;
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [16];
  undefined4 uStack_4f8;
  undefined1 auStack_4f0 [16];
  undefined1 auStack_4e0 [16];
  long lStack_4d0;
  undefined1 auStack_4c8 [16];
  long lStack_4b8;
  undefined1 auStack_4b0 [16];
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  undefined4 uStack_480;
  undefined1 auStack_478 [16];
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  undefined2 uStack_448;
  undefined2 uStack_446;
  uint uStack_444;
  uint uStack_440;
  undefined1 uStack_43c;
  ulong uStack_438;
  ulong uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  int iStack_3d8;
  undefined4 uStack_3d4;
  char cStack_3d0;
  undefined7 uStack_3cf;
  long lStack_3c8;
  undefined4 uStack_3bc;
  undefined1 auStack_3b8 [16];
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  char cStack_2f8;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char cStack_178;
  undefined7 uStack_177;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  FUN_0d880440();
  lStack_3c8 = param_1 + 0x18;
  lVar9 = func_0x05f23890();
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar9 + 9);
    if (bVar21) {
      puVar10 = *(undefined **)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar10 = &UNK_01455f56;
    uVar15 = 9;
  }
  func_0x07c85e30(auStack_508,param_1,puVar10,uVar15,0);
  if (auStack_4e0[8] == '\0') {
    func_0x0d893500(&uStack_570,auStack_508);
  }
  if ((DAT_0f74f528 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f528), iVar7 != 0)) {
    func_0x0e39ed70();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f4a8,0xf53dab8);
    FUN_0410844d(&DAT_0f74f528);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74f4a8 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0e2d0970;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f4a8 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e2d0970:
    puVar10 = &DAT_0f74f4a8;
    if (iRam000000000f74f508 != -0x2b3da790) goto LAB_0e2d09f7;
LAB_0e2d099b:
    lVar9 = *(long *)(puVar10 + 0x68);
    if (lVar9 == 0) goto LAB_0e2d09f7;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e39f3b0(&uStack_400,param_1,lVar18,uVar15);
    if (cStack_3d0 != '\0') goto LAB_0e2d09d8;
LAB_0e2d0a1d:
    uVar15 = uStack_400;
    if ((DAT_0f74f528 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f528), iVar7 != 0)) {
      func_0x0e39ed70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f4a8,0xf53dab8);
      FUN_0410844d(&DAT_0f74f528);
    }
    plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74f4a8 + 4)) * 8);
    do {
      lVar9 = *plVar13;
      if (lVar9 == -1) goto LAB_0e2d0a90;
      plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f4a8 + 4))
    ;
    if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e2d0a90:
      puVar10 = &DAT_0f74f4a8;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(uStack_400 + 0x50); pbVar11 != *(byte **)(uStack_400 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar2 = *pbVar11;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e2d0b6a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e2d0b6a:
        if ((bVar2 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar22[0] = -(*pbVar16 == 0x5b);
        auVar22[1] = -(pbVar16[1] == 99);
        auVar22[2] = -(pbVar16[2] == 0x65);
        auVar22[3] = -(pbVar16[3] == 0x72);
        auVar22[4] = -(pbVar16[4] == 0x65);
        auVar22[5] = -(pbVar16[5] == 0x61);
        auVar22[6] = -(pbVar16[6] == 0x6c);
        auVar22[7] = -(pbVar16[7] == 0x3a);
        auVar22[8] = -(pbVar16[8] == 100);
        auVar22[9] = -(pbVar16[9] == 0x6f);
        auVar22[10] = -(pbVar16[10] == 99);
        auVar22[0xb] = -(pbVar16[0xb] == 0x75);
        auVar22[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar22[0xd] = -(pbVar16[0xd] == 0x65);
        auVar22[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar22[0xf] = -(pbVar16[0xf] == 0x74);
        auVar26[0] = -(pbVar16[10] == 99);
        auVar26[1] = -(pbVar16[0xb] == 0x75);
        auVar26[2] = -(pbVar16[0xc] == 0x6d);
        auVar26[3] = -(pbVar16[0xd] == 0x65);
        auVar26[4] = -(pbVar16[0xe] == 0x6e);
        auVar26[5] = -(pbVar16[0xf] == 0x74);
        auVar26[6] = -(pbVar16[0x10] == 0x61);
        auVar26[7] = -(pbVar16[0x11] == 0x74);
        auVar26[8] = -(pbVar16[0x12] == 0x69);
        auVar26[9] = -(pbVar16[0x13] == 0x6f);
        auVar26[10] = -(pbVar16[0x14] == 0x6e);
        auVar26[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar26[0xc] = -(pbVar16[0x16] == 0x74);
        auVar26[0xd] = -(pbVar16[0x17] == 0x61);
        auVar26[0xe] = -(pbVar16[0x18] == 0x67);
        auVar26[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar26 = auVar26 & auVar22;
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(uStack_400 + 0x58)) {
LAB_0e2d0b98:
      uVar6 = uStack_3d4;
      if (iStack_3d8 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e2d0c20;
        lVar9 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18);
        }
        auStack_508._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uVar6,1);
        if (auStack_508._0_8_ == 0) {
          auStack_508 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_508);
          if (auStack_508._0_8_ == 0) goto LAB_0e2d0c20;
        }
        if ((*(int *)(auStack_508._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_508._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_508._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e2d0c20:
          lVar9 = 0;
        }
      }
      plStack_560 = (long *)&UNK_0488e0b0;
      pcStack_558 = (code *)0x0;
      uStack_550 = CONCAT35(uStack_550._5_3_,0x48b5725f);
      uStack_570 = 0;
      auStack_508 = (undefined1  [16])0x0;
      auStack_4f0 = ZEXT816(0x488e0b0);
      auStack_4e0._0_5_ = 0x48b5725f;
      puStack_428 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_428 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      uStack_438 = 0x21;
      uStack_430 = 0x1a;
      *(ulong *)((long)puStack_428 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_428 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_428 = _DAT_013bbacd;
      puStack_428[1] = uVar3;
      *(undefined1 *)((long)puStack_428 + 0x1a) = 0;
      lVar9 = func_0x048b5060(lVar9,&uStack_438);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_508) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar20);
          if (auStack_4e0[4] != '\0') {
            if (auStack_4e0[4] == '\x02') {
              (*(code *)auStack_4f0._0_8_)(5,auStack_508 + 8,puVar20);
            }
            else {
              uVar3 = auStack_508._8_8_;
              auStack_508._8_8_ = 0;
              *puVar20 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_4f0._0_8_;
        *(undefined8 *)(lVar9 + 0x40) = auStack_4f0._8_8_;
        *(undefined4 *)(lVar9 + 0x48) = auStack_4e0._0_4_;
        *(char *)(lVar9 + 0x4c) = auStack_4e0[4];
        pcVar12 = (code *)auStack_4f0._8_8_;
      }
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(puStack_428,uStack_438 & 0xfffffffffffffffe);
        pcVar12 = (code *)auStack_4f0._8_8_;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_508 + 8);
      }
      if (pcStack_558 != (code *)0x0) {
        (*pcStack_558)(&uStack_570);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e2d0b98;
    }
    cStack_2f8 = cStack_3d0;
    uStack_300 = CONCAT44(uStack_3d4,iStack_3d8);
    uStack_308 = uStack_3e0;
    puStack_318 = puStack_3f0;
    uStack_310 = uStack_3e8;
    uStack_328 = uStack_400;
    uStack_320 = uStack_3f8;
    func_0x0e39ff30(auStack_508,&uStack_328,&UNK_01410416,4);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef44b00;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_048b3f30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_048b2190;
    puStack_530 = &UNK_0e3a04f0;
    puStack_528 = &UNK_0e3a06b0;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    cStack_178 = cStack_2f8;
    uStack_188 = uStack_308;
    uStack_180 = uStack_300;
    puStack_198 = puStack_318;
    uStack_190 = uStack_310;
    uStack_1a8 = uStack_328;
    uStack_1a0 = uStack_320;
    func_0x048b0bc0(auStack_4f0);
    uStack_2e8 = uStack_1a8;
    uStack_2e0 = uStack_1a0;
    puStack_2d8 = puStack_198;
    uStack_2d0 = uStack_190;
    uStack_2c8 = uStack_188;
    uStack_2c0 = uStack_180;
    uStack_2b8 = CONCAT71(uStack_177,cStack_178);
    func_0x0e39ff30(auStack_508,&uStack_2e8,&UNK_012009af,4);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef44b00;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_048b3f30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_048b2190;
    puStack_530 = &UNK_0e3a0880;
    puStack_528 = &UNK_0e3a0a50;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_138 = (undefined1)uStack_2b8;
    uStack_148 = uStack_2c8;
    uStack_140 = uStack_2c0;
    puStack_158 = puStack_2d8;
    uStack_150 = uStack_2d0;
    uStack_168 = uStack_2e8;
    uStack_160 = uStack_2e0;
    func_0x048b0bc0(auStack_4f0);
    uStack_2a8 = uStack_168;
    uStack_2a0 = uStack_160;
    puStack_298 = puStack_158;
    uStack_290 = uStack_150;
    uStack_288 = uStack_148;
    uStack_280 = uStack_140;
    uStack_278 = CONCAT71(uStack_137,uStack_138);
    func_0x0e39ff30(auStack_508,&uStack_2a8,&UNK_0142cb75,6);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef44b00;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_048b3f30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_048b2190;
    puStack_530 = &UNK_0e3a0c30;
    puStack_528 = &UNK_0e3a0e00;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_f8 = (undefined1)uStack_278;
    uStack_108 = uStack_288;
    uStack_100 = uStack_280;
    puStack_118 = puStack_298;
    uStack_110 = uStack_290;
    uStack_128 = uStack_2a8;
    uStack_120 = uStack_2a0;
    func_0x048b0bc0(auStack_4f0);
    uStack_268 = uStack_128;
    uStack_260 = uStack_120;
    puStack_258 = puStack_118;
    uStack_250 = uStack_110;
    uStack_248 = uStack_108;
    uStack_240 = uStack_100;
    uStack_238 = CONCAT71(uStack_f7,uStack_f8);
    func_0x0e39ff30(auStack_508,&uStack_268,&UNK_01447599,5);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef44b00;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_048b3f30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_048b2190;
    puStack_530 = &UNK_0e3a0fe0;
    puStack_528 = &UNK_0e3a11b0;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_b8 = (undefined1)uStack_238;
    uStack_c8 = uStack_248;
    uStack_c0 = uStack_240;
    puStack_d8 = puStack_258;
    uStack_d0 = uStack_250;
    uStack_e8 = uStack_268;
    uStack_e0 = uStack_260;
    func_0x048b0bc0(auStack_4f0);
    uStack_228 = uStack_e8;
    uStack_220 = uStack_e0;
    puStack_218 = puStack_d8;
    uStack_210 = uStack_d0;
    uStack_208 = uStack_c8;
    uStack_200 = uStack_c0;
    uStack_1f8 = CONCAT71(uStack_b7,uStack_b8);
    func_0x0e39ff30(auStack_508,&uStack_228,&UNK_012860c0,0xb);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef44b00;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_048b3f30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_048b2190;
    puStack_530 = &UNK_0e3a1390;
    puStack_528 = &UNK_0e3a1560;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_78 = (undefined1)uStack_1f8;
    uStack_88 = uStack_208;
    uStack_80 = uStack_200;
    puStack_98 = puStack_218;
    uStack_90 = uStack_210;
    uStack_a8 = uStack_228;
    uStack_a0 = uStack_220;
    func_0x048b0bc0(auStack_4f0);
    uStack_1e8 = uStack_a8;
    uStack_1e0 = uStack_a0;
    puStack_1d8 = puStack_98;
    uStack_1d0 = uStack_90;
    uStack_1c8 = uStack_88;
    uStack_1c0 = uStack_80;
    uStack_1b8 = CONCAT71(uStack_77,uStack_78);
    func_0x0e39ff30(auStack_508,&uStack_1e8,&UNK_012eba51,10);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f488e28;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_0d889c20;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &SUB_06c3bfc0;
    puStack_530 = &UNK_0e3a1740;
    puStack_528 = &UNK_0e3a18a0;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_38 = (undefined1)uStack_1b8;
    uStack_48 = uStack_1c8;
    uStack_40 = uStack_1c0;
    puStack_58 = puStack_1d8;
    uStack_50 = uStack_1d0;
    uStack_68 = uStack_1e8;
    uStack_60 = uStack_1e0;
    func_0x048b0bc0(auStack_4f0);
    uStack_378 = uStack_68;
    puStack_370 = (undefined8 *)uStack_60;
    puStack_368 = puStack_58;
    uStack_360 = uStack_50;
    uStack_358 = uStack_48;
    uStack_350 = uStack_40;
    uStack_348 = CONCAT71(uStack_37,uStack_38);
    func_0x0e39ff30(auStack_508,&uStack_378,&UNK_0119d6bb,3);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f011f18;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_05f27580;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &SUB_05f23890;
    puStack_530 = &UNK_0e3a1a80;
    puStack_528 = &UNK_0e3a1bf0;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_388 = CONCAT71(uStack_388._1_7_,(undefined1)uStack_348);
    uStack_398 = uStack_358;
    uStack_390 = uStack_350;
    puStack_3a8 = puStack_368;
    uStack_3a0 = uStack_360;
    auStack_3b8._8_8_ = puStack_370;
    auStack_3b8._0_8_ = uStack_378;
    func_0x048b0bc0(auStack_4f0);
    func_0x0e39ff30(auStack_508,auStack_3b8,&UNK_014dc0ed,0x12);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef46ce8;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_0490ce30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_0490cb20;
    puStack_530 = &UNK_0e3a1dd0;
    puStack_528 = &UNK_0e3a1f30;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    uStack_408 = CONCAT71(uStack_408._1_7_,(undefined1)uStack_388);
    uStack_418 = uStack_398;
    uStack_410 = uStack_390;
    puStack_428 = puStack_3a8;
    uStack_420 = uStack_3a0;
    uStack_438 = auStack_3b8._0_8_;
    uStack_430 = auStack_3b8._8_8_;
    func_0x048b0bc0(auStack_4f0);
    func_0x0e39ff30(auStack_508,&uStack_438,&UNK_01250538,0x12);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0ef46ce8;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_0490ce30;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_0490cb20;
    puStack_530 = &UNK_0e3a2110;
    puStack_528 = &UNK_0e3a2270;
    uStack_520 = 0;
    auStack_518 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a01f0(auStack_508);
    func_0x048b0bc0(auStack_4f0);
    lVar9 = func_0x05f23890(lStack_3c8);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e2d1c04;
LAB_0e2d1bda:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e2d1c04;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar9 + 9);
    if (bVar21) {
      puVar10 = *(undefined **)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e2d099b;
LAB_0e2d09f7:
    func_0x0e39f3b0(&uStack_400,param_1,&UNK_01442683,0x15);
    if (cStack_3d0 == '\0') goto LAB_0e2d0a1d;
LAB_0e2d09d8:
    lVar9 = func_0x05f23890(lStack_3c8);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e2d1bda;
LAB_0e2d1c04:
    puVar10 = &UNK_01455f56;
    uVar15 = 9;
  }
  func_0x07c85e30(auStack_508,param_1,puVar10,uVar15,0);
  if (auStack_4e0[8] == '\0') {
    func_0x0d893500(&uStack_570,auStack_508);
  }
  if ((DAT_0f74f5e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f5e0), iVar7 != 0)) {
    func_0x0e3a2510();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f560,0xf53dab8);
    FUN_0410844d(&DAT_0f74f5e0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74f560 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0e2d1ca0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f560 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e2d1ca0:
    puVar10 = &DAT_0f74f560;
    if (iRam000000000f74f5c0 != -0x2b3da790) goto LAB_0e2d1d0d;
LAB_0e2d1ccb:
    lVar9 = *(long *)(puVar10 + 0x68);
    if (lVar9 == 0) goto LAB_0e2d1d0d;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e3a2c00(&uStack_400,param_1,lVar18,uVar15);
    uVar15 = uStack_400;
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e2d1ccb;
LAB_0e2d1d0d:
    func_0x0e3a2c00(&uStack_400,param_1,&UNK_0129ec28,0x19);
    uVar15 = uStack_400;
  }
  uStack_400 = uVar15;
  if (cStack_3d0 == '\0') {
    if ((DAT_0f74f5e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f5e0), iVar7 != 0)) {
      func_0x0e3a2510();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f560,0xf53dab8);
      FUN_0410844d(&DAT_0f74f5e0);
    }
    plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74f560 + 4)) * 8);
    do {
      lVar9 = *plVar13;
      if (lVar9 == -1) goto LAB_0e2d1da0;
      plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f560 + 4))
    ;
    if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e2d1da0:
      puVar10 = &DAT_0f74f560;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(uStack_400 + 0x50); pbVar11 != *(byte **)(uStack_400 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar2 = *pbVar11;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e2d1e7a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e2d1e7a:
        if ((bVar2 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar23[0] = -(*pbVar16 == 0x5b);
        auVar23[1] = -(pbVar16[1] == 99);
        auVar23[2] = -(pbVar16[2] == 0x65);
        auVar23[3] = -(pbVar16[3] == 0x72);
        auVar23[4] = -(pbVar16[4] == 0x65);
        auVar23[5] = -(pbVar16[5] == 0x61);
        auVar23[6] = -(pbVar16[6] == 0x6c);
        auVar23[7] = -(pbVar16[7] == 0x3a);
        auVar23[8] = -(pbVar16[8] == 100);
        auVar23[9] = -(pbVar16[9] == 0x6f);
        auVar23[10] = -(pbVar16[10] == 99);
        auVar23[0xb] = -(pbVar16[0xb] == 0x75);
        auVar23[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar23[0xd] = -(pbVar16[0xd] == 0x65);
        auVar23[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar23[0xf] = -(pbVar16[0xf] == 0x74);
        auVar27[0] = -(pbVar16[10] == 99);
        auVar27[1] = -(pbVar16[0xb] == 0x75);
        auVar27[2] = -(pbVar16[0xc] == 0x6d);
        auVar27[3] = -(pbVar16[0xd] == 0x65);
        auVar27[4] = -(pbVar16[0xe] == 0x6e);
        auVar27[5] = -(pbVar16[0xf] == 0x74);
        auVar27[6] = -(pbVar16[0x10] == 0x61);
        auVar27[7] = -(pbVar16[0x11] == 0x74);
        auVar27[8] = -(pbVar16[0x12] == 0x69);
        auVar27[9] = -(pbVar16[0x13] == 0x6f);
        auVar27[10] = -(pbVar16[0x14] == 0x6e);
        auVar27[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar27[0xc] = -(pbVar16[0x16] == 0x74);
        auVar27[0xd] = -(pbVar16[0x17] == 0x61);
        auVar27[0xe] = -(pbVar16[0x18] == 0x67);
        auVar27[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar27 = auVar27 & auVar23;
        if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(uStack_400 + 0x58)) {
LAB_0e2d1ea8:
      uVar6 = uStack_3d4;
      if (iStack_3d8 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e2d1f32;
        lVar9 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18,0,uStack_3d4);
        }
        auStack_508._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uVar6,1);
        if (auStack_508._0_8_ == 0) {
          auStack_508 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_508);
          if (auStack_508._0_8_ == 0) goto LAB_0e2d1f32;
        }
        if ((*(int *)(auStack_508._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_508._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_508._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e2d1f32:
          lVar9 = 0;
        }
      }
      plStack_560 = (long *)&UNK_0488e0b0;
      pcStack_558 = (code *)0x0;
      uStack_550 = CONCAT35(uStack_550._5_3_,0x48b5725f);
      uStack_570 = 0;
      auStack_508 = (undefined1  [16])0x0;
      auStack_4f0 = ZEXT816(0x488e0b0);
      auStack_4e0._0_5_ = 0x48b5725f;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      uStack_438 = 0x21;
      uStack_430 = 0x1a;
      *(ulong *)((long)puVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar20 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar20 = _DAT_013bbacd;
      puVar20[1] = uVar3;
      *(undefined1 *)((long)puVar20 + 0x1a) = 0;
      puStack_428 = puVar20;
      lVar9 = func_0x048b5060(lVar9,&uStack_438);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_508) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar20);
          if (auStack_4e0[4] != '\0') {
            if (auStack_4e0[4] == '\x02') {
              (*(code *)auStack_4f0._0_8_)(5,auStack_508 + 8,puVar20);
            }
            else {
              uVar3 = auStack_508._8_8_;
              auStack_508._8_8_ = 0;
              *puVar20 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_4f0._0_8_;
        *(undefined8 *)(lVar9 + 0x40) = auStack_4f0._8_8_;
        *(undefined4 *)(lVar9 + 0x48) = auStack_4e0._0_4_;
        *(char *)(lVar9 + 0x4c) = auStack_4e0[4];
        pcVar12 = (code *)auStack_4f0._8_8_;
      }
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(puStack_428,uStack_438 & 0xfffffffffffffffe);
        pcVar12 = (code *)auStack_4f0._8_8_;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_508 + 8);
      }
      if (pcStack_558 != (code *)0x0) {
        (*pcStack_558)(&uStack_570);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e2d1ea8;
    }
    uStack_388 = CONCAT71(uStack_3cf,cStack_3d0);
    uStack_390 = CONCAT44(uStack_3d4,iStack_3d8);
    uStack_398 = uStack_3e0;
    puStack_3a8 = puStack_3f0;
    uStack_3a0 = uStack_3e8;
    auStack_3b8._8_8_ = uStack_3f8;
    auStack_3b8._0_8_ = uStack_400;
    func_0x0e3a3760(auStack_508,auStack_3b8,&UNK_01492c33,4);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f011f18;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_05f27580;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &SUB_05f23890;
    puStack_530 = &UNK_0e3a3d00;
    puStack_528 = &UNK_0e3a3e70;
    uStack_520 = 0;
    auStack_518 = ZEXT816(0);
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a3a00(auStack_508);
    uStack_408 = CONCAT71(uStack_408._1_7_,(undefined1)uStack_388);
    uStack_418 = uStack_398;
    uStack_410 = uStack_390;
    puStack_428 = puStack_3a8;
    uStack_420 = uStack_3a0;
    uStack_438 = auStack_3b8._0_8_;
    uStack_430 = auStack_3b8._8_8_;
    func_0x048b0bc0(auStack_4f0);
    func_0x0e3a3760(auStack_508,&uStack_438,&UNK_012239ea,7);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4b7c90;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_0e3a7600;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_0e3a6100;
    puStack_530 = &UNK_0e3a76c0;
    puStack_528 = &UNK_0e3a79e0;
    uStack_520 = 0;
    auStack_518 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e3a3a00(auStack_508);
    func_0x048b0bc0(auStack_4f0);
  }
  if ((DAT_0f74f868 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f868), iVar7 != 0)) {
    func_0x0e3a7f20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f7e8,0xf53dab8);
    FUN_0410844d(&DAT_0f74f868);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74f7e8 + 4)) * 8);
  do {
    lVar9 = *plVar13;
    if (lVar9 == -1) goto LAB_0e2d2440;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f7e8 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e2d2440:
    puVar10 = &DAT_0f74f7e8;
    if (iRam000000000f74f848 != -0x2b3da790) goto LAB_0e2d24c7;
LAB_0e2d246b:
    lVar9 = *(long *)(puVar10 + 0x68);
    if (lVar9 == 0) goto LAB_0e2d24c7;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e3a8450(&uStack_400,param_1,lVar18,uVar15);
    if (cStack_3d0 != '\0') goto LAB_0e2d24a8;
LAB_0e2d24ed:
    uVar15 = uStack_400;
    if ((DAT_0f74f868 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f868), iVar7 != 0)) {
      func_0x0e3a7f20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f7e8,0xf53dab8);
      FUN_0410844d(&DAT_0f74f868);
    }
    plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74f7e8 + 4)) * 8);
    do {
      lVar9 = *plVar13;
      if (lVar9 == -1) goto LAB_0e2d2560;
      plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f7e8 + 4))
    ;
    if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e2d2560:
      puVar10 = &DAT_0f74f7e8;
    }
    else {
      puVar10 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(uStack_400 + 0x50); pbVar11 != *(byte **)(uStack_400 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar2 = *pbVar11;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e2d263a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e2d263a:
        if ((bVar2 & 1) == 0) {
          pbVar16 = pbVar11 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar11 + 0x10);
        }
        auVar24[0] = -(*pbVar16 == 0x5b);
        auVar24[1] = -(pbVar16[1] == 99);
        auVar24[2] = -(pbVar16[2] == 0x65);
        auVar24[3] = -(pbVar16[3] == 0x72);
        auVar24[4] = -(pbVar16[4] == 0x65);
        auVar24[5] = -(pbVar16[5] == 0x61);
        auVar24[6] = -(pbVar16[6] == 0x6c);
        auVar24[7] = -(pbVar16[7] == 0x3a);
        auVar24[8] = -(pbVar16[8] == 100);
        auVar24[9] = -(pbVar16[9] == 0x6f);
        auVar24[10] = -(pbVar16[10] == 99);
        auVar24[0xb] = -(pbVar16[0xb] == 0x75);
        auVar24[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar24[0xd] = -(pbVar16[0xd] == 0x65);
        auVar24[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar24[0xf] = -(pbVar16[0xf] == 0x74);
        auVar28[0] = -(pbVar16[10] == 99);
        auVar28[1] = -(pbVar16[0xb] == 0x75);
        auVar28[2] = -(pbVar16[0xc] == 0x6d);
        auVar28[3] = -(pbVar16[0xd] == 0x65);
        auVar28[4] = -(pbVar16[0xe] == 0x6e);
        auVar28[5] = -(pbVar16[0xf] == 0x74);
        auVar28[6] = -(pbVar16[0x10] == 0x61);
        auVar28[7] = -(pbVar16[0x11] == 0x74);
        auVar28[8] = -(pbVar16[0x12] == 0x69);
        auVar28[9] = -(pbVar16[0x13] == 0x6f);
        auVar28[10] = -(pbVar16[0x14] == 0x6e);
        auVar28[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar28[0xc] = -(pbVar16[0x16] == 0x74);
        auVar28[0xd] = -(pbVar16[0x17] == 0x61);
        auVar28[0xe] = -(pbVar16[0x18] == 0x67);
        auVar28[0xf] = -(pbVar16[0x19] == 0x5d);
        auVar28 = auVar28 & auVar24;
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
    if (pbVar11 == *(byte **)(uStack_400 + 0x58)) {
LAB_0e2d2668:
      uVar6 = uStack_3d4;
      if (iStack_3d8 == 0) {
        if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e2d26f0;
        lVar9 = *(long *)(puVar10 + 0x68) + 0x38;
      }
      else {
        if (puVar10 == (undefined *)0x0) {
          puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18);
        }
        auStack_508._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uVar6,1);
        if (auStack_508._0_8_ == 0) {
          auStack_508 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_508);
          if (auStack_508._0_8_ == 0) goto LAB_0e2d26f0;
        }
        if ((*(int *)(auStack_508._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_508._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_508._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e2d26f0:
          lVar9 = 0;
        }
      }
      plStack_560 = (long *)&UNK_0488e0b0;
      pcStack_558 = (code *)0x0;
      uStack_550 = CONCAT35(uStack_550._5_3_,0x48b5725f);
      uStack_570 = 0;
      auStack_508 = (undefined1  [16])0x0;
      auStack_4f0 = ZEXT816(0x488e0b0);
      auStack_4e0._0_5_ = 0x48b5725f;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      uStack_438 = 0x21;
      uStack_430 = 0x1a;
      *(ulong *)((long)puVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar20 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar20 = _DAT_013bbacd;
      puVar20[1] = uVar3;
      *(undefined1 *)((long)puVar20 + 0x1a) = 0;
      puStack_428 = puVar20;
      lVar9 = func_0x048b5060(lVar9,&uStack_438);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_508) {
        pcVar12 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar20 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar20);
          if (auStack_4e0[4] != '\0') {
            if (auStack_4e0[4] == '\x02') {
              (*(code *)auStack_4f0._0_8_)(5,auStack_508 + 8,puVar20);
            }
            else {
              uVar3 = auStack_508._8_8_;
              auStack_508._8_8_ = 0;
              *puVar20 = uVar3;
            }
          }
        }
        *(undefined8 *)(lVar9 + 0x38) = auStack_4f0._0_8_;
        *(undefined8 *)(lVar9 + 0x40) = auStack_4f0._8_8_;
        *(undefined4 *)(lVar9 + 0x48) = auStack_4e0._0_4_;
        *(char *)(lVar9 + 0x4c) = auStack_4e0[4];
        pcVar12 = (code *)auStack_4f0._8_8_;
      }
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(puStack_428,uStack_438 & 0xfffffffffffffffe);
        pcVar12 = (code *)auStack_4f0._8_8_;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_508 + 8);
      }
      if (pcStack_558 != (code *)0x0) {
        (*pcStack_558)(&uStack_570);
      }
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e2d2668;
    }
    uStack_408 = CONCAT71(uStack_3cf,cStack_3d0);
    uStack_418 = uStack_3e0;
    puStack_428 = puStack_3f0;
    uStack_420 = uStack_3e8;
    uStack_438 = uStack_400;
    uStack_430 = uStack_3f8;
    if ((DAT_0f74f888 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f888), iVar7 != 0)) {
      func_0x0e3a8030();
      FUN_0410844d(&DAT_0f74f888);
    }
    uVar15 = uStack_438;
    uStack_410 = 0x6622534000000001;
    if ((DAT_0f74f868 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74f868), iVar7 != 0)) {
      func_0x0e3a7f20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f7e8,0xf53dab8);
      FUN_0410844d(&DAT_0f74f868);
    }
    plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74f7e8 + 4)) * 8);
    do {
      lVar9 = *plVar13;
      if (lVar9 == -1) goto LAB_0e2d2990;
      plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f74f7e8 + 4))
    ;
    if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e2d2990:
      auStack_508._0_8_ = &DAT_0f74f7e8;
    }
    else {
      auStack_508._0_8_ = plVar13[2];
    }
    auStack_508._8_8_ = uVar15 + 0x18;
    func_0x0ed621a0(auStack_508,uStack_410._4_4_);
    auVar22 = auStack_4c8;
    auStack_508._0_2_ = 1;
    auStack_508._8_8_ = &uStack_430;
    uStack_4f8 = uStack_410._4_4_;
    auStack_4f0 = (undefined1  [16])0x0;
    auStack_4e0 = (undefined1  [16])0x0;
    lStack_4d0 = 0;
    auStack_4c8._1_8_ = 0x617461646174656d;
    auStack_4c8[0] = 0x10;
    auStack_4c8._10_6_ = auVar22._10_6_;
    auStack_4c8[9] = 0;
    auStack_4b0 = (undefined1  [16])0x0;
    lStack_4a0 = 0;
    lStack_498 = 0;
    lStack_490 = 0;
    lStack_488 = 0;
    uStack_480 = 0x3f600000;
    func_0x048afb10(auStack_4b0,8);
    lStack_458 = 0;
    lStack_450 = 0;
    lStack_468 = 0;
    lStack_460 = 0;
    auStack_478 = (undefined1  [16])0x0;
    uStack_448 = 0xff00;
    uStack_444 = uStack_444 & 0xffffff00;
    uStack_440 = uStack_440 & 0xffffff00;
    uStack_43c = 0;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar20 = &UNK_0f4b7e80;
    uVar3 = auStack_4f0._0_8_;
    auStack_4f0._0_8_ = puVar20;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
    plStack_568 = (long *)0x0;
    plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
    pcStack_558 = (code *)0x1;
    uStack_550 = 0;
    puStack_548 = &UNK_0e3aee90;
    puStack_540 = &SUB_048b06d0;
    puStack_538 = &UNK_0e3ac4e0;
    puStack_530 = &UNK_0e3aef50;
    puStack_528 = &UNK_0e3af1c0;
    uStack_520 = 0;
    auStack_518 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_508._8_8_,&uStack_570);
    uVar3 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    uVar3 = auStack_508._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    uStack_570 = CONCAT44(uStack_570._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_568 = plVar13 + 3;
    uVar4 = auStack_4f0._0_8_;
    uVar5 = auStack_4f0._8_8_;
    auStack_4f0 = (undefined1  [16])0x0;
    plVar13[3] = uVar4;
    plVar13[4] = uVar5;
    plVar13[7] = lStack_4d0;
    plVar13[5] = auStack_4e0._0_8_;
    plVar13[6] = auStack_4e0._8_8_;
    auStack_4e0 = (undefined1  [16])0x0;
    lStack_4d0 = 0;
    plVar13[10] = lStack_4b8;
    plVar13[8] = auStack_4c8._0_8_;
    plVar13[9] = auStack_4c8._8_8_;
    auStack_4c8 = (undefined1  [16])0x0;
    lStack_4b8 = 0;
    plVar13[0xb] = auStack_4b0._0_8_;
    plVar13[0xc] = auStack_4b0._8_8_;
    plVar13[0xd] = lStack_4a0;
    auStack_4b0 = (undefined1  [16])0x0;
    lStack_4a0 = 0;
    plVar13[0xe] = lStack_498;
    plVar13[0xf] = lStack_490;
    plVar13[0x10] = lStack_488;
    lStack_498 = 0;
    lStack_490 = 0;
    lStack_488 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_480;
    plVar13[0x12] = auStack_478._0_8_;
    plVar13[0x13] = auStack_478._8_8_;
    plVar13[0x14] = lStack_468;
    auStack_478 = (undefined1  [16])0x0;
    lStack_468 = 0;
    plVar13[0x17] = lStack_450;
    plVar13[0x15] = lStack_460;
    plVar13[0x16] = lStack_458;
    lStack_460 = 0;
    lStack_458 = 0;
    lStack_450 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_43c,CONCAT43(uStack_440,uStack_444._1_3_));
    plVar13[0x18] = CONCAT44(uStack_444,CONCAT22(uStack_446,uStack_448));
    auStack_3b8 = (undefined1  [16])0x0;
    plStack_560 = plVar13;
    func_0x048afd20(uVar3,&uStack_570);
    plVar13 = plStack_560;
    if (plStack_560 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_560 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_560 + 0x10))(plStack_560);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar4 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_3b8._8_8_ + 8);
      lVar9 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    lVar9 = *(long *)(uVar3 + 0x10);
    iVar7 = *(int *)(uVar3 + 0x1c);
    if (iVar7 == 2) {
      piVar17 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
      iVar7 = *piVar17;
      while (iVar7 != *(int *)(uVar3 + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar7 = *piVar17;
      }
      for (; *(long *)(piVar17 + 0xc) != *(long *)(uVar3 + 8); piVar17 = *(int **)(piVar17 + 0xe)) {
      }
LAB_0e2d2e6a:
      piVar17[4] = piVar17[4] | auStack_508._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar17 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
        iVar7 = *piVar17;
        while (iVar7 != *(int *)(uVar3 + 0x18)) {
          piVar17 = piVar17 + 0x1a;
          iVar7 = *piVar17;
        }
        goto LAB_0e2d2e6a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | auStack_508._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_4f0);
    lVar9 = func_0x0d34a5c0(lStack_3c8);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0e2d2eca;
LAB_0e2d2e88:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0e2d2eca;
    bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar18 = lVar9 + 9;
    if (bVar21) {
      lVar18 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0e3af630(&uStack_400,param_1,lVar18,uVar15);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e2d246b;
LAB_0e2d24c7:
    func_0x0e3a8450(&uStack_400,param_1,&UNK_014c353b,0x22);
    if (cStack_3d0 == '\0') goto LAB_0e2d24ed;
LAB_0e2d24a8:
    lVar9 = func_0x0d34a5c0(lStack_3c8);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0e2d2e88;
LAB_0e2d2eca:
    func_0x0e3af630(&uStack_400,param_1,&DAT_0147125d,0x23);
  }
  if (cStack_3d0 != '\0') {
    return;
  }
  lVar18 = uStack_400 + 0x18;
  lVar9 = func_0x0d34a5c0(lVar18);
  for (pbVar11 = *(byte **)(uStack_400 + 0x50); pbVar11 != *(byte **)(uStack_400 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e2d2fca;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e2d2fca:
      if ((bVar2 & 1) == 0) {
        pbVar16 = pbVar11 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar11 + 0x10);
      }
      auVar25[0] = -(*pbVar16 == 0x5b);
      auVar25[1] = -(pbVar16[1] == 99);
      auVar25[2] = -(pbVar16[2] == 0x65);
      auVar25[3] = -(pbVar16[3] == 0x72);
      auVar25[4] = -(pbVar16[4] == 0x65);
      auVar25[5] = -(pbVar16[5] == 0x61);
      auVar25[6] = -(pbVar16[6] == 0x6c);
      auVar25[7] = -(pbVar16[7] == 0x3a);
      auVar25[8] = -(pbVar16[8] == 100);
      auVar25[9] = -(pbVar16[9] == 0x6f);
      auVar25[10] = -(pbVar16[10] == 99);
      auVar25[0xb] = -(pbVar16[0xb] == 0x75);
      auVar25[0xc] = -(pbVar16[0xc] == 0x6d);
      auVar25[0xd] = -(pbVar16[0xd] == 0x65);
      auVar25[0xe] = -(pbVar16[0xe] == 0x6e);
      auVar25[0xf] = -(pbVar16[0xf] == 0x74);
      auVar29[0] = -(pbVar16[10] == 99);
      auVar29[1] = -(pbVar16[0xb] == 0x75);
      auVar29[2] = -(pbVar16[0xc] == 0x6d);
      auVar29[3] = -(pbVar16[0xd] == 0x65);
      auVar29[4] = -(pbVar16[0xe] == 0x6e);
      auVar29[5] = -(pbVar16[0xf] == 0x74);
      auVar29[6] = -(pbVar16[0x10] == 0x61);
      auVar29[7] = -(pbVar16[0x11] == 0x74);
      auVar29[8] = -(pbVar16[0x12] == 0x69);
      auVar29[9] = -(pbVar16[0x13] == 0x6f);
      auVar29[10] = -(pbVar16[0x14] == 0x6e);
      auVar29[0xb] = -(pbVar16[0x15] == 0x5f);
      auVar29[0xc] = -(pbVar16[0x16] == 0x74);
      auVar29[0xd] = -(pbVar16[0x17] == 0x61);
      auVar29[0xe] = -(pbVar16[0x18] == 0x67);
      auVar29[0xf] = -(pbVar16[0x19] == 0x5d);
      auVar29 = auVar29 & auVar25;
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
  if (pbVar11 == *(byte **)(uStack_400 + 0x58)) {
LAB_0e2d2ff9:
    if (iStack_3d8 == 0) {
      if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
      goto LAB_0e2d306d;
      lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
    }
    else {
      auStack_508._0_8_ = func_0x048b0c90(lVar18,lVar9,uStack_3d4,1);
      if (auStack_508._0_8_ == 0) {
        auStack_508 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_508);
        if (auStack_508._0_8_ == 0) goto LAB_0e2d306d;
      }
      if ((*(int *)(auStack_508._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_508._0_8_ + 0x58) != 0)) {
        lVar9 = *(long *)(auStack_508._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2d306d:
        lVar9 = 0;
      }
    }
    plStack_560 = (long *)&UNK_0488e0b0;
    pcStack_558 = (code *)0x0;
    uStack_550 = CONCAT35(uStack_550._5_3_,0x48b5725f);
    uStack_570 = 0;
    auStack_508 = (undefined1  [16])0x0;
    auStack_4f0 = ZEXT816(0x488e0b0);
    auStack_4e0._0_5_ = 0x48b5725f;
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_438 = 0x21;
    uStack_430 = 0x1a;
    *(ulong *)((long)puVar20 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar20 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar20 = _DAT_013bbacd;
    puVar20[1] = uVar3;
    *(undefined1 *)((long)puVar20 + 0x1a) = 0;
    puStack_428 = puVar20;
    lVar9 = func_0x048b5060(lVar9,&uStack_438);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if ((undefined1 *)(lVar9 + 0x20) == auStack_508) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
        puVar20 = (undefined8 *)(lVar9 + 0x28);
        (**(code **)(lVar9 + 0x40))(puVar20);
        if (auStack_4e0[4] != '\0') {
          if (auStack_4e0[4] == '\x02') {
            (*(code *)auStack_4f0._0_8_)(5,auStack_508 + 8,puVar20);
          }
          else {
            uVar3 = auStack_508._8_8_;
            auStack_508._8_8_ = 0;
            *puVar20 = uVar3;
          }
        }
      }
      *(undefined8 *)(lVar9 + 0x38) = auStack_4f0._0_8_;
      *(undefined8 *)(lVar9 + 0x40) = auStack_4f0._8_8_;
      *(undefined4 *)(lVar9 + 0x48) = auStack_4e0._0_4_;
      *(char *)(lVar9 + 0x4c) = auStack_4e0[4];
      pcVar12 = (code *)auStack_4f0._8_8_;
    }
    if ((uStack_438 & 1) != 0) {
      func_0x0412a280(puStack_428,uStack_438 & 0xfffffffffffffffe);
      pcVar12 = (code *)auStack_4f0._8_8_;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_508 + 8);
    }
    if (pcStack_558 != (code *)0x0) {
      (*pcStack_558)(&uStack_570);
    }
  }
  else {
    iVar7 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e2d2ff9;
  }
  uStack_378 = uStack_3f8;
  puStack_370 = puStack_3f0;
  puStack_368 = (undefined8 *)uStack_3e8;
  uStack_360 = uStack_3e0;
  lStack_3c8 = CONCAT44(lStack_3c8._4_4_,iStack_3d8);
  uStack_3bc = uStack_3d4;
  uStack_338 = CONCAT71(uStack_3cf,cStack_3d0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013041f6;
  *(ulong *)((long)puVar20 + 0xe) = CONCAT62(_UNK_013041f0,_DAT_013041ee);
  *(undefined8 *)((long)puVar20 + 0x16) = uVar3;
  uVar3 = CONCAT26(_DAT_013041ee,_UNK_013041e8);
  *puVar20 = _DAT_013041e0;
  puVar20[1] = uVar3;
  *(undefined1 *)((long)puVar20 + 0x1e) = 0;
  lVar9 = func_0x0d34a5c0(uStack_400 + 0x18);
  pbVar16 = *(byte **)(uStack_400 + 0x58);
  uStack_330 = uStack_400;
  for (pbVar11 = *(byte **)(uStack_400 + 0x50); pbVar11 != pbVar16; pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e2d333a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x24) {
LAB_0e2d333a:
      if ((bVar2 & 1) == 0) {
        pbVar19 = pbVar11 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar11 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar19,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar11 != pbVar16) {
    iVar7 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    bVar21 = true;
    if (iVar7 != _DAT_0f550754) goto LAB_0e2d3600;
  }
  if ((int)lStack_3c8 == 0) {
    if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
    goto LAB_0e2d33dd;
    lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
  }
  else {
    lVar9 = func_0x048b0c90(uStack_400 + 0x18,lVar9,uStack_3bc,1);
    if (lVar9 == 0) {
      auStack_508 = ZEXT816(0);
      func_0x048b0d20(auStack_508);
      lVar9 = auStack_508._0_8_;
      if (auStack_508._0_8_ == 0) goto LAB_0e2d33dd;
    }
    if ((*(int *)(lVar9 + 0x50) == -0x45dcb126) && (*(long *)(lVar9 + 0x58) != 0)) {
      lVar9 = *(long *)(lVar9 + 0x58) + 0x40;
    }
    else {
LAB_0e2d33dd:
      lVar9 = 0;
    }
  }
  uStack_570 = 0;
  plStack_560 = (long *)&UNK_048b4ab0;
  pcStack_558 = (code *)&UNK_048b49f0;
  uStack_550 = CONCAT35(uStack_550._5_3_,0x1d33bd9c5);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar14 = 0x21;
  puVar14[1] = 0x1e;
  puVar14[2] = puVar20;
  *(undefined2 *)(puVar14 + 3) = 0x1200;
  puVar14[4] = 0x1005000150001;
  puVar14[5] = &UNK_01254d89;
  puVar14[6] = &UNK_01254d89;
  auStack_4f0._8_8_ = &UNK_048b49f0;
  auStack_4f0._0_8_ = &UNK_048b4ab0;
  auStack_4e0._0_5_ = 0x1d33bd9c5;
  uStack_570 = 0;
  auStack_508._8_8_ = puVar14;
  auStack_508._0_8_ = &UNK_048b46e0;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_014518c1;
  uStack_438 = 0x29;
  uStack_430 = 0x24;
  puVar20[2] = _DAT_014518b9;
  puVar20[3] = uVar3;
  uVar3 = _UNK_014518b1;
  *puVar20 = _DAT_014518a9;
  puVar20[1] = uVar3;
  *(undefined4 *)(puVar20 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar20 + 0x24) = 0;
  puStack_428 = puVar20;
  lVar9 = func_0x048b5060(lVar9,&uStack_438);
  *(undefined **)(lVar9 + 0x20) = &UNK_048b46e0;
  pcVar12 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar9 + 0x20) != auStack_508) {
    puVar20 = (undefined8 *)(lVar9 + 0x28);
    if (*(code **)(lVar9 + 0x40) == (code *)0x0) {
LAB_0e2d3577:
      uVar3 = auStack_508._8_8_;
      auStack_508._8_8_ = 0;
      *puVar20 = uVar3;
    }
    else {
      (**(code **)(lVar9 + 0x40))(puVar20);
      if (auStack_4e0[4] != '\0') {
        if (auStack_4e0[4] != '\x02') goto LAB_0e2d3577;
        (*(code *)auStack_4f0._0_8_)(5,auStack_508 + 8,puVar20);
      }
    }
    *(undefined8 *)(lVar9 + 0x38) = auStack_4f0._0_8_;
    *(undefined8 *)(lVar9 + 0x40) = auStack_4f0._8_8_;
    *(undefined4 *)(lVar9 + 0x48) = auStack_4e0._0_4_;
    *(char *)(lVar9 + 0x4c) = auStack_4e0[4];
    pcVar12 = (code *)auStack_4f0._8_8_;
  }
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(puStack_428,uStack_438 & 0xfffffffffffffffe);
    pcVar12 = (code *)auStack_4f0._8_8_;
  }
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(auStack_508 + 8);
  }
  if (pcStack_558 != (code *)0x0) {
    (*pcStack_558)(&uStack_570);
  }
  puVar20 = (undefined8 *)0x0;
  bVar21 = false;
LAB_0e2d3600:
  auStack_3b8._8_8_ = uStack_378;
  auStack_3b8._0_8_ = uStack_330;
  puStack_3a8 = puStack_370;
  uStack_3a0 = puStack_368;
  uStack_398 = uStack_360;
  uStack_390 = CONCAT44(uStack_3bc,(int)lStack_3c8);
  uStack_388 = uStack_338;
  func_0x0e3afef0(auStack_508,auStack_3b8,&UNK_013771cd,0xe);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0ef44b00;
  uVar3 = auStack_4f0._0_8_;
  auStack_4f0._0_8_ = puVar14;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
  plStack_568 = (long *)0x0;
  plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
  pcStack_558 = (code *)0x1;
  uStack_550 = 0;
  puStack_548 = &UNK_048b3f30;
  puStack_540 = &SUB_048b06d0;
  puStack_538 = &UNK_048b2190;
  puStack_530 = &UNK_0e3b0450;
  puStack_528 = &UNK_0e3b0610;
  uStack_520 = 0;
  auStack_518 = ZEXT816(0);
  func_0x048b05a0(auStack_508._8_8_,&uStack_570);
  uVar3 = auStack_518._8_8_;
  if ((long *)auStack_518._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_518._8_8_ + 8);
    lVar9 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e3b0150(auStack_508);
  uStack_408 = CONCAT71(uStack_408._1_7_,(undefined1)uStack_388);
  uStack_418 = uStack_398;
  uStack_410 = uStack_390;
  puStack_428 = puStack_3a8;
  uStack_420 = uStack_3a0;
  uStack_438 = auStack_3b8._0_8_;
  uStack_430 = auStack_3b8._8_8_;
  func_0x048b0bc0(auStack_4f0);
  func_0x0e3afef0(auStack_508,&uStack_438,&DAT_0147125d,0x23);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f4b8090;
  uVar3 = auStack_4f0._0_8_;
  auStack_4f0._0_8_ = puVar14;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_570 = CONCAT44(uStack_570._4_4_,uStack_4f8);
  plStack_568 = (long *)0x0;
  plStack_560 = (long *)((ulong)plStack_560 & 0xffffffff00000000);
  pcStack_558 = (code *)0x1;
  uStack_550 = 0;
  puStack_548 = &UNK_0e3b0a20;
  puStack_540 = &SUB_048b06d0;
  puStack_538 = &UNK_0e3a7e60;
  puStack_530 = &UNK_0e3b0ae0;
  puStack_528 = &UNK_0e3b0d50;
  uStack_520 = 0;
  auStack_518 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_508._8_8_,&uStack_570);
  uVar3 = auStack_518._8_8_;
  if ((long *)auStack_518._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_518._8_8_ + 8);
    lVar9 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e3b0150(auStack_508);
  func_0x048b0bc0(auStack_4f0);
  if (bVar21) {
    func_0x0412a280(puVar20,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13041e0  Jigsaw Structure Metadata File
 * 0x13041ee  re Metadata File
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
