/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3d0870 (ELF vaddr 0xe2d0870)
 * Label: caller-of-callee
 * Body:  [[0e3d0870, 0e3d0aec] [0e3d0af0, 0e3d0b31] [0e3d0b40, 0e3d213d] [0e3d2140, 0e3d2182] [0e3d2190, 0e3d2517] [0e3d2520, 0e3d2551] [0e3d2560, 0e3d2ee1]]
 * Ghidra: FUN_0e3d0870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3d0870(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 (*pauVar8) [16];
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long *plVar13;
  int *piVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  code *pcStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  code *pcStack_3b0;
  undefined8 uStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_290;
  code *pcStack_288;
  code *pcStack_280;
  code *pcStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  long lStack_250;
  code *pcStack_248;
  code *pcStack_240;
  code *pcStack_238;
  code *pcStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code *pcStack_208;
  code *pcStack_200;
  code *pcStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0e3d91b0();
  func_0x0d8e82b0(param_1);
  func_0x0e3d9430(param_1);
  pcStack_1c8 = (code *)&UNK_0148cf28;
  pcStack_1c0 = (code *)0xd;
  func_0x0470d9a0(auStack_368,&UNK_01384326,0xc,0xd,&pcStack_1c8);
  bVar22 = (auStack_368[0] & 1) != 0;
  puVar17 = auStack_368 + 1;
  if (bVar22) {
    puVar17 = (undefined1 *)uStack_358;
  }
  uVar16 = (ulong)(auStack_368[0] >> 1);
  if (bVar22) {
    uVar16 = auStack_368._8_8_;
  }
  if ((DAT_0f753338 == '\0') && (iVar5 = func_0x04108328(&DAT_0f753338), iVar5 != 0)) {
    func_0x0e475300();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7532b8,0xf53dab8);
    FUN_0410844d(&DAT_0f753338);
  }
  lStack_250 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7532b8 + 4)) * 8);
  do {
    lVar10 = *plVar13;
    if (lVar10 == -1) goto LAB_0e3d0961;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f7532b8 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3d0961:
    puVar7 = &DAT_0f7532b8;
    iVar5 = iRam000000000f753318;
  }
  else {
    puVar7 = (undefined *)plVar13[2];
    iVar5 = *(int *)(puVar7 + 0x60);
  }
  if ((iVar5 == -0x2b3da790) && (lVar10 = *(long *)(puVar7 + 0x68), lVar10 != 0)) {
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar17 = (undefined1 *)(lVar10 + 9);
    if (bVar22) {
      puVar17 = *(undefined1 **)(lVar10 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar10 + 0x10);
    }
  }
  func_0x0e475900(&pcStack_3d0,param_1,puVar17,uVar16);
  if ((auStack_368[0] & 1) != 0) {
    func_0x0412a280(uStack_358,auStack_368._0_8_ & 0xfffffffffffffffe);
  }
  if ((char)puStack_3a0 == '\0') {
    FUN_04134310(&pcStack_188,0xffffffff);
    pauVar8 = (undefined1 (*) [16])func_0x0412f0e0(&pcStack_188,0,&UNK_013a12ea,10);
    pcVar12 = pcStack_3d0;
    pcStack_148 = *(code **)*pauVar8;
    uStack_140 = *(undefined8 *)(*pauVar8 + 8);
    uVar16 = *(ulong *)*pauVar8;
    uStack_290 = *(ulong *)pauVar8[1];
    *pauVar8 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar8[1] = 0;
    if ((DAT_0f753338 == '\0') && (iVar5 = func_0x04108328(&DAT_0f753338), iVar5 != 0)) {
      func_0x0e475300();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7532b8,0xf53dab8);
      FUN_0410844d(&DAT_0f753338);
    }
    uVar21 = uVar16 & 0xffffffffffffff00;
    plVar13 = (long *)(*(long *)(pcVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar12 + 0x20) - *(long *)(pcVar12 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f7532b8 + 4)) * 8);
    do {
      lVar10 = *plVar13;
      if (lVar10 == -1) goto LAB_0e3d0ab0;
      plVar13 = (long *)(*(long *)(pcVar12 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(pcVar12 + 0x30) + 8 + lVar10 * 0x18) !=
             *(uint *)(_DAT_0f7532b8 + 4));
    if (plVar13 == *(long **)(pcVar12 + 0x38)) {
LAB_0e3d0ab0:
      puVar7 = &DAT_0f7532b8;
    }
    else {
      puVar7 = (undefined *)plVar13[2];
    }
    for (pbVar9 = *(byte **)(pcStack_3d0 + 0x50); pbVar9 != *(byte **)(pcStack_3d0 + 0x58);
        pbVar9 = pbVar9 + 0x38) {
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0e3d0b4a;
      }
      else if (*(long *)(pbVar9 + 8) == 0x1d) {
LAB_0e3d0b4a:
        if ((bVar2 & 1) == 0) {
          pbVar18 = pbVar9 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar9 + 0x10);
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
        auVar25[0] = -(pbVar18[0xd] == DAT_014e1610);
        auVar25[1] = -(pbVar18[0xe] == DAT_014e1610._1_1_);
        auVar25[2] = -(pbVar18[0xf] == DAT_014e1610._2_1_);
        auVar25[3] = -(pbVar18[0x10] == DAT_014e1610._3_1_);
        auVar25[4] = -(pbVar18[0x11] == DAT_014e1610._4_1_);
        auVar25[5] = -(pbVar18[0x12] == DAT_014e1610._5_1_);
        auVar25[6] = -(pbVar18[0x13] == DAT_014e1610._6_1_);
        auVar25[7] = -(pbVar18[0x14] == DAT_014e1610._7_1_);
        auVar25[8] = -(pbVar18[0x15] == DAT_014e1610._8_1_);
        auVar25[9] = -(pbVar18[0x16] == DAT_014e1610._9_1_);
        auVar25[10] = -(pbVar18[0x17] == DAT_014e1610._10_1_);
        auVar25[0xb] = -(pbVar18[0x18] == DAT_014e1610._11_1_);
        auVar25[0xc] = -(pbVar18[0x19] == DAT_014e1610._12_1_);
        auVar25[0xd] = -(pbVar18[0x1a] == DAT_014e1610._13_1_);
        auVar25[0xe] = -(pbVar18[0x1b] == DAT_014e1610._14_1_);
        auVar25[0xf] = -(pbVar18[0x1c] == DAT_014e1610._15_1_);
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
    if (pbVar9 == *(byte **)(pcStack_3d0 + 0x58)) {
LAB_0e3d0b7a:
      if ((int)uStack_3a8 == 0) {
        if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e3d0c01;
        lVar10 = *(long *)(puVar7 + 0x68) + 0x38;
      }
      else {
        uVar4 = uStack_3a8._4_4_;
        if (puVar7 == (undefined *)0x0) {
          puVar7 = (undefined *)func_0x048aead0(pcVar12 + 0x18);
        }
        lVar10 = func_0x048b0c90(pcVar12 + 0x18,puVar7,uVar4,1);
        if (lVar10 == 0) {
          auStack_368 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_368);
          lVar10 = auStack_368._0_8_;
          if (auStack_368._0_8_ == 0) goto LAB_0e3d0c01;
        }
        if ((*(int *)(lVar10 + 0x50) == -0x45dcb126) && (*(long *)(lVar10 + 0x58) != 0)) {
          lVar10 = *(long *)(lVar10 + 0x58) + 0x40;
        }
        else {
LAB_0e3d0c01:
          lVar10 = 0;
        }
      }
      pcStack_208 = (code *)0x0;
      pcStack_1f8 = (code *)&UNK_048b4ab0;
      pcStack_1f0 = (code *)&UNK_048b49f0;
      pcStack_1e8 = (code *)CONCAT35(pcStack_1e8._5_3_,0x1d33bd9c5);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar11 = pcStack_148;
      puVar11[1] = uStack_140;
      puVar11[2] = uStack_290;
      *(undefined2 *)(puVar11 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar11 + 4) = (undefined1  [16])0x0;
      puVar11[6] = 0;
      uStack_350 = (code *)&UNK_048b4ab0;
      pcStack_348 = (code *)&UNK_048b49f0;
      uStack_340 = (undefined *)CONCAT35(uStack_340._5_3_,0x1d33bd9c5);
      pcStack_208 = (code *)0x0;
      auStack_368._8_8_ = puVar11;
      auStack_368._0_8_ = &UNK_048b46e0;
      pcStack_238 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcStack_238 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_014d987e;
      pcStack_248 = (code *)0x21;
      pcStack_240 = (code *)0x1d;
      *(ulong *)(pcStack_238 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcStack_238 + 0x15) = uVar3;
      lVar19 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcStack_238 = _DAT_014d9869;
      *(long *)(pcStack_238 + 8) = lVar19;
      pcStack_238[0x1d] = (code)0x0;
      lVar10 = func_0x048b5060(lVar10,&pcStack_248);
      *(undefined **)(lVar10 + 0x20) = &UNK_048b46e0;
      pcVar12 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar10 + 0x20) != auStack_368) {
        puVar11 = (undefined8 *)(lVar10 + 0x28);
        if (*(code **)(lVar10 + 0x40) == (code *)0x0) {
LAB_0e3d0d9f:
          uVar3 = auStack_368._8_8_;
          auStack_368._8_8_ = 0;
          *puVar11 = uVar3;
        }
        else {
          (**(code **)(lVar10 + 0x40))(puVar11);
          if (uStack_340._4_1_ != '\0') {
            if (uStack_340._4_1_ != '\x02') goto LAB_0e3d0d9f;
            (*uStack_350)(5,auStack_368 + 8,puVar11);
          }
        }
        *(code **)(lVar10 + 0x38) = uStack_350;
        *(code **)(lVar10 + 0x40) = pcStack_348;
        *(undefined4 *)(lVar10 + 0x48) = (undefined4)uStack_340;
        *(char *)(lVar10 + 0x4c) = uStack_340._4_1_;
        pcVar12 = pcStack_348;
      }
      if (((ulong)pcStack_248 & 1) != 0) {
        func_0x0412a280(pcStack_238,(ulong)pcStack_248 & 0xfffffffffffffffe);
        pcVar12 = pcStack_348;
      }
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(auStack_368 + 8);
      }
      if (pcStack_1f0 != (code *)0x0) {
        (*pcStack_1f0)(&pcStack_208);
      }
      uStack_290 = 0;
      uVar21 = 0;
      uVar16 = 0;
    }
    else {
      iVar5 = *(int *)(pbVar9 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
        func_0x048b46f0(0xf550750);
        FUN_0410844d(&DAT_0f550768);
      }
      if (iVar5 == _DAT_0f550754) goto LAB_0e3d0b7a;
    }
    uStack_268 = pcStack_3b0;
    puStack_258 = puStack_3a0;
    pcStack_278 = uStack_3c0;
    pcStack_270 = pcStack_3b8;
    pcStack_288 = pcStack_3d0;
    pcStack_280 = pcStack_3c8;
    uStack_260 = 0x1e1bc4d500000004;
    if ((DAT_0f753358 == '\0') && (iVar5 = func_0x04108328(&DAT_0f753358), iVar5 != 0)) {
      func_0x0e475410();
      FUN_0410844d(&DAT_0f753358);
    }
    auStack_368._0_4_ = uStack_260._4_4_;
    auStack_368._8_8_ = 0;
    uStack_358 = (long *)((ulong)uStack_358._4_4_ << 0x20);
    uStack_350 = (code *)0x3;
    pcStack_348 = (code *)&SUB_048aead0;
    uStack_340 = &UNK_0c0f6d10;
    puStack_338 = &UNK_0e4765e0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    func_0x049057f0(&pcStack_280,auStack_368);
    func_0x048aea50(auStack_368);
    pcStack_1f8 = pcStack_270;
    pcStack_1f0 = uStack_268;
    pcStack_208 = pcStack_280;
    pcStack_200 = pcStack_278;
    pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar12 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar12 = &UNK_0ef44b00;
    pcStack_240 = (code *)0x0;
    pcStack_238 = (code *)CONCAT71(pcStack_238._1_7_,0xff);
    pcStack_248 = pcVar12;
    func_0x0e476460(auStack_368,&pcStack_208,&pcStack_248);
    if (pcStack_240 != (code *)0x0) {
      (**(code **)(*(long *)pcStack_240 + 0x28))();
    }
    if (pcStack_248 != (code *)0x0) {
      (**(code **)(*(long *)pcStack_248 + 8))();
    }
    if ((DAT_0f753358 == '\0') && (iVar5 = func_0x04108328(&DAT_0f753358), iVar5 != 0)) {
      func_0x0e475410();
      FUN_0410844d(&DAT_0f753358);
    }
    if (uStack_268._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(pcStack_270 + 0x78) + 0x60);
      iVar5 = *piVar14;
      while (iVar5 != (int)uStack_268) {
        piVar14 = piVar14 + 0x16;
        iVar5 = *piVar14;
      }
      pcVar12 = *(code **)(piVar14 + 0xc);
      while (pcVar12 != pcStack_278) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pcVar12 = *(code **)(piVar14 + 0xc);
      }
