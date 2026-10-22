/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7db6440 (ELF vaddr 0x7cb6440)
 * Label: caller-of-callee
 * Body:  [[07db6440, 07db6b6a] [07db6b70, 07db7778] [07db7780, 07db79fb]]
 * Ghidra: FUN_07db6440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07db6440(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined1 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined4 uStack_328;
  long *aplStack_320 [23];
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
  int iStack_240;
  undefined4 uStack_23c;
  char cStack_238;
  uint7 uStack_237;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 uStack_218;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  func_0x07cb54f0();
  if ((DAT_0f5bda28 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bda28), iVar5 != 0)) {
    func_0x07df8810();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5bd9a8,0xf53dab8);
    func_0x0410844d(&DAT_0f5bda28);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5bd9a8 + 4)) * 8);
  do {
    lVar9 = *plVar7;
    if (lVar9 == -1) goto LAB_07db64c0;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5bd9a8 + 4));
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_07db64c0:
    puVar6 = &DAT_0f5bd9a8;
    if (iRam000000000f5bda08 != -0x2b3da790) goto LAB_07db652d;
LAB_07db64eb:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_07db652d;
    bVar15 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar12 = lVar9 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar9 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x07df9db0(&uStack_1b0,param_1,lVar12,uVar14);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_07db64eb;
