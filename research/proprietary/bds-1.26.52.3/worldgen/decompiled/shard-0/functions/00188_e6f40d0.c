/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe7f40d0 (ELF vaddr 0xe6f40d0)
 * Label: caller-of-callee
 * Body:  [[0e7f40d0, 0e7f42d7] [0e7f42e0, 0e7f4321] [0e7f4330, 0e7f49b0] [0e7f49c0, 0e7f4a02] [0e7f4a10, 0e7f4d10] [0e7f4d20, 0e7f4d50] [0e7f4d60, 0e7f5545]]
 * Ghidra: FUN_0e7f40d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e7f40d0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  code *pcVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined1 *puStack_238;
  undefined1 *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined4 uStack_218;
  undefined1 auStack_210 [20];
  undefined4 uStack_1fc;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  undefined4 uStack_194;
  char cStack_190;
  undefined7 uStack_18f;
  undefined1 auStack_188 [16];
  undefined4 uStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined4 uStack_160;
  char cStack_15c;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e808d40();
  func_0x0e806340(param_1);
  if ((DAT_0f762cb0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f762cb0), iVar4 != 0)) {
    func_0x0e880310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762c30,0xf53dab8);
    func_0x0410844d(&DAT_0f762cb0);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f762c30 + 4)) * 8);
  do {
    lVar15 = *plVar9;
    if (lVar15 == -1) goto LAB_0e7f4150;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f762c30 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0e7f4150:
    puVar6 = &DAT_0f762c30;
    if (iRam000000000f762c90 != -0x2b3da790) goto LAB_0e7f41d2;
LAB_0e7f417b:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0e7f41d2;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar12 = lVar15 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e8808f0(&uStack_1c0,param_1,lVar12,uVar10);
    if (cStack_190 != '\0') goto LAB_0e7f41b8;
LAB_0e7f41f8:
    uVar10 = uStack_1c0;
    if ((DAT_0f762cb0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f762cb0), iVar4 != 0)) {
      func_0x0e880310();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f762c30,0xf53dab8);
      func_0x0410844d(&DAT_0f762cb0);
    }
    plVar9 = (long *)(*(long *)(uVar10 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f762c30 + 4)) * 8);
    do {
      lVar15 = *plVar9;
      if (lVar15 == -1) goto LAB_0e7f4260;
      plVar9 = (long *)(*(long *)(uVar10 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f762c30 + 4)
            );
    if (plVar9 == *(long **)(uVar10 + 0x38)) {
LAB_0e7f4260:
      puVar6 = &DAT_0f762c30;
    }
    else {
      puVar6 = (undefined *)plVar9[2];
    }
    for (pbVar7 = *(byte **)(uStack_1c0 + 0x50); pbVar7 != *(byte **)(uStack_1c0 + 0x58);
        pbVar7 = pbVar7 + 0x38) {
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0e7f433a;
      }
      else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e7f433a:
        if ((bVar1 & 1) == 0) {
          pbVar11 = pbVar7 + 1;
        }
        else {
          pbVar11 = *(byte **)(pbVar7 + 0x10);
        }
        auVar17[0] = -(*pbVar11 == 0x5b);
        auVar17[1] = -(pbVar11[1] == 99);
        auVar17[2] = -(pbVar11[2] == 0x65);
        auVar17[3] = -(pbVar11[3] == 0x72);
        auVar17[4] = -(pbVar11[4] == 0x65);
        auVar17[5] = -(pbVar11[5] == 0x61);
        auVar17[6] = -(pbVar11[6] == 0x6c);
        auVar17[7] = -(pbVar11[7] == 0x3a);
        auVar17[8] = -(pbVar11[8] == 100);
        auVar17[9] = -(pbVar11[9] == 0x6f);
        auVar17[10] = -(pbVar11[10] == 99);
        auVar17[0xb] = -(pbVar11[0xb] == 0x75);
        auVar17[0xc] = -(pbVar11[0xc] == 0x6d);
        auVar17[0xd] = -(pbVar11[0xd] == 0x65);
        auVar17[0xe] = -(pbVar11[0xe] == 0x6e);
        auVar17[0xf] = -(pbVar11[0xf] == 0x74);
        auVar19[0] = -(pbVar11[10] == 99);
        auVar19[1] = -(pbVar11[0xb] == 0x75);
        auVar19[2] = -(pbVar11[0xc] == 0x6d);
        auVar19[3] = -(pbVar11[0xd] == 0x65);
        auVar19[4] = -(pbVar11[0xe] == 0x6e);
        auVar19[5] = -(pbVar11[0xf] == 0x74);
        auVar19[6] = -(pbVar11[0x10] == 0x61);
        auVar19[7] = -(pbVar11[0x11] == 0x74);
        auVar19[8] = -(pbVar11[0x12] == 0x69);
        auVar19[9] = -(pbVar11[0x13] == 0x6f);
        auVar19[10] = -(pbVar11[0x14] == 0x6e);
        auVar19[0xb] = -(pbVar11[0x15] == 0x5f);
        auVar19[0xc] = -(pbVar11[0x16] == 0x74);
        auVar19[0xd] = -(pbVar11[0x17] == 0x61);
        auVar19[0xe] = -(pbVar11[0x18] == 0x67);
        auVar19[0xf] = -(pbVar11[0x19] == 0x5d);
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
    if (pbVar7 == *(byte **)(uStack_1c0 + 0x58)) {
LAB_0e7f4368:
      uVar3 = uStack_194;
      if (iStack_198 == 0) {
        if (((puVar6 == (undefined *)0x0) || (*(int *)(puVar6 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar6 + 0x68) == 0)) goto LAB_0e7f43f9;
        lVar15 = *(long *)(puVar6 + 0x68) + 0x38;
      }
      else {
        if (puVar6 == (undefined *)0x0) {
          puVar6 = (undefined *)func_0x048aead0(uVar10 + 0x18);
        }
        auStack_188._0_8_ = func_0x048b0c90(uVar10 + 0x18,puVar6,uVar3,1);
        if (auStack_188._0_8_ == 0) {
          auStack_188 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_188);
          if (auStack_188._0_8_ == 0) goto LAB_0e7f43f9;
        }
        if ((*(int *)(auStack_188._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_188._0_8_ + 0x58) != 0)) {
          lVar15 = *(long *)(auStack_188._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e7f43f9:
          lVar15 = 0;
        }
      }
      puStack_258 = &UNK_0488e0b0;
      pcStack_250 = (code *)0x0;
      uStack_248 = CONCAT35(uStack_248._5_3_,0x48b5725f);
      uStack_268 = 0;
      auStack_188 = (undefined1  [16])0x0;
      pcStack_170 = (code *)&UNK_0488e0b0;
      pcStack_168 = (code *)0x0;
      uStack_160 = 0x48b5725f;
      cStack_15c = '\0';
      puStack_1e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_1e8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_1f8 = 0x21;
      uStack_1f0 = 0x1a;
      *(ulong *)((long)puStack_1e8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_1e8 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_1e8 = _DAT_013bbacd;
      puStack_1e8[1] = uVar2;
      *(undefined1 *)((long)puStack_1e8 + 0x1a) = 0;
      lVar15 = func_0x048b5060(lVar15,&uStack_1f8);
      *(undefined8 *)(lVar15 + 0x20) = 0;
      if ((undefined1 *)(lVar15 + 0x20) == auStack_188) {
        pcVar8 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
          puVar14 = (undefined8 *)(lVar15 + 0x28);
          (**(code **)(lVar15 + 0x40))(puVar14);
          if (cStack_15c != '\0') {
            if (cStack_15c == '\x02') {
              (*pcStack_170)(5,auStack_188 + 8,puVar14);
            }
            else {
              uVar2 = auStack_188._8_8_;
              auStack_188._8_8_ = 0;
              *puVar14 = uVar2;
            }
          }
        }
        *(code **)(lVar15 + 0x38) = pcStack_170;
        *(code **)(lVar15 + 0x40) = pcStack_168;
        *(undefined4 *)(lVar15 + 0x48) = uStack_160;
        *(char *)(lVar15 + 0x4c) = cStack_15c;
        pcVar8 = pcStack_168;
      }
      if ((uStack_1f8 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
        pcVar8 = pcStack_168;
      }
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_188 + 8);
      }
      if (pcStack_250 != (code *)0x0) {
        (*pcStack_250)(&uStack_268);
      }
    }
    else {
      iVar4 = *(int *)(pbVar7 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar4 == _DAT_0f550ac4) goto LAB_0e7f4368;
    }
    uStack_88._0_1_ = cStack_190;
    uStack_90 = CONCAT44(uStack_194,iStack_198);
    uStack_98 = uStack_1a0;
    puStack_a8 = puStack_1b0;
    uStack_a0 = uStack_1a8;
    uStack_b8 = uStack_1c0;
    uStack_b0 = uStack_1b8;
    func_0x0e881460(auStack_188,&uStack_b8,&UNK_011ea907,0xb);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0f4982b8;
    if (pcStack_170 != (code *)0x0) {
      lVar15 = *(long *)pcStack_170;
      pcStack_170 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_170;
    }
    pcStack_170 = pcVar8;
    uStack_268 = CONCAT44(uStack_268._4_4_,uStack_178);
    uStack_260 = 0;
    puStack_258 = (undefined *)((ulong)puStack_258 & 0xffffffff00000000);
    pcStack_250 = (code *)0x1;
    uStack_248 = 0;
    puStack_240 = &UNK_0db7ae60;
    puStack_238 = &SUB_048b06d0;
    puStack_230 = &SUB_0db7ab50;
    puStack_228 = &UNK_0e881a10;
    puStack_220 = &UNK_0e881bd0;
    uStack_218 = 0;
    auStack_210._0_16_ = ZEXT816(0);
    func_0x048b05a0(auStack_188._8_8_,&uStack_268);
    uVar2 = auStack_210._8_8_;
    if ((long *)auStack_210._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_210._8_8_ + 8);
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e881710(auStack_188);
    cStack_1c8 = (char)uStack_88;
    uStack_1d8 = uStack_98;
    uStack_1d0 = uStack_90;
    puStack_1e8 = puStack_a8;
    uStack_1e0 = uStack_a0;
    uStack_1f8 = uStack_b8;
    uStack_1f0 = uStack_b0;
    FUN_048b0bc0(&pcStack_170);
    func_0x0e881460(auStack_188,&uStack_1f8,&UNK_011ed181,10);
    pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar8 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar8 = &UNK_0f4cc060;
    if (pcStack_170 != (code *)0x0) {
      lVar15 = *(long *)pcStack_170;
      pcStack_170 = pcVar8;
      (**(code **)(lVar15 + 8))();
      pcVar8 = pcStack_170;
    }
    pcStack_170 = pcVar8;
    uStack_268 = CONCAT44(uStack_268._4_4_,uStack_178);
    uStack_260 = 0;
    puStack_258 = (undefined *)((ulong)puStack_258 & 0xffffffff00000000);
    pcStack_250 = (code *)0x1;
    uStack_248 = 0;
    puStack_240 = &UNK_0e7bc750;
    puStack_238 = &SUB_048b06d0;
    puStack_230 = &SUB_0e163a60;
    puStack_228 = &UNK_0e881da0;
    puStack_220 = &UNK_0e881f70;
    uStack_218 = 0;
    auStack_210._0_16_ = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_188._8_8_,&uStack_268);
    uVar2 = auStack_210._8_8_;
    if ((long *)auStack_210._8_8_ != (long *)0x0) {
      LOCK();
      plVar9 = (long *)(auStack_210._8_8_ + 8);
      lVar15 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0e881710(auStack_188);
    FUN_048b0bc0(&pcStack_170);
    lVar15 = func_0x0c8e15c0(param_1 + 0x18);
    if (*(int *)(lVar15 + 0x60) != -0x2b3da790) goto LAB_0e7f4914;
LAB_0e7f48d2:
    lVar15 = *(long *)(lVar15 + 0x68);
    if (lVar15 == 0) goto LAB_0e7f4914;
    bVar16 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar12 = lVar15 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar15 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e882150(&uStack_1c0,param_1,lVar12,uVar10);
  }
  else {
    puVar6 = (undefined *)plVar9[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0e7f417b;
LAB_0e7f41d2:
    func_0x0e8808f0(&uStack_1c0,param_1,&UNK_01284d53,0x10);
    if (cStack_190 == '\0') goto LAB_0e7f41f8;
LAB_0e7f41b8:
    lVar15 = func_0x0c8e15c0(param_1 + 0x18);
    if (*(int *)(lVar15 + 0x60) == -0x2b3da790) goto LAB_0e7f48d2;
LAB_0e7f4914:
    func_0x0e882150(&uStack_1c0,param_1,&UNK_011e566f,0xf);
  }
  if (cStack_190 != '\0') {
    return;
  }
  lVar12 = uStack_1c0 + 0x18;
  lVar15 = func_0x0c8e15c0(lVar12);
  for (pbVar7 = *(byte **)(uStack_1c0 + 0x50); pbVar7 != *(byte **)(uStack_1c0 + 0x58);
      pbVar7 = pbVar7 + 0x38) {
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0e7f4a1a;
    }
    else if (*(long *)(pbVar7 + 8) == 0x1a) {
LAB_0e7f4a1a:
      if ((bVar1 & 1) == 0) {
        pbVar11 = pbVar7 + 1;
      }
      else {
        pbVar11 = *(byte **)(pbVar7 + 0x10);
      }
      auVar18[0] = -(*pbVar11 == 0x5b);
      auVar18[1] = -(pbVar11[1] == 99);
      auVar18[2] = -(pbVar11[2] == 0x65);
      auVar18[3] = -(pbVar11[3] == 0x72);
      auVar18[4] = -(pbVar11[4] == 0x65);
      auVar18[5] = -(pbVar11[5] == 0x61);
      auVar18[6] = -(pbVar11[6] == 0x6c);
      auVar18[7] = -(pbVar11[7] == 0x3a);
      auVar18[8] = -(pbVar11[8] == 100);
      auVar18[9] = -(pbVar11[9] == 0x6f);
      auVar18[10] = -(pbVar11[10] == 99);
      auVar18[0xb] = -(pbVar11[0xb] == 0x75);
      auVar18[0xc] = -(pbVar11[0xc] == 0x6d);
      auVar18[0xd] = -(pbVar11[0xd] == 0x65);
      auVar18[0xe] = -(pbVar11[0xe] == 0x6e);
      auVar18[0xf] = -(pbVar11[0xf] == 0x74);
      auVar20[0] = -(pbVar11[10] == 99);
      auVar20[1] = -(pbVar11[0xb] == 0x75);
      auVar20[2] = -(pbVar11[0xc] == 0x6d);
      auVar20[3] = -(pbVar11[0xd] == 0x65);
      auVar20[4] = -(pbVar11[0xe] == 0x6e);
      auVar20[5] = -(pbVar11[0xf] == 0x74);
      auVar20[6] = -(pbVar11[0x10] == 0x61);
      auVar20[7] = -(pbVar11[0x11] == 0x74);
      auVar20[8] = -(pbVar11[0x12] == 0x69);
      auVar20[9] = -(pbVar11[0x13] == 0x6f);
      auVar20[10] = -(pbVar11[0x14] == 0x6e);
      auVar20[0xb] = -(pbVar11[0x15] == 0x5f);
      auVar20[0xc] = -(pbVar11[0x16] == 0x74);
      auVar20[0xd] = -(pbVar11[0x17] == 0x61);
      auVar20[0xe] = -(pbVar11[0x18] == 0x67);
      auVar20[0xf] = -(pbVar11[0x19] == 0x5d);
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
  if (pbVar7 == *(byte **)(uStack_1c0 + 0x58)) {
LAB_0e7f4a49:
    if (iStack_198 == 0) {
      if ((*(int *)(lVar15 + 0x60) != -0x2b3da790) || (*(long *)(lVar15 + 0x68) == 0))
      goto LAB_0e7f4ac6;
      lVar15 = *(long *)(lVar15 + 0x68) + 0x38;
    }
    else {
      auStack_188._0_8_ = func_0x048b0c90(lVar12,lVar15,uStack_194,1);
      if (auStack_188._0_8_ == 0) {
        auStack_188 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_188);
        if (auStack_188._0_8_ == 0) goto LAB_0e7f4ac6;
      }
      if ((*(int *)(auStack_188._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_188._0_8_ + 0x58) != 0)) {
        lVar15 = *(long *)(auStack_188._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e7f4ac6:
        lVar15 = 0;
      }
    }
    puStack_258 = &UNK_0488e0b0;
    pcStack_250 = (code *)0x0;
    uStack_248 = CONCAT35(uStack_248._5_3_,0x48b5725f);
    uStack_268 = 0;
    auStack_188 = (undefined1  [16])0x0;
    pcStack_170 = (code *)&UNK_0488e0b0;
    pcStack_168 = (code *)0x0;
    uStack_160 = 0x48b5725f;
    cStack_15c = '\0';
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_1f8 = 0x21;
    uStack_1f0 = 0x1a;
    *(ulong *)((long)puVar14 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar14 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar14 = _DAT_013bbacd;
    puVar14[1] = uVar2;
    *(undefined1 *)((long)puVar14 + 0x1a) = 0;
    puStack_1e8 = puVar14;
    lVar15 = func_0x048b5060(lVar15,&uStack_1f8);
    *(undefined8 *)(lVar15 + 0x20) = 0;
    if ((undefined1 *)(lVar15 + 0x20) == auStack_188) {
      pcVar8 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
        puVar14 = (undefined8 *)(lVar15 + 0x28);
        (**(code **)(lVar15 + 0x40))(puVar14);
        if (cStack_15c != '\0') {
          if (cStack_15c == '\x02') {
            (*pcStack_170)(5,auStack_188 + 8,puVar14);
          }
          else {
            uVar2 = auStack_188._8_8_;
            auStack_188._8_8_ = 0;
            *puVar14 = uVar2;
          }
        }
      }
      *(code **)(lVar15 + 0x38) = pcStack_170;
      *(code **)(lVar15 + 0x40) = pcStack_168;
      *(undefined4 *)(lVar15 + 0x48) = uStack_160;
      *(char *)(lVar15 + 0x4c) = cStack_15c;
      pcVar8 = pcStack_168;
    }
    if ((uStack_1f8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
      pcVar8 = pcStack_168;
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_188 + 8);
    }
    if (pcStack_250 != (code *)0x0) {
      (*pcStack_250)(&uStack_268);
    }
  }
  else {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e7f4a49;
  }
  uStack_78 = uStack_1b8;
  puStack_70 = puStack_1b0;
  uStack_68 = uStack_1a8;
  uStack_60 = uStack_1a0;
  uStack_1fc = uStack_194;
  uStack_80 = CONCAT71(uStack_18f,cStack_190);
  lVar15 = func_0x0c8e15c0(uStack_1c0 + 0x18);
  pbVar11 = *(byte **)(uStack_1c0 + 0x58);
  for (pbVar7 = *(byte **)(uStack_1c0 + 0x50); pbVar7 != pbVar11; pbVar7 = pbVar7 + 0x38) {
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x24) goto LAB_0e7f4d6a;
    }
    else if (*(long *)(pbVar7 + 8) == 0x24) {
LAB_0e7f4d6a:
      if ((bVar1 & 1) == 0) {
        pbVar13 = pbVar7 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar7 + 0x10);
      }
      iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar13,0x24);
      if (iVar4 == 0) break;
    }
  }
  if (pbVar7 != pbVar11) {
    iVar4 = *(int *)(pbVar7 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(&DAT_0f550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar4 != _DAT_0f550754) goto LAB_0e7f5069;
  }
  if (iStack_198 == 0) {
    if ((*(int *)(lVar15 + 0x60) != -0x2b3da790) || (*(long *)(lVar15 + 0x68) == 0))
    goto LAB_0e7f4e0d;
    lVar15 = *(long *)(lVar15 + 0x68) + 0x38;
  }
  else {
    lVar15 = func_0x048b0c90(uStack_1c0 + 0x18,lVar15,uStack_1fc,1);
    if (lVar15 == 0) {
      auStack_188 = ZEXT816(0);
      func_0x048b0d20(auStack_188);
      lVar15 = auStack_188._0_8_;
      if (auStack_188._0_8_ == 0) goto LAB_0e7f4e0d;
    }
    if ((*(int *)(lVar15 + 0x50) == -0x45dcb126) && (*(long *)(lVar15 + 0x58) != 0)) {
      lVar15 = *(long *)(lVar15 + 0x58) + 0x40;
    }
    else {
LAB_0e7f4e0d:
      lVar15 = 0;
    }
  }
  uStack_268 = 0;
  puStack_258 = &UNK_048b4ab0;
  pcStack_250 = (code *)&UNK_048b49f0;
  uStack_248 = CONCAT35(uStack_248._5_3_,0x1d33bd9c5);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar14 = 0x4420656d6f69421c;
  *(undefined4 *)(puVar14 + 1) = 0x6d75636f;
  *(undefined4 *)((long)puVar14 + 0xb) = 0x746e656d;
  *(undefined1 *)((long)puVar14 + 0xf) = 0;
  puVar14[2] = 0;
  *(undefined2 *)(puVar14 + 3) = 2;
  puVar14[4] = 0x1006e00150001;
  puVar14[5] = &UNK_01254d89;
  puVar14[6] = &UNK_01254d89;
  pcStack_170 = (code *)&UNK_048b4ab0;
  pcStack_168 = (code *)&UNK_048b49f0;
  uStack_160 = 0xd33bd9c5;
  cStack_15c = '\x01';
  uStack_268 = 0;
  auStack_188._8_8_ = puVar14;
  auStack_188._0_8_ = &UNK_048b46e0;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar2 = _UNK_014518c1;
  uStack_1f8 = 0x29;
  uStack_1f0 = 0x24;
  puVar14[2] = _DAT_014518b9;
  puVar14[3] = uVar2;
  uVar2 = _UNK_014518b1;
  *puVar14 = _DAT_014518a9;
  puVar14[1] = uVar2;
  *(undefined4 *)(puVar14 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar14 + 0x24) = 0;
  puStack_1e8 = puVar14;
  lVar15 = func_0x048b5060(lVar15,&uStack_1f8);
  *(undefined **)(lVar15 + 0x20) = &UNK_048b46e0;
  pcVar8 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar15 + 0x20) != auStack_188) {
    puVar14 = (undefined8 *)(lVar15 + 0x28);
    if (*(code **)(lVar15 + 0x40) == (code *)0x0) {
LAB_0e7f4fde:
      uVar2 = auStack_188._8_8_;
      auStack_188._8_8_ = 0;
      *puVar14 = uVar2;
    }
    else {
      (**(code **)(lVar15 + 0x40))(puVar14);
      if (cStack_15c != '\0') {
        if (cStack_15c != '\x02') goto LAB_0e7f4fde;
        (*pcStack_170)(5,auStack_188 + 8,puVar14);
      }
    }
    *(code **)(lVar15 + 0x38) = pcStack_170;
    *(code **)(lVar15 + 0x40) = pcStack_168;
    *(undefined4 *)(lVar15 + 0x48) = uStack_160;
    *(char *)(lVar15 + 0x4c) = cStack_15c;
    pcVar8 = pcStack_168;
  }
  if ((uStack_1f8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
    pcVar8 = pcStack_168;
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(auStack_188 + 8);
  }
  if (pcStack_250 != (code *)0x0) {
    (*pcStack_250)(&uStack_268);
  }
LAB_0e7f5069:
  uStack_48 = uStack_68;
  uStack_40 = uStack_60;
  uStack_58 = uStack_78;
  puStack_50 = puStack_70;
  uStack_b8 = uStack_1c0;
  uStack_b0 = uStack_78;
  puStack_a8 = puStack_70;
  uStack_a0 = uStack_68;
  uStack_98 = uStack_60;
  uStack_90 = CONCAT44(uStack_1fc,iStack_198);
  uStack_88 = uStack_80;
  func_0x0e882a10(auStack_188,&uStack_b8,&UNK_0128206d,0xf);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0f4ce628;
  if (pcStack_170 != (code *)0x0) {
    lVar15 = *(long *)pcStack_170;
    pcStack_170 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_170;
  }
  pcStack_170 = pcVar8;
  uStack_268 = CONCAT44(uStack_268._4_4_,uStack_178);
  uStack_260 = 0;
  puStack_258 = (undefined *)((ulong)puStack_258 & 0xffffffff00000000);
  pcStack_250 = (code *)0x1;
  uStack_248 = 0;
  puStack_240 = &UNK_0e883150;
  puStack_238 = &SUB_048b06d0;
  puStack_230 = &UNK_0e880250;
  puStack_228 = &UNK_0e883210;
  puStack_220 = &UNK_0e883480;
  uStack_218 = 0;
  auStack_210._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_188._8_8_,&uStack_268);
  uVar2 = auStack_210._8_8_;
  if ((long *)auStack_210._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_210._8_8_ + 8);
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e882c10(auStack_188);
  cStack_1c8 = (char)uStack_88;
  uStack_1d8 = uStack_98;
  uStack_1d0 = uStack_90;
  puStack_1e8 = puStack_a8;
  uStack_1e0 = uStack_a0;
  uStack_1f8 = uStack_b8;
  uStack_1f0 = uStack_b0;
  FUN_048b0bc0(&pcStack_170);
  func_0x0e882a10(auStack_188,&uStack_1f8,&UNK_013771cd,0xe);
  pcVar8 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar8 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar8 = &UNK_0ef44b00;
  if (pcStack_170 != (code *)0x0) {
    lVar15 = *(long *)pcStack_170;
    pcStack_170 = pcVar8;
    (**(code **)(lVar15 + 8))();
    pcVar8 = pcStack_170;
  }
  pcStack_170 = pcVar8;
  uStack_268 = CONCAT44(uStack_268._4_4_,uStack_178);
  uStack_260 = 0;
  puStack_258 = (undefined *)((ulong)puStack_258 & 0xffffffff00000000);
  pcStack_250 = (code *)0x1;
  uStack_248 = 0;
  puStack_240 = &UNK_048b3f30;
  puStack_238 = &SUB_048b06d0;
  puStack_230 = &SUB_048b2190;
  puStack_228 = &UNK_0e8838f0;
  puStack_220 = &UNK_0e883ac0;
  uStack_218 = 0;
  auStack_210._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_188._8_8_,&uStack_268);
  uVar2 = auStack_210._8_8_;
  if ((long *)auStack_210._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(auStack_210._8_8_ + 8);
    lVar15 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_210._8_8_ + 0x10))(auStack_210._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0e882c10(auStack_188);
  FUN_048b0bc0(&pcStack_170);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
