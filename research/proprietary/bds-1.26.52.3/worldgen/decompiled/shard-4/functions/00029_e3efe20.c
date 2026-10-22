/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4efe20 (ELF vaddr 0xe3efe20)
 * Label: caller-of-callee
 * Body:  [[0e4efe20, 0e4f00e1] [0e4f00f0, 0e4f0f11] [0e4f0f20, 0e4f0fed] [0e4f0ff0, 0e4f1032] [0e4f1040, 0e4f1321] [0e4f1330, 0e4f1361] [0e4f1370, 0e4f1d6d]]
 * Ghidra: FUN_0e4efe20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4efe20(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined1 (*pauVar12) [16];
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  int *piVar17;
  code *pcVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long *plVar24;
  byte *pbVar25;
  ulong uVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_268;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  long lStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  undefined2 uStack_20f;
  undefined1 uStack_20d;
  undefined4 uStack_20c;
  long lStack_208;
  undefined1 auStack_200 [16];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined2 uStack_198;
  undefined2 uStack_196;
  uint uStack_194;
  uint uStack_190;
  undefined1 uStack_18c;
  undefined *puStack_188;
  long *plStack_180;
  long *plStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined *puStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [16];
  long *plStack_98;
  code *pcStack_90;
  code *pcStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  long *plStack_68;
  long *plStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  
  func_0x0e501380();
  puStack_188 = &UNK_01250be5;
  plStack_180 = (long *)0x13;
  func_0x0470d9a0(auStack_258,&UNK_013d851d,0xd,0xd,&puStack_188);
  bVar27 = (auStack_258[0] & 1) != 0;
  plVar16 = (long *)(auStack_258 + 1);
  if (bVar27) {
    plVar16 = uStack_248;
  }
  uVar19 = (ulong)(auStack_258[0] >> 1);
  if (bVar27) {
    uVar19 = auStack_258._8_8_;
  }
  if ((DAT_0f75c538 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c538), iVar9 != 0)) {
    func_0x0e678c70();
    __cxa_atexit(&UNK_048ae800,&DAT_0f75c4b8,0xf53dab8);
    func_0x0410844d(&DAT_0f75c538);
  }
  uVar23 = param_1 + 0x18;
  plVar24 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75c4b8 + 4)) * 8);
  do {
    lVar14 = *plVar24;
    if (lVar14 == -1) goto LAB_0e4eff01;
    plVar24 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f75c4b8 + 4))
  ;
  if (plVar24 == *(long **)(param_1 + 0x38)) {
LAB_0e4eff01:
    puVar11 = &DAT_0f75c4b8;
    iVar9 = iRam000000000f75c518;
  }
  else {
    puVar11 = (undefined *)plVar24[2];
    iVar9 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar9 == -0x2b3da790) && (lVar14 = *(long *)(puVar11 + 0x68), lVar14 != 0)) {
    bVar27 = (*(byte *)(lVar14 + 8) & 1) != 0;
    plVar16 = (long *)(lVar14 + 9);
    if (bVar27) {
      plVar16 = *(long **)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar27) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
  }
  func_0x0e679270(&puStack_150,param_1,plVar16,uVar19);
  if ((auStack_258[0] & 1) != 0) {
    func_0x0412a280(uStack_248,auStack_258._0_8_ & 0xfffffffffffffffe);
  }
  if ((char)puStack_120 == '\0') {
    func_0x04134310(&plStack_68,0xc);
    pauVar12 = (undefined1 (*) [16])func_0x0412f0e0(&plStack_68,0,&UNK_01284191,0xb);
    puVar11 = puStack_150;
    puStack_48 = *(undefined1 **)*pauVar12;
    uStack_40 = *(undefined8 *)(*pauVar12 + 8);
    uVar19 = *(ulong *)*pauVar12;
    uStack_268 = *(undefined8 *)pauVar12[1];
    *pauVar12 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar12[1] = 0;
    uStack_b0 = uVar23;
    if ((DAT_0f75c538 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c538), iVar9 != 0)) {
      func_0x0e678c70();
      __cxa_atexit(&UNK_048ae800,&DAT_0f75c4b8,0xf53dab8);
      func_0x0410844d(&DAT_0f75c538);
    }
    uVar26 = uVar19 & 0xffffffffffffff00;
    plVar16 = (long *)(*(long *)(puVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar11 + 0x20) - *(long *)(puVar11 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75c4b8 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_0e4f0060;
      plVar16 = (long *)(*(long *)(puVar11 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar11 + 0x30) + 8 + lVar14 * 0x18) !=
             *(uint *)(_DAT_0f75c4b8 + 4));
    if (plVar16 == *(long **)(puVar11 + 0x38)) {
LAB_0e4f0060:
      puVar22 = &DAT_0f75c4b8;
    }
    else {
      puVar22 = (undefined *)plVar16[2];
    }
    for (pbVar13 = *(byte **)(puStack_150 + 0x50); pbVar13 != *(byte **)(puStack_150 + 0x58);
        pbVar13 = pbVar13 + 0x38) {
      bVar1 = *pbVar13;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1d) goto LAB_0e4f00fa;
      }
      else if (*(long *)(pbVar13 + 8) == 0x1d) {
LAB_0e4f00fa:
        if ((bVar1 & 1) == 0) {
          pbVar20 = pbVar13 + 1;
        }
        else {
          pbVar20 = *(byte **)(pbVar13 + 0x10);
        }
        auVar28[0] = -(*pbVar20 == DAT_014e4030);
        auVar28[1] = -(pbVar20[1] == DAT_014e4030._1_1_);
        auVar28[2] = -(pbVar20[2] == DAT_014e4030._2_1_);
        auVar28[3] = -(pbVar20[3] == DAT_014e4030._3_1_);
        auVar28[4] = -(pbVar20[4] == DAT_014e4030._4_1_);
        auVar28[5] = -(pbVar20[5] == DAT_014e4030._5_1_);
        auVar28[6] = -(pbVar20[6] == DAT_014e4030._6_1_);
        auVar28[7] = -(pbVar20[7] == DAT_014e4030._7_1_);
        auVar28[8] = -(pbVar20[8] == DAT_014e4030._8_1_);
        auVar28[9] = -(pbVar20[9] == DAT_014e4030._9_1_);
        auVar28[10] = -(pbVar20[10] == DAT_014e4030._10_1_);
        auVar28[0xb] = -(pbVar20[0xb] == DAT_014e4030._11_1_);
        auVar28[0xc] = -(pbVar20[0xc] == DAT_014e4030._12_1_);
        auVar28[0xd] = -(pbVar20[0xd] == DAT_014e4030._13_1_);
        auVar28[0xe] = -(pbVar20[0xe] == DAT_014e4030._14_1_);
        auVar28[0xf] = -(pbVar20[0xf] == DAT_014e4030._15_1_);
        auVar30[0] = -(pbVar20[0xd] == DAT_014e1610);
        auVar30[1] = -(pbVar20[0xe] == DAT_014e1610._1_1_);
        auVar30[2] = -(pbVar20[0xf] == DAT_014e1610._2_1_);
        auVar30[3] = -(pbVar20[0x10] == DAT_014e1610._3_1_);
        auVar30[4] = -(pbVar20[0x11] == DAT_014e1610._4_1_);
        auVar30[5] = -(pbVar20[0x12] == DAT_014e1610._5_1_);
        auVar30[6] = -(pbVar20[0x13] == DAT_014e1610._6_1_);
        auVar30[7] = -(pbVar20[0x14] == DAT_014e1610._7_1_);
        auVar30[8] = -(pbVar20[0x15] == DAT_014e1610._8_1_);
        auVar30[9] = -(pbVar20[0x16] == DAT_014e1610._9_1_);
        auVar30[10] = -(pbVar20[0x17] == DAT_014e1610._10_1_);
        auVar30[0xb] = -(pbVar20[0x18] == DAT_014e1610._11_1_);
        auVar30[0xc] = -(pbVar20[0x19] == DAT_014e1610._12_1_);
        auVar30[0xd] = -(pbVar20[0x1a] == DAT_014e1610._13_1_);
        auVar30[0xe] = -(pbVar20[0x1b] == DAT_014e1610._14_1_);
        auVar30[0xf] = -(pbVar20[0x1c] == DAT_014e1610._15_1_);
        auVar30 = auVar30 & auVar28;
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
    if (pbVar13 == *(byte **)(puStack_150 + 0x58)) {
LAB_0e4f012a:
      if ((int)uStack_128 == 0) {
        if (((puVar22 == (undefined *)0x0) || (*(int *)(puVar22 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar22 + 0x68) == 0)) goto LAB_0e4f01b7;
        lVar14 = *(long *)(puVar22 + 0x68) + 0x38;
      }
      else {
        uVar7 = uStack_128._4_4_;
        if (puVar22 == (undefined *)0x0) {
          puVar22 = (undefined *)func_0x048aead0(puVar11 + 0x18);
        }
        lVar14 = FUN_048b0c90(puVar11 + 0x18,puVar22,uVar7,1);
        if (lVar14 == 0) {
          auStack_258 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_258);
          lVar14 = auStack_258._0_8_;
          if (auStack_258._0_8_ == 0) goto LAB_0e4f01b7;
        }
        if ((*(int *)(lVar14 + 0x50) == -0x45dcb126) && (*(long *)(lVar14 + 0x58) != 0)) {
          lVar14 = *(long *)(lVar14 + 0x58) + 0x40;
        }
        else {
LAB_0e4f01b7:
          lVar14 = 0;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auStack_e8._8_8_;
      auStack_e8 = auVar3 << 0x40;
      pcStack_d8 = (code *)&UNK_048b4ab0;
      pcStack_d0 = (code *)&UNK_048b49f0;
      pcStack_c8 = (code *)CONCAT35(pcStack_c8._5_3_,0x1d33bd9c5);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar15 = puStack_48;
      puVar15[1] = uStack_40;
      puVar15[2] = uStack_268;
      *(undefined2 *)(puVar15 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar15 + 4) = (undefined1  [16])0x0;
      puVar15[6] = 0;
      auStack_240._8_8_ = &UNK_048b49f0;
      auStack_240._0_8_ = &UNK_048b4ab0;
      auStack_230._0_5_ = 0x1d33bd9c5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_e8._8_8_;
      auStack_e8 = auVar4 << 0x40;
      auStack_258._8_8_ = puVar15;
      auStack_258._0_8_ = &UNK_048b46e0;
      plStack_98 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plStack_98 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_014d987e;
      auStack_a8._8_8_ = 0x1d;
      auStack_a8._0_8_ = 0x21;
      *(ulong *)((long)plStack_98 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)plStack_98 + 0x15) = uVar2;
      uVar2 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *plStack_98 = _DAT_014d9869;
      plStack_98[1] = uVar2;
      *(undefined1 *)((long)plStack_98 + 0x1d) = 0;
      lVar14 = func_0x048b5060(lVar14,auStack_a8);
      *(undefined **)(lVar14 + 0x20) = &UNK_048b46e0;
      pcVar18 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar14 + 0x20) != auStack_258) {
        puVar15 = (undefined8 *)(lVar14 + 0x28);
        if (*(code **)(lVar14 + 0x40) == (code *)0x0) {
LAB_0e4f0343:
          uVar2 = auStack_258._8_8_;
          auStack_258._8_8_ = 0;
          *puVar15 = uVar2;
        }
        else {
          (**(code **)(lVar14 + 0x40))(puVar15);
          if (auStack_230[4] != '\0') {
            if (auStack_230[4] != '\x02') goto LAB_0e4f0343;
            (*(code *)auStack_240._0_8_)(5,auStack_258 + 8,puVar15);
          }
        }
        *(undefined8 *)(lVar14 + 0x38) = auStack_240._0_8_;
        *(undefined8 *)(lVar14 + 0x40) = auStack_240._8_8_;
        *(undefined4 *)(lVar14 + 0x48) = auStack_230._0_4_;
        *(char *)(lVar14 + 0x4c) = auStack_230[4];
        pcVar18 = (code *)auStack_240._8_8_;
      }
      if ((auStack_a8[0] & 1) != 0) {
        func_0x0412a280(plStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
        pcVar18 = (code *)auStack_240._8_8_;
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(auStack_258 + 8);
      }
      if (pcStack_d0 != (code *)0x0) {
        (*pcStack_d0)(auStack_e8);
      }
      uStack_268 = 0;
      uVar26 = 0;
      uVar19 = 0;
    }
    else {
      iVar9 = *(int *)(pbVar13 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550768), iVar8 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar9 == _DAT_0f550754) goto LAB_0e4f012a;
    }
    uStack_168 = pcStack_130;
    puStack_158 = puStack_120;
    plStack_178 = uStack_140;
    pcStack_170 = pcStack_138;
    puStack_188 = puStack_150;
    plStack_180 = plStack_148;
    uStack_160 = 0x1e1bc4d500000004;
    if ((DAT_0f75c558 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c558), iVar9 != 0)) {
      func_0x0e678d80();
      func_0x0410844d(&DAT_0f75c558);
    }
    auStack_258._0_4_ = uStack_160._4_4_;
    auStack_258._8_8_ = 0;
    uStack_248 = (long *)((ulong)uStack_248._4_4_ << 0x20);
    auStack_240._8_8_ = &SUB_048aead0;
    auStack_240._0_8_ = 2;
    auStack_230._8_8_ = &UNK_0e679dd0;
    auStack_230._0_8_ = &UNK_0d89b2d0;
    lStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_20f = 0;
    uStack_20d = 0;
    uStack_20c = 0;
    lStack_208 = 0;
    FUN_049057f0(&plStack_180,auStack_258);
    func_0x048aea50(auStack_258);
    pcStack_d8 = pcStack_170;
    pcStack_d0 = uStack_168;
    auStack_e8._8_8_ = plStack_178;
    auStack_e8._0_8_ = plStack_180;
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar9 = FUN_04108328(&DAT_0f551bc8), iVar9 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_258._0_4_ = _DAT_0f551bb4;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(plVar16 + 1) = (undefined1  [16])0x0;
    *plVar16 = (long)&UNK_0ef46c48;
    plVar16[3] = (long)puVar15;
    plVar16[4] = 0;
    *(undefined1 *)(plVar16 + 5) = 0xff;
    auStack_258._8_8_ = plVar16 + 3;
    auStack_a8 = (undefined1  [16])0x0;
    uStack_248 = plVar16;
    func_0x048afd20(auStack_e8,auStack_258);
    plVar16 = uStack_248;
    if (uStack_248 != (long *)0x0) {
      LOCK();
      plVar24 = uStack_248 + 1;
      lVar14 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_248 + 0x10))(uStack_248);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar2 = auStack_a8._8_8_;
    if ((long *)auStack_a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_a8._8_8_ + 8);
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_a8._8_8_ + 0x10))(auStack_a8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    if ((DAT_0f75c558 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c558), iVar9 != 0)) {
      func_0x0e678d80();
      func_0x0410844d(&DAT_0f75c558);
    }
    if (uStack_168._4_4_ == 2) {
      piVar17 = *(int **)(*(long *)(pcStack_170 + 0x78) + 0x60);
      iVar9 = *piVar17;
      while (iVar9 != (int)uStack_168) {
        piVar17 = piVar17 + 0x16;
        iVar9 = *piVar17;
      }
      plVar16 = *(long **)(piVar17 + 0xc);
      while (plVar16 != plStack_178) {
        piVar17 = *(int **)(piVar17 + 0xe);
        plVar16 = *(long **)(piVar17 + 0xc);
      }
LAB_0e4f064f:
      *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 2;
    }
    else {
      if (uStack_168._4_4_ == 1) {
        piVar17 = *(int **)(*(long *)(pcStack_170 + 0x78) + 0x48);
        iVar9 = *piVar17;
        while (iVar9 != (int)uStack_168) {
          piVar17 = piVar17 + 0x1a;
          iVar9 = *piVar17;
        }
        goto LAB_0e4f064f;
      }
      if (uStack_168._4_4_ == 0) {
        *(uint *)(pcStack_170 + 0x18) = *(uint *)(pcStack_170 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75c558 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c558), iVar9 != 0)) {
      func_0x0e678d80();
      func_0x0410844d(&DAT_0f75c558);
    }
    auStack_258._0_4_ = 0xbf75c8f8;
    auStack_258._8_8_ = 0;
    uStack_248 = (long *)CONCAT44(uStack_248._4_4_,1);
    auStack_240 = ZEXT816(0x48b2190) << 0x40;
    auStack_230._8_8_ = &UNK_0e67a710;
    auStack_230._0_8_ = &SUB_048b06d0;
    lStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_20f = 0;
    uStack_20d = 0;
    uStack_20c = 0;
    lStack_208 = 0;
    FUN_049057f0(&plStack_180,auStack_258);
    func_0x048aea50(auStack_258);
    pcStack_d8 = pcStack_170;
    pcStack_d0 = uStack_168;
    auStack_e8._8_8_ = plStack_178;
    auStack_e8._0_8_ = plStack_180;
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    uVar23 = uStack_b0;
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f551cb0), iVar9 != 0)) {
      FUN_04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_258._0_4_ = _DAT_0f551c9c;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(plVar16 + 1) = (undefined1  [16])0x0;
    *plVar16 = (long)&UNK_0ef46c98;
    plVar16[3] = (long)puVar15;
    *(undefined1 *)(plVar16 + 4) = 0xff;
    auStack_258._8_8_ = plVar16 + 3;
    auStack_a8 = (undefined1  [16])0x0;
    uStack_248 = plVar16;
    func_0x048afd20(auStack_e8,auStack_258);
    plVar16 = uStack_248;
    if (uStack_248 != (long *)0x0) {
      LOCK();
      plVar24 = uStack_248 + 1;
      lVar14 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_248 + 0x10))(uStack_248);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar2 = auStack_a8._8_8_;
    if ((long *)auStack_a8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_a8._8_8_ + 8);
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_a8._8_8_ + 0x10))(auStack_a8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    if ((uVar19 & 1) != 0) {
      func_0x0412a280(uStack_268,uVar26 | (byte)uVar19 & 0xfe);
    }
    if (((ulong)plStack_68 & 1) != 0) {
      func_0x0412a280(pcStack_58,(ulong)plStack_68 & 0xfffffffffffffffe);
    }
  }
  func_0x0e501380(param_1);
  if ((DAT_0f75c5f0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c5f0), iVar9 != 0)) {
    func_0x0e67a970();
    __cxa_atexit(&UNK_048ae800,&DAT_0f75c570,0xf53dab8);
    func_0x0410844d(&DAT_0f75c5f0);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75c570 + 4)) * 8);
  do {
    lVar14 = *plVar16;
    if (lVar14 == -1) goto LAB_0e4f08b0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f75c570 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e4f08b0:
    puVar11 = &DAT_0f75c570;
    if (iRam000000000f75c5d0 != -0x2b3da790) goto LAB_0e4f0932;
LAB_0e4f08db:
    lVar14 = *(long *)(puVar11 + 0x68);
    if (lVar14 == 0) goto LAB_0e4f0932;
    bVar27 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar21 = lVar14 + 9;
    if (bVar27) {
      lVar21 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar27) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e67af30(&puStack_188,param_1,lVar21,uVar19);
    if ((char)puStack_158 != '\0') goto LAB_0e4f0918;
LAB_0e4f0958:
    if ((DAT_0f75c610 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c610), iVar9 != 0)) {
      func_0x0e67aa80();
      func_0x0410844d(&DAT_0f75c610);
    }
    puVar11 = puStack_188;
    uStack_160 = 0x28a5a83e00000001;
    if ((DAT_0f75c5f0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f75c5f0), iVar9 != 0)) {
      func_0x0e67a970();
      __cxa_atexit(&UNK_048ae800,&DAT_0f75c570,0xf53dab8);
      func_0x0410844d(&DAT_0f75c5f0);
    }
    plVar16 = (long *)(*(long *)(puVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar11 + 0x20) - *(long *)(puVar11 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75c570 + 4)) * 8);
    do {
      lVar14 = *plVar16;
      if (lVar14 == -1) goto LAB_0e4f09f0;
      plVar16 = (long *)(*(long *)(puVar11 + 0x30) + lVar14 * 0x18);
    } while (*(uint *)(*(long *)(puVar11 + 0x30) + 8 + lVar14 * 0x18) !=
             *(uint *)(_DAT_0f75c570 + 4));
    if (plVar16 == *(long **)(puVar11 + 0x38)) {
LAB_0e4f09f0:
      auStack_258._0_8_ = &DAT_0f75c570;
    }
    else {
      auStack_258._0_8_ = plVar16[2];
    }
    auStack_258._8_8_ = puVar11 + 0x18;
    func_0x0ed621a0(auStack_258,uStack_160._4_4_);
    auStack_258._0_2_ = 1;
    auStack_258._8_8_ = &plStack_180;
    uStack_248 = (long *)CONCAT44(uStack_248._4_4_,uStack_160._4_4_);
    auStack_240 = (undefined1  [16])0x0;
    auStack_230 = (undefined1  [16])0x0;
    lStack_220 = 0;
    uStack_218 = 0x65646914;
    uStack_214 = 0x6669746e;
    uStack_210 = 0x69;
    uStack_20f = 0x7265;
    uStack_20d = 0;
    auStack_200 = (undefined1  [16])0x0;
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    uStack_1d0 = 0x3f600000;
    func_0x048afb10(auStack_200,8);
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    auStack_1c8 = (undefined1  [16])0x0;
    uStack_198 = 0xff00;
    uStack_194 = uStack_194 & 0xffffff00;
    uStack_190 = uStack_190 & 0xffffff00;
    uStack_18c = 0;
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar15 = &UNK_0f4c50c0;
    uVar2 = auStack_240._0_8_;
    auStack_240._0_8_ = puVar15;
    if ((long *)uVar2 != (long *)0x0) {
      (**(code **)(*(long *)uVar2 + 8))();
    }
    puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,(undefined4)uStack_248);
    plStack_148 = (long *)0x0;
    uStack_140 = (long *)((ulong)uStack_140._4_4_ << 0x20);
    pcStack_138 = (code *)0x1;
    pcStack_130 = (code *)0x0;
    uStack_128 = &UNK_0e67bcc0;
    puStack_120 = &SUB_048b06d0;
    puStack_118 = &UNK_0e678bb0;
    puStack_110 = &UNK_0e67bd80;
    puStack_108 = &UNK_0e67bf40;
    uStack_100 = 0;
    auStack_f8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_258._8_8_,&puStack_150);
    uVar2 = auStack_f8._8_8_;
    if ((long *)auStack_f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_f8._8_8_ + 8);
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_f8._8_8_ + 0x10))(auStack_f8._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    uVar2 = auStack_258._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar9 = FUN_04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,_DAT_0f550a0c);
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar16 + 1) = (undefined1  [16])0x0;
    *plVar16 = (long)&UNK_0ef439d0;
    plStack_148 = plVar16 + 3;
    uVar5 = auStack_240._0_8_;
    uVar6 = auStack_240._8_8_;
    auStack_240 = (undefined1  [16])0x0;
    plVar16[3] = uVar5;
    plVar16[4] = uVar6;
    plVar16[7] = lStack_220;
    plVar16[5] = auStack_230._0_8_;
    plVar16[6] = auStack_230._8_8_;
    auStack_230 = (undefined1  [16])0x0;
    lStack_220 = 0;
    plVar16[10] = lStack_208;
    plVar16[8] = CONCAT44(uStack_214,uStack_218);
    plVar16[9] = CONCAT44(uStack_20c,CONCAT13(uStack_20d,CONCAT21(uStack_20f,uStack_210)));
    uStack_218 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    uStack_20f = 0;
    uStack_20d = 0;
    uStack_20c = 0;
    lStack_208 = 0;
    plVar16[0xb] = auStack_200._0_8_;
    plVar16[0xc] = auStack_200._8_8_;
    plVar16[0xd] = lStack_1f0;
    auStack_200 = (undefined1  [16])0x0;
    lStack_1f0 = 0;
    plVar16[0xe] = lStack_1e8;
    plVar16[0xf] = lStack_1e0;
    plVar16[0x10] = lStack_1d8;
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    *(undefined4 *)(plVar16 + 0x11) = uStack_1d0;
    plVar16[0x12] = auStack_1c8._0_8_;
    plVar16[0x13] = auStack_1c8._8_8_;
    plVar16[0x14] = lStack_1b8;
    auStack_1c8 = (undefined1  [16])0x0;
    lStack_1b8 = 0;
    plVar16[0x17] = lStack_1a0;
    plVar16[0x15] = lStack_1b0;
    plVar16[0x16] = lStack_1a8;
    lStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    *(ulong *)((long)plVar16 + 0xc5) = CONCAT17(uStack_18c,CONCAT43(uStack_190,uStack_194._1_3_));
    plVar16[0x18] = CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
    auStack_e8 = (undefined1  [16])0x0;
    uStack_140 = plVar16;
    func_0x048afd20(uVar2,&puStack_150);
    plVar16 = uStack_140;
    if (uStack_140 != (long *)0x0) {
      LOCK();
      plVar24 = uStack_140 + 1;
      lVar14 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_140 + 0x10))(uStack_140);
        func_0x0412c2d0(plVar16);
      }
    }
    uVar5 = auStack_e8._8_8_;
    if ((long *)auStack_e8._8_8_ != (long *)0x0) {
      LOCK();
      plVar16 = (long *)(auStack_e8._8_8_ + 8);
      lVar14 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_e8._8_8_ + 0x10))(auStack_e8._8_8_);
        func_0x0412c2d0(uVar5);
      }
    }
    lVar14 = *(long *)(uVar2 + 0x10);
    iVar9 = *(int *)(uVar2 + 0x1c);
    if (iVar9 == 2) {
      piVar17 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
      iVar9 = *piVar17;
      while (iVar9 != *(int *)(uVar2 + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar9 = *piVar17;
      }
      for (; *(long *)(piVar17 + 0xc) != *(long *)(uVar2 + 8); piVar17 = *(int **)(piVar17 + 0xe)) {
      }
LAB_0e4f0f2a:
      piVar17[4] = piVar17[4] | auStack_258._0_4_ << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar17 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
        iVar9 = *piVar17;
        while (iVar9 != *(int *)(uVar2 + 0x18)) {
          piVar17 = piVar17 + 0x1a;
          iVar9 = *piVar17;
        }
        goto LAB_0e4f0f2a;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | auStack_258._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_240);
    lVar14 = func_0x0d311110(uVar23);
    if (*(int *)(lVar14 + 0x60) != -0x2b3da790) goto LAB_0e4f0f85;
LAB_0e4f0f43:
    lVar14 = *(long *)(lVar14 + 0x68);
    if (lVar14 == 0) goto LAB_0e4f0f85;
    bVar27 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar21 = lVar14 + 9;
    if (bVar27) {
      lVar21 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar27) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e67c3b0(&puStack_188,param_1,lVar21,uVar19);
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e4f08db;
LAB_0e4f0932:
    func_0x0e67af30(&puStack_188,param_1,&UNK_012d283a,0x1a);
    if ((char)puStack_158 == '\0') goto LAB_0e4f0958;
LAB_0e4f0918:
    lVar14 = func_0x0d311110(uVar23);
    if (*(int *)(lVar14 + 0x60) == -0x2b3da790) goto LAB_0e4f0f43;
LAB_0e4f0f85:
    func_0x0e67c3b0(&puStack_188,param_1,&UNK_011cee88,0x7e);
  }
  if ((char)puStack_158 != '\0') {
    return;
  }
  puVar11 = puStack_188 + 0x18;
  lVar14 = func_0x0d311110(puVar11);
  for (pbVar13 = *(byte **)(puStack_188 + 0x50); pbVar13 != *(byte **)(puStack_188 + 0x58);
      pbVar13 = pbVar13 + 0x38) {
    bVar1 = *pbVar13;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e4f104a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0e4f104a:
      if ((bVar1 & 1) == 0) {
        pbVar20 = pbVar13 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar13 + 0x10);
      }
      auVar29[0] = -(*pbVar20 == DAT_014eaba0);
      auVar29[1] = -(pbVar20[1] == DAT_014eaba0._1_1_);
      auVar29[2] = -(pbVar20[2] == DAT_014eaba0._2_1_);
      auVar29[3] = -(pbVar20[3] == DAT_014eaba0._3_1_);
      auVar29[4] = -(pbVar20[4] == DAT_014eaba0._4_1_);
      auVar29[5] = -(pbVar20[5] == DAT_014eaba0._5_1_);
      auVar29[6] = -(pbVar20[6] == DAT_014eaba0._6_1_);
      auVar29[7] = -(pbVar20[7] == DAT_014eaba0._7_1_);
      auVar29[8] = -(pbVar20[8] == DAT_014eaba0._8_1_);
      auVar29[9] = -(pbVar20[9] == DAT_014eaba0._9_1_);
      auVar29[10] = -(pbVar20[10] == DAT_014eaba0._10_1_);
      auVar29[0xb] = -(pbVar20[0xb] == DAT_014eaba0._11_1_);
      auVar29[0xc] = -(pbVar20[0xc] == DAT_014eaba0._12_1_);
      auVar29[0xd] = -(pbVar20[0xd] == DAT_014eaba0._13_1_);
      auVar29[0xe] = -(pbVar20[0xe] == DAT_014eaba0._14_1_);
      auVar29[0xf] = -(pbVar20[0xf] == DAT_014eaba0._15_1_);
      auVar31[0] = -(pbVar20[10] == DAT_014e4ff0);
      auVar31[1] = -(pbVar20[0xb] == DAT_014e4ff0._1_1_);
      auVar31[2] = -(pbVar20[0xc] == DAT_014e4ff0._2_1_);
      auVar31[3] = -(pbVar20[0xd] == DAT_014e4ff0._3_1_);
      auVar31[4] = -(pbVar20[0xe] == DAT_014e4ff0._4_1_);
      auVar31[5] = -(pbVar20[0xf] == DAT_014e4ff0._5_1_);
      auVar31[6] = -(pbVar20[0x10] == DAT_014e4ff0._6_1_);
      auVar31[7] = -(pbVar20[0x11] == DAT_014e4ff0._7_1_);
      auVar31[8] = -(pbVar20[0x12] == DAT_014e4ff0._8_1_);
      auVar31[9] = -(pbVar20[0x13] == DAT_014e4ff0._9_1_);
      auVar31[10] = -(pbVar20[0x14] == DAT_014e4ff0._10_1_);
      auVar31[0xb] = -(pbVar20[0x15] == DAT_014e4ff0._11_1_);
      auVar31[0xc] = -(pbVar20[0x16] == DAT_014e4ff0._12_1_);
      auVar31[0xd] = -(pbVar20[0x17] == DAT_014e4ff0._13_1_);
      auVar31[0xe] = -(pbVar20[0x18] == DAT_014e4ff0._14_1_);
      auVar31[0xf] = -(pbVar20[0x19] == DAT_014e4ff0._15_1_);
      auVar31 = auVar31 & auVar29;
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
  if (pbVar13 == *(byte **)(puStack_188 + 0x58)) {
LAB_0e4f1079:
    if ((int)uStack_160 == 0) {
      if ((*(int *)(lVar14 + 0x60) != -0x2b3da790) || (*(long *)(lVar14 + 0x68) == 0))
      goto LAB_0e4f10ed;
      lVar14 = *(long *)(lVar14 + 0x68) + 0x38;
    }
    else {
      auStack_258._0_8_ = FUN_048b0c90(puVar11,lVar14,uStack_160._4_4_,1);
      if (auStack_258._0_8_ == 0) {
        auStack_258 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_258);
        if (auStack_258._0_8_ == 0) goto LAB_0e4f10ed;
      }
      if ((*(int *)(auStack_258._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_258._0_8_ + 0x58) != 0)) {
        lVar14 = *(long *)(auStack_258._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e4f10ed:
        lVar14 = 0;
      }
    }
    uStack_140 = (long *)&UNK_0488e0b0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)CONCAT35(pcStack_130._5_3_,0x48b5725f);
    puStack_150 = (undefined *)0x0;
    auStack_258 = (undefined1  [16])0x0;
    auStack_240 = ZEXT816(0x488e0b0);
    auStack_230._0_5_ = 0x48b5725f;
    pcVar18 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar18 == (code *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    auStack_e8._8_8_ = 0x1a;
    auStack_e8._0_8_ = 0x21;
    *(ulong *)(pcVar18 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar18 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(undefined8 *)pcVar18 = _DAT_013bbacd;
    *(undefined8 *)(pcVar18 + 8) = uVar2;
    pcVar18[0x1a] = (code)0x0;
    pcStack_d8 = pcVar18;
    lVar14 = func_0x048b5060(lVar14,auStack_e8);
    *(undefined8 *)(lVar14 + 0x20) = 0;
    if ((undefined1 *)(lVar14 + 0x20) == auStack_258) {
      pcVar18 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        puVar15 = (undefined8 *)(lVar14 + 0x28);
        (**(code **)(lVar14 + 0x40))(puVar15);
        if (auStack_230[4] != '\0') {
          if (auStack_230[4] == '\x02') {
            (*(code *)auStack_240._0_8_)(5,auStack_258 + 8,puVar15);
          }
          else {
            uVar2 = auStack_258._8_8_;
            auStack_258._8_8_ = 0;
            *puVar15 = uVar2;
          }
        }
      }
      *(undefined8 *)(lVar14 + 0x38) = auStack_240._0_8_;
      *(undefined8 *)(lVar14 + 0x40) = auStack_240._8_8_;
      *(undefined4 *)(lVar14 + 0x48) = auStack_230._0_4_;
      *(char *)(lVar14 + 0x4c) = auStack_230[4];
      pcVar18 = (code *)auStack_240._8_8_;
    }
    if ((auStack_e8[0] & 1) != 0) {
      func_0x0412a280(pcStack_d8,auStack_e8._0_8_ & 0xfffffffffffffffe);
      pcVar18 = (code *)auStack_240._8_8_;
    }
    if (pcVar18 != (code *)0x0) {
      (*pcVar18)(auStack_258 + 8);
    }
    if (pcStack_138 != (code *)0x0) {
      (*pcStack_138)(&puStack_150);
    }
  }
  else {
    iVar9 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550ad8), iVar8 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar9 == _DAT_0f550ac4) goto LAB_0e4f1079;
  }
  puVar22 = puStack_188;
  plStack_68 = plStack_180;
  plStack_60 = plStack_178;
  pcStack_58 = pcStack_170;
  pcStack_50 = uStack_168;
  iVar9 = (int)uStack_160;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uStack_160._4_4_);
  puStack_48 = puStack_158;
  puVar11 = puStack_188 + 0x18;
  lVar14 = func_0x0d311110(puVar11);
  pbVar20 = *(byte **)(puVar22 + 0x58);
  for (pbVar13 = *(byte **)(puVar22 + 0x50); pbVar13 != pbVar20; pbVar13 = pbVar13 + 0x38) {
    bVar1 = *pbVar13;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x24) goto LAB_0e4f137a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x24) {
LAB_0e4f137a:
      if ((bVar1 & 1) == 0) {
        pbVar25 = pbVar13 + 1;
      }
      else {
        pbVar25 = *(byte **)(pbVar13 + 0x10);
      }
      iVar8 = bcmp(&DAT_014518a9,pbVar25,0x24);
      if (iVar8 == 0) break;
    }
  }
  if (pbVar13 != pbVar20) {
    iVar8 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar10 = FUN_04108328(&DAT_0f550768), iVar10 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar8 != _DAT_0f550754) goto LAB_0e4f1654;
  }
  if (iVar9 == 0) {
    if ((*(int *)(lVar14 + 0x60) != -0x2b3da790) || (*(long *)(lVar14 + 0x68) == 0))
    goto LAB_0e4f1415;
    lVar14 = *(long *)(lVar14 + 0x68) + 0x38;
  }
  else {
    lVar14 = FUN_048b0c90(puVar11,lVar14,uStack_b0 & 0xffffffff,1);
    if (lVar14 == 0) {
      auStack_258 = ZEXT816(0);
      func_0x048b0d20(auStack_258);
      lVar14 = auStack_258._0_8_;
      if (auStack_258._0_8_ == 0) goto LAB_0e4f1415;
    }
    if ((*(int *)(lVar14 + 0x50) == -0x45dcb126) && (*(long *)(lVar14 + 0x58) != 0)) {
      lVar14 = *(long *)(lVar14 + 0x58) + 0x40;
    }
    else {
LAB_0e4f1415:
      lVar14 = 0;
    }
  }
  puStack_150 = (undefined *)0x0;
  uStack_140 = (long *)&UNK_048b4ab0;
  pcStack_138 = (code *)&UNK_048b49f0;
  pcStack_130 = (code *)CONCAT35(pcStack_130._5_3_,0x1d33bd9c5);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar15 = 0x737365636f72501c;
  *(undefined4 *)(puVar15 + 1) = 0x4c20726f;
  *(undefined4 *)((long)puVar15 + 0xb) = 0x7473694c;
  *(undefined1 *)((long)puVar15 + 0xf) = 0;
  puVar15[2] = 0;
  *(undefined2 *)(puVar15 + 3) = 0x1400;
  puVar15[4] = 0x1001400150001;
  puVar15[5] = &UNK_01254d89;
  puVar15[6] = &UNK_01254d89;
  auStack_240._8_8_ = &UNK_048b49f0;
  auStack_240._0_8_ = &UNK_048b4ab0;
  auStack_230._0_5_ = 0x1d33bd9c5;
  puStack_150 = (undefined *)0x0;
  auStack_258._8_8_ = puVar15;
  auStack_258._0_8_ = &UNK_048b46e0;
  pcVar18 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (pcVar18 == (code *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar2 = _UNK_014518c1;
  auStack_e8._8_8_ = 0x24;
  auStack_e8._0_8_ = 0x29;
  *(undefined8 *)(pcVar18 + 0x10) = _DAT_014518b9;
  *(undefined8 *)(pcVar18 + 0x18) = uVar2;
  uVar2 = _UNK_014518b1;
  *(undefined8 *)pcVar18 = _DAT_014518a9;
  *(undefined8 *)(pcVar18 + 8) = uVar2;
  *(undefined4 *)(pcVar18 + 0x20) = 0x5d797472;
  pcVar18[0x24] = (code)0x0;
  pcStack_d8 = pcVar18;
  lVar14 = func_0x048b5060(lVar14,auStack_e8);
  *(undefined **)(lVar14 + 0x20) = &UNK_048b46e0;
  pcVar18 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar14 + 0x20) != auStack_258) {
    puVar15 = (undefined8 *)(lVar14 + 0x28);
    if (*(code **)(lVar14 + 0x40) == (code *)0x0) {
LAB_0e4f15d9:
      uVar2 = auStack_258._8_8_;
      auStack_258._8_8_ = 0;
      *puVar15 = uVar2;
    }
    else {
      (**(code **)(lVar14 + 0x40))(puVar15);
      if (auStack_230[4] != '\0') {
        if (auStack_230[4] != '\x02') goto LAB_0e4f15d9;
        (*(code *)auStack_240._0_8_)(5,auStack_258 + 8,puVar15);
      }
    }
    *(undefined8 *)(lVar14 + 0x38) = auStack_240._0_8_;
    *(undefined8 *)(lVar14 + 0x40) = auStack_240._8_8_;
    *(undefined4 *)(lVar14 + 0x48) = auStack_230._0_4_;
    *(char *)(lVar14 + 0x4c) = auStack_230[4];
    pcVar18 = (code *)auStack_240._8_8_;
  }
  if ((auStack_e8[0] & 1) != 0) {
    func_0x0412a280(pcStack_d8,auStack_e8._0_8_ & 0xfffffffffffffffe);
    pcVar18 = (code *)auStack_240._8_8_;
  }
  if (pcVar18 != (code *)0x0) {
    (*pcVar18)(auStack_258 + 8);
  }
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(&puStack_150);
  }
