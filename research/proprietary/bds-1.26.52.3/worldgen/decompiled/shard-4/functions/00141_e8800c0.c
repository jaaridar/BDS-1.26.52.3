/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9800c0 (ELF vaddr 0xe8800c0)
 * Label: string:BiomeTemperatureCategory
 * Body:  [[0e9800c0, 0e9801b5] [0e9801c0, 0e980202] [0e980210, 0e9807ce] [0e9807d0, 0e980811] [0e980820, 0e980e8c]]
 * Ghidra: FUN_0e9800c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9800c0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined *puVar16;
  long lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_218 [16];
  long *plStack_208;
  code *pcStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  char cStack_188;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  code *pcStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined1 auStack_70 [64];
  
  lVar7 = func_0x088b56b0(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar7 + 9);
    if (bVar18) {
      puVar16 = *(undefined **)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
  }
  else {
    puVar16 = &DAT_0137d3d1;
    uVar14 = 0x18;
  }
  func_0x088b5b10(auStack_218,param_1,puVar16,uVar14,0);
  puVar16 = puStack_1e8;
  puStack_1e8._0_5_ = (uint5)(uint)puStack_1e8;
  puVar10 = puStack_1e8;
  uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
  puStack_1e8._0_1_ = (char)puVar16;
  bVar18 = (char)puStack_1e8 == '\0';
  puStack_1e8 = puVar10;
  if (bVar18) {
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_0137d3d9;
    *puVar8 = _DAT_0137d3d1;
    puVar8[1] = uVar3;
    puVar8[2] = 0x79726f6765746143;
    *(undefined1 *)(puVar8 + 3) = 0;
    lVar17 = auStack_218._0_8_ + 0x18;
    lVar7 = func_0x088b56b0(lVar17);
    for (pbVar13 = *(byte **)(auStack_218._0_8_ + 0x50);
        pbVar13 != *(byte **)(auStack_218._0_8_ + 0x58); pbVar13 = pbVar13 + 0x38) {
      bVar2 = *pbVar13;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0e98021a;
      }
      else if (*(long *)(pbVar13 + 8) == 0x1d) {
LAB_0e98021a:
        if ((bVar2 & 1) == 0) {
          pbVar15 = pbVar13 + 1;
        }
        else {
          pbVar15 = *(byte **)(pbVar13 + 0x10);
        }
        auVar19[0] = -(*pbVar15 == DAT_014e4030);
        auVar19[1] = -(pbVar15[1] == DAT_014e4030._1_1_);
        auVar19[2] = -(pbVar15[2] == DAT_014e4030._2_1_);
        auVar19[3] = -(pbVar15[3] == DAT_014e4030._3_1_);
        auVar19[4] = -(pbVar15[4] == DAT_014e4030._4_1_);
        auVar19[5] = -(pbVar15[5] == DAT_014e4030._5_1_);
        auVar19[6] = -(pbVar15[6] == DAT_014e4030._6_1_);
        auVar19[7] = -(pbVar15[7] == DAT_014e4030._7_1_);
        auVar19[8] = -(pbVar15[8] == DAT_014e4030._8_1_);
        auVar19[9] = -(pbVar15[9] == DAT_014e4030._9_1_);
        auVar19[10] = -(pbVar15[10] == DAT_014e4030._10_1_);
        auVar19[0xb] = -(pbVar15[0xb] == DAT_014e4030._11_1_);
        auVar19[0xc] = -(pbVar15[0xc] == DAT_014e4030._12_1_);
        auVar19[0xd] = -(pbVar15[0xd] == DAT_014e4030._13_1_);
        auVar19[0xe] = -(pbVar15[0xe] == DAT_014e4030._14_1_);
        auVar19[0xf] = -(pbVar15[0xf] == DAT_014e4030._15_1_);
        auVar21[0] = -(pbVar15[0xd] == DAT_014e1610);
        auVar21[1] = -(pbVar15[0xe] == DAT_014e1610._1_1_);
        auVar21[2] = -(pbVar15[0xf] == DAT_014e1610._2_1_);
        auVar21[3] = -(pbVar15[0x10] == DAT_014e1610._3_1_);
        auVar21[4] = -(pbVar15[0x11] == DAT_014e1610._4_1_);
        auVar21[5] = -(pbVar15[0x12] == DAT_014e1610._5_1_);
        auVar21[6] = -(pbVar15[0x13] == DAT_014e1610._6_1_);
        auVar21[7] = -(pbVar15[0x14] == DAT_014e1610._7_1_);
        auVar21[8] = -(pbVar15[0x15] == DAT_014e1610._8_1_);
        auVar21[9] = -(pbVar15[0x16] == DAT_014e1610._9_1_);
        auVar21[10] = -(pbVar15[0x17] == DAT_014e1610._10_1_);
        auVar21[0xb] = -(pbVar15[0x18] == DAT_014e1610._11_1_);
        auVar21[0xc] = -(pbVar15[0x19] == DAT_014e1610._12_1_);
        auVar21[0xd] = -(pbVar15[0x1a] == DAT_014e1610._13_1_);
        auVar21[0xe] = -(pbVar15[0x1b] == DAT_014e1610._14_1_);
        auVar21[0xf] = -(pbVar15[0x1c] == DAT_014e1610._15_1_);
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
    if (pbVar13 == *(byte **)(auStack_218._0_8_ + 0x58)) {
LAB_0e98024c:
      if ((int)uStack_1f0 == 0) {
        if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
        goto LAB_0e9802ba;
        lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
      }
      else {
        lVar7 = func_0x048b0c90(lVar17,lVar7,uStack_1f0._4_4_,1);
        if (lVar7 == 0) {
          auStack_1b8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1b8);
          lVar7 = auStack_1b8._0_8_;
          if (auStack_1b8._0_8_ == 0) goto LAB_0e9802ba;
        }
        if ((*(int *)(lVar7 + 0x50) == -0x45dcb126) && (*(long *)(lVar7 + 0x58) != 0)) {
          lVar7 = *(long *)(lVar7 + 0x58) + 0x40;
        }
        else {
LAB_0e9802ba:
          lVar7 = 0;
        }
      }
      uStack_178 = 0;
      puStack_168 = &UNK_048b4ab0;
      pcStack_160 = (code *)&UNK_048b49f0;
      pcStack_158 = (code *)CONCAT35(pcStack_158._5_3_,0x1d33bd9c5);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      *puVar9 = 0x21;
      puVar9[1] = 0x18;
      puVar9[2] = puVar8;
      *(undefined2 *)(puVar9 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar9 + 4) = (undefined1  [16])0x0;
      puVar9[6] = 0;
      pcStack_1a0 = (code *)&UNK_048b4ab0;
      pcStack_198 = (code *)&UNK_048b49f0;
      iStack_190 = -0x2cc4263b;
      uStack_18c = CONCAT31(uStack_18c._1_3_,1);
      uStack_178 = 0;
      auStack_1b8._8_8_ = puVar9;
      auStack_1b8._0_8_ = &UNK_048b46e0;
      puStack_128 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_128 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_014d987e;
      uStack_138 = 0x21;
      uStack_130 = 0x1d;
      *(ulong *)((long)puStack_128 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_128 + 0x15) = uVar3;
      uVar3 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_128 = _DAT_014d9869;
      puStack_128[1] = uVar3;
      *(undefined1 *)((long)puStack_128 + 0x1d) = 0;
      lVar7 = func_0x048b5060(lVar7,&uStack_138);
      *(undefined **)(lVar7 + 0x20) = &UNK_048b46e0;
      pcVar11 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar7 + 0x20) != auStack_1b8) {
        puVar8 = (undefined8 *)(lVar7 + 0x28);
        if (*(code **)(lVar7 + 0x40) == (code *)0x0) {
LAB_0e980453:
          uVar3 = auStack_1b8._8_8_;
          auStack_1b8._8_8_ = 0;
          *puVar8 = uVar3;
        }
        else {
          (**(code **)(lVar7 + 0x40))(puVar8);
          if ((char)uStack_18c != '\0') {
            if ((char)uStack_18c != '\x02') goto LAB_0e980453;
            (*pcStack_1a0)(5,auStack_1b8 + 8,puVar8);
          }
        }
        *(code **)(lVar7 + 0x38) = pcStack_1a0;
        *(code **)(lVar7 + 0x40) = pcStack_198;
        *(int *)(lVar7 + 0x48) = iStack_190;
        *(char *)(lVar7 + 0x4c) = (char)uStack_18c;
        pcVar11 = pcStack_198;
      }
      if ((uStack_138 & 1) != 0) {
        func_0x0412a280(puStack_128,uStack_138 & 0xfffffffffffffffe);
        pcVar11 = pcStack_198;
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(auStack_1b8 + 8);
      }
      if (pcStack_160 != (code *)0x0) {
        (*pcStack_160)(&uStack_178);
      }
      puVar8 = (undefined8 *)0x0;
      bVar18 = false;
    }
    else {
      iVar5 = *(int *)(pbVar13 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      bVar18 = true;
      if (iVar5 == _DAT_0f550754) goto LAB_0e98024c;
    }
    uStack_c8 = puStack_1e8;
    uStack_c0 = uStack_1e0;
    pcStack_d8 = pcStack_1f8;
    uStack_d0 = uStack_1f0;
    uStack_e8 = plStack_208;
    uStack_e0 = pcStack_200;
    func_0x088b42d0(&uStack_b8,auStack_f8,&UNK_013a0ce3,6);
    func_0x088b46b0(&uStack_138,&uStack_b8,&UNK_0121ddb3,4);
    func_0x088b4a90(&uStack_178,&uStack_138,&UNK_013daed0,8);
    FUN_088b4e70(auStack_1b8,&uStack_178,&UNK_014436dc,4);
    func_0x088b5250(auStack_70,auStack_1b8,&UNK_0129b703,6);
    if (bVar18) {
      func_0x0412a280(puVar8,0);
    }
  }
  auStack_218._8_8_ = 0x24;
  auStack_218._0_8_ = &DAT_01e366e0;
  plStack_208 = (long *)&UNK_011e870d;
  pcStack_200 = (code *)0x1b;
  func_0x0470d9a0(&uStack_178,&UNK_014c494c,0x10,0xdd,auStack_218);
  uVar14 = uStack_178 >> 1 & 0x7f;
  puVar16 = (undefined *)((long)&uStack_178 + 1);
  if ((uStack_178 & 1) != 0) {
    uVar14 = uStack_170;
    puVar16 = puStack_168;
  }
  if ((DAT_0f767170 == '\0') && (iVar5 = func_0x04108328(&DAT_0f767170), iVar5 != 0)) {
    func_0x0e9dcca0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7670f0,0xf53dab8);
    func_0x0410844d(&DAT_0f767170);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7670f0 + 4)) * 8);
  do {
    lVar7 = *plVar12;
    if (lVar7 == -1) goto LAB_0e9806a1;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7670f0 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e9806a1:
    puVar10 = &DAT_0f7670f0;
    iVar5 = iRam000000000f767150;
  }
  else {
    puVar10 = (undefined *)plVar12[2];
    iVar5 = *(int *)(puVar10 + 0x60);
  }
  if ((iVar5 == -0x2b3da790) && (lVar7 = *(long *)(puVar10 + 0x68), lVar7 != 0)) {
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    puVar16 = (undefined *)(lVar7 + 9);
    if (bVar18) {
      puVar16 = *(undefined **)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
  }
  func_0x0e9dd140(auStack_1b8,param_1,puVar16,uVar14);
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if (cStack_188 != '\0') {
    return;
  }
  uVar3 = auStack_1b8._0_8_;
  if ((DAT_0f767170 == '\0') && (iVar5 = func_0x04108328(&DAT_0f767170), iVar5 != 0)) {
    func_0x0e9dcca0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7670f0,0xf53dab8);
    func_0x0410844d(&DAT_0f767170);
  }
  plVar12 = (long *)(*(long *)(uVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar3 + 0x20) - *(long *)(uVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f7670f0 + 4)) * 8);
  do {
    lVar7 = *plVar12;
    if (lVar7 == -1) goto LAB_0e980791;
    plVar12 = (long *)(*(long *)(uVar3 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(uVar3 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7670f0 + 4));
  if (plVar12 == *(long **)(uVar3 + 0x38)) {
LAB_0e980791:
    puVar16 = &DAT_0f7670f0;
  }
  else {
    puVar16 = (undefined *)plVar12[2];
  }
  for (pbVar13 = *(byte **)(auStack_1b8._0_8_ + 0x50);
      pbVar13 != *(byte **)(auStack_1b8._0_8_ + 0x58); pbVar13 = pbVar13 + 0x38) {
    bVar2 = *pbVar13;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e98082a;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0e98082a:
      if ((bVar2 & 1) == 0) {
        pbVar15 = pbVar13 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar13 + 0x10);
      }
      auVar20[0] = -(*pbVar15 == DAT_014eaba0);
      auVar20[1] = -(pbVar15[1] == DAT_014eaba0._1_1_);
      auVar20[2] = -(pbVar15[2] == DAT_014eaba0._2_1_);
      auVar20[3] = -(pbVar15[3] == DAT_014eaba0._3_1_);
      auVar20[4] = -(pbVar15[4] == DAT_014eaba0._4_1_);
      auVar20[5] = -(pbVar15[5] == DAT_014eaba0._5_1_);
      auVar20[6] = -(pbVar15[6] == DAT_014eaba0._6_1_);
      auVar20[7] = -(pbVar15[7] == DAT_014eaba0._7_1_);
      auVar20[8] = -(pbVar15[8] == DAT_014eaba0._8_1_);
      auVar20[9] = -(pbVar15[9] == DAT_014eaba0._9_1_);
      auVar20[10] = -(pbVar15[10] == DAT_014eaba0._10_1_);
      auVar20[0xb] = -(pbVar15[0xb] == DAT_014eaba0._11_1_);
      auVar20[0xc] = -(pbVar15[0xc] == DAT_014eaba0._12_1_);
      auVar20[0xd] = -(pbVar15[0xd] == DAT_014eaba0._13_1_);
      auVar20[0xe] = -(pbVar15[0xe] == DAT_014eaba0._14_1_);
      auVar20[0xf] = -(pbVar15[0xf] == DAT_014eaba0._15_1_);
      auVar22[0] = -(pbVar15[10] == DAT_014e4ff0);
      auVar22[1] = -(pbVar15[0xb] == DAT_014e4ff0._1_1_);
      auVar22[2] = -(pbVar15[0xc] == DAT_014e4ff0._2_1_);
      auVar22[3] = -(pbVar15[0xd] == DAT_014e4ff0._3_1_);
      auVar22[4] = -(pbVar15[0xe] == DAT_014e4ff0._4_1_);
      auVar22[5] = -(pbVar15[0xf] == DAT_014e4ff0._5_1_);
      auVar22[6] = -(pbVar15[0x10] == DAT_014e4ff0._6_1_);
      auVar22[7] = -(pbVar15[0x11] == DAT_014e4ff0._7_1_);
      auVar22[8] = -(pbVar15[0x12] == DAT_014e4ff0._8_1_);
      auVar22[9] = -(pbVar15[0x13] == DAT_014e4ff0._9_1_);
      auVar22[10] = -(pbVar15[0x14] == DAT_014e4ff0._10_1_);
      auVar22[0xb] = -(pbVar15[0x15] == DAT_014e4ff0._11_1_);
      auVar22[0xc] = -(pbVar15[0x16] == DAT_014e4ff0._12_1_);
      auVar22[0xd] = -(pbVar15[0x17] == DAT_014e4ff0._13_1_);
      auVar22[0xe] = -(pbVar15[0x18] == DAT_014e4ff0._14_1_);
      auVar22[0xf] = -(pbVar15[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar13 != *(byte **)(auStack_1b8._0_8_ + 0x58)) {
    iVar5 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 != _DAT_0f550ac4) goto LAB_0e980a83;
  }
  uVar4 = uStack_18c;
  if (iStack_190 == 0) {
    if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e9808dc;
    lVar7 = *(long *)(puVar16 + 0x68) + 0x38;
  }
  else {
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)func_0x048aead0(uVar3 + 0x18);
    }
    auStack_218._0_8_ = func_0x048b0c90(uVar3 + 0x18,puVar16,uVar4,1);
    if (auStack_218._0_8_ == 0) {
      auStack_218 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_218);
      if (auStack_218._0_8_ == 0) goto LAB_0e9808dc;
    }
    if ((*(int *)(auStack_218._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_218._0_8_ + 0x58) != 0)) {
      lVar7 = *(long *)(auStack_218._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e9808dc:
      lVar7 = 0;
    }
  }
  puStack_168 = &UNK_0488e0b0;
  pcStack_160 = (code *)0x0;
  pcStack_158 = (code *)CONCAT35(pcStack_158._5_3_,0x48b5725f);
  uStack_178 = 0;
  auStack_218 = (undefined1  [16])0x0;
  pcStack_200 = (code *)&UNK_0488e0b0;
  pcStack_1f8 = (code *)0x0;
  uStack_1f0 = (undefined *)CONCAT35(uStack_1f0._5_3_,0x48b5725f);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_138 = 0x21;
  uStack_130 = 0x1a;
  *(ulong *)((long)puVar8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar8 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar8 = _DAT_013bbacd;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1a) = 0;
  puStack_128 = puVar8;
  lVar7 = func_0x048b5060(lVar7,&uStack_138);
  *(undefined8 *)(lVar7 + 0x20) = 0;
  if ((undefined1 *)(lVar7 + 0x20) == auStack_218) {
    pcVar11 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar7 + 0x40) != (code *)0x0) {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
      (**(code **)(lVar7 + 0x40))(puVar8);
      if (uStack_1f0._4_1_ != '\0') {
        if (uStack_1f0._4_1_ == '\x02') {
          (*pcStack_200)(5,auStack_218 + 8,puVar8);
        }
        else {
          uVar3 = auStack_218._8_8_;
          auStack_218._8_8_ = 0;
          *puVar8 = uVar3;
        }
      }
    }
    *(code **)(lVar7 + 0x38) = pcStack_200;
    *(code **)(lVar7 + 0x40) = pcStack_1f8;
    *(int *)(lVar7 + 0x48) = (int)uStack_1f0;
    *(char *)(lVar7 + 0x4c) = uStack_1f0._4_1_;
    pcVar11 = pcStack_1f8;
  }
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(puStack_128,uStack_138 & 0xfffffffffffffffe);
    pcVar11 = pcStack_1f8;
  }
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(auStack_218 + 8);
  }
  if (pcStack_160 != (code *)0x0) {
    (*pcStack_160)(&uStack_178);
  }
