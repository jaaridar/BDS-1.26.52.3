/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6218440 (ELF vaddr 0x6118440)
 * Label: caller-of-callee
 * Body:  [[06218440, 06218b41] [06218b50, 0621983d]]
 * Ghidra: FUN_06218440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06218440(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 auStack_298 [2];
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  undefined *puStack_230;
  undefined4 *puStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined2 uStack_1e7;
  undefined5 uStack_1e5;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  uint uStack_16c;
  uint uStack_168;
  undefined1 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  char cStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char cStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f56bfc8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56bfc8), iVar8 != 0)) {
    func_0x062d2bf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56bf48,0xf53dab8);
    FUN_0410844d(&DAT_0f56bfc8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f56bf48 + 4)) * 8);
  do {
    lVar3 = *plVar11;
    if (lVar3 == -1) goto LAB_062184b0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f56bf48 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_062184b0:
    puVar9 = &DAT_0f56bf48;
    if (iRam000000000f56bfa8 != -0x2b3da790) goto LAB_0621851d;
LAB_062184db:
    lVar3 = *(long *)(puVar9 + 0x68);
    if (lVar3 == 0) goto LAB_0621851d;
    bVar17 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar15 = lVar3 + 9;
    if (bVar17) {
      lVar15 = *(long *)(lVar3 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar17) {
      uVar14 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x062d3010(&uStack_160,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_062184db;
LAB_0621851d:
    func_0x062d3010(&uStack_160,param_1,&UNK_0123e72e,0x25);
  }
  if (cStack_130 == '\0') {
    uStack_288._4_4_ = (uint)((ulong)uStack_288 >> 0x20);
    func_0x062d3600(&puStack_230,CONCAT44(uStack_15c,uStack_160) + 0x18);
    if (uStack_218._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_218) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
      while (puVar12 != puStack_228) {
        piVar13 = *(int **)(piVar13 + 0xe);
        puVar12 = *(undefined4 **)(piVar13 + 0xc);
      }
LAB_062185af:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (uStack_218._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != (int)uStack_218) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_062185af;
      }
      if (uStack_218._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_21c,uStack_220) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    if ((DAT_0f56bfe8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56bfe8), iVar8 != 0)) {
      func_0x062d2d00();
      FUN_0410844d(&DAT_0f56bfe8);
    }
    uStack_138 = 0x3675ee9f00000001;
    lVar3 = CONCAT44(uStack_15c,uStack_160);
    if ((DAT_0f56bfc8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56bfc8), iVar8 != 0)) {
      func_0x062d2bf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f56bf48,0xf53dab8);
      FUN_0410844d(&DAT_0f56bfc8);
    }
    puStack_228 = (undefined4 *)(lVar3 + 0x18);
    plVar11 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f56bf48 + 4)) * 8);
    do {
      lVar15 = *plVar11;
      if (lVar15 == -1) goto LAB_06218640;
      plVar11 = (long *)(*(long *)(lVar3 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f56bf48 + 4))
    ;
    if (plVar11 == *(long **)(lVar3 + 0x38)) {
LAB_06218640:
      puStack_230 = &DAT_0f56bf48;
    }
    else {
      puStack_230 = (undefined *)plVar11[2];
    }
    func_0x0ed621a0(&puStack_230,uStack_138._4_4_);
    puStack_230 = (undefined *)CONCAT62(puStack_230._2_6_,0x10);
    uStack_220 = uStack_138._4_4_;
    uStack_218 = (long *)0x0;
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_1f0 = 0x12;
    uStack_1ef = 0x74736575716572;
    uStack_1e8 = 0x49;
    uStack_1e7 = 100;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    uStack_1a8 = 0x3f600000;
    puStack_228 = &uStack_158;
    FUN_048afb10(&lStack_1d8,8);
    uStack_180 = 0;
    lStack_178 = 0;
    lStack_190 = 0;
    uStack_188 = 0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    uStack_170 = 0xff00;
    uStack_16c = uStack_16c & 0xffffff00;
    uStack_168 = uStack_168 & 0xffffff00;
    uStack_164 = 0;
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar10 = &UNK_0ef42d08;
    if (uStack_218 != (long *)0x0) {
      lVar3 = *uStack_218;
      uStack_218 = puVar10;
      (**(code **)(lVar3 + 8))();
      puVar10 = uStack_218;
    }
    uStack_218 = puVar10;
    auStack_298[0] = uStack_220;
    plStack_290 = (long *)0x0;
    uStack_288 = (long *)((ulong)uStack_288._4_4_ << 0x20);
    uStack_280 = 1;
    uStack_278 = 0;
    puStack_270 = &UNK_048b06c0;
    puStack_268 = &SUB_048b06d0;
    puStack_260 = &SUB_048b02c0;
    puStack_258 = &UNK_062d3b60;
    puStack_250 = &UNK_062d3cc0;
    uStack_248 = 0;
    uStack_240 = 0;
    plStack_238 = (long *)0x0;
    func_0x048b05a0(puStack_228,auStack_298);
    plVar11 = plStack_238;
    if (plStack_238 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_238 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        func_0x0412c2d0(plVar11);
      }
    }
    puVar12 = puStack_228;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    auStack_298[0] = _DAT_0f550a0c;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar3 = lStack_210;
    puVar10 = uStack_218;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_290 = plVar11 + 3;
    uStack_218 = (long *)0x0;
    lStack_210 = 0;
    plVar11[3] = (long)puVar10;
    plVar11[4] = lVar3;
    plVar11[7] = lStack_1f8;
    plVar11[5] = lStack_208;
    plVar11[6] = lStack_200;
    lStack_208 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    plVar11[10] = lStack_1e0;
    plVar11[8] = CONCAT71(uStack_1ef,uStack_1f0);
    plVar11[9] = CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8));
    uStack_1f0 = 0;
    uStack_1ef = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    lStack_1e0 = 0;
    plVar11[0xb] = lStack_1d8;
    plVar11[0xc] = lStack_1d0;
    plVar11[0xd] = lStack_1c8;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    lStack_1c8 = 0;
    plVar11[0xe] = lStack_1c0;
    plVar11[0xf] = lStack_1b8;
    plVar11[0x10] = lStack_1b0;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_1a8;
    plVar11[0x12] = lStack_1a0;
    plVar11[0x13] = lStack_198;
    plVar11[0x14] = lStack_190;
    lStack_1a0 = 0;
    lStack_198 = 0;
    lStack_190 = 0;
    plVar11[0x17] = lStack_178;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_188;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_188._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_180;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_180._4_4_;
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_164,CONCAT43(uStack_168,uStack_16c._1_3_));
    plVar11[0x18] = CONCAT44(uStack_16c,CONCAT22(uStack_16e,uStack_170));
    uStack_68 = 0;
    uStack_60 = (long *)0x0;
    uStack_288 = plVar11;
    func_0x048afd20(puVar12,auStack_298);
    plVar11 = uStack_288;
    if (uStack_288 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_288 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_288 + 0x10))(uStack_288);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_60;
    if (uStack_60 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_60 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_60 + 0x10))(uStack_60);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar3 = *(long *)(puVar12 + 4);
    iVar8 = puVar12[7];
    if (iVar8 == 2) {
      piVar13 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
      iVar8 = *piVar13;
      while (iVar8 != puVar12[6]) {
        piVar13 = piVar13 + 0x16;
        iVar8 = *piVar13;
      }
      for (; *(long *)(piVar13 + 0xc) != *(long *)(puVar12 + 2); piVar13 = *(int **)(piVar13 + 0xe))
      {
      }
LAB_06218b5a:
      piVar13[4] = piVar13[4] | (int)puStack_230 << 0x10;
    }
    else {
      if (iVar8 == 1) {
        piVar13 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
        iVar8 = *piVar13;
        while (iVar8 != puVar12[6]) {
          piVar13 = piVar13 + 0x1a;
          iVar8 = *piVar13;
        }
        goto LAB_06218b5a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | (int)puStack_230 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_218);
  }
  puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar12 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar7 = _UNK_011ee892;
  *(undefined8 *)(puVar12 + 8) = _DAT_011ee88a;
  *(undefined8 *)(puVar12 + 10) = uVar7;
  uVar7 = _UNK_011ee882;
  *(undefined8 *)(puVar12 + 4) = _DAT_011ee87a;
  *(undefined8 *)(puVar12 + 6) = uVar7;
  uVar6 = _UNK_011ee876;
  uVar5 = _UNK_011ee872;
  uVar4 = _UNK_011ee86e;
  *puVar12 = _DAT_011ee86a;
  puVar12[1] = uVar4;
  puVar12[2] = uVar5;
  puVar12[3] = uVar6;
  *(undefined4 *)((long)puVar12 + 0x2f) = 0x64616f6c;
  *(undefined1 *)((long)puVar12 + 0x33) = 0;
  if ((DAT_0f56b1d8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f56b1d8), iVar8 != 0)) {
    func_0x06296eb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f56b158,0xf53dab8);
    FUN_0410844d(&DAT_0f56b1d8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f56b158 + 4)) * 8);
  do {
    lVar3 = *plVar11;
    if (lVar3 == -1) goto LAB_06218c10;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f56b158 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_06218c10:
    puVar9 = &DAT_0f56b158;
    if (iRam000000000f56b1b8 != -0x2b3da790) goto LAB_06218c6b;
LAB_06218c3b:
    lVar3 = *(long *)(puVar9 + 0x68);
    if (lVar3 == 0) goto LAB_06218c6b;
    bVar17 = (*(byte *)(lVar3 + 8) & 1) != 0;
    puVar16 = (undefined4 *)(lVar3 + 9);
    if (bVar17) {
      puVar16 = *(undefined4 **)(lVar3 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar17) {
      uVar14 = *(ulong *)(lVar3 + 0x10);
    }
  }
  else {
    puVar9 = (undefined *)plVar11[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_06218c3b;
LAB_06218c6b:
    uVar14 = 0x33;
    puVar16 = puVar12;
  }
  func_0x062d3e90(&uStack_160,param_1,puVar16,uVar14);
  func_0x0412a280(puVar12,0x38);
  if (cStack_130 != '\0') {
    return;
  }
  func_0x062d4480(&puStack_230,CONCAT44(uStack_15c,uStack_160) + 0x18);
  if (uStack_218._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_218) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_228) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
LAB_06218d0f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_218._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_218) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_06218d0f;
    }
    if (uStack_218._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_21c,uStack_220) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x062d4a50(&puStack_230,&uStack_160,&UNK_0144987c,10,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  if (uStack_218 != (long *)0x0) {
    lVar3 = *uStack_218;
    uStack_218 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_218;
  }
  uStack_218 = plVar11;
  auStack_298[0] = uStack_220;
  plStack_290 = (long *)0x0;
  uStack_288 = (long *)((ulong)uStack_288 & 0xffffffff00000000);
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_048b3f30;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_048b2190;
  puStack_258 = &UNK_062d5010;
  puStack_250 = &UNK_062d51e0;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  func_0x048b05a0(puStack_228,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_238 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062d4d10(&puStack_230);
  cStack_f8 = cStack_130;
  uStack_108 = uStack_140;
  uStack_104 = uStack_13c;
  uStack_100 = (undefined4)uStack_138;
  uStack_fc = uStack_138._4_4_;
  uStack_118 = uStack_150;
  uStack_114 = uStack_14c;
  uStack_110 = uStack_148;
  uStack_10c = uStack_144;
  uStack_128 = uStack_160;
  uStack_124 = uStack_15c;
  uStack_120 = uStack_158;
  uStack_11c = uStack_154;
  func_0x048b0bc0(&uStack_218);
  func_0x062d4480(&puStack_230,CONCAT44(uStack_124,uStack_128) + 0x18);
  if (uStack_218._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_218) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_228) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
LAB_06218f4f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_218._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_218) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_06218f4f;
    }
    if (uStack_218._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_21c,uStack_220) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x062d4a50(&puStack_230,&uStack_128,&UNK_013762e9,10,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  if (uStack_218 != (long *)0x0) {
    lVar3 = *uStack_218;
    uStack_218 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_218;
  }
  uStack_218 = plVar11;
  auStack_298[0] = uStack_220;
  plStack_290 = (long *)0x0;
  uStack_288 = (long *)((ulong)uStack_288 & 0xffffffff00000000);
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_048b3f30;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_048b2190;
  puStack_258 = &UNK_062d53c0;
  puStack_250 = &UNK_062d5590;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  func_0x048b05a0(puStack_228,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_238 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062d4d10(&puStack_230);
  cStack_b8 = cStack_f8;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  uStack_c0 = uStack_100;
  uStack_bc = uStack_fc;
  uStack_d8 = uStack_118;
  uStack_d4 = uStack_114;
  uStack_d0 = uStack_110;
  uStack_cc = uStack_10c;
  uStack_e8 = uStack_128;
  uStack_e4 = uStack_124;
  uStack_e0 = uStack_120;
  uStack_dc = uStack_11c;
  func_0x048b0bc0(&uStack_218);
  func_0x062d4480(&puStack_230,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_218._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_218) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_228) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
LAB_0621916f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (uStack_218._4_4_ == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x48);
      iVar8 = *piVar13;
      while (iVar8 != (int)uStack_218) {
        piVar13 = piVar13 + 0x1a;
        iVar8 = *piVar13;
      }
      goto LAB_0621916f;
    }
    if (uStack_218._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_21c,uStack_220) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x062d4a50(&puStack_230,&uStack_e8,&UNK_01446a5b,4,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  if (uStack_218 != (long *)0x0) {
    lVar3 = *uStack_218;
    uStack_218 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_218;
  }
  uStack_218 = plVar11;
  auStack_298[0] = uStack_220;
  plStack_290 = (long *)0x0;
  uStack_288 = (long *)((ulong)uStack_288 & 0xffffffff00000000);
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_048b3f30;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_048b2190;
  puStack_258 = &UNK_062d5770;
  puStack_250 = &UNK_062d5940;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  func_0x048b05a0(puStack_228,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_238 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062d4d10(&puStack_230);
  cStack_78 = cStack_b8;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  uStack_98 = uStack_d8;
  uStack_94 = uStack_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  uStack_a8 = uStack_e8;
  uStack_a4 = uStack_e4;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  func_0x048b0bc0(&uStack_218);
  func_0x062d4480(&puStack_230,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_218._4_4_ == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x60);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_218) {
      piVar13 = piVar13 + 0x16;
      iVar8 = *piVar13;
    }
    puVar12 = *(undefined4 **)(piVar13 + 0xc);
    while (puVar12 != puStack_228) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar12 = *(undefined4 **)(piVar13 + 0xc);
    }
  }
  else {
    if (uStack_218._4_4_ != 1) {
      if (uStack_218._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_21c,uStack_220) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_06219393;
    }
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_21c,uStack_220) + 0x78) + 0x48);
    iVar8 = *piVar13;
    while (iVar8 != (int)uStack_218) {
      piVar13 = piVar13 + 0x1a;
      iVar8 = *piVar13;
    }
  }
  *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
