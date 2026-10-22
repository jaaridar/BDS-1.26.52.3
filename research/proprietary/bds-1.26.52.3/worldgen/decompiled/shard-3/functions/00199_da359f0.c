/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb359f0 (ELF vaddr 0xda359f0)
 * Label: caller-of-callee
 * Body:  [[0db359f0, 0db35b01] [0db35b10, 0db35b52] [0db35b60, 0db362b7] [0db362c0, 0db36301] [0db36310, 0db366fe] [0db36700, 0db36731] [0db36740, 0db3702d]]
 * Ghidra: FUN_0db359f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db359f0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  code *pcStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [20];
  undefined4 uStack_23c;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  char cStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  char cStack_1d0;
  undefined7 uStack_1cf;
  undefined1 auStack_1c8 [16];
  undefined4 uStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined4 uStack_1a0;
  char cStack_19c;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e808d40();
  func_0x0db34c00(param_1);
  lVar6 = func_0x0c8dbf00(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar17 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar14 = lVar6 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar6 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar17) {
      uVar11 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0db79850(&uStack_200,param_1,lVar14,uVar11);
  }
  else {
    func_0x0db79850(&uStack_200,param_1,&UNK_01284d53,0x10);
  }
  if (cStack_1d0 == '\0') {
    lVar14 = uStack_200 + 0x18;
    lVar6 = func_0x0c8dbf00(lVar14);
    for (pbVar8 = *(byte **)(uStack_200 + 0x50); pbVar8 != *(byte **)(uStack_200 + 0x58);
        pbVar8 = pbVar8 + 0x38) {
      bVar1 = *pbVar8;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0db35b6a;
      }
      else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0db35b6a:
        if ((bVar1 & 1) == 0) {
          pbVar16 = pbVar8 + 1;
        }
        else {
          pbVar16 = *(byte **)(pbVar8 + 0x10);
        }
        auVar18[0] = -(*pbVar16 == 0x5b);
        auVar18[1] = -(pbVar16[1] == 99);
        auVar18[2] = -(pbVar16[2] == 0x65);
        auVar18[3] = -(pbVar16[3] == 0x72);
        auVar18[4] = -(pbVar16[4] == 0x65);
        auVar18[5] = -(pbVar16[5] == 0x61);
        auVar18[6] = -(pbVar16[6] == 0x6c);
        auVar18[7] = -(pbVar16[7] == 0x3a);
        auVar18[8] = -(pbVar16[8] == 100);
        auVar18[9] = -(pbVar16[9] == 0x6f);
        auVar18[10] = -(pbVar16[10] == 99);
        auVar18[0xb] = -(pbVar16[0xb] == 0x75);
        auVar18[0xc] = -(pbVar16[0xc] == 0x6d);
        auVar18[0xd] = -(pbVar16[0xd] == 0x65);
        auVar18[0xe] = -(pbVar16[0xe] == 0x6e);
        auVar18[0xf] = -(pbVar16[0xf] == 0x74);
        auVar20[0] = -(pbVar16[10] == 99);
        auVar20[1] = -(pbVar16[0xb] == 0x75);
        auVar20[2] = -(pbVar16[0xc] == 0x6d);
        auVar20[3] = -(pbVar16[0xd] == 0x65);
        auVar20[4] = -(pbVar16[0xe] == 0x6e);
        auVar20[5] = -(pbVar16[0xf] == 0x74);
        auVar20[6] = -(pbVar16[0x10] == 0x61);
        auVar20[7] = -(pbVar16[0x11] == 0x74);
        auVar20[8] = -(pbVar16[0x12] == 0x69);
        auVar20[9] = -(pbVar16[0x13] == 0x6f);
        auVar20[10] = -(pbVar16[0x14] == 0x6e);
        auVar20[0xb] = -(pbVar16[0x15] == 0x5f);
        auVar20[0xc] = -(pbVar16[0x16] == 0x74);
        auVar20[0xd] = -(pbVar16[0x17] == 0x61);
        auVar20[0xe] = -(pbVar16[0x18] == 0x67);
        auVar20[0xf] = -(pbVar16[0x19] == 0x5d);
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
    if (pbVar8 == *(byte **)(uStack_200 + 0x58)) {
LAB_0db35b99:
      if (iStack_1d8 == 0) {
        if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
        goto LAB_0db35c16;
        lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
      }
      else {
        auStack_1c8._0_8_ = func_0x048b0c90(lVar14,lVar6,uStack_1d4,1);
        if (auStack_1c8._0_8_ == 0) {
          auStack_1c8 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_1c8);
          if (auStack_1c8._0_8_ == 0) goto LAB_0db35c16;
        }
        if ((*(int *)(auStack_1c8._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_1c8._0_8_ + 0x58) != 0)) {
          lVar6 = *(long *)(auStack_1c8._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0db35c16:
          lVar6 = 0;
        }
      }
      puStack_298 = &UNK_0488e0b0;
      pcStack_290 = (code *)0x0;
      uStack_288 = CONCAT35(uStack_288._5_3_,0x48b5725f);
      uStack_2a8 = 0;
      auStack_1c8 = (undefined1  [16])0x0;
      pcStack_1b0 = (code *)&UNK_0488e0b0;
      pcStack_1a8 = (code *)0x0;
      uStack_1a0 = 0x48b5725f;
      cStack_19c = '\0';
      puStack_228 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_228 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar2 = _UNK_013bbadf;
      uStack_238 = 0x21;
      uStack_230 = 0x1a;
      *(ulong *)((long)puStack_228 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)puStack_228 + 0x12) = uVar2;
      uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *puStack_228 = _DAT_013bbacd;
      puStack_228[1] = uVar2;
      *(undefined1 *)((long)puStack_228 + 0x1a) = 0;
      lVar6 = func_0x048b5060(lVar6,&uStack_238);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      if ((undefined1 *)(lVar6 + 0x20) == auStack_1c8) {
        pcVar10 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
          puVar9 = (undefined8 *)(lVar6 + 0x28);
          (**(code **)(lVar6 + 0x40))(puVar9);
          if (cStack_19c != '\0') {
            if (cStack_19c == '\x02') {
              (*pcStack_1b0)(5,auStack_1c8 + 8,puVar9);
            }
            else {
              uVar2 = auStack_1c8._8_8_;
              auStack_1c8._8_8_ = 0;
              *puVar9 = uVar2;
            }
          }
        }
        *(code **)(lVar6 + 0x38) = pcStack_1b0;
        *(code **)(lVar6 + 0x40) = pcStack_1a8;
        *(undefined4 *)(lVar6 + 0x48) = uStack_1a0;
        *(char *)(lVar6 + 0x4c) = cStack_19c;
        pcVar10 = pcStack_1a8;
      }
      if ((uStack_238 & 1) != 0) {
        func_0x0412a280(puStack_228,uStack_238 & 0xfffffffffffffffe);
        pcVar10 = pcStack_1a8;
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(auStack_1c8 + 8);
      }
      if (pcStack_290 != (code *)0x0) {
        (*pcStack_290)(&uStack_2a8);
      }
    }
    else {
      iVar4 = *(int *)(pbVar8 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar4 == _DAT_0f550ac4) goto LAB_0db35b99;
    }
    uStack_a8._0_1_ = cStack_1d0;
    uStack_b0 = CONCAT44(uStack_1d4,iStack_1d8);
    uStack_b8 = uStack_1e0;
    puStack_c8 = puStack_1f0;
    uStack_c0 = uStack_1e8;
    uStack_d8 = uStack_200;
    uStack_d0 = uStack_1f8;
    func_0x0db7a110(auStack_1c8,&uStack_d8,&UNK_011ea907,0xb);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f4982b8;
    if (pcStack_1b0 != (code *)0x0) {
      lVar6 = *(long *)pcStack_1b0;
      pcStack_1b0 = pcVar10;
      (**(code **)(lVar6 + 8))();
      pcVar10 = pcStack_1b0;
    }
    pcStack_1b0 = pcVar10;
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uStack_1b8);
    uStack_2a0 = 0;
    puStack_298 = (undefined *)((ulong)puStack_298 & 0xffffffff00000000);
    pcStack_290 = (code *)0x1;
    uStack_288 = 0;
    puStack_280 = &UNK_0db7ae60;
    puStack_278 = &SUB_048b06d0;
    puStack_270 = &SUB_0db7ab50;
    puStack_268 = &UNK_0db7ae70;
    puStack_260 = &UNK_0db7b030;
    uStack_258 = 0;
    auStack_250._0_16_ = ZEXT816(0);
    FUN_048b05a0(auStack_1c8._8_8_,&uStack_2a8);
    uVar2 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_250._8_8_ + 8);
      lVar6 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0db7a310(auStack_1c8);
    cStack_208 = (char)uStack_a8;
    uStack_218 = uStack_b8;
    uStack_210 = uStack_b0;
    puStack_228 = puStack_c8;
    uStack_220 = uStack_c0;
    uStack_238 = uStack_d8;
    uStack_230 = uStack_d0;
    func_0x048b0bc0(&pcStack_1b0);
    func_0x0db7a110(auStack_1c8,&uStack_238,&UNK_011ed181,10);
    pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar10 == (code *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *(undefined **)pcVar10 = &UNK_0f494050;
    if (pcStack_1b0 != (code *)0x0) {
      lVar6 = *(long *)pcStack_1b0;
      pcStack_1b0 = pcVar10;
      (**(code **)(lVar6 + 8))();
      pcVar10 = pcStack_1b0;
    }
    pcStack_1b0 = pcVar10;
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uStack_1b8);
    uStack_2a0 = 0;
    puStack_298 = (undefined *)((ulong)puStack_298 & 0xffffffff00000000);
    pcStack_290 = (code *)0x1;
    uStack_288 = 0;
    puStack_280 = &UNK_0db7b6c0;
    puStack_278 = &SUB_048b06d0;
    puStack_270 = &SUB_0db763d0;
    puStack_268 = &UNK_0db7b6d0;
    puStack_260 = &UNK_0db7ba00;
    uStack_258 = 0;
    auStack_250._0_16_ = (undefined1  [16])0x0;
    FUN_048b05a0(auStack_1c8._8_8_,&uStack_2a8);
    uVar2 = auStack_250._8_8_;
    if ((long *)auStack_250._8_8_ != (long *)0x0) {
      LOCK();
      plVar12 = (long *)(auStack_250._8_8_ + 8);
      lVar6 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    func_0x0db7a310(auStack_1c8);
    func_0x048b0bc0(&pcStack_1b0);
  }
  if ((DAT_0f735248 == '\0') && (iVar4 = func_0x04108328(&DAT_0f735248), iVar4 != 0)) {
    func_0x0db7bf40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7351c8,0xf53dab8);
    func_0x0410844d(&DAT_0f735248);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7351c8 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_0db36140;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f7351c8 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0db36140:
    puVar7 = &DAT_0f7351c8;
    if (iRam000000000f735228 != -0x2b3da790) goto LAB_0db361ad;
