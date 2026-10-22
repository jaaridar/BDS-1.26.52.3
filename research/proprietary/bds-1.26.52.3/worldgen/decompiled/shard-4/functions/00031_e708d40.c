/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe808d40 (ELF vaddr 0xe708d40)
 * Label: callee-of:0xeba2170
 * Body:  [[0e808d40, 0e808fe1] [0e808ff0, 0e80981b] [0e809820, 0e809862] [0e809870, 0e80a091] [0e80a0a0, 0e80a4d0] [0e80a4e0, 0e80abad]]
 * Ghidra: FUN_0e808d40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e808d40(long param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [8];
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 (*pauVar9) [16];
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  long *plVar20;
  ulong uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [16];
  undefined8 uStack_398;
  undefined1 auStack_390 [8];
  code *pcStack_388;
  undefined1 auStack_380 [16];
  long lStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 uStack_360;
  undefined2 uStack_35f;
  undefined1 uStack_35d;
  undefined4 uStack_35c;
  long *plStack_358;
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
  undefined1 auStack_2d8 [16];
  undefined8 *puStack_2c8;
  undefined1 auStack_2b8 [16];
  long *plStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [24];
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  code *pcStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_208;
  undefined *puStack_200;
  code *pcStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [16];
  undefined8 *puStack_198;
  code *pcStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puStack_248 = &UNK_012daffa;
  puStack_240 = (undefined *)0x5;
  func_0x0470d9a0(auStack_3a8,&UNK_013d851d,0xd,0xd,&puStack_248);
  bVar22 = (auStack_3a8[0] & 1) != 0;
  plVar13 = (long *)(auStack_3a8 + 1);
  if (bVar22) {
    plVar13 = uStack_398;
  }
  uVar18 = (ulong)(auStack_3a8[0] >> 1);
  if (bVar22) {
    uVar18 = auStack_3a8._8_8_;
  }
  if ((DAT_0f762c28 == '\0') && (iVar6 = FUN_04108328(&DAT_0f762c28), iVar6 != 0)) {
    func_0x0e87d760();
    __cxa_atexit(&UNK_048ae800,&DAT_0f762ba8,0xf53dab8);
    func_0x0410844d(&DAT_0f762c28);
  }
  lVar11 = param_1 + 0x18;
  plVar20 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762ba8 + 4)) * 8);
  do {
    lVar17 = *plVar20;
    if (lVar17 == -1) goto LAB_0e808e11;
    plVar20 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f762ba8 + 4))
  ;
  if (plVar20 == *(long **)(param_1 + 0x38)) {
LAB_0e808e11:
    puVar8 = &DAT_0f762ba8;
    iVar6 = iRam000000000f762c08;
  }
  else {
    puVar8 = (undefined *)plVar20[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar17 = *(long *)(puVar8 + 0x68), lVar17 != 0)) {
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    plVar13 = (long *)(lVar17 + 9);
    if (bVar22) {
      plVar13 = *(long **)(lVar17 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar17 + 0x10);
    }
  }
  func_0x0e87dce0(auStack_2b8,param_1,plVar13,uVar18);
  if ((auStack_3a8[0] & 1) != 0) {
    func_0x0412a280(uStack_398,auStack_3a8._0_8_ & 0xfffffffffffffffe);
  }
  if ((char)puStack_288 == '\0') {
    func_0x04134310(auStack_2d8,3);
    pauVar9 = (undefined1 (*) [16])func_0x0412f0e0(auStack_2d8,0,&UNK_01284191,0xb);
    uStack_48 = *(undefined8 *)*pauVar9;
    uStack_40 = *(undefined8 *)(*pauVar9 + 8);
    uVar18 = *(ulong *)*pauVar9;
    uStack_3b0 = *(undefined8 *)pauVar9[1];
    *pauVar9 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar9[1] = 0;
    uVar16 = auStack_2b8._0_8_;
    lStack_170 = lVar11;
    if ((DAT_0f762c28 == '\0') && (iVar6 = FUN_04108328(&DAT_0f762c28), iVar6 != 0)) {
      func_0x0e87d760();
      __cxa_atexit(&UNK_048ae800,&DAT_0f762ba8,0xf53dab8);
      func_0x0410844d(&DAT_0f762c28);
    }
    uVar21 = uVar18 & 0xffffffffffffff00;
    plVar13 = (long *)(*(long *)(uVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar16 + 0x20) - *(long *)(uVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f762ba8 + 4)) * 8);
    do {
      lVar11 = *plVar13;
      if (lVar11 == -1) goto LAB_0e808f60;
      plVar13 = (long *)(*(long *)(uVar16 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(uVar16 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f762ba8 + 4)
            );
    if (plVar13 == *(long **)(uVar16 + 0x38)) {
LAB_0e808f60:
      puVar8 = &DAT_0f762ba8;
    }
    else {
      puVar8 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(auStack_2b8._0_8_ + 0x50);
        pbVar10 != *(byte **)(auStack_2b8._0_8_ + 0x58); pbVar10 = pbVar10 + 0x38) {
      bVar1 = *pbVar10;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1d) goto LAB_0e808ffa;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1d) {
LAB_0e808ffa:
        if ((bVar1 & 1) == 0) {
          pbVar19 = pbVar10 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar10 + 0x10);
        }
        auVar23[0] = -(*pbVar19 == DAT_014e4030);
        auVar23[1] = -(pbVar19[1] == DAT_014e4030._1_1_);
        auVar23[2] = -(pbVar19[2] == DAT_014e4030._2_1_);
        auVar23[3] = -(pbVar19[3] == DAT_014e4030._3_1_);
        auVar23[4] = -(pbVar19[4] == DAT_014e4030._4_1_);
        auVar23[5] = -(pbVar19[5] == DAT_014e4030._5_1_);
        auVar23[6] = -(pbVar19[6] == DAT_014e4030._6_1_);
        auVar23[7] = -(pbVar19[7] == DAT_014e4030._7_1_);
        auVar23[8] = -(pbVar19[8] == DAT_014e4030._8_1_);
        auVar23[9] = -(pbVar19[9] == DAT_014e4030._9_1_);
        auVar23[10] = -(pbVar19[10] == DAT_014e4030._10_1_);
        auVar23[0xb] = -(pbVar19[0xb] == DAT_014e4030._11_1_);
        auVar23[0xc] = -(pbVar19[0xc] == DAT_014e4030._12_1_);
        auVar23[0xd] = -(pbVar19[0xd] == DAT_014e4030._13_1_);
        auVar23[0xe] = -(pbVar19[0xe] == DAT_014e4030._14_1_);
        auVar23[0xf] = -(pbVar19[0xf] == DAT_014e4030._15_1_);
        auVar25[0] = -(pbVar19[0xd] == DAT_014e1610);
        auVar25[1] = -(pbVar19[0xe] == DAT_014e1610._1_1_);
        auVar25[2] = -(pbVar19[0xf] == DAT_014e1610._2_1_);
        auVar25[3] = -(pbVar19[0x10] == DAT_014e1610._3_1_);
        auVar25[4] = -(pbVar19[0x11] == DAT_014e1610._4_1_);
        auVar25[5] = -(pbVar19[0x12] == DAT_014e1610._5_1_);
        auVar25[6] = -(pbVar19[0x13] == DAT_014e1610._6_1_);
        auVar25[7] = -(pbVar19[0x14] == DAT_014e1610._7_1_);
        auVar25[8] = -(pbVar19[0x15] == DAT_014e1610._8_1_);
        auVar25[9] = -(pbVar19[0x16] == DAT_014e1610._9_1_);
        auVar25[10] = -(pbVar19[0x17] == DAT_014e1610._10_1_);
        auVar25[0xb] = -(pbVar19[0x18] == DAT_014e1610._11_1_);
        auVar25[0xc] = -(pbVar19[0x19] == DAT_014e1610._12_1_);
        auVar25[0xd] = -(pbVar19[0x1a] == DAT_014e1610._13_1_);
        auVar25[0xe] = -(pbVar19[0x1b] == DAT_014e1610._14_1_);
        auVar25[0xf] = -(pbVar19[0x1c] == DAT_014e1610._15_1_);
        auVar25 = auVar25 & auVar23;
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
    if (pbVar10 == *(byte **)(auStack_2b8._0_8_ + 0x58)) {
LAB_0e80902a:
      if ((int)uStack_290 == 0) {
        if (((puVar8 == (undefined *)0x0) || (*(int *)(puVar8 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar8 + 0x68) == 0)) goto LAB_0e8090b7;
        lVar11 = *(long *)(puVar8 + 0x68) + 0x38;
      }
      else {
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)func_0x048aead0(uVar16 + 0x18);
        }
        lVar11 = FUN_048b0c90(uVar16 + 0x18,puVar8,uStack_290._4_4_,1);
        if (lVar11 == 0) {
          auStack_3a8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_3a8);
          lVar11 = auStack_3a8._0_8_;
          if (auStack_3a8._0_8_ == 0) goto LAB_0e8090b7;
        }
        if ((*(int *)(lVar11 + 0x50) == -0x45dcb126) && (*(long *)(lVar11 + 0x58) != 0)) {
          lVar11 = *(long *)(lVar11 + 0x58) + 0x40;
        }
        else {
LAB_0e8090b7:
          lVar11 = 0;
        }
      }
      puStack_208 = (undefined *)0x0;
      pcStack_1f8 = (code *)&UNK_048b4ab0;
      pcStack_1f0 = (code *)&UNK_048b49f0;
      pcStack_1e8 = (code *)CONCAT35(pcStack_1e8._5_3_,0x1d33bd9c5);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar12 = uStack_48;
      puVar12[1] = uStack_40;
      puVar12[2] = uStack_3b0;
      *(undefined2 *)(puVar12 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar12 + 4) = (undefined1  [16])0x0;
      puVar12[6] = 0;
      pcStack_388 = (code *)&UNK_048b49f0;
      auStack_390 = (undefined1  [8])&UNK_048b4ab0;
      auStack_380._0_5_ = 0x1d33bd9c5;
      puStack_208 = (undefined *)0x0;
      auStack_3a8._8_8_ = puVar12;
      auStack_3a8._0_8_ = &UNK_048b46e0;
      puStack_198 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_198 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar16 = _UNK_014d987e;
      auStack_1a8._8_8_ = 0x1d;
      auStack_1a8._0_8_ = 0x21;
      *(ulong *)((long)puStack_198 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_198 + 0x15) = uVar16;
      uVar16 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_198 = _DAT_014d9869;
      puStack_198[1] = uVar16;
      *(undefined1 *)((long)puStack_198 + 0x1d) = 0;
      lVar11 = func_0x048b5060(lVar11,auStack_1a8);
      *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
      pcVar15 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar11 + 0x20) != auStack_3a8) {
        puVar12 = (undefined8 *)(lVar11 + 0x28);
        if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0e809240:
          uVar16 = auStack_3a8._8_8_;
          auStack_3a8._8_8_ = 0;
          *puVar12 = uVar16;
        }
        else {
          (**(code **)(lVar11 + 0x40))(puVar12);
          if (auStack_380[4] != '\0') {
            if (auStack_380[4] != '\x02') goto LAB_0e809240;
            (*(code *)auStack_390)(5,auStack_3a8 + 8,puVar12);
          }
        }
        *(undefined1 (*) [8])(lVar11 + 0x38) = auStack_390;
        *(code **)(lVar11 + 0x40) = pcStack_388;
        *(undefined4 *)(lVar11 + 0x48) = auStack_380._0_4_;
        *(char *)(lVar11 + 0x4c) = auStack_380[4];
        pcVar15 = pcStack_388;
      }
      if ((auStack_1a8[0] & 1) != 0) {
        func_0x0412a280(puStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
        pcVar15 = pcStack_388;
      }
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(auStack_3a8 + 8);
      }
      if (pcStack_1f0 != (code *)0x0) {
        (*pcStack_1f0)(&puStack_208);
      }
      uStack_3b0 = 0;
      uVar21 = 0;
      uVar18 = 0;
    }
    else {
      iVar6 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550768), iVar7 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar6 == _DAT_0f550754) goto LAB_0e80902a;
    }
    uStack_228 = pcStack_298;
    uStack_218 = puStack_288;
    puStack_238 = (undefined *)plStack_2a8;
    pcStack_230 = pcStack_2a0;
    puStack_248 = (undefined *)auStack_2b8._0_8_;
    puStack_240 = (undefined *)auStack_2b8._8_8_;
    uStack_220 = 0x1e1bc4d500000004;
    if ((DAT_0f761818 == '\0') && (iVar6 = FUN_04108328(&DAT_0f761818), iVar6 != 0)) {
      func_0x0e813620();
      func_0x0410844d(&DAT_0f761818);
    }
    auStack_3a8._0_4_ = uStack_220._4_4_;
    auStack_3a8._8_8_ = 0;
    uStack_398 = (long *)((ulong)uStack_398._4_4_ << 0x20);
    pcStack_388 = (code *)&SUB_048aead0;
    auStack_390 = (undefined1  [8])0x2;
    auStack_380._8_8_ = &UNK_0e87e840;
    auStack_380._0_8_ = &UNK_0d89b2d0;
    lStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_35f = 0;
    uStack_35d = 0;
    uStack_35c = 0;
    plStack_358 = (long *)0x0;
    FUN_049057f0(&puStack_240,auStack_3a8);
    func_0x048aea50(auStack_3a8);
    pcStack_1f8 = pcStack_230;
    pcStack_1f0 = uStack_228;
    puStack_208 = puStack_240;
    puStack_200 = puStack_238;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551bc8), iVar6 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_3a8._0_4_ = _DAT_0f551bb4;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef46c48;
    plVar13[3] = (long)puVar12;
    plVar13[4] = 0;
    *(undefined1 *)(plVar13 + 5) = 0xff;
    auStack_3a8._8_8_ = plVar13 + 3;
    auStack_1a8 = (undefined1  [16])0x0;
    uStack_398 = plVar13;
    func_0x048afd20(&puStack_208,auStack_3a8);
    plVar13 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar20 = uStack_398 + 1;
      lVar11 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar16 = auStack_1a8._8_8_;
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_1a8._8_8_ + 8);
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_1a8._8_8_ + 0x10))(auStack_1a8._8_8_);
        func_0x0412c2d0(uVar16);
      }
    }
    if ((DAT_0f761818 == '\0') && (iVar6 = FUN_04108328(&DAT_0f761818), iVar6 != 0)) {
      func_0x0e813620();
      func_0x0410844d(&DAT_0f761818);
    }
    if (uStack_228._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(pcStack_230 + 0x78) + 0x60);
      iVar6 = *piVar14;
      while (iVar6 != (int)uStack_228) {
        piVar14 = piVar14 + 0x16;
        iVar6 = *piVar14;
      }
      puVar8 = *(undefined **)(piVar14 + 0xc);
      while (puVar8 != puStack_238) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar8 = *(undefined **)(piVar14 + 0xc);
      }
