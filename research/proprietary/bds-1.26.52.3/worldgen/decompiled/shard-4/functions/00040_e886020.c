/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe986020 (ELF vaddr 0xe886020)
 * Label: caller-of-callee
 * Body:  [[0e986020, 0e986301] [0e986310, 0e986eb5] [0e986ec0, 0e987a2d] [0e987a30, 0e987a64] [0e987a70, 0e98876c]]
 * Ghidra: FUN_0e986020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e986020(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
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
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  byte *pbVar18;
  long lVar19;
  undefined *puVar20;
  byte *pbVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined1 *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined8 *puStack_238;
  long lStack_230;
  undefined1 auStack_228 [16];
  ulong uStack_218;
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  char cStack_d0;
  uint7 uStack_cf;
  ulong uStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  long lStack_38;
  
  func_0x0d8a0ff0();
  puStack_2c8 = &UNK_0142546c;
  puStack_2c0 = (undefined8 *)0xb;
  func_0x0470d9a0(auStack_208,&UNK_01337c1c,0x10,0xd,&puStack_2c8);
  bVar22 = (auStack_208[0] & 1) != 0;
  puVar20 = auStack_208 + 1;
  if (bVar22) {
    puVar20 = (undefined *)uStack_1f8;
  }
  uVar15 = (ulong)(auStack_208[0] >> 1);
  if (bVar22) {
    uVar15 = auStack_208._8_8_;
  }
  if ((DAT_0f76c8a0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8a0), iVar6 != 0)) {
    func_0x0eaffd20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f76c820,0xf53dab8);
    func_0x0410844d(&DAT_0f76c8a0);
  }
  lStack_38 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76c820 + 4)) * 8);
  do {
    lVar11 = *plVar13;
    if (lVar11 == -1) goto LAB_0e986101;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f76c820 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e986101:
    puVar8 = &DAT_0f76c820;
    iVar6 = iRam000000000f76c880;
  }
  else {
    puVar8 = (undefined *)plVar13[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar11 = *(long *)(puVar8 + 0x68), lVar11 != 0)) {
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar20 = (undefined *)(lVar11 + 9);
    if (bVar22) {
      puVar20 = *(undefined **)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0eb00320(&uStack_100,param_1,puVar20,uVar15);
  if ((auStack_208[0] & 1) != 0) {
    func_0x0412a280(uStack_1f8,auStack_208._0_8_ & 0xfffffffffffffffe);
  }
  if (cStack_d0 == '\0') {
    func_0x04134310(&uStack_78,0x15);
    pauVar9 = (undefined1 (*) [16])func_0x0412f0e0(&uStack_78,0,&UNK_013a2d09,0xe);
    uVar15 = uStack_100;
    puStack_238 = *(undefined8 **)pauVar9[1];
    auStack_248 = *pauVar9;
    *pauVar9 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar9[1] = 0;
    auStack_90 = (undefined1  [16])0x0;
    lStack_230 = CONCAT62(lStack_230._2_6_,0x400);
    auStack_228 = (undefined1  [16])0x0;
    uStack_218 = 0;
    uStack_80 = 0;
    if ((DAT_0f76c8a0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8a0), iVar6 != 0)) {
      func_0x0eaffd20();
      __cxa_atexit(&UNK_048ae800,&DAT_0f76c820,0xf53dab8);
      func_0x0410844d(&DAT_0f76c8a0);
    }
    plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f76c820 + 4)) * 8);
    do {
      lVar11 = *plVar13;
      if (lVar11 == -1) goto LAB_0e986280;
      plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f76c820 + 4)
            );
    if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e986280:
      puVar20 = &DAT_0f76c820;
    }
    else {
      puVar20 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(uStack_100 + 0x50); pbVar10 != *(byte **)(uStack_100 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar2 = *pbVar10;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0e98631a;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1d) {
LAB_0e98631a:
        if ((bVar2 & 1) == 0) {
          pbVar18 = pbVar10 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar10 + 0x10);
        }
        auVar23[0] = -(*pbVar18 == DAT_014e4030);
        auVar23[1] = -(pbVar18[1] == DAT_014e4030._1_1_);
        auVar23[2] = -(pbVar18[2] == DAT_014e4030._2_1_);
        auVar23[3] = -(pbVar18[3] == DAT_014e4030._3_1_);
        auVar23[4] = -(pbVar18[4] == DAT_014e4030._4_1_);
        auVar23[5] = -(pbVar18[5] == DAT_014e4030._5_1_);
        auVar23[6] = -(pbVar18[6] == DAT_014e4030._6_1_);
        auVar23[7] = -(pbVar18[7] == DAT_014e4030._7_1_);
        auVar23[8] = -(pbVar18[8] == DAT_014e4030._8_1_);
        auVar23[9] = -(pbVar18[9] == DAT_014e4030._9_1_);
        auVar23[10] = -(pbVar18[10] == DAT_014e4030._10_1_);
        auVar23[0xb] = -(pbVar18[0xb] == DAT_014e4030._11_1_);
        auVar23[0xc] = -(pbVar18[0xc] == DAT_014e4030._12_1_);
        auVar23[0xd] = -(pbVar18[0xd] == DAT_014e4030._13_1_);
        auVar23[0xe] = -(pbVar18[0xe] == DAT_014e4030._14_1_);
        auVar23[0xf] = -(pbVar18[0xf] == DAT_014e4030._15_1_);
        auVar24[0] = -(pbVar18[0xd] == DAT_014e1610);
        auVar24[1] = -(pbVar18[0xe] == DAT_014e1610._1_1_);
        auVar24[2] = -(pbVar18[0xf] == DAT_014e1610._2_1_);
        auVar24[3] = -(pbVar18[0x10] == DAT_014e1610._3_1_);
        auVar24[4] = -(pbVar18[0x11] == DAT_014e1610._4_1_);
        auVar24[5] = -(pbVar18[0x12] == DAT_014e1610._5_1_);
        auVar24[6] = -(pbVar18[0x13] == DAT_014e1610._6_1_);
        auVar24[7] = -(pbVar18[0x14] == DAT_014e1610._7_1_);
        auVar24[8] = -(pbVar18[0x15] == DAT_014e1610._8_1_);
        auVar24[9] = -(pbVar18[0x16] == DAT_014e1610._9_1_);
        auVar24[10] = -(pbVar18[0x17] == DAT_014e1610._10_1_);
        auVar24[0xb] = -(pbVar18[0x18] == DAT_014e1610._11_1_);
        auVar24[0xc] = -(pbVar18[0x19] == DAT_014e1610._12_1_);
        auVar24[0xd] = -(pbVar18[0x1a] == DAT_014e1610._13_1_);
        auVar24[0xe] = -(pbVar18[0x1b] == DAT_014e1610._14_1_);
        auVar24[0xf] = -(pbVar18[0x1c] == DAT_014e1610._15_1_);
        auVar24 = auVar24 & auVar23;
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
    if (pbVar10 == *(byte **)(uStack_100 + 0x58)) {
LAB_0e986348:
      uVar4 = uStack_d4;
      if (iStack_d8 == 0) {
        if (((puVar20 == (undefined *)0x0) || (*(int *)(puVar20 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar20 + 0x68) == 0)) goto LAB_0e9863d9;
        lVar11 = *(long *)(puVar20 + 0x68) + 0x38;
      }
      else {
        if (puVar20 == (undefined *)0x0) {
          puVar20 = (undefined *)func_0x048aead0(uVar15 + 0x18);
        }
        lVar11 = FUN_048b0c90(uVar15 + 0x18,puVar20,uVar4,1);
        if (lVar11 == 0) {
          auStack_208 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_208);
          lVar11 = auStack_208._0_8_;
          if (auStack_208._0_8_ == 0) goto LAB_0e9863d9;
        }
        if ((*(int *)(lVar11 + 0x50) == -0x45dcb126) && (*(long *)(lVar11 + 0x58) != 0)) {
          lVar11 = *(long *)(lVar11 + 0x58) + 0x40;
        }
        else {
LAB_0e9863d9:
          lVar11 = 0;
        }
      }
      puStack_2c8 = (undefined *)0x0;
      puStack_2b8 = &UNK_048b4ab0;
      pcStack_2b0 = (code *)&UNK_048b49f0;
      uStack_2a8 = CONCAT35(uStack_2a8._5_3_,0x1d33bd9c5);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      puVar12[2] = puStack_238;
      *puVar12 = auStack_248._0_8_;
      puVar12[1] = auStack_248._8_8_;
      auStack_248 = (undefined1  [16])0x0;
      puStack_238 = (undefined8 *)0x0;
      *(undefined2 *)(puVar12 + 3) = (undefined2)lStack_230;
      puVar12[4] = auStack_228._0_8_;
      puVar12[5] = auStack_228._8_8_;
      auStack_228._8_8_ = 0;
      puVar12[6] = uStack_218;
      uStack_218 = 0;
      pcStack_1f0 = (code *)&UNK_048b4ab0;
      pcStack_1e8 = (code *)&UNK_048b49f0;
      uStack_1e0 = (undefined *)CONCAT35(uStack_1e0._5_3_,0x1d33bd9c5);
      puStack_2c8 = (undefined *)0x0;
      auStack_208._8_8_ = puVar12;
      auStack_208._0_8_ = &UNK_048b46e0;
      puStack_b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_b8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_014d987e;
      uStack_c8 = 0x21;
      plStack_c0 = (long *)0x1d;
      *(ulong *)((long)puStack_b8 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_b8 + 0x15) = uVar3;
      uVar3 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_b8 = _DAT_014d9869;
      puStack_b8[1] = uVar3;
      *(undefined1 *)((long)puStack_b8 + 0x1d) = 0;
      lVar11 = func_0x048b5060(lVar11,&uStack_c8);
      *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
      pcVar17 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar11 + 0x20) != auStack_208) {
        puVar12 = (undefined8 *)(lVar11 + 0x28);
        if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0e9865c1:
          uVar3 = auStack_208._8_8_;
          auStack_208._8_8_ = 0;
          *puVar12 = uVar3;
        }
        else {
          (**(code **)(lVar11 + 0x40))(puVar12);
          if (uStack_1e0._4_1_ != '\0') {
            if (uStack_1e0._4_1_ != '\x02') goto LAB_0e9865c1;
            (*pcStack_1f0)(5,auStack_208 + 8,puVar12);
          }
        }
        *(code **)(lVar11 + 0x38) = pcStack_1f0;
        *(code **)(lVar11 + 0x40) = pcStack_1e8;
        *(undefined4 *)(lVar11 + 0x48) = (undefined4)uStack_1e0;
        *(char *)(lVar11 + 0x4c) = uStack_1e0._4_1_;
        pcVar17 = pcStack_1e8;
      }
      if ((uStack_c8 & 1) != 0) {
        func_0x0412a280(puStack_b8,uStack_c8 & 0xfffffffffffffffe);
        pcVar17 = pcStack_1e8;
      }
      if (pcVar17 != (code *)0x0) {
        (*pcVar17)(auStack_208 + 8);
      }
      if (pcStack_2b0 != (code *)0x0) {
        (*pcStack_2b0)(&puStack_2c8);
      }
    }
    else {
      iVar6 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550768), iVar7 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar6 == _DAT_0f550754) goto LAB_0e986348;
    }
    uStack_108 = CONCAT71(uStack_cf,cStack_d0);
    puStack_128 = puStack_f0;
    lStack_120 = lStack_e8;
    uStack_138 = uStack_100;
    puStack_130 = puStack_f8;
    auStack_118._8_8_ = 0x1e1bc4d500000004;
    auStack_118._0_8_ = uStack_e0;
    if ((DAT_0f76c8c0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8c0), iVar6 != 0)) {
      func_0x0eaffe30();
      func_0x0410844d(&DAT_0f76c8c0);
    }
    auStack_208._0_4_ = auStack_118._12_4_;
    auStack_208._8_8_ = 0;
    uStack_1f8 = (long *)((ulong)uStack_1f8._4_4_ << 0x20);
    pcStack_1f0 = (code *)0x3;
    pcStack_1e8 = (code *)&SUB_048aead0;
    uStack_1e0 = &UNK_0c0f6d10;
    puStack_1d8 = &UNK_0eb00e80;
    puStack_1d0 = (undefined *)0x0;
    uStack_1c8 = (undefined *)((ulong)uStack_1c8._4_4_ << 0x20);
    puStack_1c0 = (undefined *)0x0;
    plStack_1b8 = (long *)0x0;
    FUN_049057f0(&puStack_130,auStack_208);
    func_0x048aea50(auStack_208);
    puStack_2b8 = (undefined *)lStack_120;
    pcStack_2b0 = (code *)auStack_118._0_8_;
    puStack_2c8 = puStack_130;
    puStack_2c0 = puStack_128;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551bc8), iVar6 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_208._0_4_ = _DAT_0f551bb4;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef46c48;
    plVar13[3] = (long)puVar12;
    plVar13[4] = 0;
    *(undefined1 *)(plVar13 + 5) = 0xff;
    auStack_208._8_8_ = plVar13 + 3;
    uStack_c8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_1f8 = plVar13;
    func_0x048afd20(&puStack_2c8,auStack_208);
    plVar13 = uStack_1f8;
    if (uStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1f8 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_1f8 + 0x10))(uStack_1f8);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        func_0x0412c2d0(plVar13);
      }
    }
    if ((DAT_0f76c8c0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8c0), iVar6 != 0)) {
      func_0x0eaffe30();
      func_0x0410844d(&DAT_0f76c8c0);
    }
    if (auStack_118._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(lStack_120 + 0x78) + 0x60);
      iVar6 = *piVar14;
      while (iVar6 != auStack_118._0_4_) {
        piVar14 = piVar14 + 0x16;
        iVar6 = *piVar14;
      }
      puVar12 = *(undefined8 **)(piVar14 + 0xc);
      while (puVar12 != puStack_128) {
        piVar14 = *(int **)(piVar14 + 0xe);
        puVar12 = *(undefined8 **)(piVar14 + 0xc);
      }