LAB_0db3616b:
    lVar6 = *(long *)(puVar7 + 0x68);
    if (lVar6 == 0) goto LAB_0db361ad;
    bVar17 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar14 = lVar6 + 9;
    if (bVar17) {
      lVar14 = *(long *)(lVar6 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar17) {
      uVar11 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0db7c7a0(&uStack_200,param_1,lVar14,uVar11);
    uVar11 = uStack_200;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0db3616b;
LAB_0db361ad:
    func_0x0db7c7a0(&uStack_200,param_1,&UNK_011e566f,0xf);
    uVar11 = uStack_200;
  }
  if (cStack_1d0 != '\0') {
    return;
  }
  uStack_200 = uVar11;
  if ((DAT_0f735248 == '\0') && (iVar4 = func_0x04108328(&DAT_0f735248), iVar4 != 0)) {
    func_0x0db7bf40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7351c8,0xf53dab8);
    func_0x0410844d(&DAT_0f735248);
  }
  plVar12 = (long *)(*(long *)(uVar11 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar11 + 0x20) - *(long *)(uVar11 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f7351c8 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_0db36240;
    plVar12 = (long *)(*(long *)(uVar11 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(uVar11 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f7351c8 + 4));
  if (plVar12 == *(long **)(uVar11 + 0x38)) {
LAB_0db36240:
    puVar7 = &DAT_0f7351c8;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
  }
  for (pbVar8 = *(byte **)(uStack_200 + 0x50); pbVar8 != *(byte **)(uStack_200 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar1 = *pbVar8;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0db3631a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0db3631a:
      if ((bVar1 & 1) == 0) {
        pbVar16 = pbVar8 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar8 + 0x10);
      }
      auVar19[0] = -(*pbVar16 == 0x5b);
      auVar19[1] = -(pbVar16[1] == 99);
      auVar19[2] = -(pbVar16[2] == 0x65);
      auVar19[3] = -(pbVar16[3] == 0x72);
      auVar19[4] = -(pbVar16[4] == 0x65);
      auVar19[5] = -(pbVar16[5] == 0x61);
      auVar19[6] = -(pbVar16[6] == 0x6c);
      auVar19[7] = -(pbVar16[7] == 0x3a);
      auVar19[8] = -(pbVar16[8] == 100);
      auVar19[9] = -(pbVar16[9] == 0x6f);
      auVar19[10] = -(pbVar16[10] == 99);
      auVar19[0xb] = -(pbVar16[0xb] == 0x75);
      auVar19[0xc] = -(pbVar16[0xc] == 0x6d);
      auVar19[0xd] = -(pbVar16[0xd] == 0x65);
      auVar19[0xe] = -(pbVar16[0xe] == 0x6e);
      auVar19[0xf] = -(pbVar16[0xf] == 0x74);
      auVar21[0] = -(pbVar16[10] == 99);
      auVar21[1] = -(pbVar16[0xb] == 0x75);
      auVar21[2] = -(pbVar16[0xc] == 0x6d);
      auVar21[3] = -(pbVar16[0xd] == 0x65);
      auVar21[4] = -(pbVar16[0xe] == 0x6e);
      auVar21[5] = -(pbVar16[0xf] == 0x74);
      auVar21[6] = -(pbVar16[0x10] == 0x61);
      auVar21[7] = -(pbVar16[0x11] == 0x74);
      auVar21[8] = -(pbVar16[0x12] == 0x69);
      auVar21[9] = -(pbVar16[0x13] == 0x6f);
      auVar21[10] = -(pbVar16[0x14] == 0x6e);
      auVar21[0xb] = -(pbVar16[0x15] == 0x5f);
      auVar21[0xc] = -(pbVar16[0x16] == 0x74);
      auVar21[0xd] = -(pbVar16[0x17] == 0x61);
      auVar21[0xe] = -(pbVar16[0x18] == 0x67);
      auVar21[0xf] = -(pbVar16[0x19] == 0x5d);
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
  if (pbVar8 == *(byte **)(uStack_200 + 0x58)) {
LAB_0db36348:
    uVar3 = uStack_1d4;
    if (iStack_1d8 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0db363d9;
      lVar6 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(uVar11 + 0x18);
      }
      auStack_1c8._0_8_ = func_0x048b0c90(uVar11 + 0x18,puVar7,uVar3,1);
      if (auStack_1c8._0_8_ == 0) {
        auStack_1c8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_1c8);
        if (auStack_1c8._0_8_ == 0) goto LAB_0db363d9;
      }
      if ((*(int *)(auStack_1c8._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1c8._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_1c8._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0db363d9:
        lVar6 = 0;
      }
    }
    puStack_298 = &UNK_0488e0b0;
    pcStack_290 = (code *)0x0;
    uStack_288 = CONCAT35(uStack_288._5_3_,0x48b5725f);
    uStack_2a8 = 0;
    auStack_1c8 = (undefined1  [16])0x0;
    pcStack_1b0 = (code *)&UNK_0488e0b0;
    pcStack_1a8 = (code *)0x0;
    uStack_1a0 = 0x48b5725f;
    cStack_19c = '\0';
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar2 = _UNK_013bbadf;
    uStack_238 = 0x21;
    uStack_230 = 0x1a;
    *(ulong *)((long)puVar9 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puVar9 + 0x12) = uVar2;
    uVar2 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puVar9 = _DAT_013bbacd;
    puVar9[1] = uVar2;
    *(undefined1 *)((long)puVar9 + 0x1a) = 0;
    puStack_228 = puVar9;
    lVar6 = func_0x048b5060(lVar6,&uStack_238);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_1c8) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar9 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar9);
        if (cStack_19c != '\0') {
          if (cStack_19c == '\x02') {
            (*pcStack_1b0)(5,auStack_1c8 + 8,puVar9);
          }
          else {
            uVar2 = auStack_1c8._8_8_;
            auStack_1c8._8_8_ = 0;
            *puVar9 = uVar2;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_1b0;
      *(code **)(lVar6 + 0x40) = pcStack_1a8;
      *(undefined4 *)(lVar6 + 0x48) = uStack_1a0;
      *(char *)(lVar6 + 0x4c) = cStack_19c;
      pcVar10 = pcStack_1a8;
    }
    if ((uStack_238 & 1) != 0) {
      func_0x0412a280(puStack_228,uStack_238 & 0xfffffffffffffffe);
      pcVar10 = pcStack_1a8;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_1c8 + 8);
    }
    if (pcStack_290 != (code *)0x0) {
      (*pcStack_290)(&uStack_2a8);
    }
  }
  else {
    iVar4 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0db36348;
  }
  uStack_88 = uStack_1f8;
  puStack_80 = puStack_1f0;
  uStack_78 = uStack_1e8;
  uStack_70 = uStack_1e0;
  uStack_23c = uStack_1d4;
  uStack_90 = CONCAT71(uStack_1cf,cStack_1d0);
  func_0x05d54750(&uStack_f8,&UNK_0f493958);
  uVar11 = uStack_e8;
  uStack_98 = uStack_f0;
  uStack_68 = uStack_f8;
  uStack_60 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  if ((DAT_0f735248 == '\0') && (iVar4 = func_0x04108328(&DAT_0f735248), iVar4 != 0)) {
    func_0x0db7bf40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7351c8,0xf53dab8);
    func_0x0410844d(&DAT_0f735248);
  }
  plVar12 = (long *)(*(long *)(uStack_200 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_200 + 0x20) -
                                         *(long *)(uStack_200 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f7351c8 + 4)) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_0db366b8;
    plVar12 = (long *)(*(long *)(uStack_200 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(uStack_200 + 0x30) + 8 + lVar6 * 0x18) !=
           *(uint *)(_DAT_0f7351c8 + 4));
  uStack_e0 = uVar11;
  if (plVar12 == *(long **)(uStack_200 + 0x38)) {
LAB_0db366b8:
    uStack_e0 = uVar11;
    puVar7 = &DAT_0f7351c8;
    pbVar16 = *(byte **)(uStack_200 + 0x50);
    pbVar8 = *(byte **)(uStack_200 + 0x58);
    if (pbVar16 != pbVar8) {
LAB_0db366f6:
      uStack_e0 = uVar11;
      do {
        bVar1 = *pbVar16;
        if ((bVar1 & 1) == 0) {
          if (bVar1 >> 1 == 0x24) goto LAB_0db3674a;
        }
        else if (*(long *)(pbVar16 + 8) == 0x24) {
LAB_0db3674a:
          if ((bVar1 & 1) == 0) {
            pbVar13 = pbVar16 + 1;
          }
          else {
            pbVar13 = *(byte **)(pbVar16 + 0x10);
          }
          iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar13,0x24);
          if (iVar4 == 0) break;
        }
        pbVar16 = pbVar16 + 0x38;
      } while (pbVar16 != pbVar8);
    }
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    pbVar16 = *(byte **)(uStack_200 + 0x50);
    pbVar8 = *(byte **)(uStack_200 + 0x58);
    if (pbVar16 != pbVar8) goto LAB_0db366f6;
  }
  if (pbVar16 != pbVar8) {
    iVar4 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    uVar11 = uStack_e0;
    uVar15 = uStack_98;
    if (iVar4 != _DAT_0f550754) goto LAB_0db36a61;
  }
  if (iStack_1d8 == 0) {
    if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0db36816;
    lVar6 = *(long *)(puVar7 + 0x68) + 0x38;
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)func_0x048aead0(uStack_200 + 0x18);
    }
    lVar6 = func_0x048b0c90(uStack_200 + 0x18,puVar7,uStack_23c,1);
    if (lVar6 == 0) {
      auStack_1c8 = ZEXT816(0);
      FUN_048b0d20(auStack_1c8);
      lVar6 = auStack_1c8._0_8_;
      if (auStack_1c8._0_8_ == 0) goto LAB_0db36816;
    }
    if ((*(int *)(lVar6 + 0x50) == -0x45dcb126) && (*(long *)(lVar6 + 0x58) != 0)) {
      lVar6 = *(long *)(lVar6 + 0x58) + 0x40;
    }
    else {
LAB_0db36816:
      lVar6 = 0;
    }
  }
  uStack_2a8 = 0;
  puStack_298 = &UNK_048b4ab0;
  pcStack_290 = (code *)&UNK_048b49f0;
  uStack_288 = CONCAT35(uStack_288._5_3_,0x1d33bd9c5);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  *puVar9 = 0x4420656d6f69421c;
  *(undefined4 *)(puVar9 + 1) = 0x6d75636f;
  *(undefined4 *)((long)puVar9 + 0xb) = 0x746e656d;
  *(undefined1 *)((long)puVar9 + 0xf) = 0;
  puVar9[2] = 0;
  *(undefined2 *)(puVar9 + 3) = 2;
  puVar9[4] = uStack_68;
  puVar9[5] = uStack_60;
  puVar9[6] = uStack_e0;
  pcStack_1b0 = (code *)&UNK_048b4ab0;
  pcStack_1a8 = (code *)&UNK_048b49f0;
  uStack_1a0 = 0xd33bd9c5;
  cStack_19c = '\x01';
  uStack_2a8 = 0;
  auStack_1c8._8_8_ = puVar9;
  auStack_1c8._0_8_ = &UNK_048b46e0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uVar2 = _UNK_014518c1;
  uStack_238 = 0x29;
  uStack_230 = 0x24;
  puVar9[2] = _DAT_014518b9;
  puVar9[3] = uVar2;
  uVar2 = _UNK_014518b1;
  *puVar9 = _DAT_014518a9;
  puVar9[1] = uVar2;
  *(undefined4 *)(puVar9 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar9 + 0x24) = 0;
  puStack_228 = puVar9;
  lVar6 = func_0x048b5060(lVar6,&uStack_238);
  *(undefined **)(lVar6 + 0x20) = &UNK_048b46e0;
  pcVar10 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar6 + 0x20) != auStack_1c8) {
    puVar9 = (undefined8 *)(lVar6 + 0x28);
    if (*(code **)(lVar6 + 0x40) == (code *)0x0) {
LAB_0db369d2:
      uVar2 = auStack_1c8._8_8_;
      auStack_1c8._8_8_ = 0;
      *puVar9 = uVar2;
    }
    else {
      (**(code **)(lVar6 + 0x40))(puVar9);
      if (cStack_19c != '\0') {
        if (cStack_19c != '\x02') goto LAB_0db369d2;
        (*pcStack_1b0)(5,auStack_1c8 + 8,puVar9);
      }
    }
    *(code **)(lVar6 + 0x38) = pcStack_1b0;
    *(code **)(lVar6 + 0x40) = pcStack_1a8;
    *(undefined4 *)(lVar6 + 0x48) = uStack_1a0;
    *(char *)(lVar6 + 0x4c) = cStack_19c;
    pcVar10 = pcStack_1a8;
  }
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(puStack_228,uStack_238 & 0xfffffffffffffffe);
    pcVar10 = pcStack_1a8;
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(auStack_1c8 + 8);
  }
  if (pcStack_290 != (code *)0x0) {
    (*pcStack_290)(&uStack_2a8);
  }
  uVar11 = 0;
  uVar15 = 0;
