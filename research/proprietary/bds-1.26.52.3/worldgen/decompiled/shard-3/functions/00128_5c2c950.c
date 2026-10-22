/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d2c950 (ELF vaddr 0x5c2c950)
 * Label: string:disable_terrain_rendering
 * Body:  [[05d2c950, 05d2e2f9]]
 * Ghidra: FUN_05d2c950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d2c950(long param_1)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  bool bVar11;
  undefined4 auStack_420 [2];
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined1 auStack_3b8 [8];
  long lStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  char cStack_388;
  undefined1 uStack_384;
  undefined1 uStack_380;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  char cStack_2b8;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  char cStack_278;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  char cStack_238;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  char cStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char cStack_1b8;
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
  undefined4 uStack_180;
  undefined4 uStack_17c;
  char cStack_178;
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
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char cStack_138;
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
  char cStack_38;
  
  lVar4 = func_0x05e88310(param_1 + 0x18);
  if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) {
    bVar11 = (*(byte *)(lVar4 + 8) & 1) != 0;
    puVar9 = (undefined *)(lVar4 + 9);
    if (bVar11) {
      puVar9 = *(undefined **)(lVar4 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar4 + 8) >> 1);
    if (bVar11) {
      uVar8 = *(ulong *)(lVar4 + 0x10);
    }
  }
  else {
    puVar9 = &UNK_013410f4;
    uVar8 = 0xc;
  }
  func_0x05e88770(auStack_3b8,param_1,puVar9,uVar8,0);
  uStack_384 = 0;
  uStack_380 = 0;
  if (cStack_388 == '\0') {
    func_0x05d2e460(&uStack_68,auStack_3b8,&UNK_011ed681,8);
    func_0x05d2e840(&uStack_a8,&uStack_68,&UNK_012d7b7f,5);
    func_0x05d2ec20(auStack_420,&uStack_a8,&UNK_011ed68a,9);
    func_0x05d2f000(&uStack_e8,auStack_420,&UNK_01377180,6);
  }
  lVar4 = func_0x05e8c990(param_1 + 0x18);
  if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) {
    bVar11 = (*(byte *)(lVar4 + 8) & 1) != 0;
    lVar10 = lVar4 + 9;
    if (bVar11) {
      lVar10 = *(long *)(lVar4 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar4 + 8) >> 1);
    if (bVar11) {
      uVar8 = *(ulong *)(lVar4 + 0x10);
    }
    func_0x05e8ce40(&uStack_a8,param_1,lVar10,uVar8);
  }
  else {
    func_0x05e8ce40(&uStack_a8,param_1,&UNK_014ca0c3,0x17);
  }
  if (cStack_78 != '\0') {
    return;
  }
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2cb3f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2cb3f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_a8,&UNK_0142cfc9,0x15);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8dc50;
  puStack_3d8 = &UNK_05e8ddb0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_2b8 = cStack_78;
  uStack_2c8 = uStack_88;
  uStack_2c4 = uStack_84;
  uStack_2c0 = uStack_80;
  uStack_2bc = uStack_7c;
  uStack_2d8 = uStack_98;
  uStack_2d4 = uStack_94;
  uStack_2d0 = uStack_90;
  uStack_2cc = uStack_8c;
  uStack_2e8 = uStack_a8;
  uStack_2e4 = uStack_a4;
  uStack_2e0 = uStack_a0;
  uStack_2dc = uStack_9c;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_2e4,uStack_2e8) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2cd7f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2cd7f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_2e8,&UNK_012d7b85,0xd);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0f00e278;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_05e8c670;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &SUB_05e88310;
  puStack_3e0 = &UNK_05e8df90;
  puStack_3d8 = &UNK_05e8e0f0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_278 = cStack_2b8;
  uStack_288 = uStack_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
  uStack_298 = uStack_2d8;
  uStack_294 = uStack_2d4;
  uStack_290 = uStack_2d0;
  uStack_28c = uStack_2cc;
  uStack_2a8 = uStack_2e8;
  uStack_2a4 = uStack_2e4;
  uStack_2a0 = uStack_2e0;
  uStack_29c = uStack_2dc;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_2a4,uStack_2a8) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2cfbf:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2cfbf;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_2a8,&UNK_0135ccf6,0x15);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8e550;
  puStack_3d8 = &UNK_05e8e6b0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_238 = cStack_278;
  uStack_248 = uStack_288;
  uStack_244 = uStack_284;
  uStack_240 = uStack_280;
  uStack_23c = uStack_27c;
  uStack_258 = uStack_298;
  uStack_254 = uStack_294;
  uStack_250 = uStack_290;
  uStack_24c = uStack_28c;
  uStack_268 = uStack_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_264,uStack_268) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2d1df:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2d1df;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_268,&UNK_0123d934,0xc);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8e890;
  puStack_3d8 = &UNK_05e8e9f0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_1f8 = cStack_238;
  uStack_208 = uStack_248;
  uStack_204 = uStack_244;
  uStack_200 = uStack_240;
  uStack_1fc = uStack_23c;
  uStack_218 = uStack_258;
  uStack_214 = uStack_254;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  uStack_228 = uStack_268;
  uStack_224 = uStack_264;
  uStack_220 = uStack_260;
  uStack_21c = uStack_25c;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_224,uStack_228) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2d3ff:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2d3ff;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_228,&UNK_011b953b,0xc);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8ebd0;
  puStack_3d8 = &UNK_05e8ed30;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_1b8 = cStack_1f8;
  uStack_1c8 = uStack_208;
  uStack_1c4 = uStack_204;
  uStack_1c0 = uStack_200;
  uStack_1bc = uStack_1fc;
  uStack_1d8 = uStack_218;
  uStack_1d4 = uStack_214;
  uStack_1d0 = uStack_210;
  uStack_1cc = uStack_20c;
  uStack_1e8 = uStack_228;
  uStack_1e4 = uStack_224;
  uStack_1e0 = uStack_220;
  uStack_1dc = uStack_21c;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_1e4,uStack_1e8) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2d61f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2d61f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_1e8,&UNK_014484d5,0x18);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8ef10;
  puStack_3d8 = &UNK_05e8f070;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_178 = cStack_1b8;
  uStack_188 = uStack_1c8;
  uStack_184 = uStack_1c4;
  uStack_180 = uStack_1c0;
  uStack_17c = uStack_1bc;
  uStack_198 = uStack_1d8;
  uStack_194 = uStack_1d4;
  uStack_190 = uStack_1d0;
  uStack_18c = uStack_1cc;
  uStack_1a8 = uStack_1e8;
  uStack_1a4 = uStack_1e4;
  uStack_1a0 = uStack_1e0;
  uStack_19c = uStack_1dc;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_1a4,uStack_1a8) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2d83f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2d83f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_1a8,&UNK_0145fba8,0x19);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8f250;
  puStack_3d8 = &UNK_05e8f3b0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_138 = cStack_178;
  uStack_148 = uStack_188;
  uStack_144 = uStack_184;
  uStack_140 = uStack_180;
  uStack_13c = uStack_17c;
  uStack_158 = uStack_198;
  uStack_154 = uStack_194;
  uStack_150 = uStack_190;
  uStack_14c = uStack_18c;
  uStack_168 = uStack_1a8;
  uStack_164 = uStack_1a4;
  uStack_160 = uStack_1a0;
  uStack_15c = uStack_19c;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_164,uStack_168) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2da5f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2da5f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_168,&UNK_0128bc58,0x18);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8f590;
  puStack_3d8 = &UNK_05e8f6f0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_f8 = cStack_138;
  uStack_108 = uStack_148;
  uStack_104 = uStack_144;
  uStack_100 = uStack_140;
  uStack_fc = uStack_13c;
  uStack_118 = uStack_158;
  uStack_114 = uStack_154;
  uStack_110 = uStack_150;
  uStack_10c = uStack_14c;
  uStack_128 = uStack_168;
  uStack_124 = uStack_164;
  uStack_120 = uStack_160;
  uStack_11c = uStack_15c;
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_124,uStack_128) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2dc7f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2dc7f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_128,&UNK_0142cfdf,0x1e);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8f8d0;
  puStack_3d8 = &UNK_05e8fa30;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
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
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
LAB_05d2de9f:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_3a0._4_4_ == 1) {
      piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
      iVar3 = *piVar6;
      while (iVar3 != (int)uStack_3a0) {
        piVar6 = piVar6 + 0x1a;
        iVar3 = *piVar6;
      }
      goto LAB_05d2de9f;
    }
    if (uStack_3a0._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x05e8d6f0(auStack_3b8,&uStack_e8,&UNK_011b9548,0x1a);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = uStack_3a0;
  }
  uStack_3a0 = plVar5;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8fc10;
  puStack_3d8 = &UNK_05e8fd70;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  cStack_38 = cStack_b8;
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
  func_0x048b0bc0(&uStack_3a0);
  func_0x05e8d380(auStack_3b8,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_3a0._4_4_ == 2) {
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x60);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x16;
      iVar3 = *piVar6;
    }
    lVar4 = *(long *)(piVar6 + 0xc);
    while (lVar4 != lStack_3b0) {
      piVar6 = *(int **)(piVar6 + 0xe);
      lVar4 = *(long *)(piVar6 + 0xc);
    }
  }
  else {
    if (uStack_3a0._4_4_ != 1) {
      if (uStack_3a0._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_05d2e0c3;
    }
    piVar6 = *(int **)(*(long *)(CONCAT44(uStack_3a4,uStack_3a8) + 0x78) + 0x48);
    iVar3 = *piVar6;
    while (iVar3 != (int)uStack_3a0) {
      piVar6 = piVar6 + 0x1a;
      iVar3 = *piVar6;
    }
  }
  *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
LAB_05d2e0c3:
  func_0x05e8d6f0(auStack_3b8,&uStack_68,&UNK_013261db,0x19);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0ef46ef8;
  if (uStack_3a0 != (long *)0x0) {
    lVar4 = *uStack_3a0;
    uStack_3a0 = puVar7;
    (**(code **)(lVar4 + 8))();
    puVar7 = uStack_3a0;
  }
  uStack_3a0 = puVar7;
  auStack_420[0] = uStack_3a8;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 1;
  uStack_400 = 0;
  puStack_3f8 = &UNK_04906f70;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_04906c50;
  puStack_3e0 = &UNK_05e8ff50;
  puStack_3d8 = &UNK_05e900b0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  plStack_3c0 = (long *)0x0;
  FUN_048b05a0(lStack_3b0,auStack_420);
  plVar5 = plStack_3c0;
  if (plStack_3c0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3c0 + 1;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0);
      FUN_0412c2d0(plVar5);
    }
  }
  func_0x05e8d950(auStack_3b8);
  func_0x048b0bc0(&uStack_3a0);
  return;
}