LAB_0e980a83:
  uStack_110 = CONCAT44(uStack_18c,iStack_190);
  pcStack_118 = pcStack_198;
  puStack_128 = (undefined8 *)uStack_1a8;
  pcStack_120 = pcStack_1a0;
  uStack_138 = auStack_1b8._0_8_;
  uStack_130 = auStack_1b8._8_8_;
  pcStack_158 = pcStack_198;
  uStack_178 = auStack_1b8._0_8_;
  uStack_170 = auStack_1b8._8_8_;
  puStack_168 = (undefined *)uStack_1a8;
  pcStack_160 = pcStack_1a0;
  uStack_150 = 0x1e1bc4d500000004;
  if ((DAT_0f767190 == '\0') && (iVar5 = func_0x04108328(&DAT_0f767190), iVar5 != 0)) {
    func_0x0e9dcdb0();
    func_0x0410844d(&DAT_0f767190);
  }
  auStack_218._0_4_ = uStack_150._4_4_;
  auStack_218._8_8_ = 0;
  plStack_208 = (long *)((ulong)plStack_208 & 0xffffffff00000000);
  pcStack_200 = (code *)0x1;
  pcStack_1f8 = (code *)&SUB_048aead0;
  uStack_1f0 = &UNK_0e9ddc50;
  puStack_1e8 = &UNK_0e9ddd10;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  func_0x049057f0(&uStack_170,auStack_218);
  func_0x048aea50(auStack_218);
  pcStack_a8 = pcStack_160;
  pcStack_a0 = pcStack_158;
  uStack_b8 = uStack_170;
  uStack_b0 = puStack_168;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4d3ba0;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_218._0_4_ = _DAT_0f551bb4;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *(undefined1 (*) [16])(plVar12 + 1) = (undefined1  [16])0x0;
  *plVar12 = (long)&UNK_0ef46c48;
  plVar12[3] = (long)puVar8;
  plVar12[4] = 0;
  *(undefined1 *)(plVar12 + 5) = 0xff;
  auStack_218._8_8_ = plVar12 + 3;
  auStack_f8 = (undefined1  [16])0x0;
  plStack_208 = plVar12;
  func_0x048afd20(&uStack_b8,auStack_218);
  plVar12 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_208 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      func_0x0412c2d0(plVar12);
    }
  }
  uVar3 = auStack_f8._8_8_;
  if ((long *)auStack_f8._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_f8._8_8_ + 8);
    lVar7 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*(long *)auStack_f8._8_8_ + 0x10))(auStack_f8._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x137d3d1  BiomeTemperatureCategory
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 * 0x14eaba0  [cereal:document
 */