LAB_0db36a61:
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_58 = uStack_88;
  puStack_50 = puStack_80;
  uStack_d8 = uStack_200;
  uStack_d0 = uStack_88;
  puStack_c8 = puStack_80;
  uStack_c0 = uStack_78;
  uStack_b8 = uStack_70;
  uStack_b0 = CONCAT44(uStack_23c,iStack_1d8);
  uStack_a8 = uStack_90;
  func_0x0db7d310(auStack_1c8,&uStack_d8,&UNK_0128206d,0xf);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0f3e3930;
  if (pcStack_1b0 != (code *)0x0) {
    lVar6 = *(long *)pcStack_1b0;
    pcStack_1b0 = pcVar10;
    (**(code **)(lVar6 + 8))();
    pcVar10 = pcStack_1b0;
  }
  pcStack_1b0 = pcVar10;
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uStack_1b8);
  uStack_2a0 = 0;
  puStack_298 = (undefined *)((ulong)puStack_298 & 0xffffffff00000000);
  pcStack_290 = (code *)0x1;
  uStack_288 = 0;
  puStack_280 = &UNK_0db7d8c0;
  puStack_278 = &SUB_048b06d0;
  puStack_270 = &SUB_0c8dbf00;
  puStack_268 = &UNK_0db7d8d0;
  puStack_260 = &UNK_0db7db40;
  uStack_258 = 0;
  auStack_250._0_16_ = ZEXT816(0);
  FUN_048b05a0(auStack_1c8._8_8_,&uStack_2a8);
  uVar2 = auStack_250._8_8_;
  if ((long *)auStack_250._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_250._8_8_ + 8);
    lVar6 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0db7d5c0(auStack_1c8);
  cStack_208 = (char)uStack_a8;
  uStack_218 = uStack_b8;
  uStack_210 = uStack_b0;
  puStack_228 = puStack_c8;
  uStack_220 = uStack_c0;
  uStack_238 = uStack_d8;
  uStack_230 = uStack_d0;
  func_0x048b0bc0(&pcStack_1b0);
  func_0x0db7d310(auStack_1c8,&uStack_238,&UNK_013771cd,0xe);
  pcVar10 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar10 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar10 = &UNK_0ef44b00;
  if (pcStack_1b0 != (code *)0x0) {
    lVar6 = *(long *)pcStack_1b0;
    pcStack_1b0 = pcVar10;
    (**(code **)(lVar6 + 8))();
    pcVar10 = pcStack_1b0;
  }
  pcStack_1b0 = pcVar10;
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uStack_1b8);
  uStack_2a0 = 0;
  puStack_298 = (undefined *)((ulong)puStack_298 & 0xffffffff00000000);
  pcStack_290 = (code *)0x1;
  uStack_288 = 0;
  puStack_280 = &UNK_048b3f30;
  puStack_278 = &SUB_048b06d0;
  puStack_270 = &SUB_048b2190;
  puStack_268 = &UNK_0db7dfb0;
  puStack_260 = &UNK_0db7e180;
  uStack_258 = 0;
  auStack_250._0_16_ = (undefined1  [16])0x0;
  FUN_048b05a0(auStack_1c8._8_8_,&uStack_2a8);
  uVar2 = auStack_250._8_8_;
  if ((long *)auStack_250._8_8_ != (long *)0x0) {
    LOCK();
    plVar12 = (long *)(auStack_250._8_8_ + 8);
    lVar6 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)auStack_250._8_8_ + 0x10))(auStack_250._8_8_);
      func_0x0412c2d0(uVar2);
    }
  }
  func_0x0db7d5c0(auStack_1c8);
  func_0x048b0bc0(&pcStack_1b0);
  if ((uVar11 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar11 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar15 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar15 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_e8 = 0;
  if ((uStack_f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_f0 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
