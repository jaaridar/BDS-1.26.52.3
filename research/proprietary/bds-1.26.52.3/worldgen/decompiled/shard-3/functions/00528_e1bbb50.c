/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2bbb50 (ELF vaddr 0xe1bbb50)
 * Label: caller-of-callee
 * Body:  [[0e2bbb50, 0e2bbd47] [0e2bbd50, 0e2bbd91] [0e2bbda0, 0e2bc4f7] [0e2bc500, 0e2bc541] [0e2bc550, 0e2bc8ee] [0e2bc8f0, 0e2bc922] [0e2bc930, 0e2bd1d9]]
 * Ghidra: FUN_0e2bbb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2bbb50(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [20];
  undefined4 uStack_20c;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  char cStack_1a0;
  undefined7 uStack_19f;
  undefined1 auStack_198 [16];
  undefined4 uStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined4 uStack_170;
  char cStack_16c;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e3c08a0();
  func_0x0e2c45c0(param_1);
  if ((DAT_0f74e270 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74e270), iVar4 != 0)) {
    func_0x0e34b220();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e1f0,0xf53dab8);
    func_0x0410844d(&DAT_0f74e270);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74e1f0 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_0e2bbbd0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f74e1f0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e2bbbd0:
    puVar6 = &DAT_0f74e1f0;
    if (iRam000000000f74e250 != -0x2b3da790) goto LAB_0e2bbc3d;
