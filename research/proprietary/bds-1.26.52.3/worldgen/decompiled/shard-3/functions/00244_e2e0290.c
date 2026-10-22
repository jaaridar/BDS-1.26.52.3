/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3e0290 (ELF vaddr 0xe2e0290)
 * Label: caller-of-callee
 * Body:  [[0e3e0290, 0e3e0360] [0e3e0370, 0e3e03b2] [0e3e03c0, 0e3e06d6] [0e3e06e0, 0e3e0711] [0e3e0720, 0e3e0f31] [0e3e0f40, 0e3e10d4]]
 * Ghidra: FUN_0e3e0290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3e0290(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_248 [16];
  undefined4 uStack_238;
  code *pcStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined2 uStack_1ff;
  undefined1 uStack_1fd;
  undefined4 uStack_1fc;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined2 uStack_188;
  undefined2 uStack_186;
  uint uStack_184;
  uint uStack_180;
  undefined1 uStack_17c;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  char cStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar7 = func_0x0c5071b0(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar17 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar16 = lVar7 + 9;
    if (bVar17) {
      lVar16 = *(long *)(lVar7 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar17) {
      uVar10 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e4cba60(&uStack_d0,param_1,lVar16,uVar10);
  }
  else {
    func_0x0e4cba60(&uStack_d0,param_1,&DAT_01440bb8,0x19);
  }
  if (cStack_a0 != '\0') goto LAB_0e3e0f68;
  lVar16 = uStack_d0 + 0x18;
  lVar7 = func_0x0c5071b0(lVar16);
  for (pbVar11 = *(byte **)(uStack_d0 + 0x50); pbVar11 != *(byte **)(uStack_d0 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3e03ca;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e3e03ca:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar11 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar11 + 0x10);
      }
      auVar18[0] = -(*pbVar13 == DAT_014eaba0);
      auVar18[1] = -(pbVar13[1] == DAT_014eaba0._1_1_);
      auVar18[2] = -(pbVar13[2] == DAT_014eaba0._2_1_);
      auVar18[3] = -(pbVar13[3] == DAT_014eaba0._3_1_);
      auVar18[4] = -(pbVar13[4] == DAT_014eaba0._4_1_);
      auVar18[5] = -(pbVar13[5] == DAT_014eaba0._5_1_);
      auVar18[6] = -(pbVar13[6] == DAT_014eaba0._6_1_);
      auVar18[7] = -(pbVar13[7] == DAT_014eaba0._7_1_);
      auVar18[8] = -(pbVar13[8] == DAT_014eaba0._8_1_);
      auVar18[9] = -(pbVar13[9] == DAT_014eaba0._9_1_);
      auVar18[10] = -(pbVar13[10] == DAT_014eaba0._10_1_);
      auVar18[0xb] = -(pbVar13[0xb] == DAT_014eaba0._11_1_);
      auVar18[0xc] = -(pbVar13[0xc] == DAT_014eaba0._12_1_);
      auVar18[0xd] = -(pbVar13[0xd] == DAT_014eaba0._13_1_);
      auVar18[0xe] = -(pbVar13[0xe] == DAT_014eaba0._14_1_);
      auVar18[0xf] = -(pbVar13[0xf] == DAT_014eaba0._15_1_);
      auVar19[0] = -(pbVar13[10] == DAT_014e4ff0);
      auVar19[1] = -(pbVar13[0xb] == DAT_014e4ff0._1_1_);
      auVar19[2] = -(pbVar13[0xc] == DAT_014e4ff0._2_1_);
      auVar19[3] = -(pbVar13[0xd] == DAT_014e4ff0._3_1_);
      auVar19[4] = -(pbVar13[0xe] == DAT_014e4ff0._4_1_);
      auVar19[5] = -(pbVar13[0xf] == DAT_014e4ff0._5_1_);
      auVar19[6] = -(pbVar13[0x10] == DAT_014e4ff0._6_1_);
      auVar19[7] = -(pbVar13[0x11] == DAT_014e4ff0._7_1_);
      auVar19[8] = -(pbVar13[0x12] == DAT_014e4ff0._8_1_);
      auVar19[9] = -(pbVar13[0x13] == DAT_014e4ff0._9_1_);
      auVar19[10] = -(pbVar13[0x14] == DAT_014e4ff0._10_1_);
      auVar19[0xb] = -(pbVar13[0x15] == DAT_014e4ff0._11_1_);
      auVar19[0xc] = -(pbVar13[0x16] == DAT_014e4ff0._12_1_);
      auVar19[0xd] = -(pbVar13[0x17] == DAT_014e4ff0._13_1_);
      auVar19[0xe] = -(pbVar13[0x18] == DAT_014e4ff0._14_1_);
      auVar19[0xf] = -(pbVar13[0x19] == DAT_014e4ff0._15_1_);
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
  if (pbVar11 == *(byte **)(uStack_d0 + 0x58)) {
LAB_0e3e03f9:
    if (iStack_a8 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0e3e046d;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      auStack_248._0_8_ = func_0x048b0c90(lVar16,lVar7,uStack_a4,1);
      if (auStack_248._0_8_ == 0) {
        auStack_248 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_248);
        if (auStack_248._0_8_ == 0) goto LAB_0e3e046d;
      }
      if ((*(int *)(auStack_248._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_248._0_8_ + 0x58) != 0)) {
        lVar7 = *(long *)(auStack_248._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3e046d:
        lVar7 = 0;
      }
    }
    plStack_128 = (long *)&UNK_0488e0b0;
    pcStack_120 = (code *)0x0;
    uStack_118 = CONCAT35(uStack_118._5_3_,0x48b5725f);
    uStack_138 = 0;
    auStack_248 = (undefined1  [16])0x0;
    pcStack_230 = (code *)&UNK_0488e0b0;
    pcStack_228 = (code *)0x0;
    uStack_220 = CONCAT35(uStack_220._5_3_,0x48b5725f);
    puStack_168 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_168 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_178 = 0x21;
    uStack_170 = 0x1a;
    *(ulong *)((long)puStack_168 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_168 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_168 = _DAT_013bbacd;
    puStack_168[1] = uVar3;
    *(undefined1 *)((long)puStack_168 + 0x1a) = 0;
    lVar7 = func_0x048b5060(lVar7,&uStack_178);
    *(undefined8 *)(lVar7 + 0x20) = 0;
    if ((undefined1 *)(lVar7 + 0x20) == auStack_248) {
      pcVar8 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar7 + 0x40) != (code *)0x0) {
        puVar15 = (undefined8 *)(lVar7 + 0x28);
        (**(code **)(lVar7 + 0x40))(puVar15);
        if (uStack_220._4_1_ != '\0') {
          if (uStack_220._4_1_ == '\x02') {
            (*pcStack_230)(5,auStack_248 + 8,puVar15);
          }
          else {
            uVar3 = auStack_248._8_8_;
            auStack_248._8_8_ = 0;
            *puVar15 = uVar3;
          }
        }
      }
      *(code **)(lVar7 + 0x38) = pcStack_230;
      *(code **)(lVar7 + 0x40) = pcStack_228;
      *(undefined4 *)(lVar7 + 0x48) = (undefined4)uStack_220;
      *(char *)(lVar7 + 0x4c) = uStack_220._4_1_;
      pcVar8 = pcStack_228;
    }
    if ((uStack_178 & 1) != 0) {
      func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
      pcVar8 = pcStack_228;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_248 + 8);
    }
    if (pcStack_120 != (code *)0x0) {
      (*pcStack_120)(&uStack_138);
    }
  }
  else {
    iVar5 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e3e03f9;
  }
  uStack_88 = uStack_c8;
  puStack_80 = puStack_c0;
  uStack_78 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_90 = CONCAT71(uStack_9f,cStack_a0);
  puStack_140 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_140 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01440bc9;
  *(ulong *)((long)puStack_140 + 9) = CONCAT17(UNK_01440bc8,_DAT_01440bc1);
  *(undefined8 *)((long)puStack_140 + 0x11) = uVar3;
  uVar3 = CONCAT71(_DAT_01440bc1,UNK_01440bc0);
  *puStack_140 = _DAT_01440bb8;
  puStack_140[1] = uVar3;
  *(undefined1 *)((long)puStack_140 + 0x19) = 0;
  lStack_98 = param_1;
  lVar7 = func_0x0c5071b0(uStack_d0 + 0x18);
  pbVar13 = *(byte **)(uStack_d0 + 0x58);
  for (pbVar11 = *(byte **)(uStack_d0 + 0x50); pbVar11 != pbVar13; pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e3e072a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x24) {
LAB_0e3e072a:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar11 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar11 + 0x10);
      }
      iVar5 = func_0x0eee3000(&DAT_014518a9,pbVar14,0x24);
      if (iVar5 == 0) break;
    }
  }
  if (pbVar11 == pbVar13) {
LAB_0e3e0757:
    if (iStack_a8 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0e3e07d1;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      lVar7 = func_0x048b0c90(uStack_d0 + 0x18,lVar7,uStack_a4,1);
      if (lVar7 == 0) {
        auStack_248 = ZEXT816(0);
        FUN_048b0d20(auStack_248);
        lVar7 = auStack_248._0_8_;
        if (auStack_248._0_8_ == 0) goto LAB_0e3e07d1;
      }
      if ((*(int *)(lVar7 + 0x50) == -0x45dcb126) && (*(long *)(lVar7 + 0x58) != 0)) {
        lVar7 = *(long *)(lVar7 + 0x58) + 0x40;
      }
      else {
LAB_0e3e07d1:
        lVar7 = 0;
      }
    }
    uStack_138 = 0;
    plStack_128 = (long *)&UNK_048b4ab0;
    pcStack_120 = (code *)&UNK_048b49f0;
    uStack_118 = CONCAT35(uStack_118._5_3_,0x1d33bd9c5);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x38,0);
    }
    *puVar15 = 0x21;
    puVar15[1] = 0x19;
    puVar15[2] = puStack_140;
    *(undefined2 *)(puVar15 + 3) = 0x502;
    puVar15[4] = 0x1003c00150001;
    puVar15[5] = &UNK_01254d89;
    puVar15[6] = &UNK_01254d89;
    pcStack_230 = (code *)&UNK_048b4ab0;
    pcStack_228 = (code *)&UNK_048b49f0;
    uStack_220 = CONCAT35(uStack_220._5_3_,0x1d33bd9c5);
    uStack_138 = 0;
    auStack_248._8_8_ = puVar15;
    auStack_248._0_8_ = &UNK_048b46e0;
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar15 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    uVar3 = _UNK_014518c1;
    uStack_178 = 0x29;
    uStack_170 = 0x24;
    puVar15[2] = _DAT_014518b9;
    puVar15[3] = uVar3;
    uVar3 = _UNK_014518b1;
    *puVar15 = _DAT_014518a9;
    puVar15[1] = uVar3;
    *(undefined4 *)(puVar15 + 4) = 0x5d797472;
    *(undefined1 *)((long)puVar15 + 0x24) = 0;
    puStack_168 = puVar15;
    lVar7 = func_0x048b5060(lVar7,&uStack_178);
    *(undefined **)(lVar7 + 0x20) = &UNK_048b46e0;
    pcVar8 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar7 + 0x20) != auStack_248) {
      puVar15 = (undefined8 *)(lVar7 + 0x28);
      if (*(code **)(lVar7 + 0x40) == (code *)0x0) {
LAB_0e3e097e:
        uVar3 = auStack_248._8_8_;
        auStack_248._8_8_ = 0;
        *puVar15 = uVar3;
      }
      else {
        (**(code **)(lVar7 + 0x40))(puVar15);
        if (uStack_220._4_1_ != '\0') {
          if (uStack_220._4_1_ != '\x02') goto LAB_0e3e097e;
          (*pcStack_230)(5,auStack_248 + 8,puVar15);
        }
      }
      *(code **)(lVar7 + 0x38) = pcStack_230;
      *(code **)(lVar7 + 0x40) = pcStack_228;
      *(undefined4 *)(lVar7 + 0x48) = (undefined4)uStack_220;
      *(char *)(lVar7 + 0x4c) = uStack_220._4_1_;
      pcVar8 = pcStack_228;
    }
    if ((uStack_178 & 1) != 0) {
      func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
      pcVar8 = pcStack_228;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_248 + 8);
    }
    if (pcStack_120 != (code *)0x0) {
      (*pcStack_120)(&uStack_138);
    }
    bVar17 = false;
    puVar15 = (undefined8 *)0x0;
  }
  else {
    iVar5 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    bVar17 = true;
    puVar15 = puStack_140;
    if (iVar5 == _DAT_0f550754) goto LAB_0e3e0757;
  }
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_58 = uStack_88;
  puStack_50 = puStack_80;
  uStack_178 = uStack_d0;
  uStack_170 = uStack_88;
  puStack_168 = puStack_80;
  uStack_160 = uStack_78;
  uStack_158 = uStack_70;
  uStack_148 = uStack_90;
  if ((DAT_0f6e85f8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e85f8), iVar5 != 0)) {
    func_0x0c507140(0xf6e85e0);
    func_0x0410844d(&DAT_0f6e85f8);
  }
  uStack_150 = 0x5eb0c06d00000001;
  lVar7 = uStack_178 + 0x18;
  auStack_248._0_8_ = func_0x0c5071b0(lVar7);
  auStack_248._8_8_ = lVar7;
  func_0x0ed621a0(auStack_248,uStack_150._4_4_);
  auStack_248._0_2_ = 1;
  auStack_248._8_8_ = &uStack_170;
  uStack_238 = uStack_150._4_4_;
  pcStack_230 = (code *)0x0;
  pcStack_228 = (code *)0x0;
  uStack_220 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0x14;
  uStack_207 = 0x726f6765746163;
  uStack_200 = 0x69;
  uStack_1ff = 0x7365;
  uStack_1fd = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  uStack_1c0 = 0x3f600000;
  func_0x048afb10(&lStack_1f0,8);
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_188 = 0xff00;
  uStack_184 = uStack_184 & 0xffffff00;
  uStack_180 = uStack_180 & 0xffffff00;
  uStack_17c = 0;
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f490250;
  if (pcStack_230 != (code *)0x0) {
    lVar7 = *(long *)pcStack_230;
    pcStack_230 = pcVar8;
    (**(code **)(lVar7 + 8))();
    pcVar8 = pcStack_230;
  }
  pcStack_230 = pcVar8;
  uStack_138 = CONCAT44(uStack_138._4_4_,uStack_238);
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)((ulong)plStack_128 & 0xffffffff00000000);
  pcStack_120 = (code *)0x1;
  uStack_118 = 0;
  puStack_110 = &UNK_0d9eb9e0;
  puStack_108 = &SUB_048b06d0;
  puStack_100 = &UNK_0d9ea1b0;
  puStack_f8 = &UNK_0e4cc310;
  puStack_f0 = &UNK_0e4cc4d0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  FUN_048b05a0(auStack_248._8_8_,&uStack_138);
  plVar9 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_d8 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      func_0x0412c2d0(plVar9);
    }
  }
  uVar3 = auStack_248._8_8_;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_138 = CONCAT44(uStack_138._4_4_,_DAT_0f550a0c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  pcVar4 = pcStack_228;
  pcVar8 = pcStack_230;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_130 = plVar9 + 3;
  pcStack_230 = (code *)0x0;
  pcStack_228 = (code *)0x0;
  plVar9[3] = (long)pcVar8;
  plVar9[4] = (long)pcVar4;
  plVar9[7] = lStack_210;
  plVar9[5] = uStack_220;
  plVar9[6] = lStack_218;
  uStack_220 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  plVar9[10] = lStack_1f8;
  plVar9[8] = CONCAT71(uStack_207,uStack_208);
  plVar9[9] = CONCAT44(uStack_1fc,CONCAT13(uStack_1fd,CONCAT21(uStack_1ff,uStack_200)));
  uStack_208 = 0;
  uStack_207 = 0;
  uStack_200 = 0;
  uStack_1ff = 0;
  uStack_1fd = 0;
  uStack_1fc = 0;
  lStack_1f8 = 0;
  plVar9[0xb] = lStack_1f0;
  plVar9[0xc] = lStack_1e8;
  plVar9[0xd] = lStack_1e0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  plVar9[0xe] = lStack_1d8;
  plVar9[0xf] = lStack_1d0;
  plVar9[0x10] = lStack_1c8;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_1c0;
  plVar9[0x12] = lStack_1b8;
  plVar9[0x13] = lStack_1b0;
  plVar9[0x14] = lStack_1a8;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  plVar9[0x17] = lStack_190;
  plVar9[0x15] = lStack_1a0;
  plVar9[0x16] = lStack_198;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_17c,CONCAT43(uStack_180,uStack_184._1_3_));
  plVar9[0x18] = CONCAT44(uStack_184,CONCAT22(uStack_186,uStack_188));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  plStack_128 = plVar9;
  func_0x048afd20(uVar3,&uStack_138);
  param_1 = lStack_98;
  plVar9 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_128 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar7 = *(long *)(uVar3 + 0x10);
  iVar5 = *(int *)(uVar3 + 0x1c);
  if (iVar5 == 2) {
    piVar12 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != *(int *)(uVar3 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(uVar3 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
LAB_0e3e0f4a:
    piVar12[4] = piVar12[4] | auStack_248._0_4_ << 0x10;
  }
  else {
    if (iVar5 == 1) {
      piVar12 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
      iVar5 = *piVar12;
      while (iVar5 != *(int *)(uVar3 + 0x18)) {
        piVar12 = piVar12 + 0x1a;
        iVar5 = *piVar12;
      }
      goto LAB_0e3e0f4a;
    }
    if (iVar5 == 0) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | auStack_248._0_4_ << 0x10;
    }
  }
  func_0x048b0bc0(&pcStack_230);
  if (bVar17) {
    func_0x0412a280(puVar15,0);
  }
LAB_0e3e0f68:
  func_0x0e3e1680(param_1);
  func_0x0e2a9250(param_1);
  func_0x0e2a9700(param_1);
  FUN_0e2a9e10(param_1);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x1440bb8  Crafting Catalog Document
 * 0x1440bc1  Catalog Document
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
