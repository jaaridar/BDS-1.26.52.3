/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x83e74b0 (ELF vaddr 0x82e74b0)
 * Label: caller-of-callee
 * Body:  [[083e74b0, 083e8403] [083e8410, 083e8b27] [083e8b30, 083e8f03] [083e8f10, 083e9869]]
 * Ghidra: FUN_083e74b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083e74b0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong *unaff_R12;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  bool bVar23;
  undefined4 auStack_418 [2];
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined4 uStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  long lStack_3b0;
  uint uStack_3a4;
  ulong *puStack_3a0;
  ulong *puStack_398;
  ulong *puStack_390;
  long lStack_388;
  long lStack_380;
  undefined4 uStack_378;
  long *aplStack_370 [24];
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  uint uStack_288;
  uint uStack_284;
  char cStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  uint uStack_250;
  uint uStack_24c;
  char cStack_248;
  undefined7 uStack_247;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined8 uStack_208;
  ulong uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined1 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
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
  uint uStack_100;
  uint uStack_fc;
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
  uint uStack_c0;
  uint uStack_bc;
  char cStack_b8;
  undefined7 uStack_b7;
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
  uint uStack_80;
  uint uStack_7c;
  undefined1 uStack_78;
  undefined7 uStack_77;
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
  uint uStack_40;
  uint uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x079f2f50();
  func_0x07dd2aa0(param_1);
  func_0x07cc1200(param_1);
  func_0x07dbaaa0(param_1);
  func_0x078e6760(param_1);
  if (DAT_0f5d19f8 == '\0') goto LAB_083e9601;
  do {
    plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d1978 + 4)) * 8);
    do {
      lVar12 = *plVar10;
      if (lVar12 == -1) goto LAB_083e7550;
      plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(_DAT_0f5d1978 + 4));
    if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_083e7550:
      puVar9 = &DAT_0f5d1978;
      if (iRam000000000f5d19d8 != -0x2b3da790) goto LAB_083e75bd;
