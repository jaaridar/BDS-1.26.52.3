/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdde5f40 (ELF vaddr 0xdce5f40)
 * Label: caller-of-callee
 * Body:  [[0dde5f40, 0dde6e8e]]
 * Ghidra: FUN_0dde5f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dde5f40(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined4 auStack_2e0 [2];
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined4 auStack_278 [2];
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
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
  undefined8 uStack_b8;
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
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0dea1060();
  if ((DAT_0f73e3b0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f73e3b0), iVar6 != 0)) {
    func_0x0de4ac50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73e330,0xf53dab8);
    func_0x0410844d(&DAT_0f73e3b0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73e330 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_0dde5fc0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f73e330 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0dde5fc0:
    puVar7 = &DAT_0f73e330;
    if (iRam000000000f73e390 != -0x2b3da790) goto LAB_0dde6042;
LAB_0dde5feb:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0dde6042;
    bVar14 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0de4b0a0(&uStack_1a8,param_1,lVar13,uVar12);
    if ((char)puStack_178 != '\0') goto LAB_0dde6028;
LAB_0dde6068:
    uStack_b8 = puStack_178;
    uStack_c8 = iStack_188;
    uStack_c4 = iStack_184;
    uStack_c0 = (undefined4)uStack_180;
    uStack_bc = uStack_180._4_4_;
    uStack_d8 = uStack_198;
    uStack_d4 = uStack_194;
    uStack_d0 = uStack_190;
    uStack_cc = uStack_18c;
    uStack_e8 = uStack_1a8;
    uStack_e4 = uStack_1a4;
    uStack_e0 = uStack_1a0;
    uStack_dc = uStack_19c;
    func_0x0de4b690(auStack_278,CONCAT44(uStack_1a4,uStack_1a8) + 0x18);
    if (uStack_260._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)((long)uStack_268 + 0x78) + 0x60);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_260) {
        piVar9 = piVar9 + 0x16;
        iVar6 = *piVar9;
      }
      lVar10 = *(long *)(piVar9 + 0xc);
      while ((long *)lVar10 != plStack_270) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar10 = *(long *)(piVar9 + 0xc);
      }
LAB_0dde611f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_260._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)((long)uStack_268 + 0x78) + 0x48);
        iVar6 = *piVar9;
        while (iVar6 != (int)uStack_260) {
          piVar9 = piVar9 + 0x1a;
          iVar6 = *piVar9;
        }
        goto LAB_0dde611f;
      }
      if (uStack_260._4_4_ == 0) {
        *(uint *)((long)uStack_268 + 0x18) = *(uint *)((long)uStack_268 + 0x18) | 0x40000;
      }
    }
    func_0x0de4bc00(auStack_278,&uStack_e8,&UNK_0148b2c2,0x15);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0c2800;
    if (uStack_260 != (long *)0x0) {
      lVar10 = *uStack_260;
      uStack_260 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_260;
    }
    uStack_260 = plVar8;
    auStack_2e0[0] = (undefined4)uStack_268;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    puStack_2b8 = &UNK_072a5d20;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &UNK_0651ed40;
    puStack_2a0 = &UNK_0de4c200;
    puStack_298 = &UNK_0de4c360;
    uStack_290 = 0;
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    func_0x048b05a0(plStack_270,auStack_2e0);
    plVar8 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de4bf00(auStack_278);
    uStack_38 = (undefined1)uStack_b8;
    uStack_48 = uStack_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    uStack_58 = uStack_d8;
    uStack_54 = uStack_d4;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    uStack_68 = uStack_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    FUN_048b0bc0(&uStack_260);
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    uStack_78 = CONCAT71(uStack_37,uStack_38);
    func_0x0de4b690(auStack_278,CONCAT44(uStack_64,uStack_68) + 0x18);
    if (uStack_260._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)((long)uStack_268 + 0x78) + 0x60);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_260) {
        piVar9 = piVar9 + 0x16;
        iVar6 = *piVar9;
      }
      lVar10 = *(long *)(piVar9 + 0xc);
      while ((long *)lVar10 != plStack_270) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar10 = *(long *)(piVar9 + 0xc);
      }
