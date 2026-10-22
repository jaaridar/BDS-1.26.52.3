/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2cf880 (ELF vaddr 0xe1cf880)
 * Label: caller-of-callee
 * Body:  [[0e2cf880, 0e2cfa81] [0e2cfa90, 0e2cfe6e] [0e2cfe70, 0e2cfea1] [0e2cfeb0, 0e2d0670]]
 * Ghidra: FUN_0e2cf880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2cf880(long param_1)

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
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined8 *puStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  int iStack_188;
  undefined4 uStack_184;
  char cStack_180;
  undefined7 uStack_17f;
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  code *pcStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  char cStack_14c;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0e2d42f0();
  if ((DAT_0f74f300 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74f300), iVar5 != 0)) {
    func_0x0e38ba40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f280,0xf53dab8);
    func_0x0410844d(&DAT_0f74f300);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74f280 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2cf900;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74f280 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e2cf900:
    puVar7 = &DAT_0f74f280;
    if (iRam000000000f74f2e0 != -0x2b3da790) goto LAB_0e2cf96d;
LAB_0e2cf92b:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0e2cf96d;
    bVar17 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar17) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar17) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e38c0b0(&uStack_1b0,param_1,lVar12,uVar10);
    uVar10 = uStack_1b0;
  }
  else {
    puVar7 = (undefined *)plVar11[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e2cf92b;
LAB_0e2cf96d:
    func_0x0e38c0b0(&uStack_1b0,param_1,&DAT_012860a4,0x1b);
    uVar10 = uStack_1b0;
  }
  if (cStack_180 != '\0') {
    return;
  }
  uStack_1b0 = uVar10;
  if ((DAT_0f74f300 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74f300), iVar5 != 0)) {
    func_0x0e38ba40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f280,0xf53dab8);
    func_0x0410844d(&DAT_0f74f300);
  }
  plVar11 = (long *)(*(long *)(uVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar10 + 0x20) - *(long *)(uVar10 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74f280 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2cfa00;
    plVar11 = (long *)(*(long *)(uVar10 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(uVar10 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f74f280 + 4));
  if (plVar11 == *(long **)(uVar10 + 0x38)) {
LAB_0e2cfa00:
    puVar7 = &DAT_0f74f280;
  }
  else {
    puVar7 = (undefined *)plVar11[2];
  }
  for (pbVar8 = *(byte **)(uStack_1b0 + 0x50); pbVar8 != *(byte **)(uStack_1b0 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e2cfa9a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e2cfa9a:
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
  if (pbVar8 == *(byte **)(uStack_1b0 + 0x58)) {
LAB_0e2cfac8:
    uVar4 = uStack_184;
    if (iStack_188 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e2cfb59;
      lVar14 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(uVar10 + 0x18);
      }
      auStack_178._0_8_ = func_0x048b0c90(uVar10 + 0x18,puVar7,uVar4,1);
      if (auStack_178._0_8_ == 0) {
        auStack_178 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_178);
        if (auStack_178._0_8_ == 0) goto LAB_0e2cfb59;
      }
      if ((*(int *)(auStack_178._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_178._0_8_ + 0x58) != 0)) {
        lVar14 = *(long *)(auStack_178._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2cfb59:
        lVar14 = 0;
      }
    }
    puStack_248 = &UNK_0488e0b0;
    pcStack_240 = (code *)0x0;
    uStack_238 = CONCAT35(uStack_238._5_3_,0x48b5725f);
    uStack_258 = 0;
    auStack_178 = (undefined1  [16])0x0;
    pcStack_160 = (code *)&UNK_0488e0b0;
    pcStack_158 = (code *)0x0;
    uStack_150 = 0x48b5725f;
    cStack_14c = '\0';
    puStack_1d8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1d8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_1e8 = 0x21;
    uStack_1e0 = 0x1a;
    *(ulong *)((long)puStack_1d8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1d8 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1d8 = _DAT_013bbacd;
    puStack_1d8[1] = uVar3;
    *(undefined1 *)((long)puStack_1d8 + 0x1a) = 0;
    lVar14 = func_0x048b5060(lVar14,&uStack_1e8);
    *(undefined8 *)(lVar14 + 0x20) = 0;
    if ((undefined1 *)(lVar14 + 0x20) == auStack_178) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar14 + 0x28);
        (**(code **)(lVar14 + 0x40))(puVar16);
        if (cStack_14c != '\0') {
          if (cStack_14c == '\x02') {
            (*pcStack_160)(5,auStack_178 + 8,puVar16);
          }
          else {
            uVar3 = auStack_178._8_8_;
            auStack_178._8_8_ = 0;
            *puVar16 = uVar3;
          }
        }
      }
      *(code **)(lVar14 + 0x38) = pcStack_160;
      *(code **)(lVar14 + 0x40) = pcStack_158;
      *(undefined4 *)(lVar14 + 0x48) = uStack_150;
      *(char *)(lVar14 + 0x4c) = cStack_14c;
      pcVar9 = pcStack_158;
    }
    if ((uStack_1e8 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
      pcVar9 = pcStack_158;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_178 + 8);
    }
    if (pcStack_240 != (code *)0x0) {
      (*pcStack_240)(&uStack_258);
    }
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e2cfac8;
  }
  uStack_58 = uStack_1a8;
  uStack_50 = uStack_1a0;
  uStack_48 = uStack_198;
  uStack_40 = uStack_190;
  uStack_98 = CONCAT71(uStack_17f,cStack_180);
  puStack_1f0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_1f0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_012860b7;
  *(ulong *)((long)puStack_1f0 + 0xb) = CONCAT35(_UNK_012860b4,_DAT_012860af);
  *(undefined8 *)((long)puStack_1f0 + 0x13) = uVar3;
  uVar3 = CONCAT53(_DAT_012860af,_UNK_012860ac);
  *puStack_1f0 = _DAT_012860a4;
  puStack_1f0[1] = uVar3;
  *(undefined1 *)((long)puStack_1f0 + 0x1b) = 0;
  if ((DAT_0f74f300 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74f300), iVar5 != 0)) {
    func_0x0e38ba40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74f280,0xf53dab8);
    func_0x0410844d(&DAT_0f74f300);
  }
  lStack_a0 = uStack_1b0 + 0x18;
  plVar11 = (long *)(*(long *)(uStack_1b0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_1b0 + 0x20) -
                                         *(long *)(uStack_1b0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f74f280 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e2cfe28;
    plVar11 = (long *)(*(long *)(uStack_1b0 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(uStack_1b0 + 0x30) + 8 + lVar14 * 0x18) !=
           *(uint *)(_DAT_0f74f280 + 4));
  if (plVar11 == *(long **)(uStack_1b0 + 0x38)) {
LAB_0e2cfe28:
    puVar7 = &DAT_0f74f280;
    pbVar8 = *(byte **)(uStack_1b0 + 0x50);
    pbVar13 = *(byte **)(uStack_1b0 + 0x58);
    if (pbVar8 != pbVar13) {
LAB_0e2cfe8e:
      do {
        bVar2 = *pbVar8;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x24) goto LAB_0e2cfeba;
        }
        else if (*(long *)(pbVar8 + 8) == 0x24) {
LAB_0e2cfeba:
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
    pbVar8 = *(byte **)(uStack_1b0 + 0x50);
    pbVar13 = *(byte **)(uStack_1b0 + 0x58);
    if (pbVar8 != pbVar13) goto LAB_0e2cfe8e;
  }
  if (pbVar8 != pbVar13) {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550768), iVar6 != 0)) {
      func_0x048b46f0(&DAT_0f550750);
      func_0x0410844d(&DAT_0f550768);
    }
    bVar17 = true;
    puVar16 = puStack_1f0;
    if (iVar5 != _DAT_0f550754) goto LAB_0e2d01aa;
  }
  lVar14 = lStack_a0;
  if (iStack_188 == 0) {
    if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e2cff84;
    lVar14 = *(long *)(puVar7 + 0x68) + 0x38;
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)func_0x048aead0(lStack_a0);
    }
    lVar14 = func_0x048b0c90(lVar14,puVar7,uStack_184,1);
    if (lVar14 == 0) {
      auStack_178 = ZEXT816(0);
      func_0x048b0d20(auStack_178);
      lVar14 = auStack_178._0_8_;
      if (auStack_178._0_8_ == 0) goto LAB_0e2cff84;
    }
    if ((*(int *)(lVar14 + 0x50) == -0x45dcb126) && (*(long *)(lVar14 + 0x58) != 0)) {
      lVar14 = *(long *)(lVar14 + 0x58) + 0x40;
    }
    else {
LAB_0e2cff84:
      lVar14 = 0;
    }
  }
  uStack_258 = 0;
  puStack_248 = &UNK_048b4ab0;
  pcStack_240 = (code *)&UNK_048b49f0;
  uStack_238 = CONCAT35(uStack_238._5_3_,0x1d33bd9c5);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar16 = 0x21;
  puVar16[1] = 0x1b;
  puVar16[2] = puStack_1f0;
  *(undefined2 *)(puVar16 + 3) = 0x300;
  puVar16[4] = 0x1005000150001;
  puVar16[5] = &UNK_01254d89;
  puVar16[6] = &UNK_01254d89;
  pcStack_160 = (code *)&UNK_048b4ab0;
  pcStack_158 = (code *)&UNK_048b49f0;
  uStack_150 = 0xd33bd9c5;
  cStack_14c = '\x01';
  uStack_258 = 0;
  auStack_178._8_8_ = puVar16;
  auStack_178._0_8_ = &UNK_048b46e0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_014518c1;
  uStack_1e8 = 0x29;
  uStack_1e0 = 0x24;
  puVar16[2] = _DAT_014518b9;
  puVar16[3] = uVar3;
  uVar3 = _UNK_014518b1;
  *puVar16 = _DAT_014518a9;
  puVar16[1] = uVar3;
  *(undefined4 *)(puVar16 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar16 + 0x24) = 0;
  puStack_1d8 = puVar16;
  lVar14 = func_0x048b5060(lVar14,&uStack_1e8);
  *(undefined **)(lVar14 + 0x20) = &UNK_048b46e0;
  pcVar9 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar14 + 0x20) != auStack_178) {
    puVar16 = (undefined8 *)(lVar14 + 0x28);
    if (*(code **)(lVar14 + 0x40) == (code *)0x0) {
LAB_0e2d011b:
      uVar3 = auStack_178._8_8_;
      auStack_178._8_8_ = 0;
      *puVar16 = uVar3;
    }
    else {
      (**(code **)(lVar14 + 0x40))(puVar16);
      if (cStack_14c != '\0') {
        if (cStack_14c != '\x02') goto LAB_0e2d011b;
        (*pcStack_160)(5,auStack_178 + 8,puVar16);
      }
    }
    *(code **)(lVar14 + 0x38) = pcStack_160;
    *(code **)(lVar14 + 0x40) = pcStack_158;
    *(undefined4 *)(lVar14 + 0x48) = uStack_150;
    *(char *)(lVar14 + 0x4c) = cStack_14c;
    pcVar9 = pcStack_158;
  }
  if ((uStack_1e8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
    pcVar9 = pcStack_158;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_178 + 8);
  }
  if (pcStack_240 != (code *)0x0) {
    (*pcStack_240)(&uStack_258);
  }
  bVar17 = false;
  puVar16 = (undefined8 *)0x0;
