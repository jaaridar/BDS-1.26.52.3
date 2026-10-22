/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9800c0 (ELF vaddr 0xe8800c0)
 * Label: callee-of:0xe875070
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
        thunk_FUN_0ee326a0(puStack_128,uStack_138 & 0xfffffffffffffffe);
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
        FUN_0410844d(&DAT_0f550768);
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
    FUN_088b42d0(&uStack_b8,auStack_f8,&UNK_013a0ce3,6);
    func_0x088b46b0(&uStack_138,&uStack_b8,&UNK_0121ddb3,4);
    func_0x088b4a90(&uStack_178,&uStack_138,&UNK_013daed0,8);
    func_0x088b4e70(auStack_1b8,&uStack_178,&UNK_014436dc,4);
    FUN_088b5250(auStack_70,auStack_1b8,&UNK_0129b703,6);
    if (bVar18) {
      thunk_FUN_0ee326a0(puVar8,0);
    }
  }
  auStack_218._8_8_ = 0x24;
  auStack_218._0_8_ = &DAT_01e366e0;
  plStack_208 = (long *)&UNK_011e870d;
  pcStack_200 = (code *)0x1b;
  FUN_0470d9a0(&uStack_178,&UNK_014c494c,0x10,0xdd,auStack_218);
  uVar14 = uStack_178 >> 1 & 0x7f;
  puVar16 = (undefined *)((long)&uStack_178 + 1);
  if ((uStack_178 & 1) != 0) {
    uVar14 = uStack_170;
    puVar16 = puStack_168;
  }
  if ((DAT_0f767170 == '\0') && (iVar5 = func_0x04108328(&DAT_0f767170), iVar5 != 0)) {
    func_0x0e9dcca0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f7670f0,0xf53dab8);
    FUN_0410844d(&DAT_0f767170);
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
    thunk_FUN_0ee326a0(puStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if (cStack_188 != '\0') {
    return;
  }
  uVar3 = auStack_1b8._0_8_;
  if ((DAT_0f767170 == '\0') && (iVar5 = func_0x04108328(&DAT_0f767170), iVar5 != 0)) {
    func_0x0e9dcca0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f7670f0,0xf53dab8);
    FUN_0410844d(&DAT_0f767170);
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
      FUN_0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
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
      puVar16 = (undefined *)FUN_048aead0(uVar3 + 0x18);
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
    thunk_FUN_0ee326a0(puStack_128,uStack_138 & 0xfffffffffffffffe);
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
    FUN_0410844d(&DAT_0f767190);
  }
  auStack_218._0_4_ = uStack_150._4_4_;
  auStack_218._8_8_ = 0;
  plStack_208 = (long *)((ulong)plStack_208 & 0xffffffff00000000);
  pcStack_200 = (code *)0x1;
  pcStack_1f8 = FUN_048aead0;
  uStack_1f0 = &UNK_0e9ddc50;
  puStack_1e8 = &UNK_0e9ddd10;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  FUN_049057f0(&uStack_170,auStack_218);
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
    FUN_0410844d(&DAT_0f551bc8);
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

