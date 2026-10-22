/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe509c30 (ELF vaddr 0xe409c30)
 * Label: callee2-of:0xe3dd790
 * Body:  [[0e509c30, 0e509e2b] [0e509e30, 0e509e71] [0e509e80, 0e50a937]]
 * Ghidra: FUN_0e509c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e509c30(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  byte *pbVar12;
  int *piVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint5 uStack_140;
  undefined3 uStack_13b;
  uint5 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined1 uStack_124;
  undefined1 uStack_120;
  undefined1 uStack_11c;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  char cStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((DAT_0f756650 == '\0') && (iVar9 = func_0x04108328(&DAT_0f756650), iVar9 != 0)) {
    func_0x0e56d7b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7565d0,0xf53dab8);
    FUN_0410844d(&DAT_0f756650);
  }
  plVar16 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7565d0 + 4)) * 8);
  do {
    lVar20 = *plVar16;
    if (lVar20 == -1) goto LAB_0e509ca0;
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f7565d0 + 4))
  ;
  if (plVar16 == *(long **)(param_1 + 0x38)) {
LAB_0e509ca0:
    puVar11 = &DAT_0f7565d0;
    if (iRam000000000f756630 != -0x2b3da790) goto LAB_0e509d0d;
LAB_0e509ccb:
    lVar20 = *(long *)(puVar11 + 0x68);
    if (lVar20 == 0) goto LAB_0e509d0d;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar18 = lVar20 + 9;
    if (bVar22) {
      lVar18 = *(long *)(lVar20 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar15 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0e60e530(&uStack_90,param_1,lVar18,uVar15);
    uVar15 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    uStack_48 = uStack_78;
    uStack_40 = uStack_70;
    iVar9 = iStack_68;
    uVar5 = uStack_64;
    cVar6 = cStack_60;
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e509ccb;
LAB_0e509d0d:
    func_0x0e60e530(&uStack_90,param_1,&UNK_011b3040,0x13);
    uVar15 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    uStack_48 = uStack_78;
    uStack_40 = uStack_70;
    iVar9 = iStack_68;
    uVar5 = uStack_64;
    cVar6 = cStack_60;
  }
  if (cVar6 != '\0') {
    return;
  }
  if ((DAT_0f756650 == '\0') && (iVar8 = func_0x04108328(&DAT_0f756650), iVar8 != 0)) {
    func_0x0e56d7b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7565d0,0xf53dab8);
    FUN_0410844d(&DAT_0f756650);
  }
  plVar16 = (long *)(*(long *)(uVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f7565d0 + 4)) * 8);
  do {
    lVar20 = *plVar16;
    if (lVar20 == -1) goto LAB_0e509de0;
    plVar16 = (long *)(*(long *)(uVar15 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f7565d0 + 4));
  if (plVar16 == *(long **)(uVar15 + 0x38)) {
LAB_0e509de0:
    puVar11 = &DAT_0f7565d0;
    pbVar12 = *(byte **)(uVar15 + 0x50);
    pbVar17 = *(byte **)(uVar15 + 0x58);
    if (pbVar12 != pbVar17) {
LAB_0e509e5e:
      do {
        bVar2 = *pbVar12;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x1a) goto LAB_0e509e8a;
        }
        else if (*(long *)(pbVar12 + 8) == 0x1a) {
LAB_0e509e8a:
          if ((bVar2 & 1) == 0) {
            pbVar19 = pbVar12 + 1;
          }
          else {
            pbVar19 = *(byte **)(pbVar12 + 0x10);
          }
          auVar23[0] = -(*pbVar19 == DAT_014eaba0);
          auVar23[1] = -(pbVar19[1] == DAT_014eaba0._1_1_);
          auVar23[2] = -(pbVar19[2] == DAT_014eaba0._2_1_);
          auVar23[3] = -(pbVar19[3] == DAT_014eaba0._3_1_);
          auVar23[4] = -(pbVar19[4] == DAT_014eaba0._4_1_);
          auVar23[5] = -(pbVar19[5] == DAT_014eaba0._5_1_);
          auVar23[6] = -(pbVar19[6] == DAT_014eaba0._6_1_);
          auVar23[7] = -(pbVar19[7] == DAT_014eaba0._7_1_);
          auVar23[8] = -(pbVar19[8] == DAT_014eaba0._8_1_);
          auVar23[9] = -(pbVar19[9] == DAT_014eaba0._9_1_);
          auVar23[10] = -(pbVar19[10] == DAT_014eaba0._10_1_);
          auVar23[0xb] = -(pbVar19[0xb] == DAT_014eaba0._11_1_);
          auVar23[0xc] = -(pbVar19[0xc] == DAT_014eaba0._12_1_);
          auVar23[0xd] = -(pbVar19[0xd] == DAT_014eaba0._13_1_);
          auVar23[0xe] = -(pbVar19[0xe] == DAT_014eaba0._14_1_);
          auVar23[0xf] = -(pbVar19[0xf] == DAT_014eaba0._15_1_);
          auVar24[0] = -(pbVar19[10] == DAT_014e4ff0);
          auVar24[1] = -(pbVar19[0xb] == DAT_014e4ff0._1_1_);
          auVar24[2] = -(pbVar19[0xc] == DAT_014e4ff0._2_1_);
          auVar24[3] = -(pbVar19[0xd] == DAT_014e4ff0._3_1_);
          auVar24[4] = -(pbVar19[0xe] == DAT_014e4ff0._4_1_);
          auVar24[5] = -(pbVar19[0xf] == DAT_014e4ff0._5_1_);
          auVar24[6] = -(pbVar19[0x10] == DAT_014e4ff0._6_1_);
          auVar24[7] = -(pbVar19[0x11] == DAT_014e4ff0._7_1_);
          auVar24[8] = -(pbVar19[0x12] == DAT_014e4ff0._8_1_);
          auVar24[9] = -(pbVar19[0x13] == DAT_014e4ff0._9_1_);
          auVar24[10] = -(pbVar19[0x14] == DAT_014e4ff0._10_1_);
          auVar24[0xb] = -(pbVar19[0x15] == DAT_014e4ff0._11_1_);
          auVar24[0xc] = -(pbVar19[0x16] == DAT_014e4ff0._12_1_);
          auVar24[0xd] = -(pbVar19[0x17] == DAT_014e4ff0._13_1_);
          auVar24[0xe] = -(pbVar19[0x18] == DAT_014e4ff0._14_1_);
          auVar24[0xf] = -(pbVar19[0x19] == DAT_014e4ff0._15_1_);
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
        pbVar12 = pbVar12 + 0x38;
      } while (pbVar12 != pbVar17);
    }
  }
  else {
    puVar11 = (undefined *)plVar16[2];
    pbVar12 = *(byte **)(uVar15 + 0x50);
    pbVar17 = *(byte **)(uVar15 + 0x58);
    if (pbVar12 != pbVar17) goto LAB_0e509e5e;
  }
  if (pbVar12 == pbVar17) {
LAB_0e509ec0:
    if (iVar9 == 0) {
      if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0e509f3c;
      lVar20 = *(long *)(puVar11 + 0x68) + 0x38;
    }
    else {
      if (puVar11 == (undefined *)0x0) {
        puVar11 = (undefined *)func_0x048aead0(uVar15 + 0x18);
      }
      auStack_1e8._0_8_ = func_0x048b0c90(uVar15 + 0x18,puVar11,uVar5,1);
      if (auStack_1e8._0_8_ == 0) {
        auStack_1e8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1e8);
        if (auStack_1e8._0_8_ == 0) goto LAB_0e509f3c;
      }
      if ((*(int *)(auStack_1e8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1e8._0_8_ + 0x58) != 0)) {
        lVar20 = *(long *)(auStack_1e8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e509f3c:
        lVar20 = 0;
      }
    }
    puStack_240 = &UNK_0488e0b0;
    uStack_238 = (code *)0x0;
    uStack_230 = CONCAT35(uStack_230._5_3_,0x48b5725f);
    uStack_250 = 0;
    auStack_1e8 = (undefined1  [16])0x0;
    pcStack_1d0 = (code *)&UNK_0488e0b0;
    pcStack_1c8 = (code *)0x0;
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x48b5725f);
    puStack_f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_f8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_108 = 0x21;
    uStack_100 = 0x1a;
    *(ulong *)((long)puStack_f8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_f8 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_f8 = _DAT_013bbacd;
    puStack_f8[1] = uVar3;
    *(undefined1 *)((long)puStack_f8 + 0x1a) = 0;
    lVar20 = func_0x048b5060(lVar20,&uStack_108);
    *(undefined8 *)(lVar20 + 0x20) = 0;
    if ((undefined1 *)(lVar20 + 0x20) == auStack_1e8) {
      pcVar14 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar20 + 0x40) != (code *)0x0) {
        puVar21 = (undefined8 *)(lVar20 + 0x28);
        (**(code **)(lVar20 + 0x40))(puVar21);
        if (uStack_1c0._4_1_ != '\0') {
          if (uStack_1c0._4_1_ == '\x02') {
            (*pcStack_1d0)(5,auStack_1e8 + 8,puVar21);
          }
          else {
            uVar3 = auStack_1e8._8_8_;
            auStack_1e8._8_8_ = 0;
            *puVar21 = uVar3;
          }
        }
      }
      *(code **)(lVar20 + 0x38) = pcStack_1d0;
      *(code **)(lVar20 + 0x40) = pcStack_1c8;
      *(undefined4 *)(lVar20 + 0x48) = (undefined4)uStack_1c0;
      *(char *)(lVar20 + 0x4c) = uStack_1c0._4_1_;
      pcVar14 = pcStack_1c8;
    }
    if ((uStack_108 & 1) != 0) {
      func_0x0412a280(puStack_f8,uStack_108 & 0xfffffffffffffffe);
      pcVar14 = pcStack_1c8;
    }
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(auStack_1e8 + 8);
    }
    if (uStack_238 != (code *)0x0) {
      (*uStack_238)(&uStack_250);
    }
  }
  else {
    iVar8 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f550ad8 == '\0') &&
       (puStack_110 = puVar11, iVar10 = func_0x04108328(&DAT_0f550ad8), puVar11 = puStack_110,
       iVar10 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
      puVar11 = puStack_110;
    }
    if (iVar8 == _DAT_0f550ac4) goto LAB_0e509ec0;
  }
  uStack_c0 = uStack_58;
  uStack_b8 = uStack_50;
  uStack_b0 = uStack_48;
  uStack_a8 = uStack_40;
  uStack_a0 = 0x5127f14d00000002;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  pcStack_1c8 = (code *)0x0;
  uStack_1c0 = 0;
  uStack_1d8 = 0;
  pcStack_1d0 = (code *)0x0;
  auStack_1e8 = ZEXT816(0);
  uStack_178 = CONCAT44(uStack_178._4_4_,0x3f600000);
  uStack_c8 = uVar15;
  cStack_98 = cVar6;
  FUN_048afb10(&uStack_1a8,8);
  uVar3 = _uStack_140;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  _uStack_140 = CONCAT62(stack0xfffffffffffffec2,0xff00);
  uVar7 = _uStack_140;
  uStack_13b = SUB83(uVar3,5);
  uStack_140 = (uint5)(uint)uVar7;
  uVar15 = (ulong)_uStack_138 >> 0x28;
  uVar4 = (uint)_uStack_138;
  uStack_138 = (uint5)(uVar4 & 0xffffff00);
  _uStack_138 = CONCAT35((int3)uVar15,uStack_138);
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar21 = &UNK_0f4c2dc0;
  uVar3 = auStack_1e8._0_8_;
  auStack_1e8._0_8_ = puVar21;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  if ((uStack_1c0 & 1) != 0) {
    func_0x0412a280(uStack_1b0,uStack_1c0 & 0xfffffffffffffffe);
  }
  uStack_1c0 = CONCAT26(uStack_1c0._6_2_,0x6570797408);
  if ((DAT_0f7565b8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7565b8), iVar9 != 0)) {
    func_0x0e56d670();
    FUN_0410844d(&DAT_0f7565b8);
  }
  uStack_250 = CONCAT44(uStack_250._4_4_,uStack_a0._4_4_);
  lStack_248 = 0;
  puStack_240 = (undefined *)CONCAT44(puStack_240._4_4_,3);
  uStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_0e60e1f0;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &UNK_0e609ce0;
  puStack_210 = &UNK_0e60f2b0;
  puStack_208 = &UNK_0e60f2c0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  plStack_1f0 = (long *)0x0;
  func_0x048b05a0(&uStack_c0,&uStack_250);
  plVar16 = plStack_1f0;
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      func_0x0412c2d0(plVar16);
    }
  }
  puStack_f8 = (undefined8 *)uStack_b0;
  uStack_f0 = uStack_a8;
  uStack_108 = uStack_c0;
  uStack_100 = uStack_b8;
  func_0x0e60f040(&uStack_250,&uStack_108,auStack_1e8);
  if (uStack_238._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)((long)puStack_240 + 0x78) + 0x60);
    iVar9 = *piVar13;
    while (iVar9 != (int)uStack_238) {
      piVar13 = piVar13 + 0x16;
      iVar9 = *piVar13;
    }
    lVar20 = *(long *)(piVar13 + 0xc);
    while (lVar20 != lStack_248) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar20 = *(long *)(piVar13 + 0xc);
    }
