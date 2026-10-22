/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3befd0 (ELF vaddr 0xe2befd0)
 * Label: caller-of-callee
 * Body:  [[0e3befd0, 0e3bf1d1] [0e3bf1e0, 0e3bf57e] [0e3bf580, 0e3bf5b1] [0e3bf5c0, 0e3bfd53]]
 * Ghidra: FUN_0e3befd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3befd0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e3c1920();
  if ((DAT_0f752080 == '\0') && (iVar5 = func_0x04108328(&DAT_0f752080), iVar5 != 0)) {
    func_0x0e42d030();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f752000,0xf53dab8);
    func_0x0410844d(&DAT_0f752080);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f752000 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e3bf050;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f752000 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3bf050:
    puVar7 = &DAT_0f752000;
    if (iRam000000000f752060 != -0x2b3da790) goto LAB_0e3bf0bd;
LAB_0e3bf07b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0e3bf0bd;
    bVar17 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar17) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar17) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e42d7f0(&uStack_1d0,param_1,lVar12,uVar10);
    uVar10 = uStack_1d0;
  }
  else {
    puVar7 = (undefined *)plVar11[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e3bf07b;
LAB_0e3bf0bd:
    func_0x0e42d7f0(&uStack_1d0,param_1,&UNK_014424e5,0x16);
    uVar10 = uStack_1d0;
  }
  if (cStack_1a0 != '\0') {
    return;
  }
  uStack_1d0 = uVar10;
  if ((DAT_0f752080 == '\0') && (iVar5 = func_0x04108328(&DAT_0f752080), iVar5 != 0)) {
    func_0x0e42d030();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f752000,0xf53dab8);
    func_0x0410844d(&DAT_0f752080);
  }
  plVar11 = (long *)(*(long *)(uVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f752000 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e3bf150;
    plVar11 = (long *)(*(long *)(uVar10 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f752000 + 4));
  if (plVar11 == *(long **)(uVar10 + 0x38)) {
LAB_0e3bf150:
    puVar7 = &DAT_0f752000;
  }
  else {
    puVar7 = (undefined *)plVar11[2];
  }
  for (pbVar8 = *(byte **)(uStack_1d0 + 0x50); pbVar8 != *(byte **)(uStack_1d0 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3bf1ea;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e3bf1ea:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar8 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar8 + 0x10);
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
  if (pbVar8 == *(byte **)(uStack_1d0 + 0x58)) {
LAB_0e3bf218:
    uVar4 = uStack_1a4;
    if (iStack_1a8 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e3bf2a9;
      lVar14 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(uVar10 + 0x18);
      }
      auStack_198._0_8_ = func_0x048b0c90(uVar10 + 0x18,puVar7,uVar4,1);
      if (auStack_198._0_8_ == 0) {
        auStack_198 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_198);
        if (auStack_198._0_8_ == 0) goto LAB_0e3bf2a9;
      }
      if ((*(int *)(auStack_198._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_198._0_8_ + 0x58) != 0)) {
        lVar14 = *(long *)(auStack_198._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e3bf2a9:
        lVar14 = 0;
      }
    }
    puStack_260 = &UNK_0488e0b0;
    pcStack_258 = (code *)0x0;
    uStack_250 = CONCAT35(uStack_250._5_3_,0x48b5725f);
    uStack_270 = 0;
    auStack_198 = (undefined1  [16])0x0;
    pcStack_180 = (code *)&UNK_0488e0b0;
    pcStack_178 = (code *)0x0;
    uStack_170 = 0x48b5725f;
    cStack_16c = '\0';
    puStack_1f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1f8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_208 = 0x21;
    uStack_200 = 0x1a;
    *(ulong *)((long)puStack_1f8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1f8 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1f8 = _DAT_013bbacd;
    puStack_1f8[1] = uVar3;
    *(undefined1 *)((long)puStack_1f8 + 0x1a) = 0;
    lVar14 = FUN_048b5060(lVar14,&uStack_208);
    *(undefined8 *)(lVar14 + 0x20) = 0;
    if ((undefined1 *)(lVar14 + 0x20) == auStack_198) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar14 + 0x28);
        (**(code **)(lVar14 + 0x40))(puVar16);
        if (cStack_16c != '\0') {
          if (cStack_16c == '\x02') {
            (*pcStack_180)(5,auStack_198 + 8,puVar16);
          }
          else {
            uVar3 = auStack_198._8_8_;
            auStack_198._8_8_ = 0;
            *puVar16 = uVar3;
          }
        }
      }
      *(code **)(lVar14 + 0x38) = pcStack_180;
      *(code **)(lVar14 + 0x40) = pcStack_178;
      *(undefined4 *)(lVar14 + 0x48) = uStack_170;
      *(char *)(lVar14 + 0x4c) = cStack_16c;
      pcVar9 = pcStack_178;
    }
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
      pcVar9 = pcStack_178;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_198 + 8);
    }
    if (pcStack_258 != (code *)0x0) {
      (*pcStack_258)(&uStack_270);
    }
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e3bf218;
  }
  uStack_78 = uStack_1c8;
  uStack_70 = uStack_1c0;
  uStack_68 = uStack_1b8;
  uStack_60 = uStack_1b0;
  uVar3 = CONCAT71(uStack_19f,cStack_1a0);
  if ((DAT_0f752080 == '\0') && (iVar5 = func_0x04108328(&DAT_0f752080), iVar5 != 0)) {
    func_0x0e42d030();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f752000,0xf53dab8);
    func_0x0410844d(&DAT_0f752080);
  }
  lStack_c0 = uStack_1d0 + 0x18;
  plVar11 = (long *)(*(long *)(uStack_1d0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_1d0 + 0x20) -
                                         *(long *)(uStack_1d0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f752000 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    uStack_b8 = uVar3;
    if (lVar14 == -1) goto LAB_0e3bf530;
    plVar11 = (long *)(*(long *)(uStack_1d0 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(uStack_1d0 + 0x30) + 8 + lVar14 * 0x18) !=
           *(uint *)(_DAT_0f752000 + 4));
  if (plVar11 == *(long **)(uStack_1d0 + 0x38)) {
LAB_0e3bf530:
    puVar7 = &DAT_0f752000;
    pbVar8 = *(byte **)(uStack_1d0 + 0x50);
    pbVar13 = *(byte **)(uStack_1d0 + 0x58);
    if (pbVar8 != pbVar13) {
LAB_0e3bf59e:
      do {
        bVar2 = *pbVar8;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x24) goto LAB_0e3bf5ca;
        }
        else if (*(long *)(pbVar8 + 8) == 0x24) {
LAB_0e3bf5ca:
          if ((bVar2 & 1) == 0) {
            pbVar15 = pbVar8 + 1;
          }
          else {
            pbVar15 = *(byte **)(pbVar8 + 0x10);
          }
          iVar5 = func_0x0eee3000(&DAT_014518a9,pbVar15,0x24);
          if (iVar5 == 0) break;
        }
        pbVar8 = pbVar8 + 0x38;
      } while (pbVar8 != pbVar13);
    }
  }
  else {
    puVar7 = (undefined *)plVar11[2];
    pbVar8 = *(byte **)(uStack_1d0 + 0x50);
    pbVar13 = *(byte **)(uStack_1d0 + 0x58);
    if (pbVar8 != pbVar13) goto LAB_0e3bf59e;
  }
  if (pbVar8 != pbVar13) {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      FUN_048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar5 != _DAT_0f550754) goto LAB_0e3bf8b1;
  }
  lVar14 = lStack_c0;
  if (iStack_1a8 == 0) {
    if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e3bf689;
    lVar14 = *(long *)(puVar7 + 0x68) + 0x38;
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)func_0x048aead0();
    }
    lVar14 = func_0x048b0c90(lVar14,puVar7,uStack_1a4,1);
    if (lVar14 == 0) {
      auStack_198 = ZEXT816(0);
      func_0x048b0d20(auStack_198);
      lVar14 = auStack_198._0_8_;
      if (auStack_198._0_8_ == 0) goto LAB_0e3bf689;
    }
    if ((*(int *)(lVar14 + 0x50) == -0x45dcb126) && (*(long *)(lVar14 + 0x58) != 0)) {
      lVar14 = *(long *)(lVar14 + 0x58) + 0x40;
    }
    else {
LAB_0e3bf689:
      lVar14 = 0;
    }
  }
  uStack_270 = 0;
  puStack_260 = &UNK_048b4ab0;
  pcStack_258 = (code *)&UNK_048b49f0;
  uStack_250 = CONCAT35(uStack_250._5_3_,0x1d33bd9c5);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar16 = 0x20746e65696c432a;
  puVar16[1] = 0x6f4420656d6f6942;
  puVar16[2] = 0x746e656d7563;
  *(undefined2 *)(puVar16 + 3) = 1;
  puVar16[4] = 0x1002800150001;
  puVar16[5] = &UNK_01254d89;
  puVar16[6] = &UNK_01254d89;
  pcStack_180 = (code *)&UNK_048b4ab0;
  pcStack_178 = (code *)&UNK_048b49f0;
  uStack_170 = 0xd33bd9c5;
  cStack_16c = '\x01';
  uStack_270 = 0;
  auStack_198._8_8_ = puVar16;
  auStack_198._0_8_ = &UNK_048b46e0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_014518c1;
  uStack_208 = 0x29;
  uStack_200 = 0x24;
  puVar16[2] = _DAT_014518b9;
  puVar16[3] = uVar3;
  uVar3 = _UNK_014518b1;
  *puVar16 = _DAT_014518a9;
  puVar16[1] = uVar3;
  *(undefined4 *)(puVar16 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar16 + 0x24) = 0;
  puStack_1f8 = puVar16;
  lVar14 = FUN_048b5060(lVar14,&uStack_208);
  *(undefined **)(lVar14 + 0x20) = &UNK_048b46e0;
  pcVar9 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar14 + 0x20) != auStack_198) {
    puVar16 = (undefined8 *)(lVar14 + 0x28);
    if (*(code **)(lVar14 + 0x40) == (code *)0x0) {
LAB_0e3bf82c:
      uVar3 = auStack_198._8_8_;
      auStack_198._8_8_ = 0;
      *puVar16 = uVar3;
    }
    else {
      (**(code **)(lVar14 + 0x40))(puVar16);
      if (cStack_16c != '\0') {
        if (cStack_16c != '\x02') goto LAB_0e3bf82c;
        (*pcStack_180)(5,auStack_198 + 8,puVar16);
      }
    }
    *(code **)(lVar14 + 0x38) = pcStack_180;
    *(code **)(lVar14 + 0x40) = pcStack_178;
    *(undefined4 *)(lVar14 + 0x48) = uStack_170;
    *(char *)(lVar14 + 0x4c) = cStack_16c;
    pcVar9 = pcStack_178;
  }
  if ((uStack_208 & 1) != 0) {
    func_0x0412a280(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
    pcVar9 = pcStack_178;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_198 + 8);
  }
  if (pcStack_258 != (code *)0x0) {
    (*pcStack_258)(&uStack_270);
  }
