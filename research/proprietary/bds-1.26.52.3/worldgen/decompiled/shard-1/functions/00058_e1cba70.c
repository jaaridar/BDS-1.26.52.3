/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2cba70 (ELF vaddr 0xe1cba70)
 * Label: callee-of:0xe706340
 * Body:  [[0e2cba70, 0e2cbc89] [0e2cbc90, 0e2cbcd1] [0e2cbce0, 0e2cc8ce] [0e2cc8d0, 0e2cc912] [0e2cc920, 0e2cd0b1] [0e2cd0c0, 0e2cd1da] [0e2cd1e0, 0e2cd47a]]
 * Ghidra: FUN_0e2cba70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2cba70(long param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uStack_468;
  long *plStack_460;
  long *plStack_458;
  code *pcStack_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined1 *puStack_438;
  undefined1 *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  undefined1 auStack_3f8 [16];
  undefined4 uStack_3e8;
  code *pcStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined4 uStack_3af;
  undefined1 uStack_3ab;
  undefined2 uStack_3aa;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined4 uStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined2 uStack_338;
  undefined2 uStack_336;
  uint uStack_334;
  uint uStack_330;
  undefined1 uStack_32c;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  code *pcStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  char cStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char cStack_238;
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
  undefined1 uStack_1b8;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_ee;
  undefined2 uStack_ea;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0e134660();
  if ((DAT_0f74e8e8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74e8e8), iVar5 != 0)) {
    func_0x0e368d90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e868,0xf53dab8);
    func_0x0410844d(&DAT_0f74e8e8);
  }
  lStack_2b0 = param_1 + 0x18;
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74e868 + 4)) * 8);
  do {
    lVar17 = *plVar10;
    if (lVar17 == -1) goto LAB_0e2cbaf0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f74e868 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e2cbaf0:
    puVar7 = &DAT_0f74e868;
    if (iRam000000000f74e8c8 != -0x2b3da790) goto LAB_0e2cbb77;
LAB_0e2cbb1b:
    lVar17 = *(long *)(puVar7 + 0x68);
    if (lVar17 == 0) goto LAB_0e2cbb77;
    bVar18 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar15 = lVar17 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar17 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar18) {
      uVar12 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e369640(&uStack_2e8,param_1,lVar15,uVar12);
    if (cStack_2b8 != '\0') goto LAB_0e2cbb58;
LAB_0e2cbb9d:
    uVar12 = uStack_2e8;
    if ((DAT_0f74e8e8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74e8e8), iVar5 != 0)) {
      func_0x0e368d90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e868,0xf53dab8);
      func_0x0410844d(&DAT_0f74e8e8);
    }
    plVar10 = (long *)(*(long *)(uVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar12 + 0x20) - *(long *)(uVar12 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74e868 + 4)) * 8);
    do {
      lVar17 = *plVar10;
      if (lVar17 == -1) goto LAB_0e2cbc11;
      plVar10 = (long *)(*(long *)(uVar12 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar12 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f74e868 + 4)
            );
    if (plVar10 == *(long **)(uVar12 + 0x38)) {
LAB_0e2cbc11:
      puVar7 = &DAT_0f74e868;
    }
    else {
      puVar7 = (undefined *)plVar10[2];
    }
    for (pbVar8 = *(byte **)(uStack_2e8 + 0x50); pbVar8 != *(byte **)(uStack_2e8 + 0x58);
        pbVar8 = pbVar8 + 0x38) {
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e2cbcea;
      }
      else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e2cbcea:
        if ((bVar2 & 1) == 0) {
          pbVar13 = pbVar8 + 1;
        }
        else {
          pbVar13 = *(byte **)(pbVar8 + 0x10);
        }
        auVar19[0] = -(*pbVar13 == 0x5b);
        auVar19[1] = -(pbVar13[1] == 99);
        auVar19[2] = -(pbVar13[2] == 0x65);
        auVar19[3] = -(pbVar13[3] == 0x72);
        auVar19[4] = -(pbVar13[4] == 0x65);
        auVar19[5] = -(pbVar13[5] == 0x61);
        auVar19[6] = -(pbVar13[6] == 0x6c);
        auVar19[7] = -(pbVar13[7] == 0x3a);
        auVar19[8] = -(pbVar13[8] == 100);
        auVar19[9] = -(pbVar13[9] == 0x6f);
        auVar19[10] = -(pbVar13[10] == 99);
        auVar19[0xb] = -(pbVar13[0xb] == 0x75);
        auVar19[0xc] = -(pbVar13[0xc] == 0x6d);
        auVar19[0xd] = -(pbVar13[0xd] == 0x65);
        auVar19[0xe] = -(pbVar13[0xe] == 0x6e);
        auVar19[0xf] = -(pbVar13[0xf] == 0x74);
        auVar21[0] = -(pbVar13[10] == 99);
        auVar21[1] = -(pbVar13[0xb] == 0x75);
        auVar21[2] = -(pbVar13[0xc] == 0x6d);
        auVar21[3] = -(pbVar13[0xd] == 0x65);
        auVar21[4] = -(pbVar13[0xe] == 0x6e);
        auVar21[5] = -(pbVar13[0xf] == 0x74);
        auVar21[6] = -(pbVar13[0x10] == 0x61);
        auVar21[7] = -(pbVar13[0x11] == 0x74);
        auVar21[8] = -(pbVar13[0x12] == 0x69);
        auVar21[9] = -(pbVar13[0x13] == 0x6f);
        auVar21[10] = -(pbVar13[0x14] == 0x6e);
        auVar21[0xb] = -(pbVar13[0x15] == 0x5f);
        auVar21[0xc] = -(pbVar13[0x16] == 0x74);
        auVar21[0xd] = -(pbVar13[0x17] == 0x61);
        auVar21[0xe] = -(pbVar13[0x18] == 0x67);
        auVar21[0xf] = -(pbVar13[0x19] == 0x5d);
        auVar21 = auVar21 & auVar19;
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar8 == *(byte **)(uStack_2e8 + 0x58)) {
LAB_0e2cbd18:
      uVar4 = uStack_2bc;
      if (iStack_2c0 == 0) {
        if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e2cbda0;
        lVar17 = *(long *)(puVar7 + 0x68) + 0x38;
      }
      else {
        if (puVar7 == (undefined *)0x0) {
          puVar7 = (undefined *)FUN_048aead0(uVar12 + 0x18);
        }
        auStack_3f8._0_8_ = func_0x048b0c90(uVar12 + 0x18,puVar7,uVar4,1);
        if (auStack_3f8._0_8_ == 0) {
          auStack_3f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_3f8);
          if (auStack_3f8._0_8_ == 0) goto LAB_0e2cbda0;
        }
        if ((*(int *)(auStack_3f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_3f8._0_8_ + 0x58) != 0)) {
          lVar17 = *(long *)(auStack_3f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e2cbda0:
          lVar17 = 0;
        }
      }
      plStack_458 = (long *)&UNK_0488e0b0;
      pcStack_450 = (code *)0x0;
      uStack_448 = CONCAT35(uStack_448._5_3_,0x48b5725f);
      uStack_468 = 0;
      auStack_3f8 = (undefined1  [16])0x0;
      pcStack_3e0 = (code *)&UNK_0488e0b0;
      pcStack_3d8 = (code *)0x0;
      uStack_3d0 = CONCAT35(uStack_3d0._5_3_,0x48b5725f);
      puStack_318 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_318 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar11 = _UNK_013bbadf;
      uStack_328 = 0x21;
      uStack_320 = 0x1a;
      *(ulong *)((long)puStack_318 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_318 + 0x12) = uVar11;
      uVar11 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_318 = _DAT_013bbacd;
      puStack_318[1] = uVar11;
      *(undefined1 *)((long)puStack_318 + 0x1a) = 0;
      lVar17 = func_0x048b5060(lVar17,&uStack_328);
      *(undefined8 *)(lVar17 + 0x20) = 0;
      if ((undefined1 *)(lVar17 + 0x20) == auStack_3f8) {
        pcVar9 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar17 + 0x40) != (code *)0x0) {
          puVar16 = (undefined8 *)(lVar17 + 0x28);
          (**(code **)(lVar17 + 0x40))(puVar16);
          if (uStack_3d0._4_1_ != '\0') {
            if (uStack_3d0._4_1_ == '\x02') {
              (*pcStack_3e0)(5,auStack_3f8 + 8,puVar16);
            }
            else {
              uVar11 = auStack_3f8._8_8_;
              auStack_3f8._8_8_ = 0;
              *puVar16 = uVar11;
            }
          }
        }
        *(code **)(lVar17 + 0x38) = pcStack_3e0;
        *(code **)(lVar17 + 0x40) = pcStack_3d8;
        *(undefined4 *)(lVar17 + 0x48) = (undefined4)uStack_3d0;
        *(char *)(lVar17 + 0x4c) = uStack_3d0._4_1_;
        pcVar9 = pcStack_3d8;
      }
      if ((uStack_328 & 1) != 0) {
        func_0x0412a280(puStack_318,uStack_328 & 0xfffffffffffffffe);
        pcVar9 = pcStack_3d8;
      }
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(auStack_3f8 + 8);
      }
      if (pcStack_450 != (code *)0x0) {
        (*pcStack_450)(&uStack_468);
      }
    }
    else {
      iVar5 = *(int *)(pbVar8 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar5 == _DAT_0f550ac4) goto LAB_0e2cbd18;
    }
    cStack_238 = cStack_2b8;
    uStack_240 = CONCAT44(uStack_2bc,iStack_2c0);
    uStack_48 = uStack_2c8;
    uStack_58 = uStack_2d8;
    uStack_50 = uStack_2d0;
    uStack_68 = uStack_2e8;
    uStack_60 = uStack_2e0;
    uStack_268 = uStack_2e8;
    uStack_260 = uStack_2e0;
    uStack_258 = uStack_2d8;
    uStack_250 = uStack_2d0;
    uStack_248 = uStack_2c8;
    func_0x0e36a1b0(auStack_3f8,&uStack_268,&UNK_014ca08b,9);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0ef44b00;
    if (pcStack_3e0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3e0;
      pcStack_3e0 = pcVar9;
      (**(code **)(lVar17 + 8))();
      pcVar9 = pcStack_3e0;
    }
    pcStack_3e0 = pcVar9;
    uStack_468 = CONCAT44(uStack_468._4_4_,uStack_3e8);
    plStack_460 = (long *)0x0;
    plStack_458 = (long *)((ulong)plStack_458 & 0xffffffff00000000);
    pcStack_450 = (code *)0x1;
    uStack_448 = 0;
    puStack_440 = &UNK_048b3f30;
    puStack_438 = &SUB_048b06d0;
    puStack_430 = &SUB_048b2190;
    puStack_428 = &UNK_0e36a760;
    puStack_420 = &UNK_0e36a920;
    uStack_418 = 0;
    uStack_410 = 0;
    plStack_408 = (long *)0x0;
    func_0x048b05a0(auStack_3f8._8_8_,&uStack_468);
    plVar10 = plStack_408;
    if (plStack_408 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_408 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_408 + 0x10))(plStack_408);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e36a460(auStack_3f8);
    cStack_b8 = cStack_238;
    uStack_c8 = uStack_248;
    uStack_c0 = uStack_240;
    uStack_d8 = uStack_258;
    uStack_d0 = uStack_250;
    uStack_e8 = uStack_268;
    uStack_e0 = uStack_260;
    func_0x048b0bc0(&pcStack_3e0);
    uStack_228 = uStack_e8;
    uStack_220 = uStack_e0;
    uStack_218 = uStack_d8;
    uStack_210 = uStack_d0;
    uStack_208 = uStack_c8;
    uStack_200 = uStack_c0;
    uStack_1f8 = CONCAT71(uStack_b7,cStack_b8);
    func_0x0e36a1b0(auStack_3f8,&uStack_228,&UNK_01438276,7);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b08c0;
    if (pcStack_3e0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3e0;
      pcStack_3e0 = pcVar9;
      (**(code **)(lVar17 + 8))();
      pcVar9 = pcStack_3e0;
    }
    pcStack_3e0 = pcVar9;
    uStack_468 = CONCAT44(uStack_468._4_4_,uStack_3e8);
    plStack_460 = (long *)0x0;
    plStack_458 = (long *)((ulong)plStack_458 & 0xffffffff00000000);
    pcStack_450 = (code *)0x1;
    uStack_448 = 0;
    puStack_440 = &UNK_0e173d70;
    puStack_438 = &SUB_048b06d0;
    puStack_430 = &UNK_0e1726a0;
    puStack_428 = &UNK_0e36aaf0;
    puStack_420 = &UNK_0e36acf0;
    uStack_418 = 0;
    uStack_410 = 0;
    plStack_408 = (long *)0x0;
    func_0x048b05a0(auStack_3f8._8_8_,&uStack_468);
    plVar10 = plStack_408;
    if (plStack_408 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_408 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_408 + 0x10))(plStack_408);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e36a460(auStack_3f8);
    uStack_278 = (undefined1)uStack_1f8;
    uStack_288 = uStack_208;
    uStack_280 = uStack_200;
    uStack_298 = uStack_218;
    uStack_290 = uStack_210;
    uStack_2a8 = uStack_228;
    uStack_2a0 = uStack_220;
    func_0x048b0bc0(&pcStack_3e0);
    if ((int)uStack_280 == 4) {
      lVar17 = func_0x0e36b020(&uStack_2a8);
      lVar17 = *(long *)(lVar17 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0e2cc35a:
      puVar16[1] = 0xffffffffffffffff;
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 0xff;
      *puVar16 = &UNK_0f4e3cf0;
      puVar16[4] = 1;
      puVar16[5] = 0;
      puVar16[6] = 0;
      *(undefined1 *)(puVar16 + 7) = 0;
      plVar10 = *(long **)(lVar17 + 8);
      *(undefined8 **)(lVar17 + 8) = puVar16;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x28))();
      }
    }
    else if ((int)uStack_280 == 1) {
      lVar17 = func_0x0e36aed0(&uStack_2a8);
      lVar17 = *(long *)(lVar17 + 0x58);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0e2cc35a;
    }
    uStack_1b8 = uStack_278;
    uStack_1c8 = uStack_288;
    uStack_1c0 = uStack_280;
    uStack_1d8 = uStack_298;
    uStack_1d0 = uStack_290;
    uStack_1e8 = uStack_2a8;
    uStack_1e0 = uStack_2a0;
    func_0x0e36a1b0(auStack_3f8,&uStack_1e8,&UNK_011dad3b,6);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f0126a0;
    if (pcStack_3e0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3e0;
      pcStack_3e0 = pcVar9;
      (**(code **)(lVar17 + 8))();
      pcVar9 = pcStack_3e0;
    }
    pcStack_3e0 = pcVar9;
    uStack_468 = CONCAT44(uStack_468._4_4_,uStack_3e8);
    plStack_460 = (long *)0x0;
    plStack_458 = (long *)((ulong)plStack_458 & 0xffffffff00000000);
    pcStack_450 = (code *)0x1;
    uStack_448 = 0;
    puStack_440 = &UNK_05daeda0;
    puStack_438 = &SUB_048b06d0;
    puStack_430 = &UNK_05daea90;
    puStack_428 = &UNK_0e36b1a0;
    puStack_420 = &UNK_0e36b300;
    uStack_418 = 0;
    uStack_410 = 0;
    plStack_408 = (long *)0x0;
    func_0x048b05a0(auStack_3f8._8_8_,&uStack_468);
    plVar10 = plStack_408;
    if (plStack_408 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_408 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_408 + 0x10))(plStack_408);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e36a460(auStack_3f8);
    uStack_78 = uStack_1b8;
    uStack_88 = uStack_1c8;
    uStack_80 = uStack_1c0;
    uStack_98 = uStack_1d8;
    uStack_90 = uStack_1d0;
    uStack_a8 = uStack_1e8;
    plStack_a0 = (long *)uStack_1e0;
    func_0x048b0bc0(&pcStack_3e0);
    uStack_ee = 0;
    uStack_ea = 0;
    uStack_120 = 0xffffffffffffffff;
    uStack_118 = 0;
    uStack_110 = 0xff;
    puStack_128 = &UNK_0f0edc68;
    uStack_108 = 0;
    uStack_100 = _DAT_014f0478;
    uStack_f8 = 0;
    uStack_f0 = 1;
    func_0x0e2d41d0(&uStack_1a8,&uStack_a8,&puStack_128);
    uStack_2f8 = uStack_178;
    uStack_308 = uStack_188;
    uStack_300 = uStack_180;
    puStack_318 = puStack_198;
    pcStack_310 = pcStack_190;
    uStack_328 = uStack_1a8;
    uStack_320 = uStack_1a0;
    func_0x0e36a1b0(auStack_3f8,&uStack_328,&UNK_0129e7c3,0x15);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f0126a0;
    if (pcStack_3e0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3e0;
      pcStack_3e0 = pcVar9;
      (**(code **)(lVar17 + 8))();
      pcVar9 = pcStack_3e0;
    }
    pcStack_3e0 = pcVar9;
    uStack_468 = CONCAT44(uStack_468._4_4_,uStack_3e8);
    plStack_460 = (long *)0x0;
    plStack_458 = (long *)((ulong)plStack_458 & 0xffffffff00000000);
    pcStack_450 = (code *)0x1;
    uStack_448 = 0;
    puStack_440 = &UNK_05daeda0;
    puStack_438 = &SUB_048b06d0;
    puStack_430 = &UNK_05daea90;
    puStack_428 = &UNK_0e36b4e0;
    puStack_420 = &UNK_0e36b640;
    uStack_418 = 0;
    uStack_410 = 0;
    plStack_408 = (long *)0x0;
    func_0x048b05a0(auStack_3f8._8_8_,&uStack_468);
    plVar10 = plStack_408;
    if (plStack_408 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_408 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_408 + 0x10))(plStack_408);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e36a460(auStack_3f8);
    puStack_438 = (undefined1 *)CONCAT71(puStack_438._1_7_,(undefined1)uStack_2f8);
    uStack_448 = uStack_308;
    puStack_440 = (undefined *)uStack_300;
    plStack_458 = puStack_318;
    pcStack_450 = pcStack_310;
    uStack_468 = uStack_328;
    plStack_460 = (long *)uStack_320;
    func_0x048b0bc0(&pcStack_3e0);
    uStack_12e = 0;
    uStack_12a = 0;
    uStack_160 = 0xffffffffffffffff;
    uStack_158 = 0;
    uStack_150 = 0xff;
    puStack_168 = &UNK_0f0edc68;
    uStack_148 = 0;
    uStack_140 = _DAT_014f05a0;
    uStack_138 = 0;
    uStack_130 = 1;
    func_0x0e2d41d0(auStack_3f8,&uStack_468,&puStack_168);
    lVar17 = func_0x0e36b820(lStack_2b0);
    if (*(int *)(lVar17 + 0x60) != -0x2b3da790) goto LAB_0e2cc832;