LAB_0e50a38f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
  }
  else {
    if (uStack_238._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)((long)puStack_240 + 0x78) + 0x48);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_238) {
        piVar13 = piVar13 + 0x1a;
        iVar9 = *piVar13;
      }
      goto LAB_0e50a38f;
    }
    if (uStack_238._4_4_ == 0) {
      *(uint *)((long)puStack_240 + 0x18U) = *(uint *)((long)puStack_240 + 0x18U) | 0x90000;
    }
  }
  uStack_108 = uStack_c8;
  uStack_100 = uStack_c0;
  puStack_f8 = (undefined8 *)uStack_b8;
  uStack_f0 = uStack_b0;
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  cStack_d8 = cStack_98;
  func_0x048b0bc0(auStack_1e8);
  if ((DAT_0f7565b8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7565b8), iVar9 != 0)) {
    func_0x0e56d670();
    FUN_0410844d(&DAT_0f7565b8);
  }
  uVar15 = uStack_108;
  uStack_e0 = 0x425ed3ca00000001;
  if ((DAT_0f756650 == '\0') && (iVar9 = func_0x04108328(&DAT_0f756650), iVar9 != 0)) {
    func_0x0e56d7b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7565d0,0xf53dab8);
    FUN_0410844d(&DAT_0f756650);
  }
  plVar16 = (long *)(*(long *)(uVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar15 + 0x20) - *(long *)(uVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f7565d0 + 4)) * 8);
  do {
    lVar20 = *plVar16;
    if (lVar20 == -1) goto LAB_0e50a470;
    plVar16 = (long *)(*(long *)(uVar15 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(uVar15 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f7565d0 + 4));
  if (plVar16 == *(long **)(uVar15 + 0x38)) {
LAB_0e50a470:
    auStack_1e8._0_8_ = &DAT_0f7565d0;
  }
  else {
    auStack_1e8._0_8_ = plVar16[2];
  }
  auStack_1e8._8_8_ = uVar15 + 0x18;
  func_0x0ed621a0(auStack_1e8,uStack_e0._4_4_);
  auStack_1e8._0_2_ = 1;
  auStack_1e8._8_8_ = &uStack_100;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uStack_e0._4_4_);
  pcStack_1d0 = (code *)0x0;
  pcStack_1c8 = (code *)0x0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = CONCAT17(uStack_1a8._7_1_,0x65756c61760a);
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = CONCAT44(uStack_160._4_4_,0x3f600000);
  FUN_048afb10(&uStack_190,8);
  _uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  _uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_128 = 0xff00;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar14 = &UNK_0ef46ce8;
  if (pcStack_1d0 != (code *)0x0) {
    lVar20 = *(long *)pcStack_1d0;
    pcStack_1d0 = pcVar14;
    (**(code **)(lVar20 + 8))();
    pcVar14 = pcStack_1d0;
  }
  pcStack_1d0 = pcVar14;
  uStack_250 = CONCAT44(uStack_250._4_4_,(undefined4)uStack_1d8);
  lStack_248 = 0;
  puStack_240 = (undefined *)((ulong)puStack_240 & 0xffffffff00000000);
  uStack_238 = (code *)0x1;
  uStack_230 = 0;
  puStack_228 = &UNK_0490ce30;
  puStack_220 = &SUB_048b06d0;
  puStack_218 = &SUB_0490cb20;
  puStack_210 = &UNK_0e60f310;
  puStack_208 = &UNK_0e60f470;
  uStack_200 = 0;
  uStack_1f8 = 0;
  plStack_1f0 = (long *)0x0;
  func_0x048b05a0(auStack_1e8._8_8_,&uStack_250);
  plVar16 = plStack_1f0;
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      func_0x0412c2d0(plVar16);
    }
  }
  func_0x0e60f040(&uStack_250,auStack_1e8._8_8_,&pcStack_1d0);
  if (uStack_238._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)((long)puStack_240 + 0x78) + 0x60);
    iVar9 = *piVar13;
    while (iVar9 != (int)uStack_238) {
      piVar13 = piVar13 + 0x16;
      iVar9 = *piVar13;
    }
    lVar20 = *(long *)(piVar13 + 0xc);
    while (lVar20 != lStack_248) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar20 = *(long *)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_238._4_4_ != 1) {
      if (uStack_238._4_4_ == 0) {
        *(uint *)((long)puStack_240 + 0x18U) =
             *(uint *)((long)puStack_240 + 0x18U) | auStack_1e8._0_4_ << 0x10;
      }
      goto LAB_0e50a732;
    }
    piVar13 = *(int **)(*(long *)((long)puStack_240 + 0x78) + 0x48);
    iVar9 = *piVar13;
    while (iVar9 != (int)uStack_238) {
      piVar13 = piVar13 + 0x1a;
      iVar9 = *piVar13;
    }
  }
  piVar13[4] = piVar13[4] | auStack_1e8._0_4_ << 0x10;
LAB_0e50a732:
  func_0x048b0bc0(&pcStack_1d0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