LAB_0e2bbbfb:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0e2bbc3d;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar11 = lVar15 + 9;
    if (bVar16) {
      lVar11 = *(long *)(lVar15 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar9 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e34b920(&uStack_1d0,param_1,lVar11,uVar9);
    uVar9 = uStack_1d0;
  }
  else {
    puVar6 = (undefined *)plVar10[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0e2bbbfb;
LAB_0e2bbc3d:
    func_0x0e34b920(&uStack_1d0,param_1,&UNK_013a6a27,0x17);
    uVar9 = uStack_1d0;
  }
  uStack_1d0 = uVar9;
  if (cStack_1a0 == '\0') {
    if ((DAT_0f74e270 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74e270), iVar4 != 0)) {
      func_0x0e34b220();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e1f0,0xf53dab8);
      func_0x0410844d(&DAT_0f74e270);
    }
    plVar10 = (long *)(*(long *)(uVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar9 + 0x20) - *(long *)(uVar9 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f74e1f0 + 4)) * 8);
    do {
      lVar15 = *plVar10;
      if (lVar15 == -1) goto LAB_0e2bbcd0;
      plVar10 = (long *)(*(long *)(uVar9 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(uVar9 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f74e1f0 + 4))
    ;
    if (plVar10 == *(long **)(uVar9 + 0x38)) {
LAB_0e2bbcd0:
      puVar6 = &DAT_0f74e1f0;
    }
    else {
      puVar6 = (undefined *)plVar10[2];
    }
    for (pbVar7 = *(byte **)(uStack_1d0 + 0x50); pbVar7 != *(byte **)(uStack_1d0 + 0x58);
        pbVar7 = pbVar7 + 0x38) {
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e2bbdaa;
      }
      else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e2bbdaa:
        if ((bVar1 & 1) == 0) {
          pbVar12 = pbVar7 + 1;
        }
        else {
          pbVar12 = *(byte **)(pbVar7 + 0x10);
        }
        auVar17[0] = -(*pbVar12 == 0x5b);
        auVar17[1] = -(pbVar12[1] == 99);
        auVar17[2] = -(pbVar12[2] == 0x65);
        auVar17[3] = -(pbVar12[3] == 0x72);
        auVar17[4] = -(pbVar12[4] == 0x65);
        auVar17[5] = -(pbVar12[5] == 0x61);
        auVar17[6] = -(pbVar12[6] == 0x6c);
        auVar17[7] = -(pbVar12[7] == 0x3a);
        auVar17[8] = -(pbVar12[8] == 100);
        auVar17[9] = -(pbVar12[9] == 0x6f);
        auVar17[10] = -(pbVar12[10] == 99);
        auVar17[0xb] = -(pbVar12[0xb] == 0x75);
        auVar17[0xc] = -(pbVar12[0xc] == 0x6d);
        auVar17[0xd] = -(pbVar12[0xd] == 0x65);
        auVar17[0xe] = -(pbVar12[0xe] == 0x6e);
        auVar17[0xf] = -(pbVar12[0xf] == 0x74);
        auVar19[0] = -(pbVar12[10] == 99);
        auVar19[1] = -(pbVar12[0xb] == 0x75);
        auVar19[2] = -(pbVar12[0xc] == 0x6d);
        auVar19[3] = -(pbVar12[0xd] == 0x65);
        auVar19[4] = -(pbVar12[0xe] == 0x6e);
        auVar19[5] = -(pbVar12[0xf] == 0x74);
        auVar19[6] = -(pbVar12[0x10] == 0x61);
        auVar19[7] = -(pbVar12[0x11] == 0x74);
        auVar19[8] = -(pbVar12[0x12] == 0x69);
        auVar19[9] = -(pbVar12[0x13] == 0x6f);
        auVar19[10] = -(pbVar12[0x14] == 0x6e);
        auVar19[0xb] = -(pbVar12[0x15] == 0x5f);
        auVar19[0xc] = -(pbVar12[0x16] == 0x74);
        auVar19[0xd] = -(pbVar12[0x17] == 0x61);
        auVar19[0xe] = -(pbVar12[0x18] == 0x67);
        auVar19[0xf] = -(pbVar12[0x19] == 0x5d);
        auVar19 = auVar19 & auVar17;
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
    if (pbVar7 == *(byte **)(uStack_1d0 + 0x58)) {
LAB_0e2bbdd8:
      uVar3 = uStack_1a4;
      if (iStack_1a8 == 0) {
        if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e2bbe69;
        lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
      }
      else {
        if (puVar6 == (undefined *)0x0) {
          puVar6 = (undefined *)func_0x048aead0(uVar9 + 0x18);
        }
        auStack_198._0_8_ = func_0x048b0c90(uVar9 + 0x18,puVar6,uVar3,1);
        if (auStack_198._0_8_ == 0) {
          auStack_198 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_198);
          if (auStack_198._0_8_ == 0) goto LAB_0e2bbe69;
        }
        if ((*(int *)(auStack_198._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_198._0_8_ + 0x58) != 0)) {
          lVar15 = *(long *)(auStack_198._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e2bbe69:
          lVar15 = 0;
        }
      }
      puStack_268 = &UNK_0488e0b0;
      pcStack_260 = (code *)0x0;
      uStack_258 = CONCAT35(uStack_258._5_3_,0x48b5725f);
      uStack_278 = 0;
      auStack_198 = (undefined1  [16])0x0;
      pcStack_180 = (code *)&UNK_0488e0b0;
      pcStack_178 = (code *)0x0;
      uStack_170 = 0x48b5725f;
      cStack_16c = '\0';
      puStack_1f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_1f8 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_208 = 0x21;
      uStack_200 = 0x1a;
      *(ulong *)((long)puStack_1f8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_1f8 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_1f8 = _DAT_013bbacd;
      puStack_1f8[1] = uVar2;
      *(undefined1 *)((long)puStack_1f8 + 0x1a) = 0;
      lVar15 = func_0x048b5060(lVar15,&uStack_208);
      *(undefined8 *)(lVar15 + 0x20) = 0;
      if ((undefined1 *)(lVar15 + 0x20) == auStack_198) {
        pcVar8 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
          puVar14 = (undefined8 *)(lVar15 + 0x28);
          (**(code **)(lVar15 + 0x40))(puVar14);
          if (cStack_16c != '\0') {
            if (cStack_16c == '\x02') {
              (*pcStack_180)(5,auStack_198 + 8,puVar14);
            }
            else {
              uVar2 = auStack_198._8_8_;
              auStack_198._8_8_ = 0;
              *puVar14 = uVar2;
            }
          }
        }
        *(code **)(lVar15 + 0x38) = pcStack_180;
        *(code **)(lVar15 + 0x40) = pcStack_178;
        *(undefined4 *)(lVar15 + 0x48) = uStack_170;
        *(char *)(lVar15 + 0x4c) = cStack_16c;
        pcVar8 = pcStack_178;
      }
      if ((uStack_208 & 1) != 0) {
        func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
        pcVar8 = pcStack_178;
      }
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_198 + 8);
      }
      if (pcStack_260 != (code *)0x0) {
        (*pcStack_260)(&uStack_278);
      }
    }
    else {
      iVar4 = *(int *)(pbVar7 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar4 == _DAT_0f550ac4) goto LAB_0e2bbdd8;
    }
    uStack_98._0_1_ = cStack_1a0;
    uStack_a0 = CONCAT44(uStack_1a4,iStack_1a8);
    uStack_a8 = uStack_1b0;
    puStack_b8 = puStack_1c0;
    uStack_b0 = uStack_1b8;
    uStack_c8 = uStack_1d0;
    uStack_c0 = uStack_1c8;
    func_0x0e34c490(auStack_198,&uStack_c8,&UNK_011ea907,0xb);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0f4b8b88;
    if (pcStack_180 != (code *)0x0) {
      lVar15 = *(long *)pcStack_180;
      pcStack_180 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_180;
    }
    pcStack_180 = pcVar8;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
    uStack_270 = 0;
    puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0e34d240;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_0e34cf30;
    puStack_238 = &UNK_0e34d250;
    puStack_230 = &UNK_0e34d410;
    uStack_228 = 0;
    auStack_220._0_16_ = ZEXT816(0);
    FUN_048b05a0(auStack_198._8_8_,&uStack_278);
    uVar2 = auStack_220._8_8_;
    if ((long *)auStack_220._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_220._8_8_ + 8);
      lVar15 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e34c740(auStack_198);
    cStack_1d8 = (char)uStack_98;
    uStack_1e8 = uStack_a8;
    uStack_1e0 = uStack_a0;
    puStack_1f8 = puStack_b8;
    uStack_1f0 = uStack_b0;
    uStack_208 = uStack_c8;
    uStack_200 = uStack_c0;
    func_0x048b0bc0(&pcStack_180);
    func_0x0e34c490(auStack_198,&uStack_208,&UNK_011ed181,10);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0f4b4228;
    if (pcStack_180 != (code *)0x0) {
      lVar15 = *(long *)pcStack_180;
      pcStack_180 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_180;
    }
    pcStack_180 = pcVar8;
    uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
    uStack_270 = 0;
    puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
    pcStack_260 = (code *)0x1;
    uStack_258 = 0;
    puStack_250 = &UNK_0e251210;
    puStack_248 = &SUB_048b06d0;
    puStack_240 = &SUB_0e250ef0;
    puStack_238 = &UNK_0e34d870;
    puStack_230 = &UNK_0e34d9c0;
    uStack_228 = 0;
    auStack_220._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_198._8_8_,&uStack_278);
    uVar2 = auStack_220._8_8_;
    if ((long *)auStack_220._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_220._8_8_ + 8);
      lVar15 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e34c740(auStack_198);
    func_0x048b0bc0(&pcStack_180);
  }
  if ((DAT_0f74e328 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74e328), iVar4 != 0)) {
    func_0x0e34dc60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e2a8,0xf53dab8);
    func_0x0410844d(&DAT_0f74e328);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74e2a8 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_0e2bc380;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f74e2a8 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e2bc380:
    puVar6 = &DAT_0f74e2a8;
    if (iRam000000000f74e308 != -0x2b3da790) goto LAB_0e2bc3ed;