LAB_0e2cc7f0:
    lVar17 = *(long *)(lVar17 + 0x68);
    if (lVar17 == 0) goto LAB_0e2cc832;
    bVar18 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar15 = lVar17 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar17 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar18) {
      uVar12 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e36c550(&uStack_2e8,param_1,lVar15,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar10[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e2cbb1b;
LAB_0e2cbb77:
    func_0x0e369640(&uStack_2e8,param_1,&UNK_013f344a,0x11);
    if (cStack_2b8 == '\0') goto LAB_0e2cbb9d;
LAB_0e2cbb58:
    lVar17 = func_0x0e36b820(lStack_2b0);
    if (*(int *)(lVar17 + 0x60) == -0x2b3da790) goto LAB_0e2cc7f0;
LAB_0e2cc832:
    func_0x0e36c550(&uStack_2e8,param_1,&DAT_01e13850,0x18);
  }
  if (cStack_2b8 != '\0') {
    return;
  }
  lVar15 = uStack_2e8 + 0x18;
  lVar17 = func_0x0e36b820(lVar15);
  for (pbVar8 = *(byte **)(uStack_2e8 + 0x50); pbVar8 != *(byte **)(uStack_2e8 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e2cc92a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e2cc92a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar8 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar8 + 0x10);
      }
      auVar20[0] = -(*pbVar13 == 0x5b);
      auVar20[1] = -(pbVar13[1] == 99);
      auVar20[2] = -(pbVar13[2] == 0x65);
      auVar20[3] = -(pbVar13[3] == 0x72);
      auVar20[4] = -(pbVar13[4] == 0x65);
      auVar20[5] = -(pbVar13[5] == 0x61);
      auVar20[6] = -(pbVar13[6] == 0x6c);
      auVar20[7] = -(pbVar13[7] == 0x3a);
      auVar20[8] = -(pbVar13[8] == 100);
      auVar20[9] = -(pbVar13[9] == 0x6f);
      auVar20[10] = -(pbVar13[10] == 99);
      auVar20[0xb] = -(pbVar13[0xb] == 0x75);
      auVar20[0xc] = -(pbVar13[0xc] == 0x6d);
      auVar20[0xd] = -(pbVar13[0xd] == 0x65);
      auVar20[0xe] = -(pbVar13[0xe] == 0x6e);
      auVar20[0xf] = -(pbVar13[0xf] == 0x74);
      auVar22[0] = -(pbVar13[10] == 99);
      auVar22[1] = -(pbVar13[0xb] == 0x75);
      auVar22[2] = -(pbVar13[0xc] == 0x6d);
      auVar22[3] = -(pbVar13[0xd] == 0x65);
      auVar22[4] = -(pbVar13[0xe] == 0x6e);
      auVar22[5] = -(pbVar13[0xf] == 0x74);
      auVar22[6] = -(pbVar13[0x10] == 0x61);
      auVar22[7] = -(pbVar13[0x11] == 0x74);
      auVar22[8] = -(pbVar13[0x12] == 0x69);
      auVar22[9] = -(pbVar13[0x13] == 0x6f);
      auVar22[10] = -(pbVar13[0x14] == 0x6e);
      auVar22[0xb] = -(pbVar13[0x15] == 0x5f);
      auVar22[0xc] = -(pbVar13[0x16] == 0x74);
      auVar22[0xd] = -(pbVar13[0x17] == 0x61);
      auVar22[0xe] = -(pbVar13[0x18] == 0x67);
      auVar22[0xf] = -(pbVar13[0x19] == 0x5d);
      auVar22 = auVar22 & auVar20;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar8 == *(byte **)(uStack_2e8 + 0x58)) {
LAB_0e2cc959:
    if (iStack_2c0 == 0) {
      if ((*(int *)(lVar17 + 0x60) != -0x2b3da790) || (*(long *)(lVar17 + 0x68) == 0))
      goto LAB_0e2cc9cd;
      lVar17 = *(long *)(lVar17 + 0x68) + 0x38;
    }
    else {
      auStack_3f8._0_8_ = func_0x048b0c90(lVar15,lVar17,uStack_2bc,1);
      if (auStack_3f8._0_8_ == 0) {
        auStack_3f8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_3f8);
        if (auStack_3f8._0_8_ == 0) goto LAB_0e2cc9cd;
      }
      if ((*(int *)(auStack_3f8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_3f8._0_8_ + 0x58) != 0)) {
        lVar17 = *(long *)(auStack_3f8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2cc9cd:
        lVar17 = 0;
      }
    }
    plStack_458 = (long *)&UNK_0488e0b0;
    pcStack_450 = (code *)0x0;
    uStack_448 = CONCAT35(uStack_448._5_3_,0x48b5725f);
    uStack_468 = 0;
    auStack_3f8 = (undefined1  [16])0x0;
    pcStack_3e0 = (code *)&UNK_0488e0b0;
    pcStack_3d8 = (code *)0x0;
    uStack_3d0 = CONCAT35(uStack_3d0._5_3_,0x48b5725f);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar11 = _UNK_013bbadf;
    uStack_328 = 0x21;
    uStack_320 = 0x1a;
    *(ulong *)((long)puVar16 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar16 + 0x12) = uVar11;
    uVar11 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar16 = _DAT_013bbacd;
    puVar16[1] = uVar11;
    *(undefined1 *)((long)puVar16 + 0x1a) = 0;
    puStack_318 = puVar16;
    lVar17 = func_0x048b5060(lVar17,&uStack_328);
    *(undefined8 *)(lVar17 + 0x20) = 0;
    if ((undefined1 *)(lVar17 + 0x20) == auStack_3f8) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar17 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar17 + 0x28);
        (**(code **)(lVar17 + 0x40))(puVar16);
        if (uStack_3d0._4_1_ != '\0') {
          if (uStack_3d0._4_1_ == '\x02') {
            (*pcStack_3e0)(5,auStack_3f8 + 8,puVar16);
          }
          else {
            uVar11 = auStack_3f8._8_8_;
            auStack_3f8._8_8_ = 0;
            *puVar16 = uVar11;
          }
        }
      }
      *(code **)(lVar17 + 0x38) = pcStack_3e0;
      *(code **)(lVar17 + 0x40) = pcStack_3d8;
      *(undefined4 *)(lVar17 + 0x48) = (undefined4)uStack_3d0;
      *(char *)(lVar17 + 0x4c) = uStack_3d0._4_1_;
      pcVar9 = pcStack_3d8;
    }
    if ((uStack_328 & 1) != 0) {
      func_0x0412a280(puStack_318,uStack_328 & 0xfffffffffffffffe);
      pcVar9 = pcStack_3d8;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_3f8 + 8);
    }
    if (pcStack_450 != (code *)0x0) {
      (*pcStack_450)(&uStack_468);
    }
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e2cc959;
  }
  uStack_188 = uStack_2c8;
  puStack_198 = (undefined8 *)uStack_2d8;
  pcStack_190 = (code *)uStack_2d0;
  uStack_1a8 = uStack_2e8;
  uStack_1a0 = uStack_2e0;
  uStack_328 = uStack_2e8;
  uStack_320 = uStack_2e0;
  puStack_318 = (undefined8 *)uStack_2d8;
  pcStack_310 = (code *)uStack_2d0;
  uStack_308 = uStack_2c8;
  if ((DAT_0f74e9c0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74e9c0), iVar5 != 0)) {
    func_0x0e36ba10(0xf74e9a8);
    func_0x0410844d(&DAT_0f74e9c0);
  }
  uStack_300 = 0x64407c5c00000001;
  lVar17 = uStack_328 + 0x18;
  auStack_3f8._0_8_ = func_0x0e36b820(lVar17);
  auStack_3f8._8_8_ = lVar17;
  func_0x0ed621a0(auStack_3f8,uStack_300._4_4_);
  auStack_3f8._0_2_ = 1;
  auStack_3f8._8_8_ = &uStack_320;
  uStack_3e8 = uStack_300._4_4_;
  pcStack_3e0 = (code *)0x0;
  pcStack_3d8 = (code *)0x0;
  uStack_3d0 = 0;
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  uStack_3b8 = 0x18;
  uStack_3b7 = 0x6563616c706572;
  uStack_3b0 = 0x6d;
  uStack_3af = 0x73746e65;
  uStack_3ab = 0;
  lStack_3a0 = 0;
  lStack_398 = 0;
  lStack_390 = 0;
  lStack_388 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  uStack_370 = 0x3f600000;
  func_0x048afb10(&lStack_3a0,8);
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_358 = 0;
  lStack_350 = 0;
  lStack_368 = 0;
  lStack_360 = 0;
  uStack_338 = 0xff00;
  uStack_334 = uStack_334 & 0xffffff00;
  uStack_330 = uStack_330 & 0xffffff00;
  uStack_32c = 0;
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b7100;
  if (pcStack_3e0 != (code *)0x0) {
    lVar17 = *(long *)pcStack_3e0;
    pcStack_3e0 = pcVar9;
    (**(code **)(lVar17 + 8))();
    pcVar9 = pcStack_3e0;
  }
  pcStack_3e0 = pcVar9;
  uStack_468 = CONCAT44(uStack_468._4_4_,uStack_3e8);
  plStack_460 = (long *)0x0;
  plStack_458 = (long *)((ulong)plStack_458 & 0xffffffff00000000);
  pcStack_450 = (code *)0x1;
  uStack_448 = 0;
  puStack_440 = &UNK_0e370410;
  puStack_438 = &SUB_048b06d0;
  puStack_430 = &UNK_0e36ee60;
  puStack_428 = &UNK_0e3704d0;
  puStack_420 = &UNK_0e370760;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  func_0x048b05a0(auStack_3f8._8_8_,&uStack_468);
  plVar10 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_408 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      func_0x0412c2d0(plVar10);
    }
  }
  uVar11 = auStack_3f8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_468 = CONCAT44(uStack_468._4_4_,_DAT_0f550a0c);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  pcVar3 = pcStack_3d8;
  pcVar9 = pcStack_3e0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_460 = plVar10 + 3;
  pcStack_3e0 = (code *)0x0;
  pcStack_3d8 = (code *)0x0;
  plVar10[3] = (long)pcVar9;
  plVar10[4] = (long)pcVar3;
  plVar10[7] = lStack_3c0;
  plVar10[5] = uStack_3d0;
  plVar10[6] = lStack_3c8;
  uStack_3d0 = 0;
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  plVar10[10] = lStack_3a8;
  plVar10[8] = CONCAT71(uStack_3b7,uStack_3b8);
  plVar10[9] = CONCAT26(uStack_3aa,CONCAT15(uStack_3ab,CONCAT41(uStack_3af,uStack_3b0)));
  uStack_3b8 = 0;
  uStack_3b7 = 0;
  uStack_3b0 = 0;
  uStack_3af = 0;
  uStack_3ab = 0;
  uStack_3aa = 0;
  lStack_3a8 = 0;
  plVar10[0xb] = lStack_3a0;
  plVar10[0xc] = lStack_398;
  plVar10[0xd] = lStack_390;
  lStack_3a0 = 0;
  lStack_398 = 0;
  lStack_390 = 0;
  plVar10[0xe] = lStack_388;
  plVar10[0xf] = lStack_380;
  plVar10[0x10] = lStack_378;
  lStack_388 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_370;
  plVar10[0x12] = lStack_368;
  plVar10[0x13] = lStack_360;
  plVar10[0x14] = lStack_358;
  lStack_368 = 0;
  lStack_360 = 0;
  lStack_358 = 0;
  plVar10[0x17] = lStack_340;
  plVar10[0x15] = lStack_350;
  plVar10[0x16] = lStack_348;
  lStack_350 = 0;
  lStack_348 = 0;
  lStack_340 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_32c,CONCAT43(uStack_330,uStack_334._1_3_));
  plVar10[0x18] = CONCAT44(uStack_334,CONCAT22(uStack_336,uStack_338));
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  plStack_458 = plVar10;
  func_0x048afd20(uVar11,&uStack_468);
  plVar10 = plStack_458;
  if (plStack_458 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_458 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_458 + 0x10))(plStack_458);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      func_0x0412c2d0(plVar10);
    }
  }
  uVar12 = uStack_328;
  lVar17 = *(long *)(uVar11 + 0x10);
  iVar5 = *(int *)(uVar11 + 0x1c);
  if (iVar5 == 2) {
    piVar14 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
    iVar5 = *piVar14;
    while (iVar5 != *(int *)(uVar11 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar5 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(uVar11 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0e2cd0ca:
    piVar14[4] = piVar14[4] | auStack_3f8._0_4_ << 0x10;
  }
  else {
    if (iVar5 == 1) {
      piVar14 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
      iVar5 = *piVar14;
      while (iVar5 != *(int *)(uVar11 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar5 = *piVar14;
      }
      goto LAB_0e2cd0ca;
    }
    if (iVar5 == 0) {
      *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | auStack_3f8._0_4_ << 0x10;
    }
  }
  iVar5 = (int)uStack_300;
  uVar4 = uStack_300._4_4_;
  func_0x048b0bc0(&pcStack_3e0);
  if (iVar5 != 4) {
    if (iVar5 != 1) {
      return;
    }
    lVar17 = uVar12 + 0x18;
    uVar11 = func_0x0e36b820(lVar17);
    lVar17 = func_0x048b0c90(lVar17,uVar11,uVar4,1);
    if (lVar17 == 0) {
      auStack_3f8 = ZEXT816(0);
      func_0x048b0d20(auStack_3f8);
      lVar17 = auStack_3f8._0_8_;
    }
    lVar17 = *(long *)(lVar17 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    goto LAB_0e2cd22e;
  }
  lVar17 = uVar12 + 0x18;
  uVar11 = func_0x0e36b820(lVar17);
  lVar17 = func_0x048b1040(lVar17,uVar11,uVar4,1);
  if (lVar17 == 0) {
    auStack_3f8 = ZEXT816(0);
    FUN_048b10d0(auStack_3f8);
    lVar15 = *(long *)(auStack_3f8._0_8_ + 0x38);
    lVar17 = auStack_3f8._0_8_;
    if (lVar15 == 0) goto LAB_0e2cd1b8;
LAB_0e2cd1d4:
    do {
      lVar17 = lVar15;
      lVar15 = *(long *)(lVar17 + 0x38);
      if (*(long *)(lVar17 + 0x38) == 0) {
        auStack_3f8 = ZEXT816(0);
        FUN_048b10d0(auStack_3f8);
        lVar15 = auStack_3f8._0_8_;
      }
    } while (lVar15 != 0);
  }
  else {
    lVar15 = *(long *)(lVar17 + 0x38);
    if (*(long *)(lVar17 + 0x38) != 0) goto LAB_0e2cd1d4;
LAB_0e2cd1b8:
    auStack_3f8 = ZEXT816(0);
    FUN_048b10d0(auStack_3f8);
    lVar15 = auStack_3f8._0_8_;
    if (auStack_3f8._0_8_ != 0) goto LAB_0e2cd1d4;
  }
  lVar17 = *(long *)(lVar17 + 0x48);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
LAB_0e2cd22e:
  puVar16[1] = 0xffffffffffffffff;
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 0xff;
  *puVar16 = &UNK_0f4b4730;
  plVar10 = *(long **)(lVar17 + 8);
  *(undefined8 **)(lVar17 + 8) = puVar16;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