LAB_0e4f1654:
  auStack_a8._8_8_ = plStack_68;
  auStack_a8._0_8_ = puVar22;
  plStack_98 = plStack_60;
  pcStack_90 = pcStack_58;
  pcStack_88 = pcStack_50;
  iStack_80 = iVar9;
  uStack_7c = (undefined4)uStack_b0;
  puStack_78 = puStack_48;
  func_0x0e67cc60(auStack_258,auStack_a8,&UNK_011ea907,0xb);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f4c51a8;
  uVar2 = auStack_240._0_8_;
  auStack_240._0_8_ = puVar15;
  if ((long *)uVar2 != (long *)0x0) {
    (**(code **)(*(long *)uVar2 + 8))();
  }
  puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,(undefined4)uStack_248);
  plStack_148 = (long *)0x0;
  uStack_140 = (long *)((ulong)uStack_140 & 0xffffffff00000000);
  pcStack_138 = (code *)0x1;
  pcStack_130 = (code *)0x0;
  uStack_128 = &UNK_0e67d390;
  puStack_120 = &SUB_048b06d0;
  puStack_118 = &UNK_0e67a8b0;
  puStack_110 = &UNK_0e67d450;
  puStack_108 = &UNK_0e67d610;
  uStack_100 = 0;
  auStack_f8 = ZEXT816(0);
  func_0x048b05a0(auStack_258._8_8_,&puStack_150);
  uVar2 = auStack_f8._8_8_;
  if ((long *)auStack_f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar16 = (long *)(auStack_f8._8_8_ + 8);
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_f8._8_8_ + 0x10))(auStack_f8._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e67ce60(auStack_258);
  uStack_b8 = puStack_78._0_1_;
  uStack_c0 = CONCAT44(uStack_7c,iStack_80);
  pcStack_c8 = pcStack_88;
  pcStack_d8 = (code *)plStack_98;
  pcStack_d0 = pcStack_90;
  auStack_e8 = auStack_a8;
  func_0x048b0bc0(auStack_240);
  func_0x0e67cc60(auStack_258,auStack_e8,&UNK_0129f349,10);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f4c5220;
  uVar2 = auStack_240._0_8_;
  auStack_240._0_8_ = puVar15;
  if ((long *)uVar2 != (long *)0x0) {
    (**(code **)(*(long *)uVar2 + 8))();
  }
  puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,(undefined4)uStack_248);
  plStack_148 = (long *)0x0;
  uStack_140 = (long *)((ulong)uStack_140 & 0xffffffff00000000);
  pcStack_138 = (code *)0x1;
  pcStack_130 = (code *)0x0;
  uStack_128 = &UNK_0e687500;
  puStack_120 = &SUB_048b06d0;
  puStack_118 = &UNK_0e685e70;
  puStack_110 = &UNK_0e6875c0;
  puStack_108 = &UNK_0e6877f0;
  uStack_100 = 0;
  auStack_f8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_258._8_8_,&puStack_150);
  uVar2 = auStack_f8._8_8_;
  if ((long *)auStack_f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar16 = (long *)(auStack_f8._8_8_ + 8);
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_f8._8_8_ + 0x10))(auStack_f8._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e67ce60(auStack_258);
  func_0x048b0bc0(auStack_240);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 * 0x14eaba0  [cereal:document
 */