LAB_0e2bc3ab:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0e2bc3ed;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar11 = lVar15 + 9;
    if (bVar16) {
      lVar11 = *(long *)(lVar15 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar9 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e34e420(&uStack_1d0,param_1,lVar11,uVar9);
    uVar9 = uStack_1d0;
  }
  else {
    puVar6 = (undefined *)plVar10[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0e2bc3ab;
LAB_0e2bc3ed:
    func_0x0e34e420(&uStack_1d0,param_1,&UNK_014424e5,0x16);
    uVar9 = uStack_1d0;
  }
  if (cStack_1a0 != '\0') {
    return;
  }
  uStack_1d0 = uVar9;
  if ((DAT_0f74e328 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74e328), iVar4 != 0)) {
    func_0x0e34dc60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e2a8,0xf53dab8);
    func_0x0410844d(&DAT_0f74e328);
  }
  plVar10 = (long *)(*(long *)(uVar9 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar9 + 0x20) - *(long *)(uVar9 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f74e2a8 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_0e2bc480;
    plVar10 = (long *)(*(long *)(uVar9 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(uVar9 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f74e2a8 + 4));
  if (plVar10 == *(long **)(uVar9 + 0x38)) {
LAB_0e2bc480:
    puVar6 = &DAT_0f74e2a8;
  }
  else {
    puVar6 = (undefined *)plVar10[2];
  }
  for (pbVar7 = *(byte **)(uStack_1d0 + 0x50); pbVar7 != *(byte **)(uStack_1d0 + 0x58);
      pbVar7 = pbVar7 + 0x38) {
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e2bc55a;
    }
    else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e2bc55a:
      if ((bVar1 & 1) == 0) {
        pbVar12 = pbVar7 + 1;
      }
      else {
        pbVar12 = *(byte **)(pbVar7 + 0x10);
      }
      auVar18[0] = -(*pbVar12 == 0x5b);
      auVar18[1] = -(pbVar12[1] == 99);
      auVar18[2] = -(pbVar12[2] == 0x65);
      auVar18[3] = -(pbVar12[3] == 0x72);
      auVar18[4] = -(pbVar12[4] == 0x65);
      auVar18[5] = -(pbVar12[5] == 0x61);
      auVar18[6] = -(pbVar12[6] == 0x6c);
      auVar18[7] = -(pbVar12[7] == 0x3a);
      auVar18[8] = -(pbVar12[8] == 100);
      auVar18[9] = -(pbVar12[9] == 0x6f);
      auVar18[10] = -(pbVar12[10] == 99);
      auVar18[0xb] = -(pbVar12[0xb] == 0x75);
      auVar18[0xc] = -(pbVar12[0xc] == 0x6d);
      auVar18[0xd] = -(pbVar12[0xd] == 0x65);
      auVar18[0xe] = -(pbVar12[0xe] == 0x6e);
      auVar18[0xf] = -(pbVar12[0xf] == 0x74);
      auVar20[0] = -(pbVar12[10] == 99);
      auVar20[1] = -(pbVar12[0xb] == 0x75);
      auVar20[2] = -(pbVar12[0xc] == 0x6d);
      auVar20[3] = -(pbVar12[0xd] == 0x65);
      auVar20[4] = -(pbVar12[0xe] == 0x6e);
      auVar20[5] = -(pbVar12[0xf] == 0x74);
      auVar20[6] = -(pbVar12[0x10] == 0x61);
      auVar20[7] = -(pbVar12[0x11] == 0x74);
      auVar20[8] = -(pbVar12[0x12] == 0x69);
      auVar20[9] = -(pbVar12[0x13] == 0x6f);
      auVar20[10] = -(pbVar12[0x14] == 0x6e);
      auVar20[0xb] = -(pbVar12[0x15] == 0x5f);
      auVar20[0xc] = -(pbVar12[0x16] == 0x74);
      auVar20[0xd] = -(pbVar12[0x17] == 0x61);
      auVar20[0xe] = -(pbVar12[0x18] == 0x67);
      auVar20[0xf] = -(pbVar12[0x19] == 0x5d);
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
  if (pbVar7 == *(byte **)(uStack_1d0 + 0x58)) {
LAB_0e2bc588:
    uVar3 = uStack_1a4;
    if (iStack_1a8 == 0) {
      if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e2bc619;
      lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)func_0x048aead0(uVar9 + 0x18);
      }
      auStack_198._0_8_ = func_0x048b0c90(uVar9 + 0x18,puVar6,uVar3,1);
      if (auStack_198._0_8_ == 0) {
        auStack_198 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_198);
        if (auStack_198._0_8_ == 0) goto LAB_0e2bc619;
      }
      if ((*(int *)(auStack_198._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_198._0_8_ + 0x58) != 0)) {
        lVar15 = *(long *)(auStack_198._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2bc619:
        lVar15 = 0;
      }
    }
    puStack_268 = &UNK_0488e0b0;
    pcStack_260 = (code *)0x0;
    uStack_258 = CONCAT35(uStack_258._5_3_,0x48b5725f);
    uStack_278 = 0;
    auStack_198 = (undefined1  [16])0x0;
    pcStack_180 = (code *)&UNK_0488e0b0;
    pcStack_178 = (code *)0x0;
    uStack_170 = 0x48b5725f;
    cStack_16c = '\0';
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_208 = 0x21;
    uStack_200 = 0x1a;
    *(ulong *)((long)puVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar14 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar14 = _DAT_013bbacd;
    puVar14[1] = uVar2;
    *(undefined1 *)((long)puVar14 + 0x1a) = 0;
    puStack_1f8 = puVar14;
    lVar15 = func_0x048b5060(lVar15,&uStack_208);
    *(undefined8 *)(lVar15 + 0x20) = 0;
    if ((undefined1 *)(lVar15 + 0x20) == auStack_198) {
      pcVar8 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar15 + 0x28);
        (**(code **)(lVar15 + 0x40))(puVar14);
        if (cStack_16c != '\0') {
          if (cStack_16c == '\x02') {
            (*pcStack_180)(5,auStack_198 + 8,puVar14);
          }
          else {
            uVar2 = auStack_198._8_8_;
            auStack_198._8_8_ = 0;
            *puVar14 = uVar2;
          }
        }
      }
      *(code **)(lVar15 + 0x38) = pcStack_180;
      *(code **)(lVar15 + 0x40) = pcStack_178;
      *(undefined4 *)(lVar15 + 0x48) = uStack_170;
      *(char *)(lVar15 + 0x4c) = cStack_16c;
      pcVar8 = pcStack_178;
    }
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
      pcVar8 = pcStack_178;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_198 + 8);
    }
    if (pcStack_260 != (code *)0x0) {
      (*pcStack_260)(&uStack_278);
    }
  }
  else {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e2bc588;
  }
  uStack_78 = uStack_1c8;
  puStack_70 = puStack_1c0;
  uStack_68 = uStack_1b8;
  uStack_60 = uStack_1b0;
  uStack_20c = uStack_1a4;
  uStack_80 = CONCAT71(uStack_19f,cStack_1a0);
  if ((DAT_0f74e328 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74e328), iVar4 != 0)) {
    func_0x0e34dc60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74e2a8,0xf53dab8);
    func_0x0410844d(&DAT_0f74e328);
  }
  lStack_88 = uStack_1d0 + 0x18;
  plVar10 = (long *)(*(long *)(uStack_1d0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_1d0 + 0x20) -
                                         *(long *)(uStack_1d0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f74e2a8 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_0e2bc8a8;
    plVar10 = (long *)(*(long *)(uStack_1d0 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(uStack_1d0 + 0x30) + 8 + lVar15 * 0x18) !=
           *(uint *)(_DAT_0f74e2a8 + 4));
  if (plVar10 == *(long **)(uStack_1d0 + 0x38)) {
LAB_0e2bc8a8:
    puVar6 = &DAT_0f74e2a8;
    pbVar7 = *(byte **)(uStack_1d0 + 0x50);
    pbVar12 = *(byte **)(uStack_1d0 + 0x58);
    if (pbVar7 != pbVar12) {
LAB_0e2bc90e:
      do {
        bVar1 = *pbVar7;
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x24) goto LAB_0e2bc93a;
        }
        else if (*(long *)(pbVar7 + 8) == 0x24) {
LAB_0e2bc93a:
          if ((bVar1 & 1) == 0) {
            pbVar13 = pbVar7 + 1;
          }
          else {
            pbVar13 = *(byte **)(pbVar7 + 0x10);
          }
          iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar13,0x24);
          if (iVar4 == 0) break;
        }
        pbVar7 = pbVar7 + 0x38;
      } while (pbVar7 != pbVar12);
    }
  }
  else {
    puVar6 = (undefined *)plVar10[2];
    pbVar7 = *(byte **)(uStack_1d0 + 0x50);
    pbVar12 = *(byte **)(uStack_1d0 + 0x58);
    if (pbVar7 != pbVar12) goto LAB_0e2bc90e;
  }
  if (pbVar7 != pbVar12) {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar4 != _DAT_0f550754) goto LAB_0e2bcc33;
  }
  lVar15 = lStack_88;
  if (iStack_1a8 == 0) {
    if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e2bc9fc;
    lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)func_0x048aead0(lStack_88);
    }
    lVar15 = func_0x048b0c90(lVar15,puVar6,uStack_20c,1);
    if (lVar15 == 0) {
      auStack_198 = ZEXT816(0);
      FUN_048b0d20(auStack_198);
      lVar15 = auStack_198._0_8_;
      if (auStack_198._0_8_ == 0) goto LAB_0e2bc9fc;
    }
    if ((*(int *)(lVar15 + 0x50) == -0x45dcb126) && (*(long *)(lVar15 + 0x58) != 0)) {
      lVar15 = *(long *)(lVar15 + 0x58) + 0x40;
    }
    else {
LAB_0e2bc9fc:
      lVar15 = 0;
    }
  }
  uStack_278 = 0;
  puStack_268 = &UNK_048b4ab0;
  pcStack_260 = (code *)&UNK_048b49f0;
  uStack_258 = CONCAT35(uStack_258._5_3_,0x1d33bd9c5);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar14 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  *puVar14 = 0x20746e65696c432a;
  puVar14[1] = 0x6f4420656d6f6942;
  puVar14[2] = 0x746e656d7563;
  *(undefined2 *)(puVar14 + 3) = 1;
  puVar14[4] = 0x1004600150001;
  puVar14[5] = &UNK_01254d89;
  puVar14[6] = &UNK_01254d89;
  pcStack_180 = (code *)&UNK_048b4ab0;
  pcStack_178 = (code *)&UNK_048b49f0;
  uStack_170 = 0xd33bd9c5;
  cStack_16c = '\x01';
  uStack_278 = 0;
  auStack_198._8_8_ = puVar14;
  auStack_198._0_8_ = &UNK_048b46e0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar14 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar2 = _UNK_014518c1;
  uStack_208 = 0x29;
  uStack_200 = 0x24;
  puVar14[2] = _DAT_014518b9;
  puVar14[3] = uVar2;
  uVar2 = _UNK_014518b1;
  *puVar14 = _DAT_014518a9;
  puVar14[1] = uVar2;
  *(undefined4 *)(puVar14 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar14 + 0x24) = 0;
  puStack_1f8 = puVar14;
  lVar15 = func_0x048b5060(lVar15,&uStack_208);
  *(undefined **)(lVar15 + 0x20) = &UNK_048b46e0;
  pcVar8 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar15 + 0x20) != auStack_198) {
    puVar14 = (undefined8 *)(lVar15 + 0x28);
    if (*(code **)(lVar15 + 0x40) == (code *)0x0) {
LAB_0e2bcba8:
      uVar2 = auStack_198._8_8_;
      auStack_198._8_8_ = 0;
      *puVar14 = uVar2;
    }
    else {
      (**(code **)(lVar15 + 0x40))(puVar14);
      if (cStack_16c != '\0') {
        if (cStack_16c != '\x02') goto LAB_0e2bcba8;
        (*pcStack_180)(5,auStack_198 + 8,puVar14);
      }
    }
    *(code **)(lVar15 + 0x38) = pcStack_180;
    *(code **)(lVar15 + 0x40) = pcStack_178;
    *(undefined4 *)(lVar15 + 0x48) = uStack_170;
    *(char *)(lVar15 + 0x4c) = cStack_16c;
    pcVar8 = pcStack_178;
  }
  if ((uStack_208 & 1) != 0) {
    func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
    pcVar8 = pcStack_178;
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(auStack_198 + 8);
  }
  if (pcStack_260 != (code *)0x0) {
    (*pcStack_260)(&uStack_278);
  }
