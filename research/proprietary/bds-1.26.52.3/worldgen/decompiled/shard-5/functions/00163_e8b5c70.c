/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe9b5c70 (ELF vaddr 0xe8b5c70)
 * Label: caller-of-callee
 * Body:  [[0e9b5c70, 0e9b5d69] [0e9b5d70, 0e9b5db2] [0e9b5dc0, 0e9b6234] [0e9b6240, 0e9b6282] [0e9b6290, 0e9b6f8c]]
 * Ghidra: FUN_0e9b5c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e9b5c70(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_468 [16];
  code *pcStack_458;
  code *pcStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined1 *puStack_438;
  undefined1 *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  undefined1 auStack_3f8 [16];
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  ulong uStack_3c0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_328;
  long *plStack_320;
  undefined8 *puStack_318;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  code *pcStack_2d0;
  undefined4 uStack_2c8;
  uint uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  char cStack_2b8;
  undefined7 uStack_2b7;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  code *pcStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  undefined2 uStack_16a;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
  long lStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  lVar8 = func_0x088a9f10(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar17 = (*(byte *)(lVar8 + 8) & 1) != 0;
    puVar13 = (undefined *)(lVar8 + 9);
    if (bVar17) {
      puVar13 = *(undefined **)(lVar8 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar17) {
      uVar12 = *(ulong *)(lVar8 + 0x10);
    }
  }
  else {
    puVar13 = &UNK_011b3af0;
    uVar12 = 0x18;
  }
  FUN_088aa370(auStack_3f8,param_1,puVar13,uVar12,0);
  puVar13 = puStack_3c8;
  puStack_3c8._0_5_ = (uint5)(uint)puStack_3c8;
  puVar5 = puStack_3c8;
  uStack_3c0 = uStack_3c0 & 0xffffffffffffff00;
  puStack_3c8._0_1_ = (char)puVar13;
  bVar17 = (char)puStack_3c8 == '\0';
  puStack_3c8 = puVar5;
  if (bVar17) {
    lVar16 = auStack_3f8._0_8_ + 0x18;
    lVar8 = func_0x088a9f10(lVar16);
    for (pbVar11 = *(byte **)(auStack_3f8._0_8_ + 0x50);
        pbVar11 != *(byte **)(auStack_3f8._0_8_ + 0x58); pbVar11 = pbVar11 + 0x38) {
      bVar2 = *pbVar11;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e9b5dca;
      }
      else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e9b5dca:
        if ((bVar2 & 1) == 0) {
          pbVar14 = pbVar11 + 1;
        }
        else {
          pbVar14 = *(byte **)(pbVar11 + 0x10);
        }
        auVar18[0] = -(*pbVar14 == 0x5b);
        auVar18[1] = -(pbVar14[1] == 99);
        auVar18[2] = -(pbVar14[2] == 0x65);
        auVar18[3] = -(pbVar14[3] == 0x72);
        auVar18[4] = -(pbVar14[4] == 0x65);
        auVar18[5] = -(pbVar14[5] == 0x61);
        auVar18[6] = -(pbVar14[6] == 0x6c);
        auVar18[7] = -(pbVar14[7] == 0x3a);
        auVar18[8] = -(pbVar14[8] == 100);
        auVar18[9] = -(pbVar14[9] == 0x6f);
        auVar18[10] = -(pbVar14[10] == 99);
        auVar18[0xb] = -(pbVar14[0xb] == 0x75);
        auVar18[0xc] = -(pbVar14[0xc] == 0x6d);
        auVar18[0xd] = -(pbVar14[0xd] == 0x65);
        auVar18[0xe] = -(pbVar14[0xe] == 0x6e);
        auVar18[0xf] = -(pbVar14[0xf] == 0x74);
        auVar20[0] = -(pbVar14[10] == 99);
        auVar20[1] = -(pbVar14[0xb] == 0x75);
        auVar20[2] = -(pbVar14[0xc] == 0x6d);
        auVar20[3] = -(pbVar14[0xd] == 0x65);
        auVar20[4] = -(pbVar14[0xe] == 0x6e);
        auVar20[5] = -(pbVar14[0xf] == 0x74);
        auVar20[6] = -(pbVar14[0x10] == 0x61);
        auVar20[7] = -(pbVar14[0x11] == 0x74);
        auVar20[8] = -(pbVar14[0x12] == 0x69);
        auVar20[9] = -(pbVar14[0x13] == 0x6f);
        auVar20[10] = -(pbVar14[0x14] == 0x6e);
        auVar20[0xb] = -(pbVar14[0x15] == 0x5f);
        auVar20[0xc] = -(pbVar14[0x16] == 0x74);
        auVar20[0xd] = -(pbVar14[0x17] == 0x61);
        auVar20[0xe] = -(pbVar14[0x18] == 0x67);
        auVar20[0xf] = -(pbVar14[0x19] == 0x5d);
        auVar20 = auVar20 & auVar18;
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar11 == *(byte **)(auStack_3f8._0_8_ + 0x58)) {
LAB_0e9b5df9:
      if ((int)uStack_3d0 == 0) {
        if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
        goto LAB_0e9b5e69;
        lVar8 = *(long *)(lVar8 + 0x68) + 0x38;
      }
      else {
        auStack_468._0_8_ = func_0x048b0c90(lVar16,lVar8,uStack_3d0._4_4_,1);
        if (auStack_468._0_8_ == 0) {
          auStack_468 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_468);
          if (auStack_468._0_8_ == 0) goto LAB_0e9b5e69;
        }
        if ((*(int *)(auStack_468._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_468._0_8_ + 0x58) != 0)) {
          lVar8 = *(long *)(auStack_468._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e9b5e69:
          lVar8 = 0;
        }
      }
      puStack_2d8 = &UNK_0488e0b0;
      uStack_2c8 = 0x48b5725f;
      pcStack_2d0 = (code *)0x0;
      uStack_2c4 = uStack_2c4 & 0xffffff00;
      lStack_2e8 = 0;
      auStack_468 = (undefined1  [16])0x0;
      pcStack_450 = (code *)&UNK_0488e0b0;
      pcStack_448 = (code *)0x0;
      uStack_440 = (undefined *)CONCAT35(uStack_440._5_3_,0x48b5725f);
      puStack_318 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_318 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      uStack_328 = 0x21;
      plStack_320 = (long *)0x1a;
      *(ulong *)((long)puStack_318 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_318 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_318 = _DAT_013bbacd;
      puStack_318[1] = uVar3;
      *(undefined1 *)((long)puStack_318 + 0x1a) = 0;
      lVar8 = func_0x048b5060(lVar8,&uStack_328);
      *(undefined8 *)(lVar8 + 0x20) = 0;
      if ((undefined1 *)(lVar8 + 0x20) == auStack_468) {
        pcVar10 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar8 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar8 + 0x28);
          (**(code **)(lVar8 + 0x40))(puVar15);
          if (uStack_440._4_1_ != '\0') {
            if (uStack_440._4_1_ == '\x02') {
              (*pcStack_450)(5,auStack_468 + 8,puVar15);
            }
            else {
              uVar3 = auStack_468._8_8_;
              auStack_468._8_8_ = 0;
              *puVar15 = uVar3;
            }
          }
        }
        *(code **)(lVar8 + 0x38) = pcStack_450;
        *(code **)(lVar8 + 0x40) = pcStack_448;
        *(undefined4 *)(lVar8 + 0x48) = (undefined4)uStack_440;
        *(char *)(lVar8 + 0x4c) = uStack_440._4_1_;
        pcVar10 = pcStack_448;
      }
      if ((uStack_328 & 1) != 0) {
        func_0x0412a280(puStack_318,uStack_328 & 0xfffffffffffffffe);
        pcVar10 = pcStack_448;
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(auStack_468 + 8);
      }
      if (pcStack_2d0 != (code *)0x0) {
        (*pcStack_2d0)(&lStack_2e8);
      }
    }
    else {
      iVar6 = *(int *)(pbVar11 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar6 == _DAT_0f550ac4) goto LAB_0e9b5df9;
    }
    uStack_278 = puStack_3c8;
    uStack_270 = uStack_3c0;
    pcStack_288 = pcStack_3d8;
    uStack_280 = uStack_3d0;
    puStack_298 = (undefined *)uStack_3e8;
    pcStack_290 = pcStack_3e0;
    lStack_2a8 = auStack_3f8._0_8_;
    uStack_2a0 = auStack_3f8._8_8_;
    lStack_1e8 = auStack_3f8._0_8_;
    uStack_1e0 = auStack_3f8._8_8_;
    puStack_1d8 = (undefined *)uStack_3e8;
    pcStack_1d0 = pcStack_3e0;
    pcStack_1c8 = pcStack_3d8;
    uStack_1c0 = uStack_3d0;
    uStack_1b8 = puStack_3c8;
    uStack_1b0 = uStack_3c0;
    func_0x088a8750(&uStack_a8,&lStack_1e8,&UNK_0145a6b7,7);
    func_0x088a8b30(&uStack_e8,&uStack_a8,&UNK_01427c88,8);
    func_0x088a8f10(&uStack_328,&uStack_e8,&UNK_013a82c3,0x10);
    FUN_088a9ab0(&lStack_2e8,&uStack_328,&UNK_01443799,8);
    func_0x088a92f0(auStack_468,&lStack_2e8,&UNK_013f5409,10);
    func_0x088a96d0(&lStack_128,auStack_468,&UNK_012b92cd,0xd);
  }
  func_0x0eb67df0(param_1);
  lVar8 = func_0x0d470720(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar17 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar16 = lVar8 + 9;
    if (bVar17) {
      lVar16 = *(long *)(lVar8 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar17) {
      uVar12 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eb5f340(&lStack_2e8,param_1,lVar16,uVar12);
  }
  else {
    func_0x0eb5f340(&lStack_2e8,param_1,&UNK_01427c91,0x10);
  }
  if (cStack_2b8 != '\0') {
    return;
  }
  lVar16 = lStack_2e8 + 0x18;
  lVar8 = func_0x0d470720(lVar16);
  for (pbVar11 = *(byte **)(lStack_2e8 + 0x50); pbVar11 != *(byte **)(lStack_2e8 + 0x58);
      pbVar11 = pbVar11 + 0x38) {
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e9b629a;
    }
    else if (*(long *)(pbVar11 + 8) == 0x1a) {
LAB_0e9b629a:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar11 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar11 + 0x10);
      }
      auVar19[0] = -(*pbVar14 == 0x5b);
      auVar19[1] = -(pbVar14[1] == 99);
      auVar19[2] = -(pbVar14[2] == 0x65);
      auVar19[3] = -(pbVar14[3] == 0x72);
      auVar19[4] = -(pbVar14[4] == 0x65);
      auVar19[5] = -(pbVar14[5] == 0x61);
      auVar19[6] = -(pbVar14[6] == 0x6c);
      auVar19[7] = -(pbVar14[7] == 0x3a);
      auVar19[8] = -(pbVar14[8] == 100);
      auVar19[9] = -(pbVar14[9] == 0x6f);
      auVar19[10] = -(pbVar14[10] == 99);
      auVar19[0xb] = -(pbVar14[0xb] == 0x75);
      auVar19[0xc] = -(pbVar14[0xc] == 0x6d);
      auVar19[0xd] = -(pbVar14[0xd] == 0x65);
      auVar19[0xe] = -(pbVar14[0xe] == 0x6e);
      auVar19[0xf] = -(pbVar14[0xf] == 0x74);
      auVar21[0] = -(pbVar14[10] == 99);
      auVar21[1] = -(pbVar14[0xb] == 0x75);
      auVar21[2] = -(pbVar14[0xc] == 0x6d);
      auVar21[3] = -(pbVar14[0xd] == 0x65);
      auVar21[4] = -(pbVar14[0xe] == 0x6e);
      auVar21[5] = -(pbVar14[0xf] == 0x74);
      auVar21[6] = -(pbVar14[0x10] == 0x61);
      auVar21[7] = -(pbVar14[0x11] == 0x74);
      auVar21[8] = -(pbVar14[0x12] == 0x69);
      auVar21[9] = -(pbVar14[0x13] == 0x6f);
      auVar21[10] = -(pbVar14[0x14] == 0x6e);
      auVar21[0xb] = -(pbVar14[0x15] == 0x5f);
      auVar21[0xc] = -(pbVar14[0x16] == 0x74);
      auVar21[0xd] = -(pbVar14[0x17] == 0x61);
      auVar21[0xe] = -(pbVar14[0x18] == 0x67);
      auVar21[0xf] = -(pbVar14[0x19] == 0x5d);
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
  if (pbVar11 != *(byte **)(lStack_2e8 + 0x58)) {
    iVar6 = *(int *)(pbVar11 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar6 != _DAT_0f550ac4) goto LAB_0e9b64f3;
  }
  if (iStack_2c0 == 0) {
    if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
    goto LAB_0e9b633d;
    lVar8 = *(long *)(lVar8 + 0x68) + 0x38;
  }
  else {
    auStack_3f8._0_8_ = func_0x048b0c90(lVar16,lVar8,uStack_2bc,1);
    if (auStack_3f8._0_8_ == 0) {
      auStack_3f8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_3f8);
      if (auStack_3f8._0_8_ == 0) goto LAB_0e9b633d;
    }
    if ((*(int *)(auStack_3f8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_3f8._0_8_ + 0x58) != 0)) {
      lVar8 = *(long *)(auStack_3f8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e9b633d:
      lVar8 = 0;
    }
  }
  pcStack_458 = (code *)&UNK_0488e0b0;
  pcStack_450 = (code *)0x0;
  pcStack_448 = (code *)CONCAT35(pcStack_448._5_3_,0x48b5725f);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auStack_468._8_8_;
  auStack_468 = auVar4 << 0x40;
  auStack_3f8 = (undefined1  [16])0x0;
  pcStack_3e0 = (code *)&UNK_0488e0b0;
  pcStack_3d8 = (code *)0x0;
  uStack_3d0 = (undefined *)CONCAT35(uStack_3d0._5_3_,0x48b5725f);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_328 = 0x21;
  plStack_320 = (long *)0x1a;
  *(ulong *)((long)puVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar15 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar15 = _DAT_013bbacd;
  puVar15[1] = uVar3;
  *(undefined1 *)((long)puVar15 + 0x1a) = 0;
  puStack_318 = puVar15;
  lVar8 = func_0x048b5060(lVar8,&uStack_328);
  *(undefined8 *)(lVar8 + 0x20) = 0;
  if ((undefined1 *)(lVar8 + 0x20) == auStack_3f8) {
    pcVar10 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar8 + 0x40) != (code *)0x0) {
      puVar15 = (undefined8 *)(lVar8 + 0x28);
      (**(code **)(lVar8 + 0x40))(puVar15);
      if (uStack_3d0._4_1_ != '\0') {
        if (uStack_3d0._4_1_ == '\x02') {
          (*pcStack_3e0)(5,auStack_3f8 + 8,puVar15);
        }
        else {
          uVar3 = auStack_3f8._8_8_;
          auStack_3f8._8_8_ = 0;
          *puVar15 = uVar3;
        }
      }
    }
    *(code **)(lVar8 + 0x38) = pcStack_3e0;
    *(code **)(lVar8 + 0x40) = pcStack_3d8;
    *(int *)(lVar8 + 0x48) = (int)uStack_3d0;
    *(char *)(lVar8 + 0x4c) = uStack_3d0._4_1_;
    pcVar10 = pcStack_3d8;
  }
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(puStack_318,uStack_328 & 0xfffffffffffffffe);
    pcVar10 = pcStack_3d8;
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(auStack_3f8 + 8);
  }
  if (pcStack_450 != (code *)0x0) {
    (*pcStack_450)(auStack_468);
  }
