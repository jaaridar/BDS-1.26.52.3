/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd8dc870 (ELF vaddr 0xd7dc870)
 * Label: caller-of-callee
 * Body:  [[0d8dc870, 0d8dc9c2] [0d8dc9d0, 0d8dd281] [0d8dd290, 0d8dd3bc]]
 * Ghidra: FUN_0d8dc870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d8dc870(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  code *pcVar15;
  long lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_228 [16];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined5 uStack_1df;
  undefined2 uStack_1da;
  undefined1 uStack_1d8;
  undefined5 uStack_1d7;
  undefined1 uStack_1d2;
  undefined1 uStack_1d1;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined2 uStack_168;
  undefined2 uStack_166;
  uint uStack_164;
  uint uStack_160;
  undefined1 uStack_15c;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  char cStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = func_0x0d935a70(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar17 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar16 = lVar7 + 9;
    if (bVar17) {
      lVar16 = *(long *)(lVar7 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar17) {
      uVar12 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0d935eb0(&uStack_b0,param_1,lVar16,uVar12);
  }
  else {
    func_0x0d935eb0(&uStack_b0,param_1,&DAT_014d75ff,0x19);
  }
  if (cStack_80 != '\0') {
    return;
  }
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar4 = _UNK_01302e65;
  puVar8[2] = _DAT_01302e5d;
  puVar8[3] = uVar4;
  uVar4 = _UNK_01302e55;
  *puVar8 = _DAT_01302e4d;
  puVar8[1] = uVar4;
  *(undefined2 *)(puVar8 + 4) = 0x6e;
  lVar16 = uStack_b0 + 0x18;
  lVar7 = func_0x0d935a70(lVar16);
  for (pbVar13 = *(byte **)(uStack_b0 + 0x50); pbVar13 != *(byte **)(uStack_b0 + 0x58);
      pbVar13 = pbVar13 + 0x38) {
    bVar3 = *pbVar13;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1d) goto LAB_0d8dc9da;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1d) {
LAB_0d8dc9da:
      if ((bVar3 & 1) == 0) {
        pbVar14 = pbVar13 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar13 + 0x10);
      }
      auVar18[0] = -(*pbVar14 == DAT_014e4030);
      auVar18[1] = -(pbVar14[1] == DAT_014e4030._1_1_);
      auVar18[2] = -(pbVar14[2] == DAT_014e4030._2_1_);
      auVar18[3] = -(pbVar14[3] == DAT_014e4030._3_1_);
      auVar18[4] = -(pbVar14[4] == DAT_014e4030._4_1_);
      auVar18[5] = -(pbVar14[5] == DAT_014e4030._5_1_);
      auVar18[6] = -(pbVar14[6] == DAT_014e4030._6_1_);
      auVar18[7] = -(pbVar14[7] == DAT_014e4030._7_1_);
      auVar18[8] = -(pbVar14[8] == DAT_014e4030._8_1_);
      auVar18[9] = -(pbVar14[9] == DAT_014e4030._9_1_);
      auVar18[10] = -(pbVar14[10] == DAT_014e4030._10_1_);
      auVar18[0xb] = -(pbVar14[0xb] == DAT_014e4030._11_1_);
      auVar18[0xc] = -(pbVar14[0xc] == DAT_014e4030._12_1_);
      auVar18[0xd] = -(pbVar14[0xd] == DAT_014e4030._13_1_);
      auVar18[0xe] = -(pbVar14[0xe] == DAT_014e4030._14_1_);
      auVar18[0xf] = -(pbVar14[0xf] == DAT_014e4030._15_1_);
      auVar19[0] = -(pbVar14[0xd] == DAT_014e1610);
      auVar19[1] = -(pbVar14[0xe] == DAT_014e1610._1_1_);
      auVar19[2] = -(pbVar14[0xf] == DAT_014e1610._2_1_);
      auVar19[3] = -(pbVar14[0x10] == DAT_014e1610._3_1_);
      auVar19[4] = -(pbVar14[0x11] == DAT_014e1610._4_1_);
      auVar19[5] = -(pbVar14[0x12] == DAT_014e1610._5_1_);
      auVar19[6] = -(pbVar14[0x13] == DAT_014e1610._6_1_);
      auVar19[7] = -(pbVar14[0x14] == DAT_014e1610._7_1_);
      auVar19[8] = -(pbVar14[0x15] == DAT_014e1610._8_1_);
      auVar19[9] = -(pbVar14[0x16] == DAT_014e1610._9_1_);
      auVar19[10] = -(pbVar14[0x17] == DAT_014e1610._10_1_);
      auVar19[0xb] = -(pbVar14[0x18] == DAT_014e1610._11_1_);
      auVar19[0xc] = -(pbVar14[0x19] == DAT_014e1610._12_1_);
      auVar19[0xd] = -(pbVar14[0x1a] == DAT_014e1610._13_1_);
      auVar19[0xe] = -(pbVar14[0x1b] == DAT_014e1610._14_1_);
      auVar19[0xf] = -(pbVar14[0x1c] == DAT_014e1610._15_1_);
      auVar19 = auVar19 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar13 == *(byte **)(uStack_b0 + 0x58)) {
LAB_0d8dca0c:
    if (iStack_88 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0d8dca7c;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      lVar7 = func_0x048b0c90(lVar16,lVar7,uStack_84,1);
      if (lVar7 == 0) {
        auStack_228 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_228);
        lVar7 = auStack_228._0_8_;
        if (auStack_228._0_8_ == 0) goto LAB_0d8dca7c;
      }
      if ((*(int *)(lVar7 + 0x50) == -0x45dcb126) && (*(long *)(lVar7 + 0x58) != 0)) {
        lVar7 = *(long *)(lVar7 + 0x58) + 0x40;
      }
      else {
LAB_0d8dca7c:
        lVar7 = 0;
      }
    }
    uStack_118 = 0;
    plStack_108 = (long *)&UNK_048b4ab0;
    pcStack_100 = (code *)&UNK_048b49f0;
    uStack_f8 = CONCAT35(uStack_f8._5_3_,0x1d33bd9c5);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
    *puVar9 = 0x29;
    puVar9[1] = 0x21;
    puVar9[2] = puVar8;
    *(undefined2 *)(puVar9 + 3) = 0x802;
    puVar9[4] = 0x10032001a0001;
    puVar9[5] = &UNK_01254d89;
    puVar9[6] = &UNK_01254d89;
    uStack_210 = (code *)&UNK_048b4ab0;
    pcStack_208 = (code *)&UNK_048b49f0;
    uStack_200 = CONCAT35(uStack_200._5_3_,0x1d33bd9c5);
    uStack_118 = 0;
    auStack_228._8_8_ = puVar9;
    auStack_228._0_8_ = &UNK_048b46e0;
    puStack_148 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_148 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar4 = _UNK_014d987e;
    uStack_158 = 0x21;
    uStack_150 = 0x1d;
    *(ulong *)((long)puStack_148 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
    *(undefined8 *)((long)puStack_148 + 0x15) = uVar4;
    uVar4 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
    *puStack_148 = _DAT_014d9869;
    puStack_148[1] = uVar4;
    *(undefined1 *)((long)puStack_148 + 0x1d) = 0;
    lVar7 = func_0x048b5060(lVar7,&uStack_158);
    *(undefined **)(lVar7 + 0x20) = &UNK_048b46e0;
    pcVar15 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar7 + 0x20) != auStack_228) {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
      if (*(code **)(lVar7 + 0x40) == (code *)0x0) {
LAB_0d8dcc0e:
        uVar4 = auStack_228._8_8_;
        auStack_228._8_8_ = 0;
        *puVar8 = uVar4;
      }
      else {
        (**(code **)(lVar7 + 0x40))(puVar8);
        if (uStack_200._4_1_ != '\0') {
          if (uStack_200._4_1_ != '\x02') goto LAB_0d8dcc0e;
          (*uStack_210)(5,auStack_228 + 8,puVar8);
        }
      }
      *(code **)(lVar7 + 0x38) = uStack_210;
      *(code **)(lVar7 + 0x40) = pcStack_208;
      *(undefined4 *)(lVar7 + 0x48) = (undefined4)uStack_200;
      *(char *)(lVar7 + 0x4c) = uStack_200._4_1_;
      pcVar15 = pcStack_208;
    }
    if ((uStack_158 & 1) != 0) {
      func_0x0412a280(puStack_148,uStack_158 & 0xfffffffffffffffe);
      pcVar15 = pcStack_208;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(auStack_228 + 8);
    }
    if (pcStack_100 != (code *)0x0) {
      (*pcStack_100)(&uStack_118);
    }
    puVar8 = (undefined8 *)0x0;
    bVar17 = false;
  }
  else {
    iVar5 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    bVar17 = true;
    if (iVar5 == _DAT_0f550754) goto LAB_0d8dca0c;
  }
  uStack_48 = uStack_90;
  uStack_58 = uStack_a0;
  uStack_50 = uStack_98;
  uStack_68 = uStack_b0;
  uStack_60 = uStack_a8;
  uStack_158 = uStack_b0;
  uStack_150 = uStack_a8;
  puStack_148 = (undefined8 *)uStack_a0;
  uStack_140 = uStack_98;
  uStack_138 = uStack_90;
  func_0x0d9363f0(auStack_228,uStack_b0 + 0x18);
  if (uStack_210._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_214,uStack_218) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_210) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    lVar7 = *(long *)(piVar10 + 0xc);
    while (lVar7 != auStack_228._8_8_) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar7 = *(long *)(piVar10 + 0xc);
    }
