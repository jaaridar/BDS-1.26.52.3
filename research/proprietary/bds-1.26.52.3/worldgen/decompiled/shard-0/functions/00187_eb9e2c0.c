/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xec9e2c0 (ELF vaddr 0xeb9e2c0)
 * Label: caller-of-callee
 * Body:  [[0ec9e2c0, 0ec9e521] [0ec9e530, 0eca1241] [0eca1250, 0eca19c0] [0eca19d0, 0eca1f78]]
 * Ghidra: FUN_0ec9e2c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ec9e2c0(long param_1)

{
  code *pcVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  code *pcVar14;
  int *piVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  code *pcStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  code *pcStack_3f0;
  undefined1 auStack_3e8 [16];
  undefined1 *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  undefined8 *puStack_3a0;
  undefined1 auStack_398 [16];
  long lStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined4 uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined2 uStack_2f0;
  undefined2 uStack_2ee;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined1 uStack_2e4;
  code *pcStack_2c8;
  code *pcStack_2c0;
  code *pcStack_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined4 uStack_28e;
  undefined2 uStack_28a;
  code *pcStack_288;
  code *pcStack_280;
  code *pcStack_278;
  code *pcStack_270;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  code *pcStack_248;
  code *pcStack_240;
  code *pcStack_238;
  code *pcStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code *pcStack_208;
  code *pcStack_200;
  code *pcStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code *pcStack_148;
  code *pcStack_140;
  code *pcStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  
  puStack_3a0 = (undefined8 *)param_1;
  if ((DAT_0f772bd0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772bd0), iVar7 != 0)) {
    func_0x0ecf0ad0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772b50,0xf53dab8);
    func_0x0410844d(&DAT_0f772bd0);
  }
  lStack_190 = (long)puStack_3a0 + 0x18;
  plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)((long)puStack_3a0 + 0x20) -
                                         *(long *)((long)puStack_3a0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f772b50 + 4)) * 8);
  do {
    lVar12 = *plVar13;
    if (lVar12 == -1) goto LAB_0ec9e340;
    plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)((long)puStack_3a0 + 0x30) + 8 + lVar12 * 0x18) !=
           *(uint *)(_DAT_0f772b50 + 4));
  if (plVar13 == *(long **)((long)puStack_3a0 + 0x38)) {
LAB_0ec9e340:
    puVar9 = &DAT_0f772b50;
    if (iRam000000000f772bb0 != -0x2b3da790) goto LAB_0ec9e3ad;
LAB_0ec9e36b:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0ec9e3ad;
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar21) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ecf10e0(&pcStack_2c8,puStack_3a0,lVar17,uVar20);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0ec9e36b;
LAB_0ec9e3ad:
    func_0x0ecf10e0(&pcStack_2c8,puStack_3a0,&UNK_0126dd36,0x12);
  }
  if ((char)uStack_298 == '\0') {
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0xd,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xd,8);
    }
    pcVar14 = pcStack_2c8;
    *puVar10 = 4;
    *(undefined4 *)(puVar10 + 1) = 0x61746562;
    *(undefined1 *)((long)puVar10 + 0xc) = 0;
    if ((DAT_0f772bd0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772bd0), iVar7 != 0)) {
      func_0x0ecf0ad0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f772b50,0xf53dab8);
      func_0x0410844d(&DAT_0f772bd0);
    }
    uVar20 = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar13 = (long *)(*(long *)(pcVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar14 + 0x20) - *(long *)(pcVar14 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f772b50 + 4)) * 8);
    do {
      lVar12 = *plVar13;
      if (lVar12 == -1) goto LAB_0ec9e4a0;
      plVar13 = (long *)(*(long *)(pcVar14 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(pcVar14 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(_DAT_0f772b50 + 4));
    if (plVar13 == *(long **)(pcVar14 + 0x38)) {
LAB_0ec9e4a0:
      puVar9 = &DAT_0f772b50;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    for (pbVar11 = *(byte **)(pcStack_2c8 + 0x50); pbVar11 != *(byte **)(pcStack_2c8 + 0x58);
        pbVar11 = pbVar11 + 0x38) {
      bVar3 = *pbVar11;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1d) goto LAB_0ec9e53a;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1d) {
LAB_0ec9e53a:
        if ((bVar3 & 1) == 0) {
          pbVar18 = pbVar11 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar11 + 0x10);
        }
        auVar22[0] = -(*pbVar18 == DAT_014e4030);
        auVar22[1] = -(pbVar18[1] == DAT_014e4030._1_1_);
        auVar22[2] = -(pbVar18[2] == DAT_014e4030._2_1_);
        auVar22[3] = -(pbVar18[3] == DAT_014e4030._3_1_);
        auVar22[4] = -(pbVar18[4] == DAT_014e4030._4_1_);
        auVar22[5] = -(pbVar18[5] == DAT_014e4030._5_1_);
        auVar22[6] = -(pbVar18[6] == DAT_014e4030._6_1_);
        auVar22[7] = -(pbVar18[7] == DAT_014e4030._7_1_);
        auVar22[8] = -(pbVar18[8] == DAT_014e4030._8_1_);
        auVar22[9] = -(pbVar18[9] == DAT_014e4030._9_1_);
        auVar22[10] = -(pbVar18[10] == DAT_014e4030._10_1_);
        auVar22[0xb] = -(pbVar18[0xb] == DAT_014e4030._11_1_);
        auVar22[0xc] = -(pbVar18[0xc] == DAT_014e4030._12_1_);
        auVar22[0xd] = -(pbVar18[0xd] == DAT_014e4030._13_1_);
        auVar22[0xe] = -(pbVar18[0xe] == DAT_014e4030._14_1_);
        auVar22[0xf] = -(pbVar18[0xf] == DAT_014e4030._15_1_);
        auVar23[0] = -(pbVar18[0xd] == DAT_014e1610);
        auVar23[1] = -(pbVar18[0xe] == DAT_014e1610._1_1_);
        auVar23[2] = -(pbVar18[0xf] == DAT_014e1610._2_1_);
        auVar23[3] = -(pbVar18[0x10] == DAT_014e1610._3_1_);
        auVar23[4] = -(pbVar18[0x11] == DAT_014e1610._4_1_);
        auVar23[5] = -(pbVar18[0x12] == DAT_014e1610._5_1_);
        auVar23[6] = -(pbVar18[0x13] == DAT_014e1610._6_1_);
        auVar23[7] = -(pbVar18[0x14] == DAT_014e1610._7_1_);
        auVar23[8] = -(pbVar18[0x15] == DAT_014e1610._8_1_);
        auVar23[9] = -(pbVar18[0x16] == DAT_014e1610._9_1_);
        auVar23[10] = -(pbVar18[0x17] == DAT_014e1610._10_1_);
        auVar23[0xb] = -(pbVar18[0x18] == DAT_014e1610._11_1_);
        auVar23[0xc] = -(pbVar18[0x19] == DAT_014e1610._12_1_);
        auVar23[0xd] = -(pbVar18[0x1a] == DAT_014e1610._13_1_);
        auVar23[0xe] = -(pbVar18[0x1b] == DAT_014e1610._14_1_);
        auVar23[0xf] = -(pbVar18[0x1c] == DAT_014e1610._15_1_);
        auVar23 = auVar23 & auVar22;
        if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(pcStack_2c8 + 0x58)) {
LAB_0ec9e568:
      uVar6 = uStack_29c;
      if (iStack_2a0 == 0) {
        if (((puVar9 == (undefined *)0x0) || (*(int *)(puVar9 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar9 + 0x68) == 0)) goto LAB_0ec9e5f9;
        lVar12 = *(long *)(puVar9 + 0x68) + 0x38;
      }
      else {
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)func_0x048aead0(pcVar14 + 0x18);
        }
        lVar12 = func_0x048b0c90(pcVar14 + 0x18,puVar9,uVar6,1);
        if (lVar12 == 0) {
          auStack_398 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_398);
          lVar12 = auStack_398._0_8_;
          if (auStack_398._0_8_ == 0) goto LAB_0ec9e5f9;
        }
        if ((*(int *)(lVar12 + 0x50) == -0x45dcb126) && (*(long *)(lVar12 + 0x58) != 0)) {
          lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
        }
        else {
LAB_0ec9e5f9:
          lVar12 = 0;
        }
      }
      pcStack_408 = (code *)0x0;
      pcStack_3f8 = (code *)&UNK_048b4ab0;
      pcStack_3f0 = (code *)&UNK_048b49f0;
      auStack_3e8._0_5_ = 0x1d33bd9c5;
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar10 = 0x4474706972635322;
      puVar10[1] = 0x6974706972637365;
      puVar10[2] = 0x6e6f;
      *(undefined2 *)(puVar10 + 3) = 0x801;
      puVar10[4] = 0x1270f270f270f;
      puVar10[5] = uVar20;
      puVar10[6] = 0;
      uStack_380 = (code *)&UNK_048b4ab0;
      pcStack_378 = (code *)&UNK_048b49f0;
      uStack_370 = CONCAT35(uStack_370._5_3_,0x1d33bd9c5);
      pcStack_408 = (code *)0x0;
      auStack_398._8_8_ = puVar10;
      auStack_398._0_8_ = &UNK_048b46e0;
      pcStack_278 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcStack_278 == (code *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar4 = _UNK_014d987e;
      pcStack_288 = (code *)0x21;
      pcStack_280 = (code *)0x1d;
      *(ulong *)(pcStack_278 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcStack_278 + 0x15) = uVar4;
      lVar17 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcStack_278 = _DAT_014d9869;
      *(long *)(pcStack_278 + 8) = lVar17;
      pcStack_278[0x1d] = (code)0x0;
      lVar12 = func_0x048b5060(lVar12,&pcStack_288);
      *(undefined **)(lVar12 + 0x20) = &UNK_048b46e0;
      pcVar14 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar12 + 0x20) != auStack_398) {
        puVar10 = (undefined8 *)(lVar12 + 0x28);
        if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0ec9e7a4:
          uVar4 = auStack_398._8_8_;
          auStack_398._8_8_ = 0;
          *puVar10 = uVar4;
        }
        else {
          (**(code **)(lVar12 + 0x40))(puVar10);
          if (uStack_370._4_1_ != '\0') {
            if (uStack_370._4_1_ != '\x02') goto LAB_0ec9e7a4;
            (*uStack_380)(5,auStack_398 + 8,puVar10);
          }
        }
        *(code **)(lVar12 + 0x38) = uStack_380;
        *(code **)(lVar12 + 0x40) = pcStack_378;
        *(undefined4 *)(lVar12 + 0x48) = (undefined4)uStack_370;
        *(char *)(lVar12 + 0x4c) = uStack_370._4_1_;
        pcVar14 = pcStack_378;
      }
      if (((ulong)pcStack_288 & 1) != 0) {
        thunk_FUN_0ee326a0(pcStack_278,(ulong)pcStack_288 & 0xfffffffffffffffe);
        pcVar14 = pcStack_378;
      }
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(auStack_398 + 8);
      }
      if (pcStack_3f0 != (code *)0x0) {
        (*pcStack_3f0)(&pcStack_408);
      }
      uVar20 = 0;
    }
    else {
      iVar7 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
        func_0x048b46f0(&DAT_0f550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar7 == _DAT_0f550754) goto LAB_0ec9e568;
    }
    uStack_1d8 = uStack_298;
    pcStack_1f0 = (code *)CONCAT71(uStack_2af,uStack_2b0);
    uStack_1e0 = CONCAT44(uStack_29c,iStack_2a0);
    uStack_1e8 = uStack_2a8;
    pcStack_1f8 = pcStack_2b8;
    pcStack_208 = pcStack_2c8;
    pcStack_200 = pcStack_2c0;
    func_0x0ecf16d0(auStack_398,pcStack_2c8 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9e8ef:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9e8ef;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf1c90(auStack_398,&pcStack_208,&UNK_012549ae,10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef474e0;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x49119f0) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_0490fc00;
    puStack_3c8 = &UNK_0ecf2240;
    puStack_3c0 = &UNK_0ecf2440;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf1f40(auStack_398);
    uStack_218 = CONCAT71(uStack_218._1_7_,(undefined1)uStack_1d8);
    uStack_228 = uStack_1e8;
    uStack_220 = uStack_1e0;
    pcStack_238 = pcStack_1f8;
    pcStack_230 = pcStack_1f0;
    pcStack_248 = pcStack_208;
    pcStack_240 = pcStack_200;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf16d0(auStack_398,pcStack_248 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9eb4f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9eb4f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf1c90(auStack_398,&pcStack_248,&UNK_01287961,0xd);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef474e0;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x49119f0) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_0490fc00;
    puStack_3c8 = &UNK_0ecf2610;
    puStack_3c0 = &UNK_0ecf2810;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf1f40(auStack_398);
    uStack_258 = CONCAT71(uStack_258._1_7_,(undefined1)uStack_218);
    auStack_268._8_8_ = uStack_220;
    auStack_268._0_8_ = uStack_228;
    pcStack_278 = pcStack_238;
    pcStack_270 = pcStack_230;
    pcStack_288 = pcStack_248;
    pcStack_280 = pcStack_240;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf16d0(auStack_398,pcStack_288 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9ed8f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9ed8f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf1c90(auStack_398,&pcStack_288,&UNK_011fb4a5,7);
    pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar14 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar14 = &UNK_0ef474e0;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = pcVar14;
      (**(code **)(lVar12 + 8))();
      pcVar14 = uStack_380;
    }
    uStack_380 = pcVar14;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x49119f0) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_0490fc00;
    puStack_3c8 = &UNK_0ecf29f0;
    puStack_3c0 = &UNK_0ecf2bf0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf1f40(auStack_398);
    FUN_048b0bc0(&uStack_380);
    if ((uVar20 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar20 & 0xff00ffffffffffff) - 8);
    }
  }
  if ((DAT_0f772c88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772c88), iVar7 != 0)) {
    func_0x0ecf3430();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772c08,0xf53dab8);
    func_0x0410844d(&DAT_0f772c88);
  }
  plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)((long)puStack_3a0 + 0x20) -
                                         *(long *)((long)puStack_3a0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f772c08 + 4)) * 8);
  do {
    lVar12 = *plVar13;
    if (lVar12 == -1) goto LAB_0ec9ef50;
    plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)((long)puStack_3a0 + 0x30) + 8 + lVar12 * 0x18) !=
           *(uint *)(_DAT_0f772c08 + 4));
  if (plVar13 == *(long **)((long)puStack_3a0 + 0x38)) {
LAB_0ec9ef50:
    puVar9 = &DAT_0f772c08;
    if (iRam000000000f772c68 != -0x2b3da790) goto LAB_0ec9efba;
LAB_0ec9ef7b:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0ec9efba;
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar21) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ecf39a0(&pcStack_2c8,puStack_3a0,lVar17,uVar20);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0ec9ef7b;
LAB_0ec9efba:
    func_0x0ecf39a0(&pcStack_2c8,puStack_3a0,&UNK_014c53b2,0x20);
  }
  if ((char)uStack_298 == '\0') {
    pcStack_170 = (code *)CONCAT71(uStack_2af,uStack_2b0);
    uStack_160 = CONCAT44(uStack_29c,iStack_2a0);
    pcStack_188 = pcStack_2c8;
    pcStack_180 = pcStack_2c0;
    pcStack_178 = pcStack_2b8;
    uStack_168 = uStack_2a8;
    uStack_158 = uStack_298;
    func_0x0ecf45d0(auStack_398,&pcStack_188,&UNK_013762e9,10,1);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0ef44b00;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x48b3f30) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &SUB_048b2190;
    puStack_3c8 = &UNK_0ecf4b90;
    puStack_3c0 = &UNK_0ecf4d50;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    pcStack_58 = pcStack_180;
    pcStack_50 = pcStack_178;
    pcStack_48 = pcStack_170;
    uStack_40 = uStack_168;
    FUN_048b0bc0(&uStack_380);
    if ((int)uStack_160 == 4) {
      if ((DAT_0f772c88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772c88), iVar7 != 0)) {
        func_0x0ecf3430();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f772c08,0xf53dab8);
        func_0x0410844d(&DAT_0f772c88);
      }
      plVar13 = (long *)(*(long *)(pcStack_188 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcStack_188 + 0x20) -
                                             *(long *)(pcStack_188 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f772c08 + 4)) * 8);
      do {
        lVar12 = *plVar13;
        if (lVar12 == -1) goto LAB_0ec9f2ad;
        plVar13 = (long *)(*(long *)(pcStack_188 + 0x30) + lVar12 * 0x18);
      } while (*(uint *)(*(long *)(pcStack_188 + 0x30) + 8 + lVar12 * 0x18) !=
               *(uint *)(_DAT_0f772c08 + 4));
      if (plVar13 == *(long **)(pcStack_188 + 0x38)) {
LAB_0ec9f2ad:
        puVar9 = &DAT_0f772c08;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar12 = func_0x048b1040(pcStack_188 + 0x18,puVar9,uStack_160._4_4_,1);
      if (lVar12 == 0) {
        auStack_398 = ZEXT816(0);
        func_0x048b10d0(auStack_398);
        lVar17 = *(long *)(auStack_398._0_8_ + 0x38);
        lVar12 = auStack_398._0_8_;
        if (lVar17 == 0) goto LAB_0eca1992;
LAB_0eca19b7:
        do {
          lVar12 = lVar17;
          lVar17 = *(long *)(lVar12 + 0x38);
          if (*(long *)(lVar12 + 0x38) == 0) {
            auStack_398 = ZEXT816(0);
            func_0x048b10d0(auStack_398);
            lVar17 = auStack_398._0_8_;
          }
        } while (lVar17 != 0);
      }
      else {
        lVar17 = *(long *)(lVar12 + 0x38);
        if (*(long *)(lVar12 + 0x38) != 0) goto LAB_0eca19b7;
LAB_0eca1992:
        auStack_398 = ZEXT816(0);
        func_0x048b10d0(auStack_398);
        lVar17 = auStack_398._0_8_;
        if (auStack_398._0_8_ != 0) goto LAB_0eca19b7;
      }
      lVar12 = *(long *)(lVar12 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f489570;
      *(undefined1 *)(puVar10 + 4) = 0;
      *(undefined1 *)(puVar10 + 7) = 0;
      plVar13 = *(long **)(lVar12 + 8);
      *(undefined8 **)(lVar12 + 8) = puVar10;
joined_r0x0eca1a6c:
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if ((int)uStack_160 == 1) {
      if ((DAT_0f772c88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772c88), iVar7 != 0)) {
        func_0x0ecf3430();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f772c08,0xf53dab8);
        func_0x0410844d(&DAT_0f772c88);
      }
      plVar13 = (long *)(*(long *)(pcStack_188 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(pcStack_188 + 0x20) -
                                             *(long *)(pcStack_188 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f772c08 + 4)) * 8);
      do {
        lVar12 = *plVar13;
        if (lVar12 == -1) goto LAB_0ec9f230;
        plVar13 = (long *)(*(long *)(pcStack_188 + 0x30) + lVar12 * 0x18);
      } while (*(uint *)(*(long *)(pcStack_188 + 0x30) + 8 + lVar12 * 0x18) !=
               *(uint *)(_DAT_0f772c08 + 4));
      if (plVar13 == *(long **)(pcStack_188 + 0x38)) {
LAB_0ec9f230:
        puVar9 = &DAT_0f772c08;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar12 = func_0x048b0c90(pcStack_188 + 0x18,puVar9,uStack_160._4_4_,1);
      if (lVar12 == 0) {
        auStack_398 = ZEXT816(0);
        func_0x048b0d20(auStack_398);
        lVar12 = auStack_398._0_8_;
      }
      lVar12 = *(long *)(lVar12 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0xff;
      *puVar10 = &UNK_0f489570;
      *(undefined1 *)(puVar10 + 4) = 0;
      *(undefined1 *)(puVar10 + 7) = 0;
      plVar13 = *(long **)(lVar12 + 8);
      *(undefined8 **)(lVar12 + 8) = puVar10;
      goto joined_r0x0eca1a6c;
    }
    pcStack_110 = pcStack_188;
    pcStack_108 = pcStack_58;
    pcStack_100 = pcStack_50;
    pcStack_f8 = pcStack_48;
    uStack_f0 = uStack_40;
    iStack_e8 = (int)uStack_160;
    uStack_e4 = uStack_160._4_4_;
    uStack_e0 = (undefined1)uStack_158;
    func_0x0ecf3f90(auStack_398,pcStack_188 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9f48f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9f48f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_110,&UNK_012e9009,9,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f019f20;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5fb1960) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_05faeee0;
    puStack_3c8 = &UNK_0ecf4f20;
    puStack_3c0 = &UNK_0ecf5070;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_a8 = uStack_e0;
    uStack_b0 = CONCAT44(uStack_e4,iStack_e8);
    uStack_b8 = uStack_f0;
    pcStack_c8 = pcStack_100;
    pcStack_c0 = pcStack_f8;
    pcStack_d8 = pcStack_110;
    pcStack_d0 = pcStack_108;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_d8 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9f6ef:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9f6ef;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_d8,&UNK_013db988,8,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f019f20;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5fb1960) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_05faeee0;
    puStack_3c8 = &UNK_0ecf5250;
    puStack_3c0 = &UNK_0ecf53a0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_68 = uStack_a8;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    pcStack_88 = pcStack_c8;
    pcStack_80 = pcStack_c0;
    pcStack_98 = pcStack_d8;
    pcStack_90 = pcStack_d0;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_98 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9f92f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9f92f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_98,&UNK_01232073,8,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f019f20;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5fb1960) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_05faeee0;
    puStack_3c8 = &UNK_0ecf5580;
    puStack_3c0 = &UNK_0ecf56d0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_118 = uStack_68;
    uStack_128 = uStack_78;
    uStack_120 = uStack_70;
    pcStack_138 = pcStack_88;
    pcStack_130 = pcStack_80;
    pcStack_148 = pcStack_98;
    pcStack_140 = pcStack_90;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_148 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9fb6f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9fb6f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_148,&UNK_0139ed41,10,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f019f20;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5fb1960) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_05faeee0;
    puStack_3c8 = &UNK_0ecf58b0;
    puStack_3c0 = &UNK_0ecf5a00;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_198 = CONCAT71(uStack_198._1_7_,uStack_118);
    uStack_1a8 = uStack_128;
    uStack_1a0 = uStack_120;
    pcStack_1b8 = pcStack_138;
    pcStack_1b0 = pcStack_130;
    pcStack_1c8 = pcStack_148;
    pcStack_1c0 = pcStack_140;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_1c8 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9fdaf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9fdaf;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_1c8,&DAT_014082b1,0x10,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f019f20;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5fb1960) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_05faeee0;
    puStack_3c8 = &UNK_0ecf5be0;
    puStack_3c0 = &UNK_0ecf5d40;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_1d8 = CONCAT71(uStack_1d8._1_7_,(undefined1)uStack_198);
    uStack_1e8 = uStack_1a8;
    uStack_1e0 = uStack_1a0;
    pcStack_1f8 = pcStack_1b8;
    pcStack_1f0 = pcStack_1b0;
    pcStack_208 = pcStack_1c8;
    pcStack_200 = pcStack_1c0;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_208 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0ec9ffef:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0ec9ffef;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_208,&UNK_0143d745,0xd,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f019f20;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5fb1960) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_05faeee0;
    puStack_3c8 = &UNK_0ecf5f20;
    puStack_3c0 = &UNK_0ecf6080;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_218 = CONCAT71(uStack_218._1_7_,(undefined1)uStack_1d8);
    uStack_228 = uStack_1e8;
    uStack_220 = uStack_1e0;
    pcStack_238 = pcStack_1f8;
    pcStack_230 = pcStack_1f0;
    pcStack_248 = pcStack_208;
    pcStack_240 = pcStack_200;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_248 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0eca022f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eca022f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_248,&UNK_012cac58,7,0x10);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f4e0e10;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0xecf3010) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_0ecf0a10;
    puStack_3c8 = &UNK_0ecf6260;
    puStack_3c0 = &UNK_0ecf64c0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    uStack_258 = CONCAT71(uStack_258._1_7_,(undefined1)uStack_218);
    auStack_268._8_8_ = uStack_220;
    auStack_268._0_8_ = uStack_228;
    pcStack_278 = pcStack_238;
    pcStack_270 = pcStack_230;
    pcStack_288 = pcStack_248;
    pcStack_280 = pcStack_240;
    FUN_048b0bc0(&uStack_380);
    func_0x0ecf3f90(auStack_398,pcStack_288 + 0x18);
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != auStack_398._8_8_) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0eca048f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(lStack_388 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0eca048f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(lStack_388 + 0x18) = *(uint *)(lStack_388 + 0x18) | 0x40000;
      }
    }
    func_0x0ecf45d0(auStack_398,&pcStack_288,&UNK_01443c73,0x12,0x10);
    pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar14 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar14 = &UNK_0ef474e0;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = pcVar14;
      (**(code **)(lVar12 + 8))();
      pcVar14 = uStack_380;
    }
    uStack_380 = pcVar14;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x49119f0) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &UNK_0490fc00;
    puStack_3c8 = &UNK_0ecf66a0;
    puStack_3c0 = &UNK_0ecf68b0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecf4890(auStack_398);
    FUN_048b0bc0(&uStack_380);
  }
  if ((DAT_0f772a60 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772a60), iVar7 != 0)) {
    func_0x0ececc70();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7729e0,0xf53dab8);
    func_0x0410844d(&DAT_0f772a60);
  }
  plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)((long)puStack_3a0 + 0x20) -
                                         *(long *)((long)puStack_3a0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f7729e0 + 4)) * 8);
  do {
    lVar12 = *plVar13;
    if (lVar12 == -1) goto LAB_0eca0630;
    plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)((long)puStack_3a0 + 0x30) + 8 + lVar12 * 0x18) !=
           *(uint *)(_DAT_0f7729e0 + 4));
  if (plVar13 == *(long **)((long)puStack_3a0 + 0x38)) {
LAB_0eca0630:
    puVar9 = &DAT_0f7729e0;
    if (iRam000000000f772a40 != -0x2b3da790) goto LAB_0eca069a;
LAB_0eca065b:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0eca069a;
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar21) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0eced0b0(&pcStack_288,puStack_3a0,lVar17,uVar20);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0eca065b;
LAB_0eca069a:
    func_0x0eced0b0(&pcStack_288,puStack_3a0,&DAT_011e093f,0x17);
  }
  if ((char)uStack_258 == '\0') {
    uStack_1a8 = auStack_268._0_8_;
    uStack_1a0 = auStack_268._8_8_;
    pcStack_1c8 = pcStack_288;
    pcStack_1c0 = pcStack_280;
    pcStack_1b8 = pcStack_278;
    pcStack_1b0 = pcStack_270;
    uStack_198 = uStack_258;
    func_0x0ecedbd0(auStack_398,&pcStack_1c8,&UNK_013c2ccd,5);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0126a0;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = (long *)uStack_380;
    }
    uStack_380 = (code *)plVar13;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5daeda0) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &SUB_05daea90;
    puStack_3c8 = &UNK_0ecee150;
    puStack_3c0 = &UNK_0ecee2b0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecede50(auStack_398);
    uStack_1d8 = CONCAT71(uStack_1d8._1_7_,(undefined1)uStack_198);
    uStack_1e8 = uStack_1a8;
    uStack_1e0 = uStack_1a0;
    pcStack_1f8 = pcStack_1b8;
    pcStack_1f0 = pcStack_1b0;
    pcStack_208 = pcStack_1c8;
    pcStack_200 = pcStack_1c0;
    FUN_048b0bc0(&uStack_380);
    uStack_28e = 0;
    uStack_28a = 0;
    pcStack_2c0 = (code *)0xffffffffffffffff;
    pcStack_2b8 = (code *)0x0;
    uStack_2b0 = 0xff;
    pcStack_2c8 = (code *)&UNK_0f0edc68;
    uStack_2a8 = 0;
    iStack_2a0 = (int)_DAT_014f0238;
    uStack_29c = (undefined4)((ulong)_DAT_014f0238 >> 0x20);
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x0eca9650(&pcStack_248,&pcStack_208,&pcStack_2c8);
    func_0x0ecedbd0(auStack_398,&pcStack_248,&UNK_013c2cd3,6);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f0126a0;
    if (uStack_380 != (code *)0x0) {
      lVar12 = *(long *)uStack_380;
      uStack_380 = (code *)puVar10;
      (**(code **)(lVar12 + 8))();
      puVar10 = (undefined8 *)uStack_380;
    }
    uStack_380 = (code *)puVar10;
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x1;
    auStack_3e8 = ZEXT816(0x5daeda0) << 0x40;
    puStack_3d8 = &SUB_048b06d0;
    puStack_3d0 = &SUB_05daea90;
    puStack_3c8 = &UNK_0ecee480;
    puStack_3c0 = &UNK_0ecee5e0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0ecede50(auStack_398);
    puStack_3d8 = (undefined1 *)CONCAT71(puStack_3d8._1_7_,(undefined1)uStack_218);
    auStack_3e8._8_8_ = uStack_220;
    auStack_3e8._0_8_ = uStack_228;
    pcStack_3f8 = pcStack_238;
    pcStack_3f0 = pcStack_230;
    pcStack_408 = pcStack_248;
    pcStack_400 = pcStack_240;
    FUN_048b0bc0(&uStack_380);
    lStack_388 = 0;
    uStack_380 = (code *)CONCAT71(uStack_380._1_7_,0xff);
    auStack_398._8_8_ = 0xffffffffffffffff;
    auStack_398._0_8_ = &UNK_0f0edc68;
    pcStack_378 = (code *)0x0;
    uStack_370 = _DAT_014f0238;
    lStack_368 = 0;
    puStack_360 = (undefined8 *)0x0;
    func_0x0eca9650(&pcStack_148,&pcStack_408,auStack_398);
  }
  if ((DAT_0f772b18 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772b18), iVar7 != 0)) {
    func_0x0ecee880();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f772a98,0xf53dab8);
    func_0x0410844d(&DAT_0f772b18);
  }
  plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)((long)puStack_3a0 + 0x20) -
                                         *(long *)((long)puStack_3a0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f772a98 + 4)) * 8);
  do {
    lVar12 = *plVar13;
    if (lVar12 == -1) goto LAB_0eca0b40;
    plVar13 = (long *)(*(long *)((long)puStack_3a0 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)((long)puStack_3a0 + 0x30) + 8 + lVar12 * 0x18) !=
           *(uint *)(_DAT_0f772a98 + 4));
  if (plVar13 == *(long **)((long)puStack_3a0 + 0x38)) {
LAB_0eca0b40:
    puVar9 = &DAT_0f772a98;
    if (iRam000000000f772af8 != -0x2b3da790) goto LAB_0eca0bc4;
LAB_0eca0b6b:
    lVar12 = *(long *)(puVar9 + 0x68);
    if (lVar12 == 0) goto LAB_0eca0bc4;
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar21) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ecef010(&pcStack_2c8,puStack_3a0,lVar17,uVar20);
    if ((char)uStack_298 != '\0') goto LAB_0eca0ba5;