LAB_0e2d01aa:
  uStack_90 = uStack_1b0;
  uStack_88 = uStack_58;
  uStack_80 = uStack_50;
  uStack_78 = uStack_48;
  uStack_70 = uStack_40;
  iStack_68 = iStack_188;
  uStack_64 = uStack_184;
  uStack_60 = uStack_98;
  func_0x0e38cc20(auStack_178,&uStack_90,&UNK_013771cd,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0ef44b00;
  if (pcStack_160 != (code *)0x0) {
    lVar14 = *(long *)pcStack_160;
    pcStack_160 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_160;
  }
  pcStack_160 = pcVar9;
  uStack_258 = CONCAT44(uStack_258._4_4_,uStack_168);
  uStack_250 = 0;
  puStack_248 = (undefined *)((ulong)puStack_248 & 0xffffffff00000000);
  pcStack_240 = (code *)0x1;
  uStack_238 = 0;
  puStack_230 = &UNK_048b3f30;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &SUB_048b2190;
  puStack_218 = &UNK_0e38d220;
  puStack_210 = &UNK_0e38d3e0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(auStack_178._8_8_,&uStack_258);
  plVar11 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e38cf20(auStack_178);
  uStack_1b8 = (undefined1)uStack_60;
  uStack_1c0 = CONCAT44(uStack_64,iStack_68);
  uStack_1c8 = uStack_70;
  puStack_1d8 = (undefined8 *)uStack_80;
  uStack_1d0 = uStack_78;
  uStack_1e8 = uStack_90;
  uStack_1e0 = uStack_88;
  FUN_048b0bc0(&pcStack_160);
  func_0x0e38cc20(auStack_178,&uStack_1e8,&UNK_012b4b41,0x17);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b7870;
  if (pcStack_160 != (code *)0x0) {
    lVar14 = *(long *)pcStack_160;
    pcStack_160 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_160;
  }
  pcStack_160 = pcVar9;
  uStack_258 = CONCAT44(uStack_258._4_4_,uStack_168);
  uStack_250 = 0;
  puStack_248 = (undefined *)((ulong)puStack_248 & 0xffffffff00000000);
  pcStack_240 = (code *)0x1;
  uStack_238 = 0;
  puStack_230 = &UNK_0e38d7f0;
  puStack_228 = &SUB_048b06d0;
  puStack_220 = &UNK_0e3844d0;
  puStack_218 = &UNK_0e38d8b0;
  puStack_210 = &UNK_0e38dab0;
  uStack_208 = 0;
  uStack_200 = 0;
  plStack_1f8 = (long *)0x0;
  func_0x048b05a0(auStack_178._8_8_,&uStack_258);
  plVar11 = plStack_1f8;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e38cf20(auStack_178);
  FUN_048b0bc0(&pcStack_160);
  if (bVar17) {
    thunk_FUN_0ee326a0(puVar16,0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12860a4  Camera Preset File v1.21.80
 * 0x12860af  et File v1.21.80
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