LAB_0d8dcd5f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_210._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_214,uStack_218) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_210) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8dcd5f;
    }
    if (uStack_210._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_214,uStack_218) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  if ((DAT_0f72c9d8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c9d8), iVar5 != 0)) {
    func_0x0d935c60(0xf72c9c0);
    func_0x0410844d(&DAT_0f72c9d8);
  }
  uStack_130 = 0xfe21484e00000001;
  lVar7 = uStack_158 + 0x18;
  auStack_228._0_8_ = func_0x0d935a70(lVar7);
  auStack_228._8_8_ = lVar7;
  func_0x0ed621a0(auStack_228,uStack_130._4_4_);
  auStack_228._0_2_ = 0x10;
  auStack_228._8_8_ = &uStack_150;
  uStack_218 = uStack_130._4_4_;
  uStack_210 = (code *)0x0;
  pcStack_208 = (code *)0x0;
  uStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  uStack_1e8 = 0x2a;
  uStack_1e7 = (undefined7)_DAT_0125b9c2;
  uStack_1e0 = (undefined1)((ulong)_DAT_0125b9c2 >> 0x38);
  uStack_1df = (undefined5)_UNK_0125b9ca;
  uStack_1da = 0x6e65;
  uStack_1d8 = 0x74;
  uStack_1d7 = 0x7365697469;
  uStack_1d2 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0x3f600000;
  func_0x048afb10(&lStack_1d0,8);
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  uStack_168 = 0xff00;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_160 = uStack_160 & 0xffffff00;
  uStack_15c = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar9 = &UNK_0ef46ef8;
  if (uStack_210 != (code *)0x0) {
    lVar7 = *(long *)uStack_210;
    uStack_210 = (code *)puVar9;
    (**(code **)(lVar7 + 8))();
    puVar9 = (undefined8 *)uStack_210;
  }
  uStack_210 = (code *)puVar9;
  uStack_118 = CONCAT44(uStack_118._4_4_,uStack_218);
  plStack_110 = (long *)0x0;
  plStack_108 = (long *)((ulong)plStack_108 & 0xffffffff00000000);
  pcStack_100 = (code *)0x1;
  uStack_f8 = 0;
  puStack_f0 = &UNK_04906f70;
  puStack_e8 = &SUB_048b06d0;
  puStack_e0 = &SUB_04906c50;
  puStack_d8 = &UNK_0d936750;
  puStack_d0 = &UNK_0d9368b0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  FUN_048b05a0(auStack_228._8_8_,&uStack_118);
  plVar11 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_b8 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      func_0x0412c2d0(plVar11);
    }
  }
  uVar4 = auStack_228._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_118 = CONCAT44(uStack_118._4_4_,_DAT_0f550a0c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  pcVar15 = pcStack_208;
  puVar9 = (undefined8 *)uStack_210;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_110 = plVar11 + 3;
  uStack_210 = (code *)0x0;
  pcStack_208 = (code *)0x0;
  plVar11[3] = (long)puVar9;
  plVar11[4] = (long)pcVar15;
  plVar11[7] = lStack_1f0;
  plVar11[5] = uStack_200;
  plVar11[6] = lStack_1f8;
  uStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  plVar11[10] = CONCAT17(uStack_1d1,CONCAT16(uStack_1d2,CONCAT51(uStack_1d7,uStack_1d8)));
  plVar11[8] = CONCAT71(uStack_1e7,uStack_1e8);
  plVar11[9] = CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0));
  uStack_1e8 = 0;
  uStack_1e7 = 0;
  uStack_1e0 = 0;
  uStack_1df = 0;
  uStack_1da = 0;
  uStack_1d8 = 0;
  uStack_1d7 = 0;
  uStack_1d2 = 0;
  uStack_1d1 = 0;
  plVar11[0xb] = lStack_1d0;
  plVar11[0xc] = lStack_1c8;
  plVar11[0xd] = lStack_1c0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  plVar11[0xe] = lStack_1b8;
  plVar11[0xf] = lStack_1b0;
  plVar11[0x10] = lStack_1a8;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_1a0;
  plVar11[0x12] = lStack_198;
  plVar11[0x13] = lStack_190;
  plVar11[0x14] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar11[0x17] = lStack_170;
  plVar11[0x15] = lStack_180;
  plVar11[0x16] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_15c,CONCAT43(uStack_160,uStack_164._1_3_));
  plVar11[0x18] = CONCAT44(uStack_164,CONCAT22(uStack_166,uStack_168));
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  plStack_108 = plVar11;
  func_0x048afd20(uVar4,&uStack_118);
  plVar11 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_108 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar11);
    }
  }
  lVar7 = *(long *)(uVar4 + 0x10);
  iVar5 = *(int *)(uVar4 + 0x1c);
  if (iVar5 == 2) {
    piVar10 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != *(int *)(uVar4 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(uVar4 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | auStack_228._0_4_ << 0x10;
      }
      goto LAB_0d8dd29d;
    }
    piVar10 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
    iVar5 = *piVar10;
    while (iVar5 != *(int *)(uVar4 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar5 = *piVar10;
    }
  }
  piVar10[4] = piVar10[4] | auStack_228._0_4_ << 0x10;
LAB_0d8dd29d:
  func_0x048b0bc0(&uStack_210);
  if (bVar17) {
    func_0x0412a280(puVar8,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x125b9c2  remove_child_entities
 * 0x1302e4d  InstantDespawnComponentDefinition
 * 0x1302e5d  mponentDefinition
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