/* ---- assembly ---- */
/* 0e9800c0 */  PUSH RBP
/* 0e9800c1 */  PUSH R15
/* 0e9800c3 */  PUSH R14
/* 0e9800c5 */  PUSH R13
/* 0e9800c7 */  PUSH R12
/* 0e9800c9 */  PUSH RBX
/* 0e9800ca */  SUB RSP,0x1e8
/* 0e9800d1 */  MOV RBX,RDI
/* 0e9800d4 */  ADD RDI,0x18
/* 0e9800d8 */  CALL 0x088b56b0
/* 0e9800dd */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e9800e4 */  JNZ 0x0e98010e
/* 0e9800e6 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e9800ea */  TEST RAX,RAX
/* 0e9800ed */  JZ 0x0e98010e
/* 0e9800ef */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e9800f3 */  LEA RDX,[RAX + 0x9]
/* 0e9800f7 */  MOV ECX,ESI
/* 0e9800f9 */  SHR ECX,0x1
/* 0e9800fb */  TEST SIL,0x1
/* 0e9800ff */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e980104 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e980109 */  MOV RDI,RSP
/* 0e98010c */  JMP 0x0e98011d
/* 0e98010e */  LEA RDX,[0x137d3d1]
/* 0e980115 */  MOV RDI,RSP
/* 0e980118 */  MOV ECX,0x18
/* 0e98011d */  MOV RSI,RBX
/* 0e980120 */  XOR R8D,R8D
/* 0e980123 */  CALL 0x088b5b10
/* 0e980128 */  MOV byte ptr [RSP + 0x34],0x0
/* 0e98012d */  MOV byte ptr [RSP + 0x38],0x0
/* 0e980132 */  CMP byte ptr [RSP + 0x30],0x0
/* 0e980137 */  JNZ 0x0e9805ce
/* 0e98013d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e980144 */  LEA RDI,[0xf5463b0]
/* 0e98014b */  MOV ESI,0x20
/* 0e980150 */  CALL qword ptr [RAX + 0x10]
/* 0e980153 */  MOV R14,RAX
/* 0e980156 */  TEST RAX,RAX
/* 0e980159 */  JZ 0x0e980cbc
/* 0e98015f */  MOVDQU XMM0,xmmword ptr [0x0137d3d1]
/* 0e980167 */  MOVDQU xmmword ptr [R14],XMM0
/* 0e98016c */  MOV RAX,0x79726f6765746143
/* 0e980176 */  MOV qword ptr [R14 + 0x10],RAX
/* 0e98017a */  MOV byte ptr [R14 + 0x18],0x0
/* 0e98017f */  MOV R15,qword ptr [RSP]
/* 0e980183 */  ADD R15,0x18
/* 0e980187 */  MOV RDI,R15
/* 0e98018a */  CALL 0x088b56b0
/* 0e98018f */  MOV RDX,qword ptr [RSP]
/* 0e980193 */  MOV RCX,qword ptr [RDX + 0x50]
/* 0e980197 */  MOV RDX,qword ptr [RDX + 0x58]
/* 0e98019b */  CMP RCX,RDX
/* 0e98019e */  JZ 0x0e980226
/* 0e9801a4 */  MOVDQA XMM0,xmmword ptr [0x014e1610]
/* 0e9801ac */  MOVDQA XMM1,xmmword ptr [0x014e4030]
/* 0e9801b4 */  JMP 0x0e9801ee
/* 0e9801c0 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e9801c4 */  MOVDQU XMM2,xmmword ptr [RSI]
/* 0e9801c8 */  PCMPEQB XMM2,XMM1
/* 0e9801cc */  MOVDQU XMM3,xmmword ptr [RSI + 0xd]
/* 0e9801d1 */  PCMPEQB XMM3,XMM0
/* 0e9801d5 */  PAND XMM3,XMM2
/* 0e9801d9 */  PMOVMSKB ESI,XMM3
/* 0e9801dd */  CMP ESI,0xffff
/* 0e9801e3 */  JZ 0x0e980226
/* 0e9801e5 */  ADD RCX,0x38
/* 0e9801e9 */  CMP RCX,RDX
/* 0e9801ec */  JZ 0x0e980226
/* 0e9801ee */  MOVZX ESI,byte ptr [RCX]
/* 0e9801f1 */  TEST SIL,0x1
/* 0e9801f5 */  JZ 0x0e980210
/* 0e9801f7 */  MOV RDI,qword ptr [RCX + 0x8]
/* 0e9801fb */  CMP RDI,0x1d
/* 0e9801ff */  JNZ 0x0e9801e5
/* 0e980201 */  JMP 0x0e98021a
/* 0e980210 */  MOV EDI,ESI
/* 0e980212 */  SHR EDI,0x1
/* 0e980214 */  CMP RDI,0x1d
/* 0e980218 */  JNZ 0x0e9801e5
/* 0e98021a */  TEST SIL,0x1
/* 0e98021e */  JNZ 0x0e9801c0
/* 0e980220 */  LEA RSI,[RCX + 0x1]
/* 0e980224 */  JMP 0x0e9801c4
/* 0e980226 */  CMP RCX,RDX
/* 0e980229 */  JZ 0x0e98024c
/* 0e98022b */  MOV EBP,dword ptr [RCX + 0x1c]
/* 0e98022e */  MOVZX ECX,byte ptr [0x0f550768]
/* 0e980235 */  TEST CL,CL
/* 0e980237 */  JZ 0x0e980e17
/* 0e98023d */  MOV R13B,0x21
/* 0e980240 */  CMP EBP,dword ptr [0x0f550754]
/* 0e980246 */  JNZ 0x0e9804e3
/* 0e98024c */  CMP dword ptr [RSP + 0x28],0x0
/* 0e980251 */  JZ 0x0e9802a2
/* 0e980253 */  MOV EDX,dword ptr [RSP + 0x2c]
/* 0e980257 */  MOV RDI,R15
/* 0e98025a */  MOV RSI,RAX
/* 0e98025d */  MOV ECX,0x1
/* 0e980262 */  CALL 0x048b0c90
/* 0e980267 */  TEST RAX,RAX
/* 0e98026a */  JNZ 0x0e98028a
/* 0e98026c */  PXOR XMM0,XMM0
/* 0e980270 */  MOVDQA xmmword ptr [RSP + 0x60],XMM0
/* 0e980276 */  LEA RDI,[RSP + 0x60]
/* 0e98027b */  CALL 0x048b0d20
/* 0e980280 */  MOV RAX,qword ptr [RSP + 0x60]
/* 0e980285 */  TEST RAX,RAX
/* 0e980288 */  JZ 0x0e9802ba
/* 0e98028a */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e980291 */  JNZ 0x0e9802ba
/* 0e980293 */  MOV R15,qword ptr [RAX + 0x58]
/* 0e980297 */  TEST R15,R15
/* 0e98029a */  JZ 0x0e9802ba
/* 0e98029c */  ADD R15,0x40
/* 0e9802a0 */  JMP 0x0e9802bd
/* 0e9802a2 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e9802a9 */  JNZ 0x0e9802ba
/* 0e9802ab */  MOV R15,qword ptr [RAX + 0x68]
/* 0e9802af */  TEST R15,R15
/* 0e9802b2 */  JZ 0x0e9802ba
/* 0e9802b4 */  ADD R15,0x38
/* 0e9802b8 */  JMP 0x0e9802bd
/* 0e9802ba */  XOR R15D,R15D
/* 0e9802bd */  MOV qword ptr [RSP + 0xa0],0x0
/* 0e9802c9 */  LEA RBP,[0x48b4ab0]
/* 0e9802d0 */  MOV qword ptr [RSP + 0xb0],RBP
/* 0e9802d8 */  MOV dword ptr [RSP + 0xc0],0xd33bd9c5
/* 0e9802e3 */  LEA R13,[0x48b49f0]
/* 0e9802ea */  MOV qword ptr [RSP + 0xb8],R13
/* 0e9802f2 */  MOV byte ptr [RSP + 0xc4],0x1
/* 0e9802fa */  LEA RDI,[0xf5463b0]
/* 0e980301 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e980308 */  MOV ESI,0x38
/* 0e98030d */  CALL qword ptr [RAX + 0x10]
/* 0e980310 */  MOV R12,RAX
/* 0e980313 */  TEST RAX,RAX
/* 0e980316 */  JZ 0x0e980cef
/* 0e98031c */  MOV qword ptr [R12],0x21
/* 0e980324 */  MOV qword ptr [R12 + 0x8],0x18
/* 0e98032d */  MOV qword ptr [R12 + 0x10],R14
/* 0e980332 */  MOV word ptr [R12 + 0x18],0x400
/* 0e98033a */  PXOR XMM0,XMM0
/* 0e98033e */  MOVDQU xmmword ptr [R12 + 0x20],XMM0
/* 0e980345 */  MOV qword ptr [R12 + 0x30],0x0
/* 0e98034e */  LEA RAX,[0x48b46e0]
/* 0e980355 */  MOV qword ptr [RSP + 0x60],RAX
/* 0e98035a */  MOV qword ptr [RSP + 0x78],RBP
/* 0e98035f */  MOV qword ptr [RSP + 0x80],R13
/* 0e980367 */  MOV dword ptr [RSP + 0x88],0xd33bd9c5
/* 0e980372 */  MOV byte ptr [RSP + 0x8c],0x1
/* 0e98037a */  MOV qword ptr [RSP + 0xa0],0x0
/* 0e980386 */  MOV qword ptr [RSP + 0x68],R12
/* 0e98038b */  LEA RDI,[0xf5463b0]
/* 0e980392 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e980399 */  MOV ESI,0x20
/* 0e98039e */  CALL qword ptr [RAX + 0x10]
/* 0e9803a1 */  MOV R14,RAX
/* 0e9803a4 */  TEST RAX,RAX
/* 0e9803a7 */  JZ 0x0e980d00
/* 0e9803ad */  MOV qword ptr [RSP + 0xf0],R14
/* 0e9803b5 */  MOV qword ptr [RSP + 0xe0],0x21
/* 0e9803c1 */  MOV qword ptr [RSP + 0xe8],0x1d
/* 0e9803cd */  MOVUPS XMM0,xmmword ptr [0x014d9876]
/* 0e9803d4 */  MOVUPS xmmword ptr [R14 + 0xd],XMM0
/* 0e9803d9 */  MOVDQU XMM0,xmmword ptr [0x014d9869]
/* 0e9803e1 */  MOVDQU xmmword ptr [R14],XMM0
/* 0e9803e6 */  MOV byte ptr [R14 + 0x1d],0x0
/* 0e9803eb */  LEA RSI,[RSP + 0xe0]
/* 0e9803f3 */  MOV RDI,R15
/* 0e9803f6 */  CALL 0x048b5060
/* 0e9803fb */  MOV R15,RAX
/* 0e9803fe */  LEA R14,[RSP + 0x68]
/* 0e980403 */  ADD RAX,0x20
/* 0e980407 */  LEA RCX,[0x48b46e0]
/* 0e98040e */  MOV qword ptr [R15 + 0x20],RCX
/* 0e980412 */  LEA RCX,[RSP + 0x60]
/* 0e980417 */  CMP RAX,RCX
/* 0e98041a */  JZ 0x0e980490
/* 0e98041c */  MOV R12,R15
/* 0e98041f */  ADD R12,0x28
/* 0e980423 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e980427 */  TEST RAX,RAX
/* 0e98042a */  JZ 0x0e980453
/* 0e98042c */  MOV RDI,R12
/* 0e98042f */  CALL RAX
/* 0e980431 */  MOVZX EAX,byte ptr [RSP + 0x8c]
/* 0e980439 */  TEST EAX,EAX
/* 0e98043b */  JZ 0x0e980465
/* 0e98043d */  CMP EAX,0x2
/* 0e980440 */  JNZ 0x0e980453
/* 0e980442 */  MOV EDI,0x5
/* 0e980447 */  MOV RSI,R14
/* 0e98044a */  MOV RDX,R12
/* 0e98044d */  CALL qword ptr [RSP + 0x78]
/* 0e980451 */  JMP 0x0e980465
/* 0e980453 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e980458 */  MOV qword ptr [RSP + 0x68],0x0
/* 0e980461 */  MOV qword ptr [R12],RAX
/* 0e980465 */  MOV R13,qword ptr [RSP + 0x80]
/* 0e98046d */  MOVDQU XMM0,xmmword ptr [RSP + 0x78]
/* 0e980473 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e980479 */  MOV EAX,dword ptr [RSP + 0x88]
/* 0e980480 */  MOV dword ptr [R15 + 0x48],EAX
/* 0e980484 */  MOVZX EAX,byte ptr [RSP + 0x8c]
/* 0e98048c */  MOV byte ptr [R15 + 0x4c],AL
/* 0e980490 */  TEST byte ptr [RSP + 0xe0],0x1
/* 0e980498 */  JZ 0x0e9804bb
/* 0e98049a */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0e9804a2 */  MOV RDI,qword ptr [RSP + 0xf0]
/* 0e9804aa */  AND RSI,-0x2
/* 0e9804ae */  CALL 0x0412a280
/* 0e9804b3 */  MOV R13,qword ptr [RSP + 0x80]
/* 0e9804bb */  TEST R13,R13
/* 0e9804be */  JZ 0x0e9804c6
/* 0e9804c0 */  MOV RDI,R14
/* 0e9804c3 */  CALL R13
/* 0e9804c6 */  MOV RAX,qword ptr [RSP + 0xb8]
/* 0e9804ce */  TEST RAX,RAX
/* 0e9804d1 */  JZ 0x0e9804dd
/* 0e9804d3 */  LEA RDI,[RSP + 0xa0]
/* 0e9804db */  CALL RAX
/* 0e9804dd */  XOR R14D,R14D
/* 0e9804e0 */  XOR R13D,R13D
/* 0e9804e3 */  MOVDQU XMM0,xmmword ptr [RSP]
/* 0e9804e8 */  MOVDQU XMM1,xmmword ptr [RSP + 0x10]
/* 0e9804ee */  MOVDQU XMM2,xmmword ptr [RSP + 0x20]
/* 0e9804f4 */  MOVDQU XMM3,xmmword ptr [RSP + 0x30]
/* 0e9804fa */  MOVDQA xmmword ptr [RSP + 0x150],XMM3
/* 0e980503 */  MOVDQA xmmword ptr [RSP + 0x140],XMM2
/* 0e98050c */  MOVDQA xmmword ptr [RSP + 0x130],XMM1
/* 0e980515 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e98051e */  LEA RDX,[0x13a0ce3]
/* 0e980525 */  LEA R15,[RSP + 0x160]
/* 0e98052d */  LEA RSI,[RSP + 0x120]
/* 0e980535 */  MOV ECX,0x6
/* 0e98053a */  MOV RDI,R15
/* 0e98053d */  CALL 0x088b42d0
/* 0e980542 */  LEA RDX,[0x121ddb3]
/* 0e980549 */  LEA R12,[RSP + 0xe0]
/* 0e980551 */  MOV ECX,0x4
/* 0e980556 */  MOV RDI,R12
/* 0e980559 */  MOV RSI,R15
/* 0e98055c */  CALL 0x088b46b0
/* 0e980561 */  LEA RDX,[0x13daed0]
/* 0e980568 */  LEA R15,[RSP + 0xa0]
/* 0e980570 */  MOV ECX,0x8
/* 0e980575 */  MOV RDI,R15
/* 0e980578 */  MOV RSI,R12
/* 0e98057b */  CALL 0x088b4a90
/* 0e980580 */  LEA RDX,[0x14436dc]
/* 0e980587 */  LEA R12,[RSP + 0x60]
/* 0e98058c */  MOV ECX,0x4
/* 0e980591 */  MOV RDI,R12
/* 0e980594 */  MOV RSI,R15
/* 0e980597 */  CALL 0x088b4e70
/* 0e98059c */  LEA RDX,[0x129b703]
/* 0e9805a3 */  LEA RDI,[RSP + 0x1a8]
/* 0e9805ab */  MOV ECX,0x6
/* 0e9805b0 */  MOV RSI,R12
/* 0e9805b3 */  CALL 0x088b5250
/* 0e9805b8 */  TEST R13B,0x1
/* 0e9805bc */  JZ 0x0e9805ce
/* 0e9805be */  AND R13B,0x20
/* 0e9805c2 */  MOVZX ESI,R13B
/* 0e9805c6 */  MOV RDI,R14
/* 0e9805c9 */  CALL 0x0412a280
/* 0e9805ce */  LEA RAX,[0x1e366e0]
/* 0e9805d5 */  MOV qword ptr [RSP],RAX
/* 0e9805d9 */  MOV qword ptr [RSP + 0x8],0x24
/* 0e9805e2 */  LEA RAX,[0x11e870d]
/* 0e9805e9 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e9805ee */  MOV qword ptr [RSP + 0x18],0x1b
/* 0e9805f7 */  LEA RSI,[0x14c494c]
/* 0e9805fe */  LEA RDI,[RSP + 0xa0]
/* 0e980606 */  MOV R14,RSP
/* 0e980609 */  MOV EDX,0x10
/* 0e98060e */  MOV ECX,0xdd
/* 0e980613 */  MOV R8,R14
/* 0e980616 */  CALL 0x0470d9a0
/* 0e98061b */  MOVZX EAX,byte ptr [RSP + 0xa0]
/* 0e980623 */  MOV ECX,EAX
/* 0e980625 */  SHR ECX,0x1
/* 0e980627 */  TEST AL,0x1
/* 0e980629 */  LEA RDX,[RSP + 0xa1]
/* 0e980631 */  CMOVNZ RDX,qword ptr [RSP + 0xb0]
/* 0e98063a */  CMOVNZ RCX,qword ptr [RSP + 0xa8]
/* 0e980643 */  MOVZX EAX,byte ptr [0x0f767170]
/* 0e98064a */  TEST AL,AL
/* 0e98064c */  JZ 0x0e980d22
/* 0e980652 */  MOV R15D,0xffffffff
/* 0e980658 */  MOV RAX,qword ptr [0x0f7670f0]
/* 0e98065f */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e980662 */  MOV RSI,qword ptr [RBX + 0x18]
/* 0e980666 */  MOV RDI,qword ptr [RBX + 0x20]
/* 0e98066a */  SUB RDI,RSI
/* 0e98066d */  SHR RDI,0x3
/* 0e980671 */  ADD EDI,R15D
/* 0e980674 */  AND EDI,EAX
/* 0e980676 */  LEA RSI,[RSI + RDI*0x8]
/* 0e98067a */  MOV RDI,qword ptr [RBX + 0x30]
/* 0e98067e */  NOP
/* 0e980680 */  MOV RSI,qword ptr [RSI]
/* 0e980683 */  CMP RSI,-0x1
/* 0e980687 */  JZ 0x0e9806b3
/* 0e980689 */  LEA R8,[RSI + RSI*0x2]
/* 0e98068d */  LEA RSI,[RDI + R8*0x8]
/* 0e980691 */  CMP dword ptr [RDI + R8*0x8 + 0x8],EAX
/* 0e980696 */  JNZ 0x0e980680
/* 0e980698 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e98069c */  CMP RSI,RAX
/* 0e98069f */  JNZ 0x0e9806bf
/* 0e9806a1 */  LEA RAX,[0xf7670f0]
/* 0e9806a8 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e9806af */  JZ 0x0e9806cc
/* 0e9806b1 */  JMP 0x0e9806ef
/* 0e9806b3 */  MOV RAX,qword ptr [RBX + 0x38]
/* 0e9806b7 */  MOV RSI,RAX
/* 0e9806ba */  CMP RSI,RAX
/* 0e9806bd */  JZ 0x0e9806a1
/* 0e9806bf */  MOV RAX,qword ptr [RSI + 0x10]
/* 0e9806c3 */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e9806ca */  JNZ 0x0e9806ef
/* 0e9806cc */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e9806d0 */  TEST RAX,RAX
/* 0e9806d3 */  JZ 0x0e9806ef
/* 0e9806d5 */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e9806d9 */  LEA RDX,[RAX + 0x9]
/* 0e9806dd */  MOV ECX,ESI
/* 0e9806df */  SHR ECX,0x1
/* 0e9806e1 */  TEST SIL,0x1
/* 0e9806e5 */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e9806ea */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e9806ef */  LEA RDI,[RSP + 0x60]
/* 0e9806f4 */  MOV RSI,RBX
/* 0e9806f7 */  CALL 0x0e9dd140
/* 0e9806fc */  TEST byte ptr [RSP + 0xa0],0x1
/* 0e980704 */  JZ 0x0e98071f
/* 0e980706 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0e98070e */  MOV RDI,qword ptr [RSP + 0xb0]
/* 0e980716 */  AND RSI,-0x2
/* 0e98071a */  CALL 0x0412a280
/* 0e98071f */  CMP byte ptr [RSP + 0x90],0x0
/* 0e980727 */  JNZ 0x0e980caa
/* 0e98072d */  MOV R12,qword ptr [RSP + 0x60]
/* 0e980732 */  MOVZX EAX,byte ptr [0x0f767170]
/* 0e980739 */  TEST AL,AL
/* 0e98073b */  JZ 0x0e980d78
/* 0e980741 */  LEA RBX,[R12 + 0x18]
/* 0e980746 */  MOV RAX,qword ptr [0x0f7670f0]
/* 0e98074d */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e980750 */  MOV RCX,qword ptr [R12 + 0x18]
/* 0e980755 */  MOV RDX,qword ptr [R12 + 0x20]
/* 0e98075a */  SUB RDX,RCX
/* 0e98075d */  SHR RDX,0x3
/* 0e980761 */  ADD EDX,R15D
/* 0e980764 */  AND EDX,EAX
/* 0e980766 */  LEA RCX,[RCX + RDX*0x8]
/* 0e98076a */  MOV RDX,qword ptr [R12 + 0x30]
/* 0e98076f */  NOP
/* 0e980770 */  MOV RCX,qword ptr [RCX]
/* 0e980773 */  CMP RCX,-0x1
/* 0e980777 */  JZ 0x0e98079a
/* 0e980779 */  LEA RSI,[RCX + RCX*0x2]
/* 0e98077d */  LEA RCX,[RDX + RSI*0x8]
/* 0e980781 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e980785 */  JNZ 0x0e980770
/* 0e980787 */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e98078c */  CMP RCX,RAX
/* 0e98078f */  JNZ 0x0e9807a7
/* 0e980791 */  LEA RSI,[0xf7670f0]
/* 0e980798 */  JMP 0x0e9807ab
/* 0e98079a */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e98079f */  MOV RCX,RAX
/* 0e9807a2 */  CMP RCX,RAX
/* 0e9807a5 */  JZ 0x0e980791
/* 0e9807a7 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e9807ab */  MOV RCX,qword ptr [RSP + 0x60]
/* 0e9807b0 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e9807b4 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e9807b8 */  CMP RAX,RCX
/* 0e9807bb */  JZ 0x0e980835
/* 0e9807bd */  MOVDQA XMM0,xmmword ptr [0x014e4ff0]
/* 0e9807c5 */  MOVDQA XMM1,xmmword ptr [0x014eaba0]
/* 0e9807cd */  JMP 0x0e9807fe
/* 0e9807d0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e9807d4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e9807d8 */  PCMPEQB XMM2,XMM1
/* 0e9807dc */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e9807e1 */  PCMPEQB XMM3,XMM0
/* 0e9807e5 */  PAND XMM3,XMM2
/* 0e9807e9 */  PMOVMSKB EDX,XMM3
/* 0e9807ed */  CMP EDX,0xffff
/* 0e9807f3 */  JZ 0x0e980835
/* 0e9807f5 */  ADD RAX,0x38
/* 0e9807f9 */  CMP RAX,RCX
/* 0e9807fc */  JZ 0x0e980835
/* 0e9807fe */  MOVZX EDX,byte ptr [RAX]
/* 0e980801 */  TEST DL,0x1
/* 0e980804 */  JZ 0x0e980820
/* 0e980806 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e98080a */  CMP RDI,0x1a
/* 0e98080e */  JNZ 0x0e9807f5
/* 0e980810 */  JMP 0x0e98082a
/* 0e980820 */  MOV EDI,EDX
/* 0e980822 */  SHR EDI,0x1
/* 0e980824 */  CMP RDI,0x1a
/* 0e980828 */  JNZ 0x0e9807f5
/* 0e98082a */  TEST DL,0x1
/* 0e98082d */  JNZ 0x0e9807d0
/* 0e98082f */  LEA RDX,[RAX + 0x1]
/* 0e980833 */  JMP 0x0e9807d4
/* 0e980835 */  CMP RAX,RCX
/* 0e980838 */  JZ 0x0e980858
/* 0e98083a */  MOV EBP,dword ptr [RAX + 0x1c]
/* 0e98083d */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e980844 */  TEST AL,AL
/* 0e980846 */  JZ 0x0e980e53
/* 0e98084c */  CMP EBP,dword ptr [0x0f550ac4]
/* 0e980852 */  JNZ 0x0e980a83
/* 0e980858 */  CMP dword ptr [RSP + 0x88],0x0
/* 0e980860 */  JZ 0x0e9808bf
/* 0e980862 */  MOV EBP,dword ptr [RSP + 0x8c]
/* 0e980869 */  TEST RSI,RSI
/* 0e98086c */  JNZ 0x0e980879
/* 0e98086e */  MOV RDI,RBX
/* 0e980871 */  CALL 0x048aead0
/* 0e980876 */  MOV RSI,RAX
/* 0e980879 */  MOV RDI,RBX
/* 0e98087c */  MOV EDX,EBP
/* 0e98087e */  MOV ECX,0x1
/* 0e980883 */  CALL 0x048b0c90
/* 0e980888 */  TEST RAX,RAX
/* 0e98088b */  JNZ 0x0e9808a7
/* 0e98088d */  PXOR XMM0,XMM0
/* 0e980891 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e980896 */  MOV RDI,RSP
/* 0e980899 */  CALL 0x048b0d20
/* 0e98089e */  MOV RAX,qword ptr [RSP]
/* 0e9808a2 */  TEST RAX,RAX
/* 0e9808a5 */  JZ 0x0e9808dc
/* 0e9808a7 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e9808ae */  JNZ 0x0e9808dc
/* 0e9808b0 */  MOV RBX,qword ptr [RAX + 0x58]
/* 0e9808b4 */  TEST RBX,RBX
/* 0e9808b7 */  JZ 0x0e9808dc
/* 0e9808b9 */  ADD RBX,0x40
/* 0e9808bd */  JMP 0x0e9808de
/* 0e9808bf */  TEST RSI,RSI
/* 0e9808c2 */  JZ 0x0e9808dc
/* 0e9808c4 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e9808cb */  JNZ 0x0e9808dc
/* 0e9808cd */  MOV RBX,qword ptr [RSI + 0x68]
/* 0e9808d1 */  TEST RBX,RBX
/* 0e9808d4 */  JZ 0x0e9808dc
/* 0e9808d6 */  ADD RBX,0x38
/* 0e9808da */  JMP 0x0e9808de
/* 0e9808dc */  XOR EBX,EBX
/* 0e9808de */  LEA RAX,[0x488e0b0]
/* 0e9808e5 */  MOV qword ptr [RSP + 0xb0],RAX
/* 0e9808ed */  MOV dword ptr [RSP + 0xc0],0x48b5725f
/* 0e9808f8 */  MOV qword ptr [RSP + 0xb8],0x0
/* 0e980904 */  MOV byte ptr [RSP + 0xc4],0x0
/* 0e98090c */  MOV qword ptr [RSP + 0xa0],0x0
/* 0e980918 */  PXOR XMM0,XMM0
/* 0e98091c */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e980921 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e980926 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e98092f */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e980937 */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e98093c */  LEA RDI,[0xf5463b0]
/* 0e980943 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e98094a */  MOV ESI,0x20
/* 0e98094f */  CALL qword ptr [RAX + 0x10]
/* 0e980952 */  MOV R15,RAX
/* 0e980955 */  TEST RAX,RAX
/* 0e980958 */  JZ 0x0e980d11
/* 0e98095e */  MOV qword ptr [RSP + 0xf0],R15
/* 0e980966 */  MOV qword ptr [RSP + 0xe0],0x21
/* 0e980972 */  MOV qword ptr [RSP + 0xe8],0x1a
/* 0e98097e */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e980985 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e98098a */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e980992 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e980997 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e98099c */  LEA RSI,[RSP + 0xe0]
/* 0e9809a4 */  MOV RDI,RBX
/* 0e9809a7 */  CALL 0x048b5060
/* 0e9809ac */  MOV R15,RAX
/* 0e9809af */  LEA RBX,[RSP + 0x8]
/* 0e9809b4 */  ADD RAX,0x20
/* 0e9809b8 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e9809c0 */  CMP RAX,R14
/* 0e9809c3 */  JZ 0x0e9809f9
/* 0e9809c5 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e9809c9 */  TEST RAX,RAX
/* 0e9809cc */  JZ 0x0e980a18
/* 0e9809ce */  MOV R14,R15
/* 0e9809d1 */  ADD R14,0x28
/* 0e9809d5 */  MOV RDI,R14
/* 0e9809d8 */  CALL RAX
/* 0e9809da */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e9809df */  TEST EAX,EAX
/* 0e9809e1 */  JZ 0x0e980a18
/* 0e9809e3 */  CMP EAX,0x2
/* 0e9809e6 */  JNZ 0x0e980a07
/* 0e9809e8 */  MOV EDI,0x5
/* 0e9809ed */  MOV RSI,RBX
/* 0e9809f0 */  MOV RDX,R14
/* 0e9809f3 */  CALL qword ptr [RSP + 0x18]
/* 0e9809f7 */  JMP 0x0e980a18
/* 0e9809f9 */  XOR EAX,EAX
/* 0e9809fb */  TEST byte ptr [RSP + 0xe0],0x1
/* 0e980a03 */  JNZ 0x0e980a44
/* 0e980a05 */  JMP 0x0e980a62
/* 0e980a07 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e980a0c */  MOV qword ptr [RSP + 0x8],0x0
/* 0e980a15 */  MOV qword ptr [R14],RAX
/* 0e980a18 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e980a1d */  MOVDQU XMM0,xmmword ptr [RSP + 0x18]
/* 0e980a23 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e980a29 */  MOV ECX,dword ptr [RSP + 0x28]
/* 0e980a2d */  MOV dword ptr [R15 + 0x48],ECX
/* 0e980a31 */  MOVZX ECX,byte ptr [RSP + 0x2c]
/* 0e980a36 */  MOV byte ptr [R15 + 0x4c],CL
/* 0e980a3a */  TEST byte ptr [RSP + 0xe0],0x1
/* 0e980a42 */  JZ 0x0e980a62
/* 0e980a44 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0e980a4c */  MOV RDI,qword ptr [RSP + 0xf0]
/* 0e980a54 */  AND RSI,-0x2
/* 0e980a58 */  CALL 0x0412a280
/* 0e980a5d */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e980a62 */  TEST RAX,RAX
/* 0e980a65 */  JZ 0x0e980a6c
/* 0e980a67 */  MOV RDI,RBX
/* 0e980a6a */  CALL RAX
/* 0e980a6c */  MOV RAX,qword ptr [RSP + 0xb8]
/* 0e980a74 */  TEST RAX,RAX
/* 0e980a77 */  JZ 0x0e980a83
/* 0e980a79 */  LEA RDI,[RSP + 0xa0]
/* 0e980a81 */  CALL RAX
/* 0e980a83 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e980a8b */  MOV qword ptr [RSP + 0x110],RAX
/* 0e980a93 */  MOVUPS XMM0,xmmword ptr [RSP + 0x60]
/* 0e980a98 */  MOVUPS XMM1,xmmword ptr [RSP + 0x70]
/* 0e980a9d */  MOVDQU XMM2,xmmword ptr [RSP + 0x80]
/* 0e980aa6 */  MOVDQA xmmword ptr [RSP + 0x100],XMM2
/* 0e980aaf */  MOVAPS xmmword ptr [RSP + 0xf0],XMM1
/* 0e980ab7 */  MOVAPS xmmword ptr [RSP + 0xe0],XMM0
/* 0e980abf */  MOVDQA xmmword ptr [RSP + 0xc0],XMM2
/* 0e980ac8 */  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
/* 0e980ad0 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM1
/* 0e980ad8 */  MOV qword ptr [RSP + 0xd0],RAX
/* 0e980ae0 */  MOV RAX,0x1e1bc4d500000004
/* 0e980aea */  MOV qword ptr [RSP + 0xc8],RAX
/* 0e980af2 */  MOVZX EAX,byte ptr [0x0f767190]
/* 0e980af9 */  TEST AL,AL
/* 0e980afb */  JZ 0x0e980dbc
/* 0e980b01 */  LEA RBX,[RSP + 0xa8]
/* 0e980b09 */  MOV EAX,dword ptr [RSP + 0xcc]
/* 0e980b10 */  MOV dword ptr [RSP],EAX
/* 0e980b13 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e980b1c */  MOV dword ptr [RSP + 0x10],0x0
/* 0e980b24 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e980b2d */  LEA RAX,[0x48aead0]
/* 0e980b34 */  MOV qword ptr [RSP + 0x20],RAX
/* 0e980b39 */  LEA RAX,[0xe9ddc50]
/* 0e980b40 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e980b45 */  LEA RAX,[0xe9ddd10]
/* 0e980b4c */  MOV qword ptr [RSP + 0x30],RAX
/* 0e980b51 */  MOV qword ptr [RSP + 0x38],0x0
/* 0e980b5a */  MOV dword ptr [RSP + 0x40],0x0
/* 0e980b62 */  XORPS XMM0,XMM0
/* 0e980b65 */  MOVUPS xmmword ptr [RSP + 0x48],XMM0
/* 0e980b6a */  MOV RSI,RSP
/* 0e980b6d */  MOV RDI,RBX
/* 0e980b70 */  CALL 0x049057f0
/* 0e980b75 */  MOV RDI,RSP
/* 0e980b78 */  CALL 0x048aea50
/* 0e980b7d */  MOVDQU XMM0,xmmword ptr [RBX]
/* 0e980b81 */  MOVDQU XMM1,xmmword ptr [RBX + 0x10]
/* 0e980b86 */  MOVDQA xmmword ptr [RSP + 0x170],XMM1
/* 0e980b8f */  MOVDQA xmmword ptr [RSP + 0x160],XMM0
/* 0e980b98 */  LEA RDI,[0xf5463b0]
/* 0e980b9f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e980ba6 */  MOV ESI,0x8
/* 0e980bab */  CALL qword ptr [RAX + 0x10]
/* 0e980bae */  MOV RBX,RAX
/* 0e980bb1 */  TEST RAX,RAX
/* 0e980bb4 */  JZ 0x0e980ccd
/* 0e980bba */  LEA RAX,[0xf4d3ba0]
/* 0e980bc1 */  MOV qword ptr [RBX],RAX
/* 0e980bc4 */  MOVZX EAX,byte ptr [0x0f551bc8]
/* 0e980bcb */  TEST AL,AL
/* 0e980bcd */  JZ 0x0e980de6
/* 0e980bd3 */  MOV EAX,dword ptr [0x0f551bb4]
/* 0e980bd9 */  MOV dword ptr [RSP],EAX
/* 0e980bdc */  LEA RDI,[0xf5463b0]
/* 0e980be3 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e980bea */  MOV ESI,0x30
/* 0e980bef */  CALL qword ptr [RAX + 0x10]
/* 0e980bf2 */  MOV R14,RAX
/* 0e980bf5 */  TEST RAX,RAX
/* 0e980bf8 */  JZ 0x0e980cde
/* 0e980bfe */  PXOR XMM0,XMM0
/* 0e980c02 */  MOVDQU xmmword ptr [R14 + 0x8],XMM0
/* 0e980c08 */  LEA RAX,[0xef46c48]
/* 0e980c0f */  MOV qword ptr [R14],RAX
/* 0e980c12 */  MOV RAX,R14
/* 0e980c15 */  ADD RAX,0x18
/* 0e980c19 */  MOV qword ptr [R14 + 0x18],RBX
/* 0e980c1d */  MOV qword ptr [R14 + 0x20],0x0
/* 0e980c25 */  MOV byte ptr [R14 + 0x28],0xff
/* 0e980c2a */  MOV qword ptr [RSP + 0x8],RAX
/* 0e980c2f */  MOV qword ptr [RSP + 0x10],R14
/* 0e980c34 */  MOVDQA xmmword ptr [RSP + 0x120],XMM0
/* 0e980c3d */  LEA RDI,[RSP + 0x160]
/* 0e980c45 */  MOV RSI,RSP
/* 0e980c48 */  CALL 0x048afd20
/* 0e980c4d */  MOV RBX,qword ptr [RSP + 0x10]
/* 0e980c52 */  TEST RBX,RBX
/* 0e980c55 */  JZ 0x0e980c7a
/* 0e980c57 */  MOV RAX,-0x1
/* 0e980c5e */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0e980c64 */  TEST RAX,RAX
/* 0e980c67 */  JNZ 0x0e980c7a
/* 0e980c69 */  MOV RAX,qword ptr [RBX]
/* 0e980c6c */  MOV RDI,RBX
/* 0e980c6f */  CALL qword ptr [RAX + 0x10]
/* 0e980c72 */  MOV RDI,RBX
/* 0e980c75 */  CALL 0x0412c2d0
/* 0e980c7a */  MOV RBX,qword ptr [RSP + 0x128]
/* 0e980c82 */  TEST RBX,RBX
/* 0e980c85 */  JZ 0x0e980caa
/* 0e980c87 */  MOV RAX,-0x1
/* 0e980c8e */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0e980c94 */  TEST RAX,RAX
/* 0e980c97 */  JNZ 0x0e980caa
/* 0e980c99 */  MOV RAX,qword ptr [RBX]
/* 0e980c9c */  MOV RDI,RBX
/* 0e980c9f */  CALL qword ptr [RAX + 0x10]
/* 0e980ca2 */  MOV RDI,RBX
/* 0e980ca5 */  CALL 0x0412c2d0
/* 0e980caa */  ADD RSP,0x1e8
/* 0e980cb1 */  POP RBX
/* 0e980cb2 */  POP R12
/* 0e980cb4 */  POP R13
/* 0e980cb6 */  POP R14
/* 0e980cb8 */  POP R15
/* 0e980cba */  POP RBP
/* 0e980cbb */  RET
/* 0e980cbc */  MOV EDI,0x20
/* 0e980cc1 */  XOR ESI,ESI
/* 0e980cc3 */  CALL 0x0eec74c0
/* 0e980cc8 */  JMP 0x0e98015f
/* 0e980ccd */  MOV EDI,0x8
/* 0e980cd2 */  XOR ESI,ESI
/* 0e980cd4 */  CALL 0x0eec74c0
/* 0e980cd9 */  JMP 0x0e980bba
/* 0e980cde */  MOV EDI,0x30
/* 0e980ce3 */  XOR ESI,ESI
/* 0e980ce5 */  CALL 0x0eec74c0
/* 0e980cea */  JMP 0x0e980bfe
/* 0e980cef */  MOV EDI,0x38
/* 0e980cf4 */  XOR ESI,ESI
/* 0e980cf6 */  CALL 0x0eec74c0
/* 0e980cfb */  JMP 0x0e98031c
/* 0e980d00 */  MOV EDI,0x20
/* 0e980d05 */  XOR ESI,ESI
/* 0e980d07 */  CALL 0x0eec74c0
/* 0e980d0c */  JMP 0x0e9803ad
/* 0e980d11 */  MOV EDI,0x20
/* 0e980d16 */  XOR ESI,ESI
/* 0e980d18 */  CALL 0x0eec74c0
/* 0e980d1d */  JMP 0x0e98095e
/* 0e980d22 */  LEA RDI,[0xf767170]
/* 0e980d29 */  MOV R15,RCX
/* 0e980d2c */  MOV R12,RDX
/* 0e980d2f */  CALL 0x04108328
/* 0e980d34 */  MOV RDX,R12
/* 0e980d37 */  MOV RCX,R15
/* 0e980d3a */  TEST EAX,EAX
/* 0e980d3c */  JZ 0x0e980652
/* 0e980d42 */  CALL 0x0e9dcca0
/* 0e980d47 */  LEA RDI,[0x48ae800]
/* 0e980d4e */  LEA RSI,[0xf7670f0]
/* 0e980d55 */  LEA RDX,[0xf53dab8]
/* 0e980d5c */  CALL 0x0eee2f40
/* 0e980d61 */  LEA RDI,[0xf767170]
/* 0e980d68 */  CALL 0x0410844d
/* 0e980d6d */  MOV RDX,R12
/* 0e980d70 */  MOV RCX,R15
/* 0e980d73 */  JMP 0x0e980652
/* 0e980d78 */  LEA RDI,[0xf767170]
/* 0e980d7f */  CALL 0x04108328
/* 0e980d84 */  TEST EAX,EAX
/* 0e980d86 */  JZ 0x0e980741
/* 0e980d8c */  CALL 0x0e9dcca0
/* 0e980d91 */  LEA RDI,[0x48ae800]
/* 0e980d98 */  LEA RSI,[0xf7670f0]
/* 0e980d9f */  LEA RDX,[0xf53dab8]
/* 0e980da6 */  CALL 0x0eee2f40
/* 0e980dab */  LEA RDI,[0xf767170]
/* 0e980db2 */  CALL 0x0410844d
/* 0e980db7 */  JMP 0x0e980741
/* 0e980dbc */  LEA RDI,[0xf767190]
/* 0e980dc3 */  CALL 0x04108328
/* 0e980dc8 */  TEST EAX,EAX
/* 0e980dca */  JZ 0x0e980b01
/* 0e980dd0 */  CALL 0x0e9dcdb0
/* 0e980dd5 */  LEA RDI,[0xf767190]
/* 0e980ddc */  CALL 0x0410844d
/* 0e980de1 */  JMP 0x0e980b01
/* 0e980de6 */  LEA RDI,[0xf551bc8]
/* 0e980ded */  CALL 0x04108328
/* 0e980df2 */  TEST EAX,EAX
/* 0e980df4 */  JZ 0x0e980bd3
/* 0e980dfa */  LEA RDI,[0xf551bb0]
/* 0e980e01 */  CALL 0x04905be0
/* 0e980e06 */  LEA RDI,[0xf551bc8]
/* 0e980e0d */  CALL 0x0410844d
/* 0e980e12 */  JMP 0x0e980bd3
/* 0e980e17 */  LEA RDI,[0xf550768]
/* 0e980e1e */  MOV R12,RAX
/* 0e980e21 */  CALL 0x04108328
/* 0e980e26 */  MOV ECX,EAX
/* 0e980e28 */  MOV RAX,R12
/* 0e980e2b */  TEST ECX,ECX
/* 0e980e2d */  JZ 0x0e98023d
/* 0e980e33 */  LEA RDI,[0xf550750]
/* 0e980e3a */  CALL 0x048b46f0
/* 0e980e3f */  LEA RDI,[0xf550768]
/* 0e980e46 */  CALL 0x0410844d
/* 0e980e4b */  MOV RAX,R12
/* 0e980e4e */  JMP 0x0e98023d
/* 0e980e53 */  LEA RDI,[0xf550ad8]
/* 0e980e5a */  MOV R15,RSI
/* 0e980e5d */  CALL 0x04108328
/* 0e980e62 */  MOV RSI,R15
/* 0e980e65 */  TEST EAX,EAX
/* 0e980e67 */  JZ 0x0e98084c
/* 0e980e6d */  LEA RDI,[0xf550ac0]
/* 0e980e74 */  CALL 0x0488e120
/* 0e980e79 */  LEA RDI,[0xf550ad8]
/* 0e980e80 */  CALL 0x0410844d
/* 0e980e85 */  MOV RSI,R15
/* 0e980e88 */  JMP 0x0e98084c
