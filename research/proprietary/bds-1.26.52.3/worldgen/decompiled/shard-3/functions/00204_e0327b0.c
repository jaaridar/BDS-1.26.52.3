/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1327b0 (ELF vaddr 0xe0327b0)
 * Label: caller-of-callee
 * Body:  [[0e1327b0, 0e1329a7] [0e1329b0, 0e1329f1] [0e132a00, 0e1336c7] [0e1336d0, 0e133711] [0e133720, 0e133f41] [0e133f50, 0e13416c] [0e134170, 0e134555]]
 * Ghidra: FUN_0e1327b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e1327b0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  byte *pbVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  int *piVar15;
  undefined8 *puVar16;
  long lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uStack_458;
  long *plStack_450;
  long *plStack_448;
  code *pcStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined1 *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  undefined1 auStack_3e8 [16];
  undefined4 uStack_3d8;
  code *pcStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined4 uStack_39f;
  undefined1 uStack_39b;
  undefined2 uStack_39a;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  undefined4 uStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined2 uStack_328;
  undefined2 uStack_326;
  uint uStack_324;
  uint uStack_320;
  undefined1 uStack_31c;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  code *pcStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  char cStack_2b0;
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
  if ((DAT_0f746b50 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746b50), iVar7 != 0)) {
    func_0x0e16ece0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746ad0,0xf53dab8);
    func_0x0410844d(&DAT_0f746b50);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f746ad0 + 4)) * 8);
  do {
    lVar17 = *plVar11;
    if (lVar17 == -1) goto LAB_0e132830;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746ad0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e132830:
    puVar8 = &DAT_0f746ad0;
    if (iRam000000000f746b30 != -0x2b3da790) goto LAB_0e13289d;
LAB_0e13285b:
    lVar17 = *(long *)(puVar8 + 0x68);
    if (lVar17 == 0) goto LAB_0e13289d;
    bVar18 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar12 = lVar17 + 9;
    if (bVar18) {
      lVar12 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e16f410(&uStack_2e0,param_1,lVar12,uVar13);
    uVar13 = uStack_2e0;
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e13285b;
LAB_0e13289d:
    func_0x0e16f410(&uStack_2e0,param_1,&UNK_013f344a,0x11);
    uVar13 = uStack_2e0;
  }
  uStack_2e0 = uVar13;
  if (cStack_2b0 == '\0') {
    if ((DAT_0f746b50 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746b50), iVar7 != 0)) {
      func_0x0e16ece0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746ad0,0xf53dab8);
      func_0x0410844d(&DAT_0f746b50);
    }
    plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f746ad0 + 4)) * 8);
    do {
      lVar17 = *plVar11;
      if (lVar17 == -1) goto LAB_0e132930;
      plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746ad0 + 4)
            );
    if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e132930:
      puVar8 = &DAT_0f746ad0;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    for (pbVar9 = *(byte **)(uStack_2e0 + 0x50); pbVar9 != *(byte **)(uStack_2e0 + 0x58);
        pbVar9 = pbVar9 + 0x38) {
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e132a0a;
      }
      else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e132a0a:
        if ((bVar2 & 1) == 0) {
          pbVar14 = pbVar9 + 1;
        }
        else {
          pbVar14 = *(byte **)(pbVar9 + 0x10);
        }
        auVar19[0] = -(*pbVar14 == 0x5b);
        auVar19[1] = -(pbVar14[1] == 99);
        auVar19[2] = -(pbVar14[2] == 0x65);
        auVar19[3] = -(pbVar14[3] == 0x72);
        auVar19[4] = -(pbVar14[4] == 0x65);
        auVar19[5] = -(pbVar14[5] == 0x61);
        auVar19[6] = -(pbVar14[6] == 0x6c);
        auVar19[7] = -(pbVar14[7] == 0x3a);
        auVar19[8] = -(pbVar14[8] == 100);
        auVar19[9] = -(pbVar14[9] == 0x6f);
        auVar19[10] = -(pbVar14[10] == 99);
        auVar19[0xb] = -(pbVar14[0xb] == 0x75);
        auVar19[0xc] = -(pbVar14[0xc] == 0x6d);
        auVar19[0xd] = -(pbVar14[0xd] == 0x65);
        auVar19[0xe] = -(pbVar14[0xe] == 0x6e);
        auVar19[0xf] = -(pbVar14[0xf] == 0x74);
        auVar21[0] = -(pbVar14[10] == 99);
        auVar21[1] = -(pbVar14[0xb] == 0x75);
        auVar21[2] = -(pbVar14[0xc] == 0x6d);
        auVar21[3] = -(pbVar14[0xd] == 0x65);
        auVar21[4] = -(pbVar14[0xe] == 0x6e);
        auVar21[5] = -(pbVar14[0xf] == 0x74);
        auVar21[6] = -(pbVar14[0x10] == 0x61);
        auVar21[7] = -(pbVar14[0x11] == 0x74);
        auVar21[8] = -(pbVar14[0x12] == 0x69);
        auVar21[9] = -(pbVar14[0x13] == 0x6f);
        auVar21[10] = -(pbVar14[0x14] == 0x6e);
        auVar21[0xb] = -(pbVar14[0x15] == 0x5f);
        auVar21[0xc] = -(pbVar14[0x16] == 0x74);
        auVar21[0xd] = -(pbVar14[0x17] == 0x61);
        auVar21[0xe] = -(pbVar14[0x18] == 0x67);
        auVar21[0xf] = -(pbVar14[0x19] == 0x5d);
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
    if (pbVar9 == *(byte **)(uStack_2e0 + 0x58)) {
LAB_0e132a38:
      uVar5 = uStack_2b4;
      if (iStack_2b8 == 0) {
        if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e132ac0;
        lVar17 = *(long *)(puVar8 + 0x68) + 0x38;
      }
      else {
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)func_0x048aead0(uVar13 + 0x18);
        }
        auStack_3e8._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar8,uVar5,1);
        if (auStack_3e8._0_8_ == 0) {
          auStack_3e8 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_3e8);
          if (auStack_3e8._0_8_ == 0) goto LAB_0e132ac0;
        }
        if ((*(int *)(auStack_3e8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_3e8._0_8_ + 0x58) != 0)) {
          lVar17 = *(long *)(auStack_3e8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e132ac0:
          lVar17 = 0;
        }
      }
      plStack_448 = (long *)&UNK_0488e0b0;
      pcStack_440 = (code *)0x0;
      uStack_438 = CONCAT35(uStack_438._5_3_,0x48b5725f);
      uStack_458 = 0;
      auStack_3e8 = (undefined1  [16])0x0;
      pcStack_3d0 = (code *)&UNK_0488e0b0;
      pcStack_3c8 = (code *)0x0;
      uStack_3c0 = CONCAT35(uStack_3c0._5_3_,0x48b5725f);
      puStack_308 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_308 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      uStack_318 = 0x21;
      uStack_310 = 0x1a;
      *(ulong *)((long)puStack_308 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_308 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_308 = _DAT_013bbacd;
      puStack_308[1] = uVar3;
      *(undefined1 *)((long)puStack_308 + 0x1a) = 0;
      lVar17 = func_0x048b5060(lVar17,&uStack_318);
      *(undefined8 *)(lVar17 + 0x20) = 0;
      if ((undefined1 *)(lVar17 + 0x20) == auStack_3e8) {
        pcVar10 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar17 + 0x40) != (code *)0x0) {
          puVar16 = (undefined8 *)(lVar17 + 0x28);
          (**(code **)(lVar17 + 0x40))(puVar16);
          if (uStack_3c0._4_1_ != '\0') {
            if (uStack_3c0._4_1_ == '\x02') {
              (*pcStack_3d0)(5,auStack_3e8 + 8,puVar16);
            }
            else {
              uVar3 = auStack_3e8._8_8_;
              auStack_3e8._8_8_ = 0;
              *puVar16 = uVar3;
            }
          }
        }
        *(code **)(lVar17 + 0x38) = pcStack_3d0;
        *(code **)(lVar17 + 0x40) = pcStack_3c8;
        *(undefined4 *)(lVar17 + 0x48) = (undefined4)uStack_3c0;
        *(char *)(lVar17 + 0x4c) = uStack_3c0._4_1_;
        pcVar10 = pcStack_3c8;
      }
      if ((uStack_318 & 1) != 0) {
        func_0x0412a280(puStack_308,uStack_318 & 0xfffffffffffffffe);
        pcVar10 = pcStack_3c8;
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(auStack_3e8 + 8);
      }
      if (pcStack_440 != (code *)0x0) {
        (*pcStack_440)(&uStack_458);
      }
    }
    else {
      iVar7 = *(int *)(pbVar9 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar7 == _DAT_0f550ac4) goto LAB_0e132a38;
    }
    cStack_238 = cStack_2b0;
    uStack_240 = CONCAT44(uStack_2b4,iStack_2b8);
    uStack_48 = uStack_2c0;
    uStack_58 = uStack_2d0;
    uStack_50 = uStack_2c8;
    uStack_68 = uStack_2e0;
    uStack_60 = uStack_2d8;
    uStack_268 = uStack_2e0;
    uStack_260 = uStack_2d8;
    uStack_258 = uStack_2d0;
    uStack_250 = uStack_2c8;
    uStack_248 = uStack_2c0;
    func_0x0e16ff80(auStack_3e8,&uStack_268,&UNK_014ca08b,9);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0ef44b00;
    if (pcStack_3d0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3d0;
      pcStack_3d0 = pcVar10;
      (**(code **)(lVar17 + 8))();
      pcVar10 = pcStack_3d0;
    }
    pcStack_3d0 = pcVar10;
    uStack_458 = CONCAT44(uStack_458._4_4_,uStack_3d8);
    plStack_450 = (long *)0x0;
    plStack_448 = (long *)((ulong)plStack_448 & 0xffffffff00000000);
    pcStack_440 = (code *)0x1;
    uStack_438 = 0;
    puStack_430 = &UNK_048b3f30;
    puStack_428 = &SUB_048b06d0;
    puStack_420 = &SUB_048b2190;
    puStack_418 = &UNK_0e170530;
    puStack_410 = &UNK_0e1706f0;
    uStack_408 = 0;
    uStack_400 = 0;
    plStack_3f8 = (long *)0x0;
    FUN_048b05a0(auStack_3e8._8_8_,&uStack_458);
    plVar11 = plStack_3f8;
    if (plStack_3f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3f8 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e170230(auStack_3e8);
    cStack_b8 = cStack_238;
    uStack_c8 = uStack_248;
    uStack_c0 = uStack_240;
    uStack_d8 = uStack_258;
    uStack_d0 = uStack_250;
    uStack_e8 = uStack_268;
    uStack_e0 = uStack_260;
    func_0x048b0bc0(&pcStack_3d0);
    uStack_228 = uStack_e8;
    uStack_220 = uStack_e0;
    uStack_218 = uStack_d8;
    uStack_210 = uStack_d0;
    uStack_208 = uStack_c8;
    uStack_200 = uStack_c0;
    uStack_1f8 = CONCAT71(uStack_b7,cStack_b8);
    func_0x0e16ff80(auStack_3e8,&uStack_228,&UNK_01438276,7);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f4b08c0;
    if (pcStack_3d0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3d0;
      pcStack_3d0 = pcVar10;
      (**(code **)(lVar17 + 8))();
      pcVar10 = pcStack_3d0;
    }
    pcStack_3d0 = pcVar10;
    uStack_458 = CONCAT44(uStack_458._4_4_,uStack_3d8);
    plStack_450 = (long *)0x0;
    plStack_448 = (long *)((ulong)plStack_448 & 0xffffffff00000000);
    pcStack_440 = (code *)0x1;
    uStack_438 = 0;
    puStack_430 = &UNK_0e173d70;
    puStack_428 = &SUB_048b06d0;
    puStack_420 = &UNK_0e1726a0;
    puStack_418 = &UNK_0e173d80;
    puStack_410 = &UNK_0e173f80;
    uStack_408 = 0;
    uStack_400 = 0;
    plStack_3f8 = (long *)0x0;
    FUN_048b05a0(auStack_3e8._8_8_,&uStack_458);
    plVar11 = plStack_3f8;
    if (plStack_3f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3f8 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e170230(auStack_3e8);
    uStack_278 = (undefined1)uStack_1f8;
    uStack_288 = uStack_208;
    uStack_280 = uStack_200;
    uStack_298 = uStack_218;
    uStack_290 = uStack_210;
    uStack_2a8 = uStack_228;
    uStack_2a0 = uStack_220;
    func_0x048b0bc0(&pcStack_3d0);
    if ((int)uStack_280 == 4) {
      lVar17 = func_0x0e174540(&uStack_2a8);
      lVar17 = *(long *)(lVar17 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
LAB_0e133072:
      puVar16[1] = 0xffffffffffffffff;
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 0xff;
      *puVar16 = &UNK_0f4e3cf0;
      puVar16[4] = 1;
      puVar16[5] = 0;
      puVar16[6] = 0;
      *(undefined1 *)(puVar16 + 7) = 0;
      plVar11 = *(long **)(lVar17 + 8);
      *(undefined8 **)(lVar17 + 8) = puVar16;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x28))();
      }
    }
    else if ((int)uStack_280 == 1) {
      lVar17 = func_0x0e1743f0(&uStack_2a8);
      lVar17 = *(long *)(lVar17 + 0x58);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      goto LAB_0e133072;
    }
    uStack_1b8 = uStack_278;
    uStack_1c8 = uStack_288;
    uStack_1c0 = uStack_280;
    uStack_1d8 = uStack_298;
    uStack_1d0 = uStack_290;
    uStack_1e8 = uStack_2a8;
    uStack_1e0 = uStack_2a0;
    func_0x0e16ff80(auStack_3e8,&uStack_1e8,&UNK_011dad3b,6);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f0126a0;
    if (pcStack_3d0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3d0;
      pcStack_3d0 = pcVar10;
      (**(code **)(lVar17 + 8))();
      pcVar10 = pcStack_3d0;
    }
    pcStack_3d0 = pcVar10;
    uStack_458 = CONCAT44(uStack_458._4_4_,uStack_3d8);
    plStack_450 = (long *)0x0;
    plStack_448 = (long *)((ulong)plStack_448 & 0xffffffff00000000);
    pcStack_440 = (code *)0x1;
    uStack_438 = 0;
    puStack_430 = &UNK_05daeda0;
    puStack_428 = &SUB_048b06d0;
    puStack_420 = &UNK_05daea90;
    puStack_418 = &UNK_0e1746c0;
    puStack_410 = &UNK_0e174820;
    uStack_408 = 0;
    uStack_400 = 0;
    plStack_3f8 = (long *)0x0;
    FUN_048b05a0(auStack_3e8._8_8_,&uStack_458);
    plVar11 = plStack_3f8;
    if (plStack_3f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3f8 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e170230(auStack_3e8);
    uStack_78 = uStack_1b8;
    uStack_88 = uStack_1c8;
    uStack_80 = uStack_1c0;
    uStack_98 = uStack_1d8;
    uStack_90 = uStack_1d0;
    uStack_a8 = uStack_1e8;
    plStack_a0 = (long *)uStack_1e0;
    func_0x048b0bc0(&pcStack_3d0);
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
    func_0x0e1348f0(&uStack_1a8,&uStack_a8,&puStack_128);
    uStack_2e8 = uStack_178;
    uStack_2f8 = uStack_188;
    uStack_2f0 = uStack_180;
    puStack_308 = puStack_198;
    pcStack_300 = pcStack_190;
    uStack_318 = uStack_1a8;
    uStack_310 = uStack_1a0;
    func_0x0e16ff80(auStack_3e8,&uStack_318,&UNK_0129e7c3,0x15);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f0126a0;
    if (pcStack_3d0 != (code *)0x0) {
      lVar17 = *(long *)pcStack_3d0;
      pcStack_3d0 = pcVar10;
      (**(code **)(lVar17 + 8))();
      pcVar10 = pcStack_3d0;
    }
    pcStack_3d0 = pcVar10;
    uStack_458 = CONCAT44(uStack_458._4_4_,uStack_3d8);
    plStack_450 = (long *)0x0;
    plStack_448 = (long *)((ulong)plStack_448 & 0xffffffff00000000);
    pcStack_440 = (code *)0x1;
    uStack_438 = 0;
    puStack_430 = &UNK_05daeda0;
    puStack_428 = &SUB_048b06d0;
    puStack_420 = &UNK_05daea90;
    puStack_418 = &UNK_0e174a00;
    puStack_410 = &UNK_0e174b60;
    uStack_408 = 0;
    uStack_400 = 0;
    plStack_3f8 = (long *)0x0;
    FUN_048b05a0(auStack_3e8._8_8_,&uStack_458);
    plVar11 = plStack_3f8;
    if (plStack_3f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3f8 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e170230(auStack_3e8);
    puStack_428 = (undefined1 *)CONCAT71(puStack_428._1_7_,(undefined1)uStack_2e8);
    uStack_438 = uStack_2f8;
    puStack_430 = (undefined *)uStack_2f0;
    plStack_448 = puStack_308;
    pcStack_440 = pcStack_300;
    uStack_458 = uStack_318;
    plStack_450 = (long *)uStack_310;
    func_0x048b0bc0(&pcStack_3d0);
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
    func_0x0e1348f0(auStack_3e8,&uStack_458,&puStack_168);
  }
  if ((DAT_0f746a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746a10), iVar7 != 0)) {
    func_0x0e165a90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746990,0xf53dab8);
    func_0x0410844d(&DAT_0f746a10);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f746990 + 4)) * 8);
  do {
    lVar17 = *plVar11;
    if (lVar17 == -1) goto LAB_0e133550;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746990 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e133550:
    puVar8 = &DAT_0f746990;
    if (iRam000000000f7469f0 != -0x2b3da790) goto LAB_0e1335bd;
LAB_0e13357b:
    lVar17 = *(long *)(puVar8 + 0x68);
    if (lVar17 == 0) goto LAB_0e1335bd;
    bVar18 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar12 = lVar17 + 9;
    if (bVar18) {
      lVar12 = *(long *)(lVar17 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x0e174d40(&uStack_2e0,param_1,lVar12,uVar13);
    uVar13 = uStack_2e0;
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e13357b;
LAB_0e1335bd:
    func_0x0e174d40(&uStack_2e0,param_1,&UNK_01e0ccf0,0x18);
    uVar13 = uStack_2e0;
  }
  if (cStack_2b0 != '\0') {
    return;
  }
  uStack_2e0 = uVar13;
  if ((DAT_0f746a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746a10), iVar7 != 0)) {
    func_0x0e165a90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746990,0xf53dab8);
    func_0x0410844d(&DAT_0f746a10);
  }
  plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f746990 + 4)) * 8);
  do {
    lVar17 = *plVar11;
    if (lVar17 == -1) goto LAB_0e133650;
    plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746990 + 4));
  if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e133650:
    puVar8 = &DAT_0f746990;
  }
  else {
    puVar8 = (undefined *)plVar11[2];
  }
  for (pbVar9 = *(byte **)(uStack_2e0 + 0x50); pbVar9 != *(byte **)(uStack_2e0 + 0x58);
      pbVar9 = pbVar9 + 0x38) {
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e13372a;
    }
    else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e13372a:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar9 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar9 + 0x10);
      }
      auVar20[0] = -(*pbVar14 == 0x5b);
      auVar20[1] = -(pbVar14[1] == 99);
      auVar20[2] = -(pbVar14[2] == 0x65);
      auVar20[3] = -(pbVar14[3] == 0x72);
      auVar20[4] = -(pbVar14[4] == 0x65);
      auVar20[5] = -(pbVar14[5] == 0x61);
      auVar20[6] = -(pbVar14[6] == 0x6c);
      auVar20[7] = -(pbVar14[7] == 0x3a);
      auVar20[8] = -(pbVar14[8] == 100);
      auVar20[9] = -(pbVar14[9] == 0x6f);
      auVar20[10] = -(pbVar14[10] == 99);
      auVar20[0xb] = -(pbVar14[0xb] == 0x75);
      auVar20[0xc] = -(pbVar14[0xc] == 0x6d);
      auVar20[0xd] = -(pbVar14[0xd] == 0x65);
      auVar20[0xe] = -(pbVar14[0xe] == 0x6e);
      auVar20[0xf] = -(pbVar14[0xf] == 0x74);
      auVar22[0] = -(pbVar14[10] == 99);
      auVar22[1] = -(pbVar14[0xb] == 0x75);
      auVar22[2] = -(pbVar14[0xc] == 0x6d);
      auVar22[3] = -(pbVar14[0xd] == 0x65);
      auVar22[4] = -(pbVar14[0xe] == 0x6e);
      auVar22[5] = -(pbVar14[0xf] == 0x74);
      auVar22[6] = -(pbVar14[0x10] == 0x61);
      auVar22[7] = -(pbVar14[0x11] == 0x74);
      auVar22[8] = -(pbVar14[0x12] == 0x69);
      auVar22[9] = -(pbVar14[0x13] == 0x6f);
      auVar22[10] = -(pbVar14[0x14] == 0x6e);
      auVar22[0xb] = -(pbVar14[0x15] == 0x5f);
      auVar22[0xc] = -(pbVar14[0x16] == 0x74);
      auVar22[0xd] = -(pbVar14[0x17] == 0x61);
      auVar22[0xe] = -(pbVar14[0x18] == 0x67);
      auVar22[0xf] = -(pbVar14[0x19] == 0x5d);
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
  if (pbVar9 == *(byte **)(uStack_2e0 + 0x58)) {
LAB_0e133758:
    if (iStack_2b8 == 0) {
      if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e1337e0;
      lVar17 = *(long *)(puVar8 + 0x68) + 0x38;
    }
    else {
      if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)func_0x048aead0(uVar13 + 0x18);
      }
      auStack_3e8._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar8,uStack_2b4,1);
      if (auStack_3e8._0_8_ == 0) {
        auStack_3e8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_3e8);
        if (auStack_3e8._0_8_ == 0) goto LAB_0e1337e0;
      }
      if ((*(int *)(auStack_3e8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_3e8._0_8_ + 0x58) != 0)) {
        lVar17 = *(long *)(auStack_3e8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e1337e0:
        lVar17 = 0;
      }
    }
    plStack_448 = (long *)&UNK_0488e0b0;
    pcStack_440 = (code *)0x0;
    uStack_438 = CONCAT35(uStack_438._5_3_,0x48b5725f);
    uStack_458 = 0;
    auStack_3e8 = (undefined1  [16])0x0;
    pcStack_3d0 = (code *)&UNK_0488e0b0;
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = CONCAT35(uStack_3c0._5_3_,0x48b5725f);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_318 = 0x21;
    uStack_310 = 0x1a;
    *(ulong *)((long)puVar16 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar16 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar16 = _DAT_013bbacd;
    puVar16[1] = uVar3;
    *(undefined1 *)((long)puVar16 + 0x1a) = 0;
    puStack_308 = puVar16;
    lVar17 = func_0x048b5060(lVar17,&uStack_318);
    *(undefined8 *)(lVar17 + 0x20) = 0;
    if ((undefined1 *)(lVar17 + 0x20) == auStack_3e8) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar17 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar17 + 0x28);
        (**(code **)(lVar17 + 0x40))(puVar16);
        if (uStack_3c0._4_1_ != '\0') {
          if (uStack_3c0._4_1_ == '\x02') {
            (*pcStack_3d0)(5,auStack_3e8 + 8,puVar16);
          }
          else {
            uVar3 = auStack_3e8._8_8_;
            auStack_3e8._8_8_ = 0;
            *puVar16 = uVar3;
          }
        }
      }
      *(code **)(lVar17 + 0x38) = pcStack_3d0;
      *(code **)(lVar17 + 0x40) = pcStack_3c8;
      *(undefined4 *)(lVar17 + 0x48) = (undefined4)uStack_3c0;
      *(char *)(lVar17 + 0x4c) = uStack_3c0._4_1_;
      pcVar10 = pcStack_3c8;
    }
    if ((uStack_318 & 1) != 0) {
      func_0x0412a280(puStack_308,uStack_318 & 0xfffffffffffffffe);
      pcVar10 = pcStack_3c8;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_3e8 + 8);
    }
    if (pcStack_440 != (code *)0x0) {
      (*pcStack_440)(&uStack_458);
    }
  }
  else {
    iVar7 = *(int *)(pbVar9 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e133758;
  }
  uStack_188 = uStack_2c0;
  puStack_198 = (undefined8 *)uStack_2d0;
  pcStack_190 = (code *)uStack_2c8;
  uStack_1a8 = uStack_2e0;
  uStack_1a0 = uStack_2d8;
  uStack_318 = uStack_2e0;
  uStack_310 = uStack_2d8;
  puStack_308 = (undefined8 *)uStack_2d0;
  pcStack_300 = (code *)uStack_2c8;
  uStack_2f8 = uStack_2c0;
  if ((DAT_0f746978 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746978), iVar7 != 0)) {
    func_0x0e164f90();
    func_0x0410844d(&DAT_0f746978);
  }
  uVar13 = uStack_318;
  uStack_2f0 = 0x64407c5c00000001;
  if ((DAT_0f746a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746a10), iVar7 != 0)) {
    func_0x0e165a90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746990,0xf53dab8);
    func_0x0410844d(&DAT_0f746a10);
  }
  plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f746990 + 4)) * 8);
  do {
    lVar17 = *plVar11;
    if (lVar17 == -1) goto LAB_0e133a90;
    plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746990 + 4));
  if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e133a90:
    auStack_3e8._0_8_ = &DAT_0f746990;
  }
  else {
    auStack_3e8._0_8_ = plVar11[2];
  }
  auStack_3e8._8_8_ = uVar13 + 0x18;
  func_0x0ed621a0(auStack_3e8,uStack_2f0._4_4_);
  auStack_3e8._0_2_ = 1;
  auStack_3e8._8_8_ = &uStack_310;
  uStack_3d8 = uStack_2f0._4_4_;
  pcStack_3d0 = (code *)0x0;
  pcStack_3c8 = (code *)0x0;
  uStack_3c0 = 0;
  lStack_3b8 = 0;
  lStack_3b0 = 0;
  uStack_3a8 = 0x18;
  uStack_3a7 = 0x6563616c706572;
  uStack_3a0 = 0x6d;
  uStack_39f = 0x73746e65;
  uStack_39b = 0;
  lStack_390 = 0;
  lStack_388 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  lStack_370 = 0;
  lStack_368 = 0;
  uStack_360 = 0x3f600000;
  func_0x048afb10(&lStack_390,8);
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_358 = 0;
  lStack_350 = 0;
  uStack_328 = 0xff00;
  uStack_324 = uStack_324 & 0xffffff00;
  uStack_320 = uStack_320 & 0xffffff00;
  uStack_31c = 0;
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4ae5d0;
  if (pcStack_3d0 != (code *)0x0) {
    lVar17 = *(long *)pcStack_3d0;
    pcStack_3d0 = pcVar10;
    (**(code **)(lVar17 + 8))();
    pcVar10 = pcStack_3d0;
  }
  pcStack_3d0 = pcVar10;
  uStack_458 = CONCAT44(uStack_458._4_4_,uStack_3d8);
  plStack_450 = (long *)0x0;
  plStack_448 = (long *)((ulong)plStack_448 & 0xffffffff00000000);
  pcStack_440 = (code *)0x1;
  uStack_438 = 0;
  puStack_430 = &UNK_0e178bb0;
  puStack_428 = &SUB_048b06d0;
  puStack_420 = &UNK_0e177600;
  puStack_418 = &UNK_0e178c70;
  puStack_410 = &UNK_0e178ee0;
  uStack_408 = 0;
  uStack_400 = 0;
  plStack_3f8 = (long *)0x0;
  FUN_048b05a0(auStack_3e8._8_8_,&uStack_458);
  plVar11 = plStack_3f8;
  if (plStack_3f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3f8 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
      func_0x0412c2d0(plVar11);
    }
  }
  uVar3 = auStack_3e8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_458 = CONCAT44(uStack_458._4_4_,_DAT_0f550a0c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  pcVar4 = pcStack_3c8;
  pcVar10 = pcStack_3d0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_450 = plVar11 + 3;
  pcStack_3d0 = (code *)0x0;
  pcStack_3c8 = (code *)0x0;
  plVar11[3] = (long)pcVar10;
  plVar11[4] = (long)pcVar4;
  plVar11[7] = lStack_3b0;
  plVar11[5] = uStack_3c0;
  plVar11[6] = lStack_3b8;
  uStack_3c0 = 0;
  lStack_3b8 = 0;
  lStack_3b0 = 0;
  plVar11[10] = lStack_398;
  plVar11[8] = CONCAT71(uStack_3a7,uStack_3a8);
  plVar11[9] = CONCAT26(uStack_39a,CONCAT15(uStack_39b,CONCAT41(uStack_39f,uStack_3a0)));
  uStack_3a8 = 0;
  uStack_3a7 = 0;
  uStack_3a0 = 0;
  uStack_39f = 0;
  uStack_39b = 0;
  uStack_39a = 0;
  lStack_398 = 0;
  plVar11[0xb] = lStack_390;
  plVar11[0xc] = lStack_388;
  plVar11[0xd] = lStack_380;
  lStack_390 = 0;
  lStack_388 = 0;
  lStack_380 = 0;
  plVar11[0xe] = lStack_378;
  plVar11[0xf] = lStack_370;
  plVar11[0x10] = lStack_368;
  lStack_378 = 0;
  lStack_370 = 0;
  lStack_368 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_360;
  plVar11[0x12] = lStack_358;
  plVar11[0x13] = lStack_350;
  plVar11[0x14] = lStack_348;
  lStack_358 = 0;
  lStack_350 = 0;
  lStack_348 = 0;
  plVar11[0x17] = lStack_330;
  plVar11[0x15] = lStack_340;
  plVar11[0x16] = lStack_338;
  lStack_340 = 0;
  lStack_338 = 0;
  lStack_330 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_31c,CONCAT43(uStack_320,uStack_324._1_3_));
  plVar11[0x18] = CONCAT44(uStack_324,CONCAT22(uStack_326,uStack_328));
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  plStack_448 = plVar11;
  func_0x048afd20(uVar3,&uStack_458);
  plVar11 = plStack_448;
  if (plStack_448 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_448 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_448 + 0x10))(plStack_448);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      func_0x0412c2d0(plVar11);
    }
  }
  uVar13 = uStack_318;
  lVar17 = *(long *)(uVar3 + 0x10);
  iVar7 = *(int *)(uVar3 + 0x1c);
  if (iVar7 == 2) {
    piVar15 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != *(int *)(uVar3 + 0x18)) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != *(long *)(uVar3 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
    }
