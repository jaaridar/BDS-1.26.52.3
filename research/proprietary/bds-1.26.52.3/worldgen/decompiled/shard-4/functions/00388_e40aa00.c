/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe50aa00 (ELF vaddr 0xe40aa00)
 * Label: callee2-of:0xe3dd790
 * Body:  [[0e50aa00, 0e50abfd] [0e50ac00, 0e50ac41] [0e50ac50, 0e50b5a4]]
 * Ghidra: FUN_0e50aa00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e50aa00(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  int *piVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined1 uStack_15c;
  undefined1 uStack_158;
  undefined1 uStack_154;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  char cStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  char cStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((DAT_0f756708 == '\0') && (iVar7 = FUN_04108328(&DAT_0f756708), iVar7 != 0)) {
    func_0x0e56de70();
    __cxa_atexit(&UNK_048ae800,&DAT_0f756688,0xf53dab8);
    func_0x0410844d(&DAT_0f756708);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f756688 + 4)) * 8);
  do {
    lVar18 = *plVar14;
    if (lVar18 == -1) goto LAB_0e50aa70;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f756688 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_0e50aa70:
    puVar9 = &DAT_0f756688;
    if (iRam000000000f7566e8 != -0x2b3da790) goto LAB_0e50aadd;
LAB_0e50aa9b:
    lVar18 = *(long *)(puVar9 + 0x68);
    if (lVar18 == 0) goto LAB_0e50aadd;
    bVar20 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar16 = lVar18 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar18 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar20) {
      uVar13 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x0e60f640(&uStack_90,param_1,lVar16,uVar13);
    uVar13 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    uStack_48 = uStack_78;
    uStack_40 = uStack_70;
    iVar7 = iStack_68;
    uVar4 = uStack_64;
    cVar5 = cStack_60;
  }
  else {
    puVar9 = (undefined *)plVar14[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e50aa9b;
LAB_0e50aadd:
    func_0x0e60f640(&uStack_90,param_1,&UNK_011e7292,0x12);
    uVar13 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    uStack_48 = uStack_78;
    uStack_40 = uStack_70;
    iVar7 = iStack_68;
    uVar4 = uStack_64;
    cVar5 = cStack_60;
  }
  if (cVar5 != '\0') {
    return;
  }
  if ((DAT_0f756708 == '\0') && (iVar6 = FUN_04108328(&DAT_0f756708), iVar6 != 0)) {
    func_0x0e56de70();
    __cxa_atexit(&UNK_048ae800,&DAT_0f756688,0xf53dab8);
    func_0x0410844d(&DAT_0f756708);
  }
  plVar14 = (long *)(*(long *)(uVar13 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f756688 + 4)) * 8);
  do {
    lVar18 = *plVar14;
    if (lVar18 == -1) goto LAB_0e50abb1;
    plVar14 = (long *)(*(long *)(uVar13 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f756688 + 4));
  if (plVar14 == *(long **)(uVar13 + 0x38)) {
LAB_0e50abb1:
    puVar9 = &DAT_0f756688;
    pbVar10 = *(byte **)(uVar13 + 0x50);
    pbVar15 = *(byte **)(uVar13 + 0x58);
    if (pbVar10 != pbVar15) {
LAB_0e50ac2e:
      do {
        bVar2 = *pbVar10;
        if ((bVar2 & 1) == 0) {
          if (bVar2 >> 1 == 0x1a) goto LAB_0e50ac5a;
        }
        else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0e50ac5a:
          if ((bVar2 & 1) == 0) {
            pbVar17 = pbVar10 + 1;
          }
          else {
            pbVar17 = *(byte **)(pbVar10 + 0x10);
          }
          auVar21[0] = -(*pbVar17 == DAT_014eaba0);
          auVar21[1] = -(pbVar17[1] == DAT_014eaba0._1_1_);
          auVar21[2] = -(pbVar17[2] == DAT_014eaba0._2_1_);
          auVar21[3] = -(pbVar17[3] == DAT_014eaba0._3_1_);
          auVar21[4] = -(pbVar17[4] == DAT_014eaba0._4_1_);
          auVar21[5] = -(pbVar17[5] == DAT_014eaba0._5_1_);
          auVar21[6] = -(pbVar17[6] == DAT_014eaba0._6_1_);
          auVar21[7] = -(pbVar17[7] == DAT_014eaba0._7_1_);
          auVar21[8] = -(pbVar17[8] == DAT_014eaba0._8_1_);
          auVar21[9] = -(pbVar17[9] == DAT_014eaba0._9_1_);
          auVar21[10] = -(pbVar17[10] == DAT_014eaba0._10_1_);
          auVar21[0xb] = -(pbVar17[0xb] == DAT_014eaba0._11_1_);
          auVar21[0xc] = -(pbVar17[0xc] == DAT_014eaba0._12_1_);
          auVar21[0xd] = -(pbVar17[0xd] == DAT_014eaba0._13_1_);
          auVar21[0xe] = -(pbVar17[0xe] == DAT_014eaba0._14_1_);
          auVar21[0xf] = -(pbVar17[0xf] == DAT_014eaba0._15_1_);
          auVar22[0] = -(pbVar17[10] == DAT_014e4ff0);
          auVar22[1] = -(pbVar17[0xb] == DAT_014e4ff0._1_1_);
          auVar22[2] = -(pbVar17[0xc] == DAT_014e4ff0._2_1_);
          auVar22[3] = -(pbVar17[0xd] == DAT_014e4ff0._3_1_);
          auVar22[4] = -(pbVar17[0xe] == DAT_014e4ff0._4_1_);
          auVar22[5] = -(pbVar17[0xf] == DAT_014e4ff0._5_1_);
          auVar22[6] = -(pbVar17[0x10] == DAT_014e4ff0._6_1_);
          auVar22[7] = -(pbVar17[0x11] == DAT_014e4ff0._7_1_);
          auVar22[8] = -(pbVar17[0x12] == DAT_014e4ff0._8_1_);
          auVar22[9] = -(pbVar17[0x13] == DAT_014e4ff0._9_1_);
          auVar22[10] = -(pbVar17[0x14] == DAT_014e4ff0._10_1_);
          auVar22[0xb] = -(pbVar17[0x15] == DAT_014e4ff0._11_1_);
          auVar22[0xc] = -(pbVar17[0x16] == DAT_014e4ff0._12_1_);
          auVar22[0xd] = -(pbVar17[0x17] == DAT_014e4ff0._13_1_);
          auVar22[0xe] = -(pbVar17[0x18] == DAT_014e4ff0._14_1_);
          auVar22[0xf] = -(pbVar17[0x19] == DAT_014e4ff0._15_1_);
          auVar22 = auVar22 & auVar21;
          if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
        }
        pbVar10 = pbVar10 + 0x38;
      } while (pbVar10 != pbVar15);
    }
  }
  else {
    puVar9 = (undefined *)plVar14[2];
    pbVar10 = *(byte **)(uVar13 + 0x50);
    pbVar15 = *(byte **)(uVar13 + 0x58);
    if (pbVar10 != pbVar15) goto LAB_0e50ac2e;
  }
  if (pbVar10 == pbVar15) {
LAB_0e50ac8a:
    if (iVar7 == 0) {
      if (((puVar9 == (undefined *)0x0) || (*(int *)(puVar9 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar9 + 0x68) == 0)) goto LAB_0e50ad05;
      lVar18 = *(long *)(puVar9 + 0x68) + 0x38;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar9 = (undefined *)func_0x048aead0(uVar13 + 0x18);
      }
      auStack_208._0_8_ = FUN_048b0c90(uVar13 + 0x18,puVar9,uVar4,1);
      if (auStack_208._0_8_ == 0) {
        auStack_208 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_208);
        if (auStack_208._0_8_ == 0) goto LAB_0e50ad05;
      }
      if ((*(int *)(auStack_208._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_208._0_8_ + 0x58) != 0)) {
        lVar18 = *(long *)(auStack_208._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e50ad05:
        lVar18 = 0;
      }
    }
    puStack_268 = &UNK_0488e0b0;
    uStack_260 = (code *)0x0;
    uStack_258 = CONCAT35(uStack_258._5_3_,0x48b5725f);
    uStack_278 = 0;
    auStack_208 = (undefined1  [16])0x0;
    pcStack_1f0 = (code *)&UNK_0488e0b0;
    pcStack_1e8 = (code *)0x0;
    uStack_1e0 = CONCAT35(uStack_1e0._5_3_,0x48b5725f);
    puStack_128 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_128 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_138 = 0x21;
    uStack_130 = 0x1a;
    *(ulong *)((long)puStack_128 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_128 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_128 = _DAT_013bbacd;
    puStack_128[1] = uVar3;
    *(undefined1 *)((long)puStack_128 + 0x1a) = 0;
    lVar18 = func_0x048b5060(lVar18,&uStack_138);
    *(undefined8 *)(lVar18 + 0x20) = 0;
    if ((undefined1 *)(lVar18 + 0x20) == auStack_208) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar18 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar18 + 0x28);
        (**(code **)(lVar18 + 0x40))(puVar19);
        if (uStack_1e0._4_1_ != '\0') {
          if (uStack_1e0._4_1_ == '\x02') {
            (*pcStack_1f0)(5,auStack_208 + 8,puVar19);
          }
          else {
            uVar3 = auStack_208._8_8_;
            auStack_208._8_8_ = 0;
            *puVar19 = uVar3;
          }
        }
      }
      *(code **)(lVar18 + 0x38) = pcStack_1f0;
      *(code **)(lVar18 + 0x40) = pcStack_1e8;
      *(undefined4 *)(lVar18 + 0x48) = (undefined4)uStack_1e0;
      *(char *)(lVar18 + 0x4c) = uStack_1e0._4_1_;
      pcVar12 = pcStack_1e8;
    }
    if ((uStack_138 & 1) != 0) {
      func_0x0412a280(puStack_128,uStack_138 & 0xfffffffffffffffe);
      pcVar12 = pcStack_1e8;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_208 + 8);
    }
    if (uStack_260 != (code *)0x0) {
      (*uStack_260)(&uStack_278);
    }
  }
  else {
    iVar6 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550ad8 == '\0') &&
       (puStack_210 = puVar9, iVar8 = FUN_04108328(&DAT_0f550ad8), puVar9 = puStack_210, iVar8 != 0)
       ) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
      puVar9 = puStack_210;
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0e50ac8a;
  }
  uStack_f8 = uStack_58;
  uStack_f0 = uStack_50;
  uStack_e8 = uStack_48;
  uStack_e0 = uStack_40;
  uStack_d8 = 0x5127f14d00000002;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  pcStack_1e8 = (code *)0x0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  pcStack_1f0 = (code *)0x0;
  auStack_208 = ZEXT816(0);
  uStack_198 = 0x3f600000;
  uStack_100 = uVar13;
  cStack_d0 = cVar5;
  func_0x048afb10(&uStack_1c8,8);
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_160 = 0xff00;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar19 = &UNK_0f4c2dc0;
  uVar3 = auStack_208._0_8_;
  auStack_208._0_8_ = puVar19;
  if ((long *)uVar3 != (long *)0x0) {
    (**(code **)(*(long *)uVar3 + 8))();
  }
  if ((uStack_1e0 & 1) != 0) {
    func_0x0412a280(uStack_1d0,uStack_1e0 & 0xfffffffffffffffe);
  }
  uStack_1e0 = CONCAT26(uStack_1e0._6_2_,0x6570797408);
  if ((DAT_0f756670 == '\0') && (iVar7 = FUN_04108328(&DAT_0f756670), iVar7 != 0)) {
    func_0x0e56dd30();
    func_0x0410844d(&DAT_0f756670);
  }
  uStack_278 = CONCAT44(uStack_278._4_4_,uStack_d8._4_4_);
  lStack_270 = 0;
  puStack_268 = (undefined *)CONCAT44(puStack_268._4_4_,3);
  uStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0e60e1f0;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &UNK_0e609ce0;
  puStack_238 = &UNK_0e6103c0;
  puStack_230 = &UNK_0e6103d0;
  uStack_228 = 0;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  func_0x048b05a0(&uStack_f8,&uStack_278);
  plVar14 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_218 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar14);
    }
  }
  puStack_128 = (undefined8 *)uStack_e8;
  uStack_120 = uStack_e0;
  uStack_138 = uStack_f8;
  uStack_130 = uStack_f0;
  func_0x0e610150(&uStack_278,&uStack_138,auStack_208);
  if (uStack_260._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)((long)puStack_268 + 0x78) + 0x60);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_260) {
      piVar11 = piVar11 + 0x16;
      iVar7 = *piVar11;
    }
    lVar18 = *(long *)(piVar11 + 0xc);
    while (lVar18 != lStack_270) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar18 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (uStack_260._4_4_ != 1) {
      if (uStack_260._4_4_ == 0) {
        *(uint *)((long)puStack_268 + 0x18U) = *(uint *)((long)puStack_268 + 0x18U) | 0x90000;
      }
      goto LAB_0e50b153;
    }
    piVar11 = *(int **)(*(long *)((long)puStack_268 + 0x78) + 0x48);
    iVar7 = *piVar11;
    while (iVar7 != (int)uStack_260) {
      piVar11 = piVar11 + 0x1a;
      iVar7 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
LAB_0e50b153:
  uStack_c8 = uStack_100;
  uStack_c0 = uStack_f8;
  uStack_b8 = uStack_f0;
  uStack_b0 = uStack_e8;
  uStack_a8 = uStack_e0;
  uStack_a0 = uStack_d8;
  cStack_98 = cStack_d0;
  func_0x048b0bc0(auStack_208);
  func_0x0e610420(auStack_208,&uStack_c8,&UNK_014738bb);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar12 = &UNK_0ef46ce8;
  if (pcStack_1f0 != (code *)0x0) {
    lVar18 = *(long *)pcStack_1f0;
    pcStack_1f0 = pcVar12;
    (**(code **)(lVar18 + 8))();
    pcVar12 = pcStack_1f0;
  }
  pcStack_1f0 = pcVar12;
  uStack_278 = CONCAT44(uStack_278._4_4_,(undefined4)uStack_1f8);
  lStack_270 = 0;
  puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
  uStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0490ce30;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_0490cb20;
  puStack_238 = &UNK_0e6107b0;
  puStack_230 = &UNK_0e610910;
  uStack_228 = 0;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  func_0x048b05a0(auStack_208._8_8_,&uStack_278);
  plVar14 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_218 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e6106e0(auStack_208);
  cStack_108 = cStack_98;
  uStack_118 = uStack_a8;
  uStack_110 = uStack_a0;
  puStack_128 = (undefined8 *)uStack_b8;
  uStack_120 = uStack_b0;
  uStack_138 = uStack_c8;
  uStack_130 = uStack_c0;
  func_0x048b0bc0(&pcStack_1f0);
  func_0x0e610420(auStack_208,&uStack_138,&UNK_012b8788);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar12 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar12 = &UNK_0ef46ce8;
  if (pcStack_1f0 != (code *)0x0) {
    lVar18 = *(long *)pcStack_1f0;
    pcStack_1f0 = pcVar12;
    (**(code **)(lVar18 + 8))();
    pcVar12 = pcStack_1f0;
  }
  pcStack_1f0 = pcVar12;
  uStack_278 = CONCAT44(uStack_278._4_4_,(undefined4)uStack_1f8);
  lStack_270 = 0;
  puStack_268 = (undefined *)((ulong)puStack_268 & 0xffffffff00000000);
  uStack_260 = (code *)0x1;
  uStack_258 = 0;
  puStack_250 = &UNK_0490ce30;
  puStack_248 = &SUB_048b06d0;
  puStack_240 = &SUB_0490cb20;
  puStack_238 = &UNK_0e610ae0;
  puStack_230 = &UNK_0e610c40;
  uStack_228 = 0;
  uStack_220 = 0;
  plStack_218 = (long *)0x0;
  func_0x048b05a0(auStack_208._8_8_,&uStack_278);
  plVar14 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_218 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0e6106e0(auStack_208);
  func_0x048b0bc0(&pcStack_1f0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