LAB_0e80955f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 2;
    }
    else {
      if (uStack_228._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(pcStack_230 + 0x78) + 0x48);
        iVar6 = *piVar14;
        while (iVar6 != (int)uStack_228) {
          piVar14 = piVar14 + 0x1a;
          iVar6 = *piVar14;
        }
        goto LAB_0e80955f;
      }
      if (uStack_228._4_4_ == 0) {
        *(uint *)(pcStack_230 + 0x18) = *(uint *)(pcStack_230 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f761818 == '\0') && (iVar6 = FUN_04108328(&DAT_0f761818), iVar6 != 0)) {
      func_0x0e813620();
      func_0x0410844d(&DAT_0f761818);
    }
    auStack_3a8._0_4_ = 0xbf75c8f8;
    auStack_3a8._8_8_ = 0;
    uStack_398 = (long *)CONCAT44(uStack_398._4_4_,1);
    _auStack_390 = ZEXT816(0x48b2190) << 0x40;
    auStack_380._8_8_ = &UNK_0e87f180;
    auStack_380._0_8_ = &SUB_048b06d0;
    lStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_35f = 0;
    uStack_35d = 0;
    uStack_35c = 0;
    plStack_358 = (long *)0x0;
    FUN_049057f0(&puStack_240,auStack_3a8);
    func_0x048aea50(auStack_3a8);
    pcStack_1f8 = pcStack_230;
    pcStack_1f0 = uStack_228;
    puStack_208 = puStack_240;
    puStack_200 = puStack_238;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551cb0), iVar6 != 0)) {
      FUN_04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_3a8._0_4_ = _DAT_0f551c9c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
    *plVar13 = (long)&UNK_0ef46c98;
    plVar13[3] = (long)puVar12;
    *(undefined1 *)(plVar13 + 4) = 0xff;
    auStack_3a8._8_8_ = plVar13 + 3;
    auStack_1a8 = (undefined1  [16])0x0;
    uStack_398 = plVar13;
    func_0x048afd20(&puStack_208,auStack_3a8);
    plVar13 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar20 = uStack_398 + 1;
      lVar11 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar16 = auStack_1a8._8_8_;
    if ((long *)auStack_1a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_1a8._8_8_ + 8);
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_1a8._8_8_ + 0x10))(auStack_1a8._8_8_);
        func_0x0412c2d0(uVar16);
      }
    }
    if ((uVar18 & 1) != 0) {
      func_0x0412a280(uStack_3b0,uVar21 | (byte)uVar18 & 0xfe);
    }
    lVar11 = lStack_170;
    if ((auStack_2d8[0] & 1) != 0) {
      func_0x0412a280(puStack_2c8,auStack_2d8._0_8_ & 0xfffffffffffffffe);
      lVar11 = lStack_170;
    }
  }
  lVar11 = func_0x0db7ab50(lVar11);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar17 = lVar11 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar11 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0e87f320(&puStack_248,param_1,lVar17,uVar18);
  }
  else {
    func_0x0e87f320(&puStack_248,param_1,&UNK_012b8eb9,0x11);
  }
  if ((char)uStack_218 != '\0') {
    return;
  }
  puVar8 = puStack_248 + 0x18;
  lVar11 = func_0x0db7ab50(puVar8);
  for (pbVar10 = *(byte **)(puStack_248 + 0x50); pbVar10 != *(byte **)(puStack_248 + 0x58);
      pbVar10 = pbVar10 + 0x38) {
    bVar1 = *pbVar10;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e80987a;
    }
    else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0e80987a:
      if ((bVar1 & 1) == 0) {
        pbVar19 = pbVar10 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar10 + 0x10);
      }
      auVar24[0] = -(*pbVar19 == DAT_014eaba0);
      auVar24[1] = -(pbVar19[1] == DAT_014eaba0._1_1_);
      auVar24[2] = -(pbVar19[2] == DAT_014eaba0._2_1_);
      auVar24[3] = -(pbVar19[3] == DAT_014eaba0._3_1_);
      auVar24[4] = -(pbVar19[4] == DAT_014eaba0._4_1_);
      auVar24[5] = -(pbVar19[5] == DAT_014eaba0._5_1_);
      auVar24[6] = -(pbVar19[6] == DAT_014eaba0._6_1_);
      auVar24[7] = -(pbVar19[7] == DAT_014eaba0._7_1_);
      auVar24[8] = -(pbVar19[8] == DAT_014eaba0._8_1_);
      auVar24[9] = -(pbVar19[9] == DAT_014eaba0._9_1_);
      auVar24[10] = -(pbVar19[10] == DAT_014eaba0._10_1_);
      auVar24[0xb] = -(pbVar19[0xb] == DAT_014eaba0._11_1_);
      auVar24[0xc] = -(pbVar19[0xc] == DAT_014eaba0._12_1_);
      auVar24[0xd] = -(pbVar19[0xd] == DAT_014eaba0._13_1_);
      auVar24[0xe] = -(pbVar19[0xe] == DAT_014eaba0._14_1_);
      auVar24[0xf] = -(pbVar19[0xf] == DAT_014eaba0._15_1_);
      auVar26[0] = -(pbVar19[10] == DAT_014e4ff0);
      auVar26[1] = -(pbVar19[0xb] == DAT_014e4ff0._1_1_);
      auVar26[2] = -(pbVar19[0xc] == DAT_014e4ff0._2_1_);
      auVar26[3] = -(pbVar19[0xd] == DAT_014e4ff0._3_1_);
      auVar26[4] = -(pbVar19[0xe] == DAT_014e4ff0._4_1_);
      auVar26[5] = -(pbVar19[0xf] == DAT_014e4ff0._5_1_);
      auVar26[6] = -(pbVar19[0x10] == DAT_014e4ff0._6_1_);
      auVar26[7] = -(pbVar19[0x11] == DAT_014e4ff0._7_1_);
      auVar26[8] = -(pbVar19[0x12] == DAT_014e4ff0._8_1_);
      auVar26[9] = -(pbVar19[0x13] == DAT_014e4ff0._9_1_);
      auVar26[10] = -(pbVar19[0x14] == DAT_014e4ff0._10_1_);
      auVar26[0xb] = -(pbVar19[0x15] == DAT_014e4ff0._11_1_);
      auVar26[0xc] = -(pbVar19[0x16] == DAT_014e4ff0._12_1_);
      auVar26[0xd] = -(pbVar19[0x17] == DAT_014e4ff0._13_1_);
      auVar26[0xe] = -(pbVar19[0x18] == DAT_014e4ff0._14_1_);
      auVar26[0xf] = -(pbVar19[0x19] == DAT_014e4ff0._15_1_);
      auVar26 = auVar26 & auVar24;
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
  if (pbVar10 == *(byte **)(puStack_248 + 0x58)) {
LAB_0e8098a9:
    if ((int)uStack_220 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0e80991d;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_3a8._0_8_ = FUN_048b0c90(puVar8,lVar11,uStack_220._4_4_,1);
      if (auStack_3a8._0_8_ == 0) {
        auStack_3a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_3a8);
        if (auStack_3a8._0_8_ == 0) goto LAB_0e80991d;
      }
      if ((*(int *)(auStack_3a8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_3a8._0_8_ + 0x58) != 0)) {
        lVar11 = *(long *)(auStack_3a8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e80991d:
        lVar11 = 0;
      }
    }
    plStack_2a8 = (long *)&UNK_0488e0b0;
    pcStack_2a0 = (code *)0x0;
    pcStack_298 = (code *)CONCAT35(pcStack_298._5_3_,0x48b5725f);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auStack_2b8._8_8_;
    auStack_2b8 = auVar2 << 0x40;
    auStack_3a8 = (undefined1  [16])0x0;
    _auStack_390 = ZEXT816(0x488e0b0);
    auStack_380._0_5_ = 0x48b5725f;
    puStack_2c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_2c8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar16 = _UNK_013bbadf;
    auStack_2d8._8_8_ = 0x1a;
    auStack_2d8._0_8_ = 0x21;
    *(ulong *)((long)puStack_2c8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_2c8 + 0x12) = uVar16;
    uVar16 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_2c8 = _DAT_013bbacd;
    puStack_2c8[1] = uVar16;
    *(undefined1 *)((long)puStack_2c8 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,auStack_2d8);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_3a8) {
      pcVar15 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar12 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar12);
        if (auStack_380[4] != '\0') {
          if (auStack_380[4] == '\x02') {
            (*(code *)auStack_390)(5,auStack_3a8 + 8,puVar12);
          }
          else {
            uVar16 = auStack_3a8._8_8_;
            auStack_3a8._8_8_ = 0;
            *puVar12 = uVar16;
          }
        }
      }
      *(undefined1 (*) [8])(lVar11 + 0x38) = auStack_390;
      *(code **)(lVar11 + 0x40) = pcStack_388;
      *(undefined4 *)(lVar11 + 0x48) = auStack_380._0_4_;
      *(char *)(lVar11 + 0x4c) = auStack_380[4];
      pcVar15 = pcStack_388;
    }
    if ((auStack_2d8[0] & 1) != 0) {
      func_0x0412a280(puStack_2c8,auStack_2d8._0_8_ & 0xfffffffffffffffe);
      pcVar15 = pcStack_388;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(auStack_3a8 + 8);
    }
    if (pcStack_2a0 != (code *)0x0) {
      (*pcStack_2a0)(auStack_2b8);
    }
  }
  else {
    iVar6 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0e8098a9;
  }
  uStack_178 = uStack_218;
  pcStack_188 = uStack_228;
  uStack_180 = uStack_220;
  puStack_198 = (undefined8 *)puStack_238;
  pcStack_190 = pcStack_230;
  auStack_1a8._8_8_ = puStack_240;
  auStack_1a8._0_8_ = puStack_248;
  puStack_208 = puStack_248;
  puStack_200 = puStack_240;
  pcStack_1f8 = (code *)puStack_238;
  pcStack_1f0 = pcStack_230;
  pcStack_1e8 = uStack_228;
  uStack_1e0 = uStack_220;
  uStack_1d8 = uStack_218;
  if ((DAT_0f7377b0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f7377b0), iVar6 != 0)) {
    func_0x0db7aae0(0xf737798);
    func_0x0410844d(&DAT_0f7377b0);
  }
  uStack_1e0 = 0x28a5a83e00000001;
  puVar8 = puStack_208 + 0x18;
  auStack_3a8._0_8_ = func_0x0db7ab50(puVar8);
  auStack_3a8._8_8_ = puVar8;
  func_0x0ed621a0(auStack_3a8,uStack_1e0._4_4_);
  auStack_3a8._0_2_ = 1;
  auStack_3a8._8_8_ = &puStack_200;
  uStack_398 = (long *)CONCAT44(uStack_398._4_4_,uStack_1e0._4_4_);
  _auStack_390 = (undefined1  [16])0x0;
  auStack_380 = (undefined1  [16])0x0;
  lStack_370 = 0;
  uStack_368 = 0x65646914;
  uStack_364 = 0x6669746e;
  uStack_360 = 0x69;
  uStack_35f = 0x7265;
  uStack_35d = 0;
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
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4ce4d0;
  auVar3 = auStack_390;
  auStack_390 = (undefined1  [8])puVar12;
  if (auVar3 != (undefined1  [8])0x0) {
    (**(code **)(*(long *)auVar3 + 8))();
  }
  auStack_2b8._0_4_ = (undefined4)uStack_398;
  auStack_2b8._8_8_ = 0;
  plStack_2a8 = (long *)((ulong)plStack_2a8 & 0xffffffff00000000);
  pcStack_2a0 = (code *)0x1;
  pcStack_298 = (code *)0x0;
  uStack_290 = &UNK_0e87fe00;
  puStack_288 = &SUB_048b06d0;
  puStack_280 = &UNK_0e87d6a0;
  puStack_278 = &UNK_0e87fec0;
  puStack_270 = &UNK_0e880080;
  uStack_268 = 0;
  auStack_260._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_3a8._8_8_,auStack_2b8);
  uVar16 = auStack_260._8_8_;
  if ((long *)auStack_260._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_260._8_8_ + 8);
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_260._8_8_ + 0x10))(auStack_260._8_8_);
      func_0x0412c2d0(uVar16);
    }
  }
  uVar16 = auStack_3a8._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar6 = FUN_04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_2b8._0_4_ = _DAT_0f550a0c;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  *(undefined1 (*) [16])(plVar13 + 1) = (undefined1  [16])0x0;
  *plVar13 = (long)&UNK_0ef439d0;
  auVar3 = auStack_390;
  pcVar15 = pcStack_388;
  _auStack_390 = (undefined1  [16])0x0;
  plVar13[3] = (long)auVar3;
  plVar13[4] = (long)pcVar15;
  plVar13[7] = lStack_370;
  plVar13[5] = auStack_380._0_8_;
  plVar13[6] = auStack_380._8_8_;
  auStack_380 = (undefined1  [16])0x0;
  lStack_370 = 0;
  plVar13[10] = (long)plStack_358;
  plVar13[8] = CONCAT44(uStack_364,uStack_368);
  plVar13[9] = CONCAT44(uStack_35c,CONCAT13(uStack_35d,CONCAT21(uStack_35f,uStack_360)));
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  plStack_358 = (long *)0x0;
  plVar13[0xb] = auStack_350._0_8_;
  plVar13[0xc] = auStack_350._8_8_;
  plVar13[0xd] = lStack_340;
  auStack_350 = (undefined1  [16])0x0;
  lStack_340 = 0;
  plVar13[0xe] = lStack_338;
  plVar13[0xf] = lStack_330;
  plVar13[0x10] = lStack_328;
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  *(undefined4 *)(plVar13 + 0x11) = uStack_320;
  plVar13[0x12] = auStack_318._0_8_;
  plVar13[0x13] = auStack_318._8_8_;
  plVar13[0x14] = lStack_308;
  auStack_318 = (undefined1  [16])0x0;
  lStack_308 = 0;
  plVar13[0x17] = lStack_2f0;
  plVar13[0x15] = lStack_300;
  plVar13[0x16] = lStack_2f8;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_2dc,CONCAT43(uStack_2e0,uStack_2e4._1_3_));
  plVar13[0x18] = CONCAT44(uStack_2e4,CONCAT22(uStack_2e6,uStack_2e8));
  auStack_2b8._8_8_ = plVar13 + 3;
  auStack_2d8 = (undefined1  [16])0x0;
  plStack_2a8 = plVar13;
  func_0x048afd20(uVar16,auStack_2b8);
  plVar13 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_2a8 + 1;
    lVar11 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      func_0x0412c2d0(plVar13);
    }
  }
  uVar4 = auStack_2d8._8_8_;
  if ((long *)auStack_2d8._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_2d8._8_8_ + 8);
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_2d8._8_8_ + 0x10))(auStack_2d8._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  puVar8 = puStack_208;
  lVar11 = *(long *)(uVar16 + 0x10);
  iVar6 = *(int *)(uVar16 + 0x1c);
  if (iVar6 == 2) {
    piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
    iVar6 = *piVar14;
    while (iVar6 != *(int *)(uVar16 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar6 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(uVar16 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0e80a0aa:
    piVar14[4] = piVar14[4] | auStack_3a8._0_4_ << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
      iVar6 = *piVar14;
      while (iVar6 != *(int *)(uVar16 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar6 = *piVar14;
      }
      goto LAB_0e80a0aa;
    }
    if (iVar6 == 0) {
      *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | auStack_3a8._0_4_ << 0x10;
    }
  }
  iVar6 = (int)uStack_1e0;
  uVar5 = uStack_1e0._4_4_;
  func_0x048b0bc0(auStack_390);
  lStack_340 = 0;
  lStack_338 = 0;
  auStack_350 = (undefined1  [16])0x0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  plStack_358 = (long *)0x0;
  lStack_370 = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  auStack_380 = (undefined1  [16])0x0;
  lStack_330 = 0;
  uStack_398 = (long *)0x0;
  stack0xfffffffffffffc71 = SUB1615((undefined1  [16])0x0,1);
  auStack_390[0] = 0xff;
  auStack_3a8._8_8_ = 0xffffffffffffffff;
  auStack_3a8._0_8_ = &UNK_0f4e3c70;
  func_0x041679a0(&pcStack_388);
  uVar16 = FUN_041681f0(&pcStack_388,0xf547a30);
  auStack_380._0_8_ = uVar16;
  uVar16 = FUN_041681f0(&pcStack_388,0xf547770);
  lStack_370 = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  plStack_358 = (long *)0x0;
  auStack_350 = (undefined1  [16])0x0;
  lStack_340 = 0;
  lStack_338 = 0;
  lStack_330 = 0;
  auStack_380._8_8_ = uVar16;
  if ((DAT_0f761788 & 1) == 0) {
    uStack_1b8 = _DAT_0f761798;
    uStack_1c8 = CONCAT71(uRam000000000f761789,DAT_0f761788);
    uStack_1c0 = _DAT_0f761790;
  }
  else {
    func_0x0412e5e0(&uStack_1c8,_DAT_0f761798,_DAT_0f761790);
  }
  func_0x0ed60210(auStack_3a8,&uStack_1c8,0);
  uStack_b0 = auStack_390[0];
  uStack_c0 = auStack_3a8._8_8_;
  uStack_b8 = uStack_398;
  puStack_c8 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_a8,&pcStack_388);
  uStack_a0 = auStack_380._0_8_;
  uStack_98 = auStack_380._8_8_;
  uStack_88 = CONCAT44(uStack_364,uStack_368);
  uStack_90 = lStack_370;
  auStack_80._0_8_ = CONCAT44(uStack_35c,CONCAT13(uStack_35d,CONCAT21(uStack_35f,uStack_360)));
  auStack_80._8_8_ = plStack_358;
  if (plStack_358 != (long *)0x0) {
    LOCK();
    plStack_358[1] = plStack_358[1] + 1;
    UNLOCK();
  }
  uStack_70 = auStack_350._0_8_;
  if ((auStack_350[8] & 1) == 0) {
    uStack_58 = lStack_338;
    auStack_68._8_8_ = lStack_340;
    auStack_68._0_8_ = auStack_350._8_8_;
  }
  else {
    func_0x0412e5e0(auStack_68,lStack_338,lStack_340);
  }
  uStack_50 = lStack_330;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0;
  uStack_150 = 0xff;
  puStack_168 = &UNK_0f4cc200;
  uStack_140 = uStack_c0;
  uStack_138 = uStack_b8;
  uStack_130 = uStack_b0;
  puStack_148 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_128,auStack_a8);
  uStack_120 = uStack_a0;
  uStack_118 = uStack_98;
  uStack_110 = uStack_90;
  uStack_108 = uStack_88;
  auStack_100._8_8_ = auStack_80._8_8_;
  auStack_100._0_8_ = auStack_80._0_8_;
  auStack_80 = (undefined1  [16])0x0;
  uStack_f0 = uStack_70;
  uStack_d8 = uStack_58;
  auStack_e8 = auStack_68;
  auStack_68 = (undefined1  [16])0x0;
  uStack_58 = 0;
  uStack_d0 = uStack_50;
  if (iVar6 == 4) {
    uVar16 = func_0x0db7ab50(puVar8 + 0x18);
    lVar11 = func_0x048b1040(puVar8 + 0x18,uVar16,uVar5,1);
    if (lVar11 == 0) {
      auStack_2b8 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_2b8);
      lVar17 = *(long *)(auStack_2b8._0_8_ + 0x38);
      lVar11 = auStack_2b8._0_8_;
      if (lVar17 == 0) goto LAB_0e80a4a0;
LAB_0e80a4c7:
      do {
        lVar11 = lVar17;
        lVar17 = *(long *)(lVar11 + 0x38);
        if (*(long *)(lVar11 + 0x38) == 0) {
          auStack_2b8 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_2b8);
          lVar17 = auStack_2b8._0_8_;
        }
      } while (lVar17 != 0);
    }
    else {
      lVar17 = *(long *)(lVar11 + 0x38);
      if (*(long *)(lVar11 + 0x38) != 0) goto LAB_0e80a4c7;
LAB_0e80a4a0:
      auStack_2b8 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_2b8);
      lVar17 = auStack_2b8._0_8_;
      if (auStack_2b8._0_8_ != 0) goto LAB_0e80a4c7;
    }
    lVar11 = *(long *)(lVar11 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
  }
  else {
    if (iVar6 != 1) goto LAB_0e80a614;
    uVar16 = func_0x0db7ab50(puVar8 + 0x18);
    lVar11 = FUN_048b0c90(puVar8 + 0x18,uVar16,uVar5,1);
    if (lVar11 == 0) {
      auStack_2b8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_2b8);
      lVar11 = auStack_2b8._0_8_;
    }
    lVar11 = *(long *)(lVar11 + 0x58);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
  }
  *(undefined1 *)(puVar12 + 3) = uStack_150;
  puVar12[1] = uStack_160;
  puVar12[2] = uStack_158;
  *puVar12 = &UNK_0f4cc200;
  puVar12[5] = uStack_140;
  puVar12[6] = uStack_138;
  *(undefined1 *)(puVar12 + 7) = uStack_130;
  puVar12[4] = &UNK_0f4e3c70;
  FUN_04167a20(puVar12 + 8,auStack_128);
  puVar12[9] = uStack_120;
  puVar12[10] = uStack_118;
  puVar12[0xb] = uStack_110;
  puVar12[0xc] = uStack_108;
  puVar12[0xd] = auStack_100._0_8_;
  puVar12[0xe] = auStack_100._8_8_;
  auStack_100 = (undefined1  [16])0x0;
  puVar12[0xf] = uStack_f0;
  puVar12[0x12] = uStack_d8;
  puVar12[0x10] = auStack_e8._0_8_;
  puVar12[0x11] = auStack_e8._8_8_;
  auStack_e8 = (undefined1  [16])0x0;
  uStack_d8 = 0;
  puVar12[0x13] = uStack_d0;
  plVar13 = *(long **)(lVar11 + 8);
  *(undefined8 **)(lVar11 + 8) = puVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x28))();
  }
