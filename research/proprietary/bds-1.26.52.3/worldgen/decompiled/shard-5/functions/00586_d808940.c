/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd908940 (ELF vaddr 0xd808940)
 * Label: caller-of-callee
 * Body:  [[0d908940, 0d908bd5] [0d908be0, 0d908c22] [0d908c30, 0d908fc2] [0d908fd0, 0d909001] [0d909010, 0d909775]]
 * Ghidra: FUN_0d908940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d908940(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 in_R9;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined1 auStack_208 [16];
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  undefined4 uStack_164;
  code *pcStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  char cStack_148;
  undefined7 uStack_147;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  code *pcStack_40;
  
  func_0x0e211520();
  lVar6 = func_0x07c35de0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    puVar21 = (undefined *)(lVar6 + 9);
    if (bVar16) {
      puVar21 = *(undefined **)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
  }
  else {
    puVar21 = &UNK_0138997a;
    uVar10 = 0x16;
  }
  func_0x07c36cf0(auStack_178,param_1,puVar21,uVar10,0);
  if (cStack_148 == '\0') {
    if ((DAT_0f5b54d8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b54d8), iVar4 != 0)) {
      func_0x07c35fd0(0xf5b54c0);
      FUN_0410844d(&DAT_0f5b54d8);
    }
    if ((DAT_0f72e768 == '\0') && (iVar4 = func_0x04108328(&DAT_0f72e768), iVar4 != 0)) {
      func_0x0d9d8960(0xf72e750);
      FUN_0410844d(&DAT_0f72e768);
    }
    uStack_260 = CONCAT44(uStack_260._4_4_,_DAT_0f72e754);
    puStack_258 = &SUB_0d9d8870;
    puStack_250 = &UNK_0d9d8950;
    puVar21 = &UNK_0d9d8950;
    puVar20 = &SUB_0d9d8870;
    uVar19 = uStack_260;
    func_0x05da1460(auStack_178 + 8);
    lVar6 = func_0x0d9d8870(auStack_178._0_8_ + 0x18);
    if ((*(byte *)(lVar6 + 0x1a) & 4) != 0) {
      func_0x07c37030(&uStack_260,auStack_178._0_8_ + 0x18);
      if (uStack_248._4_4_ == 2) {
        piVar7 = *(int **)(*(long *)(puStack_250 + 0x78) + 0x60);
        iVar4 = *piVar7;
        while (iVar4 != (int)uStack_248) {
          piVar7 = piVar7 + 0x16;
          iVar4 = *piVar7;
        }
        puVar3 = *(undefined1 **)(piVar7 + 0xc);
        while (puVar3 != puStack_258) {
          piVar7 = *(int **)(piVar7 + 0xe);
          puVar3 = *(undefined1 **)(piVar7 + 0xc);
        }
      }
      else {
        if (uStack_248._4_4_ != 1) {
          if (uStack_248._4_4_ == 0) {
            *(uint *)(puStack_250 + 0x18) = *(uint *)(puStack_250 + 0x18) | 0x40000;
          }
          goto LAB_0d908ab3;
        }
        piVar7 = *(int **)(*(long *)(puStack_250 + 0x78) + 0x48);
        iVar4 = *piVar7;
        while (iVar4 != (int)uStack_248) {
          piVar7 = piVar7 + 0x1a;
          iVar4 = *piVar7;
        }
      }
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
LAB_0d908ab3:
    uStack_1c8 = CONCAT71(uStack_147,cStack_148);
    uStack_1e8 = CONCAT44(uStack_164,uStack_168);
    uStack_1d0 = CONCAT44(uStack_14c,uStack_150);
    pcStack_1d8 = pcStack_158;
    pcStack_1e0 = pcStack_160;
    uStack_1f8 = auStack_178._0_8_;
    uStack_1f0 = auStack_178._8_8_;
    func_0x07c54ca0(&uStack_260,&uStack_1f8,&UNK_012ea61d,0xc,0,in_R9,uVar19,puVar20,puVar21);
  }
  lVar6 = func_0x0cb3f140(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0d9d8e50(&uStack_1f8,param_1,lVar12,uVar10);
  }
  else {
    func_0x0d9d8e50(&uStack_1f8,param_1,&DAT_01354514,0x1b);
  }
  if ((char)uStack_1c8 != '\0') {
    return;
  }
  lVar12 = uStack_1f8 + 0x18;
  lVar6 = func_0x0cb3f140(lVar12);
  for (pbVar11 = *(byte **)(uStack_1f8 + 0x50); pbVar11 != *(byte **)(uStack_1f8 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0d908c3a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0d908c3a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar11 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar11 + 0x10);
      }
      auVar17[0] = -(*pbVar13 == DAT_014eaba0);
      auVar17[1] = -(pbVar13[1] == DAT_014eaba0._1_1_);
      auVar17[2] = -(pbVar13[2] == DAT_014eaba0._2_1_);
      auVar17[3] = -(pbVar13[3] == DAT_014eaba0._3_1_);
      auVar17[4] = -(pbVar13[4] == DAT_014eaba0._4_1_);
      auVar17[5] = -(pbVar13[5] == DAT_014eaba0._5_1_);
      auVar17[6] = -(pbVar13[6] == DAT_014eaba0._6_1_);
      auVar17[7] = -(pbVar13[7] == DAT_014eaba0._7_1_);
      auVar17[8] = -(pbVar13[8] == DAT_014eaba0._8_1_);
      auVar17[9] = -(pbVar13[9] == DAT_014eaba0._9_1_);
      auVar17[10] = -(pbVar13[10] == DAT_014eaba0._10_1_);
      auVar17[0xb] = -(pbVar13[0xb] == DAT_014eaba0._11_1_);
      auVar17[0xc] = -(pbVar13[0xc] == DAT_014eaba0._12_1_);
      auVar17[0xd] = -(pbVar13[0xd] == DAT_014eaba0._13_1_);
      auVar17[0xe] = -(pbVar13[0xe] == DAT_014eaba0._14_1_);
      auVar17[0xf] = -(pbVar13[0xf] == DAT_014eaba0._15_1_);
      auVar18[0] = -(pbVar13[10] == DAT_014e4ff0);
      auVar18[1] = -(pbVar13[0xb] == DAT_014e4ff0._1_1_);
      auVar18[2] = -(pbVar13[0xc] == DAT_014e4ff0._2_1_);
      auVar18[3] = -(pbVar13[0xd] == DAT_014e4ff0._3_1_);
      auVar18[4] = -(pbVar13[0xe] == DAT_014e4ff0._4_1_);
      auVar18[5] = -(pbVar13[0xf] == DAT_014e4ff0._5_1_);
      auVar18[6] = -(pbVar13[0x10] == DAT_014e4ff0._6_1_);
      auVar18[7] = -(pbVar13[0x11] == DAT_014e4ff0._7_1_);
      auVar18[8] = -(pbVar13[0x12] == DAT_014e4ff0._8_1_);
      auVar18[9] = -(pbVar13[0x13] == DAT_014e4ff0._9_1_);
      auVar18[10] = -(pbVar13[0x14] == DAT_014e4ff0._10_1_);
      auVar18[0xb] = -(pbVar13[0x15] == DAT_014e4ff0._11_1_);
      auVar18[0xc] = -(pbVar13[0x16] == DAT_014e4ff0._12_1_);
      auVar18[0xd] = -(pbVar13[0x17] == DAT_014e4ff0._13_1_);
      auVar18[0xe] = -(pbVar13[0x18] == DAT_014e4ff0._14_1_);
      auVar18[0xf] = -(pbVar13[0x19] == DAT_014e4ff0._15_1_);
      auVar18 = auVar18 & auVar17;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar11 == *(byte **)(uStack_1f8 + 0x58)) {
LAB_0d908c69:
    if ((int)uStack_1d0 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0d908ce6;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_178._0_8_ = func_0x048b0c90(lVar12,lVar6,uStack_1d0._4_4_,1);
      if (auStack_178._0_8_ == 0) {
        auStack_178 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_178);
        if (auStack_178._0_8_ == 0) goto LAB_0d908ce6;
      }
      if ((*(int *)(auStack_178._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_178._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_178._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0d908ce6:
        lVar6 = 0;
      }
    }
    puStack_250 = &UNK_0488e0b0;
    uStack_248 = (code *)0x0;
    uStack_240 = CONCAT35(uStack_240._5_3_,0x48b5725f);
    uStack_260 = 0;
    auStack_178 = (undefined1  [16])0x0;
    pcStack_160 = (code *)&UNK_0488e0b0;
    pcStack_158 = (code *)0x0;
    uStack_150 = 0x48b5725f;
    uStack_14c = uStack_14c & 0xffffff00;
    puStack_1a8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1a8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar19 = _UNK_013bbadf;
    uStack_1b8 = 0x21;
    uStack_1b0 = 0x1a;
    *(ulong *)((long)puStack_1a8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1a8 + 0x12) = uVar19;
    uVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1a8 = _DAT_013bbacd;
    puStack_1a8[1] = uVar19;
    *(undefined1 *)((long)puStack_1a8 + 0x1a) = 0;
    lVar6 = func_0x048b5060(lVar6,&uStack_1b8);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_178) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar15 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar15);
        if ((char)uStack_14c != '\0') {
          if ((char)uStack_14c == '\x02') {
            (*pcStack_160)(5,auStack_178 + 8,puVar15);
          }
          else {
            uVar19 = auStack_178._8_8_;
            auStack_178._8_8_ = 0;
            *puVar15 = uVar19;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_160;
      *(code **)(lVar6 + 0x40) = pcStack_158;
      *(undefined4 *)(lVar6 + 0x48) = uStack_150;
      *(char *)(lVar6 + 0x4c) = (char)uStack_14c;
      pcVar9 = pcStack_158;
    }
    if ((uStack_1b8 & 1) != 0) {
      func_0x0412a280(puStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
      pcVar9 = pcStack_158;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_178 + 8);
    }
    if (uStack_248 != (code *)0x0) {
      (*uStack_248)(&uStack_260);
    }
  }
  else {
    iVar4 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0d908c69;
  }
  uVar10 = uStack_1f8;
  uStack_58 = uStack_1f0;
  uStack_50 = uStack_1e8;
  pcStack_48 = pcStack_1e0;
  pcStack_40 = pcStack_1d8;
  uStack_a0 = uStack_1c8;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar19 = _UNK_01354527;
  *(ulong *)((long)puVar15 + 0xb) = CONCAT35(_UNK_01354524,_DAT_0135451f);
  *(undefined8 *)((long)puVar15 + 0x13) = uVar19;
  uVar19 = CONCAT53(_DAT_0135451f,_UNK_0135451c);
  *puVar15 = _DAT_01354514;
  puVar15[1] = uVar19;
  *(undefined1 *)((long)puVar15 + 0x1b) = 0;
  lVar6 = func_0x0cb3f140(uVar10 + 0x18);
  pbVar13 = *(byte **)(uVar10 + 0x58);
  uStack_98 = uVar10;
  for (pbVar11 = *(byte **)(uVar10 + 0x50); pbVar11 != pbVar13; pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0d90901a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x24) {
LAB_0d90901a:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar11 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar11 + 0x10);
      }
      iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar14,0x24);
      if (iVar4 == 0) break;
    }
  }
  if (pbVar11 != pbVar13) {
    iVar4 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      FUN_0410844d(&DAT_0f550768);
    }
    bVar16 = true;
    if (iVar4 != _DAT_0f550754) goto LAB_0d9092f5;
  }
  if ((int)uStack_1d0 == 0) {
    if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
    goto LAB_0d9090c0;
    lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
  }
  else {
    lVar6 = func_0x048b0c90(uVar10 + 0x18,lVar6,uStack_1d0._4_4_,1);
    if (lVar6 == 0) {
      auStack_178 = ZEXT816(0);
      func_0x048b0d20(auStack_178);
      lVar6 = auStack_178._0_8_;
      if (auStack_178._0_8_ == 0) goto LAB_0d9090c0;
    }
    if ((*(int *)(lVar6 + 0x50) == -0x45dcb126) && (*(long *)(lVar6 + 0x58) != 0)) {
      lVar6 = *(long *)(lVar6 + 0x58) + 0x40;
    }
    else {
LAB_0d9090c0:
      lVar6 = 0;
    }
  }
  uStack_260 = 0;
  puStack_250 = &UNK_048b4ab0;
  uStack_248 = (code *)&UNK_048b49f0;
  uStack_240 = CONCAT35(uStack_240._5_3_,0x1d33bd9c5);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar8 = 0x21;
  puVar8[1] = 0x1b;
  puVar8[2] = puVar15;
  *(undefined2 *)(puVar8 + 3) = 0x300;
  puVar8[4] = 0x10032001a0001;
  puVar8[5] = &UNK_01254d89;
  puVar8[6] = &UNK_01254d89;
  pcStack_160 = (code *)&UNK_048b4ab0;
  pcStack_158 = (code *)&UNK_048b49f0;
  uStack_150 = 0xd33bd9c5;
  uStack_14c = CONCAT31(uStack_14c._1_3_,1);
  uStack_260 = 0;
  auStack_178._8_8_ = puVar8;
  auStack_178._0_8_ = &UNK_048b46e0;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar19 = _UNK_014518c1;
  uStack_1b8 = 0x29;
  uStack_1b0 = 0x24;
  puVar15[2] = _DAT_014518b9;
  puVar15[3] = uVar19;
  uVar19 = _UNK_014518b1;
  *puVar15 = _DAT_014518a9;
  puVar15[1] = uVar19;
  *(undefined4 *)(puVar15 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar15 + 0x24) = 0;
  puStack_1a8 = puVar15;
  lVar6 = func_0x048b5060(lVar6,&uStack_1b8);
  *(undefined **)(lVar6 + 0x20) = &UNK_048b46e0;
  pcVar9 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar6 + 0x20) != auStack_178) {
    puVar15 = (undefined8 *)(lVar6 + 0x28);
    if (*(code **)(lVar6 + 0x40) == (code *)0x0) {
LAB_0d909266:
      uVar19 = auStack_178._8_8_;
      auStack_178._8_8_ = 0;
      *puVar15 = uVar19;
    }
    else {
      (**(code **)(lVar6 + 0x40))(puVar15);
      if ((char)uStack_14c != '\0') {
        if ((char)uStack_14c != '\x02') goto LAB_0d909266;
        (*pcStack_160)(5,auStack_178 + 8,puVar15);
      }
    }
    *(code **)(lVar6 + 0x38) = pcStack_160;
    *(code **)(lVar6 + 0x40) = pcStack_158;
    *(undefined4 *)(lVar6 + 0x48) = uStack_150;
    *(char *)(lVar6 + 0x4c) = (char)uStack_14c;
    pcVar9 = pcStack_158;
  }
  if ((uStack_1b8 & 1) != 0) {
    func_0x0412a280(puStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
    pcVar9 = pcStack_158;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_178 + 8);
  }
  if (uStack_248 != (code *)0x0) {
    (*uStack_248)(&uStack_260);
  }
  puVar15 = (undefined8 *)0x0;
  bVar16 = false;