LAB_0e9868ef:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 2;
    }
    else {
      if (auStack_118._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(lStack_120 + 0x78) + 0x48);
        iVar6 = *piVar14;
        while (iVar6 != auStack_118._0_4_) {
          piVar14 = piVar14 + 0x1a;
          iVar6 = *piVar14;
        }
        goto LAB_0e9868ef;
      }
      if (auStack_118._4_4_ == 0) {
        *(uint *)(lStack_120 + 0x18) = *(uint *)(lStack_120 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f76c8c0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8c0), iVar6 != 0)) {
      func_0x0eaffe30();
      func_0x0410844d(&DAT_0f76c8c0);
    }
    auStack_208._0_4_ = 0xbf75c8f8;
    auStack_208._8_8_ = 0;
    uStack_1f8 = (long *)CONCAT44(uStack_1f8._4_4_,1);
    pcStack_1f0 = (code *)0x0;
    pcStack_1e8 = (code *)&SUB_048b2190;
    uStack_1e0 = &SUB_048b06d0;
    puStack_1d8 = &UNK_0eb018c0;
    puStack_1d0 = (undefined *)0x0;
    uStack_1c8 = (undefined *)((ulong)uStack_1c8 & 0xffffffff00000000);
    puStack_1c0 = (undefined *)0x0;
    plStack_1b8 = (long *)0x0;
    FUN_049057f0(&puStack_130,auStack_208);
    func_0x048aea50(auStack_208);
    puStack_2b8 = (undefined *)lStack_120;
    pcStack_2b0 = (code *)auStack_118._0_8_;
    puStack_2c8 = puStack_130;
    puStack_2c0 = puStack_128;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551cb0), iVar6 != 0)) {
      FUN_04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_208._0_4_ = _DAT_0f551c9c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef46c98;
    plVar13[3] = (long)puVar12;
    *(undefined1 *)(plVar13 + 4) = 0xff;
    auStack_208._8_8_ = plVar13 + 3;
    uStack_c8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_1f8 = plVar13;
    func_0x048afd20(&puStack_2c8,auStack_208);
    plVar13 = uStack_1f8;
    if (uStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1f8 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_1f8 + 0x10))(uStack_1f8);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar15 = uStack_138;
    uVar4 = auStack_118._8_4_;
    uVar5 = auStack_118._12_4_;
    uStack_2a8 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    puStack_280 = (undefined *)0x0;
    plStack_278 = (long *)0x0;
    puStack_290 = (undefined *)0x0;
    puStack_288 = (undefined *)0x0;
    puStack_2a0 = (undefined *)0x0;
    puStack_298 = (undefined1 *)0x0;
    uStack_250 = 0;
    puStack_2c0 = (undefined8 *)0xffffffffffffffff;
    puStack_2b8 = (undefined *)0x0;
    pcStack_2b0 = (code *)0xff;
    puStack_2c8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_2a8);
    puStack_2a0 = (undefined *)FUN_041681f0(&uStack_2a8,0xf547a30);
    puStack_298 = (undefined1 *)FUN_041681f0(&uStack_2a8,0xf547770);
    puStack_290 = (undefined *)0x0;
    puStack_288 = (undefined *)0x0;
    puStack_280 = (undefined *)0x0;
    plStack_278 = (long *)0x0;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    puStack_2c0 = (undefined8 *)0x100;
    uStack_1f8 = (long *)puStack_2b8;
    pcStack_1f0 = (code *)CONCAT71(pcStack_1f0._1_7_,pcStack_2b0._0_1_);
    auStack_208._8_8_ = 0x100;
    auStack_208._0_8_ = &UNK_0f4e3c70;
    FUN_04167a20(&pcStack_1e8,&uStack_2a8);
    uStack_1e0 = puStack_2a0;
    puStack_1d8 = puStack_298;
    puStack_1d0 = puStack_290;
    uStack_1c8 = puStack_288;
    puStack_1c0 = puStack_280;
    plStack_1b8 = plStack_278;
    if (plStack_278 != (long *)0x0) {
      LOCK();
      plStack_278[1] = plStack_278[1] + 1;
      UNLOCK();
    }
    uStack_1b0 = uStack_270;
    if (((ulong)plStack_268 & 1) == 0) {
      uStack_198 = uStack_258;
      plStack_1a8 = plStack_268;
      uStack_1a0 = uStack_260;
    }
    else {
      func_0x0412e5e0(&plStack_1a8,uStack_258,uStack_260);
    }
    uStack_190 = uStack_250;
    if (uVar4 == 4) {
      if ((DAT_0f76c8a0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8a0), iVar6 != 0)) {
        func_0x0eaffd20();
        __cxa_atexit(&UNK_048ae800,&DAT_0f76c820,0xf53dab8);
        func_0x0410844d(&DAT_0f76c8a0);
      }
      plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f76c820 + 4)) * 8);
      do {
        lVar11 = *plVar13;
        if (lVar11 == -1) goto LAB_0e986d38;
        plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar11 * 0x18);
      } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar11 * 0x18) !=
               *(uint *)(_DAT_0f76c820 + 4));
      if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e986d38:
        puVar20 = &DAT_0f76c820;
      }
      else {
        puVar20 = (undefined *)plVar13[2];
      }
      uVar15 = func_0x048b1040(uVar15 + 0x18,puVar20,uVar5,1);
      if (uVar15 == 0) {
        uStack_c8 = 0;
        plStack_c0 = (long *)0x0;
        func_0x048b10d0(&uStack_c8);
        uVar16 = *(ulong *)(uStack_c8 + 0x38);
        uVar15 = uStack_c8;
        if (uVar16 == 0) goto LAB_0e986e87;
LAB_0e986eac:
        do {
          uVar15 = uVar16;
          uVar16 = *(ulong *)(uVar15 + 0x38);
          if (*(ulong *)(uVar15 + 0x38) == 0) {
            uStack_c8 = 0;
            plStack_c0 = (long *)0x0;
            func_0x048b10d0(&uStack_c8);
            uVar16 = uStack_c8;
          }
        } while (uVar16 != 0);
      }
      else {
        uVar16 = *(ulong *)(uVar15 + 0x38);
        if (*(ulong *)(uVar15 + 0x38) != 0) goto LAB_0e986eac;
LAB_0e986e87:
        uStack_c8 = 0;
        plStack_c0 = (long *)0x0;
        func_0x048b10d0(&uStack_c8);
        uVar16 = uStack_c8;
        if (uStack_c8 != 0) goto LAB_0e986eac;
      }
      lVar11 = *(long *)(uVar15 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0e986f14:
      *(undefined1 *)(puVar12 + 3) = pcStack_1f0._0_1_;
      puVar12[1] = auStack_208._8_8_;
      puVar12[2] = uStack_1f8;
      *puVar12 = &UNK_0f4e3c70;
      FUN_04167a20(puVar12 + 4,&pcStack_1e8);
      puVar12[5] = uStack_1e0;
      puVar12[6] = puStack_1d8;
      puVar12[7] = puStack_1d0;
      puVar12[8] = uStack_1c8;
      puVar12[9] = puStack_1c0;
      puVar12[10] = plStack_1b8;
      puStack_1c0 = (undefined *)0x0;
      plStack_1b8 = (long *)0x0;
      puVar12[0xb] = uStack_1b0;
      puVar12[0xe] = uStack_198;
      puVar12[0xc] = plStack_1a8;
      puVar12[0xd] = uStack_1a0;
      plStack_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      puVar12[0xf] = uStack_190;
      plVar13 = *(long **)(lVar11 + 8);
      *(undefined8 **)(lVar11 + 8) = puVar12;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (uVar4 == 1) {
      if ((DAT_0f76c8a0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c8a0), iVar6 != 0)) {
        func_0x0eaffd20();
        __cxa_atexit(&UNK_048ae800,&DAT_0f76c820,0xf53dab8);
        func_0x0410844d(&DAT_0f76c8a0);
      }
      plVar13 = (long *)(*(long *)(uVar15 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f76c820 + 4)) * 8);
      do {
        lVar11 = *plVar13;
        if (lVar11 == -1) goto LAB_0e986cc8;
        plVar13 = (long *)(*(long *)(uVar15 + 0x30) + lVar11 * 0x18);
      } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar11 * 0x18) !=
               *(uint *)(_DAT_0f76c820 + 4));
      if (plVar13 == *(long **)(uVar15 + 0x38)) {
LAB_0e986cc8:
        puVar20 = &DAT_0f76c820;
      }
      else {
        puVar20 = (undefined *)plVar13[2];
      }
      uVar15 = FUN_048b0c90(uVar15 + 0x18,puVar20,uVar5,1);
      if (uVar15 == 0) {
        uStack_c8 = 0;
        plStack_c0 = (long *)0x0;
        func_0x048b0d20(&uStack_c8);
        uVar15 = uStack_c8;
      }
      lVar11 = *(long *)(uVar15 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0e986f14;
    }
    auStack_208._0_8_ = &UNK_0f4e3c70;
    if (((ulong)plStack_1a8 & 1) != 0) {
      func_0x0412a280(uStack_198,(ulong)plStack_1a8 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1b8 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&pcStack_1e8);
    puStack_2c8 = &UNK_0f4e3c70;
    if (((ulong)plStack_268 & 1) != 0) {
      func_0x0412a280(uStack_258,(ulong)plStack_268 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_278;
    if (plStack_278 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_278 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_278 + 0x10))(plStack_278);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_2a8);
    if ((uStack_218 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
    }
    uStack_218 = 0;
    if ((auStack_228._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_228._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_228._8_8_ = 0;
    if ((auStack_248[0] & 1) != 0) {
      func_0x0412a280(puStack_238,auStack_248._0_8_ & 0xfffffffffffffffe);
    }
    if ((uStack_80 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
    }
    uStack_80 = 0;
    if ((auStack_90._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_90._8_8_ & 0xff00ffffffffffff) - 8)
      ;
    }
    if ((uStack_78 & 1) != 0) {
      func_0x0412a280(puStack_68,uStack_78 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f76c958 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76c958), iVar6 != 0)) {
    func_0x0eb01b20();
    __cxa_atexit(&UNK_048ae800,&DAT_0f76c8d8,0xf53dab8);
    func_0x0410844d(&DAT_0f76c958);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76c8d8 + 4)) * 8);
  do {
    lVar11 = *plVar13;
    if (lVar11 == -1) goto LAB_0e987200;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f76c8d8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e987200:
    puVar20 = &DAT_0f76c8d8;
    if (iRam000000000f76c938 != -0x2b3da790) goto LAB_0e98726d;
LAB_0e98722b:
    lVar11 = *(long *)(puVar20 + 0x68);
    if (lVar11 == 0) goto LAB_0e98726d;
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar19 = lVar11 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0eb02340(&uStack_100,param_1,lVar19,uVar15);
    puVar12 = puStack_238;
    lVar11 = lStack_230;
    puStack_238 = puStack_f0;
    lStack_230 = lStack_e8;
  }
  else {
    puVar20 = (undefined *)plVar13[2];
    if (*(int *)(puVar20 + 0x60) == -0x2b3da790) goto LAB_0e98722b;
LAB_0e98726d:
    func_0x0eb02340(&uStack_100,param_1,&UNK_012d2e79,0x27);
    puVar12 = puStack_238;
    lVar11 = lStack_230;
    puStack_238 = puStack_f0;
    lStack_230 = lStack_e8;
  }
  puStack_f0 = puStack_238;
  lStack_e8 = lStack_230;
  if (cStack_d0 == '\0') {
    uStack_218 = (ulong)uStack_cf << 8;
    auStack_228._12_4_ = uStack_d4;
    auStack_228._8_4_ = iStack_d8;
    auStack_228._0_8_ = uStack_e0;
    auStack_248._8_8_ = puStack_f8;
    auStack_248._0_8_ = uStack_100;
    func_0x0eb02ea0(auStack_208,auStack_248,&UNK_0120878e,8);
    pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar17 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar17 = &UNK_0f012348;
    if (pcStack_1f0 != (code *)0x0) {
      lVar11 = *(long *)pcStack_1f0;
      pcStack_1f0 = pcVar17;
      (**(code **)(lVar11 + 8))();
      pcVar17 = pcStack_1f0;
    }
    pcStack_1f0 = pcVar17;
    puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
    puStack_2c0 = (undefined8 *)0x0;
    puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
    pcStack_2b0 = (code *)0x1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_05ea71a0;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &SUB_05e9fca0;
    puStack_288 = &UNK_0eb03440;
    puStack_280 = &UNK_0eb03650;
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
    plVar13 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0eb03140(auStack_208);
    uStack_108 = CONCAT71(uStack_108._1_7_,(undefined1)uStack_218);
    auStack_118 = auStack_228;
    puStack_128 = puStack_238;
    lStack_120 = lStack_230;
    uStack_138 = auStack_248._0_8_;
    puStack_130 = (undefined *)auStack_248._8_8_;
    func_0x048b0bc0(&pcStack_1f0);
    func_0x0eb02ea0(auStack_208,&uStack_138,&UNK_0137f4f8,7);
    pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar17 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar17 = &UNK_0f4d8bf8;
    if (pcStack_1f0 != (code *)0x0) {
      lVar11 = *(long *)pcStack_1f0;
      pcStack_1f0 = pcVar17;
      (**(code **)(lVar11 + 8))();
      pcVar17 = pcStack_1f0;
    }
    pcStack_1f0 = pcVar17;
    puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
    puStack_2c0 = (undefined8 *)0x0;
    puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
    pcStack_2b0 = (code *)0x1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_0eb03a50;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0eaffc60;
    puStack_288 = &UNK_0eb03b10;
    puStack_280 = &UNK_0eb03ce0;
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
    plVar13 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0eb03140(auStack_208);
    func_0x048b0bc0(&pcStack_1f0);
    puVar12 = puStack_238;
    lVar11 = lStack_230;
  }
  lStack_230 = lVar11;
  puStack_238 = puVar12;
  if ((DAT_0f76ca10 == '\0') && (iVar6 = FUN_04108328(&DAT_0f76ca10), iVar6 != 0)) {
    func_0x0eb04220();
    __cxa_atexit(&UNK_048ae800,&DAT_0f76c990,0xf53dab8);
    func_0x0410844d(&DAT_0f76ca10);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76c990 + 4)) * 8);
  do {
    lVar11 = *plVar13;
    if (lVar11 == -1) goto LAB_0e9875e0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f76c990 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e9875e0:
    puVar20 = &DAT_0f76c990;
    if (iRam000000000f76c9f0 != -0x2b3da790) goto LAB_0e98764d;
LAB_0e98760b:
    lVar11 = *(long *)(puVar20 + 0x68);
    if (lVar11 == 0) goto LAB_0e98764d;
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar19 = lVar11 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0eb04810(&uStack_100,param_1,lVar19,uVar15);
    puVar12 = puStack_238;
    lVar11 = lStack_230;
    puStack_238 = puStack_f0;
    lStack_230 = lStack_e8;
  }
  else {
    puVar20 = (undefined *)plVar13[2];
    if (*(int *)(puVar20 + 0x60) == -0x2b3da790) goto LAB_0e98760b;
LAB_0e98764d:
    func_0x0eb04810(&uStack_100,param_1,&UNK_011cf950,0x1b);
    puVar12 = puStack_238;
    lVar11 = lStack_230;
    puStack_238 = puStack_f0;
    lStack_230 = lStack_e8;
  }
  puStack_f0 = puStack_238;
  lStack_e8 = lStack_230;
  if (cStack_d0 == '\0') {
    uStack_218 = (ulong)uStack_cf << 8;
    auStack_228._12_4_ = uStack_d4;
    auStack_228._8_4_ = iStack_d8;
    auStack_228._0_8_ = uStack_e0;
    auStack_248._8_8_ = puStack_f8;
    auStack_248._0_8_ = uStack_100;
    func_0x0eb05380(auStack_208,auStack_248,&UNK_013762e9,10);
    pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar17 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar17 = &UNK_0ef44b00;
    if (pcStack_1f0 != (code *)0x0) {
      lVar11 = *(long *)pcStack_1f0;
      pcStack_1f0 = pcVar17;
      (**(code **)(lVar11 + 8))();
      pcVar17 = pcStack_1f0;
    }
    pcStack_1f0 = pcVar17;
    puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
    puStack_2c0 = (undefined8 *)0x0;
    puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
    pcStack_2b0 = (code *)0x1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_048b3f30;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &SUB_048b2190;
    puStack_288 = &UNK_0eb05980;
    puStack_280 = &UNK_0eb05b40;
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
    plVar13 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0eb05680(auStack_208);
    uStack_108 = CONCAT71(uStack_108._1_7_,(undefined1)uStack_218);
    auStack_118 = auStack_228;
    puStack_128 = puStack_238;
    lStack_120 = lStack_230;
    uStack_138 = auStack_248._0_8_;
    puStack_130 = (undefined *)auStack_248._8_8_;
    func_0x048b0bc0(&pcStack_1f0);
    func_0x0eb05380(auStack_208,&uStack_138,&UNK_011e8778,0x17);
    pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar17 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar17 = &UNK_0f4d8ce0;
    if (pcStack_1f0 != (code *)0x0) {
      lVar11 = *(long *)pcStack_1f0;
      pcStack_1f0 = pcVar17;
      (**(code **)(lVar11 + 8))();
      pcVar17 = pcStack_1f0;
    }
    pcStack_1f0 = pcVar17;
    puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
    puStack_2c0 = (undefined8 *)0x0;
    puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
    pcStack_2b0 = (code *)0x1;
    uStack_2a8 = 0;
    puStack_2a0 = &UNK_0eb05f50;
    puStack_298 = &SUB_048b06d0;
    puStack_290 = &UNK_0eb01a60;
    puStack_288 = &UNK_0eb06010;
    puStack_280 = &UNK_0eb062f0;
    plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
    plVar13 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_268 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0eb05680(auStack_208);
    func_0x048b0bc0(&pcStack_1f0);
    puVar12 = puStack_238;
    lVar11 = lStack_230;
  }
  lStack_230 = lVar11;
  puStack_238 = puVar12;
  func_0x0e995070(param_1);
  func_0x0e991790(param_1);
  func_0x0e9b1070(param_1);
  lVar11 = func_0x0d69e230(lStack_38);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar19 = lVar11 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0eb271b0(&uStack_100,param_1,lVar19,uVar15);
  }
  else {
    func_0x0eb271b0(&uStack_100,param_1,&UNK_01394f0f,0xf);
  }
  if (cStack_d0 != '\0') {
    return;
  }
  lVar19 = uStack_100 + 0x18;
  lVar11 = func_0x0d69e230(lVar19);
  pbVar18 = *(byte **)(uStack_100 + 0x58);
  for (pbVar10 = *(byte **)(uStack_100 + 0x50); pbVar10 != pbVar18; pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e987a7a;
    }
    else if (*(long *)(pbVar10 + 8) == 0x24) {
LAB_0e987a7a:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar10 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar10 + 0x10);
      }
      iVar6 = bcmp(&DAT_014518a9,pbVar21,0x24);
      if (iVar6 == 0) break;
    }
  }
  if (pbVar10 != pbVar18) {
    iVar6 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550768), iVar7 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar6 != _DAT_0f550754) goto LAB_0e987d6b;
  }
  if (iStack_d8 == 0) {
    if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
    goto LAB_0e987b26;
    lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
  }
  else {
    lVar11 = FUN_048b0c90(lVar19,lVar11,uStack_d4,1);
    if (lVar11 == 0) {
      auStack_208 = ZEXT816(0);
      func_0x048b0d20(auStack_208);
      lVar11 = auStack_208._0_8_;
      if (auStack_208._0_8_ == 0) goto LAB_0e987b26;
    }
    if ((*(int *)(lVar11 + 0x50) == -0x45dcb126) && (*(long *)(lVar11 + 0x58) != 0)) {
      lVar11 = *(long *)(lVar11 + 0x58) + 0x40;
    }
    else {
LAB_0e987b26:
      lVar11 = 0;
    }
  }
  puStack_2c8 = (undefined *)0x0;
  puStack_2b8 = &UNK_048b4ab0;
  pcStack_2b0 = (code *)&UNK_048b49f0;
  uStack_2a8 = CONCAT35(uStack_2a8._5_3_,0x1d33bd9c5);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar12 = 0x6c63697472615028;
  puVar12[1] = 0x7463656666452065;
  puVar12[2] = 0x6174614420;
  *(undefined2 *)(puVar12 + 3) = 0xd01;
  puVar12[4] = 0x1000a00150001;
  puVar12[5] = &UNK_01254d89;
  puVar12[6] = &UNK_01254d89;
  pcStack_1f0 = (code *)&UNK_048b4ab0;
  pcStack_1e8 = (code *)&UNK_048b49f0;
  uStack_1e0 = (undefined *)CONCAT35(uStack_1e0._5_3_,0x1d33bd9c5);
  puStack_2c8 = (undefined *)0x0;
  auStack_208._8_8_ = puVar12;
  auStack_208._0_8_ = &UNK_048b46e0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_014518c1;
  uStack_138 = 0x29;
  puStack_130 = (undefined *)0x24;
  puVar12[2] = _DAT_014518b9;
  puVar12[3] = uVar3;
  uVar3 = _UNK_014518b1;
  *puVar12 = _DAT_014518a9;
  puVar12[1] = uVar3;
  *(undefined4 *)(puVar12 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar12 + 0x24) = 0;
  puStack_128 = puVar12;
  lVar11 = func_0x048b5060(lVar11,&uStack_138);
  *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
  pcVar17 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar11 + 0x20) != auStack_208) {
    puVar12 = (undefined8 *)(lVar11 + 0x28);
    if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0e987ce3:
      uVar3 = auStack_208._8_8_;
      auStack_208._8_8_ = 0;
      *puVar12 = uVar3;
    }
    else {
      (**(code **)(lVar11 + 0x40))(puVar12);
      if (uStack_1e0._4_1_ != '\0') {
        if (uStack_1e0._4_1_ != '\x02') goto LAB_0e987ce3;
        (*pcStack_1f0)(5,auStack_208 + 8,puVar12);
      }
    }
    *(code **)(lVar11 + 0x38) = pcStack_1f0;
    *(code **)(lVar11 + 0x40) = pcStack_1e8;
    *(undefined4 *)(lVar11 + 0x48) = (undefined4)uStack_1e0;
    *(char *)(lVar11 + 0x4c) = uStack_1e0._4_1_;
    pcVar17 = pcStack_1e8;
  }
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(puStack_128,uStack_138 & 0xfffffffffffffffe);
    pcVar17 = pcStack_1e8;
  }
  if (pcVar17 != (code *)0x0) {
    (*pcVar17)(auStack_208 + 8);
  }
  if (pcStack_2b0 != (code *)0x0) {
    (*pcStack_2b0)(&puStack_2c8);
  }