LAB_0eca0be7:
    pcStack_270 = (code *)CONCAT71(uStack_2af,uStack_2b0);
    uStack_258 = uStack_298;
    pcStack_278 = pcStack_2b8;
    pcStack_288 = pcStack_2c8;
    pcStack_280 = pcStack_2c0;
    auStack_268._8_8_ = 0xf129c86c00000003;
    auStack_268._0_8_ = uStack_2a8;
    if ((DAT_0f772b18 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772b18), iVar7 != 0)) {
      func_0x0ecee880();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f772a98,0xf53dab8);
      func_0x0410844d(&DAT_0f772b18);
    }
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0f4e0d18;
    auStack_398._8_8_ = 0;
    auStack_398._0_8_ = puVar10;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar4 = _UNK_011e0947;
    lStack_388 = 0x1b;
    uStack_380 = (code *)0x17;
    *puVar10 = _DAT_011e093f;
    puVar10[1] = uVar4;
    *(undefined8 *)((long)puVar10 + 0xf) = 0x786f625f6e6f6973;
    *(undefined1 *)((long)puVar10 + 0x17) = 0;
    pcStack_378 = (code *)puVar10;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar4 = _UNK_011e0947;
    uStack_370 = 0x1b;
    lStack_368 = 0x17;
    *puVar10 = _DAT_011e093f;
    puVar10[1] = uVar4;
    *(undefined8 *)((long)puVar10 + 0xf) = 0x786f625f6e6f6973;
    *(undefined1 *)((long)puVar10 + 0x17) = 0;
    lStack_338 = 0;
    lStack_330 = 0;
    lStack_348 = 0;
    lStack_340 = 0;
    lStack_358 = 0;
    lStack_350 = 0;
    uStack_328 = 0x3f600000;
    puStack_360 = puVar10;
    func_0x048afb10(&lStack_358,8);
    lStack_300 = 0;
    lStack_2f8 = 0;
    lStack_310 = 0;
    lStack_308 = 0;
    lStack_320 = 0;
    lStack_318 = 0;
    uStack_2f0 = 0xff00;
    uStack_2ec = uStack_2ec & 0xffffff00;
    uStack_2e8 = uStack_2e8 & 0xffffff00;
    uStack_2e4 = 0;
    if ((DAT_0f772b38 == '\0') && (iVar7 = func_0x04108328(&DAT_0f772b38), iVar7 != 0)) {
      func_0x0ecee990();
      func_0x0410844d(&DAT_0f772b38);
    }
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,auStack_268._12_4_);
    pcStack_400 = (code *)0x0;
    pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
    pcStack_3f0 = (code *)0x2;
    auStack_3e8._8_8_ = &UNK_0ecefc60;
    auStack_3e8._0_8_ = 1;
    puStack_3d8 = &UNK_07d98660;
    puStack_3d0 = &UNK_0ececbb0;
    puStack_3c8 = &UNK_0ecefc80;
    puStack_3c0 = &UNK_0ecf0460;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    plStack_3a8 = (long *)0x0;
    func_0x048b05a0(&pcStack_280,&pcStack_408);
    plVar13 = plStack_3a8;
    if (plStack_3a8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_3a8 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
        func_0x0412c2d0(plVar13);
      }
    }
    pcStack_238 = pcStack_270;
    pcStack_230 = (code *)auStack_268._0_8_;
    pcStack_248 = pcStack_280;
    pcStack_240 = pcStack_278;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,_DAT_0f550a0c);
    pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar14 == (code *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(long *)(pcVar14 + 8) = 0;
    *(long *)(pcVar14 + 0x10) = 0;
    *(undefined **)pcVar14 = &UNK_0ef439d0;
    pcStack_400 = pcVar14 + 0x18;
    uVar4 = auStack_398._0_8_;
    uVar5 = auStack_398._8_8_;
    auStack_398 = ZEXT816(0);
    *(undefined8 *)(pcVar14 + 0x18) = uVar4;
    *(undefined8 *)(pcVar14 + 0x20) = uVar5;
    *(code **)(pcVar14 + 0x38) = pcStack_378;
    *(long *)(pcVar14 + 0x28) = lStack_388;
    *(code **)(pcVar14 + 0x30) = uStack_380;
    lStack_388 = 0;
    uStack_380 = (code *)0x0;
    pcStack_378 = (code *)0x0;
    *(undefined8 **)(pcVar14 + 0x50) = puStack_360;
    *(long *)(pcVar14 + 0x40) = uStack_370;
    *(long *)(pcVar14 + 0x48) = lStack_368;
    uStack_370 = 0;
    lStack_368 = 0;
    puStack_360 = (undefined8 *)0x0;
    *(long *)(pcVar14 + 0x58) = lStack_358;
    *(long *)(pcVar14 + 0x60) = lStack_350;
    *(long *)(pcVar14 + 0x68) = lStack_348;
    lStack_358 = 0;
    lStack_350 = 0;
    lStack_348 = 0;
    *(long *)(pcVar14 + 0x70) = lStack_340;
    *(long *)(pcVar14 + 0x78) = lStack_338;
    *(long *)(pcVar14 + 0x80) = lStack_330;
    lStack_340 = 0;
    lStack_338 = 0;
    lStack_330 = 0;
    *(undefined4 *)(pcVar14 + 0x88) = uStack_328;
    *(long *)(pcVar14 + 0x90) = lStack_320;
    *(long *)(pcVar14 + 0x98) = lStack_318;
    *(long *)(pcVar14 + 0xa0) = lStack_310;
    lStack_320 = 0;
    lStack_318 = 0;
    lStack_310 = 0;
    *(long *)(pcVar14 + 0xb8) = lStack_2f8;
    *(long *)(pcVar14 + 0xa8) = lStack_308;
    *(long *)(pcVar14 + 0xb0) = lStack_300;
    lStack_308 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    *(ulong *)(pcVar14 + 0xc5) = CONCAT17(uStack_2e4,CONCAT43(uStack_2e8,uStack_2ec._1_3_));
    *(long *)(pcVar14 + 0xc0) = CONCAT44(uStack_2ec,CONCAT22(uStack_2ee,uStack_2f0));
    pcStack_208 = (code *)0x0;
    pcStack_200 = (code *)0x0;
    pcStack_3f8 = pcVar14;
    func_0x048afd20(&pcStack_248,&pcStack_408);
    pcVar14 = pcStack_3f8;
    if (pcStack_3f8 != (code *)0x0) {
      LOCK();
      pcVar1 = pcStack_3f8 + 8;
      lVar12 = *(long *)pcVar1;
      *(long *)pcVar1 = *(long *)pcVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)pcStack_3f8 + 0x10))(pcStack_3f8);
        func_0x0412c2d0(pcVar14);
      }
    }
    pcVar14 = pcStack_200;
    if (pcStack_200 != (code *)0x0) {
      LOCK();
      pcVar1 = pcStack_200 + 8;
      lVar12 = *(long *)pcVar1;
      *(long *)pcVar1 = *(long *)pcVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)pcStack_200 + 0x10))(pcStack_200);
        func_0x0412c2d0(pcVar14);
      }
    }
    FUN_048b0bc0(auStack_398);
    lVar12 = func_0x05f71d50(lStack_190);
    if (*(int *)(lVar12 + 0x60) != -0x2b3da790) goto LAB_0eca1123;