LAB_07db652d:
    func_0x07df9db0(&uStack_1b0,param_1,&UNK_01345bfd,0xc);
  }
  if ((char)puStack_180 == '\0') {
    uStack_368._4_4_ = (uint)((ulong)uStack_368 >> 0x20);
    uStack_3a8._4_4_ = (uint)(uStack_3a8 >> 0x20);
    uStack_3b8._4_4_ = (undefined4)((ulong)uStack_3b8 >> 0x20);
    func_0x07dfa910(&lStack_338,&uStack_1b0,&UNK_01417cbc,4);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef46ce8;
    if (aplStack_320[0] != (long *)0x0) {
      lVar9 = *aplStack_320[0];
      aplStack_320[0] = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = aplStack_320[0];
    }
    aplStack_320[0] = plVar7;
    uStack_3b8 = (undefined *)CONCAT44(uStack_3b8._4_4_,uStack_328);
    uStack_3b0 = 0;
    uStack_3a8 = (ulong)uStack_3a8._4_4_ << 0x20;
    uStack_3a0 = 1;
    uStack_398 = 0;
    puStack_390 = &UNK_0606fa40;
    puStack_388 = &SUB_048b06d0;
    uStack_380 = &SUB_0490cb20;
    uStack_378 = &UNK_07dfaec0;
    puStack_370 = &UNK_07dfb020;
    uStack_368 = (long *)((ulong)uStack_368._4_4_ << 0x20);
    uStack_360 = 0;
    plStack_358 = (long *)0x0;
    func_0x048b05a0(lStack_330,&uStack_3b8);
    plVar7 = plStack_358;
    if (plStack_358 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_358 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_358 + 0x10))(plStack_358);
        func_0x0412c2d0(plVar7);
      }
    }
    iVar5 = *(int *)(lStack_330 + 0x1c);
    if (iVar5 == 2) {
      piVar8 = *(int **)(*(long *)(*(long *)(lStack_330 + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar8;
      while (iVar5 != *(int *)(lStack_330 + 0x18)) {
        piVar8 = piVar8 + 0x16;
        iVar5 = *piVar8;
      }
      lVar9 = *(long *)(piVar8 + 0xc);
      while (lVar9 != *(long *)(lStack_330 + 8)) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar9 = *(long *)(piVar8 + 0xc);
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar8 = *(int **)(*(long *)(*(long *)(lStack_330 + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar8;
      while (iVar5 != *(int *)(lStack_330 + 0x18)) {
        piVar8 = piVar8 + 0x1a;
        iVar5 = *piVar8;
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar2 = (uint *)(*(long *)(lStack_330 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x07dfabc0(&lStack_338);
    cStack_238 = (char)puStack_180;
    uStack_248 = (undefined4)uStack_190;
    uStack_244 = uStack_190._4_4_;
    iStack_240 = (int)uStack_188;
    uStack_23c = uStack_188._4_4_;
    uStack_258 = uStack_1a0;
    uStack_254 = uStack_19c;
    uStack_250 = (undefined4)uStack_198;
    uStack_24c = uStack_198._4_4_;
    uStack_268 = uStack_1b0;
    uStack_264 = uStack_1ac;
    uStack_260 = (undefined4)uStack_1a8;
    uStack_25c = uStack_1a8._4_4_;
    func_0x048b0bc0(aplStack_320);
    func_0x07dfa910(&lStack_338,&uStack_268,&UNK_01345bfd,0xc);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0f86c8;
    if (aplStack_320[0] != (long *)0x0) {
      lVar9 = *aplStack_320[0];
      aplStack_320[0] = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = aplStack_320[0];
    }
    aplStack_320[0] = plVar7;
    uStack_3b8 = (undefined *)CONCAT44(uStack_3b8._4_4_,uStack_328);
    uStack_3b0 = 0;
    uStack_3a8 = uStack_3a8 & 0xffffffff00000000;
    uStack_3a0 = 1;
    uStack_398 = 0;
    puStack_390 = &UNK_07e00610;
    puStack_388 = &SUB_048b06d0;
    uStack_380 = &UNK_07dffea0;
    uStack_378 = &UNK_07e006d0;
    puStack_370 = &UNK_07e00900;
    uStack_368 = (long *)((ulong)uStack_368 & 0xffffffff00000000);
    uStack_360 = 0;
    plStack_358 = (long *)0x0;
    func_0x048b05a0(lStack_330,&uStack_3b8);
    plVar7 = plStack_358;
    if (plStack_358 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_358 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_358 + 0x10))(plStack_358);
        func_0x0412c2d0(plVar7);
      }
    }
    iVar5 = *(int *)(lStack_330 + 0x1c);
    if (iVar5 == 2) {
      piVar8 = *(int **)(*(long *)(*(long *)(lStack_330 + 0x10) + 0x78) + 0x60);
      iVar5 = *piVar8;
      while (iVar5 != *(int *)(lStack_330 + 0x18)) {
        piVar8 = piVar8 + 0x16;
        iVar5 = *piVar8;
      }
      lVar9 = *(long *)(piVar8 + 0xc);
      while (lVar9 != *(long *)(lStack_330 + 8)) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar9 = *(long *)(piVar8 + 0xc);
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar5 == 1) {
      piVar8 = *(int **)(*(long *)(*(long *)(lStack_330 + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar8;
      while (iVar5 != *(int *)(lStack_330 + 0x18)) {
        piVar8 = piVar8 + 0x1a;
        iVar5 = *piVar8;
      }
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else if (iVar5 == 0) {
      puVar2 = (uint *)(*(long *)(lStack_330 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x07dfabc0(&lStack_338);
    uVar3 = uStack_23c;
    iVar5 = iStack_240;
    lVar9 = CONCAT44(uStack_264,uStack_268);
    func_0x048b0bc0(aplStack_320);
    if (iVar5 == 4) {
      if ((DAT_0f5bda28 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bda28), iVar5 != 0)) {
        func_0x07df8810();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5bd9a8,0xf53dab8);
        func_0x0410844d(&DAT_0f5bda28);
      }
      plVar7 = (long *)(*(long *)(lVar9 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3
                                    ) - 1U & *(uint *)(_DAT_0f5bd9a8 + 4)) * 8);
      do {
        lVar12 = *plVar7;
        if (lVar12 == -1) goto LAB_07db6a58;
        plVar7 = (long *)(*(long *)(lVar9 + 0x30) + lVar12 * 0x18);
      } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar12 * 0x18) !=
               *(uint *)(_DAT_0f5bd9a8 + 4));
      if (plVar7 == *(long **)(lVar9 + 0x38)) {
LAB_07db6a58:
        puVar6 = &DAT_0f5bd9a8;
      }
      else {
        puVar6 = (undefined *)plVar7[2];
      }
      lVar9 = func_0x048b1040(lVar9 + 0x18,puVar6,uVar3,1);
      if (lVar9 == 0) {
        lStack_338 = 0;
        lStack_330 = 0;
        func_0x048b10d0(&lStack_338);
        lVar12 = *(long *)(lStack_338 + 0x38);
        lVar9 = lStack_338;
        if (lVar12 == 0) goto LAB_07db6b3c;
LAB_07db6b61:
        do {
          lVar9 = lVar12;
          lVar12 = *(long *)(lVar9 + 0x38);
          if (*(long *)(lVar9 + 0x38) == 0) {
            lStack_338 = 0;
            lStack_330 = 0;
            func_0x048b10d0(&lStack_338);
            lVar12 = lStack_338;
          }
        } while (lVar12 != 0);
      }
      else {
        lVar12 = *(long *)(lVar9 + 0x38);
        if (*(long *)(lVar9 + 0x38) != 0) goto LAB_07db6b61;
LAB_07db6b3c:
        lStack_338 = 0;
        lStack_330 = 0;
        func_0x048b10d0(&lStack_338);
        lVar12 = lStack_338;
        if (lStack_338 != 0) goto LAB_07db6b61;
      }
      lVar9 = *(long *)(lVar9 + 0x48);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    else {
      if (iVar5 != 1) goto LAB_07db6bf8;
      if ((DAT_0f5bda28 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bda28), iVar5 != 0)) {
        func_0x07df8810();
        __cxa_atexit(&UNK_048ae800,&DAT_0f5bd9a8,0xf53dab8);
        func_0x0410844d(&DAT_0f5bda28);
      }
      plVar7 = (long *)(*(long *)(lVar9 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3
                                    ) - 1U & *(uint *)(_DAT_0f5bd9a8 + 4)) * 8);
      do {
        lVar12 = *plVar7;
        if (lVar12 == -1) goto LAB_07db69e8;
        plVar7 = (long *)(*(long *)(lVar9 + 0x30) + lVar12 * 0x18);
      } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar12 * 0x18) !=
               *(uint *)(_DAT_0f5bd9a8 + 4));
      if (plVar7 == *(long **)(lVar9 + 0x38)) {
LAB_07db69e8:
        puVar6 = &DAT_0f5bd9a8;
      }
      else {
        puVar6 = (undefined *)plVar7[2];
      }
      lVar9 = FUN_048b0c90(lVar9 + 0x18,puVar6,uVar3,1);
      if (lVar9 == 0) {
        lStack_338 = 0;
        lStack_330 = 0;
        func_0x048b0d20(&lStack_338);
        lVar9 = lStack_338;
      }
      lVar9 = *(long *)(lVar9 + 0x58);
      puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
    }
    puVar10[1] = 0xffffffffffffffff;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0xff;
    *puVar10 = &UNK_0f0f8080;
    plVar7 = *(long **)(lVar9 + 8);
    *(undefined8 **)(lVar9 + 8) = puVar10;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x28))();
    }
  }
LAB_07db6bf8:
  func_0x078e4650(param_1);
  lVar9 = func_0x07df62d0(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar15 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar12 = lVar9 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar9 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar15) {
      uVar14 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x07df7090(&uStack_268,param_1,lVar12,uVar14);
  }
  else {
    func_0x07df7090(&uStack_268,param_1,&UNK_01277b75,0x11);
  }
  if (cStack_238 != '\0') {
    return;
  }
  lStack_d8 = (ulong)uStack_237 << 8;
  uStack_108 = uStack_268;
  uStack_104 = uStack_264;
  uStack_100 = uStack_260;
  uStack_fc = uStack_25c;
  uStack_f8 = uStack_258;
  uStack_f4 = uStack_254;
  uStack_f0 = uStack_250;
  uStack_ec = uStack_24c;
  uStack_e8 = uStack_248;
  uStack_e4 = uStack_244;
  iStack_e0 = iStack_240;
  uStack_dc = uStack_23c;
  func_0x07df7960(&lStack_338,&uStack_108,&UNK_0132ac38,4);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f012438;
  if (aplStack_320[0] != (long *)0x0) {
    lVar9 = *aplStack_320[0];
    aplStack_320[0] = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = aplStack_320[0];
  }
  aplStack_320[0] = plVar7;
  uStack_3b8 = (undefined *)CONCAT44(uStack_3b8._4_4_,uStack_328);
  uStack_3b0 = 0;
  uStack_3a8 = uStack_3a8 & 0xffffffff00000000;
  uStack_3a0 = 1;
  uStack_398 = 0;
  puStack_390 = &UNK_077e6fa0;
  puStack_388 = &SUB_048b06d0;
  uStack_380 = &UNK_05dcda00;
  uStack_378 = &UNK_07df7e50;
  puStack_370 = &UNK_07df7fb0;
  uStack_368 = (long *)((ulong)uStack_368 & 0xffffffff00000000);
  uStack_360 = 0;
  plStack_358 = (long *)0x0;
  func_0x048b05a0(lStack_330,&uStack_3b8);
  plVar7 = plStack_358;
  if (plStack_358 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_358 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_358 + 0x10))(plStack_358);
      func_0x0412c2d0(plVar7);
    }
  }
  iVar5 = *(int *)(lStack_330 + 0x1c);
  if (iVar5 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(lStack_330 + 0x10) + 0x78) + 0x60);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(lStack_330 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar5 = *piVar8;
    }
    lVar9 = *(long *)(piVar8 + 0xc);
    while (lVar9 != *(long *)(lStack_330 + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar9 = *(long *)(piVar8 + 0xc);
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar5 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(lStack_330 + 0x10) + 0x78) + 0x48);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(lStack_330 + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar5 = *piVar8;
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else if (iVar5 == 0) {
    puVar2 = (uint *)(*(long *)(lStack_330 + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x07df7b50(&lStack_338);
  uStack_98 = (undefined1)lStack_d8;
  uStack_a8 = uStack_e8;
  uStack_a4 = uStack_e4;
  iStack_a0 = iStack_e0;
  uStack_9c = uStack_dc;
  uStack_b8 = uStack_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  uStack_c0 = uStack_100;
  uStack_bc = uStack_fc;
  func_0x048b0bc0(aplStack_320);
  func_0x07df7960(&lStack_338,&uStack_c8,&UNK_0147dc97,8);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f0f8568;
  if (aplStack_320[0] != (long *)0x0) {
    lVar9 = *aplStack_320[0];
    aplStack_320[0] = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = aplStack_320[0];
  }
  aplStack_320[0] = plVar7;
  uStack_3b8 = (undefined *)CONCAT44(uStack_3b8._4_4_,uStack_328);
  uStack_3b0 = 0;
  uStack_3a8 = uStack_3a8 & 0xffffffff00000000;
  uStack_3a0 = 1;
  uStack_398 = 0;
  puStack_390 = &UNK_07df8a50;
  puStack_388 = &SUB_048b06d0;
  uStack_380 = &UNK_07df8750;
  uStack_378 = &UNK_07df8b10;
  puStack_370 = &UNK_07df8d80;
  uStack_368 = (long *)((ulong)uStack_368 & 0xffffffff00000000);
  uStack_360 = 0;
  plStack_358 = (long *)0x0;
  func_0x048b05a0(lStack_330,&uStack_3b8);
  plVar7 = plStack_358;
  if (plStack_358 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_358 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_358 + 0x10))(plStack_358);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x07df7b50(&lStack_338);
  uStack_118 = uStack_98;
  uStack_128 = uStack_a8;
  uStack_124 = uStack_a4;
  iStack_120 = iStack_a0;
  uStack_11c = uStack_9c;
  uStack_138 = uStack_b8;
  uStack_134 = uStack_b4;
  uStack_130 = uStack_b0;
  uStack_12c = uStack_ac;
  uStack_148 = uStack_c8;
  uStack_144 = uStack_c4;
  uStack_140 = uStack_c0;
  uStack_13c = uStack_bc;
  func_0x048b0bc0(aplStack_320);
  func_0x07df7960(&lStack_338,&uStack_148,&UNK_0130fbe3,0xc);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef44b00;
  if (aplStack_320[0] != (long *)0x0) {
    lVar9 = *aplStack_320[0];
    aplStack_320[0] = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = aplStack_320[0];
  }
  aplStack_320[0] = plVar7;
  uStack_3b8 = (undefined *)CONCAT44(uStack_3b8._4_4_,uStack_328);
  uStack_3b0 = 0;
  uStack_3a8 = uStack_3a8 & 0xffffffff00000000;
  uStack_3a0 = 1;
  uStack_398 = 0;
  puStack_390 = &UNK_048b3f30;
  puStack_388 = &SUB_048b06d0;
  uStack_380 = &SUB_048b2190;
  uStack_378 = &UNK_07df9200;
  puStack_370 = &UNK_07df93d0;
  uStack_368 = (long *)((ulong)uStack_368 & 0xffffffff00000000);
  uStack_360 = 0;
  plStack_358 = (long *)0x0;
  func_0x048b05a0(lStack_330,&uStack_3b8);
  plVar7 = plStack_358;
  if (plStack_358 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_358 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_358 + 0x10))(plStack_358);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x07df7b50(&lStack_338);
  uVar4 = uStack_118;
  uVar3 = uStack_11c;
  iVar5 = iStack_120;
  lVar9 = CONCAT44(uStack_144,uStack_148);
  uStack_88 = CONCAT44(uStack_13c,uStack_140);
  uStack_80 = CONCAT44(uStack_134,uStack_138);
  uStack_78 = uStack_130;
  uStack_74 = uStack_12c;
  uStack_70 = uStack_128;
  uStack_6c = uStack_124;
  func_0x048b0bc0(aplStack_320);
  uStack_398 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_360 = 0;
  plStack_358 = (long *)0x0;
  puStack_370 = (undefined *)0x0;
  uStack_368 = (long *)0x0;
  uStack_380 = (undefined *)0x0;
  uStack_378 = (undefined *)0x0;
  puStack_390 = (undefined *)0x0;
  puStack_388 = (undefined1 *)0x0;
  uStack_340 = 0;
  uStack_3b0 = 0xffffffffffffffff;
  uStack_3a8 = 0;
  uStack_3a0 = 0xff;
  uStack_3b8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_398);
  puStack_390 = (undefined *)FUN_041681f0(&uStack_398,0xf547a30);
  puStack_388 = (undefined1 *)FUN_041681f0(&uStack_398,0xf547770);
  uStack_380 = (undefined *)0x0;
  uStack_378 = (undefined *)0x0;
  puStack_370 = (undefined *)0x0;
  uStack_368 = (long *)0x0;
  uStack_360 = 0;
  plStack_358 = (long *)0x0;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 1;
  uStack_3b0 = 0x100;
  uStack_228 = 0x100;
  uStack_224 = 0;
  uStack_220 = (undefined4)uStack_3a8;
  uStack_21c = uStack_3a8._4_4_;
  uStack_218 = (undefined1)uStack_3a0;
  puStack_230 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_210,&uStack_398);
  uStack_208 = puStack_390;
  uStack_200 = puStack_388;
  uStack_1f8 = (undefined4)uStack_380;
  uStack_1f4 = uStack_380._4_4_;
  uStack_1f0 = (undefined4)uStack_378;
  uStack_1ec = uStack_378._4_4_;
  uStack_1e8 = puStack_370;
  plStack_1e0 = uStack_368;
  if (uStack_368 != (long *)0x0) {
    LOCK();
    uStack_368[1] = uStack_368[1] + 1;
    UNLOCK();
  }
  uStack_1d8 = uStack_360;
  if (((ulong)plStack_358 & 1) == 0) {
    uStack_1c0 = uStack_348;
    uStack_1d0 = (ulong)plStack_358;
    uStack_1c8 = uStack_350;
  }
  else {
    func_0x0412e5e0(&uStack_1d0,uStack_348,uStack_350);
  }
  uStack_1b8 = uStack_340;
  if (iVar5 == 4) {
    uVar11 = func_0x07df62d0(lVar9 + 0x18);
    lVar12 = func_0x048b1040(lVar9 + 0x18,uVar11,uVar3,1);
    if (lVar12 == 0) {
      lStack_338 = 0;
      lStack_330 = 0;
      func_0x048b10d0(&lStack_338);
      lVar13 = *(long *)(lStack_338 + 0x38);
      lVar12 = lStack_338;
      if (lVar13 == 0) goto LAB_07db774a;
LAB_07db776f:
      do {
        lVar12 = lVar13;
        lVar13 = *(long *)(lVar12 + 0x38);
        if (*(long *)(lVar12 + 0x38) == 0) {
          lStack_338 = 0;
          lStack_330 = 0;
          func_0x048b10d0(&lStack_338);
          lVar13 = lStack_338;
        }
      } while (lVar13 != 0);
    }
    else {
      lVar13 = *(long *)(lVar12 + 0x38);
      if (*(long *)(lVar12 + 0x38) != 0) goto LAB_07db776f;
LAB_07db774a:
      lStack_338 = 0;
      lStack_330 = 0;
      func_0x048b10d0(&lStack_338);
      lVar13 = lStack_338;
      if (lStack_338 != 0) goto LAB_07db776f;
    }
    lVar12 = *(long *)(lVar12 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar10 + 3) = uStack_218;
    *(undefined4 *)(puVar10 + 1) = uStack_228;
    *(undefined4 *)((long)puVar10 + 0xc) = uStack_224;
    *(undefined4 *)(puVar10 + 2) = uStack_220;
    *(undefined4 *)((long)puVar10 + 0x14) = uStack_21c;
    *puVar10 = &UNK_0f4e3c70;
    FUN_04167a20(puVar10 + 4,auStack_210);
    puVar10[5] = uStack_208;
    puVar10[6] = uStack_200;
    puVar10[7] = CONCAT44(uStack_1f4,uStack_1f8);
    puVar10[8] = CONCAT44(uStack_1ec,uStack_1f0);
    puVar10[9] = uStack_1e8;
    puVar10[10] = plStack_1e0;
    puVar10[0xb] = uStack_1d8;
    puVar10[0xe] = uStack_1c0;
    *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_1d0;
    *(undefined4 *)((long)puVar10 + 100) = uStack_1d0._4_4_;
    *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)puVar10 + 0x6c) = uStack_1c8._4_4_;
    puVar10[0xf] = uStack_1b8;
    plVar7 = *(long **)(lVar12 + 8);
    *(undefined8 **)(lVar12 + 8) = puVar10;
  }
  else {
    if (iVar5 != 1) goto LAB_07db746e;
    uVar11 = func_0x07df62d0(lVar9 + 0x18);
    lVar12 = FUN_048b0c90(lVar9 + 0x18,uVar11,uVar3,1);
    if (lVar12 == 0) {
      lStack_338 = 0;
      lStack_330 = 0;
      func_0x048b0d20(&lStack_338);
      lVar12 = lStack_338;
    }
    lVar12 = *(long *)(lVar12 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar10 + 3) = uStack_218;
    *(undefined4 *)(puVar10 + 1) = uStack_228;
    *(undefined4 *)((long)puVar10 + 0xc) = uStack_224;
    *(undefined4 *)(puVar10 + 2) = uStack_220;
    *(undefined4 *)((long)puVar10 + 0x14) = uStack_21c;
    *puVar10 = &UNK_0f4e3c70;
    FUN_04167a20(puVar10 + 4,auStack_210);
    puVar10[5] = uStack_208;
    puVar10[6] = uStack_200;
    puVar10[7] = CONCAT44(uStack_1f4,uStack_1f8);
    puVar10[8] = CONCAT44(uStack_1ec,uStack_1f0);
    puVar10[9] = uStack_1e8;
    puVar10[10] = plStack_1e0;
    puVar10[0xb] = uStack_1d8;
    puVar10[0xe] = uStack_1c0;
    *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_1d0;
    *(undefined4 *)((long)puVar10 + 100) = uStack_1d0._4_4_;
    *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)puVar10 + 0x6c) = uStack_1c8._4_4_;
    puVar10[0xf] = uStack_1b8;
    plVar7 = *(long **)(lVar12 + 8);
    *(undefined8 **)(lVar12 + 8) = puVar10;
  }
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1e8 = 0;
  if (plVar7 != (long *)0x0) {
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1e8 = 0;
    (**(code **)(*plVar7 + 0x28))();
  }