LAB_0e3bf8b1:
  uStack_48 = uStack_68;
  uStack_40 = uStack_60;
  uStack_58 = uStack_78;
  uStack_50 = uStack_70;
  uStack_b0 = uStack_1d0;
  uStack_a8 = uStack_78;
  uStack_a0 = uStack_70;
  uStack_98 = uStack_68;
  uStack_90 = uStack_60;
  iStack_88 = iStack_1a8;
  uStack_84 = uStack_1a4;
  uStack_80 = uStack_b8;
  func_0x0e42e370(auStack_198,&uStack_b0,&UNK_0133af77,0x16);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4ba3b8;
  if (pcStack_180 != (code *)0x0) {
    lVar14 = *(long *)pcStack_180;
    pcStack_180 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_180;
  }
  pcStack_180 = pcVar9;
  uStack_270 = CONCAT44(uStack_270._4_4_,uStack_188);
  uStack_268 = 0;
  puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffff00000000);
  pcStack_258 = (code *)0x1;
  uStack_250 = 0;
  puStack_248 = &UNK_0e42eb60;
  puStack_240 = &SUB_048b06d0;
  puStack_238 = &UNK_0e42a930;
  puStack_230 = &UNK_0e42ec20;
  puStack_228 = &UNK_0e42ef20;
  uStack_220 = 0;
  uStack_218 = 0;
  plStack_210 = (long *)0x0;
  func_0x048b05a0(auStack_198._8_8_,&uStack_270);
  plVar11 = plStack_210;
  if (plStack_210 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_210 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_210 + 0x10))(plStack_210);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0e42e620(auStack_198);
  uStack_1d8 = (undefined1)uStack_80;
  uStack_1e0 = CONCAT44(uStack_84,iStack_88);
  uStack_1e8 = uStack_90;
  puStack_1f8 = (undefined8 *)uStack_a0;
  uStack_1f0 = uStack_98;
  uStack_208 = uStack_b0;
  uStack_200 = uStack_a8;
  func_0x048b0bc0(&pcStack_180);
  func_0x0e42e370(auStack_198,&uStack_208,&UNK_013771cd,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0ef44b00;
  if (pcStack_180 != (code *)0x0) {
    lVar14 = *(long *)pcStack_180;
    pcStack_180 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_180;
  }
  pcStack_180 = pcVar9;
  uStack_270 = CONCAT44(uStack_270._4_4_,uStack_188);
  uStack_268 = 0;
  puStack_260 = (undefined *)((ulong)puStack_260 & 0xffffffff00000000);
  pcStack_258 = (code *)0x1;
  uStack_250 = 0;
  puStack_248 = &UNK_048b3f30;
  puStack_240 = &SUB_048b06d0;
  puStack_238 = &SUB_048b2190;
  puStack_230 = &UNK_0e42f390;
  puStack_228 = &UNK_0e42f560;
  uStack_220 = 0;
  uStack_218 = 0;
  plStack_210 = (long *)0x0;
  func_0x048b05a0(auStack_198._8_8_,&uStack_270);
  plVar11 = plStack_210;
  if (plStack_210 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_210 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_210 + 0x10))(plStack_210);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0e42e620(auStack_198);
  func_0x048b0bc0(&pcStack_180);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
