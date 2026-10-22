/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe80ae30 (ELF vaddr 0xe70ae30)
 * Label: caller-of-callee
 * Body:  [[0e80ae30, 0e80b027] [0e80b030, 0e80b071] [0e80b080, 0e80be52] [0e80be60, 0e80cfb7] [0e80cfc0, 0e80d001] [0e80d010, 0e80d8dc]]
 * Ghidra: FUN_0e80ae30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e80ae30(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  code *pcVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined4 uStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  undefined4 uStack_1d0;
  char cStack_1cc;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  char cStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0e216210();
  if ((DAT_0f762d68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762d68), iVar5 != 0)) {
    func_0x0e883d60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762ce8,0xf53dab8);
    FUN_0410844d(&DAT_0f762d68);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762ce8 + 4)) * 8);
  do {
    lVar16 = *plVar12;
    if (lVar16 == -1) goto LAB_0e80aeb0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f762ce8 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e80aeb0:
    puVar7 = &DAT_0f762ce8;
    if (iRam000000000f762d48 != -0x2b3da790) goto LAB_0e80af1d;
LAB_0e80aedb:
    lVar16 = *(long *)(puVar7 + 0x68);
    if (lVar16 == 0) goto LAB_0e80af1d;
    bVar17 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar11 = lVar16 + 9;
    if (bVar17) {
      lVar11 = *(long *)(lVar16 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar17) {
      uVar13 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e884310(&uStack_120,param_1,lVar11,uVar13);
    uVar13 = uStack_120;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e80aedb;
LAB_0e80af1d:
    func_0x0e884310(&uStack_120,param_1,&UNK_014a91d7,0x17);
    uVar13 = uStack_120;
  }
  uStack_120 = uVar13;
  if (cStack_f0 == '\0') {
    if ((DAT_0f762d68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762d68), iVar5 != 0)) {
      func_0x0e883d60();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f762ce8,0xf53dab8);
      FUN_0410844d(&DAT_0f762d68);
    }
    plVar12 = (long *)(*(long *)(uVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f762ce8 + 4)) * 8);
    do {
      lVar16 = *plVar12;
      if (lVar16 == -1) goto LAB_0e80afb0;
      plVar12 = (long *)(*(long *)(uVar13 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f762ce8 + 4)
            );
    if (plVar12 == *(long **)(uVar13 + 0x38)) {
LAB_0e80afb0:
      puVar7 = &DAT_0f762ce8;
    }
    else {
      puVar7 = (undefined *)plVar12[2];
    }
    for (pbVar8 = *(byte **)(uStack_120 + 0x50); pbVar8 != *(byte **)(uStack_120 + 0x58);
        pbVar8 = pbVar8 + 0x38) {
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1a) goto LAB_0e80b08a;
      }
      else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e80b08a:
        if ((bVar2 & 1) == 0) {
          pbVar14 = pbVar8 + 1;
        }
        else {
          pbVar14 = *(byte **)(pbVar8 + 0x10);
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
    if (pbVar8 == *(byte **)(uStack_120 + 0x58)) {
LAB_0e80b0b8:
      uVar4 = uStack_f4;
      if (iStack_f8 == 0) {
        if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e80b140;
        lVar16 = *(long *)(puVar7 + 0x68) + 0x38;
      }
      else {
        if (puVar7 == (undefined *)0x0) {
          puVar7 = (undefined *)func_0x048aead0(uVar13 + 0x18);
        }
        auStack_1f8._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar7,uVar4,1);
        if (auStack_1f8._0_8_ == 0) {
          auStack_1f8 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_1f8);
          if (auStack_1f8._0_8_ == 0) goto LAB_0e80b140;
        }
        if ((*(int *)(auStack_1f8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1f8._0_8_ + 0x58) != 0)) {
          lVar16 = *(long *)(auStack_1f8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e80b140:
          lVar16 = 0;
        }
      }
      puStack_250 = &UNK_0488e0b0;
      pcStack_248 = (code *)0x0;
      uStack_240 = CONCAT35(uStack_240._5_3_,0x48b5725f);
      uStack_260 = 0;
      auStack_1f8 = (undefined1  [16])0x0;
      pcStack_1e0 = (code *)&UNK_0488e0b0;
      pcStack_1d8 = (code *)0x0;
      uStack_1d0 = 0x48b5725f;
      cStack_1cc = '\0';
      puStack_d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_d8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_013bbadf;
      uStack_e8 = 0x21;
      uStack_e0 = 0x1a;
      *(ulong *)((long)puStack_d8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_d8 + 0x12) = uVar3;
      uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_d8 = _DAT_013bbacd;
      puStack_d8[1] = uVar3;
      *(undefined1 *)((long)puStack_d8 + 0x1a) = 0;
      lVar16 = func_0x048b5060(lVar16,&uStack_e8);
      *(undefined8 *)(lVar16 + 0x20) = 0;
      if ((undefined1 *)(lVar16 + 0x20) == auStack_1f8) {
        pcVar9 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar16 + 0x40) != (code *)0x0) {
          puVar15 = (undefined8 *)(lVar16 + 0x28);
          (**(code **)(lVar16 + 0x40))(puVar15);
          if (cStack_1cc != '\0') {
            if (cStack_1cc == '\x02') {
              (*pcStack_1e0)(5,auStack_1f8 + 8,puVar15);
            }
            else {
              uVar3 = auStack_1f8._8_8_;
              auStack_1f8._8_8_ = 0;
              *puVar15 = uVar3;
            }
          }
        }
        *(code **)(lVar16 + 0x38) = pcStack_1e0;
        *(code **)(lVar16 + 0x40) = pcStack_1d8;
        *(undefined4 *)(lVar16 + 0x48) = uStack_1d0;
        *(char *)(lVar16 + 0x4c) = cStack_1cc;
        pcVar9 = pcStack_1d8;
      }
      if ((uStack_e8 & 1) != 0) {
        func_0x0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
        pcVar9 = pcStack_1d8;
      }
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(auStack_1f8 + 8);
      }
      if (pcStack_248 != (code *)0x0) {
        (*pcStack_248)(&uStack_260);
      }
    }
    else {
      iVar5 = *(int *)(pbVar8 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
        func_0x0488e120(0xf550ac0);
        FUN_0410844d(&DAT_0f550ad8);
      }
      if (iVar5 == _DAT_0f550ac4) goto LAB_0e80b0b8;
    }
    func_0x0e3c45a0(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e1d790,0x18);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b8548;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e335c70;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e335970;
    puStack_220 = &UNK_0e8854c0;
    puStack_218 = &UNK_0e885680;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e3c5440(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e1d7b0,0x18);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b8688;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e337b60;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e337860;
    puStack_220 = &UNK_0e8857a0;
    puStack_218 = &UNK_0e885960;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e2c91a0(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e13780,0x1c);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b5d60;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e339960;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e339660;
    puStack_220 = &UNK_0e885a80;
    puStack_218 = &UNK_0e885c40;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e3ca250(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e1d7f0,0x13);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b8908;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e33d470;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e33d170;
    puStack_220 = &UNK_0e885d60;
    puStack_218 = &UNK_0e885f20;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e3ca6a0(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e1d810,0x1a);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b8a48;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e33f290;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e33ef90;
    puStack_220 = &UNK_0e8860c0;
    puStack_218 = &UNK_0e886280;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    uVar4 = uStack_f4;
    iVar5 = iStack_f8;
    uVar13 = uStack_120;
    func_0x048b0bc0(&pcStack_1e0);
    if (iVar5 == 4) {
      if ((DAT_0f762d68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762d68), iVar5 != 0)) {
        func_0x0e883d60();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f762ce8,0xf53dab8);
        FUN_0410844d(&DAT_0f762d68);
      }
      plVar12 = (long *)(*(long *)(uVar13 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f762ce8 + 4)) * 8);
      do {
        lVar16 = *plVar12;
        if (lVar16 == -1) goto LAB_0e80bd58;
        plVar12 = (long *)(*(long *)(uVar13 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f762ce8 + 4));
      if (plVar12 == *(long **)(uVar13 + 0x38)) {
LAB_0e80bd58:
        puVar7 = &DAT_0f762ce8;
      }
      else {
        puVar7 = (undefined *)plVar12[2];
      }
      lVar16 = FUN_048b1040(uVar13 + 0x18,puVar7,uVar4,1);
      if (lVar16 == 0) {
        auStack_1f8 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_1f8);
        lVar11 = *(long *)(auStack_1f8._0_8_ + 0x38);
        lVar16 = auStack_1f8._0_8_;
        if (lVar11 == 0) goto LAB_0e80be2e;
LAB_0e80be4c:
        do {
          lVar16 = lVar11;
          lVar11 = *(long *)(lVar16 + 0x38);
          if (*(long *)(lVar16 + 0x38) == 0) {
            auStack_1f8 = (undefined1  [16])0x0;
            func_0x048b10d0(auStack_1f8);
            lVar11 = auStack_1f8._0_8_;
          }
        } while (lVar11 != 0);
      }
      else {
        lVar11 = *(long *)(lVar16 + 0x38);
        if (*(long *)(lVar16 + 0x38) != 0) goto LAB_0e80be4c;
LAB_0e80be2e:
        auStack_1f8 = (undefined1  [16])0x0;
        func_0x048b10d0(auStack_1f8);
        lVar11 = auStack_1f8._0_8_;
        if (auStack_1f8._0_8_ != 0) goto LAB_0e80be4c;
      }
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
LAB_0e80beb0:
      puVar15[1] = 0xffffffffffffffff;
      puVar15[2] = 0;
      *(undefined1 *)(puVar15 + 3) = 0xff;
      *puVar15 = &UNK_0f4e2d20;
      plVar12 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar15;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
    }
    else if (iVar5 == 1) {
      if ((DAT_0f762d68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762d68), iVar5 != 0)) {
        func_0x0e883d60();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f762ce8,0xf53dab8);
        FUN_0410844d(&DAT_0f762d68);
      }
      plVar12 = (long *)(*(long *)(uVar13 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f762ce8 + 4)) * 8);
      do {
        lVar16 = *plVar12;
        if (lVar16 == -1) goto LAB_0e80bce8;
        plVar12 = (long *)(*(long *)(uVar13 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f762ce8 + 4));
      if (plVar12 == *(long **)(uVar13 + 0x38)) {
LAB_0e80bce8:
        puVar7 = &DAT_0f762ce8;
      }
      else {
        puVar7 = (undefined *)plVar12[2];
      }
      lVar16 = func_0x048b0c90(uVar13 + 0x18,puVar7,uVar4,1);
      if (lVar16 == 0) {
        auStack_1f8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1f8);
        lVar16 = auStack_1f8._0_8_;
      }
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      goto LAB_0e80beb0;
    }
    func_0x0e2c8790(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e13760,0x1b);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b5ea0;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e341060;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e340d60;
    puStack_220 = &UNK_0e8863a0;
    puStack_218 = &UNK_0e886560;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e2c6390(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e136d0,0x1f);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b5fe0;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e342f50;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e342c50;
    puStack_220 = &UNK_0e886680;
    puStack_218 = &UNK_0e886840;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e2c7590(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e13710,0x22);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b6120;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e344e40;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e344b40;
    puStack_220 = &UNK_0e886960;
    puStack_218 = &UNK_0e886b20;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e2c9600(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e137d0,0x1d);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b6260;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e346d30;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e346a30;
    puStack_220 = &UNK_0e886c40;
    puStack_218 = &UNK_0e886e00;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e2ca800(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e13810,0x1a);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4b63a0;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e348c20;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e348920;
    puStack_220 = &UNK_0e886f20;
    puStack_218 = &UNK_0e8870e0;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e7f36b0(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e2f620,0x1a);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4c87b8;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e6f8930;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e6f8630;
    puStack_220 = &UNK_0e887200;
    puStack_218 = &UNK_0e8873c0;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e80da20(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e2f670,0x15);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4c88f8;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e6fa7f0;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e6fa4f0;
    puStack_220 = &UNK_0e8874e0;
    puStack_218 = &UNK_0e8876a0;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
    func_0x0e80e190(param_1);
    func_0x0e884e80(auStack_1f8,&uStack_120,&UNK_01e2f6f0,0x17);
    pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar9 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar9 = &UNK_0f4c8a38;
    if (pcStack_1e0 != (code *)0x0) {
      lVar16 = *(long *)pcStack_1e0;
      pcStack_1e0 = pcVar9;
      (**(code **)(lVar16 + 8))();
      pcVar9 = pcStack_1e0;
    }
    pcStack_1e0 = pcVar9;
    uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
    uStack_258 = 0;
    puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
    pcStack_248 = (code *)0x1;
    uStack_240 = 0;
    puStack_238 = &UNK_0e6fc680;
    puStack_230 = &SUB_048b06d0;
    puStack_228 = &UNK_0e6fc380;
    puStack_220 = &UNK_0e887840;
    puStack_218 = &UNK_0e887a00;
    uStack_210 = 0;
    auStack_208 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
    uVar3 = auStack_208._8_8_;
    if ((long *)auStack_208._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_208._8_8_ + 8);
      lVar16 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    iVar5 = *(int *)(auStack_1f8._8_8_ + 0x1c);
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar16 = *(long *)(piVar10 + 0xc);
      while (lVar16 != *(long *)(auStack_1f8._8_8_ + 8)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar16 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != *(int *)(auStack_1f8._8_8_ + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_1f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0e8851c0(auStack_1f8);
    func_0x048b0bc0(&pcStack_1e0);
  }
  if ((DAT_0f762e20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762e20), iVar5 != 0)) {
    func_0x0e887be0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762da0,0xf53dab8);
    FUN_0410844d(&DAT_0f762e20);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762da0 + 4)) * 8);
  do {
    lVar16 = *plVar12;
    if (lVar16 == -1) goto LAB_0e80ce40;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f762da0 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e80ce40:
    puVar7 = &DAT_0f762da0;
    if (iRam000000000f762e00 != -0x2b3da790) goto LAB_0e80cead;
LAB_0e80ce6b:
    lVar16 = *(long *)(puVar7 + 0x68);
    if (lVar16 == 0) goto LAB_0e80cead;
    bVar17 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar11 = lVar16 + 9;
    if (bVar17) {
      lVar11 = *(long *)(lVar16 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar17) {
      uVar13 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e8882e0(&uStack_120,param_1,lVar11,uVar13);
    uVar13 = uStack_120;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e80ce6b;
LAB_0e80cead:
    func_0x0e8882e0(&uStack_120,param_1,&UNK_013a6a27,0x17);
    uVar13 = uStack_120;
  }
  if (cStack_f0 != '\0') {
    return;
  }
  uStack_120 = uVar13;
  if ((DAT_0f762e20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762e20), iVar5 != 0)) {
    func_0x0e887be0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762da0,0xf53dab8);
    FUN_0410844d(&DAT_0f762e20);
  }
  plVar12 = (long *)(*(long *)(uVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f762da0 + 4)) * 8);
  do {
    lVar16 = *plVar12;
    if (lVar16 == -1) goto LAB_0e80cf40;
    plVar12 = (long *)(*(long *)(uVar13 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f762da0 + 4));
  if (plVar12 == *(long **)(uVar13 + 0x38)) {
LAB_0e80cf40:
    puVar7 = &DAT_0f762da0;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
  }
  for (pbVar8 = *(byte **)(uStack_120 + 0x50); pbVar8 != *(byte **)(uStack_120 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e80d01a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e80d01a:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar8 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar8 + 0x10);
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
  if (pbVar8 != *(byte **)(uStack_120 + 0x58)) {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      FUN_0410844d(&DAT_0f550ad8);
    }
    if (iVar5 != _DAT_0f550ac4) goto LAB_0e80d289;
  }
  uVar4 = uStack_f4;
  if (iStack_f8 == 0) {
    if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e80d0d0;
    lVar16 = *(long *)(puVar7 + 0x68) + 0x38;
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)func_0x048aead0(uVar13 + 0x18);
    }
    auStack_1f8._0_8_ = func_0x048b0c90(uVar13 + 0x18,puVar7,uVar4,1);
    if (auStack_1f8._0_8_ == 0) {
      auStack_1f8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_1f8);
      if (auStack_1f8._0_8_ == 0) goto LAB_0e80d0d0;
    }
    if ((*(int *)(auStack_1f8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_1f8._0_8_ + 0x58) != 0)) {
      lVar16 = *(long *)(auStack_1f8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0e80d0d0:
      lVar16 = 0;
    }
  }
  puStack_250 = &UNK_0488e0b0;
  pcStack_248 = (code *)0x0;
  uStack_240 = CONCAT35(uStack_240._5_3_,0x48b5725f);
  uStack_260 = 0;
  auStack_1f8 = (undefined1  [16])0x0;
  pcStack_1e0 = (code *)&UNK_0488e0b0;
  pcStack_1d8 = (code *)0x0;
  uStack_1d0 = 0x48b5725f;
  cStack_1cc = '\0';
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_e8 = 0x21;
  uStack_e0 = 0x1a;
  *(ulong *)((long)puVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puVar15 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puVar15 = _DAT_013bbacd;
  puVar15[1] = uVar3;
  *(undefined1 *)((long)puVar15 + 0x1a) = 0;
  puStack_d8 = puVar15;
  lVar16 = func_0x048b5060(lVar16,&uStack_e8);
  *(undefined8 *)(lVar16 + 0x20) = 0;
  if ((undefined1 *)(lVar16 + 0x20) == auStack_1f8) {
    pcVar9 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar16 + 0x40) != (code *)0x0) {
      puVar15 = (undefined8 *)(lVar16 + 0x28);
      (**(code **)(lVar16 + 0x40))(puVar15);
      if (cStack_1cc != '\0') {
        if (cStack_1cc == '\x02') {
          (*pcStack_1e0)(5,auStack_1f8 + 8,puVar15);
        }
        else {
          uVar3 = auStack_1f8._8_8_;
          auStack_1f8._8_8_ = 0;
          *puVar15 = uVar3;
        }
      }
    }
    *(code **)(lVar16 + 0x38) = pcStack_1e0;
    *(code **)(lVar16 + 0x40) = pcStack_1d8;
    *(undefined4 *)(lVar16 + 0x48) = uStack_1d0;
    *(char *)(lVar16 + 0x4c) = cStack_1cc;
    pcVar9 = pcStack_1d8;
  }
  if ((uStack_e8 & 1) != 0) {
    func_0x0412a280(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
    pcVar9 = pcStack_1d8;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_1f8 + 8);
  }
  if (pcStack_248 != (code *)0x0) {
    (*pcStack_248)(&uStack_260);
  }