LAB_0e987d6b:
  cStack_48 = cStack_d0;
  uStack_50 = CONCAT44(uStack_d4,iStack_d8);
  uStack_58 = uStack_e0;
  puStack_68 = puStack_f0;
  lStack_60 = lStack_e8;
  uStack_78 = uStack_100;
  puStack_70 = puStack_f8;
  func_0x0eb27aa0(auStack_208,&uStack_78,&UNK_011ea907,0xb,1);
  pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar17 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar17 = &UNK_0f4d9da0;
  if (pcStack_1f0 != (code *)0x0) {
    lVar11 = *(long *)pcStack_1f0;
    pcStack_1f0 = pcVar17;
    (**(code **)(lVar11 + 8))();
    pcVar17 = pcStack_1f0;
  }
  pcStack_1f0 = pcVar17;
  puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
  pcStack_2b0 = (code *)0x1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_0eb281f0;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_0eb04160;
  puStack_288 = &UNK_0eb282b0;
  puStack_280 = &UNK_0eb28510;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
  plVar13 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0eb27ca0(auStack_208);
  cStack_98 = cStack_48;
  uStack_a8 = uStack_58;
  uStack_a0 = uStack_50;
  puStack_b8 = puStack_68;
  lStack_b0 = lStack_60;
  uStack_c8 = uStack_78;
  plStack_c0 = (long *)puStack_70;
  func_0x048b0bc0(&pcStack_1f0);
  func_0x0eb27aa0(auStack_208,&uStack_c8,&UNK_011ed181,10,1);
  pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar17 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar17 = &UNK_0f4d9e18;
  if (pcStack_1f0 != (code *)0x0) {
    lVar11 = *(long *)pcStack_1f0;
    pcStack_1f0 = pcVar17;
    (**(code **)(lVar11 + 8))();
    pcVar17 = pcStack_1f0;
  }
  pcStack_1f0 = pcVar17;
  puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
  pcStack_2b0 = (code *)0x1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_0eb28bb0;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_0eb06770;
  puStack_288 = &UNK_0eb28c70;
  puStack_280 = &UNK_0eb28fa0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
  plVar13 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0eb27ca0(auStack_208);
  uStack_218 = CONCAT71(uStack_218._1_7_,cStack_98);
  auStack_228._8_8_ = uStack_a0;
  auStack_228._0_8_ = uStack_a8;
  puStack_238 = puStack_b8;
  lStack_230 = lStack_b0;
  auStack_248._8_8_ = plStack_c0;
  auStack_248._0_8_ = uStack_c8;
  func_0x048b0bc0(&pcStack_1f0);
  func_0x0eb27aa0(auStack_208,auStack_248,&UNK_0135a5de,6,0);
  pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar17 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar17 = &UNK_0f4d9e90;
  if (pcStack_1f0 != (code *)0x0) {
    lVar11 = *(long *)pcStack_1f0;
    pcStack_1f0 = pcVar17;
    (**(code **)(lVar11 + 8))();
    pcVar17 = pcStack_1f0;
  }
  pcStack_1f0 = pcVar17;
  puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
  pcStack_2b0 = (code *)0x1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_0eb2f930;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_0eb2f560;
  puStack_288 = &UNK_0eb2f9f0;
  puStack_280 = &UNK_0eb2fd00;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
  plVar13 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0eb27ca0(auStack_208);
  uStack_108 = CONCAT71(uStack_108._1_7_,(undefined1)uStack_218);
  auStack_118 = auStack_228;
  puStack_128 = puStack_238;
  lStack_120 = lStack_230;
  uStack_138 = auStack_248._0_8_;
  puStack_130 = (undefined *)auStack_248._8_8_;
  func_0x048b0bc0(&pcStack_1f0);
  func_0x0eb27aa0(auStack_208,&uStack_138,&UNK_01416889,6,0);
  pcVar17 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar17 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar17 = &UNK_0f4da0a0;
  if (pcStack_1f0 != (code *)0x0) {
    lVar11 = *(long *)pcStack_1f0;
    pcStack_1f0 = pcVar17;
    (**(code **)(lVar11 + 8))();
    pcVar17 = pcStack_1f0;
  }
  pcStack_1f0 = pcVar17;
  puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(undefined4)uStack_1f8);
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined *)((ulong)puStack_2b8 & 0xffffffff00000000);
  pcStack_2b0 = (code *)0x1;
  uStack_2a8 = 0;
  puStack_2a0 = &UNK_0eb372f0;
  puStack_298 = &SUB_048b06d0;
  puStack_290 = &UNK_0eb36f20;
  puStack_288 = &UNK_0eb373b0;
  puStack_280 = &UNK_0eb376c0;
  plStack_278 = (long *)((ulong)plStack_278 & 0xffffffff00000000);
  uStack_270 = 0;
  plStack_268 = (long *)0x0;
  func_0x048b05a0(auStack_208._8_8_,&puStack_2c8);
  plVar13 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0eb27ca0(auStack_208);
  func_0x048b0bc0(&pcStack_1f0);
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