LAB_0eca10df:
    lVar12 = *(long *)(lVar12 + 0x68);
    if (lVar12 == 0) goto LAB_0eca1123;
    bVar21 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar17 = lVar12 + 9;
    if (bVar21) {
      lVar17 = *(long *)(lVar12 + 0x18);
    }
    uVar20 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar21) {
      uVar20 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ecf6a90(&pcStack_2c8,puStack_3a0,lVar17,uVar20);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0eca0b6b;
LAB_0eca0bc4:
    func_0x0ecef010(&pcStack_2c8,puStack_3a0,&UNK_01357c90,0x2a);
    if ((char)uStack_298 == '\0') goto LAB_0eca0be7;
LAB_0eca0ba5:
    lVar12 = func_0x05f71d50(lStack_190);
    if (*(int *)(lVar12 + 0x60) == -0x2b3da790) goto LAB_0eca10df;
LAB_0eca1123:
    func_0x0ecf6a90(&pcStack_2c8,puStack_3a0,&UNK_013f5bf4,0x1d);
  }
  if ((char)uStack_298 != '\0') {
    return;
  }
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_01475131;
  *(ulong *)((long)puVar10 + 10) = CONCAT26(_UNK_0147512f,_DAT_01475129);
  *(undefined8 *)((long)puVar10 + 0x12) = uVar4;
  uVar4 = CONCAT62(_DAT_01475129,_UNK_01475127);
  *puVar10 = _DAT_0147511f;
  puVar10[1] = uVar4;
  *(undefined1 *)((long)puVar10 + 0x1a) = 0;
  puStack_3a0 = puVar10;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,0xd,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0xd,8);
  }
  *puVar10 = 4;
  *(undefined4 *)(puVar10 + 1) = 0x61746562;
  *(undefined1 *)((long)puVar10 + 0xc) = 0;
  pcVar14 = pcStack_2c8 + 0x18;
  lVar12 = func_0x05f71d50(pcVar14);
  pbVar18 = *(byte **)(pcStack_2c8 + 0x58);
  for (pbVar11 = *(byte **)(pcStack_2c8 + 0x50); pbVar11 != pbVar18; pbVar11 = pbVar11 + 0x38) {
    bVar3 = *pbVar11;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x24) goto LAB_0eca125a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x24) {
LAB_0eca125a:
      if ((bVar3 & 1) == 0) {
        pbVar19 = pbVar11 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar11 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar19,0x24);
      if (iVar7 == 0) break;
    }
  }
  uVar20 = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  if (pbVar11 != pbVar18) {
    iVar7 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(&DAT_0f550750);
      func_0x0410844d(&DAT_0f550768);
    }
    bVar21 = true;
    puVar10 = puStack_3a0;
    if (iVar7 != _DAT_0f550754) goto LAB_0eca154f;
  }
  if (iStack_2a0 == 0) {
    if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
    goto LAB_0eca131b;
    lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
  }
  else {
    lVar12 = func_0x048b0c90(pcVar14,lVar12,uStack_29c,1);
    if (lVar12 == 0) {
      auStack_398 = ZEXT816(0);
      func_0x048b0d20(auStack_398);
      lVar12 = auStack_398._0_8_;
      if (auStack_398._0_8_ == 0) goto LAB_0eca131b;
    }
    if ((*(int *)(lVar12 + 0x50) == -0x45dcb126) && (*(long *)(lVar12 + 0x58) != 0)) {
      lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
    }
    else {
LAB_0eca131b:
      lVar12 = 0;
    }
  }
  pcStack_408 = (code *)0x0;
  pcStack_3f8 = (code *)&UNK_048b4ab0;
  pcStack_3f0 = (code *)&UNK_048b49f0;
  auStack_3e8._0_5_ = 0x1d33bd9c5;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar10 = 0x21;
  puVar10[1] = 0x1a;
  puVar10[2] = puStack_3a0;
  *(undefined2 *)(puVar10 + 3) = 0x801;
  puVar10[4] = 0x1270f270f270f;
  puVar10[5] = uVar20;
  puVar10[6] = 0;
  uStack_380 = (code *)&UNK_048b4ab0;
  pcStack_378 = (code *)&UNK_048b49f0;
  uStack_370 = CONCAT35(uStack_370._5_3_,0x1d33bd9c5);
  pcStack_408 = (code *)0x0;
  auStack_398._8_8_ = puVar10;
  auStack_398._0_8_ = &UNK_048b46e0;
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  lVar17 = _UNK_014518c1;
  pcStack_1c8 = (code *)0x29;
  pcStack_1c0 = (code *)0x24;
  *(long *)(pcVar14 + 0x10) = _DAT_014518b9;
  *(long *)(pcVar14 + 0x18) = lVar17;
  lVar17 = _UNK_014518b1;
  *(long *)pcVar14 = _DAT_014518a9;
  *(long *)(pcVar14 + 8) = lVar17;
  *(undefined4 *)(pcVar14 + 0x20) = 0x5d797472;
  pcVar14[0x24] = (code)0x0;
  pcStack_1b8 = pcVar14;
  lVar12 = func_0x048b5060(lVar12,&pcStack_1c8);
  *(undefined **)(lVar12 + 0x20) = &UNK_048b46e0;
  pcVar14 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar12 + 0x20) != auStack_398) {
    puVar10 = (undefined8 *)(lVar12 + 0x28);
    if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0eca14bd:
      uVar4 = auStack_398._8_8_;
      auStack_398._8_8_ = 0;
      *puVar10 = uVar4;
    }
    else {
      (**(code **)(lVar12 + 0x40))(puVar10);
      if (uStack_370._4_1_ != '\0') {
        if (uStack_370._4_1_ != '\x02') goto LAB_0eca14bd;
        (*uStack_380)(5,auStack_398 + 8,puVar10);
      }
    }
    *(code **)(lVar12 + 0x38) = uStack_380;
    *(code **)(lVar12 + 0x40) = pcStack_378;
    *(undefined4 *)(lVar12 + 0x48) = (undefined4)uStack_370;
    *(char *)(lVar12 + 0x4c) = uStack_370._4_1_;
    pcVar14 = pcStack_378;
  }
  if (((ulong)pcStack_1c8 & 1) != 0) {
    thunk_FUN_0ee326a0(pcStack_1b8,(ulong)pcStack_1c8 & 0xfffffffffffffffe);
    pcVar14 = pcStack_378;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(auStack_398 + 8);
  }
  if (pcStack_3f0 != (code *)0x0) {
    (*pcStack_3f0)(&pcStack_408);
  }
  uVar20 = 0;
  bVar21 = false;
  puVar10 = (undefined8 *)0x0;
