/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca4760 (ELF vaddr 0xeba4760)
 * Label: string:SurfaceBuilderType
 * Body:  [[0eca4760, 0eca4c01] [0eca4c10, 0eca56d1] [0eca56e0, 0eca58a6]]
 * Ghidra: FUN_0eca4760
 */


/* WARNING: Removing unreachable block (ram,0x0eca4d0d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca4760(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  byte *pbVar11;
  code *pcVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  byte bStack_360;
  undefined6 uStack_35f;
  undefined1 uStack_359;
  undefined1 uStack_358;
  undefined6 uStack_357;
  undefined1 uStack_351;
  undefined8 uStack_350;
  byte bStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined6 uStack_33f;
  undefined1 uStack_339;
  undefined1 uStack_338;
  undefined6 uStack_337;
  undefined1 uStack_331;
  byte bStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined4 uStack_320;
  uint uStack_31c;
  byte bStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined2 uStack_307;
  undefined5 uStack_305;
  byte bStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined1 uStack_2ef;
  undefined6 uStack_2ee;
  undefined1 auStack_2e8 [16];
  undefined *puStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  ulong uStack_2b0;
  undefined1 auStack_2a8 [16];
  long lStack_298;
  undefined1 auStack_290 [16];
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined4 uStack_260;
  undefined1 auStack_258 [16];
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined2 uStack_228;
  undefined2 uStack_226;
  uint uStack_224;
  uint uStack_220;
  undefined1 uStack_21c;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [16];
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_168 [9];
  undefined4 uStack_15f;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined8 uStack_150;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  char cStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  
  func_0x0db370f0();
  func_0x0db61980(param_1 + 0x18);
  lVar8 = func_0x0db61aa0(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar8 + 9);
    if (bVar18) {
      puVar10 = *(undefined **)(lVar8 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar8 + 0x10);
    }
  }
  else {
    puVar10 = &UNK_01339a9c;
    uVar15 = 0x12;
  }
  func_0x0db61e90(auStack_2e8,param_1,puVar10,uVar15,0);
  auVar19 = auStack_2c0;
  auStack_2c0[0xc] = 0;
  auVar20 = auStack_2c0;
  uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
  auStack_2c0[8] = auVar19[8];
  bVar18 = auStack_2c0[8] == '\0';
  auStack_2c0 = auVar20;
  if (bVar18) {
    bStack_330 = 0x26;
    uStack_32f = (undefined7)_DAT_0142bedc;
    uStack_328 = (undefined1)((ulong)_DAT_0142bedc >> 0x38);
    uStack_327 = (undefined7)_UNK_0142bee4;
    uStack_320 = 0x646c726f;
    uStack_31c = uStack_31c & 0xffffff00;
    func_0x0db5fe60(auStack_a8,auStack_2e8,&uStack_32f,0x13);
    bStack_348 = 0x2c;
    uStack_347 = (undefined7)_DAT_011b8f64;
    uStack_340 = (undefined1)((ulong)_DAT_011b8f64 >> 0x38);
    uStack_33f = (undefined6)_UNK_011b8f6c;
    uStack_339 = 0x65;
    uStack_338 = 0x6e;
    uStack_337 = 0x6e6165636f5f;
    uStack_331 = 0;
    func_0x0db60240(auStack_168,auStack_a8,&uStack_347,0x16);
    bStack_360 = 0x1c;
    uStack_35f = 0x7263656e696d;
    uStack_359 = 0x61;
    uStack_358 = 0x66;
    uStack_357 = 0x6173656d3a74;
    uStack_351 = 0;
    func_0x0db60620(&uStack_e8,auStack_168,&uStack_35f,0xe);
    uStack_377 = 0x617263656e696d;
    uStack_370 = 0x66;
    uStack_36f = 0x706d6177733a74;
    uStack_368 = 0;
    FUN_0db60a00(&uStack_1a8,&uStack_e8,&uStack_377,0xf);
    bStack_300 = 0x20;
    uStack_2ff = (undefined7)_DAT_01222b04;
    uStack_2f8 = (undefined1)((ulong)_DAT_01222b04 >> 0x38);
    uStack_2f7 = (undefined7)_UNK_01222b0c;
    uStack_2f0 = (undefined1)((ulong)_UNK_01222b0c >> 0x38);
    uStack_2ef = 0;
    func_0x0db60de0(&uStack_128,&uStack_1a8,&uStack_2ff,0x10);
    bStack_318 = 0x22;
    uStack_317 = (undefined7)_DAT_013df14a;
    uStack_310 = (undefined1)((ulong)_DAT_013df14a >> 0x38);
    uStack_30f = (undefined7)_UNK_013df152;
    uStack_308 = (undefined1)((ulong)_UNK_013df152 >> 0x38);
    uStack_307 = 100;
    func_0x0db611c0(&uStack_210,&uStack_128,&uStack_317,0x11);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_012a48b1;
    *puVar9 = _DAT_012a48a9;
    puVar9[1] = uVar3;
    puVar9[2] = 0x746e656964617267;
    *(undefined1 *)(puVar9 + 3) = 0;
    func_0x0db615a0(auStack_68,&uStack_210,puVar9,0x18);
    FUN_0412a280(puVar9,0x20);
    if ((bStack_318 & 1) != 0) {
      FUN_0412a280(CONCAT53(uStack_305,CONCAT21(uStack_307,uStack_308)),
                   CONCAT71(uStack_317,bStack_318) & 0xfffffffffffffffe);
    }
    if ((bStack_300 & 1) != 0) {
      FUN_0412a280(CONCAT62(uStack_2ee,CONCAT11(uStack_2ef,uStack_2f0)),
                   CONCAT71(uStack_2ff,bStack_300) & 0xfffffffffffffffe);
    }
    if ((bStack_360 & 1) != 0) {
      FUN_0412a280(uStack_350,
                   CONCAT17(uStack_359,CONCAT61(uStack_35f,bStack_360)) & 0xfffffffffffffffe);
    }
    if ((bStack_348 & 1) != 0) {
      FUN_0412a280(CONCAT17(uStack_331,CONCAT61(uStack_337,uStack_338)),
                   CONCAT71(uStack_347,bStack_348) & 0xfffffffffffffffe);
    }
    if ((bStack_330 & 1) != 0) {
      FUN_0412a280(CONCAT44(uStack_31c,uStack_320),
                   CONCAT71(uStack_32f,bStack_330) & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f772e28 == '\0') && (iVar6 = FUN_04108328(&DAT_0f772e28), iVar6 != 0)) {
    func_0x0ecfa9f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772da8,0xf53dab8);
    func_0x0410844d(&DAT_0f772e28);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f772da8 + 4)) * 8);
  do {
    lVar8 = *plVar14;
    if (lVar8 == -1) goto LAB_0eca4a80;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f772da8 + 4));
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0eca4a80:
    puVar10 = &DAT_0f772da8;
    if (iRam000000000f772e08 != -0x2b3da790) goto LAB_0eca4aed;
LAB_0eca4aab:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0eca4aed;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar16 = lVar8 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar8 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0ed01ff0(&uStack_128,param_1,lVar16,uVar15);
    uVar15 = uStack_128;
  }
  else {
    puVar10 = (undefined *)plVar14[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0eca4aab;
LAB_0eca4aed:
    func_0x0ed01ff0(&uStack_128,param_1,&DAT_01e44ce0,0x19);
    uVar15 = uStack_128;
  }
  if (cStack_f8 != '\0') {
    return;
  }
  uStack_128 = uVar15;
  if ((DAT_0f772e28 == '\0') && (iVar6 = FUN_04108328(&DAT_0f772e28), iVar6 != 0)) {
    func_0x0ecfa9f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772da8,0xf53dab8);
    func_0x0410844d(&DAT_0f772e28);
  }
  plVar14 = (long *)(*(long *)(uVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f772da8 + 4)) * 8);
  do {
    lVar8 = *plVar14;
    if (lVar8 == -1) goto LAB_0eca4b80;
    plVar14 = (long *)(*(long *)(uVar15 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f772da8 + 4));
  if (plVar14 == *(long **)(uVar15 + 0x38)) {
LAB_0eca4b80:
    puVar10 = &DAT_0f772da8;
  }
  else {
    puVar10 = (undefined *)plVar14[2];
  }
  for (pbVar11 = *(byte **)(uStack_128 + 0x50); pbVar11 != *(byte **)(uStack_128 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eca4c1a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0eca4c1a:
      if ((bVar2 & 1) == 0) {
        pbVar17 = pbVar11 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar11 + 0x10);
      }
      auVar19[0] = -(*pbVar17 == DAT_014eaba0);
      auVar19[1] = -(pbVar17[1] == DAT_014eaba0._1_1_);
      auVar19[2] = -(pbVar17[2] == DAT_014eaba0._2_1_);
      auVar19[3] = -(pbVar17[3] == DAT_014eaba0._3_1_);
      auVar19[4] = -(pbVar17[4] == DAT_014eaba0._4_1_);
      auVar19[5] = -(pbVar17[5] == DAT_014eaba0._5_1_);
      auVar19[6] = -(pbVar17[6] == DAT_014eaba0._6_1_);
      auVar19[7] = -(pbVar17[7] == DAT_014eaba0._7_1_);
      auVar19[8] = -(pbVar17[8] == DAT_014eaba0._8_1_);
      auVar19[9] = -(pbVar17[9] == DAT_014eaba0._9_1_);
      auVar19[10] = -(pbVar17[10] == DAT_014eaba0._10_1_);
      auVar19[0xb] = -(pbVar17[0xb] == DAT_014eaba0._11_1_);
      auVar19[0xc] = -(pbVar17[0xc] == DAT_014eaba0._12_1_);
      auVar19[0xd] = -(pbVar17[0xd] == DAT_014eaba0._13_1_);
      auVar19[0xe] = -(pbVar17[0xe] == DAT_014eaba0._14_1_);
      auVar19[0xf] = -(pbVar17[0xf] == DAT_014eaba0._15_1_);
      auVar20[0] = -(pbVar17[10] == DAT_014e4ff0);
      auVar20[1] = -(pbVar17[0xb] == DAT_014e4ff0._1_1_);
      auVar20[2] = -(pbVar17[0xc] == DAT_014e4ff0._2_1_);
      auVar20[3] = -(pbVar17[0xd] == DAT_014e4ff0._3_1_);
      auVar20[4] = -(pbVar17[0xe] == DAT_014e4ff0._4_1_);
      auVar20[5] = -(pbVar17[0xf] == DAT_014e4ff0._5_1_);
      auVar20[6] = -(pbVar17[0x10] == DAT_014e4ff0._6_1_);
      auVar20[7] = -(pbVar17[0x11] == DAT_014e4ff0._7_1_);
      auVar20[8] = -(pbVar17[0x12] == DAT_014e4ff0._8_1_);
      auVar20[9] = -(pbVar17[0x13] == DAT_014e4ff0._9_1_);
      auVar20[10] = -(pbVar17[0x14] == DAT_014e4ff0._10_1_);
      auVar20[0xb] = -(pbVar17[0x15] == DAT_014e4ff0._11_1_);
      auVar20[0xc] = -(pbVar17[0x16] == DAT_014e4ff0._12_1_);
      auVar20[0xd] = -(pbVar17[0x17] == DAT_014e4ff0._13_1_);
      auVar20[0xe] = -(pbVar17[0x18] == DAT_014e4ff0._14_1_);
      auVar20[0xf] = -(pbVar17[0x19] == DAT_014e4ff0._15_1_);
      auVar20 = auVar20 & auVar19;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar11 == *(byte **)(uStack_128 + 0x58)) {
LAB_0eca4c48:
    if (iStack_100 == 0) {
      if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0eca4d88;
      lVar8 = *(long *)(puVar10 + 0x68) + 0x38;
    }
    else {
      if (puVar10 == (undefined *)0x0) {
        puVar10 = (undefined *)func_0x048aead0(uVar15 + 0x18);
      }
      auStack_2e8._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar10,uStack_fc,1);
      if (auStack_2e8._0_8_ == 0) {
        auStack_2e8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2e8);
        if (auStack_2e8._0_8_ == 0) goto LAB_0eca4d88;
      }
      if ((*(int *)(auStack_2e8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_2e8._0_8_ + 0x58) != 0)) {
        lVar8 = *(long *)(auStack_2e8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eca4d88:
        lVar8 = 0;
      }
    }
    plStack_200 = (long *)&UNK_0488e0b0;
    uStack_1f8 = (code *)0x0;
    uStack_1f0 = CONCAT35(uStack_1f0._5_3_,0x48b5725f);
    uStack_210 = 0;
    auStack_2e8 = (undefined1  [16])0x0;
    auStack_2d0 = ZEXT816(0x488e0b0);
    auStack_2c0._0_5_ = 0x48b5725f;
    puStack_198 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_198 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_1a8 = 0x21;
    uStack_1a0 = 0x1a;
    *(ulong *)((long)puStack_198 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_198 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_198 = _DAT_013bbacd;
    puStack_198[1] = uVar3;
    *(undefined1 *)((long)puStack_198 + 0x1a) = 0;
    lVar8 = func_0x048b5060(lVar8,&uStack_1a8);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if ((undefined1 *)(lVar8 + 0x20) == auStack_2e8) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar8 + 0x40) != (code *)0x0) {
        puVar9 = (undefined8 *)(lVar8 + 0x28);
        (**(code **)(lVar8 + 0x40))(puVar9);
        if (auStack_2c0[4] != '\0') {
          if (auStack_2c0[4] == '\x02') {
            (*(code *)auStack_2d0._0_8_)(5,auStack_2e8 + 8,puVar9);
          }
          else {
            uVar3 = auStack_2e8._8_8_;
            auStack_2e8._8_8_ = 0;
            *puVar9 = uVar3;
          }
        }
      }
      *(undefined8 *)(lVar8 + 0x38) = auStack_2d0._0_8_;
      *(undefined8 *)(lVar8 + 0x40) = auStack_2d0._8_8_;
      *(undefined4 *)(lVar8 + 0x48) = auStack_2c0._0_4_;
      *(char *)(lVar8 + 0x4c) = auStack_2c0[4];
      pcVar12 = (code *)auStack_2d0._8_8_;
    }
    if ((uStack_1a8 & 1) != 0) {
      FUN_0412a280(puStack_198,uStack_1a8 & 0xfffffffffffffffe);
      pcVar12 = (code *)auStack_2d0._8_8_;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_2e8 + 8);
    }
    if (uStack_1f8 != (code *)0x0) {
      (*uStack_1f8)(&uStack_210);
    }
  }
  else {
    iVar6 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0eca4c48;
  }
  uStack_c8 = uStack_108;
  uStack_d8 = uStack_118;
  uStack_d0 = uStack_110;
  uStack_e8 = uStack_128;
  uStack_e0 = uStack_120;
  uStack_1a8 = uStack_128;
  uStack_1a0 = uStack_120;
  puStack_198 = (undefined8 *)uStack_118;
  uStack_190 = uStack_110;
  uStack_188 = uStack_108;
  func_0x0db7f6f0(&uStack_210,uStack_128 + 0x18);
  auVar19 = _auStack_168;
  if (uStack_1f8._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)((long)plStack_200 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != (int)uStack_1f8) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    lVar8 = *(long *)(piVar13 + 0xc);
    while ((long *)lVar8 != plStack_208) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar8 = *(long *)(piVar13 + 0xc);
    }
LAB_0eca503f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 1;
  }
  else {
    if (uStack_1f8._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)((long)plStack_200 + 0x78) + 0x48);
      iVar6 = *piVar13;
      while (iVar6 != (int)uStack_1f8) {
        piVar13 = piVar13 + 0x1a;
        iVar6 = *piVar13;
      }
      goto LAB_0eca503f;
    }
    if (uStack_1f8._4_4_ == 0) {
      *(uint *)((long)plStack_200 + 0x18) = *(uint *)((long)plStack_200 + 0x18) | 0x10000;
    }
  }
  puStack_2d8 = (undefined *)plStack_200;
  auStack_2d0._0_8_ = uStack_1f8;
  auStack_2e8._8_8_ = plStack_208;
  auStack_2e8._0_8_ = uStack_210;
  auStack_168[8] = 8;
  auStack_168._0_8_ = &UNK_0db61a90;
  uStack_15f = 0x65707974;
  uStack_15a = auVar19._14_2_;
  uStack_15b = 0;
  func_0x0db7f8d0(auStack_a8,auStack_2e8,auStack_168);
  if ((auStack_168[8] & 1) != 0) {
    FUN_0412a280(uStack_150,(ulong)stack0xfffffffffffffea0 & 0xfffffffffffffffe);
  }
  if ((DAT_0f772d90 == '\0') && (iVar6 = FUN_04108328(&DAT_0f772d90), iVar6 != 0)) {
    func_0x0ecfa8b0();
    func_0x0410844d(&DAT_0f772d90);
  }
  uVar15 = uStack_1a8;
  uStack_180 = 0xe435054000000001;
  if ((DAT_0f772e28 == '\0') && (iVar6 = FUN_04108328(&DAT_0f772e28), iVar6 != 0)) {
    func_0x0ecfa9f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772da8,0xf53dab8);
    func_0x0410844d(&DAT_0f772e28);
  }
  plVar14 = (long *)(*(long *)(uVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f772da8 + 4)) * 8);
  do {
    lVar8 = *plVar14;
    if (lVar8 == -1) goto LAB_0eca5160;
    plVar14 = (long *)(*(long *)(uVar15 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f772da8 + 4));
  if (plVar14 == *(long **)(uVar15 + 0x38)) {
LAB_0eca5160:
    auStack_2e8._0_8_ = &DAT_0f772da8;
  }
  else {
    auStack_2e8._0_8_ = plVar14[2];
  }
  auStack_2e8._8_8_ = uVar15 + 0x18;
  func_0x0ed621a0(auStack_2e8,uStack_180._4_4_);
  auStack_2e8._0_2_ = 1;
  auStack_2e8._8_8_ = &uStack_1a0;
  puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,uStack_180._4_4_);
  auStack_2d0 = (undefined1  [16])0x0;
  auStack_2c0 = (undefined1  [16])0x0;
  uStack_2b0 = 0;
  auStack_2a8._0_9_ = ZEXT89(0x7265646c6975620e);
  auStack_290 = (undefined1  [16])0x0;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_268 = 0;
  uStack_260 = 0x3f600000;
  func_0x048afb10(auStack_290,8);
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  auStack_258 = (undefined1  [16])0x0;
  uStack_228 = 0xff00;
  uStack_224 = uStack_224 & 0xffffff00;
  uStack_220 = uStack_220 & 0xffffff00;
  uStack_21c = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4974f0;
  uVar3 = auStack_2d0._0_8_;
  auStack_2d0._0_8_ = puVar9;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  uStack_210 = CONCAT44(uStack_210._4_4_,puStack_2d8._0_4_);
  plStack_208 = (long *)0x0;
  plStack_200 = (long *)((ulong)plStack_200 & 0xffffffff00000000);
  uStack_1f8 = (code *)0x1;
  uStack_1f0 = 0;
  puStack_1e8 = &UNK_0db8b590;
  puStack_1e0 = &SUB_048b06d0;
  puStack_1d8 = &UNK_0db7fb90;
  puStack_1d0 = &UNK_0ed02c20;
  puStack_1c8 = &UNK_0ed02e70;
  uStack_1c0 = 0;
  auStack_1b8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_2e8._8_8_,&uStack_210);
  uVar3 = auStack_1b8._8_8_;
  if ((long *)auStack_1b8._8_8_ != (long *)0x0) {
    LOCK();
    plVar14 = (long *)(auStack_1b8._8_8_ + 8);
    lVar8 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*(long *)auStack_1b8._8_8_ + 0x10))(auStack_1b8._8_8_);
      FUN_0412c2d0(uVar3);
    }
  }
  uVar3 = auStack_2e8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar6 = FUN_04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_210 = CONCAT44(uStack_210._4_4_,_DAT_0f550a0c);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar14 + 1) = (undefined1  [16])0x0;
  *plVar14 = (long)&UNK_0ef439d0;
  plStack_208 = plVar14 + 3;
  uVar4 = auStack_2d0._0_8_;
  uVar5 = auStack_2d0._8_8_;
  auStack_2d0 = (undefined1  [16])0x0;
  plVar14[3] = uVar4;
  plVar14[4] = uVar5;
  plVar14[7] = uStack_2b0;
  plVar14[5] = auStack_2c0._0_8_;
  plVar14[6] = auStack_2c0._8_8_;
  auStack_2c0 = (undefined1  [16])0x0;
  uStack_2b0 = 0;
  plVar14[10] = lStack_298;
  plVar14[8] = auStack_2a8._0_8_;
  plVar14[9] = auStack_2a8._8_8_;
  auStack_2a8 = (undefined1  [16])0x0;
  lStack_298 = 0;
  plVar14[0xb] = auStack_290._0_8_;
  plVar14[0xc] = auStack_290._8_8_;
  plVar14[0xd] = lStack_280;
  auStack_290 = (undefined1  [16])0x0;
  lStack_280 = 0;
  plVar14[0xe] = lStack_278;
  plVar14[0xf] = lStack_270;
  plVar14[0x10] = lStack_268;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_268 = 0;
  *(undefined4 *)(plVar14 + 0x11) = uStack_260;
  plVar14[0x12] = auStack_258._0_8_;
  plVar14[0x13] = auStack_258._8_8_;
  plVar14[0x14] = lStack_248;
  auStack_258 = (undefined1  [16])0x0;
  lStack_248 = 0;
  plVar14[0x17] = lStack_230;
  plVar14[0x15] = lStack_240;
  plVar14[0x16] = lStack_238;
  lStack_240 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_21c,CONCAT43(uStack_220,uStack_224._1_3_));
  plVar14[0x18] = CONCAT44(uStack_224,CONCAT22(uStack_226,uStack_228));
  _auStack_168 = (undefined1  [16])0x0;
  plStack_200 = plVar14;
  func_0x048afd20(uVar3,&uStack_210);
  plVar14 = plStack_200;
  if (plStack_200 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      FUN_0412c2d0(plVar14);
    }
  }
  plVar14 = stack0xfffffffffffffea0;
  if (stack0xfffffffffffffea0 != (long *)0x0) {
    LOCK();
    plVar1 = stack0xfffffffffffffea0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*stack0xfffffffffffffea0 + 0x10))(stack0xfffffffffffffea0);
      FUN_0412c2d0(plVar14);
    }
  }
  lVar8 = *(long *)(uVar3 + 0x10);
  iVar6 = *(int *)(uVar3 + 0x1c);
  if (iVar6 == 2) {
    piVar13 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar6 = *piVar13;
    while (iVar6 != *(int *)(uVar3 + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar6 = *piVar13;
    }
    for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar3 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | auStack_2e8._0_4_ << 0x10;
      }
      goto LAB_0eca56ed;
    }
    piVar13 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
    iVar6 = *piVar13;
    while (iVar6 != *(int *)(uVar3 + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar6 = *piVar13;
    }
  }
  piVar13[4] = piVar13[4] | auStack_2e8._0_4_ << 0x10;
LAB_0eca56ed:
  func_0x048b0bc0(auStack_2d0);
  return;
}



/* ---- referenced strings ----
 * 0x11b8f64  minecraft:frozen_ocean
 * 0x1222b04  minecraft:capped
 * 0x12a48a9  minecraft:noise_gradient
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x13df14a  minecraft:the_end
 * 0x142bedc  minecraft:overworld
 * 0x14eaba0  [cereal:document
 */
