/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3d75a0 (ELF vaddr 0xe2d75a0)
 * Label: caller-of-callee
 * Body:  [[0e3d75a0, 0e3d7841] [0e3d7850, 0e3d81d8]]
 * Ghidra: FUN_0e3d75a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3d75a0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 (*pauVar7) [16];
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined *puVar16;
  code *pcVar17;
  ulong uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  char cStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puStack_d8 = &UNK_013298ae;
  uStack_d0 = 0x17;
  func_0x0470d9a0(auStack_188,&UNK_013d851d,0xd,0xd,&puStack_d8);
  bVar19 = (auStack_188[0] & 1) != 0;
  puVar14 = auStack_188 + 1;
  if (bVar19) {
    puVar14 = (undefined1 *)uStack_178;
  }
  uVar13 = (ulong)(auStack_188[0] >> 1);
  if (bVar19) {
    uVar13 = auStack_188._8_8_;
  }
  if ((DAT_0f7527b0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f7527b0), iVar4 != 0)) {
    func_0x0e456890();
    __cxa_atexit(&UNK_048ae800,&DAT_0f752730,0xf53dab8);
    func_0x0410844d(&DAT_0f7527b0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f752730 + 4)) * 8);
  do {
    lVar9 = *plVar11;
    if (lVar9 == -1) goto LAB_0e3d7671;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f752730 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3d7671:
    puVar6 = &DAT_0f752730;
    iVar4 = iRam000000000f752790;
  }
  else {
    puVar6 = (undefined *)plVar11[2];
    iVar4 = *(int *)(puVar6 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar9 = *(long *)(puVar6 + 0x68), lVar9 != 0)) {
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar14 = (undefined1 *)(lVar9 + 9);
    if (bVar19) {
      puVar14 = *(undefined1 **)(lVar9 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar13 = *(ulong *)(lVar9 + 0x10);
    }
  }
  func_0x0e456e90(&puStack_80,param_1,puVar14,uVar13);
  if ((auStack_188[0] & 1) != 0) {
    func_0x0412a280(uStack_178,auStack_188._0_8_ & 0xfffffffffffffffe);
  }
  if (cStack_50 != '\0') {
    return;
  }
  func_0x04134310(&bStack_98,6);
  pauVar7 = (undefined1 (*) [16])func_0x0412f0e0(&bStack_98,0,&UNK_01284191,0xb);
  puVar6 = puStack_80;
  uStack_48 = *(undefined8 *)*pauVar7;
  uStack_40 = *(undefined8 *)(*pauVar7 + 8);
  uVar13 = *(ulong *)*pauVar7;
  uStack_110 = *(undefined8 *)pauVar7[1];
  *pauVar7 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar7[1] = 0;
  if ((DAT_0f7527b0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f7527b0), iVar4 != 0)) {
    func_0x0e456890();
    __cxa_atexit(&UNK_048ae800,&DAT_0f752730,0xf53dab8);
    func_0x0410844d(&DAT_0f7527b0);
  }
  uVar18 = uVar13 & 0xffffffffffffff00;
  plVar11 = (long *)(*(long *)(puVar6 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar6 + 0x20) - *(long *)(puVar6 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f752730 + 4)) * 8);
  do {
    lVar9 = *plVar11;
    if (lVar9 == -1) goto LAB_0e3d77c0;
    plVar11 = (long *)(*(long *)(puVar6 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(puVar6 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f752730 + 4));
  if (plVar11 == *(long **)(puVar6 + 0x38)) {
LAB_0e3d77c0:
    puVar16 = &DAT_0f752730;
  }
  else {
    puVar16 = (undefined *)plVar11[2];
  }
  for (pbVar8 = *(byte **)(puStack_80 + 0x50); pbVar8 != *(byte **)(puStack_80 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1d) goto LAB_0e3d785a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1d) {
LAB_0e3d785a:
      if ((bVar2 & 1) == 0) {
        pbVar15 = pbVar8 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar8 + 0x10);
      }
      auVar20[0] = -(*pbVar15 == DAT_014e4030);
      auVar20[1] = -(pbVar15[1] == DAT_014e4030._1_1_);
      auVar20[2] = -(pbVar15[2] == DAT_014e4030._2_1_);
      auVar20[3] = -(pbVar15[3] == DAT_014e4030._3_1_);
      auVar20[4] = -(pbVar15[4] == DAT_014e4030._4_1_);
      auVar20[5] = -(pbVar15[5] == DAT_014e4030._5_1_);
      auVar20[6] = -(pbVar15[6] == DAT_014e4030._6_1_);
      auVar20[7] = -(pbVar15[7] == DAT_014e4030._7_1_);
      auVar20[8] = -(pbVar15[8] == DAT_014e4030._8_1_);
      auVar20[9] = -(pbVar15[9] == DAT_014e4030._9_1_);
      auVar20[10] = -(pbVar15[10] == DAT_014e4030._10_1_);
      auVar20[0xb] = -(pbVar15[0xb] == DAT_014e4030._11_1_);
      auVar20[0xc] = -(pbVar15[0xc] == DAT_014e4030._12_1_);
      auVar20[0xd] = -(pbVar15[0xd] == DAT_014e4030._13_1_);
      auVar20[0xe] = -(pbVar15[0xe] == DAT_014e4030._14_1_);
      auVar20[0xf] = -(pbVar15[0xf] == DAT_014e4030._15_1_);
      auVar21[0] = -(pbVar15[0xd] == DAT_014e1610);
      auVar21[1] = -(pbVar15[0xe] == DAT_014e1610._1_1_);
      auVar21[2] = -(pbVar15[0xf] == DAT_014e1610._2_1_);
      auVar21[3] = -(pbVar15[0x10] == DAT_014e1610._3_1_);
      auVar21[4] = -(pbVar15[0x11] == DAT_014e1610._4_1_);
      auVar21[5] = -(pbVar15[0x12] == DAT_014e1610._5_1_);
      auVar21[6] = -(pbVar15[0x13] == DAT_014e1610._6_1_);
      auVar21[7] = -(pbVar15[0x14] == DAT_014e1610._7_1_);
      auVar21[8] = -(pbVar15[0x15] == DAT_014e1610._8_1_);
      auVar21[9] = -(pbVar15[0x16] == DAT_014e1610._9_1_);
      auVar21[10] = -(pbVar15[0x17] == DAT_014e1610._10_1_);
      auVar21[0xb] = -(pbVar15[0x18] == DAT_014e1610._11_1_);
      auVar21[0xc] = -(pbVar15[0x19] == DAT_014e1610._12_1_);
      auVar21[0xd] = -(pbVar15[0x1a] == DAT_014e1610._13_1_);
      auVar21[0xe] = -(pbVar15[0x1b] == DAT_014e1610._14_1_);
      auVar21[0xf] = -(pbVar15[0x1c] == DAT_014e1610._15_1_);
      auVar21 = auVar21 & auVar20;
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
  if (pbVar8 == *(byte **)(puStack_80 + 0x58)) {
LAB_0e3d7888:
    if (iStack_58 == 0) {
      if (((puVar16 == (undefined *)0x0) || (*(int *)(puVar16 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar16 + 0x68) == 0)) goto LAB_0e3d790c;
      lVar9 = *(long *)(puVar16 + 0x68) + 0x38;
    }
    else {
      if (puVar16 == (undefined *)0x0) {
        puVar16 = (undefined *)func_0x048aead0(puVar6 + 0x18);
      }
      lVar9 = FUN_048b0c90(puVar6 + 0x18,puVar16,uStack_54,1);
      if (lVar9 == 0) {
        auStack_188 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_188);
        lVar9 = auStack_188._0_8_;
        if (auStack_188._0_8_ == 0) goto LAB_0e3d790c;
      }
      if ((*(int *)(lVar9 + 0x50) == -0x45dcb126) && (*(long *)(lVar9 + 0x58) != 0)) {
        lVar9 = *(long *)(lVar9 + 0x58) + 0x40;
      }
      else {
LAB_0e3d790c:
        lVar9 = 0;
      }
    }
    uStack_108 = 0;
    puStack_f8 = &UNK_048b4ab0;
    uStack_e8 = 0xd33bd9c5;
    pcStack_f0 = (code *)&UNK_048b49f0;
    uStack_e4 = 1;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    *puVar10 = uStack_48;
    puVar10[1] = uStack_40;
    puVar10[2] = uStack_110;
    *(undefined2 *)(puVar10 + 3) = 0x400;
    *(undefined1 (*) [16])(puVar10 + 4) = (undefined1  [16])0x0;
    puVar10[6] = 0;
    pcStack_170 = (code *)&UNK_048b4ab0;
    pcStack_168 = (code *)&UNK_048b49f0;
    uStack_160 = (undefined *)CONCAT35(uStack_160._5_3_,0x1d33bd9c5);
    uStack_108 = 0;
    auStack_188._8_8_ = puVar10;
    auStack_188._0_8_ = &UNK_048b46e0;
    puStack_118 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_118 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_014d987e;
    uStack_128 = 0x21;
    plStack_120 = (long *)0x1d;
    *(ulong *)((long)puStack_118 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
    *(undefined8 *)((long)puStack_118 + 0x15) = uVar3;
    uVar3 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
    *puStack_118 = _DAT_014d9869;
    puStack_118[1] = uVar3;
    *(undefined1 *)((long)puStack_118 + 0x1d) = 0;
    lVar9 = func_0x048b5060(lVar9,&uStack_128);
    *(undefined **)(lVar9 + 0x20) = &UNK_048b46e0;
    pcVar17 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar9 + 0x20) != auStack_188) {
      puVar10 = (undefined8 *)(lVar9 + 0x28);
      if (*(code **)(lVar9 + 0x40) == (code *)0x0) {
LAB_0e3d7a80:
        uVar3 = auStack_188._8_8_;
        auStack_188._8_8_ = 0;
        *puVar10 = uVar3;
      }
      else {
        (**(code **)(lVar9 + 0x40))(puVar10);
        if (uStack_160._4_1_ != '\0') {
          if (uStack_160._4_1_ != '\x02') goto LAB_0e3d7a80;
          (*pcStack_170)(5,auStack_188 + 8,puVar10);
        }
      }
      *(code **)(lVar9 + 0x38) = pcStack_170;
      *(code **)(lVar9 + 0x40) = pcStack_168;
      *(undefined4 *)(lVar9 + 0x48) = (undefined4)uStack_160;
      *(char *)(lVar9 + 0x4c) = uStack_160._4_1_;
      pcVar17 = pcStack_168;
    }
    if ((uStack_128 & 1) != 0) {
      func_0x0412a280(puStack_118,uStack_128 & 0xfffffffffffffffe);
      pcVar17 = pcStack_168;
    }
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)(auStack_188 + 8);
    }
    if (pcStack_f0 != (code *)0x0) {
      (*pcStack_f0)(&uStack_108);
    }
    uStack_110 = 0;
    uVar18 = 0;
    uVar13 = 0;
  }
  else {
    iVar4 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = FUN_04108328(&DAT_0f550768), iVar5 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar4 == _DAT_0f550754) goto LAB_0e3d7888;
  }
  uStack_b8 = uStack_60;
  lStack_c8 = lStack_70;
  lStack_c0 = lStack_68;
  puStack_d8 = puStack_80;
  uStack_d0 = uStack_78;
  uStack_b0 = 0x1e1bc4d500000004;
  if ((DAT_0f7527d0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f7527d0), iVar4 != 0)) {
    func_0x0e4569a0();
    func_0x0410844d(&DAT_0f7527d0);
  }
  auStack_188._0_4_ = uStack_b0._4_4_;
  auStack_188._8_8_ = 0;
  uStack_178 = (long *)((ulong)uStack_178._4_4_ << 0x20);
  pcStack_170 = (code *)0x2;
  pcStack_168 = (code *)&SUB_048aead0;
  uStack_160 = &UNK_0d89b2d0;
  puStack_158 = &UNK_0e4579f0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_049057f0(&uStack_d0,auStack_188);
  func_0x048aea50(auStack_188);
  puStack_f8 = (undefined *)lStack_c0;
  pcStack_f0 = (code *)uStack_b8;
  uStack_108 = uStack_d0;
  lStack_100 = lStack_c8;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0ef44b00;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = FUN_04108328(&DAT_0f551bc8), iVar4 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_188._0_4_ = _DAT_0f551bb4;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c48;
  plVar11[3] = (long)puVar10;
  plVar11[4] = 0;
  *(undefined1 *)(plVar11 + 5) = 0xff;
  auStack_188._8_8_ = plVar11 + 3;
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  uStack_178 = plVar11;
  func_0x048afd20(&uStack_108,auStack_188);
  plVar11 = uStack_178;
  if (uStack_178 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_178 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_178 + 0x10))(uStack_178);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f7527d0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f7527d0), iVar4 != 0)) {
    func_0x0e4569a0();
    func_0x0410844d(&DAT_0f7527d0);
  }
  if (uStack_b8._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(lStack_c0 + 0x78) + 0x60);
    iVar4 = *piVar12;
    while (iVar4 != (int)uStack_b8) {
      piVar12 = piVar12 + 0x16;
      iVar4 = *piVar12;
    }
    lVar9 = *(long *)(piVar12 + 0xc);
    while (lVar9 != lStack_c8) {
      piVar12 = *(int **)(piVar12 + 0xe);
      lVar9 = *(long *)(piVar12 + 0xc);
    }
  }
  else {
    if (uStack_b8._4_4_ != 1) {
      if (uStack_b8._4_4_ == 0) {
        *(uint *)(lStack_c0 + 0x18) = *(uint *)(lStack_c0 + 0x18) | 0x20000;
      }
      goto LAB_0e3d7d73;
    }
    piVar12 = *(int **)(*(long *)(lStack_c0 + 0x78) + 0x48);
    iVar4 = *piVar12;
    while (iVar4 != (int)uStack_b8) {
      piVar12 = piVar12 + 0x1a;
      iVar4 = *piVar12;
    }
  }
  *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
