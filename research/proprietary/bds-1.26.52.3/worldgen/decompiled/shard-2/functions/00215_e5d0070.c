/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6d0070 (ELF vaddr 0xe5d0070)
 * Label: string:minecraft:biome_music
 * Body:  [[0e6d0070, 0e6d0174] [0e6d0180, 0e6d01c2] [0e6d01d0, 0e6d085c] [0e6d0860, 0e6d08a1] [0e6d08b0, 0e6d1337] [0e6d1340, 0e6d1381] [0e6d1390, 0e6d1c31] [0e6d1c40, 0e6d26b6] [0e6d26c0, 0e6d3b49]]
 * Ghidra: FUN_0e6d0070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6d0070(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 (*pauVar13) [16];
  int *piVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined *puStack_2a0;
  long *plStack_298;
  long *plStack_290;
  code *pcStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined4 uStack_250;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  long lStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined2 uStack_1e7;
  undefined1 uStack_1e5;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [16];
  long lStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined4 uStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined2 uStack_178;
  undefined2 uStack_176;
  uint uStack_174;
  uint uStack_170;
  undefined1 uStack_16c;
  undefined1 auStack_168 [16];
  undefined8 *puStack_158;
  undefined *puStack_148;
  long *plStack_140;
  long *plStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined *puStack_108;
  long *plStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_c8 [16];
  code *pcStack_b8;
  code *pcStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  long alStack_98 [5];
  int iStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar11 = func_0x0e6efb00(param_1 + 0x18);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar26 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar25 = lVar11 + 9;
    if (bVar26) {
      lVar25 = *(long *)(lVar11 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar26) {
      uVar19 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0e6f00f0(alStack_98,param_1,lVar25,uVar19);
  }
  else {
    func_0x0e6f00f0(alStack_98,param_1,&UNK_014a91d7,0x17);
  }
  if (cStack_68 != '\0') {
    return;
  }
  lVar25 = alStack_98[0] + 0x18;
  lVar11 = func_0x0e6efb00(lVar25);
  for (pbVar18 = *(byte **)(alStack_98[0] + 0x50); pbVar18 != *(byte **)(alStack_98[0] + 0x58);
      pbVar18 = pbVar18 + 0x38) {
    bVar3 = *pbVar18;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e6d01da;
    }
    else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e6d01da:
      if ((bVar3 & 1) == 0) {
        pbVar21 = pbVar18 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar18 + 0x10);
      }
      auVar27[0] = -(*pbVar21 == 0x5b);
      auVar27[1] = -(pbVar21[1] == 99);
      auVar27[2] = -(pbVar21[2] == 0x65);
      auVar27[3] = -(pbVar21[3] == 0x72);
      auVar27[4] = -(pbVar21[4] == 0x65);
      auVar27[5] = -(pbVar21[5] == 0x61);
      auVar27[6] = -(pbVar21[6] == 0x6c);
      auVar27[7] = -(pbVar21[7] == 0x3a);
      auVar27[8] = -(pbVar21[8] == 100);
      auVar27[9] = -(pbVar21[9] == 0x6f);
      auVar27[10] = -(pbVar21[10] == 99);
      auVar27[0xb] = -(pbVar21[0xb] == 0x75);
      auVar27[0xc] = -(pbVar21[0xc] == 0x6d);
      auVar27[0xd] = -(pbVar21[0xd] == 0x65);
      auVar27[0xe] = -(pbVar21[0xe] == 0x6e);
      auVar27[0xf] = -(pbVar21[0xf] == 0x74);
      auVar30[0] = -(pbVar21[10] == 99);
      auVar30[1] = -(pbVar21[0xb] == 0x75);
      auVar30[2] = -(pbVar21[0xc] == 0x6d);
      auVar30[3] = -(pbVar21[0xd] == 0x65);
      auVar30[4] = -(pbVar21[0xe] == 0x6e);
      auVar30[5] = -(pbVar21[0xf] == 0x74);
      auVar30[6] = -(pbVar21[0x10] == 0x61);
      auVar30[7] = -(pbVar21[0x11] == 0x74);
      auVar30[8] = -(pbVar21[0x12] == 0x69);
      auVar30[9] = -(pbVar21[0x13] == 0x6f);
      auVar30[10] = -(pbVar21[0x14] == 0x6e);
      auVar30[0xb] = -(pbVar21[0x15] == 0x5f);
      auVar30[0xc] = -(pbVar21[0x16] == 0x74);
      auVar30[0xd] = -(pbVar21[0x17] == 0x61);
      auVar30[0xe] = -(pbVar21[0x18] == 0x67);
      auVar30[0xf] = -(pbVar21[0x19] == 0x5d);
      auVar30 = auVar30 & auVar27;
      if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar18 == *(byte **)(alStack_98[0] + 0x58)) {
LAB_0e6d0209:
    if (iStack_70 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0e6d027d;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      auStack_238._0_8_ = func_0x048b0c90(lVar25,lVar11,uStack_6c,1);
      if (auStack_238._0_8_ == 0) {
        auStack_238 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_238);
        if (auStack_238._0_8_ == 0) goto LAB_0e6d027d;
      }
      if ((*(int *)(auStack_238._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_238._0_8_ + 0x58) != 0)) {
        lVar11 = *(long *)(auStack_238._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e6d027d:
        lVar11 = 0;
      }
    }
    plStack_290 = (long *)&UNK_0488e0b0;
    pcStack_288 = (code *)0x0;
    pcStack_280 = (code *)CONCAT35(pcStack_280._5_3_,0x48b5725f);
    puStack_2a0 = (undefined *)0x0;
    auStack_238 = (undefined1  [16])0x0;
    auStack_220 = ZEXT816(0x488e0b0);
    auStack_210._0_5_ = 0x48b5725f;
    plStack_f8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_f8 == (long *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar17 = _UNK_013bbadf;
    puStack_108 = (undefined *)0x21;
    plStack_100 = (long *)0x1a;
    *(ulong *)((long)plStack_f8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)plStack_f8 + 0x12) = uVar17;
    lVar25 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *plStack_f8 = _DAT_013bbacd;
    plStack_f8[1] = lVar25;
    *(undefined1 *)((long)plStack_f8 + 0x1a) = 0;
    lVar11 = func_0x048b5060(lVar11,&puStack_108);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    if ((undefined1 *)(lVar11 + 0x20) == auStack_238) {
      pcVar16 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
        puVar23 = (undefined8 *)(lVar11 + 0x28);
        (**(code **)(lVar11 + 0x40))(puVar23);
        if (auStack_210[4] != '\0') {
          if (auStack_210[4] == '\x02') {
            (*(code *)auStack_220._0_8_)(5,auStack_238 + 8,puVar23);
          }
          else {
            uVar17 = auStack_238._8_8_;
            auStack_238._8_8_ = 0;
            *puVar23 = uVar17;
          }
        }
      }
      *(undefined8 *)(lVar11 + 0x38) = auStack_220._0_8_;
      *(undefined8 *)(lVar11 + 0x40) = auStack_220._8_8_;
      *(undefined4 *)(lVar11 + 0x48) = auStack_210._0_4_;
      *(char *)(lVar11 + 0x4c) = auStack_210[4];
      pcVar16 = (code *)auStack_220._8_8_;
    }
    if (((ulong)puStack_108 & 1) != 0) {
      func_0x0412a280(plStack_f8,(ulong)puStack_108 & 0xfffffffffffffffe);
      pcVar16 = (code *)auStack_220._8_8_;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_238 + 8);
    }
    if (pcStack_288 != (code *)0x0) {
      (*pcStack_288)(&puStack_2a0);
    }
  }
  else {
    iVar9 = *(int *)(pbVar18 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar9 == _DAT_0f550ac4) goto LAB_0e6d0209;
  }
  func_0x0e748f40(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e2f1b0,0x18);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4c8678;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e6f2fd0;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e6f2cd0;
  puStack_260 = &UNK_0e6f2fe0;
  puStack_258 = &UNK_0e6f31a0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  puStack_108 = &UNK_0140ba00;
  plStack_100 = (long *)0x6;
  func_0x0470d9a0(auStack_238,&UNK_01384326,0xc,0xd,&puStack_108);
  bVar26 = (auStack_238[0] & 1) != 0;
  puVar20 = auStack_238 + 1;
  if (bVar26) {
    puVar20 = (undefined1 *)uStack_228;
  }
  uVar19 = (ulong)(auStack_238[0] >> 1);
  if (bVar26) {
    uVar19 = auStack_238._8_8_;
  }
  if ((DAT_0f75e460 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e460), iVar9 != 0)) {
    func_0x0e701a30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75e3e0,0xf53dab8);
    func_0x0410844d(&DAT_0f75e460);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75e3e0 + 4)) * 8);
  do {
    lVar11 = *plVar15;
    if (lVar11 == -1) goto LAB_0e6d06d1;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f75e3e0 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0e6d06d1:
    puVar12 = &DAT_0f75e3e0;
    iVar9 = iRam000000000f75e440;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    iVar9 = *(int *)(puVar12 + 0x60);
  }
  if ((iVar9 == -0x2b3da790) && (lVar11 = *(long *)(puVar12 + 0x68), lVar11 != 0)) {
    bVar26 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar20 = (undefined1 *)(lVar11 + 9);
    if (bVar26) {
      puVar20 = *(undefined1 **)(lVar11 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar26) {
      uVar19 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0e702030(&puStack_2a0,param_1,puVar20,uVar19);
  if ((auStack_238[0] & 1) != 0) {
    func_0x0412a280(uStack_228,auStack_238._0_8_ & 0xfffffffffffffffe);
  }
  if ((char)puStack_270 == '\0') {
    func_0x04134310(&bStack_60,0x13);
    pauVar13 = (undefined1 (*) [16])func_0x0412f0e0(&bStack_60,0,&UNK_013a12ea,10);
    puVar12 = puStack_2a0;
    uStack_48 = *(undefined8 *)*pauVar13;
    uStack_40 = *(undefined8 *)(*pauVar13 + 8);
    uVar19 = *(ulong *)*pauVar13;
    uStack_a0 = *(undefined8 *)pauVar13[1];
    *pauVar13 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar13[1] = 0;
    if ((DAT_0f75e460 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e460), iVar9 != 0)) {
      func_0x0e701a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75e3e0,0xf53dab8);
      func_0x0410844d(&DAT_0f75e460);
    }
    uVar24 = uVar19 & 0xffffffffffffff00;
    plVar15 = (long *)(*(long *)(puVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75e3e0 + 4)) * 8);
    do {
      lVar11 = *plVar15;
      if (lVar11 == -1) goto LAB_0e6d0820;
      plVar15 = (long *)(*(long *)(puVar12 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar11 * 0x18) !=
             *(uint *)(_DAT_0f75e3e0 + 4));
    if (plVar15 == *(long **)(puVar12 + 0x38)) {
LAB_0e6d0820:
      puVar22 = &DAT_0f75e3e0;
    }
    else {
      puVar22 = (undefined *)plVar15[2];
    }
    for (pbVar18 = *(byte **)(puStack_2a0 + 0x50); pbVar18 != *(byte **)(puStack_2a0 + 0x58);
        pbVar18 = pbVar18 + 0x38) {
      bVar3 = *pbVar18;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1d) goto LAB_0e6d08ba;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1d) {
LAB_0e6d08ba:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar18 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar18 + 0x10);
        }
        auVar28[0] = -(*pbVar21 == DAT_014e4030);
        auVar28[1] = -(pbVar21[1] == DAT_014e4030._1_1_);
        auVar28[2] = -(pbVar21[2] == DAT_014e4030._2_1_);
        auVar28[3] = -(pbVar21[3] == DAT_014e4030._3_1_);
        auVar28[4] = -(pbVar21[4] == DAT_014e4030._4_1_);
        auVar28[5] = -(pbVar21[5] == DAT_014e4030._5_1_);
        auVar28[6] = -(pbVar21[6] == DAT_014e4030._6_1_);
        auVar28[7] = -(pbVar21[7] == DAT_014e4030._7_1_);
        auVar28[8] = -(pbVar21[8] == DAT_014e4030._8_1_);
        auVar28[9] = -(pbVar21[9] == DAT_014e4030._9_1_);
        auVar28[10] = -(pbVar21[10] == DAT_014e4030._10_1_);
        auVar28[0xb] = -(pbVar21[0xb] == DAT_014e4030._11_1_);
        auVar28[0xc] = -(pbVar21[0xc] == DAT_014e4030._12_1_);
        auVar28[0xd] = -(pbVar21[0xd] == DAT_014e4030._13_1_);
        auVar28[0xe] = -(pbVar21[0xe] == DAT_014e4030._14_1_);
        auVar28[0xf] = -(pbVar21[0xf] == DAT_014e4030._15_1_);
        auVar31[0] = -(pbVar21[0xd] == DAT_014e1610);
        auVar31[1] = -(pbVar21[0xe] == DAT_014e1610._1_1_);
        auVar31[2] = -(pbVar21[0xf] == DAT_014e1610._2_1_);
        auVar31[3] = -(pbVar21[0x10] == DAT_014e1610._3_1_);
        auVar31[4] = -(pbVar21[0x11] == DAT_014e1610._4_1_);
        auVar31[5] = -(pbVar21[0x12] == DAT_014e1610._5_1_);
        auVar31[6] = -(pbVar21[0x13] == DAT_014e1610._6_1_);
        auVar31[7] = -(pbVar21[0x14] == DAT_014e1610._7_1_);
        auVar31[8] = -(pbVar21[0x15] == DAT_014e1610._8_1_);
        auVar31[9] = -(pbVar21[0x16] == DAT_014e1610._9_1_);
        auVar31[10] = -(pbVar21[0x17] == DAT_014e1610._10_1_);
        auVar31[0xb] = -(pbVar21[0x18] == DAT_014e1610._11_1_);
        auVar31[0xc] = -(pbVar21[0x19] == DAT_014e1610._12_1_);
        auVar31[0xd] = -(pbVar21[0x1a] == DAT_014e1610._13_1_);
        auVar31[0xe] = -(pbVar21[0x1b] == DAT_014e1610._14_1_);
        auVar31[0xf] = -(pbVar21[0x1c] == DAT_014e1610._15_1_);
        auVar31 = auVar31 & auVar28;
        if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(puStack_2a0 + 0x58)) {
LAB_0e6d08e8:
      if ((int)uStack_278 == 0) {
        if (((puVar22 == (undefined *)0x0) || (*(int *)(puVar22 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar22 + 0x68) == 0)) goto LAB_0e6d096a;
        lVar11 = *(long *)(puVar22 + 0x68) + 0x38;
      }
      else {
        uVar6 = uStack_278._4_4_;
        if (puVar22 == (undefined *)0x0) {
          puVar22 = (undefined *)func_0x048aead0(puVar12 + 0x18);
        }
        lVar11 = func_0x048b0c90(puVar12 + 0x18,puVar22,uVar6,1);
        if (lVar11 == 0) {
          auStack_238 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_238);
          lVar11 = auStack_238._0_8_;
          if (auStack_238._0_8_ == 0) goto LAB_0e6d096a;
        }
        if ((*(int *)(lVar11 + 0x50) == -0x45dcb126) && (*(long *)(lVar11 + 0x58) != 0)) {
          lVar11 = *(long *)(lVar11 + 0x58) + 0x40;
        }
        else {
LAB_0e6d096a:
          lVar11 = 0;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_c8._8_8_;
      auStack_c8 = auVar4 << 0x40;
      pcStack_b8 = (code *)&UNK_048b4ab0;
      uStack_a8 = 0xd33bd9c5;
      pcStack_b0 = (code *)&UNK_048b49f0;
      uStack_a4 = 1;
      puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar23 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      *puVar23 = uStack_48;
      puVar23[1] = uStack_40;
      puVar23[2] = uStack_a0;
      *(undefined2 *)(puVar23 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar23 + 4) = (undefined1  [16])0x0;
      puVar23[6] = 0;
      auStack_220._8_8_ = &UNK_048b49f0;
      auStack_220._0_8_ = &UNK_048b4ab0;
      auStack_210._0_5_ = 0x1d33bd9c5;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auStack_c8._8_8_;
      auStack_c8 = auVar5 << 0x40;
      auStack_238._8_8_ = puVar23;
      auStack_238._0_8_ = &UNK_048b46e0;
      puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_158 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar17 = _UNK_014d987e;
      auStack_168._8_8_ = 0x1d;
      auStack_168._0_8_ = 0x21;
      *(ulong *)((long)puStack_158 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_158 + 0x15) = uVar17;
      uVar17 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_158 = _DAT_014d9869;
      puStack_158[1] = uVar17;
      *(undefined1 *)((long)puStack_158 + 0x1d) = 0;
      lVar11 = func_0x048b5060(lVar11,auStack_168);
      *(undefined **)(lVar11 + 0x20) = &UNK_048b46e0;
      pcVar16 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar11 + 0x20) != auStack_238) {
        puVar23 = (undefined8 *)(lVar11 + 0x28);
        if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0e6d0b06:
          uVar17 = auStack_238._8_8_;
          auStack_238._8_8_ = 0;
          *puVar23 = uVar17;
        }
        else {
          (**(code **)(lVar11 + 0x40))(puVar23);
          if (auStack_210[4] != '\0') {
            if (auStack_210[4] != '\x02') goto LAB_0e6d0b06;
            (*(code *)auStack_220._0_8_)(5,auStack_238 + 8,puVar23);
          }
        }
        *(undefined8 *)(lVar11 + 0x38) = auStack_220._0_8_;
        *(undefined8 *)(lVar11 + 0x40) = auStack_220._8_8_;
        *(undefined4 *)(lVar11 + 0x48) = auStack_210._0_4_;
        *(char *)(lVar11 + 0x4c) = auStack_210[4];
        pcVar16 = (code *)auStack_220._8_8_;
      }
      if ((auStack_168[0] & 1) != 0) {
        func_0x0412a280(puStack_158,auStack_168._0_8_ & 0xfffffffffffffffe);
        pcVar16 = (code *)auStack_220._8_8_;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_238 + 8);
      }
      if (pcStack_b0 != (code *)0x0) {
        (*pcStack_b0)(auStack_c8);
      }
      uStack_a0 = 0;
      uVar24 = 0;
      uVar19 = 0;
    }
    else {
      iVar9 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550768), iVar10 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar9 == _DAT_0f550754) goto LAB_0e6d08e8;
    }
    uStack_128 = pcStack_280;
    puStack_118 = puStack_270;
    plStack_138 = plStack_290;
    pcStack_130 = pcStack_288;
    puStack_148 = puStack_2a0;
    plStack_140 = plStack_298;
    uStack_120 = 0x1e1bc4d500000004;
    if ((DAT_0f75e480 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e480), iVar9 != 0)) {
      func_0x0e701b40();
      func_0x0410844d(&DAT_0f75e480);
    }
    auStack_238._0_4_ = uStack_120._4_4_;
    auStack_238._8_8_ = 0;
    uStack_228 = (long *)((ulong)uStack_228._4_4_ << 0x20);
    auStack_220._8_8_ = &SUB_048aead0;
    auStack_220._0_8_ = 3;
    auStack_210._8_8_ = &UNK_0e702d10;
    auStack_210._0_8_ = &UNK_0c0f6d10;
    lStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    func_0x049057f0(&plStack_140,auStack_238);
    func_0x048aea50(auStack_238);
    pcStack_b8 = pcStack_130;
    pcStack_b0 = uStack_128;
    auStack_c8._8_8_ = plStack_138;
    auStack_c8._0_8_ = plStack_140;
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar23 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar23 = &UNK_0ef44b00;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = puVar23;
    puStack_158 = (undefined8 *)CONCAT71(puStack_158._1_7_,0xff);
    func_0x0e702b90(auStack_238,auStack_c8,auStack_168);
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x28))();
    }
    if ((long *)auStack_168._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._0_8_ + 8))();
    }
    if ((DAT_0f75e480 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e480), iVar9 != 0)) {
      func_0x0e701b40();
      func_0x0410844d(&DAT_0f75e480);
    }
    if (uStack_128._4_4_ == 2) {
      piVar14 = *(int **)(*(long *)(pcStack_130 + 0x78) + 0x60);
      iVar9 = *piVar14;
      while (iVar9 != (int)uStack_128) {
        piVar14 = piVar14 + 0x16;
        iVar9 = *piVar14;
      }
      plVar15 = *(long **)(piVar14 + 0xc);
      while (plVar15 != plStack_138) {
        piVar14 = *(int **)(piVar14 + 0xe);
        plVar15 = *(long **)(piVar14 + 0xc);
      }
LAB_0e6d0daf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 2;
    }
    else {
      if (uStack_128._4_4_ == 1) {
        piVar14 = *(int **)(*(long *)(pcStack_130 + 0x78) + 0x48);
        iVar9 = *piVar14;
        while (iVar9 != (int)uStack_128) {
          piVar14 = piVar14 + 0x1a;
          iVar9 = *piVar14;
        }
        goto LAB_0e6d0daf;
      }
      if (uStack_128._4_4_ == 0) {
        *(uint *)(pcStack_130 + 0x18) = *(uint *)(pcStack_130 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75e480 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e480), iVar9 != 0)) {
      func_0x0e701b40();
      func_0x0410844d(&DAT_0f75e480);
    }
    auStack_238._0_4_ = 0xbf75c8f8;
    auStack_238._8_8_ = 0;
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,1);
    auStack_220 = ZEXT816(0x48b2190) << 0x40;
    auStack_210._8_8_ = &UNK_0e7038e0;
    auStack_210._0_8_ = &SUB_048b06d0;
    lStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    func_0x049057f0(&plStack_140,auStack_238);
    func_0x048aea50(auStack_238);
    pcStack_b8 = pcStack_130;
    pcStack_b0 = uStack_128;
    auStack_c8._8_8_ = plStack_138;
    auStack_c8._0_8_ = plStack_140;
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar23 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar23 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551cb0), iVar9 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_238._0_4_ = _DAT_0f551c9c;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(plVar15 + 1) = (undefined1  [16])0x0;
    *plVar15 = (long)&UNK_0ef46c98;
    plVar15[3] = (long)puVar23;
    *(undefined1 *)(plVar15 + 4) = 0xff;
    auStack_238._8_8_ = plVar15 + 3;
    auStack_168 = (undefined1  [16])0x0;
    uStack_228 = plVar15;
    func_0x048afd20(auStack_c8,auStack_238);
    plVar15 = uStack_228;
    if (uStack_228 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_228 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_228 + 0x10))(uStack_228);
        func_0x0412c2d0(plVar15);
      }
    }
    uVar17 = auStack_168._8_8_;
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_168._8_8_ + 8);
      lVar11 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_168._8_8_ + 0x10))(auStack_168._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    pcStack_e8 = uStack_128;
    puStack_108 = puStack_148;
    plStack_100 = plStack_140;
    plStack_f8 = plStack_138;
    pcStack_f0 = pcStack_130;
    puStack_d8 = puStack_118;
    uStack_e0 = 0x1e1bc4d500000004;
    if ((DAT_0f75e480 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e480), iVar9 != 0)) {
      func_0x0e701b40();
      func_0x0410844d(&DAT_0f75e480);
    }
    auStack_238._0_4_ = uStack_e0._4_4_;
    auStack_238._8_8_ = 0;
    uStack_228 = (long *)((ulong)uStack_228 & 0xffffffff00000000);
    auStack_220._8_8_ = &SUB_048aead0;
    auStack_220._0_8_ = 1;
    auStack_210._8_8_ = &UNK_0e703a80;
    auStack_210._0_8_ = &UNK_04905970;
    lStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    func_0x049057f0(&plStack_100,auStack_238);
    func_0x048aea50(auStack_238);
    pcStack_b8 = pcStack_f0;
    pcStack_b0 = pcStack_e8;
    auStack_c8._8_8_ = plStack_f8;
    auStack_c8._0_8_ = plStack_100;
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar23 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar23 = &UNK_0ef44b00;
    auStack_168._8_8_ = 0;
    auStack_168._0_8_ = puVar23;
    puStack_158 = (undefined8 *)CONCAT71(puStack_158._1_7_,0xff);
    func_0x0e702b90(auStack_238,auStack_c8,auStack_168);
    if ((long *)auStack_168._8_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._8_8_ + 0x28))();
    }
    if ((long *)auStack_168._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)auStack_168._0_8_ + 8))();
    }
    if ((uVar19 & 1) != 0) {
      func_0x0412a280(uStack_a0,uVar24 | (byte)uVar19 & 0xfe);
    }
    if ((bStack_60 & 1) != 0) {
      func_0x0412a280(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f75e1b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e1b0), iVar9 != 0)) {
    func_0x0e6f4440();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75e130,0xf53dab8);
    func_0x0410844d(&DAT_0f75e1b0);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75e130 + 4)) * 8);
  do {
    lVar11 = *plVar15;
    if (lVar11 == -1) goto LAB_0e6d11c0;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f75e130 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0e6d11c0:
    puVar12 = &DAT_0f75e130;
    if (iRam000000000f75e190 != -0x2b3da790) goto LAB_0e6d122d;
LAB_0e6d11eb:
    lVar11 = *(long *)(puVar12 + 0x68);
    if (lVar11 == 0) goto LAB_0e6d122d;
    bVar26 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar25 = lVar11 + 9;
    if (bVar26) {
      lVar25 = *(long *)(lVar11 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar26) {
      uVar19 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0e703d10(&puStack_108,param_1,lVar25,uVar19);
    puVar12 = puStack_108;
  }
  else {
    puVar12 = (undefined *)plVar15[2];
    if (*(int *)(puVar12 + 0x60) == -0x2b3da790) goto LAB_0e6d11eb;
LAB_0e6d122d:
    func_0x0e703d10(&puStack_108,param_1,&UNK_01e2a310,0x1c);
    puVar12 = puStack_108;
  }
  puStack_108 = puVar12;
  if ((char)puStack_d8 == '\0') {
    if ((DAT_0f75e1b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e1b0), iVar9 != 0)) {
      func_0x0e6f4440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75e130,0xf53dab8);
      func_0x0410844d(&DAT_0f75e1b0);
    }
    plVar15 = (long *)(*(long *)(puVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75e130 + 4)) * 8);
    do {
      lVar11 = *plVar15;
      if (lVar11 == -1) goto LAB_0e6d12c0;
      plVar15 = (long *)(*(long *)(puVar12 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar11 * 0x18) !=
             *(uint *)(_DAT_0f75e130 + 4));
    if (plVar15 == *(long **)(puVar12 + 0x38)) {
LAB_0e6d12c0:
      puVar22 = &DAT_0f75e130;
    }
    else {
      puVar22 = (undefined *)plVar15[2];
    }
    for (pbVar18 = *(byte **)(puStack_108 + 0x50); pbVar18 != *(byte **)(puStack_108 + 0x58);
        pbVar18 = pbVar18 + 0x38) {
      bVar3 = *pbVar18;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e6d139a;
      }
      else if (*(long *)(pbVar18 + 8) == 0x1a) {
LAB_0e6d139a:
        if ((bVar3 & 1) == 0) {
          pbVar21 = pbVar18 + 1;
        }
        else {
          pbVar21 = *(byte **)(pbVar18 + 0x10);
        }
        auVar29[0] = -(*pbVar21 == 0x5b);
        auVar29[1] = -(pbVar21[1] == 99);
        auVar29[2] = -(pbVar21[2] == 0x65);
        auVar29[3] = -(pbVar21[3] == 0x72);
        auVar29[4] = -(pbVar21[4] == 0x65);
        auVar29[5] = -(pbVar21[5] == 0x61);
        auVar29[6] = -(pbVar21[6] == 0x6c);
        auVar29[7] = -(pbVar21[7] == 0x3a);
        auVar29[8] = -(pbVar21[8] == 100);
        auVar29[9] = -(pbVar21[9] == 0x6f);
        auVar29[10] = -(pbVar21[10] == 99);
        auVar29[0xb] = -(pbVar21[0xb] == 0x75);
        auVar29[0xc] = -(pbVar21[0xc] == 0x6d);
        auVar29[0xd] = -(pbVar21[0xd] == 0x65);
        auVar29[0xe] = -(pbVar21[0xe] == 0x6e);
        auVar29[0xf] = -(pbVar21[0xf] == 0x74);
        auVar32[0] = -(pbVar21[10] == 99);
        auVar32[1] = -(pbVar21[0xb] == 0x75);
        auVar32[2] = -(pbVar21[0xc] == 0x6d);
        auVar32[3] = -(pbVar21[0xd] == 0x65);
        auVar32[4] = -(pbVar21[0xe] == 0x6e);
        auVar32[5] = -(pbVar21[0xf] == 0x74);
        auVar32[6] = -(pbVar21[0x10] == 0x61);
        auVar32[7] = -(pbVar21[0x11] == 0x74);
        auVar32[8] = -(pbVar21[0x12] == 0x69);
        auVar32[9] = -(pbVar21[0x13] == 0x6f);
        auVar32[10] = -(pbVar21[0x14] == 0x6e);
        auVar32[0xb] = -(pbVar21[0x15] == 0x5f);
        auVar32[0xc] = -(pbVar21[0x16] == 0x74);
        auVar32[0xd] = -(pbVar21[0x17] == 0x61);
        auVar32[0xe] = -(pbVar21[0x18] == 0x67);
        auVar32[0xf] = -(pbVar21[0x19] == 0x5d);
        auVar32 = auVar32 & auVar29;
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar18 == *(byte **)(puStack_108 + 0x58)) {
LAB_0e6d13c8:
      if ((int)uStack_e0 == 0) {
        if (((puVar22 == (undefined *)0x0) || (*(int *)(puVar22 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar22 + 0x68) == 0)) goto LAB_0e6d1450;
        lVar11 = *(long *)(puVar22 + 0x68) + 0x38;
      }
      else {
        uVar6 = uStack_e0._4_4_;
        if (puVar22 == (undefined *)0x0) {
          puVar22 = (undefined *)func_0x048aead0(puVar12 + 0x18);
        }
        auStack_238._0_8_ = func_0x048b0c90(puVar12 + 0x18,puVar22,uVar6,1);
        if (auStack_238._0_8_ == 0) {
          auStack_238 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_238);
          if (auStack_238._0_8_ == 0) goto LAB_0e6d1450;
        }
        if ((*(int *)(auStack_238._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_238._0_8_ + 0x58) != 0)) {
          lVar11 = *(long *)(auStack_238._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e6d1450:
          lVar11 = 0;
        }
      }
      plStack_290 = (long *)&UNK_0488e0b0;
      pcStack_288 = (code *)0x0;
      pcStack_280 = (code *)CONCAT35(pcStack_280._5_3_,0x48b5725f);
      puStack_2a0 = (undefined *)0x0;
      auStack_238 = (undefined1  [16])0x0;
      auStack_220 = ZEXT816(0x488e0b0);
      auStack_210._0_5_ = 0x48b5725f;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar15 == (long *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar17 = _UNK_013bbadf;
      puStack_148 = (undefined *)0x21;
      plStack_140 = (long *)0x1a;
      *(ulong *)((long)plVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar15 + 0x12) = uVar17;
      lVar25 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar15 = _DAT_013bbacd;
      plVar15[1] = lVar25;
      *(undefined1 *)((long)plVar15 + 0x1a) = 0;
      plStack_138 = plVar15;
      lVar11 = func_0x048b5060(lVar11,&puStack_148);
      *(undefined8 *)(lVar11 + 0x20) = 0;
      if ((undefined1 *)(lVar11 + 0x20) == auStack_238) {
        pcVar16 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar11 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar11 + 0x28);
          (**(code **)(lVar11 + 0x40))(puVar23);
          if (auStack_210[4] != '\0') {
            if (auStack_210[4] == '\x02') {
              (*(code *)auStack_220._0_8_)(5,auStack_238 + 8,puVar23);
            }
            else {
              uVar17 = auStack_238._8_8_;
              auStack_238._8_8_ = 0;
              *puVar23 = uVar17;
            }
          }
        }
        *(undefined8 *)(lVar11 + 0x38) = auStack_220._0_8_;
        *(undefined8 *)(lVar11 + 0x40) = auStack_220._8_8_;
        *(undefined4 *)(lVar11 + 0x48) = auStack_210._0_4_;
        *(char *)(lVar11 + 0x4c) = auStack_210[4];
        pcVar16 = (code *)auStack_220._8_8_;
      }
      if (((ulong)puStack_148 & 1) != 0) {
        func_0x0412a280(plStack_138,(ulong)puStack_148 & 0xfffffffffffffffe);
        pcVar16 = (code *)auStack_220._8_8_;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_238 + 8);
      }
      if (pcStack_288 != (code *)0x0) {
        (*pcStack_288)(&puStack_2a0);
      }
    }
    else {
      iVar9 = *(int *)(pbVar18 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar9 == _DAT_0f550ac4) goto LAB_0e6d13c8;
    }
    puStack_118 = puStack_d8;
    uStack_128 = pcStack_e8;
    uStack_120 = uStack_e0;
    plStack_138 = plStack_f8;
    pcStack_130 = pcStack_f0;
    puStack_148 = puStack_108;
    plStack_140 = plStack_100;
    if ((DAT_0f75e118 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e118), iVar9 != 0)) {
      func_0x0e6f4300();
      func_0x0410844d(&DAT_0f75e118);
    }
    puVar12 = puStack_148;
    uStack_120 = 0xed38dd6000000001;
    if ((DAT_0f75e1b0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75e1b0), iVar9 != 0)) {
      func_0x0e6f4440();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75e130,0xf53dab8);
      func_0x0410844d(&DAT_0f75e1b0);
    }
    plVar15 = (long *)(*(long *)(puVar12 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar12 + 0x20) - *(long *)(puVar12 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75e130 + 4)) * 8);
    do {
      lVar11 = *plVar15;
      if (lVar11 == -1) goto LAB_0e6d1760;
      plVar15 = (long *)(*(long *)(puVar12 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(puVar12 + 0x30) + 8 + lVar11 * 0x18) !=
             *(uint *)(_DAT_0f75e130 + 4));
    if (plVar15 == *(long **)(puVar12 + 0x38)) {
LAB_0e6d1760:
      auStack_238._0_8_ = &DAT_0f75e130;
    }
    else {
      auStack_238._0_8_ = plVar15[2];
    }
    auStack_238._8_8_ = puVar12 + 0x18;
    func_0x0ed621a0(auStack_238,uStack_120._4_4_);
    auStack_238._0_2_ = 1;
    auStack_238._8_8_ = &plStack_140;
    uStack_228 = (long *)CONCAT44(uStack_228._4_4_,uStack_120._4_4_);
    auStack_220 = ZEXT816(0);
    auStack_210 = ZEXT816(0);
    lStack_200 = 0;
    uStack_1f8 = CONCAT31((int3)_DAT_014ecd50,0x24);
    uStack_1f4 = (undefined4)((ulong)_DAT_014ecd50 >> 0x18);
    uStack_1f0 = (undefined1)((ulong)_DAT_014ecd50 >> 0x38);
    uStack_1ef = (undefined7)_UNK_014ecd58;
    uStack_1e8 = (undefined1)((ulong)_UNK_014ecd58 >> 0x38);
    uStack_1e7 = 0x7265;
    uStack_1e5 = 0;
    auStack_1e0 = ZEXT816(0);
    lStack_1d0 = 0;
    auStack_1c8 = ZEXT816(0);
    lStack_1b8 = 0;
    uStack_1b0 = 0x3f600000;
    func_0x048afb10(auStack_1e0,8);
    lStack_188 = 0;
    lStack_180 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    auStack_1a8 = (undefined1  [16])0x0;
    uStack_178 = 0xff00;
    uStack_174 = uStack_174 & 0xffffff00;
    uStack_170 = uStack_170 & 0xffffff00;
    uStack_16c = 0;
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar23 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar23 = &UNK_0f4c79f0;
    uVar17 = auStack_220._0_8_;
    auStack_220._0_8_ = puVar23;
    if ((long *)uVar17 != (long *)0x0) {
      (**(code **)(*(long *)uVar17 + 8))();
    }
    puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
    plStack_298 = (long *)0x0;
    plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
    pcStack_288 = (code *)0x1;
    pcStack_280 = (code *)0x0;
    uStack_278 = &UNK_0e704ab0;
    puStack_270 = &SUB_048b06d0;
    puStack_268 = &UNK_0e701970;
    puStack_260 = &UNK_0e704b70;
    puStack_258 = &UNK_0e704d40;
    uStack_250 = 0;
    auStack_248 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
    uVar17 = auStack_248._8_8_;
    if ((long *)auStack_248._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_248._8_8_ + 8);
      lVar11 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    uVar17 = auStack_238._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,_DAT_0f550a0c);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar15 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar15 + 1) = (undefined1  [16])0x0;
    *plVar15 = (long)&UNK_0ef439d0;
    plStack_298 = plVar15 + 3;
    uVar7 = auStack_220._0_8_;
    uVar8 = auStack_220._8_8_;
    auStack_220 = (undefined1  [16])0x0;
    plVar15[3] = uVar7;
    plVar15[4] = uVar8;
    plVar15[7] = lStack_200;
    plVar15[5] = auStack_210._0_8_;
    plVar15[6] = auStack_210._8_8_;
    auStack_210 = (undefined1  [16])0x0;
    lStack_200 = 0;
    plVar15[10] = CONCAT44(uStack_1e4,CONCAT13(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8)));
    plVar15[8] = CONCAT44(uStack_1f4,uStack_1f8);
    plVar15[9] = CONCAT71(uStack_1ef,uStack_1f0);
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    plVar15[0xb] = auStack_1e0._0_8_;
    plVar15[0xc] = auStack_1e0._8_8_;
    plVar15[0xd] = lStack_1d0;
    auStack_1e0 = (undefined1  [16])0x0;
    lStack_1d0 = 0;
    plVar15[0xe] = auStack_1c8._0_8_;
    plVar15[0xf] = auStack_1c8._8_8_;
    plVar15[0x10] = lStack_1b8;
    auStack_1c8 = (undefined1  [16])0x0;
    lStack_1b8 = 0;
    *(undefined4 *)(plVar15 + 0x11) = uStack_1b0;
    plVar15[0x12] = auStack_1a8._0_8_;
    plVar15[0x13] = auStack_1a8._8_8_;
    plVar15[0x14] = lStack_198;
    auStack_1a8 = (undefined1  [16])0x0;
    lStack_198 = 0;
    plVar15[0x17] = lStack_180;
    plVar15[0x15] = lStack_190;
    plVar15[0x16] = lStack_188;
    lStack_190 = 0;
    lStack_188 = 0;
    lStack_180 = 0;
    *(ulong *)((long)plVar15 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
    plVar15[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
    auStack_c8 = (undefined1  [16])0x0;
    plStack_290 = plVar15;
    func_0x048afd20(uVar17,&puStack_2a0);
    plVar15 = plStack_290;
    if (plStack_290 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_290 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_290 + 0x10))(plStack_290);
        func_0x0412c2d0(plVar15);
      }
    }
    uVar7 = auStack_c8._8_8_;
    if ((long *)auStack_c8._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_c8._8_8_ + 8);
      lVar11 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_c8._8_8_ + 0x10))(auStack_c8._8_8_);
        func_0x0412c2d0(uVar7);
      }
    }
    lVar11 = *(long *)(uVar17 + 0x10);
    iVar9 = *(int *)(uVar17 + 0x1c);
    if (iVar9 == 2) {
      piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar9 = *piVar14;
      while (iVar9 != *(int *)(uVar17 + 0x18)) {
        piVar14 = piVar14 + 0x16;
        iVar9 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)(uVar17 + 8); piVar14 = *(int **)(piVar14 + 0xe))
      {
      }