LAB_0e3d103f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 2;
    }
    else {
      if (uStack_268._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(pcStack_270 + 0x78) + 0x48);
        iVar5 = *piVar14;
        while (iVar5 != (int)uStack_268) {
          piVar14 = piVar14 + 0x1a;
          iVar5 = *piVar14;
        }
        goto LAB_0e3d103f;
      }
      if (uStack_268._4_4_ == 0) {
        *(uint *)(pcStack_270 + 0x18) = *(uint *)(pcStack_270 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f753358 == '\0') && (iVar5 = func_0x04108328(&DAT_0f753358), iVar5 != 0)) {
      func_0x0e475410();
      FUN_0410844d(&DAT_0f753358);
    }
    auStack_368._0_4_ = 0xbf75c8f8;
    auStack_368._8_8_ = 0;
    uStack_358 = (long *)CONCAT44(uStack_358._4_4_,1);
    uStack_350 = (code *)0x0;
    pcStack_348 = (code *)&SUB_048b2190;
    uStack_340 = &SUB_048b06d0;
    puStack_338 = &UNK_0e4771b0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    func_0x049057f0(&pcStack_280,auStack_368);
    func_0x048aea50(auStack_368);
    pcStack_1f8 = pcStack_270;
    pcStack_1f0 = uStack_268;
    pcStack_208 = pcStack_280;
    pcStack_200 = pcStack_278;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
      func_0x04905d10(0xf551c98);
      FUN_0410844d(&DAT_0f551cb0);
    }
    auStack_368._0_4_ = _DAT_0f551c9c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef46c98;
    plVar13[3] = (long)puVar11;
    *(undefined1 *)(plVar13 + 4) = 0xff;
    auStack_368._8_8_ = plVar13 + 3;
    pcStack_248 = (code *)0x0;
    pcStack_240 = (code *)0x0;
    uStack_358 = plVar13;
    func_0x048afd20(&pcStack_208,auStack_368);
    plVar13 = uStack_358;
    if (uStack_358 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_358 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_358 + 0x10))(uStack_358);
        func_0x0412c2d0(plVar13);
      }
    }
    pcVar12 = pcStack_240;
    if (pcStack_240 != (code *)0x0) {
      LOCK();
      plVar13 = (long *)((long)pcStack_240 + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)pcStack_240 + 0x10))(pcStack_240);
        func_0x0412c2d0(pcVar12);
      }
    }
    pcStack_1a8 = uStack_268;
    pcStack_1c8 = pcStack_288;
    pcStack_1c0 = pcStack_280;
    pcStack_1b8 = pcStack_278;
    pcStack_1b0 = pcStack_270;
    puStack_198 = puStack_258;
    uStack_1a0 = 0x1e1bc4d500000004;
    if ((DAT_0f753358 == '\0') && (iVar5 = func_0x04108328(&DAT_0f753358), iVar5 != 0)) {
      func_0x0e475410();
      FUN_0410844d(&DAT_0f753358);
    }
    auStack_368._0_4_ = uStack_1a0._4_4_;
    auStack_368._8_8_ = 0;
    uStack_358 = (long *)((ulong)uStack_358 & 0xffffffff00000000);
    uStack_350 = (code *)0x1;
    pcStack_348 = (code *)&SUB_048aead0;
    uStack_340 = &UNK_04905970;
    puStack_338 = &UNK_0e477350;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    func_0x049057f0(&pcStack_1c0,auStack_368);
    func_0x048aea50(auStack_368);
    pcStack_1f8 = pcStack_1b0;
    pcStack_1f0 = pcStack_1a8;
    pcStack_208 = pcStack_1c0;
    pcStack_200 = pcStack_1b8;
    pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar12 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar12 = &UNK_0ef44b00;
    pcStack_240 = (code *)0x0;
    pcStack_238 = (code *)CONCAT71(pcStack_238._1_7_,0xff);
    pcStack_248 = pcVar12;
    func_0x0e476460(auStack_368,&pcStack_208,&pcStack_248);
    if (pcStack_240 != (code *)0x0) {
      (**(code **)(*(long *)pcStack_240 + 0x28))();
    }
    if (pcStack_248 != (code *)0x0) {
      (**(code **)(*(long *)pcStack_248 + 8))();
    }
    if ((uVar16 & 1) != 0) {
      func_0x0412a280(uStack_290,uVar21 | (byte)uVar16 & 0xfe);
    }
    if (((ulong)pcStack_188 & 1) != 0) {
      func_0x0412a280(pcStack_178,(ulong)pcStack_188 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f7533f0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7533f0), iVar5 != 0)) {
    func_0x0e4776a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f753370,0xf53dab8);
    FUN_0410844d(&DAT_0f7533f0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f753370 + 4)) * 8);
  do {
    lVar10 = *plVar13;
    if (lVar10 == -1) goto LAB_0e3d1440;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f753370 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e3d1440:
    puVar7 = &DAT_0f753370;
    if (iRam000000000f7533d0 != -0x2b3da790) goto LAB_0e3d14c7;
LAB_0e3d146b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0e3d14c7;
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar19 = lVar10 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar10 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0e477ec0(&pcStack_1c8,param_1,lVar19,uVar16);
    if ((char)puStack_198 != '\0') goto LAB_0e3d14a8;
LAB_0e3d14ed:
    func_0x0e478aa0(auStack_368,&pcStack_1c8,&UNK_013762e9,10,1);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f4bb670;
    if (uStack_350 != (code *)0x0) {
      lVar10 = *(long *)uStack_350;
      uStack_350 = (code *)plVar13;
      (**(code **)(lVar10 + 8))();
      plVar13 = (long *)uStack_350;
    }
    uStack_350 = (code *)plVar13;
    pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = (code *)((ulong)uStack_3c0._4_4_ << 0x20);
    pcStack_3b8 = (code *)0x1;
    pcStack_3b0 = (code *)0x0;
    uStack_3a8 = &UNK_0e479290;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &SUB_0e4703f0;
    puStack_390 = &UNK_0e4792a0;
    puStack_388 = &UNK_0e479460;
    uStack_380 = 0;
    auStack_378 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
    uVar3 = auStack_378._8_8_;
    if ((long *)auStack_378._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_378._8_8_ + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e478d60(auStack_368);
    uStack_78 = (char)puStack_198;
    pcStack_88 = pcStack_1a8;
    uStack_80 = uStack_1a0;
    pcStack_98 = pcStack_1b8;
    pcStack_90 = pcStack_1b0;
    pcStack_a8 = pcStack_1c8;
    pcStack_a0 = pcStack_1c0;
    func_0x048b0bc0(&uStack_350);
    pcStack_128 = pcStack_a8;
    pcStack_120 = pcStack_a0;
    pcStack_118 = pcStack_98;
    pcStack_110 = pcStack_90;
    pcStack_108 = pcStack_88;
    uStack_100 = uStack_80;
    uStack_f8 = CONCAT71(uStack_77,uStack_78);
    func_0x0e4784b0(auStack_368,pcStack_a8 + 0x18);
    if (uStack_350._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)uStack_358 + 0x78) + 0x60);
      iVar5 = *piVar14;
      while (iVar5 != (int)uStack_350) {
        piVar14 = piVar14 + 0x16;
        iVar5 = *piVar14;
      }
      lVar10 = *(long *)(piVar14 + 0xc);
      while (lVar10 != auStack_368._8_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar10 = *(long *)(piVar14 + 0xc);
      }