LAB_0e80a614:
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar16 = _UNK_0123720e;
  puVar12[6] = _DAT_01237206;
  puVar12[7] = uVar16;
  uVar16 = _UNK_012371fe;
  puVar12[4] = _DAT_012371f6;
  puVar12[5] = uVar16;
  uVar16 = _UNK_012371ee;
  puVar12[2] = _DAT_012371e6;
  puVar12[3] = uVar16;
  uVar16 = _UNK_012371de;
  *puVar12 = _DAT_012371d6;
  puVar12[1] = uVar16;
  *(undefined8 *)((long)puVar12 + 0x3d) = 0x6563617073656d61;
  *(undefined1 *)((long)puVar12 + 0x45) = 0;
  uVar16 = func_0x0db7ab50(puVar8 + 0x18);
  lVar11 = FUN_048b0c90(puVar8 + 0x18,uVar16,0x28a5a83e,1);
  if (lVar11 == 0) {
    auStack_2b8 = (undefined1  [16])0x0;
    func_0x048b0d20(auStack_2b8);
    lVar11 = *(long *)(auStack_2b8._0_8_ + 0x58);
    bVar1 = *(byte *)(lVar11 + 0x90);
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x58);
    bVar1 = *(byte *)(lVar11 + 0x90);
  }
  if ((bVar1 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar11 + 0xa0),*(ulong *)(lVar11 + 0x90) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar11 + 0x90) = 0x49;
  *(undefined8 *)(lVar11 + 0x98) = 0x45;
  *(undefined8 **)(lVar11 + 0xa0) = puVar12;
  puStack_168 = &UNK_0f4cc200;
  puStack_148 = &UNK_0f4e3c70;
  if ((auStack_e8[0] & 1) != 0) {
    func_0x0412a280(uStack_d8,auStack_e8._0_8_ & 0xfffffffffffffffe);
  }
  uVar16 = auStack_100._8_8_;
  if ((long *)auStack_100._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_100._8_8_ + 8);
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_100._8_8_ + 0x10))(auStack_100._8_8_);
      func_0x0412c2d0(uVar16);
    }
  }
  func_0x04167a40(auStack_128);
  puStack_c8 = &UNK_0f4e3c70;
  if ((auStack_68[0] & 1) != 0) {
    func_0x0412a280(uStack_58,auStack_68._0_8_ & 0xfffffffffffffffe);
  }
  uVar16 = auStack_80._8_8_;
  if ((long *)auStack_80._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_80._8_8_ + 8);
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_80._8_8_ + 0x10))(auStack_80._8_8_);
      func_0x0412c2d0(uVar16);
    }
  }
  func_0x04167a40(auStack_a8);
  if ((uStack_1c8 & 1) == 0) {
    auStack_3a8._0_8_ = &UNK_0f4e3c70;
  }
  else {
    func_0x0412a280(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
    auStack_3a8._0_8_ = &UNK_0f4e3c70;
  }
  plVar13 = plStack_358;
  if ((auStack_350[8] & 1) != 0) {
    func_0x0412a280(lStack_338,auStack_350._8_8_ & 0xfffffffffffffffe);
    plVar13 = plStack_358;
  }
  plStack_358 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar20 = plVar13 + 1;
    lVar11 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&pcStack_388);
  return;
}



/* ---- referenced strings ----
 * 0x12371d6  identifier has an upper case letter or does not specify any namespace
 * 0x12371e6  n upper case letter or does not specify any namespace
 * 0x12371f6  ter or does not specify any namespace
 * 0x1237206  specify any namespace
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 * 0x14eaba0  [cereal:document
 */
