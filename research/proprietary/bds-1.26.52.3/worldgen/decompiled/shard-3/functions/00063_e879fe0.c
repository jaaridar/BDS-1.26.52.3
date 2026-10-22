/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe979fe0 (ELF vaddr 0xe879fe0)
 * Label: callee-of:0xe706340
 * Body:  [[0e979fe0, 0e97a237] [0e97a240, 0e97a281] [0e97a290, 0e97af57] [0e97af60, 0e97afa1] [0e97afb0, 0e97b98e] [0e97b990, 0e97b9d2] [0e97b9e0, 0e97c191] [0e97c1a0, 0e97c4ee]]
 * Ghidra: FUN_0e979fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e979fe0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  byte *pbVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined4 uStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined1 auStack_3a8 [16];
  undefined *puStack_398;
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [16];
  long lStack_370;
  undefined1 auStack_368 [16];
  long lStack_358;
  undefined1 auStack_350 [16];
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined4 uStack_320;
  undefined1 auStack_318 [16];
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined2 uStack_2e8;
  undefined2 uStack_2e6;
  uint uStack_2e4;
  uint uStack_2e0;
  undefined1 uStack_2dc;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int iStack_278;
  undefined4 uStack_274;
  char cStack_270;
  undefined7 uStack_26f;
  undefined1 auStack_268 [16];
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long lStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined7 uStack_77;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  auStack_3a8._8_8_ = 0x26;
  auStack_3a8._0_8_ = &DAT_01e367f0;
  puStack_398 = &UNK_014436e1;
  auStack_390._0_8_ = 0x1c;
  func_0x0470d9a0(&uStack_410,&UNK_014c494c,0x10,0xdd,auStack_3a8);
  plVar12 = plStack_400;
  plVar11 = plStack_408;
  if ((uStack_410 & 1) == 0) {
    plVar12 = (long *)((long)&uStack_410 + 1);
    plVar11 = (long *)(uStack_410 >> 1 & 0x7f);
  }
  if ((DAT_0f7678a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7678a8), iVar6 != 0)) {
    func_0x0e9f0ff0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f767828,0xf53dab8);
    func_0x0410844d(&DAT_0f7678a8);
  }
  lStack_130 = param_1 + 0x18;
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f767828 + 4)) * 8);
  do {
    lVar18 = *plVar14;
    if (lVar18 == -1) goto LAB_0e97a0d1;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f767828 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e97a0d1:
    puVar8 = &DAT_0f767828;
    iVar6 = iRam000000000f767888;
  }
  else {
    puVar8 = (undefined *)plVar14[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar18 = *(long *)(puVar8 + 0x68), lVar18 != 0)) {
    bVar20 = (*(byte *)(lVar18 + 8) & 1) != 0;
    plVar12 = (long *)(lVar18 + 9);
    if (bVar20) {
      plVar12 = (long *)*(undefined **)(lVar18 + 0x18);
    }
    plVar11 = (long *)(ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar20) {
      plVar11 = (long *)*(ulong *)(lVar18 + 0x10);
    }
  }
  FUN_0e9f15b0(&uStack_2a0,param_1,plVar12,plVar11);
  if ((uStack_410 & 1) != 0) {
    func_0x0412a280(plStack_400,uStack_410 & 0xfffffffffffffffe);
  }
  uVar13 = uStack_2a0;
  if (cStack_270 == '\0') {
    if ((DAT_0f7678a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7678a8), iVar6 != 0)) {
      func_0x0e9f0ff0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f767828,0xf53dab8);
      func_0x0410844d(&DAT_0f7678a8);
    }
    plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f767828 + 4)) * 8);
    do {
      lVar18 = *plVar11;
      if (lVar18 == -1) goto LAB_0e97a1c0;
      plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar18 * 0x18);
    } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f767828 + 4)
            );
    if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e97a1c0:
      puVar8 = &DAT_0f767828;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    for (pbVar9 = *(byte **)(uStack_2a0 + 0x50); pbVar9 != *(byte **)(uStack_2a0 + 0x58);
        pbVar9 = pbVar9 + 0x38) {
      bVar1 = *pbVar9;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e97a29a;
      }
      else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e97a29a:
        if ((bVar1 & 1) == 0) {
          pbVar15 = pbVar9 + 1;
        }
        else {
          pbVar15 = *(byte **)(pbVar9 + 0x10);
        }
        auVar21[0] = -(*pbVar15 == 0x5b);
        auVar21[1] = -(pbVar15[1] == 99);
        auVar21[2] = -(pbVar15[2] == 0x65);
        auVar21[3] = -(pbVar15[3] == 0x72);
        auVar21[4] = -(pbVar15[4] == 0x65);
        auVar21[5] = -(pbVar15[5] == 0x61);
        auVar21[6] = -(pbVar15[6] == 0x6c);
        auVar21[7] = -(pbVar15[7] == 0x3a);
        auVar21[8] = -(pbVar15[8] == 100);
        auVar21[9] = -(pbVar15[9] == 0x6f);
        auVar21[10] = -(pbVar15[10] == 99);
        auVar21[0xb] = -(pbVar15[0xb] == 0x75);
        auVar21[0xc] = -(pbVar15[0xc] == 0x6d);
        auVar21[0xd] = -(pbVar15[0xd] == 0x65);
        auVar21[0xe] = -(pbVar15[0xe] == 0x6e);
        auVar21[0xf] = -(pbVar15[0xf] == 0x74);
        auVar24[0] = -(pbVar15[10] == 99);
        auVar24[1] = -(pbVar15[0xb] == 0x75);
        auVar24[2] = -(pbVar15[0xc] == 0x6d);
        auVar24[3] = -(pbVar15[0xd] == 0x65);
        auVar24[4] = -(pbVar15[0xe] == 0x6e);
        auVar24[5] = -(pbVar15[0xf] == 0x74);
        auVar24[6] = -(pbVar15[0x10] == 0x61);
        auVar24[7] = -(pbVar15[0x11] == 0x74);
        auVar24[8] = -(pbVar15[0x12] == 0x69);
        auVar24[9] = -(pbVar15[0x13] == 0x6f);
        auVar24[10] = -(pbVar15[0x14] == 0x6e);
        auVar24[0xb] = -(pbVar15[0x15] == 0x5f);
        auVar24[0xc] = -(pbVar15[0x16] == 0x74);
        auVar24[0xd] = -(pbVar15[0x17] == 0x61);
        auVar24[0xe] = -(pbVar15[0x18] == 0x67);
        auVar24[0xf] = -(pbVar15[0x19] == 0x5d);
        auVar24 = auVar24 & auVar21;
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar9 == *(byte **)(uStack_2a0 + 0x58)) {
LAB_0e97a2c8:
      uVar5 = uStack_274;
      if (iStack_278 == 0) {
        if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e97a350;
        lVar18 = *(long *)(puVar8 + 0x68) + 0x38;
      }
      else {
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)func_0x048aead0(uVar13 + 0x18);
        }
        auStack_3a8._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar8,uVar5,1);
        if (auStack_3a8._0_8_ == 0) {
          auStack_3a8 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_3a8);
          if (auStack_3a8._0_8_ == 0) goto LAB_0e97a350;
        }
        if ((*(int *)(auStack_3a8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_3a8._0_8_ + 0x58) != 0)) {
          lVar18 = *(long *)(auStack_3a8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e97a350:
          lVar18 = 0;
        }
      }
      plStack_400 = (long *)&UNK_0488e0b0;
      pcStack_3f8 = (code *)0x0;
      uStack_3f0 = CONCAT35(uStack_3f0._5_3_,0x48b5725f);
      uStack_410 = 0;
      auStack_3a8 = (undefined1  [16])0x0;
      auStack_390 = ZEXT816(0x488e0b0);
      auStack_380._0_5_ = 0x48b5725f;
      puStack_2c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_2c8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_2d8 = 0x21;
      uStack_2d0 = 0x1a;
      *(ulong *)((long)puStack_2c8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_2c8 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_2c8 = _DAT_013bbacd;
      puStack_2c8[1] = uVar2;
      *(undefined1 *)((long)puStack_2c8 + 0x1a) = 0;
      lVar18 = func_0x048b5060(lVar18,&uStack_2d8);
      *(undefined8 *)(lVar18 + 0x20) = 0;
      if ((undefined1 *)(lVar18 + 0x20) == auStack_3a8) {
        pcVar10 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar18 + 0x40) != (code *)0x0) {
          puVar19 = (undefined8 *)(lVar18 + 0x28);
          (**(code **)(lVar18 + 0x40))(puVar19);
          if (auStack_380[4] != '\0') {
            if (auStack_380[4] == '\x02') {
              (*(code *)auStack_390._0_8_)(5,auStack_3a8 + 8,puVar19);
            }
            else {
              uVar2 = auStack_3a8._8_8_;
              auStack_3a8._8_8_ = 0;
              *puVar19 = uVar2;
            }
          }
        }
        *(undefined8 *)(lVar18 + 0x38) = auStack_390._0_8_;
        *(undefined8 *)(lVar18 + 0x40) = auStack_390._8_8_;
        *(undefined4 *)(lVar18 + 0x48) = auStack_380._0_4_;
        *(char *)(lVar18 + 0x4c) = auStack_380[4];
        pcVar10 = (code *)auStack_390._8_8_;
      }
      if ((uStack_2d8 & 1) != 0) {
        func_0x0412a280(puStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
        pcVar10 = (code *)auStack_390._8_8_;
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(auStack_3a8 + 8);
      }
      if (pcStack_3f8 != (code *)0x0) {
        (*pcStack_3f8)(&uStack_410);
      }
    }
    else {
      iVar6 = *(int *)(pbVar9 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar6 == _DAT_0f550ac4) goto LAB_0e97a2c8;
    }
    cStack_b8 = cStack_270;
    uStack_c0 = CONCAT44(uStack_274,iStack_278);
    uStack_48 = uStack_280;
    puStack_58 = puStack_290;
    uStack_50 = uStack_288;
    uStack_68 = uStack_2a0;
    uStack_60 = uStack_298;
    uStack_e8 = uStack_2a0;
    uStack_e0 = uStack_298;
    puStack_d8 = puStack_290;
    uStack_d0 = uStack_288;
    uStack_c8 = uStack_280;
    func_0x0e9f2120(auStack_3a8,&uStack_e8,&UNK_011ed174,0xc);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4cefc0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e8bab80;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e8ba840;
    puStack_3d0 = &UNK_0e9f26d0;
    puStack_3c8 = &UNK_0e9f2820;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f23d0(auStack_3a8);
    cStack_78 = cStack_b8;
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    puStack_98 = puStack_d8;
    uStack_90 = uStack_d0;
    uStack_a8 = uStack_e8;
    uStack_a0 = uStack_e0;
    func_0x048b0bc0(auStack_390);
    uStack_128 = uStack_a8;
    uStack_120 = uStack_a0;
    puStack_118 = puStack_98;
    uStack_110 = uStack_90;
    uStack_108 = uStack_88;
    uStack_100 = uStack_80;
    uStack_f8 = CONCAT71(uStack_77,cStack_78);
    func_0x0e9f2120(auStack_3a8,&uStack_128,&UNK_0119d142,0xc);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4cefc0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e8bab80;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e8ba840;
    puStack_3d0 = &UNK_0e9f29f0;
    puStack_3c8 = &UNK_0e9f2b40;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f23d0(auStack_3a8);
    uStack_178 = CONCAT71(uStack_178._1_7_,(undefined1)uStack_f8);
    uStack_188 = uStack_108;
    uStack_180 = uStack_100;
    puStack_198 = puStack_118;
    uStack_190 = uStack_110;
    uStack_1a8 = uStack_128;
    uStack_1a0 = uStack_120;
    func_0x048b0bc0(auStack_390);
    uStack_1e8 = uStack_1a8;
    uStack_1e0 = uStack_1a0;
    puStack_1d8 = puStack_198;
    uStack_1d0 = uStack_190;
    uStack_1c8 = uStack_188;
    uStack_1c0 = uStack_180;
    uStack_1b8 = uStack_178;
    func_0x0e9f2120(auStack_3a8,&uStack_1e8,&UNK_01376c53,0x12);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4cefc0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e8bab80;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e8ba840;
    puStack_3d0 = &UNK_0e9f2d20;
    puStack_3c8 = &UNK_0e9f2e70;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f23d0(auStack_3a8);
    uStack_138 = (undefined1)uStack_1b8;
    uStack_148 = uStack_1c8;
    uStack_140 = uStack_1c0;
    puStack_158 = puStack_1d8;
    uStack_150 = uStack_1d0;
    uStack_168 = uStack_1e8;
    uStack_160 = uStack_1e0;
    func_0x048b0bc0(auStack_390);
    auStack_268._8_8_ = uStack_160;
    auStack_268._0_8_ = uStack_168;
    puStack_258 = puStack_158;
    uStack_250 = uStack_150;
    uStack_248 = uStack_148;
    uStack_240 = uStack_140;
    uStack_238 = CONCAT71(uStack_137,uStack_138);
    func_0x0e9f2120(auStack_3a8,auStack_268,&UNK_0145f54d,0x13);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4cefc0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e8bab80;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e8ba840;
    puStack_3d0 = &UNK_0e9f3050;
    puStack_3c8 = &UNK_0e9f31a0;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f23d0(auStack_3a8);
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,(undefined1)uStack_238);
    uStack_208 = uStack_248;
    uStack_200 = uStack_240;
    puStack_218 = puStack_258;
    uStack_210 = uStack_250;
    uStack_228 = auStack_268._0_8_;
    uStack_220 = auStack_268._8_8_;
    func_0x048b0bc0(auStack_390);
    uStack_2d8 = uStack_228;
    uStack_2d0 = uStack_220;
    puStack_2c8 = puStack_218;
    uStack_2c0 = uStack_210;
    uStack_2b8 = uStack_208;
    uStack_2b0 = uStack_200;
    uStack_2a8 = uStack_1f8;
    func_0x0e9f2120(auStack_3a8,&uStack_2d8,&UNK_01412f53,0xc);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4cefc0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e8bab80;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e8ba840;
    puStack_3d0 = &UNK_0e9f3380;
    puStack_3c8 = &UNK_0e9f34d0;
    uStack_3c0 = 0;
    auStack_3b8 = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f23d0(auStack_3a8);
    func_0x048b0bc0(auStack_390);
  }
  auStack_3a8._8_8_ = 0x26;
  auStack_3a8._0_8_ = &DAT_01e367f0;
  puStack_398 = &UNK_0129ff30;
  auStack_390._0_8_ = 0x12;
  func_0x0470d9a0(&uStack_410,&UNK_014c494c,0x10,0xdd,auStack_3a8);
  plVar12 = (long *)(uStack_410 >> 1 & 0x7f);
  plVar11 = (long *)((long)&uStack_410 + 1);
  if ((uStack_410 & 1) != 0) {
    plVar12 = plStack_408;
    plVar11 = plStack_400;
  }
  if ((DAT_0f767960 == '\0') && (iVar6 = func_0x04108328(&DAT_0f767960), iVar6 != 0)) {
    func_0x0e9f3770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7678e0,0xf53dab8);
    func_0x0410844d(&DAT_0f767960);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7678e0 + 4)) * 8);
  do {
    lVar18 = *plVar14;
    if (lVar18 == -1) goto LAB_0e97add0;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f7678e0 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e97add0:
    puVar8 = &DAT_0f7678e0;
    if (iRam000000000f767940 != -0x2b3da790) goto LAB_0e97ae37;
LAB_0e97adfb:
    lVar18 = *(long *)(puVar8 + 0x68);
    if (lVar18 == 0) goto LAB_0e97ae37;
    bVar20 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar17 = lVar18 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar18 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar20) {
      uVar13 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x0e9f3fc0(&uStack_2a0,param_1,lVar17,uVar13);
  }
  else {
    puVar8 = (undefined *)plVar14[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0e97adfb;
LAB_0e97ae37:
    func_0x0e9f3fc0(&uStack_2a0,param_1,plVar11,plVar12);
  }
  if ((uStack_410 & 1) != 0) {
    func_0x0412a280(plStack_400,uStack_410 & 0xfffffffffffffffe);
  }
  uVar13 = uStack_2a0;
  if (cStack_270 == '\0') {
    if ((DAT_0f767960 == '\0') && (iVar6 = func_0x04108328(&DAT_0f767960), iVar6 != 0)) {
      func_0x0e9f3770();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7678e0,0xf53dab8);
      func_0x0410844d(&DAT_0f767960);
    }
    plVar11 = (long *)(*(long *)(uVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7678e0 + 4)) * 8);
    do {
      lVar18 = *plVar11;
      if (lVar18 == -1) goto LAB_0e97aee0;
      plVar11 = (long *)(*(long *)(uVar13 + 0x30) + lVar18 * 0x18);
    } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f7678e0 + 4)
            );
    if (plVar11 == *(long **)(uVar13 + 0x38)) {
LAB_0e97aee0:
      puVar8 = &DAT_0f7678e0;
    }
    else {
      puVar8 = (undefined *)plVar11[2];
    }
    for (pbVar9 = *(byte **)(uStack_2a0 + 0x50); pbVar9 != *(byte **)(uStack_2a0 + 0x58);
        pbVar9 = pbVar9 + 0x38) {
      bVar1 = *pbVar9;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e97afba;
      }
      else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e97afba:
        if ((bVar1 & 1) == 0) {
          pbVar15 = pbVar9 + 1;
        }
        else {
          pbVar15 = *(byte **)(pbVar9 + 0x10);
        }
        auVar22[0] = -(*pbVar15 == 0x5b);
        auVar22[1] = -(pbVar15[1] == 99);
        auVar22[2] = -(pbVar15[2] == 0x65);
        auVar22[3] = -(pbVar15[3] == 0x72);
        auVar22[4] = -(pbVar15[4] == 0x65);
        auVar22[5] = -(pbVar15[5] == 0x61);
        auVar22[6] = -(pbVar15[6] == 0x6c);
        auVar22[7] = -(pbVar15[7] == 0x3a);
        auVar22[8] = -(pbVar15[8] == 100);
        auVar22[9] = -(pbVar15[9] == 0x6f);
        auVar22[10] = -(pbVar15[10] == 99);
        auVar22[0xb] = -(pbVar15[0xb] == 0x75);
        auVar22[0xc] = -(pbVar15[0xc] == 0x6d);
        auVar22[0xd] = -(pbVar15[0xd] == 0x65);
        auVar22[0xe] = -(pbVar15[0xe] == 0x6e);
        auVar22[0xf] = -(pbVar15[0xf] == 0x74);
        auVar25[0] = -(pbVar15[10] == 99);
        auVar25[1] = -(pbVar15[0xb] == 0x75);
        auVar25[2] = -(pbVar15[0xc] == 0x6d);
        auVar25[3] = -(pbVar15[0xd] == 0x65);
        auVar25[4] = -(pbVar15[0xe] == 0x6e);
        auVar25[5] = -(pbVar15[0xf] == 0x74);
        auVar25[6] = -(pbVar15[0x10] == 0x61);
        auVar25[7] = -(pbVar15[0x11] == 0x74);
        auVar25[8] = -(pbVar15[0x12] == 0x69);
        auVar25[9] = -(pbVar15[0x13] == 0x6f);
        auVar25[10] = -(pbVar15[0x14] == 0x6e);
        auVar25[0xb] = -(pbVar15[0x15] == 0x5f);
        auVar25[0xc] = -(pbVar15[0x16] == 0x74);
        auVar25[0xd] = -(pbVar15[0x17] == 0x61);
        auVar25[0xe] = -(pbVar15[0x18] == 0x67);
        auVar25[0xf] = -(pbVar15[0x19] == 0x5d);
        auVar25 = auVar25 & auVar22;
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar9 == *(byte **)(uStack_2a0 + 0x58)) {
LAB_0e97afe8:
      uVar5 = uStack_274;
      if (iStack_278 == 0) {
        if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e97b070;
        lVar18 = *(long *)(puVar8 + 0x68) + 0x38;
      }
      else {
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)func_0x048aead0(uVar13 + 0x18);
        }
        auStack_3a8._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar8,uVar5,1);
        if (auStack_3a8._0_8_ == 0) {
          auStack_3a8 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_3a8);
          if (auStack_3a8._0_8_ == 0) goto LAB_0e97b070;
        }
        if ((*(int *)(auStack_3a8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_3a8._0_8_ + 0x58) != 0)) {
          lVar18 = *(long *)(auStack_3a8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e97b070:
          lVar18 = 0;
        }
      }
      plStack_400 = (long *)&UNK_0488e0b0;
      pcStack_3f8 = (code *)0x0;
      uStack_3f0 = CONCAT35(uStack_3f0._5_3_,0x48b5725f);
      uStack_410 = 0;
      auStack_3a8 = (undefined1  [16])0x0;
      auStack_390 = ZEXT816(0x488e0b0);
      auStack_380._0_5_ = 0x48b5725f;
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar19 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_2d8 = 0x21;
      uStack_2d0 = 0x1a;
      *(ulong *)((long)puVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar19 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar19 = _DAT_013bbacd;
      puVar19[1] = uVar2;
      *(undefined1 *)((long)puVar19 + 0x1a) = 0;
      puStack_2c8 = puVar19;
      lVar18 = func_0x048b5060(lVar18,&uStack_2d8);
      *(undefined8 *)(lVar18 + 0x20) = 0;
      if ((undefined1 *)(lVar18 + 0x20) == auStack_3a8) {
        pcVar10 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar18 + 0x40) != (code *)0x0) {
          puVar19 = (undefined8 *)(lVar18 + 0x28);
          (**(code **)(lVar18 + 0x40))(puVar19);
          if (auStack_380[4] != '\0') {
            if (auStack_380[4] == '\x02') {
              (*(code *)auStack_390._0_8_)(5,auStack_3a8 + 8,puVar19);
            }
            else {
              uVar2 = auStack_3a8._8_8_;
              auStack_3a8._8_8_ = 0;
              *puVar19 = uVar2;
            }
          }
        }
        *(undefined8 *)(lVar18 + 0x38) = auStack_390._0_8_;
        *(undefined8 *)(lVar18 + 0x40) = auStack_390._8_8_;
        *(undefined4 *)(lVar18 + 0x48) = auStack_380._0_4_;
        *(char *)(lVar18 + 0x4c) = auStack_380[4];
        pcVar10 = (code *)auStack_390._8_8_;
      }
      if ((uStack_2d8 & 1) != 0) {
        func_0x0412a280(puStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
        pcVar10 = (code *)auStack_390._8_8_;
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(auStack_3a8 + 8);
      }
      if (pcStack_3f8 != (code *)0x0) {
        (*pcStack_3f8)(&uStack_410);
      }
    }
    else {
      iVar6 = *(int *)(pbVar9 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar6 == _DAT_0f550ac4) goto LAB_0e97afe8;
    }
    uStack_178 = CONCAT71(uStack_26f,cStack_270);
    uStack_180 = CONCAT44(uStack_274,iStack_278);
    uStack_108 = uStack_280;
    puStack_118 = puStack_290;
    uStack_110 = uStack_288;
    uStack_128 = uStack_2a0;
    uStack_120 = uStack_298;
    uStack_1a8 = uStack_2a0;
    uStack_1a0 = uStack_298;
    puStack_198 = puStack_290;
    uStack_190 = uStack_288;
    uStack_188 = uStack_280;
    uStack_100 = uStack_180;
    uStack_f8 = uStack_178;
    func_0x0e9f4b30(auStack_3a8,&uStack_1a8,&UNK_01e36817,9,1);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4d4398;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e9f5330;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e9f0f30;
    puStack_3d0 = &UNK_0e9f53f0;
    puStack_3c8 = &UNK_0e9f5570;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f4df0(auStack_3a8);
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,(undefined1)uStack_178);
    uStack_1c8 = uStack_188;
    uStack_1c0 = uStack_180;
    puStack_1d8 = puStack_198;
    uStack_1d0 = uStack_190;
    uStack_1e8 = uStack_1a8;
    uStack_1e0 = uStack_1a0;
    func_0x048b0bc0(auStack_390);
    func_0x0e9f4b30(auStack_3a8,&uStack_1e8,&UNK_01e36821,0xb,0);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4b81f0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e9c5550;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e328450;
    puStack_3d0 = &UNK_0e9f59e0;
    puStack_3c8 = &UNK_0e9f5b50;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f4df0(auStack_3a8);
    uStack_138 = (undefined1)uStack_1b8;
    uStack_148 = uStack_1c8;
    uStack_140 = uStack_1c0;
    puStack_158 = puStack_1d8;
    uStack_150 = uStack_1d0;
    uStack_168 = uStack_1e8;
    uStack_160 = uStack_1e0;
    func_0x048b0bc0(auStack_390);
    auStack_268._8_8_ = uStack_160;
    auStack_268._0_8_ = uStack_168;
    puStack_258 = puStack_158;
    uStack_250 = uStack_150;
    uStack_248 = uStack_148;
    uStack_240 = uStack_140;
    uStack_238 = CONCAT71(uStack_137,uStack_138);
    func_0x0e9f4b30(auStack_3a8,auStack_268,&UNK_01e3682d,0xc,0);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4d4410;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_0e9f9440;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0e9f9070;
    puStack_3d0 = &UNK_0e9f9500;
    puStack_3c8 = &UNK_0e9f96e0;
    uStack_3c0 = 0;
    auStack_3b8 = ZEXT816(0);
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f4df0(auStack_3a8);
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,(undefined1)uStack_238);
    uStack_208 = uStack_248;
    uStack_200 = uStack_240;
    puStack_218 = puStack_258;
    uStack_210 = uStack_250;
    uStack_228 = auStack_268._0_8_;
    uStack_220 = auStack_268._8_8_;
    func_0x048b0bc0(auStack_390);
    uStack_2d8 = uStack_228;
    uStack_2d0 = uStack_220;
    puStack_2c8 = puStack_218;
    uStack_2c0 = uStack_210;
    uStack_2b8 = uStack_208;
    uStack_2b0 = uStack_200;
    uStack_2a8 = uStack_1f8;
    func_0x0e9f4b30(auStack_3a8,&uStack_2d8,&UNK_01e36840,0x15,0);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f0122d0;
    uVar2 = auStack_390._0_8_;
    auStack_390._0_8_ = puVar19;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
    plStack_408 = (long *)0x0;
    plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
    pcStack_3f8 = (code *)0x1;
    uStack_3f0 = 0;
    puStack_3e8 = &UNK_05de9430;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &SUB_05de9110;
    puStack_3d0 = &UNK_0e9f9b60;
    puStack_3c8 = &UNK_0e9f9cd0;
    uStack_3c0 = 0;
    auStack_3b8 = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
    uVar2 = auStack_3b8._8_8_;
    if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_3b8._8_8_ + 8);
      lVar18 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e9f4df0(auStack_3a8);
    func_0x048b0bc0(auStack_390);
  }
  lVar18 = func_0x0e8749b0(lStack_130);
  if ((*(int *)(lVar18 + 0x60) == -0x2b3da790) && (lVar18 = *(long *)(lVar18 + 0x68), lVar18 != 0))
  {
    bVar20 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar17 = lVar18 + 9;
    if (bVar20) {
      lVar17 = *(long *)(lVar18 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar20) {
      uVar13 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x0e9f9eb0(&uStack_2a0,param_1,lVar17,uVar13);
  }
  else {
    func_0x0e9f9eb0(&uStack_2a0,param_1,&DAT_01e367f0,0x26);
  }
  if (cStack_270 != '\0') {
    return;
  }
  lVar17 = uStack_2a0 + 0x18;
  lVar18 = func_0x0e8749b0(lVar17);
  for (pbVar9 = *(byte **)(uStack_2a0 + 0x50); pbVar9 != *(byte **)(uStack_2a0 + 0x58);
      pbVar9 = pbVar9 + 0x38) {
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e97b9ea;
    }
    else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e97b9ea:
      if ((bVar1 & 1) == 0) {
        pbVar15 = pbVar9 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar9 + 0x10);
      }
      auVar23[0] = -(*pbVar15 == 0x5b);
      auVar23[1] = -(pbVar15[1] == 99);
      auVar23[2] = -(pbVar15[2] == 0x65);
      auVar23[3] = -(pbVar15[3] == 0x72);
      auVar23[4] = -(pbVar15[4] == 0x65);
      auVar23[5] = -(pbVar15[5] == 0x61);
      auVar23[6] = -(pbVar15[6] == 0x6c);
      auVar23[7] = -(pbVar15[7] == 0x3a);
      auVar23[8] = -(pbVar15[8] == 100);
      auVar23[9] = -(pbVar15[9] == 0x6f);
      auVar23[10] = -(pbVar15[10] == 99);
      auVar23[0xb] = -(pbVar15[0xb] == 0x75);
      auVar23[0xc] = -(pbVar15[0xc] == 0x6d);
      auVar23[0xd] = -(pbVar15[0xd] == 0x65);
      auVar23[0xe] = -(pbVar15[0xe] == 0x6e);
      auVar23[0xf] = -(pbVar15[0xf] == 0x74);
      auVar26[0] = -(pbVar15[10] == 99);
      auVar26[1] = -(pbVar15[0xb] == 0x75);
      auVar26[2] = -(pbVar15[0xc] == 0x6d);
      auVar26[3] = -(pbVar15[0xd] == 0x65);
      auVar26[4] = -(pbVar15[0xe] == 0x6e);
      auVar26[5] = -(pbVar15[0xf] == 0x74);
      auVar26[6] = -(pbVar15[0x10] == 0x61);
      auVar26[7] = -(pbVar15[0x11] == 0x74);
      auVar26[8] = -(pbVar15[0x12] == 0x69);
      auVar26[9] = -(pbVar15[0x13] == 0x6f);
      auVar26[10] = -(pbVar15[0x14] == 0x6e);
      auVar26[0xb] = -(pbVar15[0x15] == 0x5f);
      auVar26[0xc] = -(pbVar15[0x16] == 0x74);
      auVar26[0xd] = -(pbVar15[0x17] == 0x61);
      auVar26[0xe] = -(pbVar15[0x18] == 0x67);
      auVar26[0xf] = -(pbVar15[0x19] == 0x5d);
      auVar26 = auVar26 & auVar23;
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
  if (pbVar9 == *(byte **)(uStack_2a0 + 0x58)) {
LAB_0e97ba19:
    if (iStack_278 == 0) {
      if ((*(int *)(lVar18 + 0x60) != -0x2b3da790) || (*(long *)(lVar18 + 0x68) == 0))
      goto LAB_0e97ba8d;
      lVar18 = *(long *)(lVar18 + 0x68) + 0x38;
    }
    else {
      auStack_3a8._0_8_ = func_0x048b0c90(lVar17,lVar18,uStack_274,1);
      if (auStack_3a8._0_8_ == 0) {
        auStack_3a8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_3a8);
        if (auStack_3a8._0_8_ == 0) goto LAB_0e97ba8d;
      }
      if ((*(int *)(auStack_3a8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_3a8._0_8_ + 0x58) != 0)) {
        lVar18 = *(long *)(auStack_3a8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e97ba8d:
        lVar18 = 0;
      }
    }
    plStack_400 = (long *)&UNK_0488e0b0;
    pcStack_3f8 = (code *)0x0;
    uStack_3f0 = CONCAT35(uStack_3f0._5_3_,0x48b5725f);
    uStack_410 = 0;
    auStack_3a8 = (undefined1  [16])0x0;
    auStack_390 = ZEXT816(0x488e0b0);
    auStack_380._0_5_ = 0x48b5725f;
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar19 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_2d8 = 0x21;
    uStack_2d0 = 0x1a;
    *(ulong *)((long)puVar19 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar19 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar19 = _DAT_013bbacd;
    puVar19[1] = uVar2;
    *(undefined1 *)((long)puVar19 + 0x1a) = 0;
    puStack_2c8 = puVar19;
    lVar18 = func_0x048b5060(lVar18,&uStack_2d8);
    *(undefined8 *)(lVar18 + 0x20) = 0;
    if ((undefined1 *)(lVar18 + 0x20) == auStack_3a8) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar18 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar18 + 0x28);
        (**(code **)(lVar18 + 0x40))(puVar19);
        if (auStack_380[4] != '\0') {
          if (auStack_380[4] == '\x02') {
            (*(code *)auStack_390._0_8_)(5,auStack_3a8 + 8,puVar19);
          }
          else {
            uVar2 = auStack_3a8._8_8_;
            auStack_3a8._8_8_ = 0;
            *puVar19 = uVar2;
          }
        }
      }
      *(undefined8 *)(lVar18 + 0x38) = auStack_390._0_8_;
      *(undefined8 *)(lVar18 + 0x40) = auStack_390._8_8_;
      *(undefined4 *)(lVar18 + 0x48) = auStack_380._0_4_;
      *(char *)(lVar18 + 0x4c) = auStack_380[4];
      pcVar10 = (code *)auStack_390._8_8_;
    }
    if ((uStack_2d8 & 1) != 0) {
      func_0x0412a280(puStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
      pcVar10 = (code *)auStack_390._8_8_;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_3a8 + 8);
    }
    if (pcStack_3f8 != (code *)0x0) {
      (*pcStack_3f8)(&uStack_410);
    }
  }
  else {
    iVar6 = *(int *)(pbVar9 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0e97ba19;
  }
  uStack_208 = uStack_280;
  puStack_218 = puStack_290;
  uStack_210 = uStack_288;
  uStack_228 = uStack_2a0;
  uStack_220 = uStack_298;
  uStack_2d8 = uStack_2a0;
  uStack_2d0 = uStack_298;
  puStack_2c8 = puStack_290;
  uStack_2c0 = uStack_288;
  uStack_2b8 = uStack_280;
  if ((DAT_0f763400 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763400), iVar6 != 0)) {
    func_0x0e873150(0xf7633e8);
    func_0x0410844d(&DAT_0f763400);
  }
  uStack_2b0 = 0x184b21f700000001;
  lVar18 = uStack_2d8 + 0x18;
  auStack_3a8._0_8_ = func_0x0e8749b0(lVar18);
  auStack_3a8._8_8_ = lVar18;
  func_0x0ed621a0(auStack_3a8,uStack_2b0._4_4_);
  auVar21 = auStack_368;
  auStack_3a8._0_8_ = auStack_3a8._2_8_ << 0x10;
  auStack_3a8._8_8_ = &uStack_2d0;
  puStack_398 = (undefined *)CONCAT44(puStack_398._4_4_,uStack_2b0._4_4_);
  auStack_390 = (undefined1  [16])0x0;
  auStack_380 = (undefined1  [16])0x0;
  lStack_370 = 0;
  auStack_368._1_8_ = 0x656d7473756a6461;
  auStack_368[0] = 0x16;
  auStack_368._8_4_ = 0x73746e65;
  auStack_368._13_3_ = auVar21._13_3_;
  auStack_368[0xc] = 0;
  auStack_350 = (undefined1  [16])0x0;
  lStack_340 = 0;
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  uStack_320 = 0x3f600000;
  func_0x048afb10(auStack_350,8);
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  auStack_318 = (undefined1  [16])0x0;
  uStack_2e8 = 0xff00;
  uStack_2e4 = uStack_2e4 & 0xffffff00;
  uStack_2e0 = uStack_2e0 & 0xffffff00;
  uStack_2dc = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f4d4668;
  uVar2 = auStack_390._0_8_;
  auStack_390._0_8_ = puVar19;
  if ((long *)uVar2 != (long *)0x0) {
    (**(code **)(*(long *)uVar2 + 8))();
  }
  uStack_410 = CONCAT44(uStack_410._4_4_,puStack_398._0_4_);
  plStack_408 = (long *)0x0;
  plStack_400 = (long *)((ulong)plStack_400 & 0xffffffff00000000);
  pcStack_3f8 = (code *)0x1;
  uStack_3f0 = 0;
  puStack_3e8 = &UNK_0e9ff3d0;
  puStack_3e0 = &SUB_048b06d0;
  puStack_3d8 = &UNK_0e9ff000;
  puStack_3d0 = &UNK_0e9ff490;
  puStack_3c8 = &UNK_0e9ff7b0;
  uStack_3c0 = 0;
  auStack_3b8 = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_3a8._8_8_,&uStack_410);
  uVar2 = auStack_3b8._8_8_;
  if ((long *)auStack_3b8._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_3b8._8_8_ + 8);
    lVar18 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)auStack_3b8._8_8_ + 0x10))(auStack_3b8._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  uVar2 = auStack_3a8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_410 = CONCAT44(uStack_410._4_4_,_DAT_0f550a0c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar11 + 1) = (undefined1  [16])0x0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_408 = plVar11 + 3;
  uVar3 = auStack_390._0_8_;
  uVar4 = auStack_390._8_8_;
  auStack_390 = (undefined1  [16])0x0;
  plVar11[3] = uVar3;
  plVar11[4] = uVar4;
  plVar11[7] = lStack_370;
  plVar11[5] = auStack_380._0_8_;
  plVar11[6] = auStack_380._8_8_;
  auStack_380 = (undefined1  [16])0x0;
  lStack_370 = 0;
  plVar11[10] = lStack_358;
  plVar11[8] = auStack_368._0_8_;
  plVar11[9] = auStack_368._8_8_;
  auStack_368 = (undefined1  [16])0x0;
  lStack_358 = 0;
  plVar11[0xb] = auStack_350._0_8_;
  plVar11[0xc] = auStack_350._8_8_;
  plVar11[0xd] = lStack_340;
  auStack_350 = (undefined1  [16])0x0;
  lStack_340 = 0;
  plVar11[0xe] = lStack_338;
  plVar11[0xf] = lStack_330;
  plVar11[0x10] = lStack_328;
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_320;
  plVar11[0x12] = auStack_318._0_8_;
  plVar11[0x13] = auStack_318._8_8_;
  plVar11[0x14] = lStack_308;
  auStack_318 = (undefined1  [16])0x0;
  lStack_308 = 0;
  plVar11[0x17] = lStack_2f0;
  plVar11[0x15] = lStack_300;
  plVar11[0x16] = lStack_2f8;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_2dc,CONCAT43(uStack_2e0,uStack_2e4._1_3_));
  plVar11[0x18] = CONCAT44(uStack_2e4,CONCAT22(uStack_2e6,uStack_2e8));
  auStack_268 = (undefined1  [16])0x0;
  plStack_400 = plVar11;
  func_0x048afd20(uVar2,&uStack_410);
  plVar11 = plStack_400;
  if (plStack_400 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_400 + 1;
    lVar18 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_400 + 0x10))(plStack_400);
      func_0x0412c2d0(plVar11);
    }
  }
  uVar3 = auStack_268._8_8_;
  if ((long *)auStack_268._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_268._8_8_ + 8);
    lVar18 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)auStack_268._8_8_ + 0x10))(auStack_268._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  lVar18 = *(long *)(uVar2 + 0x10);
  iVar6 = *(int *)(uVar2 + 0x1c);
  if (iVar6 == 2) {
    piVar16 = *(int **)(*(long *)(lVar18 + 0x78) + 0x60);
    iVar6 = *piVar16;
    while (iVar6 != *(int *)(uVar2 + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar6 = *piVar16;
    }
    for (; *(long *)(piVar16 + 0xc) != *(long *)(uVar2 + 8); piVar16 = *(int **)(piVar16 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar18 + 0x18) = *(uint *)(lVar18 + 0x18) | auStack_3a8._0_4_ << 0x10;
      }
      goto LAB_0e97c1ad;
    }
    piVar16 = *(int **)(*(long *)(lVar18 + 0x78) + 0x48);
    iVar6 = *piVar16;
    while (iVar6 != *(int *)(uVar2 + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar6 = *piVar16;
    }
  }
  piVar16[4] = piVar16[4] | auStack_3a8._0_4_ << 0x10;
LAB_0e97c1ad:
  func_0x048b0bc0(auStack_390);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