LAB_0d9092f5:
  uStack_90 = uStack_98;
  uStack_88 = uStack_58;
  uStack_80 = uStack_50;
  pcStack_78 = pcStack_48;
  pcStack_70 = pcStack_40;
  iStack_68 = (int)uStack_1d0;
  uStack_64 = uStack_1d0._4_4_;
  uStack_60 = uStack_a0;
  func_0x0d9d9710(auStack_178,&uStack_90,&UNK_013771cd,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0ef44b00;
  if (pcStack_160 != (code *)0x0) {
    lVar6 = *(long *)pcStack_160;
    pcStack_160 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_160;
  }
  pcStack_160 = pcVar9;
  uStack_260 = CONCAT44(uStack_260._4_4_,uStack_168);
  puStack_258 = (undefined1 *)0x0;
  puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
  uStack_248 = (code *)0x1;
  uStack_240 = 0;
  puStack_238 = &UNK_048b3f30;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &SUB_048b2190;
  puStack_220 = &UNK_0d9d9c60;
  puStack_218 = &UNK_0d9d9e20;
  uStack_210 = 0;
  auStack_208 = ZEXT816(0);
  func_0x048b05a0(auStack_178._8_8_,&uStack_260);
  uVar19 = auStack_208._8_8_;
  if ((long *)auStack_208._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_208._8_8_ + 8);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
      func_0x0412c2d0(uVar19);
    }
  }
  func_0x0d9d9960(auStack_178);
  uStack_188 = (undefined1)uStack_60;
  uStack_190 = CONCAT44(uStack_64,iStack_68);
  pcStack_198 = pcStack_70;
  puStack_1a8 = (undefined8 *)uStack_80;
  pcStack_1a0 = pcStack_78;
  uStack_1b8 = uStack_90;
  uStack_1b0 = uStack_88;
  func_0x048b0bc0(&pcStack_160);
  func_0x0d9d9710(auStack_178,&uStack_1b8,&UNK_012b4b41,0x17);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f0f19d0;
  if (pcStack_160 != (code *)0x0) {
    lVar6 = *(long *)pcStack_160;
    pcStack_160 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_160;
  }
  pcStack_160 = pcVar9;
  uStack_260 = CONCAT44(uStack_260._4_4_,uStack_168);
  puStack_258 = (undefined1 *)0x0;
  puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
  uStack_248 = (code *)0x1;
  uStack_240 = 0;
  puStack_238 = &UNK_0d9d9ff0;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &SUB_07c35de0;
  puStack_220 = &UNK_0d9da000;
  puStack_218 = &UNK_0d9da290;
  uStack_210 = 0;
  auStack_208 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_178._8_8_,&uStack_260);
  uVar19 = auStack_208._8_8_;
  if ((long *)auStack_208._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(auStack_208._8_8_ + 8);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
      func_0x0412c2d0(uVar19);
    }
  }
  func_0x0d9d9960(auStack_178);
  func_0x048b0bc0(&pcStack_160);
  if (bVar16) {
    func_0x0412a280(puVar15,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1354514  Camera Preset File v1.26.50
 * 0x135451f  et File v1.26.50
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
