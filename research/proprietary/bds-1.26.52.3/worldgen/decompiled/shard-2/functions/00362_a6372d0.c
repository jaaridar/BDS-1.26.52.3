/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa7372d0 (ELF vaddr 0xa6372d0)
 * Label: caller-of-callee
 * Body:  [[0a7372d0, 0a737a50] [0a737a60, 0a737f90] [0a737fa0, 0a7385c7]]
 * Ghidra: FUN_0a7372d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ** FUN_0a7372d0(undefined8 **param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  bool bVar22;
  undefined2 uStack_2a6;
  undefined1 uStack_2a4;
  undefined2 uStack_2a3;
  undefined1 uStack_2a1;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  undefined1 uStack_1ec;
  undefined1 uStack_1e8;
  undefined1 uStack_1e4;
  uint auStack_1c8 [2];
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  uint uStack_134;
  char cStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  char cStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  func_0x09671ce0(&puStack_298,param_2 + 0x10);
  puVar14 = puStack_290;
  *(char *)param_1 = (char)puStack_298;
  ppuVar1 = param_1 + 1;
  param_1[1] = (undefined8 *)0x0;
  param_1[3] = (undefined8 *)pcStack_280;
  param_1[4] = (undefined8 *)pcStack_278;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_270;
  *(char *)((long)param_1 + 0x2c) = uStack_270._4_1_;
  if (uStack_270._4_1_ != '\0') {
    if (uStack_270._4_1_ == '\x02') {
      (*pcStack_280)(5,&puStack_290,ppuVar1);
    }
    else {
      puStack_290 = (undefined8 *)0x0;
      *ppuVar1 = puVar14;
    }
  }
  puVar14 = puStack_258;
  uVar4 = (undefined4)uStack_260;
  uVar5 = uStack_260._4_4_;
  uStack_260 = 0;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_268;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_268._4_4_;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar5;
  puStack_258 = (undefined8 *)0x0;
  param_1[8] = puVar14;
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(&puStack_290);
  }
  if (*(char *)param_1 != '\0') {
    return param_1;
  }
  func_0x0a735790(&puStack_298,param_2,param_3,param_4);
  *(char *)param_1 = (char)puStack_298;
  if (param_1 != &puStack_298) {
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])(ppuVar1);
    }
    puVar14 = puStack_290;
    if (uStack_270._4_1_ != '\0') {
      if (uStack_270._4_1_ == '\x02') {
        (*pcStack_280)(5,&puStack_290,ppuVar1);
      }
      else {
        puStack_290 = (undefined8 *)0x0;
        *ppuVar1 = puVar14;
      }
    }
    param_1[3] = (undefined8 *)pcStack_280;
    param_1[4] = (undefined8 *)pcStack_278;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_270;
    *(char *)((long)param_1 + 0x2c) = uStack_270._4_1_;
  }
  puVar14 = puStack_258;
  uVar4 = (undefined4)uStack_260;
  uVar5 = uStack_260._4_4_;
  uStack_260 = 0;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_268;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_268._4_4_;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar5;
  puStack_258 = (undefined8 *)0x0;
  param_1[8] = puVar14;
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(&puStack_290);
  }
  if (*(char *)param_1 != '\0') {
    return param_1;
  }
  if (*(char **)(param_2 + 0xb0) == (char *)0x0) {
    return param_1;
  }
  if (**(char **)(param_2 + 0xb0) != '\x01') {
    return param_1;
  }
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_48 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_c8 = 0x1005a00150001;
  puStack_c0 = &UNK_01254d89;
  puStack_b8 = &UNK_01254d89;
  uStack_b0 = 1;
  puStack_298 = (undefined8 *)0x1005a00150001;
  uStack_128 = 0x1005a00150001;
  puStack_120 = &UNK_01254d89;
  puStack_290 = (undefined8 *)0x0;
  uStack_288 = 0;
  puStack_118 = &UNK_01254d89;
  cStack_110 = '\x01';
  func_0x0c4025b0(*(undefined8 *)(param_2 + 0xc0),param_3 + 8,&uStack_e8,&uStack_128);
  if (cStack_110 == '\x01') {
    if (((ulong)puStack_118 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_118 & 0xff00ffffffffffff) - 8);
    }
    puStack_118 = (undefined *)0x0;
    if (((ulong)puStack_120 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_120 & 0xff00ffffffffffff) - 8);
    }
    puStack_120 = (undefined *)0x0;
  }
  if ((*(long *)(param_2 + 0xb0) == 0) &&
     (cVar8 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013484d2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_2 + 0xb0) == '\0') &&
     (cVar8 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013484d2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar21 = *(long *)(param_2 + 0xc0);
  lVar10 = func_0x0a79a5a0(lVar21 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar10 + 9);
    if (bVar22) {
      puVar18 = *(undefined **)(lVar10 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar10 + 0x10);
    }
  }
  else {
    puVar18 = &UNK_011ed181;
    uVar17 = 10;
  }
  func_0x0a7a61f0(&lStack_160,lVar21,puVar18,uVar17,1);
  if (cStack_130 == '\0') {
    bVar22 = (*(byte *)(param_3 + 8) & 1) != 0;
    lVar21 = param_3 + 9;
    if (bVar22) {
      lVar21 = *(long *)(param_3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(param_3 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(param_3 + 0x10);
    }
    func_0x0a7a6be0(&puStack_298,&lStack_160,lVar21,uVar17,0);
    pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar11 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar11 = &UNK_0f15a1d8;
    if (pcStack_280 != (code *)0x0) {
      lVar10 = *(long *)pcStack_280;
      pcStack_280 = pcVar11;
      (**(code **)(lVar10 + 8))();
      pcVar11 = pcStack_280;
    }
    pcStack_280 = pcVar11;
    if (uVar17 == 0) {
      auStack_1c8[0] = 0x811c9dc5;
    }
    else {
      uVar19 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        auStack_1c8[0] = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        auStack_1c8[0] = 0x811c9dc5;
        uVar20 = 0;
        do {
          auStack_1c8[0] =
               ((int)*(char *)(lVar21 + 3 + uVar20) ^
               ((int)*(char *)(lVar21 + 2 + uVar20) ^
               ((int)*(char *)(lVar21 + 1 + uVar20) ^
               ((int)*(char *)(lVar21 + uVar20) ^ auStack_1c8[0]) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar19 != 0) {
        uVar17 = 0;
        do {
          auStack_1c8[0] = ((int)*(char *)(lVar21 + uVar20 + uVar17) ^ auStack_1c8[0]) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar19 != uVar17);
      }
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 2;
    uStack_1a8 = 1;
    puStack_1a0 = &UNK_08d5fea0;
    puStack_198 = &UNK_07d98660;
    puStack_190 = &UNK_08d5fba0;
    puStack_188 = &UNK_0a7a6f40;
    puStack_180 = &UNK_0a7a72b0;
    uStack_178 = 0;
    uStack_170 = 0;
    plStack_168 = (long *)0x0;
    func_0x048b05a0(puStack_290,auStack_1c8);
    plVar3 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_168 + 1;
      lVar21 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        FUN_0412c2d0(plVar3);
      }
    }
    iVar9 = *(int *)((long)puStack_290 + 0x1c);
    if (iVar9 == 2) {
      piVar12 = *(int **)(*(long *)(puStack_290[2] + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != *(int *)(puStack_290 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar21 = *(long *)(piVar12 + 0xc);
      while (lVar21 != puStack_290[1]) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar21 = *(long *)(piVar12 + 0xc);
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar12 = *(int **)(*(long *)(puStack_290[2] + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != *(int *)(puStack_290 + 3)) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      *(uint *)(puStack_290[2] + 0x18) = *(uint *)(puStack_290[2] + 0x18) | 0x40000;
    }
    func_0x0a7a6e70(&puStack_298);
    uVar6 = uStack_134;
    iVar9 = iStack_138;
    lVar21 = lStack_160;
    func_0x048b0bc0(&pcStack_280);
    if (iVar9 == 4) {
      lVar21 = lVar21 + 0x18;
      uVar13 = func_0x0a79a5a0(lVar21);
      puVar14 = (undefined8 *)func_0x048b1040(lVar21,uVar13,uVar6,1);
      if (puVar14 == (undefined8 *)0x0) {
        puStack_298 = (undefined8 *)0x0;
        puStack_290 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_298);
        puVar14 = puStack_298;
      }
      puVar15 = (undefined8 *)puVar14[7];
      if ((undefined8 *)puVar14[7] == (undefined8 *)0x0) {
        puStack_298 = (undefined8 *)0x0;
        puStack_290 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_298);
        puVar15 = puStack_298;
        if (puStack_298 != (undefined8 *)0x0) goto LAB_0a737a4a;
      }
      else {
LAB_0a737a4a:
        do {
          puVar14 = puVar15;
          puVar15 = (undefined8 *)puVar14[7];
          if ((undefined8 *)puVar14[7] == (undefined8 *)0x0) {
            puStack_298 = (undefined8 *)0x0;
            puStack_290 = (undefined8 *)0x0;
            func_0x048b10d0(&puStack_298);
            puVar15 = puStack_298;
          }
        } while (puVar15 != (undefined8 *)0x0);
      }
      lVar21 = puVar14[9];
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    else {
      if (iVar9 != 1) goto LAB_0a737b06;
      lVar21 = lVar21 + 0x18;
      uVar13 = func_0x0a79a5a0(lVar21);
      puVar14 = (undefined8 *)func_0x048b0c90(lVar21,uVar13,uVar6,1);
      if (puVar14 == (undefined8 *)0x0) {
        puStack_298 = (undefined8 *)0x0;
        puStack_290 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_298);
        puVar14 = puStack_298;
      }
      lVar21 = puVar14[0xb];
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    puVar14[1] = 0xffffffffffffffff;
    puVar14[2] = 0;
    *(undefined1 *)(puVar14 + 3) = 0xff;
    *puVar14 = &UNK_0f489690;
    *(undefined4 *)((long)puVar14 + 0x1c) = 2;
    *(undefined1 *)(puVar14 + 4) = 1;
    *(undefined2 *)((long)puVar14 + 0x21) = uStack_2a3;
    *(undefined1 *)((long)puVar14 + 0x23) = uStack_2a1;
    *(undefined1 *)((long)puVar14 + 0x24) = 0;
    plVar3 = *(long **)(lVar21 + 8);
    *(undefined8 **)(lVar21 + 8) = puVar14;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
LAB_0a737b06:
  if ((*(long *)(param_2 + 0xb0) == 0) &&
     (cVar8 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013484d2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_2 + 0xb0) == '\0') &&
     (cVar8 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013484d2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar21 = *(long *)(param_2 + 0xc0);
  lVar10 = func_0x0a7a7710(lVar21 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar10 + 9);
    if (bVar22) {
      puVar18 = *(undefined **)(lVar10 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar10 + 0x10);
    }
  }
  else {
    puVar18 = &UNK_011ed181;
    uVar17 = 10;
  }
  func_0x0a7aaa10(&lStack_160,lVar21,puVar18,uVar17,1);
  if (cStack_130 == '\0') {
    bVar22 = (*(byte *)(param_3 + 8) & 1) != 0;
    lVar21 = param_3 + 9;
    if (bVar22) {
      lVar21 = *(long *)(param_3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(param_3 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(param_3 + 0x10);
    }
    func_0x0a7ab400(&puStack_298,&lStack_160,lVar21,uVar17,0);
    pcVar11 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar11 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar11 = &UNK_0f15a1d8;
    if (pcStack_280 != (code *)0x0) {
      lVar10 = *(long *)pcStack_280;
      pcStack_280 = pcVar11;
      (**(code **)(lVar10 + 8))();
      pcVar11 = pcStack_280;
    }
    pcStack_280 = pcVar11;
    if (uVar17 == 0) {
      auStack_1c8[0] = 0x811c9dc5;
    }
    else {
      uVar19 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        auStack_1c8[0] = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        auStack_1c8[0] = 0x811c9dc5;
        uVar20 = 0;
        do {
          auStack_1c8[0] =
               ((int)*(char *)(lVar21 + 3 + uVar20) ^
               ((int)*(char *)(lVar21 + 2 + uVar20) ^
               ((int)*(char *)(lVar21 + 1 + uVar20) ^
               ((int)*(char *)(lVar21 + uVar20) ^ auStack_1c8[0]) * 0x1000193) * 0x1000193) *
               0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar19 != 0) {
        uVar17 = 0;
        do {
          auStack_1c8[0] = ((int)*(char *)(lVar21 + uVar20 + uVar17) ^ auStack_1c8[0]) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar19 != uVar17);
      }
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 2;
    uStack_1a8 = 1;
    puStack_1a0 = &UNK_08d5fea0;
    puStack_198 = &UNK_07d98660;
    puStack_190 = &UNK_08d5fba0;
    puStack_188 = &UNK_0a7ab760;
    puStack_180 = &UNK_0a7abad0;
    uStack_178 = 0;
    uStack_170 = 0;
    plStack_168 = (long *)0x0;
    func_0x048b05a0(puStack_290,auStack_1c8);
    plVar3 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_168 + 1;
      lVar21 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        FUN_0412c2d0(plVar3);
      }
    }
    iVar9 = *(int *)((long)puStack_290 + 0x1c);
    if (iVar9 == 2) {
      piVar12 = *(int **)(*(long *)(puStack_290[2] + 0x78) + 0x60);
      iVar9 = *piVar12;
      while (iVar9 != *(int *)(puStack_290 + 3)) {
        piVar12 = piVar12 + 0x16;
        iVar9 = *piVar12;
      }
      lVar21 = *(long *)(piVar12 + 0xc);
      while (lVar21 != puStack_290[1]) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar21 = *(long *)(piVar12 + 0xc);
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar12 = *(int **)(*(long *)(puStack_290[2] + 0x78) + 0x48);
      iVar9 = *piVar12;
      while (iVar9 != *(int *)(puStack_290 + 3)) {
        piVar12 = piVar12 + 0x1a;
        iVar9 = *piVar12;
      }
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      *(uint *)(puStack_290[2] + 0x18) = *(uint *)(puStack_290[2] + 0x18) | 0x40000;
    }
    func_0x0a7ab690(&puStack_298);
    uVar6 = uStack_134;
    iVar9 = iStack_138;
    lVar21 = lStack_160;
    func_0x048b0bc0(&pcStack_280);
    if (iVar9 == 4) {
      lVar21 = lVar21 + 0x18;
      uVar13 = func_0x0a7a7710(lVar21);
      puVar14 = (undefined8 *)func_0x048b1040(lVar21,uVar13,uVar6,1);
      if (puVar14 == (undefined8 *)0x0) {
        puStack_298 = (undefined8 *)0x0;
        puStack_290 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_298);
        puVar14 = puStack_298;
      }
      puVar15 = (undefined8 *)puVar14[7];
      if ((undefined8 *)puVar14[7] == (undefined8 *)0x0) {
        puStack_298 = (undefined8 *)0x0;
        puStack_290 = (undefined8 *)0x0;
        func_0x048b10d0(&puStack_298);
        puVar15 = puStack_298;
        if (puStack_298 != (undefined8 *)0x0) goto LAB_0a737f8a;
      }
      else {
LAB_0a737f8a:
        do {
          puVar14 = puVar15;
          puVar15 = (undefined8 *)puVar14[7];
          if ((undefined8 *)puVar14[7] == (undefined8 *)0x0) {
            puStack_298 = (undefined8 *)0x0;
            puStack_290 = (undefined8 *)0x0;
            func_0x048b10d0(&puStack_298);
            puVar15 = puStack_298;
          }
        } while (puVar15 != (undefined8 *)0x0);
      }
      lVar21 = puVar14[9];
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    else {
      if (iVar9 != 1) goto LAB_0a738046;
      lVar21 = lVar21 + 0x18;
      uVar13 = func_0x0a7a7710(lVar21);
      puVar14 = (undefined8 *)func_0x048b0c90(lVar21,uVar13,uVar6,1);
      if (puVar14 == (undefined8 *)0x0) {
        puStack_298 = (undefined8 *)0x0;
        puStack_290 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_298);
        puVar14 = puStack_298;
      }
      lVar21 = puVar14[0xb];
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
    }
    puVar14[1] = 0xffffffffffffffff;
    puVar14[2] = 0;
    *(undefined1 *)(puVar14 + 3) = 0xff;
    *puVar14 = &UNK_0f489690;
    *(undefined4 *)((long)puVar14 + 0x1c) = 2;
    *(undefined1 *)(puVar14 + 4) = 1;
    *(undefined2 *)((long)puVar14 + 0x21) = uStack_2a6;
    *(undefined1 *)((long)puVar14 + 0x23) = uStack_2a4;
    *(undefined1 *)((long)puVar14 + 0x24) = 0;
    plVar3 = *(long **)(lVar21 + 8);
    *(undefined8 **)(lVar21 + 8) = puVar14;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
LAB_0a738046:
  if ((*(long *)(param_2 + 0xb0) == 0) &&
     (cVar8 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013484d2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_2 + 0xb0) == '\0') &&
     (cVar8 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013484d2),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar21 = *(long *)(param_2 + 0xc0);
  lVar10 = func_0x0a7abf30(lVar21 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar22 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar18 = (undefined *)(lVar10 + 9);
    if (bVar22) {
      puVar18 = *(undefined **)(lVar10 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar10 + 0x10);
    }
  }
  else {
    puVar18 = &UNK_0127d662;
    uVar17 = 0xf;
  }
  func_0x0a7ac710(&lStack_160,lVar21,puVar18,uVar17,1);
  if (cStack_130 != '\0') goto LAB_0a7384e9;
  bVar22 = (*(byte *)(param_3 + 8) & 1) != 0;
  lVar21 = param_3 + 9;
  if (bVar22) {
    lVar21 = *(long *)(param_3 + 0x18);
  }
  pcVar11 = (code *)(ulong)(*(byte *)(param_3 + 8) >> 1);
  if (bVar22) {
    pcVar11 = *(code **)(param_3 + 0x10);
  }
  if (pcVar11 == (code *)0x0) {
    uStack_134 = 0x811c9dc5;
  }
  else {
    uVar17 = (ulong)((uint)pcVar11 & 3);
    if (pcVar11 < (code *)0x4) {
      uStack_134 = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_134 = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_134 = ((int)*(char *)(lVar21 + 3 + uVar19) ^
                     ((int)*(char *)(lVar21 + 2 + uVar19) ^
                     ((int)*(char *)(lVar21 + 1 + uVar19) ^
                     ((int)*(char *)(lVar21 + uVar19) ^ uStack_134) * 0x1000193) * 0x1000193) *
                     0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while (((ulong)pcVar11 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar17 != 0) {
      uVar20 = 0;
      do {
        uStack_134 = ((int)*(char *)(uVar19 + lVar21 + uVar20) ^ uStack_134) * 0x1000193;
        uVar20 = uVar20 + 1;
      } while (uVar17 != uVar20);
    }
  }
  iStack_138 = 3;
  func_0x0a7abf30(lStack_160 + 0x18);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  uVar17 = uStack_288;
  *puVar14 = &UNK_0f23d670;
  puStack_290 = (undefined8 *)0x0;
  puStack_298 = puVar14;
  if (pcVar11 < (code *)0xfffffffffffffff8) {
    if (pcVar11 < (code *)0x17) {
      cVar8 = (char)pcVar11 * '\x02';
      uStack_288 = CONCAT71(uStack_288._1_7_,cVar8);
      if (pcVar11 != (code *)0x0) {
        func_0x0eee2f00((long)&uStack_288 + 1,lVar21,pcVar11);
        pcVar11[(long)&uStack_288 + 1] = (code)0x0;
        uStack_270 = CONCAT71(uStack_270._1_7_,cVar8);
        lVar10 = (long)&uStack_270 + 1;
        lVar7 = uStack_260;
        goto LAB_0a73833a;
      }
      uStack_288 = uVar17 & 0xffffffffffff0000;
      uStack_270 = uStack_270 & 0xffffffffffffff00;
      lVar10 = (long)&uStack_270 + 1;
    }
    else {
      uVar17 = 0x1a;
      if (((ulong)pcVar11 | 7) != 0x17) {
        uVar17 = ((ulong)pcVar11 | 7) + 1;
      }
      pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (pcVar16 == (code *)0x0) {
        func_0x0eec74c0(uVar17,0);
      }
      uVar19 = uVar17 | 1;
      uStack_288 = uVar19;
      pcStack_280 = pcVar11;
      pcStack_278 = pcVar16;
      func_0x0eee2f00(pcVar16,lVar21,pcVar11);
      pcVar16[(long)pcVar11] = (code)0x0;
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      uStack_270 = uVar19;
      uStack_268 = pcVar11;
      lVar7 = lVar10;
      if (lVar10 == 0) {
        func_0x0eec74c0(uVar17,0);
      }
LAB_0a73833a:
      uStack_260 = lVar7;
      func_0x0eee2f00(lVar10,lVar21,pcVar11);
    }
    pcVar11[lVar10] = (code)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    puStack_258 = (undefined8 *)0x0;
    uStack_250 = 0;
    uStack_228 = 0x3f600000;
    func_0x048afb10(&puStack_258,8);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_1f0 = 0xff00;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    if (DAT_0f67b808 == '\0') goto LAB_0a738597;
  }
  else {
    FUN_04882e30();
LAB_0a738597:
    iVar9 = func_0x04108328(&DAT_0f67b808);
    if (iVar9 != 0) {
      func_0x0a7ac120(0xf67b7f0);
      func_0x0410844d(&DAT_0f67b808);
    }
  }
  auStack_1c8[0] = uStack_134;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 2;
  uStack_1a8 = 1;
  puStack_1a0 = &UNK_0a7aed70;
  puStack_198 = &UNK_07d98660;
  puStack_190 = &SUB_0a7aea60;
  puStack_188 = &UNK_0a7aed90;
  puStack_180 = &UNK_0a7af460;
  uStack_178 = 0;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  func_0x048b05a0(&uStack_158,auStack_1c8);
  plVar3 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_168 + 1;
    lVar21 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      FUN_0412c2d0(plVar3);
    }
  }
  uStack_f8 = uStack_148;
  uStack_f4 = uStack_144;
  uStack_f0 = uStack_140;
  uStack_ec = uStack_13c;
  uStack_108 = uStack_158;
  uStack_104 = uStack_154;
  uStack_100 = uStack_150;
  uStack_fc = uStack_14c;
  func_0x0a7ae280(auStack_1c8,&uStack_108,&puStack_298);
  func_0x048b0bc0(&puStack_298);
LAB_0a7384e9:
  func_0x0a738f50(&uStack_e8);
  return param_1;
}