LAB_07db746e:
  uStack_60 = (undefined4)uStack_88;
  uStack_5c = uStack_88._4_4_;
  uStack_58 = (undefined4)uStack_80;
  uStack_54 = uStack_80._4_4_;
  uStack_50 = uStack_78;
  uStack_4c = uStack_74;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  iStack_40 = iVar5;
  uStack_3c = uVar3;
  uStack_38 = uVar4;
  lStack_68 = lVar9;
  func_0x07df7960(&lStack_338,&lStack_68,&UNK_012dcfb9,0xe);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f0f85e0;
  if (aplStack_320[0] != (long *)0x0) {
    lVar9 = *aplStack_320[0];
    aplStack_320[0] = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = aplStack_320[0];
  }
  aplStack_320[0] = plVar7;
  uStack_1b0 = uStack_328;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 1;
  uStack_190 = 0;
  uStack_188 = &UNK_07df97d0;
  puStack_180 = &SUB_048b06d0;
  puStack_178 = &SUB_07912d40;
  puStack_170 = &UNK_07df97e0;
  puStack_168 = &UNK_07df9940;
  uStack_160 = 0;
  uStack_158 = 0;
  plStack_150 = (long *)0x0;
  func_0x048b05a0(lStack_330,&uStack_1b0);
  plVar7 = plStack_150;
  if (plStack_150 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_150 + 0x10))(plStack_150);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x07df7b50(&lStack_338);
  func_0x048b0bc0(aplStack_320);
  puStack_230 = &UNK_0f4e3c70;
  if ((uStack_1d0 & 1) != 0) {
    func_0x0412a280(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
  }
  plVar7 = plStack_1e0;
  if (plStack_1e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1e0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(auStack_210);
  uStack_3b8 = &UNK_0f4e3c70;
  if (((ulong)plStack_358 & 1) != 0) {
    func_0x0412a280(uStack_348,(ulong)plStack_358 & 0xfffffffffffffffe);
  }
  plVar7 = uStack_368;
  if (uStack_368 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_368 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_368 + 0x10))(uStack_368);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(&uStack_398);
  return;
}