LAB_0e3d177f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_350._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)uStack_358 + 0x78) + 0x48);
        iVar5 = *piVar14;
        while (iVar5 != (int)uStack_350) {
          piVar14 = piVar14 + 0x1a;
          iVar5 = *piVar14;
        }
        goto LAB_0e3d177f;
      }
      if (uStack_350._4_4_ == 0) {
        *(uint *)((long)uStack_358 + 0x18) = *(uint *)((long)uStack_358 + 0x18) | 0x40000;
      }
    }
    func_0x0e478aa0(auStack_368,&pcStack_128,&UNK_0147373a,0xe,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f4bb6e8;
    if (uStack_350 != (code *)0x0) {
      lVar10 = *(long *)uStack_350;
      uStack_350 = (code *)plVar13;
      (**(code **)(lVar10 + 8))();
      plVar13 = (long *)uStack_350;
    }
    uStack_350 = (code *)plVar13;
    pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
    pcStack_3b8 = (code *)0x1;
    pcStack_3b0 = (code *)0x0;
    uStack_3a8 = &UNK_0e47cdb0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0e47b980;
    puStack_390 = &UNK_0e47ce70;
    puStack_388 = &UNK_0e47d070;
    uStack_380 = 0;
    auStack_378 = ZEXT816(0);
    func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
    uVar3 = auStack_378._8_8_;
    if ((long *)auStack_378._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_378._8_8_ + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e478d60(auStack_368);
    uStack_38 = (undefined1)uStack_f8;
    pcStack_48 = pcStack_108;
    uStack_40 = uStack_100;
    pcStack_58 = pcStack_118;
    pcStack_50 = pcStack_110;
    pcStack_68 = pcStack_128;
    pcStack_60 = pcStack_120;
    func_0x048b0bc0(&uStack_350);
    pcStack_e8 = pcStack_68;
    pcStack_e0 = pcStack_60;
    pcStack_d8 = pcStack_58;
    pcStack_d0 = pcStack_50;
    pcStack_c8 = pcStack_48;
    uStack_c0 = uStack_40;
    uStack_b8 = CONCAT71(uStack_37,uStack_38);
    func_0x0e4784b0(auStack_368,pcStack_68 + 0x18);
    if (uStack_350._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)uStack_358 + 0x78) + 0x60);
      iVar5 = *piVar14;
      while (iVar5 != (int)uStack_350) {
        piVar14 = piVar14 + 0x16;
        iVar5 = *piVar14;
      }
      lVar10 = *(long *)(piVar14 + 0xc);
      while (lVar10 != auStack_368._8_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar10 = *(long *)(piVar14 + 0xc);
      }