LAB_0eca154f:
  uStack_1d8 = uStack_298;
  pcStack_230 = (code *)CONCAT71(uStack_2af,uStack_2b0);
  uStack_220 = CONCAT44(uStack_29c,iStack_2a0);
  uStack_1e8 = uStack_2a8;
  pcStack_1f8 = pcStack_2b8;
  pcStack_208 = pcStack_2c8;
  pcStack_200 = pcStack_2c0;
  pcStack_248 = pcStack_2c8;
  pcStack_240 = pcStack_2c0;
  pcStack_238 = pcStack_2b8;
  uStack_228 = uStack_2a8;
  uStack_218 = uStack_298;
  pcStack_1f0 = pcStack_230;
  uStack_1e0 = uStack_220;
  func_0x0ecf73e0(auStack_398,&pcStack_248,&UNK_011ea907,0xb,1);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f4e0f68;
  if (uStack_380 != (code *)0x0) {
    lVar12 = *(long *)uStack_380;
    uStack_380 = (code *)plVar13;
    (**(code **)(lVar12 + 8))();
    plVar13 = (long *)uStack_380;
  }
  uStack_380 = (code *)plVar13;
  pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
  pcStack_400 = (code *)0x0;
  pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
  pcStack_3f0 = (code *)0x1;
  auStack_3e8 = ZEXT816(0xecf7ba0) << 0x40;
  puStack_3d8 = &SUB_048b06d0;
  puStack_3d0 = &UNK_0ecf3370;
  puStack_3c8 = &UNK_0ecf7c60;
  puStack_3c0 = &UNK_0ecf7de0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
  plVar13 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3a8 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ecf75e0(auStack_398);
  uStack_258 = CONCAT71(uStack_258._1_7_,(undefined1)uStack_218);
  auStack_268._8_8_ = uStack_220;
  auStack_268._0_8_ = uStack_228;
  pcStack_278 = pcStack_238;
  pcStack_270 = pcStack_230;
  pcStack_288 = pcStack_248;
  pcStack_280 = pcStack_240;
  FUN_048b0bc0(&uStack_380);
  func_0x0ecf73e0(auStack_398,&pcStack_288,&UNK_011ed181,10,0);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f4e0fe0;
  if (uStack_380 != (code *)0x0) {
    lVar12 = *(long *)uStack_380;
    uStack_380 = (code *)puVar16;
    (**(code **)(lVar12 + 8))();
    puVar16 = (undefined8 *)uStack_380;
  }
  uStack_380 = (code *)puVar16;
  pcStack_408 = (code *)CONCAT44(pcStack_408._4_4_,(undefined4)lStack_388);
  pcStack_400 = (code *)0x0;
  pcStack_3f8 = (code *)((ulong)pcStack_3f8 & 0xffffffff00000000);
  pcStack_3f0 = (code *)0x1;
  auStack_3e8 = ZEXT816(0xecf8480) << 0x40;
  puStack_3d8 = &SUB_048b06d0;
  puStack_3d0 = &UNK_0ecee7c0;
  puStack_3c8 = &UNK_0ecf8540;
  puStack_3c0 = &UNK_0ecf8880;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  func_0x048b05a0(auStack_398._8_8_,&pcStack_408);
  plVar13 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3a8 + 1;
    lVar12 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0ecf75e0(auStack_398);
  FUN_048b0bc0(&uStack_380);
  if ((uVar20 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar20 & 0xff00ffffffffffff) - 8);
  }
  if (bVar21) {
    thunk_FUN_0ee326a0(puVar10,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11e093f  minecraft:collision_box
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x147511f  AtomicClientEntityDocument
 * 0x1475129  ntEntityDocument
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