LAB_0dde639f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_260._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)((long)uStack_268 + 0x78) + 0x48);
        iVar6 = *piVar9;
        while (iVar6 != (int)uStack_260) {
          piVar9 = piVar9 + 0x1a;
          iVar6 = *piVar9;
        }
        goto LAB_0dde639f;
      }
      if (uStack_260._4_4_ == 0) {
        *(uint *)((long)uStack_268 + 0x18) = *(uint *)((long)uStack_268 + 0x18) | 0x40000;
      }
    }
    func_0x0de4bc00(auStack_278,&uStack_a8,&UNK_012b4f0c,0x17);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0c2800;
    if (uStack_260 != (long *)0x0) {
      lVar10 = *uStack_260;
      uStack_260 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_260;
    }
    uStack_260 = plVar8;
    auStack_2e0[0] = (undefined4)uStack_268;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    puStack_2b8 = &UNK_072a5d20;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &UNK_0651ed40;
    puStack_2a0 = &UNK_0de4c530;
    puStack_298 = &UNK_0de4c690;
    uStack_290 = 0;
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    func_0x048b05a0(plStack_270,auStack_2e0);
    plVar8 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de4bf00(auStack_278);
    uStack_138 = (undefined1)uStack_78;
    uStack_148 = uStack_88;
    uStack_144 = uStack_84;
    uStack_140 = uStack_80;
    uStack_13c = uStack_7c;
    uStack_158 = uStack_98;
    uStack_154 = uStack_94;
    uStack_150 = uStack_90;
    uStack_14c = uStack_8c;
    uStack_168 = CONCAT44(uStack_a4,uStack_a8);
    uStack_160 = (long *)CONCAT44(uStack_9c,uStack_a0);
    FUN_048b0bc0(&uStack_260);
    uStack_128 = (undefined4)uStack_168;
    uStack_124 = uStack_168._4_4_;
    uStack_120 = (undefined4)uStack_160;
    uStack_11c = uStack_160._4_4_;
    uStack_118 = uStack_158;
    uStack_114 = uStack_154;
    iStack_110 = uStack_150;
    iStack_10c = uStack_14c;
    uStack_108 = uStack_148;
    uStack_104 = uStack_144;
    uStack_100 = uStack_140;
    uStack_fc = uStack_13c;
    uStack_f8 = CONCAT71(uStack_137,uStack_138);
    func_0x0de4b690(auStack_278,uStack_168 + 0x18);
    if (uStack_260._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)((long)uStack_268 + 0x78) + 0x60);
      iVar6 = *piVar9;
      while (iVar6 != (int)uStack_260) {
        piVar9 = piVar9 + 0x16;
        iVar6 = *piVar9;
      }
      lVar10 = *(long *)(piVar9 + 0xc);
      while ((long *)lVar10 != plStack_270) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar10 = *(long *)(piVar9 + 0xc);
      }
LAB_0dde660f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_260._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)((long)uStack_268 + 0x78) + 0x48);
        iVar6 = *piVar9;
        while (iVar6 != (int)uStack_260) {
          piVar9 = piVar9 + 0x1a;
          iVar6 = *piVar9;
        }
        goto LAB_0dde660f;
      }
      if (uStack_260._4_4_ == 0) {
        *(uint *)((long)uStack_268 + 0x18) = *(uint *)((long)uStack_268 + 0x18) | 0x40000;
      }
    }
    func_0x0de4bc00(auStack_278,&uStack_128,&UNK_014a80c0,0xe);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f4a2858;
    if (uStack_260 != (long *)0x0) {
      lVar10 = *uStack_260;
      uStack_260 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_260;
    }
    uStack_260 = plVar8;
    auStack_2e0[0] = (undefined4)uStack_268;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    puStack_2b8 = &UNK_0de4fd80;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &SUB_0de4f780;
    puStack_2a0 = &UNK_0de4fd90;
    puStack_298 = &UNK_0de4fef0;
    uStack_290 = 0;
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    func_0x048b05a0(plStack_270,auStack_2e0);
    plVar8 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de4bf00(auStack_278);
    FUN_048b0bc0(&uStack_260);
    lVar10 = func_0x0cd07d30(param_1 + 0x18);
    if (*(int *)(lVar10 + 0x60) != -0x2b3da790) goto LAB_0dde6792;
LAB_0dde6756:
    lVar10 = *(long *)(lVar10 + 0x68);
    if (lVar10 == 0) goto LAB_0dde6792;
    bVar14 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar13 = lVar10 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0de50360(auStack_2e0,param_1,lVar13,uVar12);
    uVar3 = uStack_2d8;
    uStack_194 = uStack_2cc;
    uVar4 = uStack_2c8;
    uVar5 = uStack_2c0;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0dde5feb;
LAB_0dde6042:
    func_0x0de4b0a0(&uStack_1a8,param_1,&UNK_01201c6b,0x12);
    if ((char)puStack_178 == '\0') goto LAB_0dde6068;
LAB_0dde6028:
    lVar10 = func_0x0cd07d30(param_1 + 0x18);
    if (*(int *)(lVar10 + 0x60) == -0x2b3da790) goto LAB_0dde6756;