LAB_0e3d19ff:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_350._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)uStack_358 + 0x78) + 0x48);
        iVar5 = *piVar14;
        while (iVar5 != (int)uStack_350) {
          piVar14 = piVar14 + 0x1a;
          iVar5 = *piVar14;
        }
        goto LAB_0e3d19ff;
      }
      if (uStack_350._4_4_ == 0) {
        *(uint *)((long)uStack_358 + 0x18) = *(uint *)((long)uStack_358 + 0x18) | 0x40000;
      }
    }
    func_0x0e478aa0(auStack_368,&pcStack_e8,&UNK_0145a32d,0x15,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f4bb868;
    if (uStack_350 != (code *)0x0) {
      lVar10 = *(long *)uStack_350;
      uStack_350 = (code *)plVar13;
      (**(code **)(lVar10 + 8))();
      plVar13 = (long *)uStack_350;
    }
    uStack_350 = (code *)plVar13;
    pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
    pcStack_3b8 = (code *)0x1;
    pcStack_3b0 = (code *)0x0;
    uStack_3a8 = &UNK_0e480770;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0e47f0a0;
    puStack_390 = &UNK_0e480780;
    puStack_388 = &UNK_0e480980;
    uStack_380 = 0;
    auStack_378 = ZEXT816(0);
    func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
    uVar3 = auStack_378._8_8_;
    if ((long *)auStack_378._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_378._8_8_ + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e478d60(auStack_368);
    uStack_158 = (undefined1)uStack_b8;
    pcStack_168 = pcStack_c8;
    uStack_160 = uStack_c0;
    pcStack_178 = pcStack_d8;
    pcStack_170 = pcStack_d0;
    pcStack_188 = pcStack_e8;
    pcStack_180 = pcStack_e0;
    func_0x048b0bc0(&uStack_350);
    pcStack_248 = pcStack_188;
    pcStack_240 = pcStack_180;
    pcStack_238 = pcStack_178;
    pcStack_230 = pcStack_170;
    pcStack_228 = pcStack_168;
    uStack_220 = uStack_160;
    uStack_218 = CONCAT71(uStack_157,uStack_158);
    func_0x0e4784b0(auStack_368,pcStack_188 + 0x18);
    if (uStack_350._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)((long)uStack_358 + 0x78) + 0x60);
      iVar5 = *piVar14;
      while (iVar5 != (int)uStack_350) {
        piVar14 = piVar14 + 0x16;
        iVar5 = *piVar14;
      }
      lVar10 = *(long *)(piVar14 + 0xc);
      while (lVar10 != auStack_368._8_8_) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar10 = *(long *)(piVar14 + 0xc);
      }
