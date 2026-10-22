/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeca2170 (ELF vaddr 0xeba2170)
 * Label: string:minecraft:biome
 * Body:  [[0eca2170, 0eca21cb] [0eca21d0, 0eca220c] [0eca2210, 0eca2529] [0eca2530, 0eca2571] [0eca2580, 0eca2961] [0eca2970, 0eca29ac] [0eca29b0, 0eca2bce] [0eca2bd0, 0eca2c12] [0eca2c20, 0eca336e] [0eca3370, 0eca33ac] [0eca33b0, 0eca36b7] [0eca36c0, 0eca3701] [0eca3710, 0eca3afb] [0eca3b00, 0eca3b34] [0eca3b40, 0eca45bd]]
 * Ghidra: FUN_0eca2170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eca2170(long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long *plVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  code *pcStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [20];
  int iStack_2cc;
  long *plStack_2c8;
  undefined1 auStack_2c0 [16];
  code *pcStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  long *plStack_290;
  long lStack_288;
  long lStack_280;
  undefined4 uStack_278;
  undefined3 uStack_274;
  undefined4 uStack_26c;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  code *pcStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  long *plStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  undefined1 auStack_170 [16];
  code *pcStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  long *plStack_138;
  undefined1 auStack_130 [16];
  code *pcStack_120;
  long *plStack_110;
  undefined1 auStack_108 [16];
  long *plStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_98;
  undefined1 *puStack_90;
  long *plStack_88;
  long lStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_48;
  ulong uStack_40;
  
  func_0x0e808d40();
  func_0x0db34c00(param_1);
  auStack_170 = (undefined1  [16])0x0;
  plVar17 = (long *)*param_2;
  plVar12 = param_2 + 1;
  plStack_178 = (long *)auStack_170;
  if (plVar17 != plVar12) {
    do {
      func_0x0629ec20(&plStack_178,auStack_170,plVar17 + 4);
      plVar18 = (long *)plVar17[1];
      plVar15 = plVar17;
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar15[2];
          bVar20 = plVar15 != (long *)*plVar17;
          plVar15 = plVar17;
        } while (bVar20);
      }
      else {
        do {
          plVar17 = plVar18;
          plVar18 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
    } while (plVar17 != plVar12);
  }
  if ((DAT_0f772d40 == '\0') && (iVar5 = func_0x04108328(&DAT_0f772d40), iVar5 != 0)) {
    func_0x0ecf8dc0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f772cc0,0xf53dab8);
    func_0x0410844d(&DAT_0f772d40);
  }
  plVar17 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f772cc0 + 4)) * 8);
  do {
    lVar9 = *plVar17;
    if (lVar9 == -1) goto LAB_0eca2290;
    plVar17 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f772cc0 + 4));
  if (plVar17 == *(long **)(param_1 + 0x38)) {
LAB_0eca2290:
    puVar7 = &DAT_0f772cc0;
    if (iRam000000000f772d20 != -0x2b3da790) goto LAB_0eca22e5;
LAB_0eca22bb:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_0eca22e5;
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar7 = (undefined *)(lVar9 + 9);
    if (bVar20) {
      puVar7 = *(undefined **)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar7 = (undefined *)plVar17[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0eca22bb;
LAB_0eca22e5:
    puVar7 = &UNK_0148d9b3;
    uVar13 = 0x10;
  }
  func_0x0ecf9550(&uStack_338,param_1,puVar7,uVar13);
  lStack_228 = auStack_170._0_8_;
  plStack_2c8 = (long *)auStack_2c0;
  lStack_220 = auStack_170._8_8_;
  if (auStack_170._8_8_ == 0) {
    plStack_230 = &lStack_228;
  }
  else {
    *(long **)(auStack_170._0_8_ + 0x10) = plStack_2c8;
    auStack_170 = (undefined1  [16])0x0;
    *(long **)(lStack_228 + 0x10) = &lStack_228;
    auStack_170._0_8_ = 0;
    plStack_230 = plStack_178;
    plStack_178 = (long *)auStack_170;
  }
  auStack_268._4_4_ = uStack_338._4_4_;
  auStack_268._0_4_ = (undefined4)uStack_338;
  uStack_258 = CONCAT44(uStack_324,uStack_328);
  puStack_238 = puStack_308;
  uStack_240 = uStack_310;
  pcStack_248 = pcStack_318;
  pcStack_250 = pcStack_320;
  auStack_268._8_8_ = lStack_330;
  auStack_2c0 = auStack_170;
  func_0x049dc470(&plStack_2c8,auStack_170._0_8_);
  func_0x049dc470(&plStack_178,auStack_170._0_8_);
  if ((char)puStack_238 == '\0') {
    uVar2 = auStack_268._0_8_;
    if ((DAT_0f772d40 == '\0') && (iVar5 = func_0x04108328(&DAT_0f772d40), iVar5 != 0)) {
      func_0x0ecf8dc0();
      __cxa_atexit(&UNK_048ae800,&DAT_0f772cc0,0xf53dab8);
      func_0x0410844d(&DAT_0f772d40);
    }
    plVar17 = (long *)(*(long *)(uVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar2 + 0x20) - *(long *)(uVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f772cc0 + 4)) * 8);
    do {
      lVar9 = *plVar17;
      if (lVar9 == -1) goto LAB_0eca24b1;
      plVar17 = (long *)(*(long *)(uVar2 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(uVar2 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f772cc0 + 4));
    if (plVar17 == *(long **)(uVar2 + 0x38)) {
LAB_0eca24b1:
      puVar7 = &DAT_0f772cc0;
    }
    else {
      puVar7 = (undefined *)plVar17[2];
    }
    for (pbVar8 = *(byte **)(auStack_268._0_8_ + 0x50);
        pbVar8 != *(byte **)(auStack_268._0_8_ + 0x58); pbVar8 = pbVar8 + 0x38) {
      bVar1 = *pbVar8;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0eca258a;
      }
      else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0eca258a:
        if ((bVar1 & 1) == 0) {
          pbVar14 = pbVar8 + 1;
        }
        else {
          pbVar14 = *(byte **)(pbVar8 + 0x10);
        }
        auVar21[0] = -(*pbVar14 == 0x5b);
        auVar21[1] = -(pbVar14[1] == 99);
        auVar21[2] = -(pbVar14[2] == 0x65);
        auVar21[3] = -(pbVar14[3] == 0x72);
        auVar21[4] = -(pbVar14[4] == 0x65);
        auVar21[5] = -(pbVar14[5] == 0x61);
        auVar21[6] = -(pbVar14[6] == 0x6c);
        auVar21[7] = -(pbVar14[7] == 0x3a);
        auVar21[8] = -(pbVar14[8] == 100);
        auVar21[9] = -(pbVar14[9] == 0x6f);
        auVar21[10] = -(pbVar14[10] == 99);
        auVar21[0xb] = -(pbVar14[0xb] == 0x75);
        auVar21[0xc] = -(pbVar14[0xc] == 0x6d);
        auVar21[0xd] = -(pbVar14[0xd] == 0x65);
        auVar21[0xe] = -(pbVar14[0xe] == 0x6e);
        auVar21[0xf] = -(pbVar14[0xf] == 0x74);
        auVar24[0] = -(pbVar14[10] == 99);
        auVar24[1] = -(pbVar14[0xb] == 0x75);
        auVar24[2] = -(pbVar14[0xc] == 0x6d);
        auVar24[3] = -(pbVar14[0xd] == 0x65);
        auVar24[4] = -(pbVar14[0xe] == 0x6e);
        auVar24[5] = -(pbVar14[0xf] == 0x74);
        auVar24[6] = -(pbVar14[0x10] == 0x61);
        auVar24[7] = -(pbVar14[0x11] == 0x74);
        auVar24[8] = -(pbVar14[0x12] == 0x69);
        auVar24[9] = -(pbVar14[0x13] == 0x6f);
        auVar24[10] = -(pbVar14[0x14] == 0x6e);
        auVar24[0xb] = -(pbVar14[0x15] == 0x5f);
        auVar24[0xc] = -(pbVar14[0x16] == 0x74);
        auVar24[0xd] = -(pbVar14[0x17] == 0x61);
        auVar24[0xe] = -(pbVar14[0x18] == 0x67);
        auVar24[0xf] = -(pbVar14[0x19] == 0x5d);
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
    if (pbVar8 == *(byte **)(auStack_268._0_8_ + 0x58)) {
LAB_0eca25b8:
      if ((int)uStack_240 == 0) {
        if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0eca2640;
        lVar9 = *(long *)(puVar7 + 0x68) + 0x38;
      }
      else {
        uVar4 = uStack_240._4_4_;
        if (puVar7 == (undefined *)0x0) {
          puVar7 = (undefined *)FUN_048aead0(uVar2 + 0x18);
        }
        lVar9 = func_0x048b0c90(uVar2 + 0x18,puVar7,uVar4,1);
        if (lVar9 == 0) {
          uStack_338._0_4_ = 0;
          uStack_338._4_4_ = 0;
          lStack_330 = 0;
          func_0x048b0d20(&uStack_338);
          lVar9 = CONCAT44(uStack_338._4_4_,(undefined4)uStack_338);
          if (lVar9 == 0) goto LAB_0eca2640;
        }
        if ((*(int *)(lVar9 + 0x50) == -0x45dcb126) && (*(long *)(lVar9 + 0x58) != 0)) {
          lVar9 = *(long *)(lVar9 + 0x58) + 0x40;
        }
        else {
LAB_0eca2640:
          lVar9 = 0;
        }
      }
      auStack_2c0._8_8_ = &UNK_0488e0b0;
      pcStack_2b0 = (code *)0x0;
      pcStack_2a8 = (code *)CONCAT35(pcStack_2a8._5_3_,0x48b5725f);
      plStack_2c8 = (long *)0x0;
      uStack_338._0_4_ = 0;
      uStack_338._4_4_ = 0;
      lStack_330 = 0;
      pcStack_320 = (code *)&UNK_0488e0b0;
      pcStack_318 = (code *)0x0;
      uStack_310 = (undefined *)CONCAT35(uStack_310._5_3_,0x48b5725f);
      puStack_e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_e8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      plStack_f8 = (long *)0x21;
      lStack_f0 = 0x1a;
      *(ulong *)((long)puStack_e8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_e8 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_e8 = _DAT_013bbacd;
      puStack_e8[1] = uVar2;
      *(undefined1 *)((long)puStack_e8 + 0x1a) = 0;
      lVar9 = func_0x048b5060(lVar9,&plStack_f8);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined8 *)(lVar9 + 0x20) == &uStack_338) {
        pcVar11 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          plVar17 = (long *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(plVar17);
          lVar3 = lStack_330;
          if (uStack_310._4_1_ != '\0') {
            if (uStack_310._4_1_ == '\x02') {
              (*pcStack_320)(5,&lStack_330,plVar17);
            }
            else {
              lStack_330 = 0;
              *plVar17 = lVar3;
            }
          }
        }
        *(code **)(lVar9 + 0x38) = pcStack_320;
        *(code **)(lVar9 + 0x40) = pcStack_318;
        *(undefined4 *)(lVar9 + 0x48) = (undefined4)uStack_310;
        *(char *)(lVar9 + 0x4c) = uStack_310._4_1_;
        pcVar11 = pcStack_318;
      }
      if (((ulong)plStack_f8 & 1) != 0) {
        func_0x0412a280(puStack_e8,(ulong)plStack_f8 & 0xfffffffffffffffe);
        pcVar11 = pcStack_318;
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(&lStack_330);
      }
      if (pcStack_2b0 != (code *)0x0) {
        (*pcStack_2b0)(&plStack_2c8);
      }
    }
    else {
      iVar5 = *(int *)(pbVar8 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar5 == _DAT_0f550ac4) goto LAB_0eca25b8;
    }
    puStack_308 = puStack_238;
    pcStack_318 = pcStack_248;
    uStack_310 = uStack_240;
    uStack_328 = (undefined4)uStack_258;
    uStack_324 = (undefined4)((ulong)uStack_258 >> 0x20);
    pcStack_320 = pcStack_250;
    uStack_338._0_4_ = auStack_268._0_4_;
    uStack_338._4_4_ = auStack_268._4_4_;
    lStack_330 = auStack_268._8_8_;
    if ((DAT_0f772d60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f772d60), iVar5 != 0)) {
      func_0x0ecf8ed0();
      func_0x0410844d(&DAT_0f772d60);
    }
    if ((DAT_0f7368c0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7368c0), iVar5 != 0)) {
      func_0x0db765c0(0xf7368a8);
      func_0x0410844d(&DAT_0f7368c0);
    }
    plStack_2c8 = (long *)CONCAT44(plStack_2c8._4_4_,_DAT_0f7368ac);
    auStack_2c0._8_8_ = &UNK_0ecf9fa0;
    auStack_2c0._0_8_ = &SUB_0db763d0;
    func_0x05da1460(&lStack_330);
    func_0x0eca9a20(&uStack_338,auStack_268,&UNK_01df4730,0x19);
    func_0x0eca4760(param_1);
    func_0x0eca9ea0(&uStack_338,auStack_268,&UNK_01e44ce0,0x19);
    func_0x0eca9a20(&plStack_2c8,auStack_268,&UNK_01df4750,0x1c);
    func_0x0eca9ea0(&uStack_338,&plStack_2c8,&UNK_01e44d00,0x1c);
  }
  func_0x049dc470(&plStack_230,lStack_228);
  func_0x0ecaa2c0(param_1);
  auStack_130 = (undefined1  [16])0x0;
  plVar17 = (long *)*param_2;
  plStack_138 = (long *)auStack_130;
  if (plVar17 != plVar12) {
    do {
      func_0x0629ec20(&plStack_138,auStack_130,plVar17 + 4);
      plVar18 = (long *)plVar17[1];
      plVar15 = plVar17;
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar15[2];
          bVar20 = plVar15 != (long *)*plVar17;
          plVar15 = plVar17;
        } while (bVar20);
      }
      else {
        do {
          plVar17 = plVar18;
          plVar18 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
    } while (plVar17 != plVar12);
  }
  lVar9 = func_0x0c8df460(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar7 = (undefined *)(lVar9 + 9);
    if (bVar20) {
      puVar7 = *(undefined **)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar7 = &UNK_01284d53;
    uVar13 = 0x10;
  }
  func_0x0ecfbaf0(auStack_268,param_1,puVar7,uVar13);
  lStack_288 = auStack_130._0_8_;
  lStack_330 = auStack_130._0_8_;
  lStack_280 = auStack_130._8_8_;
  uStack_328 = auStack_130._8_4_;
  uStack_324 = auStack_130._12_4_;
  if (auStack_130._8_8_ == 0) {
    plStack_290 = &lStack_288;
  }
  else {
    *(long **)(auStack_130._0_8_ + 0x10) = &lStack_330;
    auStack_130 = (undefined1  [16])0x0;
    *(long **)(lStack_288 + 0x10) = &lStack_288;
    lStack_330 = 0;
    uStack_328 = 0;
    uStack_324 = 0;
    plStack_290 = plStack_138;
    plStack_138 = (long *)auStack_130;
  }
  puStack_298 = puStack_238;
  uStack_2a0 = uStack_240;
  pcStack_2a8 = pcStack_248;
  pcStack_2b0 = pcStack_250;
  auStack_2c0._8_8_ = uStack_258;
  auStack_2c0._0_8_ = auStack_268._8_8_;
  plStack_2c8 = (long *)auStack_268._0_8_;
  uStack_338 = &lStack_330;
  func_0x049dc470(&uStack_338,lStack_330);
  func_0x049dc470(&plStack_138,auStack_130._0_8_);
  if ((char)puStack_298 == '\0') {
    plVar17 = plStack_2c8 + 3;
    lVar9 = func_0x0c8df460(plVar17);
    for (pbVar8 = (byte *)plStack_2c8[10]; pbVar8 != (byte *)plStack_2c8[0xb];
        pbVar8 = pbVar8 + 0x38) {
      bVar1 = *pbVar8;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0eca2c2a;
      }
      else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0eca2c2a:
        if ((bVar1 & 1) == 0) {
          pbVar14 = pbVar8 + 1;
        }
        else {
          pbVar14 = *(byte **)(pbVar8 + 0x10);
        }
        auVar22[0] = -(*pbVar14 == 0x5b);
        auVar22[1] = -(pbVar14[1] == 99);
        auVar22[2] = -(pbVar14[2] == 0x65);
        auVar22[3] = -(pbVar14[3] == 0x72);
        auVar22[4] = -(pbVar14[4] == 0x65);
        auVar22[5] = -(pbVar14[5] == 0x61);
        auVar22[6] = -(pbVar14[6] == 0x6c);
        auVar22[7] = -(pbVar14[7] == 0x3a);
        auVar22[8] = -(pbVar14[8] == 100);
        auVar22[9] = -(pbVar14[9] == 0x6f);
        auVar22[10] = -(pbVar14[10] == 99);
        auVar22[0xb] = -(pbVar14[0xb] == 0x75);
        auVar22[0xc] = -(pbVar14[0xc] == 0x6d);
        auVar22[0xd] = -(pbVar14[0xd] == 0x65);
        auVar22[0xe] = -(pbVar14[0xe] == 0x6e);
        auVar22[0xf] = -(pbVar14[0xf] == 0x74);
        auVar25[0] = -(pbVar14[10] == 99);
        auVar25[1] = -(pbVar14[0xb] == 0x75);
        auVar25[2] = -(pbVar14[0xc] == 0x6d);
        auVar25[3] = -(pbVar14[0xd] == 0x65);
        auVar25[4] = -(pbVar14[0xe] == 0x6e);
        auVar25[5] = -(pbVar14[0xf] == 0x74);
        auVar25[6] = -(pbVar14[0x10] == 0x61);
        auVar25[7] = -(pbVar14[0x11] == 0x74);
        auVar25[8] = -(pbVar14[0x12] == 0x69);
        auVar25[9] = -(pbVar14[0x13] == 0x6f);
        auVar25[10] = -(pbVar14[0x14] == 0x6e);
        auVar25[0xb] = -(pbVar14[0x15] == 0x5f);
        auVar25[0xc] = -(pbVar14[0x16] == 0x74);
        auVar25[0xd] = -(pbVar14[0x17] == 0x61);
        auVar25[0xe] = -(pbVar14[0x18] == 0x67);
        auVar25[0xf] = -(pbVar14[0x19] == 0x5d);
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
    if (pbVar8 == (byte *)plStack_2c8[0xb]) {
LAB_0eca2c5b:
      if ((int)uStack_2a0 == 0) {
        if ((*(int *)(lVar9 + 0x60) != -0x2b3da790) || (*(long *)(lVar9 + 0x68) == 0))
        goto LAB_0eca2cd8;
        lVar9 = *(long *)(lVar9 + 0x68) + 0x38;
      }
      else {
        auStack_268._0_8_ = func_0x048b0c90(plVar17,lVar9,uStack_2a0._4_4_,1);
        if (auStack_268._0_8_ == 0) {
          auStack_268 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_268);
          if (auStack_268._0_8_ == 0) goto LAB_0eca2cd8;
        }
        if ((*(int *)(auStack_268._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_268._0_8_ + 0x58) != 0)) {
          lVar9 = *(long *)(auStack_268._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0eca2cd8:
          lVar9 = 0;
        }
      }
      uStack_328 = 0x488e0b0;
      uStack_324 = 0;
      pcStack_320 = (code *)0x0;
      pcStack_318 = (code *)CONCAT35(pcStack_318._5_3_,0x48b5725f);
      uStack_338._0_4_ = 0;
      uStack_338._4_4_ = 0;
      auStack_268 = (undefined1  [16])0x0;
      pcStack_250 = (code *)&UNK_0488e0b0;
      pcStack_248 = (code *)0x0;
      uStack_240 = (undefined *)CONCAT35(uStack_240._5_3_,0x48b5725f);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      plStack_f8 = (long *)0x21;
      lStack_f0 = 0x1a;
      *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puVar10 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puVar10 = _DAT_013bbacd;
      puVar10[1] = uVar2;
      *(undefined1 *)((long)puVar10 + 0x1a) = 0;
      puStack_e8 = puVar10;
      lVar9 = func_0x048b5060(lVar9,&plStack_f8);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if ((undefined1 *)(lVar9 + 0x20) == auStack_268) {
        pcVar11 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
          puVar10 = (undefined8 *)(lVar9 + 0x28);
          (**(code **)(lVar9 + 0x40))(puVar10);
          if (uStack_240._4_1_ != '\0') {
            if (uStack_240._4_1_ == '\x02') {
              (*pcStack_250)(5,auStack_268 + 8,puVar10);
            }
            else {
              uVar2 = auStack_268._8_8_;
              auStack_268._8_8_ = 0;
              *puVar10 = uVar2;
            }
          }
        }
        *(code **)(lVar9 + 0x38) = pcStack_250;
        *(code **)(lVar9 + 0x40) = pcStack_248;
        *(int *)(lVar9 + 0x48) = (int)uStack_240;
        *(char *)(lVar9 + 0x4c) = uStack_240._4_1_;
        pcVar11 = pcStack_248;
      }
      if (((ulong)plStack_f8 & 1) != 0) {
        func_0x0412a280(puStack_e8,(ulong)plStack_f8 & 0xfffffffffffffffe);
        pcVar11 = pcStack_248;
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(auStack_268 + 8);
      }
      if (pcStack_320 != (code *)0x0) {
        (*pcStack_320)(&uStack_338);
      }
    }
    else {
      iVar5 = *(int *)(pbVar8 + 0x1c);
      if (DAT_0f550ad8 == '\0') {
        iVar6 = func_0x04108328(&DAT_0f550ad8);
        if (iVar6 != 0) {
          func_0x0488e120(0xf550ac0);
          func_0x0410844d(&DAT_0f550ad8);
        }
      }
      if (iVar5 == _DAT_0f550ac4) goto LAB_0eca2c5b;
    }
    puStack_58 = puStack_298;
    pcStack_68 = pcStack_2a8;
    puStack_60 = uStack_2a0;
    pcStack_78 = (code *)auStack_2c0._8_8_;
    pcStack_70 = pcStack_2b0;
    plStack_88 = plStack_2c8;
    lStack_80 = auStack_2c0._0_8_;
    func_0x0ecfc3b0(auStack_268,&plStack_88,&UNK_011ea907,0xb,1);
    pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    plVar17 = uStack_338;
    if (pcVar11 == (code *)0x0) {
      func_0x0eec74c0(8,0);
      plVar17 = uStack_338;
    }
    uStack_338._4_4_ = (undefined4)((ulong)plVar17 >> 0x20);
    *(undefined **)pcVar11 = &UNK_0f4982b8;
    if (pcStack_250 != (code *)0x0) {
      lVar9 = *(long *)pcStack_250;
      pcStack_250 = pcVar11;
      uStack_338 = plVar17;
      (**(code **)(lVar9 + 8))();
      pcVar11 = pcStack_250;
    }
    pcStack_250 = pcVar11;
    uStack_338._0_4_ = (undefined4)uStack_258;
    lStack_330 = 0;
    uStack_328 = 0;
    pcStack_320 = (code *)0x1;
    pcStack_318 = (code *)0x0;
    uStack_310 = &UNK_0db7ae60;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = &SUB_0db7ab50;
    puStack_2f8 = &UNK_0ecfc8b0;
    puStack_2f0 = &UNK_0ecfca70;
    uStack_2e8 = 0;
    auStack_2e0._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_268._8_8_,&uStack_338);
    uVar2 = auStack_2e0._8_8_;
    if ((long *)auStack_2e0._8_8_ != (long *)0x0) {
      LOCK();
      plVar17 = (long *)(auStack_2e0._8_8_ + 8);
      lVar9 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_2e0._8_8_ + 0x10))(auStack_2e0._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0ecfc5b0(auStack_268);
    puStack_148 = (undefined1 *)CONCAT71(puStack_148._1_7_,puStack_58._0_1_);
    pcStack_158 = pcStack_68;
    uStack_150 = puStack_60;
    pcStack_160 = pcStack_70;
    plStack_178 = plStack_88;
    auStack_170._8_8_ = pcStack_78;
    auStack_170._0_8_ = lStack_80;
    func_0x048b0bc0(&pcStack_250);
    func_0x0ecfc3b0(auStack_268,&plStack_178,&UNK_011ed181,10,1);
    pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar11 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar11 = &UNK_0f4e1268;
    if (pcStack_250 != (code *)0x0) {
      lVar9 = *(long *)pcStack_250;
      pcStack_250 = pcVar11;
      (**(code **)(lVar9 + 8))();
      pcVar11 = pcStack_250;
    }
    pcStack_250 = pcVar11;
    uStack_338._0_4_ = (undefined4)uStack_258;
    lStack_330 = 0;
    uStack_328 = 0;
    pcStack_320 = (code *)0x1;
    pcStack_318 = (code *)0x0;
    uStack_310 = &UNK_0ecfce70;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = &UNK_0ecf8d00;
    puStack_2f8 = &UNK_0ecfcf30;
    puStack_2f0 = &UNK_0ecfd260;
    uStack_2e8 = 0;
    auStack_2e0._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_268._8_8_,&uStack_338);
    uVar2 = auStack_2e0._8_8_;
    if ((long *)auStack_2e0._8_8_ != (long *)0x0) {
      LOCK();
      plVar17 = (long *)(auStack_2e0._8_8_ + 8);
      lVar9 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_2e0._8_8_ + 0x10))(auStack_2e0._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0ecfc5b0(auStack_268);
    uStack_c8 = puStack_148._0_1_;
    pcStack_d8 = pcStack_158;
    puStack_d0 = uStack_150;
    puStack_e8 = (undefined8 *)auStack_170._8_8_;
    pcStack_e0 = pcStack_160;
    plStack_f8 = plStack_178;
    lStack_f0 = auStack_170._0_8_;
    func_0x048b0bc0(&pcStack_250);
    func_0x0ecfc3b0(auStack_268,&plStack_f8,&UNK_0147513a,0x16,0);
    pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar11 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar11 = &UNK_0f4e12e0;
    if (pcStack_250 != (code *)0x0) {
      lVar9 = *(long *)pcStack_250;
      pcStack_250 = pcVar11;
      (**(code **)(lVar9 + 8))();
      pcVar11 = pcStack_250;
    }
    pcStack_250 = pcVar11;
    uStack_338._0_4_ = (undefined4)uStack_258;
    lStack_330 = 0;
    uStack_328 = 0;
    pcStack_320 = (code *)0x1;
    pcStack_318 = (code *)0x0;
    uStack_310 = &UNK_0ecff220;
    puStack_308 = &SUB_048b06d0;
    puStack_300 = &UNK_0ecfee50;
    puStack_2f8 = &UNK_0ecff2e0;
    puStack_2f0 = &UNK_0ecff510;
    uStack_2e8 = 0;
    auStack_2e0._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_268._8_8_,&uStack_338);
    uVar2 = auStack_2e0._8_8_;
    if ((long *)auStack_2e0._8_8_ != (long *)0x0) {
      LOCK();
      plVar17 = (long *)(auStack_2e0._8_8_ + 8);
      lVar9 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_2e0._8_8_ + 0x10))(auStack_2e0._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0ecfc5b0(auStack_268);
    func_0x048b0bc0(&pcStack_250);
  }
  func_0x049dc470(&plStack_290,lStack_288);
  auStack_108 = (undefined1  [16])0x0;
  param_2 = (long *)*param_2;
  plStack_110 = (long *)auStack_108;
  if (param_2 != plVar12) {
    do {
      func_0x0629ec20(&plStack_110,auStack_108,param_2 + 4);
      plVar17 = (long *)param_2[1];
      plVar18 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar18[2];
          bVar20 = plVar18 != (long *)*param_2;
          plVar18 = param_2;
        } while (bVar20);
      }
      else {
        do {
          param_2 = plVar17;
          plVar17 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != plVar12);
  }
  if (DAT_0f773020 == '\0') {
    iVar5 = func_0x04108328(&DAT_0f773020);
    if (iVar5 != 0) {
      func_0x0ecffa50();
      __cxa_atexit(&UNK_048ae800,&DAT_0f772fa0,0xf53dab8);
      func_0x0410844d(&DAT_0f773020);
    }
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f772fa0 + 4)) * 8);
  do {
    lVar9 = *plVar12;
    if (lVar9 == -1) goto LAB_0eca3420;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f772fa0 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0eca3420:
    puVar7 = &DAT_0f772fa0;
    if (iRam000000000f773000 != -0x2b3da790) goto LAB_0eca3478;
LAB_0eca344b:
    lVar9 = *(long *)(puVar7 + 0x68);
    if (lVar9 == 0) goto LAB_0eca3478;
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar7 = (undefined *)(lVar9 + 9);
    if (bVar20) {
      puVar7 = *(undefined **)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0eca344b;
LAB_0eca3478:
    puVar7 = &UNK_011e566f;
    uVar13 = 0xf;
  }
  func_0x0ed00450(auStack_268,param_1,puVar7,uVar13);
  lStack_288 = auStack_108._0_8_;
  lStack_330 = auStack_108._0_8_;
  lStack_280 = auStack_108._8_8_;
  uStack_328 = auStack_108._8_4_;
  uStack_324 = auStack_108._12_4_;
  if (auStack_108._8_8_ == 0) {
    plStack_290 = &lStack_288;
  }
  else {
    *(long **)(auStack_108._0_8_ + 0x10) = &lStack_330;
    auStack_108 = (undefined1  [16])0x0;
    *(long **)(lStack_288 + 0x10) = &lStack_288;
    lStack_330 = 0;
    uStack_328 = 0;
    uStack_324 = 0;
    plStack_290 = plStack_110;
    plStack_110 = (long *)auStack_108;
  }
  puStack_298 = puStack_238;
  uStack_2a0 = uStack_240;
  pcStack_2a8 = pcStack_248;
  pcStack_2b0 = pcStack_250;
  auStack_2c0._8_8_ = uStack_258;
  auStack_2c0._0_8_ = auStack_268._8_8_;
  plStack_2c8 = (long *)auStack_268._0_8_;
  uStack_338 = &lStack_330;
  func_0x049dc470(&uStack_338,lStack_330);
  func_0x049dc470(&plStack_110,auStack_108._0_8_);
  plVar12 = plStack_2c8;
  if ((char)puStack_298 != '\0') goto LAB_0eca424c;
  if (DAT_0f773020 == '\0') {
    iVar5 = func_0x04108328(&DAT_0f773020);
    if (iVar5 != 0) {
      func_0x0ecffa50();
      __cxa_atexit(&UNK_048ae800,&DAT_0f772fa0,0xf53dab8);
      func_0x0410844d(&DAT_0f773020);
    }
  }
  plVar17 = (long *)(plVar12[3] +
                    (ulong)((int)((ulong)(plVar12[4] - plVar12[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f772fa0 + 4)) * 8);
  do {
    lVar9 = *plVar17;
    if (lVar9 == -1) goto LAB_0eca3640;
    plVar17 = (long *)(plVar12[6] + lVar9 * 0x18);
  } while (*(uint *)(plVar12[6] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f772fa0 + 4));
  if (plVar17 == (long *)plVar12[7]) {
LAB_0eca3640:
    puVar7 = &DAT_0f772fa0;
  }
  else {
    puVar7 = (undefined *)plVar17[2];
  }
  for (pbVar8 = (byte *)plStack_2c8[10]; pbVar8 != (byte *)plStack_2c8[0xb]; pbVar8 = pbVar8 + 0x38)
  {
    bVar1 = *pbVar8;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0eca371a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0eca371a:
      if ((bVar1 & 1) == 0) {
        pbVar14 = pbVar8 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar8 + 0x10);
      }
      auVar23[0] = -(*pbVar14 == 0x5b);
      auVar23[1] = -(pbVar14[1] == 99);
      auVar23[2] = -(pbVar14[2] == 0x65);
      auVar23[3] = -(pbVar14[3] == 0x72);
      auVar23[4] = -(pbVar14[4] == 0x65);
      auVar23[5] = -(pbVar14[5] == 0x61);
      auVar23[6] = -(pbVar14[6] == 0x6c);
      auVar23[7] = -(pbVar14[7] == 0x3a);
      auVar23[8] = -(pbVar14[8] == 100);
      auVar23[9] = -(pbVar14[9] == 0x6f);
      auVar23[10] = -(pbVar14[10] == 99);
      auVar23[0xb] = -(pbVar14[0xb] == 0x75);
      auVar23[0xc] = -(pbVar14[0xc] == 0x6d);
      auVar23[0xd] = -(pbVar14[0xd] == 0x65);
      auVar23[0xe] = -(pbVar14[0xe] == 0x6e);
      auVar23[0xf] = -(pbVar14[0xf] == 0x74);
      auVar26[0] = -(pbVar14[10] == 99);
      auVar26[1] = -(pbVar14[0xb] == 0x75);
      auVar26[2] = -(pbVar14[0xc] == 0x6d);
      auVar26[3] = -(pbVar14[0xd] == 0x65);
      auVar26[4] = -(pbVar14[0xe] == 0x6e);
      auVar26[5] = -(pbVar14[0xf] == 0x74);
      auVar26[6] = -(pbVar14[0x10] == 0x61);
      auVar26[7] = -(pbVar14[0x11] == 0x74);
      auVar26[8] = -(pbVar14[0x12] == 0x69);
      auVar26[9] = -(pbVar14[0x13] == 0x6f);
      auVar26[10] = -(pbVar14[0x14] == 0x6e);
      auVar26[0xb] = -(pbVar14[0x15] == 0x5f);
      auVar26[0xc] = -(pbVar14[0x16] == 0x74);
      auVar26[0xd] = -(pbVar14[0x17] == 0x61);
      auVar26[0xe] = -(pbVar14[0x18] == 0x67);
      auVar26[0xf] = -(pbVar14[0x19] == 0x5d);
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
  if (pbVar8 == (byte *)plStack_2c8[0xb]) {
LAB_0eca3748:
    if ((int)uStack_2a0 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0eca37d9;
      lVar9 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      uVar4 = uStack_2a0._4_4_;
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)FUN_048aead0(plVar12 + 3);
      }
      auStack_268._0_8_ = func_0x048b0c90(plVar12 + 3,puVar7,uVar4,1);
      if (auStack_268._0_8_ == 0) {
        auStack_268 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_268);
        if (auStack_268._0_8_ == 0) goto LAB_0eca37d9;
      }
      if ((*(int *)(auStack_268._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_268._0_8_ + 0x58) != 0)) {
        lVar9 = *(long *)(auStack_268._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eca37d9:
        lVar9 = 0;
      }
    }
    uStack_328 = 0x488e0b0;
    uStack_324 = 0;
    pcStack_320 = (code *)0x0;
    pcStack_318 = (code *)CONCAT35(pcStack_318._5_3_,0x48b5725f);
    uStack_338._0_4_ = 0;
    uStack_338._4_4_ = 0;
    auStack_268 = (undefined1  [16])0x0;
    pcStack_250 = (code *)&UNK_0488e0b0;
    pcStack_248 = (code *)0x0;
    uStack_240 = (undefined *)CONCAT35(uStack_240._5_3_,0x48b5725f);
    puStack_180 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_180 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_190 = 0x21;
    uStack_188 = 0x1a;
    *(ulong *)((long)puStack_180 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_180 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_180 = _DAT_013bbacd;
    puStack_180[1] = uVar2;
    *(undefined1 *)((long)puStack_180 + 0x1a) = 0;
    lVar9 = func_0x048b5060(lVar9,&uStack_190);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if ((undefined1 *)(lVar9 + 0x20) == auStack_268) {
      pcVar11 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar9 + 0x40) != (code *)0x0) {
        puVar10 = (undefined8 *)(lVar9 + 0x28);
        (**(code **)(lVar9 + 0x40))(puVar10);
        if (uStack_240._4_1_ != '\0') {
          if (uStack_240._4_1_ == '\x02') {
            (*pcStack_250)(5,auStack_268 + 8,puVar10);
          }
          else {
            uVar2 = auStack_268._8_8_;
            auStack_268._8_8_ = 0;
            *puVar10 = uVar2;
          }
        }
      }
      *(code **)(lVar9 + 0x38) = pcStack_250;
      *(code **)(lVar9 + 0x40) = pcStack_248;
      *(int *)(lVar9 + 0x48) = (int)uStack_240;
      *(char *)(lVar9 + 0x4c) = uStack_240._4_1_;
      pcVar11 = pcStack_248;
    }
    if ((uStack_190 & 1) != 0) {
      func_0x0412a280(puStack_180,uStack_190 & 0xfffffffffffffffe);
      pcVar11 = pcStack_248;
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(auStack_268 + 8);
    }
    if (pcStack_320 != (code *)0x0) {
      (*pcStack_320)(&uStack_338);
    }
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if (DAT_0f550ad8 == '\0') {
      iVar6 = func_0x04108328(&DAT_0f550ad8);
      if (iVar6 != 0) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0eca3748;
  }
  plVar12 = plStack_2c8;
  plStack_138 = (long *)auStack_2c0._0_8_;
  auStack_130._8_8_ = pcStack_2b0;
  auStack_130._0_8_ = auStack_2c0._8_8_;
  pcStack_120 = pcStack_2a8;
  iStack_2cc = (int)uStack_2a0;
  uStack_26c = uStack_2a0._4_4_;
  puStack_90 = puStack_298;
  func_0x05d54750(&uStack_b8,&UNK_0f4e0678);
  uVar13 = uStack_a8;
  uStack_274 = 0x746e65;
  uStack_278 = 0x6d75636f;
  uStack_98 = uStack_b0;
  uStack_48 = uStack_b8;
  uStack_40 = uStack_b0;
  uStack_b0 = 0;
  uStack_340 = uStack_a8;
  uStack_a8 = 0;
  if (DAT_0f773020 == '\0') {
    iVar5 = func_0x04108328(&DAT_0f773020);
    if (iVar5 != 0) {
      func_0x0ecffa50();
      __cxa_atexit(&UNK_048ae800,&DAT_0f772fa0,0xf53dab8);
      func_0x0410844d(&DAT_0f773020);
    }
  }
  plVar17 = (long *)(plVar12[3] +
                    (ulong)((int)((ulong)(plVar12[4] - plVar12[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f772fa0 + 4)) * 8);
  do {
    lVar9 = *plVar17;
    if (lVar9 == -1) goto LAB_0eca3ac0;
    plVar17 = (long *)(plVar12[6] + lVar9 * 0x18);
  } while (*(uint *)(plVar12[6] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f772fa0 + 4));
  if (plVar17 == (long *)plVar12[7]) {
LAB_0eca3ac0:
    puVar7 = &DAT_0f772fa0;
    pbVar8 = (byte *)plVar12[10];
    pbVar14 = (byte *)plVar12[0xb];
    if (pbVar8 != pbVar14) {
LAB_0eca3b1f:
      do {
        bVar1 = *pbVar8;
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x24) goto LAB_0eca3b4a;
        }
        else if (*(long *)(pbVar8 + 8) == 0x24) {
LAB_0eca3b4a:
          if ((bVar1 & 1) == 0) {
            pbVar16 = pbVar8 + 1;
          }
          else {
            pbVar16 = *(byte **)(pbVar8 + 0x10);
          }
          iVar5 = func_0x0eee3000(&DAT_014518a9,pbVar16,0x24);
          if (iVar5 == 0) break;
        }
        pbVar8 = pbVar8 + 0x38;
      } while (pbVar8 != pbVar14);
    }
  }
  else {
    puVar7 = (undefined *)plVar17[2];
    pbVar8 = (byte *)plVar12[10];
    pbVar14 = (byte *)plVar12[0xb];
    if (pbVar8 != pbVar14) goto LAB_0eca3b1f;
  }
  if (pbVar8 == pbVar14) {
LAB_0eca3b76:
    if (iStack_2cc == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0eca3c14;
      lVar9 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)FUN_048aead0(plVar12 + 3);
      }
      lVar9 = func_0x048b0c90(plVar12 + 3,puVar7,uStack_26c,1);
      if (lVar9 == 0) {
        auStack_268 = ZEXT816(0);
        func_0x048b0d20(auStack_268);
        lVar9 = auStack_268._0_8_;
        if (auStack_268._0_8_ == 0) goto LAB_0eca3c14;
      }
      if ((*(int *)(lVar9 + 0x50) == -0x45dcb126) && (*(long *)(lVar9 + 0x58) != 0)) {
        lVar9 = *(long *)(lVar9 + 0x58) + 0x40;
      }
      else {
LAB_0eca3c14:
        lVar9 = 0;
      }
    }
    uStack_338._0_4_ = 0;
    uStack_338._4_4_ = 0;
    uStack_328 = 0x48b4ab0;
    uStack_324 = 0;
    pcStack_320 = (code *)&UNK_048b49f0;
    pcStack_318 = (code *)CONCAT35(pcStack_318._5_3_,0x1d33bd9c5);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar10 = 0x4420656d6f69421c;
    *(undefined4 *)(puVar10 + 1) = uStack_278;
    *(uint *)((long)puVar10 + 0xb) = CONCAT31(uStack_274,uStack_278._3_1_);
    *(undefined1 *)((long)puVar10 + 0xf) = 0;
    puVar10[2] = 0;
    uStack_274 = 0;
    uStack_278 = 0;
    *(undefined2 *)(puVar10 + 3) = 2;
    puVar10[4] = uStack_48;
    puVar10[5] = uStack_40;
    puVar10[6] = uVar13;
    pcStack_250 = (code *)&UNK_048b4ab0;
    pcStack_248 = (code *)&UNK_048b49f0;
    uStack_240 = (undefined *)CONCAT35(uStack_240._5_3_,0x1d33bd9c5);
    uStack_338._0_4_ = 0;
    uStack_338._4_4_ = 0;
    auStack_268._8_8_ = puVar10;
    auStack_268._0_8_ = &UNK_048b46e0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar2 = _UNK_014518c1;
    uStack_190 = 0x29;
    uStack_188 = 0x24;
    puVar10[2] = _DAT_014518b9;
    puVar10[3] = uVar2;
    uVar2 = _UNK_014518b1;
    *puVar10 = _DAT_014518a9;
    puVar10[1] = uVar2;
    *(undefined4 *)(puVar10 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar10 + 0x24) = 0;
    puStack_180 = puVar10;
    lVar9 = func_0x048b5060(lVar9,&uStack_190);
    *(undefined **)(lVar9 + 0x20) = &UNK_048b46e0;
    pcVar11 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar9 + 0x20) != auStack_268) {
      puVar10 = (undefined8 *)(lVar9 + 0x28);
      if (*(code **)(lVar9 + 0x40) == (code *)0x0) {
LAB_0eca3dd4:
        uVar2 = auStack_268._8_8_;
        auStack_268._8_8_ = 0;
        *puVar10 = uVar2;
      }
      else {
        (**(code **)(lVar9 + 0x40))(puVar10);
        if (uStack_240._4_1_ != '\0') {
          if (uStack_240._4_1_ != '\x02') goto LAB_0eca3dd4;
          (*pcStack_250)(5,auStack_268 + 8,puVar10);
        }
      }
      *(code **)(lVar9 + 0x38) = pcStack_250;
      *(code **)(lVar9 + 0x40) = pcStack_248;
      *(int *)(lVar9 + 0x48) = (int)uStack_240;
      *(char *)(lVar9 + 0x4c) = uStack_240._4_1_;
      pcVar11 = pcStack_248;
    }
    if ((uStack_190 & 1) != 0) {
      func_0x0412a280(puStack_180,uStack_190 & 0xfffffffffffffffe);
      pcVar11 = pcStack_248;
    }
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(auStack_268 + 8);
    }
    if (pcStack_320 != (code *)0x0) {
      (*pcStack_320)(&uStack_338);
    }
    uStack_340 = 0;
    uVar19 = 0;
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if (DAT_0f550768 == '\0') {
      iVar6 = func_0x04108328(&DAT_0f550768);
      if (iVar6 != 0) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
    }
    uVar19 = uStack_98;
    if (iVar5 == _DAT_0f550754) goto LAB_0eca3b76;
  }
  pcStack_78 = (code *)auStack_130._8_8_;
  pcStack_70 = pcStack_120;
  plStack_88 = plStack_138;
  lStack_80 = auStack_130._0_8_;
  plStack_178 = plVar12;
  auStack_170._8_8_ = auStack_130._0_8_;
  auStack_170._0_8_ = plStack_138;
  pcStack_160 = (code *)auStack_130._8_8_;
  pcStack_158 = pcStack_120;
  uStack_150 = (undefined *)CONCAT44(uStack_26c,iStack_2cc);
  puStack_148 = puStack_90;
  func_0x0ed00fe0(auStack_268,&plStack_178,&UNK_0128206d,0xf);
  pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  plVar12 = uStack_338;
  if (pcVar11 == (code *)0x0) {
    func_0x0eec74c0(8,0);
    plVar12 = uStack_338;
  }
  uStack_338._4_4_ = (undefined4)((ulong)plVar12 >> 0x20);
  *(undefined **)pcVar11 = &UNK_0f3e37d0;
  if (pcStack_250 != (code *)0x0) {
    lVar9 = *(long *)pcStack_250;
    pcStack_250 = pcVar11;
    uStack_338 = plVar12;
    (**(code **)(lVar9 + 8))();
    pcVar11 = pcStack_250;
  }
  pcStack_250 = pcVar11;
  uStack_338._0_4_ = (undefined4)uStack_258;
  lStack_330 = 0;
  uStack_328 = 0;
  pcStack_320 = (code *)0x1;
  pcStack_318 = (code *)0x0;
  uStack_310 = &UNK_0ed01590;
  puStack_308 = &SUB_048b06d0;
  puStack_300 = &SUB_0c8df460;
  puStack_2f8 = &UNK_0ed015a0;
  puStack_2f0 = &UNK_0ed017c0;
  uStack_2e8 = 0;
  auStack_2e0._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_268._8_8_,&uStack_338);
  uVar2 = auStack_2e0._8_8_;
  if ((long *)auStack_2e0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_2e0._8_8_ + 8);
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_2e0._8_8_ + 0x10))(auStack_2e0._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0ed01290(auStack_268);
  uStack_c8 = puStack_148._0_1_;
  pcStack_d8 = pcStack_158;
  puStack_d0 = uStack_150;
  puStack_e8 = (undefined8 *)auStack_170._8_8_;
  pcStack_e0 = pcStack_160;
  plStack_f8 = plStack_178;
  lStack_f0 = auStack_170._0_8_;
  func_0x048b0bc0(&pcStack_250);
  func_0x0ed00fe0(auStack_268,&plStack_f8,&UNK_013771cd,0xe);
  pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar11 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar11 = &UNK_0ef44b00;
  if (pcStack_250 != (code *)0x0) {
    lVar9 = *(long *)pcStack_250;
    pcStack_250 = pcVar11;
    (**(code **)(lVar9 + 8))();
    pcVar11 = pcStack_250;
  }
  pcStack_250 = pcVar11;
  uStack_338._0_4_ = (undefined4)uStack_258;
  lStack_330 = 0;
  uStack_328 = 0;
  pcStack_320 = (code *)0x1;
  pcStack_318 = (code *)0x0;
  uStack_310 = &UNK_048b3f30;
  puStack_308 = &SUB_048b06d0;
  puStack_300 = &SUB_048b2190;
  puStack_2f8 = &UNK_0ed01c30;
  puStack_2f0 = &UNK_0ed01e10;
  uStack_2e8 = 0;
  auStack_2e0._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_268._8_8_,&uStack_338);
  uVar2 = auStack_2e0._8_8_;
  if ((long *)auStack_2e0._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_2e0._8_8_ + 8);
    lVar9 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)auStack_2e0._8_8_ + 0x10))(auStack_2e0._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0ed01290(auStack_268);
  func_0x048b0bc0(&pcStack_250);
  if ((uStack_340 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar19 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar19 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_a8 = 0;
  if ((uStack_b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b0 & 0xff00ffffffffffff) - 8);
  }
  uStack_b0 = 0;
LAB_0eca424c:
  func_0x049dc470(&plStack_290,lStack_288);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