LAB_0dde6792:
    func_0x0de50360(auStack_2e0,param_1,&UNK_0130377a,0x13);
    uVar3 = uStack_2d8;
    uStack_194 = uStack_2cc;
    uVar4 = uStack_2c8;
    uVar5 = uStack_2c0;
  }
  if ((char)puStack_2b0 != '\0') {
    return;
  }
  uStack_2d8._0_4_ = (undefined4)uVar3;
  uStack_2d8._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
  uStack_2c8._0_4_ = (undefined4)uVar4;
  uStack_2c8._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_2c0._0_4_ = (int)uVar5;
  uStack_2c0._4_4_ = (int)((ulong)uVar5 >> 0x20);
  iStack_188 = (int)uStack_2c0;
  iStack_184 = uStack_2c0._4_4_;
  uStack_190 = (undefined4)uStack_2c8;
  uStack_18c = uStack_2c8._4_4_;
  uStack_1a0 = (undefined4)uStack_2d8;
  uStack_19c = uStack_2d8._4_4_;
  uStack_180 = 0x1e1bc4d500000004;
  uStack_2d8 = uVar3;
  uStack_2c8 = uVar4;
  uStack_2c0 = uVar5;
  uStack_1a8 = auStack_2e0[0];
  uStack_198 = uStack_2d0;
  puStack_178 = puStack_2b0;
  if ((DAT_0f703cd8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f703cd8), iVar6 != 0)) {
    func_0x0cd07c90(0xf703cc0);
    func_0x0410844d(&DAT_0f703cd8);
  }
  auStack_278[0] = uStack_180._4_4_;
  plStack_270 = (long *)0x0;
  uStack_268 = (long *)((ulong)uStack_268._4_4_ << 0x20);
  uStack_260 = (long *)0x1;
  puStack_258 = &SUB_048aead0;
  puStack_250 = &UNK_0de50bd0;
  puStack_248 = &UNK_0de50c90;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  func_0x049057f0(&uStack_1a0,auStack_278);
  func_0x048aea50(auStack_278);
  uStack_118 = uStack_190;
  uStack_114 = uStack_18c;
  iStack_110 = iStack_188;
  iStack_10c = iStack_184;
  uStack_128 = uStack_1a0;
  uStack_124 = uStack_19c;
  uStack_120 = uStack_198;
  uStack_11c = uStack_194;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f4a1d68;
  if ((DAT_0f551bc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551bc8), iVar6 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_278[0] = _DAT_0f551bb4;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c48;
  plStack_270 = plVar8 + 3;
  plVar8[3] = (long)puVar11;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0xff;
  uStack_168 = 0;
  uStack_160 = (long *)0x0;
  uStack_268 = plVar8;
  func_0x048afd20(&uStack_128,auStack_278);
  plVar8 = uStack_268;
  if (uStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_268 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_268 + 0x10))(uStack_268);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_160;
  if (uStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_160 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_160 + 0x10))(uStack_160);
      func_0x0412c2d0(plVar8);
    }
  }
  if ((DAT_0f703cd8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f703cd8), iVar6 != 0)) {
    func_0x0cd07c90(0xf703cc0);
    func_0x0410844d(&DAT_0f703cd8);
  }
  if (iStack_184 == 2) {
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_18c,uStack_190) + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != iStack_188) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    lVar10 = *(long *)(piVar9 + 0xc);
    while (lVar10 != CONCAT44(uStack_194,uStack_198)) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar10 = *(long *)(piVar9 + 0xc);
    }
  }
  else {
    if (iStack_184 != 1) {
      if (iStack_184 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_18c,uStack_190) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
      goto LAB_0dde6aa3;
    }
    piVar9 = *(int **)(*(long *)(CONCAT44(uStack_18c,uStack_190) + 0x78) + 0x48);
    iVar6 = *piVar9;
    while (iVar6 != iStack_188) {
      piVar9 = piVar9 + 0x1a;
      iVar6 = *piVar9;
    }
  }
  *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
LAB_0dde6aa3:
  if ((DAT_0f703cd8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f703cd8), iVar6 != 0)) {
    func_0x0cd07c90(0xf703cc0);
    func_0x0410844d(&DAT_0f703cd8);
  }
  auStack_278[0] = 0xbf75c8f8;
  plStack_270 = (long *)0x0;
  uStack_268 = (long *)((ulong)uStack_268 & 0xffffffff00000000);
  uStack_260 = (long *)0x0;
  puStack_258 = &UNK_0de50e90;
  puStack_250 = &SUB_048b06d0;
  puStack_248 = &UNK_0de516b0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  func_0x049057f0(&uStack_1a0,auStack_278);
  func_0x048aea50(auStack_278);
  uStack_118 = uStack_190;
  uStack_114 = uStack_18c;
  iStack_110 = iStack_188;
  iStack_10c = iStack_184;
  uStack_128 = uStack_1a0;
  uStack_124 = uStack_19c;
  uStack_120 = uStack_198;
  uStack_11c = uStack_194;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f4a1d68;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  auStack_278[0] = _DAT_0f551c9c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_270 = plVar8 + 3;
  plVar8[3] = (long)puVar11;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  uStack_168 = 0;
  uStack_160 = (long *)0x0;
  uStack_268 = plVar8;
  func_0x048afd20(&uStack_128,auStack_278);
  plVar8 = uStack_268;
  if (uStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_268 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_268 + 0x10))(uStack_268);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = uStack_160;
  if (uStack_160 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_160 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_160 + 0x10))(uStack_160);
      func_0x0412c2d0(plVar8);
    }
  }
  return;
}