LAB_0e3d1c7f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_350._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)((long)uStack_358 + 0x78) + 0x48);
        iVar5 = *piVar14;
        while (iVar5 != (int)uStack_350) {
          piVar14 = piVar14 + 0x1a;
          iVar5 = *piVar14;
        }
        goto LAB_0e3d1c7f;
      }
      if (uStack_350._4_4_ == 0) {
        *(uint *)((long)uStack_358 + 0x18) = *(uint *)((long)uStack_358 + 0x18) | 0x40000;
      }
    }
    func_0x0e478aa0(auStack_368,&pcStack_248,&UNK_012ec127,0xd,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f4bb970;
    if (uStack_350 != (code *)0x0) {
      lVar10 = *(long *)uStack_350;
      uStack_350 = (code *)plVar13;
      (**(code **)(lVar10 + 8))();
      plVar13 = (long *)uStack_350;
    }
    uStack_350 = (code *)plVar13;
    pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
    pcStack_3b8 = (code *)0x1;
    pcStack_3b0 = (code *)0x0;
    uStack_3a8 = &UNK_0e487690;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0e484480;
    puStack_390 = &UNK_0e4876a0;
    puStack_388 = &UNK_0e487880;
    uStack_380 = 0;
    auStack_378 = ZEXT816(0);
    func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
    uVar3 = auStack_378._8_8_;
    if ((long *)auStack_378._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_378._8_8_ + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e478d60(auStack_368);
    puStack_1d8 = (undefined1 *)CONCAT71(puStack_1d8._1_7_,(undefined1)uStack_218);
    pcStack_1e8 = pcStack_228;
    uStack_1e0 = uStack_220;
    pcStack_1f8 = pcStack_238;
    pcStack_1f0 = pcStack_230;
    pcStack_208 = pcStack_248;
    pcStack_200 = pcStack_240;
    func_0x048b0bc0(&uStack_350);
    func_0x0e478aa0(auStack_368,&pcStack_208,&UNK_013c009e,0x15,0);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f4bbb10;
    if (uStack_350 != (code *)0x0) {
      lVar10 = *(long *)uStack_350;
      uStack_350 = (code *)plVar13;
      (**(code **)(lVar10 + 8))();
      plVar13 = (long *)uStack_350;
    }
    uStack_350 = (code *)plVar13;
    pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
    pcStack_3b8 = (code *)0x1;
    pcStack_3b0 = (code *)0x0;
    uStack_3a8 = &UNK_0e488ab0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0e488770;
    puStack_390 = &UNK_0e488ac0;
    puStack_388 = &UNK_0e488c80;
    uStack_380 = 0;
    auStack_378 = ZEXT816(0);
    func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
    uVar3 = auStack_378._8_8_;
    if ((long *)auStack_378._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_378._8_8_ + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e478d60(auStack_368);
    puStack_258 = (undefined1 *)CONCAT71(puStack_258._1_7_,puStack_1d8._0_1_);
    uStack_268 = pcStack_1e8;
    uStack_260 = uStack_1e0;
    pcStack_278 = pcStack_1f8;
    pcStack_270 = pcStack_1f0;
    pcStack_288 = pcStack_208;
    pcStack_280 = pcStack_200;
    func_0x048b0bc0(&uStack_350);
    func_0x0e478aa0(auStack_368,&pcStack_288,&UNK_014c3702,0xd,0);
    pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar12 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar12 = &UNK_0f4bbb10;
    if (uStack_350 != (code *)0x0) {
      lVar10 = *(long *)uStack_350;
      uStack_350 = pcVar12;
      (**(code **)(lVar10 + 8))();
      pcVar12 = uStack_350;
    }
    uStack_350 = pcVar12;
    pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
    pcStack_3c8 = (code *)0x0;
    uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
    pcStack_3b8 = (code *)0x1;
    pcStack_3b0 = (code *)0x0;
    uStack_3a8 = &UNK_0e488ab0;
    puStack_3a0 = &SUB_048b06d0;
    puStack_398 = &UNK_0e488770;
    puStack_390 = &UNK_0e4891d0;
    puStack_388 = &UNK_0e4893a0;
    uStack_380 = 0;
    auStack_378 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
    uVar3 = auStack_378._8_8_;
    if ((long *)auStack_378._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_378._8_8_ + 8);
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0e478d60(auStack_368);
    func_0x048b0bc0(&uStack_350);
    lVar10 = func_0x072682b0(lStack_250);
    if (*(int *)(lVar10 + 0x60) != -0x2b3da790) goto LAB_0e3d20d9;
LAB_0e3d2097:
    lVar10 = *(long *)(lVar10 + 0x68);
    if (lVar10 == 0) goto LAB_0e3d20d9;
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar19 = lVar10 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar10 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar16 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0e489580(&pcStack_1c8,param_1,lVar19,uVar16);
  }
  else {
    puVar7 = (undefined *)plVar13[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e3d146b;
LAB_0e3d14c7:
    func_0x0e477ec0(&pcStack_1c8,param_1,&UNK_013043f0,0x1f);
    if ((char)puStack_198 == '\0') goto LAB_0e3d14ed;
LAB_0e3d14a8:
    lVar10 = func_0x072682b0(lStack_250);
    if (*(int *)(lVar10 + 0x60) == -0x2b3da790) goto LAB_0e3d2097;
LAB_0e3d20d9:
    func_0x0e489580(&pcStack_1c8,param_1,&DAT_01329892,0x1b);
  }
  if ((char)puStack_198 != '\0') {
    return;
  }
  pcVar12 = pcStack_1c8 + 0x18;
  lVar10 = func_0x072682b0(pcVar12);
  for (pbVar9 = *(byte **)(pcStack_1c8 + 0x50); pbVar9 != *(byte **)(pcStack_1c8 + 0x58);
      pbVar9 = pbVar9 + 0x38) {
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3d219a;
    }
    else if (*(long *)(pbVar9 + 8) == 0x1a) {
LAB_0e3d219a:
      if ((bVar2 & 1) == 0) {
        pbVar18 = pbVar9 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar9 + 0x10);
      }
      auVar24[0] = -(*pbVar18 == DAT_014eaba0);
      auVar24[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar24[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar24[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar24[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar24[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar24[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar24[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar24[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar24[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar24[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar24[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar24[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar24[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar24[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar24[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar26[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar26[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar26[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar26[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar26[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar26[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar26[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar26[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar26[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar26[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar26[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar26[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar26[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar26[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar26[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar26[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar9 == *(byte **)(pcStack_1c8 + 0x58)) {
LAB_0e3d21c9:
    if ((int)uStack_1a0 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0e3d223d;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_368._0_8_ = func_0x048b0c90(pcVar12,lVar10,uStack_1a0._4_4_,1);
      if (auStack_368._0_8_ == 0) {
        auStack_368 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_368);
        if (auStack_368._0_8_ == 0) goto LAB_0e3d223d;
      }
      if ((*(int *)(auStack_368._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_368._0_8_ + 0x58) != 0)) {
        lVar10 = *(long *)(auStack_368._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3d223d:
        lVar10 = 0;
      }
    }
    uStack_3c0 = (code *)&UNK_0488e0b0;
    pcStack_3b8 = (code *)0x0;
    pcStack_3b0 = (code *)CONCAT35(pcStack_3b0._5_3_,0x48b5725f);
    pcStack_3d0 = (code *)0x0;
    auStack_368 = (undefined1  [16])0x0;
    uStack_350 = (code *)&UNK_0488e0b0;
    pcStack_348 = (code *)0x0;
    uStack_340 = (undefined *)CONCAT35(uStack_340._5_3_,0x48b5725f);
    pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar12 == (code *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    pcStack_288 = (code *)0x21;
    pcStack_280 = (code *)0x1a;
    *(ulong *)(pcVar12 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar12 + 0x12) = uVar3;
    lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(long *)pcVar12 = _DAT_013bbacd;
    *(long *)(pcVar12 + 8) = lVar19;
    pcVar12[0x1a] = (code)0x0;
    pcStack_278 = pcVar12;
    lVar10 = func_0x048b5060(lVar10,&pcStack_288);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_368) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar11 = (undefined8 *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar11);
        if (uStack_340._4_1_ != '\0') {
          if (uStack_340._4_1_ == '\x02') {
            (*uStack_350)(5,auStack_368 + 8,puVar11);
          }
          else {
            uVar3 = auStack_368._8_8_;
            auStack_368._8_8_ = 0;
            *puVar11 = uVar3;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = uStack_350;
      *(code **)(lVar10 + 0x40) = pcStack_348;
      *(undefined4 *)(lVar10 + 0x48) = (undefined4)uStack_340;
      *(char *)(lVar10 + 0x4c) = uStack_340._4_1_;
      pcVar12 = pcStack_348;
    }
    if (((ulong)pcStack_288 & 1) != 0) {
      func_0x0412a280(pcStack_278,(ulong)pcStack_288 & 0xfffffffffffffffe);
      pcVar12 = pcStack_348;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_368 + 8);
    }
    if (pcStack_3b8 != (code *)0x0) {
      (*pcStack_3b8)(&pcStack_3d0);
    }
  }
  else {
    iVar5 = *(int *)(pbVar9 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e3d21c9;
  }
  pcVar12 = pcStack_1c8;
  pcStack_248 = pcStack_1c0;
  pcStack_240 = pcStack_1b8;
  pcStack_238 = pcStack_1b0;
  pcStack_230 = pcStack_1a8;
  lStack_250 = CONCAT44(lStack_250._4_4_,(int)uStack_1a0);
  uStack_290 = CONCAT44(uStack_290._4_4_,uStack_1a0._4_4_);
  puStack_130 = puStack_198;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01371715;
  *puVar11 = _DAT_0137170d;
  puVar11[1] = uVar3;
  puVar11[2] = 0x7465736572502074;
  *(undefined1 *)(puVar11 + 3) = 0;
  lVar10 = func_0x072682b0(pcVar12 + 0x18);
  pbVar18 = *(byte **)(pcVar12 + 0x58);
  pcStack_148 = pcVar12;
  for (pbVar9 = *(byte **)(pcVar12 + 0x50); pbVar9 != pbVar18; pbVar9 = pbVar9 + 0x38) {
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e3d256a;
    }
    else if (*(long *)(pbVar9 + 8) == 0x24) {
LAB_0e3d256a:
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar9 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar9 + 0x10);
      }
      iVar5 = func_0x0eee3000(&DAT_014518a9,pbVar20,0x24);
      if (iVar5 == 0) break;
    }
  }
  if (pbVar9 != pbVar18) {
    iVar5 = *(int *)(pbVar9 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    bVar22 = true;
    if (iVar5 != _DAT_0f550754) goto LAB_0e3d2833;
  }
  if ((int)lStack_250 == 0) {
    if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
    goto LAB_0e3d260c;
    lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
  }
  else {
    lVar10 = func_0x048b0c90(pcVar12 + 0x18,lVar10,uStack_290 & 0xffffffff,1);
    if (lVar10 == 0) {
      auStack_368 = ZEXT816(0);
      func_0x048b0d20(auStack_368);
      lVar10 = auStack_368._0_8_;
      if (auStack_368._0_8_ == 0) goto LAB_0e3d260c;
    }
    if ((*(int *)(lVar10 + 0x50) == -0x45dcb126) && (*(long *)(lVar10 + 0x58) != 0)) {
      lVar10 = *(long *)(lVar10 + 0x58) + 0x40;
    }
    else {
LAB_0e3d260c:
      lVar10 = 0;
    }
  }
  pcStack_3d0 = (code *)0x0;
  uStack_3c0 = (code *)&UNK_048b4ab0;
  pcStack_3b8 = (code *)&UNK_048b49f0;
  pcStack_3b0 = (code *)CONCAT35(pcStack_3b0._5_3_,0x1d33bd9c5);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar15 = 0x21;
  puVar15[1] = 0x18;
  puVar15[2] = puVar11;
  *(undefined2 *)(puVar15 + 3) = 0x300;
  puVar15[4] = 0x1003200150001;
  puVar15[5] = &UNK_01254d89;
  puVar15[6] = &UNK_01254d89;
  uStack_350 = (code *)&UNK_048b4ab0;
  pcStack_348 = (code *)&UNK_048b49f0;
  uStack_340 = (undefined *)CONCAT35(uStack_340._5_3_,0x1d33bd9c5);
  pcStack_3d0 = (code *)0x0;
  auStack_368._8_8_ = puVar15;
  auStack_368._0_8_ = &UNK_048b46e0;
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  lVar19 = _UNK_014518c1;
  pcStack_288 = (code *)0x29;
  pcStack_280 = (code *)0x24;
  *(long *)(pcVar12 + 0x10) = _DAT_014518b9;
  *(long *)(pcVar12 + 0x18) = lVar19;
  lVar19 = _UNK_014518b1;
  *(long *)pcVar12 = _DAT_014518a9;
  *(long *)(pcVar12 + 8) = lVar19;
  *(undefined4 *)(pcVar12 + 0x20) = 0x5d797472;
  pcVar12[0x24] = (code)0x0;
  pcStack_278 = pcVar12;
  lVar10 = func_0x048b5060(lVar10,&pcStack_288);
  *(undefined **)(lVar10 + 0x20) = &UNK_048b46e0;
  pcVar12 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar10 + 0x20) != auStack_368) {
    puVar11 = (undefined8 *)(lVar10 + 0x28);
    if (*(code **)(lVar10 + 0x40) == (code *)0x0) {
LAB_0e3d27a9:
      uVar3 = auStack_368._8_8_;
      auStack_368._8_8_ = 0;
      *puVar11 = uVar3;
    }
    else {
      (**(code **)(lVar10 + 0x40))(puVar11);
      if (uStack_340._4_1_ != '\0') {
        if (uStack_340._4_1_ != '\x02') goto LAB_0e3d27a9;
        (*uStack_350)(5,auStack_368 + 8,puVar11);
      }
    }
    *(code **)(lVar10 + 0x38) = uStack_350;
    *(code **)(lVar10 + 0x40) = pcStack_348;
    *(undefined4 *)(lVar10 + 0x48) = (undefined4)uStack_340;
    *(char *)(lVar10 + 0x4c) = uStack_340._4_1_;
    pcVar12 = pcStack_348;
  }
  if (((ulong)pcStack_288 & 1) != 0) {
    func_0x0412a280(pcStack_278,(ulong)pcStack_288 & 0xfffffffffffffffe);
    pcVar12 = pcStack_348;
  }
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(auStack_368 + 8);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(&pcStack_3d0);
  }
  puVar11 = (undefined8 *)0x0;
  bVar22 = false;
LAB_0e3d2833:
  pcStack_208 = pcStack_148;
  pcStack_200 = pcStack_248;
  pcStack_1f8 = pcStack_240;
  pcStack_1f0 = pcStack_238;
  pcStack_1e8 = pcStack_230;
  uStack_1e0 = CONCAT44((undefined4)uStack_290,(int)lStack_250);
  puStack_1d8 = puStack_130;
  func_0x0e489e80(auStack_368,&pcStack_208,&UNK_013771cd,0xe);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0ef44b00;
  if (uStack_350 != (code *)0x0) {
    lVar10 = *(long *)uStack_350;
    uStack_350 = (code *)plVar13;
    (**(code **)(lVar10 + 8))();
    plVar13 = (long *)uStack_350;
  }
  uStack_350 = (code *)plVar13;
  pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
  pcStack_3c8 = (code *)0x0;
  uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
  pcStack_3b8 = (code *)0x1;
  pcStack_3b0 = (code *)0x0;
  uStack_3a8 = &UNK_048b3f30;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &SUB_048b2190;
  puStack_390 = &UNK_0e48a3e0;
  puStack_388 = &UNK_0e48a5a0;
  uStack_380 = 0;
  auStack_378 = ZEXT816(0);
  func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
  uVar3 = auStack_378._8_8_;
  if ((long *)auStack_378._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_378._8_8_ + 8);
    lVar10 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e48a0e0(auStack_368);
  puStack_258 = (undefined1 *)CONCAT71(puStack_258._1_7_,puStack_1d8._0_1_);
  uStack_268 = pcStack_1e8;
  uStack_260 = uStack_1e0;
  pcStack_278 = pcStack_1f8;
  pcStack_270 = pcStack_1f0;
  pcStack_288 = pcStack_208;
  pcStack_280 = pcStack_200;
  func_0x048b0bc0(&uStack_350);
  func_0x0e489e80(auStack_368,&pcStack_288,&DAT_01329892,0x1b);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f4bbbf8;
  if (uStack_350 != (code *)0x0) {
    lVar10 = *(long *)uStack_350;
    uStack_350 = (code *)puVar15;
    (**(code **)(lVar10 + 8))();
    puVar15 = (undefined8 *)uStack_350;
  }
  uStack_350 = (code *)puVar15;
  pcStack_3d0 = (code *)CONCAT44(pcStack_3d0._4_4_,(undefined4)uStack_358);
  pcStack_3c8 = (code *)0x0;
  uStack_3c0 = (code *)((ulong)uStack_3c0 & 0xffffffff00000000);
  pcStack_3b8 = (code *)0x1;
  pcStack_3b0 = (code *)0x0;
  uStack_3a8 = &UNK_0e48a9e0;
  puStack_3a0 = &SUB_048b06d0;
  puStack_398 = &UNK_0e4775e0;
  puStack_390 = &UNK_0e48aaa0;
  puStack_388 = &UNK_0e48ac20;
  uStack_380 = 0;
  auStack_378 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_368._8_8_,&pcStack_3d0);
  uVar3 = auStack_378._8_8_;
  if ((long *)auStack_378._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_378._8_8_ + 8);
    lVar10 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_378._8_8_ + 0x10))(auStack_378._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e48a0e0(auStack_368);
  func_0x048b0bc0(&uStack_350);
  if (bVar22) {
    func_0x0412a280(puVar11,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x137170d  Camera Aim-Assist Preset
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