LAB_0e2bcc33:
  uStack_48 = uStack_68;
  uStack_40 = uStack_60;
  uStack_58 = uStack_78;
  puStack_50 = puStack_70;
  uStack_c8 = uStack_1d0;
  uStack_c0 = uStack_78;
  puStack_b8 = puStack_70;
  uStack_b0 = uStack_68;
  uStack_a8 = uStack_60;
  uStack_a0 = CONCAT44(uStack_20c,iStack_1a8);
  uStack_98 = uStack_80;
  func_0x0e34efa0(auStack_198,&uStack_c8,&UNK_0133af77,0x16);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f4b6700;
  if (pcStack_180 != (code *)0x0) {
    lVar15 = *(long *)pcStack_180;
    pcStack_180 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_180;
  }
  pcStack_180 = pcVar8;
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
  uStack_270 = 0;
  puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
  pcStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0e34f790;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &UNK_0e34b160;
  puStack_238 = &UNK_0e34f850;
  puStack_230 = &UNK_0e34fb50;
  uStack_228 = 0;
  auStack_220._0_16_ = ZEXT816(0);
  FUN_048b05a0(auStack_198._8_8_,&uStack_278);
  uVar2 = auStack_220._8_8_;
  if ((long *)auStack_220._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_220._8_8_ + 8);
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e34f250(auStack_198);
  cStack_1d8 = (char)uStack_98;
  uStack_1e8 = uStack_a8;
  uStack_1e0 = uStack_a0;
  puStack_1f8 = puStack_b8;
  uStack_1f0 = uStack_b0;
  uStack_208 = uStack_c8;
  uStack_200 = uStack_c0;
  func_0x048b0bc0(&pcStack_180);
  func_0x0e34efa0(auStack_198,&uStack_208,&UNK_013771cd,0xe);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0ef44b00;
  if (pcStack_180 != (code *)0x0) {
    lVar15 = *(long *)pcStack_180;
    pcStack_180 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_180;
  }
  pcStack_180 = pcVar8;
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_188);
  uStack_270 = 0;
  puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
  pcStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_048b3f30;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_048b2190;
  puStack_238 = &UNK_0e34ffc0;
  puStack_230 = &UNK_0e350190;
  uStack_228 = 0;
  auStack_220._0_16_ = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_198._8_8_,&uStack_278);
  uVar2 = auStack_220._8_8_;
  if ((long *)auStack_220._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_220._8_8_ + 8);
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_220._8_8_ + 0x10))(auStack_220._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e34f250(auStack_198);
  func_0x048b0bc0(&pcStack_180);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