LAB_0e9b64f3:
  uStack_238 = CONCAT71(uStack_2b7,cStack_2b8);
  uStack_248 = CONCAT44(uStack_2c4,uStack_2c8);
  puStack_58 = puStack_2d8;
  pcStack_50 = pcStack_2d0;
  lStack_68 = lStack_2e8;
  uStack_60 = uStack_2e0;
  lStack_268 = lStack_2e8;
  uStack_260 = uStack_2e0;
  puStack_258 = puStack_2d8;
  pcStack_250 = pcStack_2d0;
  uStack_240 = 0x1e1bc4d500000004;
  uStack_48 = uStack_248;
  if ((DAT_0f720258 == '\0') && (iVar6 = func_0x04108328(&DAT_0f720258), iVar6 != 0)) {
    func_0x0d4706b0(0xf720240);
    FUN_0410844d(&DAT_0f720258);
  }
  auStack_3f8._0_4_ = uStack_240._4_4_;
  auStack_3f8._8_8_ = 0;
  uStack_3e8 = (long *)((ulong)uStack_3e8._4_4_ << 0x20);
  pcStack_3e0 = (code *)0x1;
  pcStack_3d8 = (code *)&SUB_048aead0;
  uStack_3d0 = &UNK_0b68b600;
  puStack_3c8 = &UNK_0eb5fc40;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  func_0x049057f0(&uStack_260,auStack_3f8);
  func_0x048aea50(auStack_3f8);
  pcStack_458 = pcStack_250;
  pcStack_450 = (code *)uStack_248;
  auStack_468._8_8_ = puStack_258;
  auStack_468._0_8_ = uStack_260;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar15 = &UNK_0f2cccf0;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  auStack_3f8._0_4_ = _DAT_0f551bb4;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  plVar9[3] = (long)puVar15;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  auStack_3f8._8_8_ = plVar9 + 3;
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  uStack_3e8 = plVar9;
  func_0x048afd20(auStack_468,auStack_3f8);
  plVar9 = uStack_3e8;
  if (uStack_3e8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_3e8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_320;
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_320 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      func_0x0412c2d0(plVar9);
    }
  }
  lStack_228 = lStack_268;
  uStack_220 = uStack_260;
  puStack_218 = puStack_258;
  pcStack_210 = pcStack_250;
  uStack_208 = uStack_248;
  uStack_200 = uStack_240;
  uStack_1f8 = uStack_238;
  func_0x0eb5fee0(auStack_3f8,&lStack_228,&UNK_012aacc5,0xc,1);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f12f5a0;
  if (pcStack_3e0 != (code *)0x0) {
    lVar8 = *(long *)pcStack_3e0;
    pcStack_3e0 = pcVar10;
    (**(code **)(lVar8 + 8))();
    pcVar10 = pcStack_3e0;
  }
  pcStack_3e0 = pcVar10;
  auStack_468._0_4_ = (undefined4)uStack_3e8;
  auStack_468._8_8_ = 0;
  pcStack_458 = (code *)((ulong)pcStack_458 & 0xffffffff00000000);
  pcStack_450 = (code *)0x1;
  pcStack_448 = (code *)0x0;
  uStack_440 = &UNK_088ae100;
  puStack_438 = &SUB_048b06d0;
  puStack_430 = &SUB_088a9f10;
  puStack_428 = &UNK_0eb603e0;
  puStack_420 = &UNK_0eb60540;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  func_0x048b05a0(auStack_3f8._8_8_,auStack_468);
  plVar9 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_408 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x0eb600e0(auStack_3f8);
  uStack_f8 = (undefined1)uStack_1f8;
  uStack_108 = uStack_208;
  uStack_100 = uStack_200;
  puStack_118 = puStack_218;
  pcStack_110 = pcStack_210;
  lStack_128 = lStack_228;
  uStack_120 = uStack_220;
  func_0x048b0bc0(&pcStack_3e0);
  lStack_2a8 = lStack_128;
  uStack_2a0 = uStack_120;
  puStack_298 = puStack_118;
  pcStack_290 = pcStack_110;
  pcStack_288 = (code *)uStack_108;
  uStack_280 = uStack_100;
  uStack_278 = CONCAT71(uStack_f7,uStack_f8);
  func_0x0eb5fee0(auStack_3f8,&lStack_2a8,&UNK_01358b72,9,0);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f0118f8;
  if (pcStack_3e0 != (code *)0x0) {
    lVar8 = *(long *)pcStack_3e0;
    pcStack_3e0 = pcVar10;
    (**(code **)(lVar8 + 8))();
    pcVar10 = pcStack_3e0;
  }
  pcStack_3e0 = pcVar10;
  auStack_468._0_4_ = (undefined4)uStack_3e8;
  auStack_468._8_8_ = 0;
  pcStack_458 = (code *)((ulong)pcStack_458 & 0xffffffff00000000);
  pcStack_450 = (code *)0x1;
  pcStack_448 = (code *)0x0;
  uStack_440 = &UNK_05dc7140;
  puStack_438 = &SUB_048b06d0;
  puStack_430 = &UNK_05dc6e20;
  puStack_428 = &UNK_0eb60710;
  puStack_420 = &UNK_0eb60880;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  func_0x048b05a0(auStack_3f8._8_8_,auStack_468);
  plVar9 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_408 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x0eb600e0(auStack_3f8);
  uStack_1b8 = CONCAT71(uStack_1b8._1_7_,(undefined1)uStack_278);
  pcStack_1c8 = pcStack_288;
  uStack_1c0 = uStack_280;
  puStack_1d8 = puStack_298;
  pcStack_1d0 = pcStack_290;
  lStack_1e8 = lStack_2a8;
  uStack_1e0 = uStack_2a0;
  func_0x048b0bc0(&pcStack_3e0);
  uStack_12e = 0;
  uStack_12a = 0;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0;
  uStack_150 = 0xff;
  puStack_168 = &UNK_0f0edc68;
  uStack_148 = _DAT_014e4bb0;
  uStack_140 = _UNK_014e4bb8;
  uStack_138 = 0;
  uStack_130 = 0;
  func_0x0e9bcca0(&uStack_a8,&lStack_1e8,&puStack_168);
  func_0x0eb5fee0(auStack_3f8,&uStack_a8,&UNK_01321220,0xb,0);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f0118f8;
  if (pcStack_3e0 != (code *)0x0) {
    lVar8 = *(long *)pcStack_3e0;
    pcStack_3e0 = pcVar10;
    (**(code **)(lVar8 + 8))();
    pcVar10 = pcStack_3e0;
  }
  pcStack_3e0 = pcVar10;
  auStack_468._0_4_ = (undefined4)uStack_3e8;
  auStack_468._8_8_ = 0;
  pcStack_458 = (code *)((ulong)pcStack_458 & 0xffffffff00000000);
  pcStack_450 = (code *)0x1;
  pcStack_448 = (code *)0x0;
  uStack_440 = &UNK_05dc7140;
  puStack_438 = &SUB_048b06d0;
  puStack_430 = &UNK_05dc6e20;
  puStack_428 = &UNK_0eb60a60;
  puStack_420 = &UNK_0eb60bd0;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  func_0x048b05a0(auStack_3f8._8_8_,auStack_468);
  plVar9 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_408 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x0eb600e0(auStack_3f8);
  uStack_b8 = uStack_78;
  uStack_c8 = uStack_88;
  uStack_c0 = uStack_80;
  uStack_d8 = uStack_98;
  uStack_d0 = uStack_90;
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  func_0x048b0bc0(&pcStack_3e0);
  uStack_16e = 0;
  uStack_16a = 0;
  uStack_1a0 = 0xffffffffffffffff;
  uStack_198 = 0;
  uStack_190 = 0xff;
  puStack_1a8 = &UNK_0f0edc68;
  uStack_188 = 0;
  uStack_180 = _DAT_014f0238;
  uStack_178 = 0;
  uStack_170 = 0;
  func_0x0e9bcca0(&uStack_328,&uStack_e8,&puStack_1a8);
  func_0x0eb5fee0(auStack_3f8,&uStack_328,&UNK_012115be,6,1);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f4d66d0;
  if (pcStack_3e0 != (code *)0x0) {
    lVar8 = *(long *)pcStack_3e0;
    pcStack_3e0 = pcVar10;
    (**(code **)(lVar8 + 8))();
    pcVar10 = pcStack_3e0;
  }
  pcStack_3e0 = pcVar10;
  auStack_468._0_4_ = (undefined4)uStack_3e8;
  auStack_468._8_8_ = 0;
  pcStack_458 = (code *)((ulong)pcStack_458 & 0xffffffff00000000);
  pcStack_450 = (code *)0x1;
  pcStack_448 = (code *)0x0;
  uStack_440 = &UNK_0ea7e560;
  puStack_438 = &SUB_048b06d0;
  puStack_430 = &UNK_0ea7e0c0;
  puStack_428 = &UNK_0eb60db0;
  puStack_420 = &UNK_0eb60fc0;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  func_0x048b05a0(auStack_3f8._8_8_,auStack_468);
  plVar9 = plStack_408;
  if (plStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_408 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_408 + 0x10))(plStack_408);
      func_0x0412c2d0(plVar9);
    }
  }
  func_0x0eb600e0(auStack_3f8);
  func_0x048b0bc0(&pcStack_3e0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
