/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2c45c0 (ELF vaddr 0xe1c45c0)
 * Label: string:minecraft:biome_music
 * Body:  [[0e2c45c0, 0e2c468e] [0e2c4690, 0e2c46d2] [0e2c46e0, 0e2c5596] [0e2c55a0, 0e2c629e]]
 * Ghidra: FUN_0e2c45c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2c45c0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined4 uStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined4 uStack_138;
  code *pcStack_130;
  code *pcStack_128;
  undefined4 uStack_120;
  char cStack_11c;
  long alStack_78 [5];
  int iStack_50;
  undefined4 uStack_4c;
  char cStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  
  lVar6 = func_0x0e250ef0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar15 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar14 = lVar6 + 9;
    if (bVar15) {
      lVar14 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar15) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0e332fc0(alStack_78,param_1,lVar14,uVar10);
  }
  else {
    func_0x0e332fc0(alStack_78,param_1,&UNK_014a91d7,0x17);
  }
  if (cStack_48 != '\0') {
    return;
  }
  lVar14 = alStack_78[0] + 0x18;
  lVar6 = func_0x0e250ef0(lVar14);
  for (pbVar11 = *(byte **)(alStack_78[0] + 0x50); pbVar11 != *(byte **)(alStack_78[0] + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e2c46ea;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e2c46ea:
      if ((bVar2 & 1) == 0) {
        pbVar12 = pbVar11 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar11 + 0x10);
      }
      auVar16[0] = -(*pbVar12 == DAT_014eaba0);
      auVar16[1] = -(pbVar12[1] == DAT_014eaba0._1_1_);
      auVar16[2] = -(pbVar12[2] == DAT_014eaba0._2_1_);
      auVar16[3] = -(pbVar12[3] == DAT_014eaba0._3_1_);
      auVar16[4] = -(pbVar12[4] == DAT_014eaba0._4_1_);
      auVar16[5] = -(pbVar12[5] == DAT_014eaba0._5_1_);
      auVar16[6] = -(pbVar12[6] == DAT_014eaba0._6_1_);
      auVar16[7] = -(pbVar12[7] == DAT_014eaba0._7_1_);
      auVar16[8] = -(pbVar12[8] == DAT_014eaba0._8_1_);
      auVar16[9] = -(pbVar12[9] == DAT_014eaba0._9_1_);
      auVar16[10] = -(pbVar12[10] == DAT_014eaba0._10_1_);
      auVar16[0xb] = -(pbVar12[0xb] == DAT_014eaba0._11_1_);
      auVar16[0xc] = -(pbVar12[0xc] == DAT_014eaba0._12_1_);
      auVar16[0xd] = -(pbVar12[0xd] == DAT_014eaba0._13_1_);
      auVar16[0xe] = -(pbVar12[0xe] == DAT_014eaba0._14_1_);
      auVar16[0xf] = -(pbVar12[0xf] == DAT_014eaba0._15_1_);
      auVar17[0] = -(pbVar12[10] == DAT_014e4ff0);
      auVar17[1] = -(pbVar12[0xb] == DAT_014e4ff0._1_1_);
      auVar17[2] = -(pbVar12[0xc] == DAT_014e4ff0._2_1_);
      auVar17[3] = -(pbVar12[0xd] == DAT_014e4ff0._3_1_);
      auVar17[4] = -(pbVar12[0xe] == DAT_014e4ff0._4_1_);
      auVar17[5] = -(pbVar12[0xf] == DAT_014e4ff0._5_1_);
      auVar17[6] = -(pbVar12[0x10] == DAT_014e4ff0._6_1_);
      auVar17[7] = -(pbVar12[0x11] == DAT_014e4ff0._7_1_);
      auVar17[8] = -(pbVar12[0x12] == DAT_014e4ff0._8_1_);
      auVar17[9] = -(pbVar12[0x13] == DAT_014e4ff0._9_1_);
      auVar17[10] = -(pbVar12[0x14] == DAT_014e4ff0._10_1_);
      auVar17[0xb] = -(pbVar12[0x15] == DAT_014e4ff0._11_1_);
      auVar17[0xc] = -(pbVar12[0x16] == DAT_014e4ff0._12_1_);
      auVar17[0xd] = -(pbVar12[0x17] == DAT_014e4ff0._13_1_);
      auVar17[0xe] = -(pbVar12[0x18] == DAT_014e4ff0._14_1_);
      auVar17[0xf] = -(pbVar12[0x19] == DAT_014e4ff0._15_1_);
      auVar17 = auVar17 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar11 == *(byte **)(alStack_78[0] + 0x58)) {
LAB_0e2c4719:
    if (iStack_50 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0e2c478d;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_148._0_8_ = func_0x048b0c90(lVar14,lVar6,uStack_4c,1);
      if (auStack_148._0_8_ == 0) {
        auStack_148 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_148);
        if (auStack_148._0_8_ == 0) goto LAB_0e2c478d;
      }
      if ((*(int *)(auStack_148._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_148._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_148._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2c478d:
        lVar6 = 0;
      }
    }
    puStack_1a0 = &UNK_0488e0b0;
    pcStack_198 = (code *)0x0;
    uStack_190 = CONCAT35(uStack_190._5_3_,0x48b5725f);
    uStack_1b0 = 0;
    auStack_148 = (undefined1  [16])0x0;
    pcStack_130 = (code *)&UNK_0488e0b0;
    pcStack_128 = (code *)0x0;
    uStack_120 = 0x48b5725f;
    cStack_11c = '\0';
    puStack_30 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_30 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar9 = _UNK_013bbadf;
    uStack_40 = 0x21;
    uStack_38 = 0x1a;
    *(ulong *)((long)puStack_30 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_30 + 0x12) = uVar9;
    uVar9 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_30 = _DAT_013bbacd;
    puStack_30[1] = uVar9;
    *(undefined1 *)((long)puStack_30 + 0x1a) = 0;
    lVar6 = func_0x048b5060(lVar6,&uStack_40);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_148) {
      pcVar7 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar13 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar13);
        if (cStack_11c != '\0') {
          if (cStack_11c == '\x02') {
            (*pcStack_130)(5,auStack_148 + 8,puVar13);
          }
          else {
            uVar9 = auStack_148._8_8_;
            auStack_148._8_8_ = 0;
            *puVar13 = uVar9;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_130;
      *(code **)(lVar6 + 0x40) = pcStack_128;
      *(undefined4 *)(lVar6 + 0x48) = uStack_120;
      *(char *)(lVar6 + 0x4c) = cStack_11c;
      pcVar7 = pcStack_128;
    }
    if ((uStack_40 & 1) != 0) {
      func_0x0412a280(puStack_30,uStack_40 & 0xfffffffffffffffe);
      pcVar7 = pcStack_128;
    }
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_148 + 8);
    }
    if (pcStack_198 != (code *)0x0) {
      (*pcStack_198)(&uStack_1b0);
    }
  }
  else {
    iVar3 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar3 == _DAT_0f550ac4) goto LAB_0e2c4719;
  }
  func_0x0e3c45a0(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e1d790,0x18);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b8548;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e335c70;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e335970;
  puStack_170 = &UNK_0e335c80;
  puStack_168 = &UNK_0e335e40;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e3c5440(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e1d7b0,0x18);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b8688;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e337b60;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e337860;
  puStack_170 = &UNK_0e337b70;
  puStack_168 = &UNK_0e337d30;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e2c91a0(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e13780,0x1c);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b5d60;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e339960;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e339660;
  puStack_170 = &UNK_0e339970;
  puStack_168 = &UNK_0e339b30;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e3c9de0(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e1d7d0,0x1a);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b87c8;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e33b760;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e33b460;
  puStack_170 = &UNK_0e33b770;
  puStack_168 = &UNK_0e33b930;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e3ca250(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e1d7f0,0x13);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b8908;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e33d470;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e33d170;
  puStack_170 = &UNK_0e33d480;
  puStack_168 = &UNK_0e33d640;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e3ca6a0(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e1d810,0x1a);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b8a48;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e33f290;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e33ef90;
  puStack_170 = &UNK_0e33f2a0;
  puStack_168 = &UNK_0e33f460;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  if (iStack_50 == 4) {
    uVar9 = func_0x0e250ef0(alStack_78[0] + 0x18);
    lVar6 = func_0x048b1040(alStack_78[0] + 0x18,uVar9,uStack_4c,1);
    if (lVar6 == 0) {
      auStack_148 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_148);
      lVar14 = *(long *)(auStack_148._0_8_ + 0x38);
      lVar6 = auStack_148._0_8_;
      if (lVar14 == 0) goto LAB_0e2c5572;
LAB_0e2c5590:
      do {
        lVar6 = lVar14;
        lVar14 = *(long *)(lVar6 + 0x38);
        if (*(long *)(lVar6 + 0x38) == 0) {
          auStack_148 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_148);
          lVar14 = auStack_148._0_8_;
        }
      } while (lVar14 != 0);
    }
    else {
      lVar14 = *(long *)(lVar6 + 0x38);
      if (*(long *)(lVar6 + 0x38) != 0) goto LAB_0e2c5590;
LAB_0e2c5572:
      auStack_148 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_148);
      lVar14 = auStack_148._0_8_;
      if (auStack_148._0_8_ != 0) goto LAB_0e2c5590;
    }
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  else {
    if (iStack_50 != 1) goto LAB_0e2c5622;
    uVar9 = func_0x0e250ef0(alStack_78[0] + 0x18);
    lVar6 = func_0x048b0c90(alStack_78[0] + 0x18,uVar9,uStack_4c,1);
    if (lVar6 == 0) {
      auStack_148 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_148);
      lVar6 = auStack_148._0_8_;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  puVar13[1] = 0xffffffffffffffff;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0xff;
  *puVar13 = &UNK_0f4e2d20;
  plVar4 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar13;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
LAB_0e2c5622:
  func_0x0e2c8790(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e13760,0x1b);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b5ea0;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e341060;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e340d60;
  puStack_170 = &UNK_0e341070;
  puStack_168 = &UNK_0e341230;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e2c6390(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e136d0,0x1f);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b5fe0;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e342f50;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e342c50;
  puStack_170 = &UNK_0e342f60;
  puStack_168 = &UNK_0e343120;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e2c7590(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e13710,0x22);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b6120;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e344e40;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e344b40;
  puStack_170 = &UNK_0e344e50;
  puStack_168 = &UNK_0e345010;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e2c9600(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e137d0,0x1d);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b6260;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e346d30;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e346a30;
  puStack_170 = &UNK_0e346d40;
  puStack_168 = &UNK_0e346f00;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e2ca800(param_1);
  func_0x0e333880(auStack_148,alStack_78,&UNK_01e13810,0x1a);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b63a0;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e348c20;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e348920;
  puStack_170 = &UNK_0e348c30;
  puStack_168 = &UNK_0e348df0;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  func_0x0e2d06e0(param_1);
  func_0x0e333880(auStack_148,alStack_78,&DAT_01e13870,0x15);
  pcVar7 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar7 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar7 = &UNK_0f4b64e0;
  if (pcStack_130 != (code *)0x0) {
    lVar6 = *(long *)pcStack_130;
    pcStack_130 = pcVar7;
    (**(code **)(lVar6 + 8))();
    pcVar7 = pcStack_130;
  }
  pcStack_130 = pcVar7;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uStack_138);
  uStack_1a8 = 0;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
  pcStack_198 = (code *)0x1;
  uStack_190 = 0;
  puStack_188 = &UNK_0e34ab60;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &UNK_0e34a860;
  puStack_170 = &UNK_0e34ab70;
  puStack_168 = &UNK_0e34ad30;
  uStack_160 = 0;
  auStack_158 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_148._8_8_,&uStack_1b0);
  uVar9 = auStack_158._8_8_;
  if ((long *)auStack_158._8_8_ != (long *)0x0) {
    LOCK();
    plVar4 = (long *)(auStack_158._8_8_ + 8);
    lVar6 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_158._8_8_ + 0x10))(auStack_158._8_8_);
      func_0x0412c2d0(uVar9);
    }
  }
  iVar3 = *(int *)(auStack_148._8_8_ + 0x1c);
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(auStack_148._8_8_ + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != *(int *)(auStack_148._8_8_ + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar3 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_148._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e333d40(auStack_148);
  func_0x048b0bc0(&pcStack_130);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