LAB_0e80d289:
  cStack_78 = cStack_f0;
  uStack_80 = CONCAT44(uStack_f4,iStack_f8);
  uStack_48 = uStack_100;
  uStack_58 = uStack_110;
  uStack_50 = uStack_108;
  uStack_68 = uStack_120;
  uStack_60 = uStack_118;
  uStack_a8 = uStack_120;
  uStack_a0 = uStack_118;
  uStack_98 = uStack_110;
  uStack_90 = uStack_108;
  uStack_88 = uStack_100;
  func_0x0e888e50(auStack_1f8,&uStack_a8,&UNK_011ea907,0xb);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b4318;
  if (pcStack_1e0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_1e0;
    pcStack_1e0 = pcVar9;
    (**(code **)(lVar16 + 8))();
    pcVar9 = pcStack_1e0;
  }
  pcStack_1e0 = pcVar9;
  uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
  uStack_258 = 0;
  puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
  pcStack_248 = (code *)0x1;
  uStack_240 = 0;
  puStack_238 = &UNK_0e250260;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &SUB_0e24c900;
  puStack_220 = &UNK_0e889400;
  puStack_218 = &UNK_0e8895c0;
  uStack_210 = 0;
  auStack_208 = ZEXT816(0);
  func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
  uVar3 = auStack_208._8_8_;
  if ((long *)auStack_208._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_208._8_8_ + 8);
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e889100(auStack_1f8);
  cStack_b8 = cStack_78;
  uStack_c8 = uStack_88;
  uStack_c0 = uStack_80;
  puStack_d8 = (undefined8 *)uStack_98;
  uStack_d0 = uStack_90;
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  func_0x048b0bc0(&pcStack_1e0);
  func_0x0e888e50(auStack_1f8,&uStack_e8,&UNK_011ed181,10);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4ce780;
  if (pcStack_1e0 != (code *)0x0) {
    lVar16 = *(long *)pcStack_1e0;
    pcStack_1e0 = pcVar9;
    (**(code **)(lVar16 + 8))();
    pcVar9 = pcStack_1e0;
  }
  pcStack_1e0 = pcVar9;
  uStack_260 = CONCAT44(uStack_260._4_4_,uStack_1e8);
  uStack_258 = 0;
  puStack_250 = (undefined *)((ulong)puStack_250 & 0xffffffff00000000);
  pcStack_248 = (code *)0x1;
  uStack_240 = 0;
  puStack_238 = &UNK_0e8899d0;
  puStack_230 = &SUB_048b06d0;
  puStack_228 = &UNK_0e883ca0;
  puStack_220 = &UNK_0e889a90;
  puStack_218 = &UNK_0e889ce0;
  uStack_210 = 0;
  auStack_208 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1f8._8_8_,&uStack_260);
  uVar3 = auStack_208._8_8_;
  if ((long *)auStack_208._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_208._8_8_ + 8);
    lVar16 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*(long *)auStack_208._8_8_ + 0x10))(auStack_208._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  func_0x0e889100(auStack_1f8);
  func_0x048b0bc0(&pcStack_1e0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