LAB_0e3d7d73:
  if ((DAT_0f7527d0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f7527d0), iVar4 != 0)) {
    func_0x0e4569a0();
    func_0x0410844d(&DAT_0f7527d0);
  }
  auStack_188._0_4_ = 0xbf75c8f8;
  auStack_188._8_8_ = 0;
  uStack_178 = (long *)CONCAT44(uStack_178._4_4_,1);
  pcStack_170 = (code *)0x0;
  pcStack_168 = (code *)&SUB_048b2190;
  uStack_160 = &SUB_048b06d0;
  puStack_158 = &UNK_0e458330;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_049057f0(&uStack_d0,auStack_188);
  func_0x048aea50(auStack_188);
  puStack_f8 = (undefined *)lStack_c0;
  pcStack_f0 = (code *)uStack_b8;
  uStack_108 = uStack_d0;
  lStack_100 = lStack_c8;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0ef44b00;
  if ((DAT_0f551cb0 == '\0') && (iVar4 = FUN_04108328(&DAT_0f551cb0), iVar4 != 0)) {
    FUN_04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_188._0_4_ = _DAT_0f551c9c;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef46c98;
  plVar11[3] = (long)puVar10;
  *(undefined1 *)(plVar11 + 4) = 0xff;
  auStack_188._8_8_ = plVar11 + 3;
  uStack_128 = 0;
  plStack_120 = (long *)0x0;
  uStack_178 = plVar11;
  func_0x048afd20(&uStack_108,auStack_188);
  plVar11 = uStack_178;
  if (uStack_178 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_178 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_178 + 0x10))(uStack_178);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((uVar13 & 1) != 0) {
    func_0x0412a280(uStack_110,uVar18 | (byte)uVar13 & 0xfe);
  }
  if ((bStack_98 & 1) != 0) {
    func_0x0412a280(uStack_88,CONCAT71(uStack_97,bStack_98) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