LAB_083e757b:
      lVar12 = *(long *)(puVar9 + 0x68);
      if (lVar12 == 0) goto LAB_083e75bd;
      bVar23 = (*(byte *)(lVar12 + 8) & 1) != 0;
      lVar15 = lVar12 + 9;
      if (bVar23) {
        lVar15 = *(long *)(lVar12 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
      if (bVar23) {
        uVar17 = *(ulong *)(lVar12 + 0x10);
      }
      func_0x084776a0(&uStack_2b0,param_1,lVar15,uVar17);
    }
    else {
      puVar9 = (undefined *)plVar10[2];
      if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_083e757b;
LAB_083e75bd:
      func_0x084776a0(&uStack_2b0,param_1,&UNK_011be67f,0x19);
    }
    if (cStack_280 != '\0') goto LAB_083e84ac;
    func_0x08478200(&lStack_388,&uStack_2b0,&UNK_0147eaa6,0xe,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f012438;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = uStack_378;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 1;
    uStack_3f8 = 0;
    puStack_3f0 = &UNK_05fc5e00;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = &UNK_05dcda00;
    puStack_3d8 = &UNK_084787c0;
    puStack_3d0 = &UNK_08478920;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x084784c0(&lStack_388);
    cStack_b8 = cStack_280;
    uStack_c8 = uStack_290;
    uStack_c4 = uStack_28c;
    uStack_c0 = uStack_288;
    uStack_bc = uStack_284;
    uStack_d8 = uStack_2a0;
    uStack_d4 = uStack_29c;
    uStack_d0 = uStack_298;
    uStack_cc = uStack_294;
    uStack_e8 = uStack_2b0;
    uStack_e4 = uStack_2ac;
    uStack_e0 = uStack_2a8;
    uStack_dc = uStack_2a4;
    FUN_048b0bc0(aplStack_370);
    uStack_168 = uStack_e8;
    uStack_164 = uStack_e4;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    uStack_138 = CONCAT71(uStack_b7,cStack_b8);
    func_0x08478200(&lStack_388,&uStack_168,&UNK_01417cbc,4,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f012438;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = uStack_378;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 1;
    uStack_3f8 = 0;
    puStack_3f0 = &UNK_05fc5e00;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = &UNK_05dcda00;
    puStack_3d8 = &UNK_08478af0;
    puStack_3d0 = &UNK_08478c50;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x084784c0(&lStack_388);
    uStack_78 = (undefined1)uStack_138;
    uStack_88 = uStack_148;
    uStack_84 = uStack_144;
    uStack_80 = uStack_140;
    uStack_7c = uStack_13c;
    uStack_98 = uStack_158;
    uStack_94 = uStack_154;
    uStack_90 = uStack_150;
    uStack_8c = uStack_14c;
    uStack_a8 = uStack_168;
    uStack_a4 = uStack_164;
    uStack_a0 = uStack_160;
    uStack_9c = uStack_15c;
    FUN_048b0bc0(aplStack_370);
    uStack_128 = uStack_a8;
    uStack_124 = uStack_a4;
    uStack_120 = uStack_a0;
    uStack_11c = uStack_9c;
    uStack_118 = uStack_98;
    uStack_114 = uStack_94;
    uStack_110 = uStack_90;
    uStack_10c = uStack_8c;
    uStack_108 = uStack_88;
    uStack_104 = uStack_84;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    uStack_f8 = CONCAT71(uStack_77,uStack_78);
    func_0x08478200(&lStack_388,&uStack_128,&UNK_0139669c,6,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f012438;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = uStack_378;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 1;
    uStack_3f8 = 0;
    puStack_3f0 = &UNK_05fc5e00;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = &UNK_05dcda00;
    puStack_3d8 = &UNK_08478e30;
    puStack_3d0 = &UNK_08478f90;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x084784c0(&lStack_388);
    uStack_38 = (undefined1)uStack_f8;
    uStack_48 = uStack_108;
    uStack_44 = uStack_104;
    uStack_40 = uStack_100;
    uStack_3c = uStack_fc;
    uStack_58 = uStack_118;
    uStack_54 = uStack_114;
    uStack_50 = uStack_110;
    uStack_4c = uStack_10c;
    uStack_68 = uStack_128;
    uStack_64 = uStack_124;
    uStack_60 = uStack_120;
    uStack_5c = uStack_11c;
    FUN_048b0bc0(aplStack_370);
    uStack_1e8 = CONCAT44(uStack_64,uStack_68);
    uStack_1e0 = CONCAT44(uStack_5c,uStack_60);
    uStack_1d8 = uStack_58;
    uStack_1d4 = uStack_54;
    uStack_1d0 = uStack_50;
    uStack_1cc = uStack_4c;
    uStack_1c8 = uStack_48;
    uStack_1c4 = uStack_44;
    uStack_1c0 = uStack_40;
    uStack_1bc = uStack_3c;
    uStack_1b8 = CONCAT71(uStack_37,uStack_38);
    func_0x08478200(&lStack_388,&uStack_1e8,&UNK_014cf679,0x11,0);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f1191d0;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = 0xbf59ec06;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 2;
    uStack_3f8 = 1;
    puStack_3f0 = &UNK_0847a0b0;
    puStack_3e8 = &UNK_07d98660;
    puStack_3e0 = &UNK_08479d90;
    puStack_3d8 = &UNK_0847a0d0;
    puStack_3d0 = &UNK_0847a2f0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    iVar8 = *(int *)(lStack_380 + 0x1c);
    if (iVar8 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_380 + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != *(int *)(lStack_380 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar12 = *(long *)(piVar11 + 0xc);
      while (lVar12 != *(long *)(lStack_380 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar12 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_380 + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != *(int *)(lStack_380 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar2 = (uint *)(*(long *)(lStack_380 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x084784c0(&lStack_388);
    uStack_178 = (undefined1)uStack_1b8;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_1a8 = (undefined4)uStack_1e8;
    uStack_1a4 = uStack_1e8._4_4_;
    uStack_1a0 = (undefined4)uStack_1e0;
    uStack_19c = uStack_1e0._4_4_;
    FUN_048b0bc0(aplStack_370);
    func_0x08478200(&lStack_388,&uStack_1a8,&UNK_011a3828,0xb,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0ec830;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = uStack_378;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 1;
    uStack_3f8 = 0;
    puStack_3f0 = &UNK_07965a00;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = &SUB_0791b220;
    puStack_3d8 = &UNK_0847a7f0;
    puStack_3d0 = &UNK_0847aa60;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x084784c0(&lStack_388);
    cStack_248 = uStack_178;
    uStack_258 = uStack_188;
    uStack_254 = uStack_184;
    uStack_250 = uStack_180;
    uStack_24c = uStack_17c;
    uStack_268 = uStack_198;
    uStack_264 = uStack_194;
    uStack_260 = uStack_190;
    uStack_25c = uStack_18c;
    uStack_278 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_270 = uStack_1a0;
    uStack_26c = uStack_19c;
    FUN_048b0bc0(aplStack_370);
    uStack_238 = (undefined4)uStack_278;
    uStack_234 = uStack_278._4_4_;
    uStack_230 = uStack_270;
    uStack_22c = uStack_26c;
    uStack_228 = uStack_268;
    uStack_224 = uStack_264;
    uStack_220 = uStack_260;
    uStack_21c = uStack_25c;
    uStack_218 = uStack_258;
    uStack_214 = uStack_254;
    uStack_210 = uStack_250;
    uStack_20c = uStack_24c;
    uStack_208 = CONCAT71(uStack_247,cStack_248);
    func_0x08478200(&lStack_388,&uStack_238,&UNK_014b407c,0x15,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = uStack_378;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 1;
    uStack_3f8 = 0;
    puStack_3f0 = &UNK_0606fa40;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = &SUB_0490cb20;
    puStack_3d8 = &UNK_0847ac40;
    puStack_3d0 = &UNK_0847ada0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    iVar8 = *(int *)(lStack_380 + 0x1c);
    if (iVar8 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_380 + 0x10) + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != *(int *)(lStack_380 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      lVar12 = *(long *)(piVar11 + 0xc);
      while (lVar12 != *(long *)(lStack_380 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar12 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar8 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_380 + 0x10) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != *(int *)(lStack_380 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar8 == 0) {
      puVar2 = (uint *)(*(long *)(lStack_380 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x084784c0(&lStack_388);
    uVar5 = uStack_20c;
    uVar4 = uStack_210;
    unaff_R12 = (ulong *)CONCAT44(uStack_234,uStack_238);
    puVar14 = (ulong *)(ulong)uStack_20c;
    FUN_048b0bc0(aplStack_370);
    if ((DAT_0f5d19f8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d19f8), iVar8 != 0)) {
      func_0x08477070();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1978,0xf53dab8);
      func_0x0410844d(&DAT_0f5d19f8);
    }
    puVar19 = unaff_R12 + 3;
    plVar10 = (long *)(unaff_R12[3] +
                      (ulong)((int)(unaff_R12[4] - unaff_R12[3] >> 3) - 1U &
                             *(uint *)(_DAT_0f5d1978 + 4)) * 8);
    do {
      lVar12 = *plVar10;
      if (lVar12 == -1) goto LAB_083e8131;
      plVar10 = (long *)(unaff_R12[6] + lVar12 * 0x18);
    } while (*(uint *)(unaff_R12[6] + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5d1978 + 4));
    if (plVar10 == (long *)unaff_R12[7]) {
LAB_083e8131:
      puVar9 = &DAT_0f5d1978;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    if ((1 < uVar4 - 1) &&
       (cVar6 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01310d25),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar12 = func_0x048b0c90(puVar19,puVar9,puVar14,1);
    if (lVar12 == 0) {
      lStack_388 = 0;
      lStack_380 = 0;
      func_0x048b0d20(&lStack_388);
      *(undefined1 *)(*(long *)(lStack_388 + 0x58) + 0xa8) = 1;
    }
    else {
      *(undefined1 *)(*(long *)(lVar12 + 0x58) + 0xa8) = 1;
    }
    if (uVar4 == 4) {
      if ((DAT_0f5d19f8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d19f8), iVar8 != 0)) {
        func_0x08477070();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1978,0xf53dab8);
        func_0x0410844d(&DAT_0f5d19f8);
      }
      plVar10 = (long *)(unaff_R12[3] +
                        (ulong)((int)(unaff_R12[4] - unaff_R12[3] >> 3) - 1U &
                               *(uint *)(_DAT_0f5d1978 + 4)) * 8);
      break;
    }
    if (uVar4 != 1) goto LAB_083e84ac;
    if (DAT_0f5d19f8 == '\0') goto LAB_083e975a;
LAB_083e81dd:
    plVar10 = (long *)(unaff_R12[3] +
                      (ulong)((int)(unaff_R12[4] - unaff_R12[3] >> 3) - 1U &
                             *(uint *)(_DAT_0f5d1978 + 4)) * 8);
    do {
      lVar12 = *plVar10;
      if (lVar12 == -1) goto LAB_083e8239;
      plVar10 = (long *)(unaff_R12[6] + lVar12 * 0x18);
    } while (*(uint *)(unaff_R12[6] + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5d1978 + 4));
    if (plVar10 == (long *)unaff_R12[7]) {
LAB_083e8239:
      puVar9 = &DAT_0f5d1978;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    lVar12 = func_0x048b0c90(puVar19,puVar9,(ulong)puVar14 & 0xffffffff,1);
    if (lVar12 == 0) {
      lStack_388 = 0;
      lStack_380 = 0;
      func_0x048b0d20(&lStack_388);
      lVar12 = lStack_388;
    }
    lVar12 = *(long *)(lVar12 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
LAB_083e8464:
    puVar13[1] = 0xffffffffffffffff;
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0xff;
    *puVar13 = &UNK_0f0edce8;
    *(undefined8 *)((long)puVar13 + 0x1c) = 0x7fffffff8000;
    *(undefined8 *)((long)puVar13 + 0x24) = 0;
    plVar10 = *(long **)(lVar12 + 8);
    *(undefined8 **)(lVar12 + 8) = puVar13;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))();
    }
LAB_083e84ac:
    if ((DAT_0f5d1b68 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d1b68), iVar8 != 0)) {
      func_0x0847af70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1ae8,0xf53dab8);
      func_0x0410844d(&DAT_0f5d1b68);
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d1ae8 + 4)) * 8);
    do {
      lVar12 = *plVar10;
      if (lVar12 == -1) goto LAB_083e8510;
      plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(_DAT_0f5d1ae8 + 4));
    if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_083e8510:
      puVar9 = &DAT_0f5d1ae8;
      if (iRam000000000f5d1b48 != -0x2b3da790) goto LAB_083e857d;
LAB_083e853b:
      lVar12 = *(long *)(puVar9 + 0x68);
      if (lVar12 == 0) goto LAB_083e857d;
      bVar23 = (*(byte *)(lVar12 + 8) & 1) != 0;
      lVar15 = lVar12 + 9;
      if (bVar23) {
        lVar15 = *(long *)(lVar12 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
      if (bVar23) {
        uVar17 = *(ulong *)(lVar12 + 0x10);
      }
      func_0x0847b6d0(&uStack_2b0,param_1,lVar15,uVar17);
    }
    else {
      puVar9 = (undefined *)plVar10[2];
      if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_083e853b;
LAB_083e857d:
      func_0x0847b6d0(&uStack_2b0,param_1,&UNK_0141965c,0x1e);
    }
    if (cStack_280 == '\0') {
      func_0x0847c230(&lStack_388,&uStack_2b0,&UNK_0149babe,0x13);
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar10 = (long)&UNK_0f0f7e50;
      if (aplStack_370[0] != (long *)0x0) {
        lVar12 = *aplStack_370[0];
        aplStack_370[0] = plVar10;
        (**(code **)(lVar12 + 8))();
        plVar10 = aplStack_370[0];
      }
      aplStack_370[0] = plVar10;
      auStack_418[0] = uStack_378;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_400 = 1;
      uStack_3f8 = 0;
      puStack_3f0 = &UNK_07db4920;
      puStack_3e8 = &SUB_048b06d0;
      puStack_3e0 = &SUB_07d5bd10;
      puStack_3d8 = &UNK_0847c7e0;
      puStack_3d0 = &UNK_0847c950;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      plStack_3b8 = (long *)0x0;
      func_0x048b05a0(lStack_380,auStack_418);
      plVar10 = plStack_3b8;
      if (plStack_3b8 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_3b8 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
          func_0x0412c2d0(plVar10);
        }
      }
      func_0x0847c4e0(&lStack_388);
      uStack_208 = CONCAT71(uStack_208._1_7_,cStack_280);
      uStack_218 = uStack_290;
      uStack_214 = uStack_28c;
      uStack_210 = uStack_288;
      uStack_20c = uStack_284;
      uStack_228 = uStack_2a0;
      uStack_224 = uStack_29c;
      uStack_220 = uStack_298;
      uStack_21c = uStack_294;
      uStack_238 = uStack_2b0;
      uStack_234 = uStack_2ac;
      uStack_230 = uStack_2a8;
      uStack_22c = uStack_2a4;
      FUN_048b0bc0(aplStack_370);
      func_0x0847c230(&lStack_388,&uStack_238,&UNK_0149a9c1,5);
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar10 = (long)&UNK_0f119340;
      if (aplStack_370[0] != (long *)0x0) {
        lVar12 = *aplStack_370[0];
        aplStack_370[0] = plVar10;
        (**(code **)(lVar12 + 8))();
        plVar10 = aplStack_370[0];
      }
      aplStack_370[0] = plVar10;
      auStack_418[0] = uStack_378;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_400 = 1;
      uStack_3f8 = 0;
      puStack_3f0 = &UNK_084800b0;
      puStack_3e8 = &SUB_048b06d0;
      puStack_3e0 = &UNK_0847ec70;
      puStack_3d8 = &UNK_08480170;
      puStack_3d0 = &UNK_08480390;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      plStack_3b8 = (long *)0x0;
      func_0x048b05a0(lStack_380,auStack_418);
      plVar10 = plStack_3b8;
      if (plStack_3b8 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_3b8 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
          func_0x0412c2d0(plVar10);
        }
      }
      func_0x0847c4e0(&lStack_388);
      FUN_048b0bc0(aplStack_370);
    }
    if ((DAT_0f5d1df0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d1df0), iVar8 != 0)) {
      func_0x084808d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1d70,0xf53dab8);
      func_0x0410844d(&DAT_0f5d1df0);
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f5d1d70 + 4)) * 8);
    do {
      lVar12 = *plVar10;
      if (lVar12 == -1) goto LAB_083e88b0;
      plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(_DAT_0f5d1d70 + 4));
    if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_083e88b0:
      puVar9 = &DAT_0f5d1d70;
      if (iRam000000000f5d1dd0 != -0x2b3da790) goto LAB_083e891d;
LAB_083e88db:
      lVar12 = *(long *)(puVar9 + 0x68);
      if (lVar12 == 0) goto LAB_083e891d;
      bVar23 = (*(byte *)(lVar12 + 8) & 1) != 0;
      lVar15 = lVar12 + 9;
      if (bVar23) {
        lVar15 = *(long *)(lVar12 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
      if (bVar23) {
        uVar17 = *(ulong *)(lVar12 + 0x10);
      }
      FUN_08481090(&uStack_2b0,param_1,lVar15,uVar17);
    }
    else {
      puVar9 = (undefined *)plVar10[2];
      if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_083e88db;
LAB_083e891d:
      FUN_08481090(&uStack_2b0,param_1,&UNK_01229657,0x15);
    }
    if (cStack_280 != '\0') {
      return;
    }
    func_0x08481bf0(&lStack_388,&uStack_2b0,&UNK_013603c8,6,1);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0ef2e0;
    if (aplStack_370[0] != (long *)0x0) {
      lVar12 = *aplStack_370[0];
      aplStack_370[0] = plVar10;
      (**(code **)(lVar12 + 8))();
      plVar10 = aplStack_370[0];
    }
    aplStack_370[0] = plVar10;
    auStack_418[0] = uStack_378;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 1;
    uStack_3f8 = 0;
    puStack_3f0 = &UNK_07b03670;
    puStack_3e8 = &SUB_048b06d0;
    puStack_3e0 = &SUB_07aff450;
    puStack_3d8 = &UNK_084821b0;
    puStack_3d0 = &UNK_08482310;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    plStack_3b8 = (long *)0x0;
    func_0x048b05a0(lStack_380,auStack_418);
    plVar10 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x08481eb0(&lStack_388);
    cVar6 = cStack_280;
    lStack_3b0 = CONCAT44(uStack_2ac,uStack_2b0);
    uStack_1e8 = CONCAT44(uStack_2a4,uStack_2a8);
    uStack_1e0 = CONCAT44(uStack_29c,uStack_2a0);
    uStack_1d8 = uStack_298;
    uStack_1d4 = uStack_294;
    uStack_1d0 = uStack_290;
    uStack_1cc = uStack_28c;
    puVar19 = (ulong *)(ulong)uStack_288;
    uStack_3a4 = uStack_284;
    FUN_048b0bc0(aplStack_370);
    puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x220);
    if (puVar14 == (ulong *)0x0) {
      func_0x0eec74c0(0x220,0);
    }
    puVar21 = puVar14 + 0x44;
    lVar12 = 0;
    puVar20 = puVar14;
    puStack_390 = puVar19;
    while (param_1 = lVar12, uVar17 = (ulong)(byte)(&UNK_018b57d0)[param_1], puVar20 < puVar21) {
      *puVar20 = uVar17;
      puVar20 = puVar20 + 1;
joined_r0x083e8b3f:
      lVar12 = param_1 + 1;
      if (param_1 + 1 == 0x44) goto LAB_083e8c6c;
    }
    lStack_1f0 = (long)puVar20 - (long)puVar14;
    lVar12 = lStack_1f0 >> 3;
    puVar19 = (ulong *)(lVar12 + 1);
    if (puVar19 < (ulong *)0x2000000000000000) {
      uVar22 = (long)puVar21 - (long)puVar14;
      unaff_R12 = (ulong *)((long)uVar22 >> 2);
      if ((ulong *)((long)uVar22 >> 2) <= puVar19) {
        unaff_R12 = puVar19;
      }
      if (0x7ffffffffffffff7 < uVar22) {
        unaff_R12 = (ulong *)0x1fffffffffffffff;
      }
      puStack_3a0 = puVar14;
      puStack_398 = puVar21;
      uStack_1f8 = uVar17;
      if (unaff_R12 < (ulong *)0x2000000000000000) {
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)unaff_R12 * 8);
        if (lVar15 == 0) {
          func_0x0eec74c0((long)unaff_R12 * 8,0);
        }
        puVar3 = puStack_3a0;
        puStack_398 = (ulong *)(lVar15 + (long)unaff_R12 * 8);
        *(ulong *)(lVar15 + lStack_1f0) = uStack_1f8;
        puVar20 = (ulong *)(lVar15 + lStack_1f0 + 8);
        puVar14 = (ulong *)(lVar15 + lStack_1f0 + lVar12 * -8);
        func_0x0eee2f00(puVar14,puStack_3a0);
        unaff_R12 = puVar3;
        puVar19 = puStack_390;
        puVar21 = puStack_398;
        if (puVar3 != (ulong *)0x0) {
          thunk_FUN_0ee326a0(puVar3,uVar22);
          puVar19 = puStack_390;
          puVar21 = puStack_398;
        }
        goto joined_r0x083e8b3f;
      }
    }
    else {
      func_0x0774b760();
    }
    func_0x04882eb0();
LAB_083e9601:
    iVar8 = func_0x04108328(&DAT_0f5d19f8);
    if (iVar8 != 0) {
      func_0x08477070();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1978,0xf53dab8);
      func_0x0410844d(&DAT_0f5d19f8);
    }
  } while( true );
  while (plVar10 = (long *)(unaff_R12[6] + lVar12 * 0x18),
        *(uint *)(unaff_R12[6] + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5d1978 + 4)) {
    lVar12 = *plVar10;
    if (lVar12 == -1) goto LAB_083e82e9;
  }
  if (plVar10 == (long *)unaff_R12[7]) {
LAB_083e82e9:
    puVar9 = &DAT_0f5d1978;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
  }
  lVar12 = func_0x048b1040(puVar19,puVar9,uVar5,1);
  if (lVar12 == 0) {
    lStack_388 = 0;
    lStack_380 = 0;
    func_0x048b10d0(&lStack_388);
    lVar15 = *(long *)(lStack_388 + 0x38);
    lVar12 = lStack_388;
  }
  else {
    lVar15 = *(long *)(lVar12 + 0x38);
  }
  if (lVar15 == 0) {
    lStack_388 = 0;
    lStack_380 = 0;
    func_0x048b10d0(&lStack_388);
    lVar15 = lStack_388;
    if (lStack_388 == 0) goto LAB_083e843e;
  }
  do {
    lVar12 = lVar15;
    lVar15 = *(long *)(lVar12 + 0x38);
    if (*(long *)(lVar12 + 0x38) == 0) {
      lStack_388 = 0;
      lStack_380 = 0;
      func_0x048b10d0(&lStack_388);
      lVar15 = lStack_388;
    }
  } while (lVar15 != 0);
LAB_083e843e:
  lVar12 = *(long *)(lVar12 + 0x48);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar13 != (undefined8 *)0x0) goto LAB_083e8464;
  func_0x0eec74c0(0x30,0);
  goto LAB_083e8464;
LAB_083e8c6c:
  param_1 = param_1 + 1;
  lVar12 = (long)puVar20 - (long)puVar14;
  puStack_3a0 = puVar14;
  if (lVar12 == 0) {
    lVar18 = 0;
    lVar15 = 0;
  }
  else {
    if (lVar12 < 0) {
      func_0x0774b760();
LAB_083e975a:
      iVar8 = func_0x04108328(&DAT_0f5d19f8);
      if (iVar8 != 0) {
        func_0x08477070();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1978,0xf53dab8);
        func_0x0410844d(&DAT_0f5d19f8);
      }
      goto LAB_083e81dd;
    }
    lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
    if (lVar15 == 0) {
      func_0x0eec74c0(lVar12,0);
    }
    lVar18 = lVar15 + lVar12;
    func_0x0eee2f00(lVar15,puStack_3a0,lVar12);
  }
  if ((int)puVar19 == 4) {
    if ((DAT_0f5d1df0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d1df0), iVar8 != 0)) {
      func_0x084808d0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1d70,0xf53dab8);
      func_0x0410844d(&DAT_0f5d1df0);
    }
    plVar10 = (long *)(*(long *)(lStack_3b0 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_3b0 + 0x20) -
                                           *(long *)(lStack_3b0 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d1d70 + 4)) * 8);
    goto LAB_083e8db0;
  }
  if ((int)puVar19 != 1) goto LAB_083e8fb0;
  if ((DAT_0f5d1df0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d1df0), iVar8 != 0)) {
    func_0x084808d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1d70,0xf53dab8);
    func_0x0410844d(&DAT_0f5d1df0);
  }
  plVar10 = (long *)(*(long *)(lStack_3b0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_3b0 + 0x20) -
                                         *(long *)(lStack_3b0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5d1d70 + 4)) * 8);
  goto LAB_083e8d20;
  while (plVar10 = (long *)(*(long *)(lStack_3b0 + 0x30) + lVar12 * 0x18),
        *(uint *)(*(long *)(lStack_3b0 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5d1d70 + 4))
  {
LAB_083e8d20:
    lVar12 = *plVar10;
    if (lVar12 == -1) goto LAB_083e8d4d;
  }
  if (plVar10 == *(long **)(lStack_3b0 + 0x38)) {
LAB_083e8d4d:
    puVar9 = &DAT_0f5d1d70;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
  }
  lVar12 = func_0x048b0c90(lStack_3b0 + 0x18,puVar9,uStack_3a4,1);
  if (lVar12 == 0) {
    lStack_388 = 0;
    lStack_380 = 0;
    func_0x048b0d20(&lStack_388);
    lVar12 = lStack_388;
  }
  lVar12 = *(long *)(lVar12 + 0x58);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  goto LAB_083e8f64;
  while (plVar10 = (long *)(*(long *)(lStack_3b0 + 0x30) + lVar12 * 0x18),
        *(uint *)(*(long *)(lStack_3b0 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5d1d70 + 4))
  {
LAB_083e8db0:
    lVar12 = *plVar10;
    if (lVar12 == -1) goto LAB_083e8ddd;
  }
  if (plVar10 == *(long **)(lStack_3b0 + 0x38)) {
LAB_083e8ddd:
    puVar9 = &DAT_0f5d1d70;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
  }
  lVar12 = func_0x048b1040(lStack_3b0 + 0x18,puVar9,uStack_3a4,1);
  if (lVar12 == 0) {
    lStack_388 = 0;
    lStack_380 = 0;
    func_0x048b10d0(&lStack_388);
    lVar16 = *(long *)(lStack_388 + 0x38);
    lVar12 = lStack_388;
    if (lVar16 == 0) goto LAB_083e8ed5;
LAB_083e8efa:
    do {
      lVar12 = lVar16;
      lVar16 = *(long *)(lVar12 + 0x38);
      if (*(long *)(lVar12 + 0x38) == 0) {
        lStack_388 = 0;
        lStack_380 = 0;
        func_0x048b10d0(&lStack_388);
        lVar16 = lStack_388;
      }
    } while (lVar16 != 0);
  }
  else {
    lVar16 = *(long *)(lVar12 + 0x38);
    if (*(long *)(lVar12 + 0x38) != 0) goto LAB_083e8efa;
LAB_083e8ed5:
    lStack_388 = 0;
    lStack_380 = 0;
    func_0x048b10d0(&lStack_388);
    lVar16 = lStack_388;
    if (lStack_388 != 0) goto LAB_083e8efa;
  }
  lVar12 = *(long *)(lVar12 + 0x48);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
LAB_083e8f64:
  puVar13[1] = 0xffffffffffffffff;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0xff;
  *puVar13 = &UNK_0f4e3aa0;
  puVar13[4] = lVar15;
  puVar13[5] = lVar18;
  puVar13[6] = lVar18;
  plVar10 = *(long **)(lVar12 + 8);
  *(undefined8 **)(lVar12 + 8) = puVar13;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
  lVar18 = 0;
  lVar15 = 0;
  puVar19 = puStack_390;
LAB_083e8fb0:
  uStack_198 = uStack_1d8;
  uStack_194 = uStack_1d4;
  uStack_190 = uStack_1d0;
  uStack_18c = uStack_1cc;
  uStack_1a8 = (undefined4)uStack_1e8;
  uStack_1a4 = uStack_1e8._4_4_;
  uStack_1a0 = (undefined4)uStack_1e0;
  uStack_19c = uStack_1e0._4_4_;
  if ((DAT_0f5d1df0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5d1df0), iVar8 != 0)) {
    func_0x084808d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d1d70,0xf53dab8);
    func_0x0410844d(&DAT_0f5d1df0);
  }
  lVar12 = lStack_3b0 + 0x18;
  plVar10 = (long *)(*(long *)(lStack_3b0 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_3b0 + 0x20) -
                                         *(long *)(lStack_3b0 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f5d1d70 + 4)) * 8);
  do {
    lVar16 = *plVar10;
    if (lVar16 == -1) goto LAB_083e9045;
    plVar10 = (long *)(*(long *)(lStack_3b0 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lStack_3b0 + 0x30) + 8 + lVar16 * 0x18) !=
           *(uint *)(_DAT_0f5d1d70 + 4));
  if (plVar10 == *(long **)(lStack_3b0 + 0x38)) {
LAB_083e9045:
    puVar9 = &DAT_0f5d1d70;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
  }
  if ((1 < (int)puVar19 - 1U) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0147eafc),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar12 = func_0x048b0c90(lVar12,puVar9,uStack_3a4,1);
  if (lVar12 == 0) {
    lStack_388 = 0;
    lStack_380 = 0;
    func_0x048b0d20(&lStack_388);
    lVar12 = lStack_388;
  }
  *(undefined1 *)(*(long *)(lVar12 + 0x58) + 0xa8) = 4;
  uStack_278 = lStack_3b0;
  uStack_270 = uStack_1a8;
  uStack_26c = uStack_1a4;
  uStack_268 = uStack_1a0;
  uStack_264 = uStack_19c;
  uStack_260 = uStack_198;
  uStack_25c = uStack_194;
  uStack_258 = uStack_190;
  uStack_254 = uStack_18c;
  uStack_24c = uStack_3a4;
  cStack_248 = cVar6;
  uStack_250 = (int)puVar19;
  func_0x08481bf0(&lStack_388,&uStack_278,&UNK_012dd008,0x11,1);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f0fade0;
  if (aplStack_370[0] != (long *)0x0) {
    lVar12 = *aplStack_370[0];
    aplStack_370[0] = plVar10;
    (**(code **)(lVar12 + 8))();
    plVar10 = aplStack_370[0];
  }
  aplStack_370[0] = plVar10;
  auStack_418[0] = uStack_378;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 1;
  uStack_3f8 = 0;
  puStack_3f0 = &UNK_07e3b870;
  puStack_3e8 = &SUB_048b06d0;
  puStack_3e0 = &SUB_07e3b560;
  puStack_3d8 = &UNK_08482770;
  puStack_3d0 = &UNK_084828d0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  plStack_3b8 = (long *)0x0;
  func_0x048b05a0(lStack_380,auStack_418);
  plVar10 = plStack_3b8;
  if (plStack_3b8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b8 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x08481eb0(&lStack_388);
  uStack_208 = CONCAT71(uStack_208._1_7_,cStack_248);
  uStack_218 = uStack_258;
  uStack_214 = uStack_254;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  uStack_228 = uStack_268;
  uStack_224 = uStack_264;
  uStack_220 = uStack_260;
  uStack_21c = uStack_25c;
  uStack_238 = (undefined4)uStack_278;
  uStack_234 = uStack_278._4_4_;
  uStack_230 = uStack_270;
  uStack_22c = uStack_26c;
  FUN_048b0bc0(aplStack_370);
  func_0x08481bf0(&lStack_388,&uStack_238,&UNK_01278ac7,10,0);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f119530;
  if (aplStack_370[0] != (long *)0x0) {
    lVar12 = *aplStack_370[0];
    aplStack_370[0] = plVar10;
    (**(code **)(lVar12 + 8))();
    plVar10 = aplStack_370[0];
  }
  aplStack_370[0] = plVar10;
  auStack_418[0] = 0x1776d71;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 2;
  uStack_3f8 = 1;
  puStack_3f0 = &UNK_08487680;
  puStack_3e8 = &UNK_07d98660;
  puStack_3e0 = &UNK_084872b0;
  puStack_3d8 = &UNK_084876a0;
  puStack_3d0 = &UNK_084879c0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  plStack_3b8 = (long *)0x0;
  func_0x048b05a0(lStack_380,auStack_418);
  plVar10 = plStack_3b8;
  if (plStack_3b8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b8 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
      func_0x0412c2d0(plVar10);
    }
  }
  iVar8 = *(int *)(lStack_380 + 0x1c);
  if (iVar8 == 2) {
    piVar11 = *(int **)(*(long *)(*(long *)(lStack_380 + 0x10) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != *(int *)(lStack_380 + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar12 = *(long *)(piVar11 + 0xc);
    while (lVar12 != *(long *)(lStack_380 + 8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar12 = *(long *)(piVar11 + 0xc);
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar8 == 1) {
    piVar11 = *(int **)(*(long *)(*(long *)(lStack_380 + 0x10) + 0x78) + 0x48);
    iVar8 = *piVar11;
    while (iVar8 != *(int *)(lStack_380 + 0x18)) {
      piVar11 = piVar11 + 0x1a;
      iVar8 = *piVar11;
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else if (iVar8 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_380 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x08481eb0(&lStack_388);
  FUN_048b0bc0(aplStack_370);
  if (lVar15 != 0) {
    thunk_FUN_0ee326a0(lVar15,lVar18 - lVar15);
  }
  if (puStack_3a0 != (ulong *)0x0) {
    thunk_FUN_0ee326a0(puStack_3a0,(long)puVar21 - (long)puStack_3a0);
  }
  return;
}