LAB_0e6d1c4a:
      piVar14[4] = piVar14[4] | auStack_238._0_4_ << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar14 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar9 = *piVar14;
        while (iVar9 != *(int *)(uVar17 + 0x18)) {
          piVar14 = piVar14 + 0x1a;
          iVar9 = *piVar14;
        }
        goto LAB_0e6d1c4a;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | auStack_238._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(auStack_220);
  }
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e2a310,0x1c);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4c7678;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e6f4e60;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e6f4ad0;
  puStack_260 = &UNK_0e6f4f20;
  puStack_258 = &UNK_0e6f51b0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e3c5440(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e1d7b0,0x18);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b8688;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e337b60;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e337860;
  puStack_260 = &UNK_0e6f5640;
  puStack_258 = &UNK_0e6f5800;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e2c91a0(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e13780,0x1c);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b5d60;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e339960;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e339660;
  puStack_260 = &UNK_0e6f5920;
  puStack_258 = &UNK_0e6f5ae0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e3ca250(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e1d7f0,0x13);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b8908;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e33d470;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e33d170;
  puStack_260 = &UNK_0e6f5c00;
  puStack_258 = &UNK_0e6f5dc0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e3ca6a0(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e1d810,0x1a);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b8a48;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e33f290;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e33ef90;
  puStack_260 = &UNK_0e6f5f60;
  puStack_258 = &UNK_0e6f6120;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  if (iStack_70 == 4) {
    uVar17 = func_0x0e6efb00(alStack_98[0] + 0x18);
    lVar11 = func_0x048b1040(alStack_98[0] + 0x18,uVar17,uStack_6c,1);
    if (lVar11 == 0) {
      auStack_238 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_238);
      lVar25 = *(long *)(auStack_238._0_8_ + 0x38);
      lVar11 = auStack_238._0_8_;
      if (lVar25 == 0) goto LAB_0e6d2692;
LAB_0e6d26b0:
      do {
        lVar11 = lVar25;
        lVar25 = *(long *)(lVar11 + 0x38);
        if (*(long *)(lVar11 + 0x38) == 0) {
          auStack_238 = (undefined1  [16])0x0;
          func_0x048b10d0(auStack_238);
          lVar25 = auStack_238._0_8_;
        }
      } while (lVar25 != 0);
    }
    else {
      lVar25 = *(long *)(lVar11 + 0x38);
      if (*(long *)(lVar11 + 0x38) != 0) goto LAB_0e6d26b0;
LAB_0e6d2692:
      auStack_238 = (undefined1  [16])0x0;
      func_0x048b10d0(auStack_238);
      lVar25 = auStack_238._0_8_;
      if (auStack_238._0_8_ != 0) goto LAB_0e6d26b0;
    }
    lVar11 = *(long *)(lVar11 + 0x48);
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar23 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
  }
  else {
    if (iStack_70 != 1) goto LAB_0e6d2742;
    uVar17 = func_0x0e6efb00(alStack_98[0] + 0x18);
    lVar11 = func_0x048b0c90(alStack_98[0] + 0x18,uVar17,uStack_6c,1);
    if (lVar11 == 0) {
      auStack_238 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_238);
      lVar11 = auStack_238._0_8_;
    }
    lVar11 = *(long *)(lVar11 + 0x58);
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar23 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
  }
  puVar23[1] = 0xffffffffffffffff;
  puVar23[2] = 0;
  *(undefined1 *)(puVar23 + 3) = 0xff;
  *puVar23 = &UNK_0f4e2d20;
  plVar15 = *(long **)(lVar11 + 8);
  *(undefined8 **)(lVar11 + 8) = puVar23;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x28))();
  }