LAB_0e133f5a:
    piVar15[4] = piVar15[4] | auStack_3e8._0_4_ << 0x10;
  }
  else {
    if (iVar7 == 1) {
      piVar15 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != *(int *)(uVar3 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      goto LAB_0e133f5a;
    }
    if (iVar7 == 0) {
      *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | auStack_3e8._0_4_ << 0x10;
    }
  }
  iVar7 = (int)uStack_2f0;
  uVar5 = uStack_2f0._4_4_;
  func_0x048b0bc0(&pcStack_3d0);
  if (iVar7 != 4) {
    if (iVar7 != 1) {
      return;
    }
    if ((DAT_0f746a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746a10), iVar7 != 0)) {
      func_0x0e165a90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f746990,0xf53dab8);
      func_0x0410844d(&DAT_0f746a10);
    }
    plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f746990 + 4)) * 8);
    do {
      lVar17 = *plVar11;
      if (lVar17 == -1) goto LAB_0e133ff8;
      plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746990 + 4)
            );
    if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e133ff8:
      puVar8 = &DAT_0f746990;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    lVar17 = func_0x048b0c90(uVar13 + 0x18,puVar8,uVar5,1);
    if (lVar17 == 0) {
      auStack_3e8 = ZEXT816(0);
      FUN_048b0d20(auStack_3e8);
      lVar17 = auStack_3e8._0_8_;
    }
    lVar17 = *(long *)(lVar17 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    goto LAB_0e1341be;
  }
  if ((DAT_0f746a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f746a10), iVar7 != 0)) {
    func_0x0e165a90();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f746990,0xf53dab8);
    func_0x0410844d(&DAT_0f746a10);
  }
  plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f746990 + 4)) * 8);
  do {
    lVar17 = *plVar11;
    if (lVar17 == -1) goto LAB_0e134078;
    plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f746990 + 4));
  if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e134078:
    puVar8 = &DAT_0f746990;
  }
  else {
    puVar8 = (undefined *)plVar11[2];
  }
  lVar17 = func_0x048b1040(uVar13 + 0x18,puVar8,uVar5,1);
  if (lVar17 == 0) {
    auStack_3e8 = ZEXT816(0);
    func_0x048b10d0(auStack_3e8);
    lVar12 = *(long *)(auStack_3e8._0_8_ + 0x38);
    lVar17 = auStack_3e8._0_8_;
    if (lVar12 == 0) goto LAB_0e13414a;
LAB_0e134166:
    do {
      lVar17 = lVar12;
      lVar12 = *(long *)(lVar17 + 0x38);
      if (*(long *)(lVar17 + 0x38) == 0) {
        auStack_3e8 = ZEXT816(0);
        func_0x048b10d0(auStack_3e8);
        lVar12 = auStack_3e8._0_8_;
      }
    } while (lVar12 != 0);
  }
  else {
    lVar12 = *(long *)(lVar17 + 0x38);
    if (*(long *)(lVar17 + 0x38) != 0) goto LAB_0e134166;
LAB_0e13414a:
    auStack_3e8 = ZEXT816(0);
    func_0x048b10d0(auStack_3e8);
    lVar12 = auStack_3e8._0_8_;
    if (auStack_3e8._0_8_ != 0) goto LAB_0e134166;
  }
  lVar17 = *(long *)(lVar17 + 0x48);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
LAB_0e1341be:
  puVar16[1] = 0xffffffffffffffff;
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 0xff;
  *puVar16 = &UNK_0f4adc78;
  plVar11 = *(long **)(lVar17 + 8);
  *(undefined8 **)(lVar17 + 8) = puVar16;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
