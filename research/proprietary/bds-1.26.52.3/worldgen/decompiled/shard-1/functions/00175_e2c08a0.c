/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3c08a0 (ELF vaddr 0xe2c08a0)
 * Label: caller-of-callee
 * Body:  [[0e3c08a0, 0e3c0970] [0e3c0980, 0e3c09c2] [0e3c09d0, 0e3c1131] [0e3c1140, 0e3c1415] [0e3c1420, 0e3c17f7]]
 * Ghidra: FUN_0e3c08a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3c08a0(long param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined2 uStack_27f;
  undefined1 uStack_27d;
  undefined4 uStack_27c;
  long *plStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined4 uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined2 uStack_208;
  undefined2 uStack_206;
  uint uStack_204;
  uint uStack_200;
  undefined1 uStack_1fc;
  ulong uStack_1f8;
  long *plStack_1f0;
  undefined8 *puStack_1e8;
  byte bStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined2 uStack_1cf;
  undefined5 uStack_1cd;
  long lStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  char cStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = func_0x0e34cf30(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar12 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e4237a0(&lStack_a0,param_1,lVar15,uVar12);
  }
  else {
    func_0x0e4237a0(&lStack_a0,param_1,&UNK_011ce865,0x18);
  }
  if (cStack_70 != '\0') {
    return;
  }
  lVar15 = lStack_a0 + 0x18;
  lVar8 = func_0x0e34cf30(lVar15);
  for (pbVar13 = *(byte **)(lStack_a0 + 0x50); pbVar13 != *(byte **)(lStack_a0 + 0x58);
      pbVar13 = pbVar13 + 0x38) {
    bVar2 = *pbVar13;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e3c09da;
    }
    else if (*(long *)(pbVar13 + 8) == 0x1a) {
LAB_0e3c09da:
      if ((bVar2 & 1) == 0) {
        pbVar16 = pbVar13 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar13 + 0x10);
      }
      auVar19[0] = -(*pbVar16 == DAT_014eaba0);
      auVar19[1] = -(pbVar16[1] == DAT_014eaba0._1_1_);
      auVar19[2] = -(pbVar16[2] == DAT_014eaba0._2_1_);
      auVar19[3] = -(pbVar16[3] == DAT_014eaba0._3_1_);
      auVar19[4] = -(pbVar16[4] == DAT_014eaba0._4_1_);
      auVar19[5] = -(pbVar16[5] == DAT_014eaba0._5_1_);
      auVar19[6] = -(pbVar16[6] == DAT_014eaba0._6_1_);
      auVar19[7] = -(pbVar16[7] == DAT_014eaba0._7_1_);
      auVar19[8] = -(pbVar16[8] == DAT_014eaba0._8_1_);
      auVar19[9] = -(pbVar16[9] == DAT_014eaba0._9_1_);
      auVar19[10] = -(pbVar16[10] == DAT_014eaba0._10_1_);
      auVar19[0xb] = -(pbVar16[0xb] == DAT_014eaba0._11_1_);
      auVar19[0xc] = -(pbVar16[0xc] == DAT_014eaba0._12_1_);
      auVar19[0xd] = -(pbVar16[0xd] == DAT_014eaba0._13_1_);
      auVar19[0xe] = -(pbVar16[0xe] == DAT_014eaba0._14_1_);
      auVar19[0xf] = -(pbVar16[0xf] == DAT_014eaba0._15_1_);
      auVar20[0] = -(pbVar16[10] == DAT_014e4ff0);
      auVar20[1] = -(pbVar16[0xb] == DAT_014e4ff0._1_1_);
      auVar20[2] = -(pbVar16[0xc] == DAT_014e4ff0._2_1_);
      auVar20[3] = -(pbVar16[0xd] == DAT_014e4ff0._3_1_);
      auVar20[4] = -(pbVar16[0xe] == DAT_014e4ff0._4_1_);
      auVar20[5] = -(pbVar16[0xf] == DAT_014e4ff0._5_1_);
      auVar20[6] = -(pbVar16[0x10] == DAT_014e4ff0._6_1_);
      auVar20[7] = -(pbVar16[0x11] == DAT_014e4ff0._7_1_);
      auVar20[8] = -(pbVar16[0x12] == DAT_014e4ff0._8_1_);
      auVar20[9] = -(pbVar16[0x13] == DAT_014e4ff0._9_1_);
      auVar20[10] = -(pbVar16[0x14] == DAT_014e4ff0._10_1_);
      auVar20[0xb] = -(pbVar16[0x15] == DAT_014e4ff0._11_1_);
      auVar20[0xc] = -(pbVar16[0x16] == DAT_014e4ff0._12_1_);
      auVar20[0xd] = -(pbVar16[0x17] == DAT_014e4ff0._13_1_);
      auVar20[0xe] = -(pbVar16[0x18] == DAT_014e4ff0._14_1_);
      auVar20[0xf] = -(pbVar16[0x19] == DAT_014e4ff0._15_1_);
      auVar20 = auVar20 & auVar19;
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
  if (pbVar13 == *(byte **)(lStack_a0 + 0x58)) {
LAB_0e3c0a09:
    if (iStack_78 == 0) {
      if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
      goto LAB_0e3c0a79;
      lVar8 = *(long *)(lVar8 + 0x68) + 0x38;
    }
    else {
      auStack_2c8 = (undefined1  [8])func_0x048b0c90(lVar15,lVar8,uStack_74,1);
      if (auStack_2c8 == (undefined1  [8])0x0) {
        _auStack_2c8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_2c8);
        if (auStack_2c8 == (undefined1  [8])0x0) goto LAB_0e3c0a79;
      }
      if ((*(int *)((long)auStack_2c8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_2c8 + 0x58) != 0)) {
        lVar8 = *(long *)((long)auStack_2c8 + 0x58) + 0x40;
      }
      else {
LAB_0e3c0a79:
        lVar8 = 0;
      }
    }
    plStack_1b8 = (long *)&UNK_0488e0b0;
    pcStack_1b0 = (code *)0x0;
    uStack_1a8 = CONCAT35(uStack_1a8._5_3_,0x48b5725f);
    lStack_1c8 = 0;
    _auStack_2c8 = (undefined1  [16])0x0;
    pcStack_2b0 = (code *)&UNK_0488e0b0;
    pcStack_2a8 = (code *)0x0;
    uStack_2a0 = CONCAT35(uStack_2a0._5_3_,0x48b5725f);
    puStack_1e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1e8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar11 = _UNK_013bbadf;
    uStack_1f8 = 0x21;
    plStack_1f0 = (long *)0x1a;
    *(ulong *)((long)puStack_1e8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1e8 + 0x12) = uVar11;
    uVar11 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1e8 = _DAT_013bbacd;
    puStack_1e8[1] = uVar11;
    *(undefined1 *)((long)puStack_1e8 + 0x1a) = 0;
    lVar8 = func_0x048b5060(lVar8,&uStack_1f8);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    if ((undefined1 *)(lVar8 + 0x20) == auStack_2c8) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar8 + 0x40) != (code *)0x0) {
        puVar17 = (undefined8 *)(lVar8 + 0x28);
        (**(code **)(lVar8 + 0x40))(puVar17);
        if (uStack_2a0._4_1_ != '\0') {
          if (uStack_2a0._4_1_ == '\x02') {
            (*pcStack_2b0)(5,auStack_2c8 + 8,puVar17);
          }
          else {
            uVar11 = uStack_2c0;
            uStack_2c0 = 0;
            *puVar17 = uVar11;
          }
        }
      }
      *(code **)(lVar8 + 0x38) = pcStack_2b0;
      *(code **)(lVar8 + 0x40) = pcStack_2a8;
      *(undefined4 *)(lVar8 + 0x48) = (undefined4)uStack_2a0;
      *(char *)(lVar8 + 0x4c) = uStack_2a0._4_1_;
      pcVar9 = pcStack_2a8;
    }
    if ((uStack_1f8 & 1) != 0) {
      func_0x0412a280(puStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
      pcVar9 = pcStack_2a8;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_2c8 + 8);
    }
    if (pcStack_1b0 != (code *)0x0) {
      (*pcStack_1b0)(&lStack_1c8);
    }
  }
  else {
    iVar6 = *(int *)(pbVar13 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0e3c0a09;
  }
  uStack_48 = uStack_80;
  uStack_58 = uStack_90;
  uStack_50 = uStack_88;
  lStack_68 = lStack_a0;
  uStack_60 = uStack_98;
  lStack_158 = lStack_a0;
  uStack_150 = uStack_98;
  uStack_148 = uStack_90;
  uStack_140 = uStack_88;
  uStack_138 = uStack_80;
  if ((DAT_0f7501e8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7501e8), iVar6 != 0)) {
    func_0x0e34cec0(0xf7501d0);
    func_0x0410844d(&DAT_0f7501e8);
  }
  uStack_130 = 0x28a5a83e00000001;
  lVar8 = lStack_158 + 0x18;
  auStack_2c8 = (undefined1  [8])func_0x0e34cf30(lVar8);
  uStack_2c0 = lVar8;
  func_0x0ed621a0(auStack_2c8,uStack_130._4_4_);
  auStack_2c8._0_2_ = 1;
  uStack_2c0 = (long)&uStack_150;
  uStack_2b8 = CONCAT44(uStack_2b8._4_4_,uStack_130._4_4_);
  pcStack_2b0 = (code *)0x0;
  pcStack_2a8 = (code *)0x0;
  uStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_288 = 0x14;
  uStack_287 = 0x6669746e656469;
  uStack_280 = 0x69;
  uStack_27f = 0x7265;
  uStack_27d = 0;
  lStack_270 = 0;
  uStack_268 = 0;
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_248 = 0;
  uStack_240 = 0x3f600000;
  func_0x048afb10(&lStack_270,8);
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  uStack_208 = 0xff00;
  uStack_204 = uStack_204 & 0xffffff00;
  uStack_200 = uStack_200 & 0xffffff00;
  uStack_1fc = 0;
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0ef44b00;
  if (pcStack_2b0 != (code *)0x0) {
    lVar8 = *(long *)pcStack_2b0;
    pcStack_2b0 = pcVar9;
    (**(code **)(lVar8 + 8))();
    pcVar9 = pcStack_2b0;
  }
  pcStack_2b0 = pcVar9;
  lStack_1c8 = CONCAT44(lStack_1c8._4_4_,(undefined4)uStack_2b8);
  plStack_1c0 = (long *)0x0;
  plStack_1b8 = (long *)((ulong)plStack_1b8 & 0xffffffff00000000);
  pcStack_1b0 = (code *)0x1;
  uStack_1a8 = 0;
  puStack_1a0 = &UNK_048b3f30;
  puStack_198 = &SUB_048b06d0;
  puStack_190 = &SUB_048b2190;
  puStack_188 = &UNK_0e424050;
  puStack_180 = &UNK_0e424210;
  uStack_178 = 0;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  func_0x048b05a0(uStack_2c0,&lStack_1c8);
  plVar10 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_168 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar8 = uStack_2c0;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  lStack_1c8 = CONCAT44(lStack_1c8._4_4_,_DAT_0f550a0c);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  pcVar3 = pcStack_2a8;
  pcVar9 = pcStack_2b0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_1c0 = plVar10 + 3;
  pcStack_2b0 = (code *)0x0;
  pcStack_2a8 = (code *)0x0;
  plVar10[3] = (long)pcVar9;
  plVar10[4] = (long)pcVar3;
  plVar10[7] = lStack_290;
  plVar10[5] = uStack_2a0;
  plVar10[6] = lStack_298;
  uStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  plVar10[10] = (long)plStack_278;
  plVar10[8] = CONCAT71(uStack_287,uStack_288);
  plVar10[9] = CONCAT44(uStack_27c,CONCAT13(uStack_27d,CONCAT21(uStack_27f,uStack_280)));
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_27d = 0;
  uStack_27c = 0;
  plStack_278 = (long *)0x0;
  plVar10[0xb] = lStack_270;
  plVar10[0xc] = uStack_268;
  plVar10[0xd] = lStack_260;
  lStack_270 = 0;
  uStack_268 = 0;
  lStack_260 = 0;
  plVar10[0xe] = lStack_258;
  plVar10[0xf] = lStack_250;
  plVar10[0x10] = lStack_248;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_248 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_240;
  plVar10[0x12] = lStack_238;
  plVar10[0x13] = lStack_230;
  plVar10[0x14] = lStack_228;
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_228 = 0;
  plVar10[0x17] = lStack_210;
  plVar10[0x15] = lStack_220;
  plVar10[0x16] = lStack_218;
  lStack_220 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_1fc,CONCAT43(uStack_200,uStack_204._1_3_));
  plVar10[0x18] = CONCAT44(uStack_204,CONCAT22(uStack_206,uStack_208));
  uStack_1f8 = 0;
  plStack_1f0 = (long *)0x0;
  plStack_1b8 = plVar10;
  func_0x048afd20(lVar8,&lStack_1c8);
  plVar10 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1b8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_1f0;
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar4 = lStack_158;
  lVar15 = *(long *)(lVar8 + 0x10);
  iVar6 = *(int *)(lVar8 + 0x1c);
  if (iVar6 == 2) {
    piVar14 = *(int **)(*(long *)(lVar15 + 0x78) + 0x60);
    iVar6 = *piVar14;
    while (iVar6 != *(int *)(lVar8 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar6 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(lVar8 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0e3c114a:
    piVar14[4] = piVar14[4] | auStack_2c8._0_4_ << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar14 = *(int **)(*(long *)(lVar15 + 0x78) + 0x48);
      iVar6 = *piVar14;
      while (iVar6 != *(int *)(lVar8 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar6 = *piVar14;
      }
      goto LAB_0e3c114a;
    }
    if (iVar6 == 0) {
      *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) | auStack_2c8._0_4_ << 0x10;
    }
  }
  iVar6 = (int)uStack_130;
  uVar5 = uStack_130._4_4_;
  func_0x048b0bc0(&pcStack_2b0);
  pcStack_2a8 = (code *)0x0;
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_270 = 0;
  uStack_268 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_27d = 0;
  uStack_27c = 0;
  plStack_278 = (long *)0x0;
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_2a0 = 0;
  lStack_298 = 0;
  lStack_250 = 0;
  uStack_2b8 = 0;
  pcStack_2b0 = (code *)0xff;
  auStack_2c8 = (undefined1  [8])&UNK_0f4e3c70;
  uStack_2c0 = 0xffffffffffffffff;
  func_0x041679a0(&pcStack_2a8);
  uStack_2a0 = func_0x041681f0(&pcStack_2a8,0xf547a30);
  lStack_298 = func_0x041681f0(&pcStack_2a8,0xf547770);
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_287 = 0;
  uStack_280 = 0;
  uStack_27f = 0;
  uStack_27d = 0;
  uStack_27c = 0;
  plStack_278 = (long *)0x0;
  lStack_270 = 0;
  uStack_268 = 0;
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  bStack_1e0 = 0x22;
  uStack_1df = (undefined7)_DAT_0129ed9e;
  uStack_1d8 = (undefined1)((ulong)_DAT_0129ed9e >> 0x38);
  uStack_1d7 = (undefined7)_UNK_0129eda6;
  uStack_1d0 = (undefined1)((ulong)_UNK_0129eda6 >> 0x38);
  uStack_1cf = 0x24;
  func_0x0ed60210(auStack_2c8,&bStack_1e0,0);
  uStack_108 = pcStack_2b0._0_1_;
  uStack_118 = uStack_2c0;
  uStack_110 = uStack_2b8;
  puStack_120 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_100,&pcStack_2a8);
  uStack_f8 = uStack_2a0;
  uStack_f0 = lStack_298;
  uStack_e0 = CONCAT71(uStack_287,uStack_288);
  uStack_e8 = lStack_290;
  uStack_d8 = CONCAT44(uStack_27c,CONCAT13(uStack_27d,CONCAT21(uStack_27f,uStack_280)));
  plStack_d0 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    LOCK();
    plStack_278[1] = plStack_278[1] + 1;
    UNLOCK();
  }
  lStack_c8 = lStack_270;
  if ((uStack_268 & 1) == 0) {
    uStack_b0 = lStack_258;
    uStack_c0 = uStack_268;
    uStack_b8 = lStack_260;
  }
  else {
    func_0x0412e5e0(&uStack_c0,lStack_258,lStack_260);
  }
  uStack_a8 = lStack_250;
  if (iVar6 == 4) {
    uVar11 = func_0x0e34cf30(lVar4 + 0x18);
    lVar8 = func_0x048b1040(lVar4 + 0x18,uVar11,uVar5,1);
    if (lVar8 == 0) {
      lStack_1c8 = 0;
      plStack_1c0 = (long *)0x0;
      FUN_048b10d0(&lStack_1c8);
      lVar15 = *(long *)(lStack_1c8 + 0x38);
      lVar8 = lStack_1c8;
      if (lVar15 == 0) goto LAB_0e3c13e7;
LAB_0e3c140c:
      do {
        lVar8 = lVar15;
        lVar15 = *(long *)(lVar8 + 0x38);
        if (*(long *)(lVar8 + 0x38) == 0) {
          lStack_1c8 = 0;
          plStack_1c0 = (long *)0x0;
          FUN_048b10d0(&lStack_1c8);
          lVar15 = lStack_1c8;
        }
      } while (lVar15 != 0);
    }
    else {
      lVar15 = *(long *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x38) != 0) goto LAB_0e3c140c;
LAB_0e3c13e7:
      lStack_1c8 = 0;
      plStack_1c0 = (long *)0x0;
      FUN_048b10d0(&lStack_1c8);
      lVar15 = lStack_1c8;
      if (lStack_1c8 != 0) goto LAB_0e3c140c;
    }
    lVar8 = *(long *)(lVar8 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (iVar6 != 1) goto LAB_0e3c150e;
    uVar11 = func_0x0e34cf30(lVar4 + 0x18);
    lVar8 = func_0x048b0c90(lVar4 + 0x18,uVar11,uVar5,1);
    if (lVar8 == 0) {
      lStack_1c8 = 0;
      plStack_1c0 = (long *)0x0;
      func_0x048b0d20(&lStack_1c8);
      lVar8 = lStack_1c8;
    }
    lVar8 = *(long *)(lVar8 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar17 + 3) = uStack_108;
  puVar17[1] = uStack_118;
  puVar17[2] = uStack_110;
  *puVar17 = &UNK_0f4e3c70;
  func_0x04167a20(puVar17 + 4,auStack_100);
  puVar17[5] = uStack_f8;
  puVar17[6] = uStack_f0;
  puVar17[7] = uStack_e8;
  puVar17[8] = uStack_e0;
  puVar17[9] = uStack_d8;
  puVar17[10] = plStack_d0;
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  puVar17[0xb] = lStack_c8;
  puVar17[0xe] = uStack_b0;
  puVar17[0xc] = uStack_c0;
  puVar17[0xd] = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puVar17[0xf] = uStack_a8;
  plVar10 = *(long **)(lVar8 + 8);
  *(undefined8 **)(lVar8 + 8) = puVar17;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
LAB_0e3c150e:
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar11 = _UNK_014272bd;
  puVar17[2] = _DAT_014272b5;
  puVar17[3] = uVar11;
  uVar11 = _UNK_014272ad;
  *puVar17 = _DAT_014272a5;
  puVar17[1] = uVar11;
  *(undefined4 *)((long)puVar17 + 0x1f) = 0x72657474;
  *(undefined1 *)((long)puVar17 + 0x23) = 0;
  uVar11 = func_0x0e34cf30(lVar4 + 0x18);
  lVar8 = func_0x048b0c90(lVar4 + 0x18,uVar11,0x28a5a83e,1);
  if (lVar8 == 0) {
    lStack_1c8 = 0;
    plStack_1c0 = (long *)0x0;
    func_0x048b0d20(&lStack_1c8);
    lVar8 = *(long *)(lStack_1c8 + 0x58);
    bVar2 = *(byte *)(lVar8 + 0x90);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x58);
    bVar2 = *(byte *)(lVar8 + 0x90);
  }
  if ((bVar2 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar8 + 0xa0),*(ulong *)(lVar8 + 0x90) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar8 + 0x90) = 0x29;
  *(undefined8 *)(lVar8 + 0x98) = 0x23;
  *(undefined8 **)(lVar8 + 0xa0) = puVar17;
  puStack_120 = &UNK_0f4e3c70;
  if ((uStack_c0 & 1) != 0) {
    func_0x0412a280(uStack_b0,uStack_c0 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(auStack_100);
  if ((bStack_1e0 & 1) == 0) {
    auStack_2c8 = (undefined1  [8])&UNK_0f4e3c70;
  }
  else {
    func_0x0412a280(CONCAT53(uStack_1cd,CONCAT21(uStack_1cf,uStack_1d0)),
                    CONCAT71(uStack_1df,bStack_1e0) & 0xfffffffffffffffe);
    auStack_2c8 = (undefined1  [8])&UNK_0f4e3c70;
  }
  plVar10 = plStack_278;
  if ((uStack_268 & 1) != 0) {
    func_0x0412a280(lStack_258,uStack_268 & 0xfffffffffffffffe);
    plVar10 = plStack_278;
  }
  plStack_278 = plVar10;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(&pcStack_2a8);
  return;
}



/* ---- referenced strings ----
 * 0x129ed9e  ^[a-z0-9._%+-:]+$
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14272a5  identifier has an upper case letter
 * 0x14272b5  n upper case letter
 * 0x14eaba0  [cereal:document
 */