LAB_0e6d2742:
  func_0x0e2c8790(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e13760,0x1b);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b5ea0;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e341060;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e340d60;
  puStack_260 = &UNK_0e6f6240;
  puStack_258 = &UNK_0e6f6400;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e2c6390(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e136d0,0x1f);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b5fe0;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e342f50;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e342c50;
  puStack_260 = &UNK_0e6f6520;
  puStack_258 = &UNK_0e6f66e0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e2c7590(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e13710,0x22);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b6120;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e344e40;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e344b40;
  puStack_260 = &UNK_0e6f6800;
  puStack_258 = &UNK_0e6f69c0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e2c9600(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e137d0,0x1d);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b6260;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e346d30;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e346a30;
  puStack_260 = &UNK_0e6f6ae0;
  puStack_258 = &UNK_0e6f6ca0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e2ca800(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e13810,0x1a);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4b63a0;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e348c20;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e348920;
  puStack_260 = &UNK_0e6f6dc0;
  puStack_258 = &UNK_0e6f6f80;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e7f36b0(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e2f620,0x1a);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4c87b8;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e6f8930;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e6f8630;
  puStack_260 = &UNK_0e6f8940;
  puStack_258 = &UNK_0e6f8b00;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e80da20(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e2f670,0x15);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4c88f8;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e6fa7f0;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e6fa4f0;
  puStack_260 = &UNK_0e6fa800;
  puStack_258 = &UNK_0e6fa9c0;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  func_0x0e80e190(param_1);
  func_0x0e6f09b0(auStack_238,alStack_98,&UNK_01e2f6f0,0x17);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f4c8a38;
  uVar17 = auStack_220._0_8_;
  auStack_220._0_8_ = puVar23;
  if ((long *)uVar17 != (long *)0x0) {
    (**(code **)(*(long *)uVar17 + 8))();
  }
  puStack_2a0 = (undefined *)CONCAT44(puStack_2a0._4_4_,(undefined4)uStack_228);
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)((ulong)plStack_290 & 0xffffffff00000000);
  pcStack_288 = (code *)0x1;
  pcStack_280 = (code *)0x0;
  uStack_278 = &UNK_0e6fc680;
  puStack_270 = &SUB_048b06d0;
  puStack_268 = &UNK_0e6fc380;
  puStack_260 = &UNK_0e6fc690;
  puStack_258 = &UNK_0e6fc850;
  uStack_250 = 0;
  auStack_248 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_238._8_8_,&puStack_2a0);
  uVar17 = auStack_248._8_8_;
  if ((long *)auStack_248._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_248._8_8_ + 8);
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_248._8_8_ + 0x10))(auStack_248._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  iVar9 = *(int *)(auStack_238._8_8_ + 0x1c);
  if (iVar9 == 2) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar11 = *(long *)(piVar14 + 0xc);
    while (lVar11 != *(long *)(auStack_238._8_8_ + 8)) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar11 = *(long *)(piVar14 + 0xc);
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 1) {
    piVar14 = *(int **)(*(long *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x78) + 0x48);
    iVar9 = *piVar14;
    while (iVar9 != *(int *)(auStack_238._8_8_ + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar9 = *piVar14;
    }
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else if (iVar9 == 0) {
    puVar1 = (uint *)(*(long *)(auStack_238._8_8_ + 0x10) + 0x18);
    *puVar1 = *puVar1 | 0x40000;
  }
  func_0x0e6f0e70(auStack_238);
  func_0x048b0bc0(auStack_220);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 * 0x14ecd50  cubemap_identifier
 */