LAB_06219393:
  func_0x062d4a50(&puStack_230,&uStack_a8,&UNK_01496c7c,0xb,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_218 != (long *)0x0) {
    lVar3 = *uStack_218;
    uStack_218 = plVar11;
    (**(code **)(lVar3 + 8))();
    plVar11 = uStack_218;
  }
  uStack_218 = plVar11;
  auStack_298[0] = uStack_220;
  plStack_290 = (long *)0x0;
  uStack_288 = (long *)((ulong)uStack_288 & 0xffffffff00000000);
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_04906f70;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &SUB_04906c50;
  puStack_258 = &UNK_062d5b20;
  puStack_250 = &UNK_062d5c80;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  func_0x048b05a0(puStack_228,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_238 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062d4d10(&puStack_230);
  cStack_38 = cStack_78;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_68 = CONCAT44(uStack_a4,uStack_a8);
  uStack_60 = (long *)CONCAT44(uStack_9c,uStack_a0);
  func_0x048b0bc0(&uStack_218);
  func_0x062d4a50(&puStack_230,&uStack_68,&UNK_012d45e0,7,0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar10 = &UNK_0f025c98;
  if (uStack_218 != (long *)0x0) {
    lVar3 = *uStack_218;
    uStack_218 = puVar10;
    (**(code **)(lVar3 + 8))();
    puVar10 = uStack_218;
  }
  uStack_218 = puVar10;
  auStack_298[0] = uStack_220;
  plStack_290 = (long *)0x0;
  uStack_288 = (long *)((ulong)uStack_288 & 0xffffffff00000000);
  uStack_280 = 1;
  uStack_278 = 0;
  puStack_270 = &UNK_062d6ed0;
  puStack_268 = &SUB_048b06d0;
  puStack_260 = &UNK_062d6b00;
  puStack_258 = &UNK_062d6f90;
  puStack_250 = &UNK_062d7100;
  uStack_248 = 0;
  uStack_240 = 0;
  plStack_238 = (long *)0x0;
  func_0x048b05a0(puStack_228,auStack_298);
  plVar11 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_238 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x062d4d10(&puStack_230);
  func_0x048b0bc0(&uStack_218);
  return;
}



/* ---- referenced strings ----
 * 0x11ee86a  Editor::Network::DataTransferServiceSendDataPayload
 * 0x11ee87a  :DataTransferServiceSendDataPayload
 * 0x11ee88a  viceSendDataPayload
 */
