/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd09b710 (ELF vaddr 0xcf9b710)
 * Label: caller-of-callee
 * Body:  [[0d09b710, 0d09c150] [0d09c160, 0d09c1c4] [0d09c1d0, 0d09c8f5] [0d09c900, 0d09c93e] [0d09c940, 0d09cbd4] [0d09ceae, 0d09cf3a]]
 * Ghidra: FUN_0d09b710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d09b710(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long **pplVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  byte *pbVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  byte *pbVar28;
  ulong uVar29;
  long *plVar30;
  uint *puVar31;
  undefined8 *puVar32;
  ulong uVar33;
  long *plVar34;
  bool bVar35;
  undefined1 uStack_1d9;
  long *plStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  ulong auStack_158 [4];
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint *puStack_120;
  ulong uStack_118;
  byte *pbStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar20 = *param_2;
  plStack_108 = (long *)0x0;
  if ((_DAT_0f71cd58 & 1) == 0) {
    pbStack_f0 = _DAT_0f71cd68;
    uStack_100 = CONCAT44(uRam000000000f71cd5c,_DAT_0f71cd58);
    uStack_f8 = _DAT_0f71cd60;
    uStack_f4 = uRam000000000f71cd64;
    uStack_e8 = 0;
    uVar29 = (ulong)_DAT_0f71cd58 & 0xff;
    if ((_DAT_0f71cd58 & 1) == 0) goto LAB_0d09b771;
LAB_0d09b7aa:
    if (CONCAT44(uStack_f4,uStack_f8) != 0) goto LAB_0d09b7bb;
LAB_0d09b8a6:
    uStack_e8 = 0;
    plVar13 = (long *)0x0;
  }
  else {
    func_0x0412e5e0(&uStack_100,_DAT_0f71cd68,CONCAT44(uRam000000000f71cd64,_DAT_0f71cd60));
    uStack_e8 = 0;
    uVar29 = uStack_100 & 0xff;
    if ((uStack_100 & 1) != 0) goto LAB_0d09b7aa;
LAB_0d09b771:
    if (uVar29 >> 1 == 0) goto LAB_0d09b8a6;
LAB_0d09b7bb:
    uStack_e8 = 0;
    if ((uVar29 & 1) == 0) {
      pbVar14 = (byte *)((long)&uStack_100 + 1);
      if (pbVar14 != (byte *)0x0) goto LAB_0d09b7e2;
      goto LAB_0d09b8a6;
    }
    pbVar14 = pbStack_f0;
    if (pbStack_f0 == (byte *)0x0) goto LAB_0d09b8a6;
LAB_0d09b7e2:
    if (*pbVar14 == 0) goto LAB_0d09b8a6;
    plVar13 = (long *)0xcbf29ce484222325;
    uVar29 = strlen(pbVar14);
    if (uVar29 != 0) {
      uVar24 = (ulong)((uint)uVar29 & 7);
      if (7 < uVar29) {
        uVar29 = uVar29 & 0xfffffffffffffff8;
        do {
          plVar13 = (long *)(((((((((long)plVar13 * 0x100000001b3 ^ (ulong)*pbVar14) * 0x100000001b3
                                  ^ (ulong)pbVar14[1]) * 0x100000001b3 ^ (ulong)pbVar14[2]) *
                                 0x100000001b3 ^ (ulong)pbVar14[3]) * 0x100000001b3 ^
                               (ulong)pbVar14[4]) * 0x100000001b3 ^ (ulong)pbVar14[5]) *
                              0x100000001b3 ^ (ulong)pbVar14[6]) * 0x100000001b3 ^ (ulong)pbVar14[7]
                            );
          pbVar14 = pbVar14 + 8;
          uVar29 = uVar29 - 8;
        } while (uVar29 != 0);
      }
      if (uVar24 != 0) {
        uVar29 = 0;
        do {
          plVar13 = (long *)((long)plVar13 * 0x100000001b3 ^ (ulong)pbVar14[uVar29]);
          uVar29 = uVar29 + 1;
        } while (uVar24 != uVar29);
      }
    }
  }
  plStack_b8 = (long *)&UNK_0f451198;
  plStack_108 = plVar13;
  uStack_b0 = param_3;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f450fb0;
  plStack_1d8 = (long *)0x0;
  pbStack_1d0 = (byte *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_1d8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_1d8);
    plStack_1d8 = plStack_b8;
  }
  plStack_b8 = (long *)0x0;
  plVar13[4] = (long)&UNK_0f2ccd78;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  func_0x04aa75f0(plVar13 + 0xe,&lStack_190,&UNK_01254d89);
  *(undefined1 *)(plVar13 + 0x10) = 0;
  plVar34 = plVar13 + 0x11;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = 0;
  plVar13[0x17] = 0xffffffff;
  plVar13[0x26] = 0;
  plVar13[0x27] = 0;
  plVar13[0x18] = 0;
  plVar13[0x19] = 0;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = 0;
  plVar13[0x1c] = 0;
  plVar13[0x1d] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x1f] = 0;
  plVar13[4] = (long)&UNK_0f451000;
  pplVar1 = (long **)(plVar13 + 0x2e);
  plVar13[0x2e] = 0;
  plVar13[0x2f] = 0;
  *(undefined1 *)(plVar13 + 0x36) = 0;
  if (pplVar1 != &plStack_1d8) {
    if (plStack_1d8 == (long *)0x0) {
      plVar18 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1d8)(&plStack_1d8,pplVar1);
      plVar18 = plStack_1d8;
    }
    plStack_1d8 = (long *)0x0;
    *pplVar1 = plVar18;
  }
  plVar18 = plVar13 + 4;
  puVar31 = (uint *)(plVar13 + 0x12);
  if (plVar34 != (long *)&DAT_0f552108) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar13[0x14] = _DAT_0f552120;
        uVar7 = uRam000000000f55211c;
        uVar6 = _DAT_0f552118;
        uVar5 = uRam000000000f552114;
        *puVar31 = _DAT_0f552110;
        *(undefined4 *)((long)plVar13 + 0x94) = uVar5;
        *(undefined4 *)(plVar13 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar13 + 0x9c) = uVar7;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar35 = (_DAT_0f552110 & 1) != 0;
      lVar17 = 0xf552111;
      if (bVar35) {
        lVar17 = _DAT_0f552120;
      }
      uVar29 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar35) {
        uVar29 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar31,lVar17,uVar29);
    }
  }
  plVar30 = plVar13 + 1;
  plVar13[0x11] = _DAT_0f552108;
  plVar13[0x15] = 0;
  if (plStack_1d8 != (long *)0x0) {
    (*(code *)plStack_1d8[1])(&plStack_1d8);
  }
  LOCK();
  *plVar30 = *plVar30 + 1;
  UNLOCK();
  pbVar14 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar14 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar14 + 8) = 0;
  *(long *)((long)pbVar14 + 0x10) = 0;
  *(undefined **)pbVar14 = &UNK_0f4510f8;
  *(long *)((long)pbVar14 + 0x30) = 0;
  *(long *)((long)pbVar14 + 0x38) = 0;
  *(undefined **)((long)pbVar14 + 0x20) = &UNK_0f451148;
  *(long **)((long)pbVar14 + 0x70) = plVar18;
  *(long **)((long)pbVar14 + 0x78) = plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  plStack_1d8 = (long *)((long)pbVar14 + 0x20);
  pbStack_1d0 = pbVar14;
  puVar15 = (undefined4 *)func_0x0d106550(uVar20,&plStack_108,0);
  plVar16 = *(long **)(puVar15 + 0x24);
  if (plVar16 < *(long **)(puVar15 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar34) {
LAB_0d09bb9f:
      *plVar16 = *plVar34;
      plVar16[5] = (long)pbVar14 + 0x20;
      plVar16[6] = (long)pbVar14;
LAB_0d09bc0c:
      LOCK();
      *(long *)((long)pbVar14 + 8) = *(long *)((long)pbVar14 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puVar31 & 1) == 0) {
        plVar16[3] = plVar13[0x14];
        lVar17 = plVar13[0x13];
        plVar16[1] = *(long *)puVar31;
        plVar16[2] = lVar17;
        goto LAB_0d09bb9f;
      }
      FUN_04885070(plVar16 + 1,plVar13[0x14],plVar13[0x13]);
      *plVar16 = *plVar34;
      plVar16[5] = (long)plStack_1d8;
      plVar16[6] = (long)pbStack_1d0;
      pbVar14 = pbStack_1d0;
      if (pbStack_1d0 != (byte *)0x0) goto LAB_0d09bc0c;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar15 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x0d109c80(puVar15 + 0x22,plVar34,&plStack_1d8);
  }
  *(long **)(puVar15 + 0x24) = plVar16;
  uVar5 = *puVar15;
  uVar6 = puVar15[1];
  uVar7 = puVar15[2];
  uVar8 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar34 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar34 = *plVar34 + 1;
    UNLOCK();
  }
  plVar34 = (long *)plVar13[0xf];
  *(undefined4 *)(plVar13 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar13 + 0x74) = uVar6;
  *(undefined4 *)(plVar13 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar13 + 0x7c) = uVar8;
  if (plVar34 != (long *)0x0) {
    LOCK();
    plVar16 = plVar34 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
      func_0x0412c2d0(plVar34);
    }
  }
  pbVar14 = pbStack_1d0;
  *(undefined1 *)(plVar13 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
  if (pbStack_1d0 != (byte *)0x0) {
    LOCK();
    plVar34 = (long *)((long)pbStack_1d0 + 8);
    lVar17 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*(long *)pbStack_1d0 + 0x10))(pbStack_1d0);
      func_0x0412c2d0(pbVar14);
    }
  }
  LOCK();
  lVar17 = *plVar30;
  *plVar30 = *plVar30 + -1;
  UNLOCK();
  if (lVar17 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
    LOCK();
    lVar17 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar17 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
  }
  if (lVar17 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    func_0x0412c2d0(plVar13);
  }
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  lVar17 = (**(code **)(*plVar18 + 0x10))(plVar18,&uStack_138);
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(pbStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  uStack_180 = 0;
  lStack_178 = 0;
  pbStack_170 = (byte *)0x0;
  uStack_188 = 0x746e6576650a;
  lStack_190 = 0x5a7980a6b671026f;
  uStack_70 = 0;
  uStack_100 = 0;
  lStack_78 = 0;
  plStack_108 = (long *)&UNK_0f4511b0;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar13 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plStack_1d8 = plStack_108;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f44d108;
  pbStack_1d0 = (byte *)0x0;
  plStack_108 = (long *)0x0;
  plVar13[4] = (long)&UNK_0f2ccd78;
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  func_0x04aa75f0(plVar13 + 0xe,&uStack_1d9,&UNK_01254d89);
  *(undefined1 *)(plVar13 + 0x10) = 0;
  pbVar19 = (byte *)(plVar13 + 0x11);
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = 0;
  plVar13[0x17] = 0xffffffff;
  plVar13[0x26] = 0;
  plVar13[0x27] = 0;
  plVar13[0x18] = 0;
  plVar13[0x19] = 0;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = 0;
  plVar13[0x1c] = 0;
  plVar13[0x1d] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x1f] = 0;
  plVar13[4] = (long)&UNK_0f44d158;
  plVar13[0x2e] = 0;
  plVar13[0x2f] = 0;
  plVar13[0x30] = 0;
  plVar13[0x31] = 0;
  plVar13[0x32] = 0;
  plVar13[0x33] = 0;
  plVar13[0x34] = 0;
  *(undefined4 *)(plVar13 + 0x35) = 0x3f800000;
  pbVar14 = (byte *)(plVar13 + 0x36);
  plVar13[0x36] = 0;
  plVar13[0x37] = 0;
  if (plStack_1d8 == (long *)0x0) {
    plVar34 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1d8)(&plStack_1d8,pbVar14);
    plVar34 = plStack_1d8;
  }
  plVar18 = plVar13 + 4;
  plStack_1d8 = (long *)0x0;
  plVar13[0x36] = (long)plVar34;
  *(undefined1 *)(plVar13 + 0x3e) = 0;
  puStack_120 = (uint *)(plVar13 + 0x12);
  if (pbVar19 != &DAT_0f552138) {
    if ((*puStack_120 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar13[0x14] = _DAT_0f552150;
        uVar7 = uRam000000000f55214c;
        uVar6 = _DAT_0f552148;
        uVar5 = uRam000000000f552144;
        *puStack_120 = _DAT_0f552140;
        *(undefined4 *)((long)plVar13 + 0x94) = uVar5;
        *(undefined4 *)(plVar13 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar13 + 0x9c) = uVar7;
      }
      else {
        FUN_04885070(puStack_120,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar35 = (_DAT_0f552140 & 1) != 0;
      lVar22 = 0xf552141;
      if (bVar35) {
        lVar22 = _DAT_0f552150;
      }
      uVar29 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar35) {
        uVar29 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_120,lVar22,uVar29);
    }
  }
  plVar13[0x11] = _DAT_0f552138;
  plVar13[0x15] = 0;
  if (plStack_1d8 != (long *)0x0) {
    (*(code *)plStack_1d8[1])(&plStack_1d8);
  }
  plVar34 = plVar13 + 1;
  if (plStack_108 != (long *)0x0) {
    (*(code *)plStack_108[1])(&plStack_108);
  }
  LOCK();
  *plVar34 = *plVar34 + 1;
  UNLOCK();
  plStack_c0 = plVar34;
  pbStack_168 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbStack_168 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  pbVar26 = pbStack_170;
  lVar22 = lStack_190;
  pbStack_168[8] = 0;
  pbStack_168[9] = 0;
  pbStack_168[10] = 0;
  pbStack_168[0xb] = 0;
  pbStack_168[0xc] = 0;
  pbStack_168[0xd] = 0;
  pbStack_168[0xe] = 0;
  pbStack_168[0xf] = 0;
  pbStack_168[0x10] = 0;
  pbStack_168[0x11] = 0;
  pbStack_168[0x12] = 0;
  pbStack_168[0x13] = 0;
  pbStack_168[0x14] = 0;
  pbStack_168[0x15] = 0;
  pbStack_168[0x16] = 0;
  pbStack_168[0x17] = 0;
  *(undefined **)pbStack_168 = &UNK_0f44d238;
  pbStack_168[0x30] = 0;
  pbStack_168[0x31] = 0;
  pbStack_168[0x32] = 0;
  pbStack_168[0x33] = 0;
  pbStack_168[0x34] = 0;
  pbStack_168[0x35] = 0;
  pbStack_168[0x36] = 0;
  pbStack_168[0x37] = 0;
  pbStack_168[0x38] = 0;
  pbStack_168[0x39] = 0;
  pbStack_168[0x3a] = 0;
  pbStack_168[0x3b] = 0;
  pbStack_168[0x3c] = 0;
  pbStack_168[0x3d] = 0;
  pbStack_168[0x3e] = 0;
  pbStack_168[0x3f] = 0;
  *(undefined **)(pbStack_168 + 0x20) = &UNK_0f44d288;
  *(long **)(pbStack_168 + 0x70) = plVar18;
  *(long **)(pbStack_168 + 0x78) = plVar13;
  LOCK();
  plVar13[1] = plVar13[1] + 1;
  UNLOCK();
  pbStack_110 = pbStack_168 + 8;
  uStack_118 = *(ulong *)(lVar17 + 0xb8);
  uVar29 = *(ulong *)(lVar17 + 0xc0);
  pbVar28 = pbStack_168;
  pbStack_160 = pbStack_168;
  plStack_c8 = plVar18;
  if (uStack_118 != uVar29) {
    lVar21 = lStack_178;
    uVar24 = uStack_180;
    if ((uStack_188 & 1) == 0) {
      lVar21 = (long)&uStack_188 + 1;
      uVar24 = uStack_188 >> 1 & 0x7f;
    }
    lVar25 = uStack_118 + 0x19;
    do {
      if (*(long *)(lVar25 + -9) == lVar22) {
        pbVar14 = (byte *)(lVar25 + -9);
        if ((*(long **)(lVar25 + 0x17) == &lStack_190) && (pbVar14 == pbVar26)) {
LAB_0d09c647:
          puVar15 = (undefined4 *)(lVar25 + -0x19);
          pbVar26 = pbStack_168;
          goto LAB_0d09c658;
        }
        bVar2 = *(byte *)(lVar25 + -1);
        if ((bVar2 & 1) == 0) {
          uVar33 = (ulong)(bVar2 >> 1);
        }
        else {
          uVar33 = *(ulong *)(lVar25 + 7);
        }
        if (uVar33 == uVar24) {
          lVar27 = lVar25;
          if ((bVar2 & 1) != 0) {
            lVar27 = *(long *)(lVar25 + 0xf);
          }
          iVar12 = func_0x0eee3000(lVar27,lVar21,uVar24);
          if (iVar12 == 0) {
            *(long **)(lVar25 + 0x17) = &lStack_190;
            pbStack_170 = pbVar14;
            goto LAB_0d09c647;
          }
        }
      }
      *(undefined8 *)(lVar25 + 0x17) = 0;
      uVar33 = lVar25 + 0x8f;
      pbVar28 = pbVar26;
      lVar25 = lVar25 + 0xa8;
    } while (uVar33 != uVar29);
  }
  if (uVar29 < *(ulong *)(lVar17 + 200)) {
    func_0x0d0cd910(uVar29);
    pbVar14 = (byte *)(uVar29 + 0xa8);
    *(byte **)(lVar17 + 0xc0) = pbVar14;
LAB_0d09c4a1:
    *(byte **)(lVar17 + 0xc0) = pbVar14;
    func_0x0b63b6d0(*(undefined8 *)(pbVar14 + -0xa8),&lStack_190);
    lVar22 = *(long *)(lVar17 + 0xc0);
    *(undefined1 *)(lVar22 + -7) = *(undefined1 *)(lVar17 + 0x60);
    if ((long *)(lVar22 + -0x98) != &lStack_190) {
      pbVar14 = (byte *)(lVar22 + -0x90);
      if ((*pbVar14 & 1) == 0) {
        if ((uStack_188 & 1) == 0) {
          *(long *)(lVar22 + -0x80) = lStack_178;
          *(undefined4 *)pbVar14 = (undefined4)uStack_188;
          *(undefined4 *)(lVar22 + -0x8c) = uStack_188._4_4_;
          *(undefined4 *)(lVar22 + -0x88) = (undefined4)uStack_180;
          *(undefined4 *)(lVar22 + -0x84) = uStack_180._4_4_;
        }
        else {
          FUN_04885070(pbVar14,lStack_178,uStack_180);
        }
      }
      else {
        uVar29 = uStack_188 >> 1 & 0x7f;
        lVar21 = (long)&uStack_188 + 1;
        if ((uStack_188 & 1) != 0) {
          uVar29 = uStack_180;
          lVar21 = lStack_178;
        }
        func_0x04885120(pbVar14,lVar21,uVar29);
      }
    }
    *(long *)(lVar22 + -0x98) = lStack_190;
    *(undefined8 *)(lVar22 + -0x78) = 0;
    func_0x04aa9390(&plStack_1d8,&uStack_188,*(undefined1 *)(lVar17 + 0x60));
    lVar22 = *(long *)(lVar17 + 0xc0);
    func_0x04167a70(lVar22 + -0x70,&plStack_1d8);
    *(byte **)(lVar22 + -0x68) = pbStack_1d0;
    *(byte **)(lVar22 + -0x60) = pbStack_1c8;
    *(long **)(lVar22 + -0x58) = plStack_1c0;
    *(long **)(lVar22 + -0x50) = plStack_1b8;
    uVar5 = (undefined4)uStack_1b0;
    uVar6 = uStack_1b0._4_4_;
    uVar7 = (undefined4)uStack_1a8;
    uVar8 = uStack_1a8._4_4_;
    uStack_1b0 = 0;
    uStack_1a8 = (byte *)0x0;
    plVar34 = *(long **)(lVar22 + -0x40);
    *(undefined4 *)(lVar22 + -0x48) = uVar5;
    *(undefined4 *)(lVar22 + -0x44) = uVar6;
    *(undefined4 *)(lVar22 + -0x40) = uVar7;
    *(undefined4 *)(lVar22 + -0x3c) = uVar8;
    if (plVar34 != (long *)0x0) {
      LOCK();
      plVar18 = plVar34 + 1;
      lVar21 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
        func_0x0412c2d0(plVar34);
      }
    }
    pbVar26 = pbStack_168;
    pbVar14 = uStack_1a8;
    *(undefined8 *)(lVar22 + -0x38) = uStack_1a0;
    if (uStack_1a8 != (byte *)0x0) {
      LOCK();
      pbVar28 = uStack_1a8 + 8;
      lVar22 = *(long *)pbVar28;
      *(long *)pbVar28 = *(long *)pbVar28 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)uStack_1a8 + 0x10))(uStack_1a8);
        func_0x0412c2d0(pbVar14);
      }
    }
    func_0x04167a40(&plStack_1d8);
    lVar17 = *(long *)(lVar17 + 0xc0);
    *(undefined1 *)(lVar17 + -8) = 1;
    puVar15 = (undefined4 *)(lVar17 + -0xa8);
LAB_0d09c658:
    pbVar26 = pbVar26 + 0x20;
    pbVar28 = *(byte **)(puVar15 + 0x24);
    if (pbVar28 < *(byte **)(puVar15 + 0x26)) {
      pbVar28[0x10] = 0;
      pbVar28[0x11] = 0;
      pbVar28[0x12] = 0;
      pbVar28[0x13] = 0;
      pbVar28[0x14] = 0;
      pbVar28[0x15] = 0;
      pbVar28[0x16] = 0;
      pbVar28[0x17] = 0;
      pbVar28[0x18] = 0;
      pbVar28[0x19] = 0;
      pbVar28[0x1a] = 0;
      pbVar28[0x1b] = 0;
      pbVar28[0x1c] = 0;
      pbVar28[0x1d] = 0;
      pbVar28[0x1e] = 0;
      pbVar28[0x1f] = 0;
      pbVar28[0] = 0;
      pbVar28[1] = 0;
      pbVar28[2] = 0;
      pbVar28[3] = 0;
      pbVar28[4] = 0;
      pbVar28[5] = 0;
      pbVar28[6] = 0;
      pbVar28[7] = 0;
      pbVar28[8] = 0;
      pbVar28[9] = 0;
      pbVar28[10] = 0;
      pbVar28[0xb] = 0;
      pbVar28[0xc] = 0;
      pbVar28[0xd] = 0;
      pbVar28[0xe] = 0;
      pbVar28[0xf] = 0;
      pbVar28[0x20] = 0;
      pbVar28[0x21] = 0;
      pbVar28[0x22] = 0;
      pbVar28[0x23] = 0;
      pbVar28[0x24] = 0;
      pbVar28[0x25] = 0;
      pbVar28[0x26] = 0;
      pbVar28[0x27] = 0;
      if (pbVar28 != pbVar19) {
        if ((*puStack_120 & 1) == 0) {
          *(undefined8 *)(pbVar28 + 0x18) = *(undefined8 *)(puStack_120 + 4);
          uVar20 = *(undefined8 *)(puStack_120 + 2);
          *(undefined8 *)(pbVar28 + 8) = *(undefined8 *)puStack_120;
          *(undefined8 *)(pbVar28 + 0x10) = uVar20;
        }
        else {
          FUN_04885070(pbVar28 + 8,plVar13[0x14],plVar13[0x13]);
        }
      }
      *(undefined8 *)pbVar28 = *(undefined8 *)pbVar19;
      *(byte **)(pbVar28 + 0x28) = pbVar26;
      *(byte **)(pbVar28 + 0x30) = pbStack_160;
      LOCK();
      *(long *)(pbStack_160 + 8) = *(long *)(pbStack_160 + 8) + 1;
      UNLOCK();
      pbVar28 = pbVar28 + 0x38;
      *(byte **)(puVar15 + 0x24) = pbVar28;
      goto LAB_0d09c99e;
    }
    lVar17 = (long)pbVar28 - *(long *)(puVar15 + 0x22);
    uVar29 = (lVar17 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar28 = pbVar19;
    if (uVar29 < 0x492492492492493) {
      lVar22 = (long)*(byte **)(puVar15 + 0x26) - *(long *)(puVar15 + 0x22) >> 3;
      uVar24 = lVar22 * -0x2492492492492492;
      if (uVar29 < uVar24) {
        uVar29 = uVar24;
      }
      plVar34 = (long *)(puVar15 + 0x22);
      if (0x249249249249248 < (ulong)(lVar22 * 0x6db6db6db6db6db7)) {
        uVar29 = 0x492492492492492;
      }
      plStack_1b8 = plVar34;
      pbStack_168 = pbVar26;
      if (uVar29 == 0) {
        plVar18 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar29) goto LAB_0d09cb9b;
        plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x38);
        if (plVar18 == (long *)0x0) {
          FUN_0eec74c0(uVar29 * 0x38,0);
          plVar18 = (long *)0x0;
        }
      }
      pbVar14 = (byte *)((long)plVar18 + lVar17);
      plStack_1c0 = plVar18 + uVar29 * 7;
      puVar32 = (undefined8 *)((long)plVar18 + lVar17 + 0x10);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)((long)plVar18 + lVar17) = 0;
      ((undefined8 *)((long)plVar18 + lVar17))[1] = 0;
      *(undefined8 *)((long)plVar18 + lVar17 + 0x20) = 0;
      pbStack_1c8 = pbVar14;
      plStack_1d8 = plVar18;
      pbStack_1d0 = pbVar14;
      if (pbVar14 != pbVar19) {
        puVar31 = (uint *)((long)plVar18 + lVar17 + 8);
        if ((*puStack_120 & 1) == 0) {
          *(undefined8 *)((long)plVar18 + lVar17 + 0x18) = *(undefined8 *)(puStack_120 + 4);
          uVar9 = puStack_120[1];
          uVar10 = puStack_120[2];
          uVar11 = puStack_120[3];
          *puVar31 = *puStack_120;
          *(uint *)((long)plVar18 + lVar17 + 0xc) = uVar9;
          *(uint *)((long)plVar18 + lVar17 + 0x10) = uVar10;
          *(uint *)((long)plVar18 + lVar17 + 0x14) = uVar11;
        }
        else {
          FUN_04885070(puVar31,plVar13[0x14],plVar13[0x13]);
        }
      }
      *(undefined8 *)pbVar14 = *(undefined8 *)pbVar19;
      *(byte **)(pbVar14 + 0x28) = pbStack_168;
      *(byte **)(pbVar14 + 0x30) = pbStack_160;
      LOCK();
      *(long *)(pbStack_160 + 8) = *(long *)(pbStack_160 + 8) + 1;
      UNLOCK();
      pbStack_1c8 = pbStack_1c8 + 0x38;
      puVar32 = *(undefined8 **)(puVar15 + 0x22);
      puVar3 = *(undefined8 **)(puVar15 + 0x24);
      pbVar14 = pbStack_1d0 + ((long)puVar32 - (long)puVar3);
      pbVar19 = pbVar14;
      puVar23 = puVar32;
      if ((long)puVar32 - (long)puVar3 != 0) {
        do {
          pbVar19[0x10] = 0;
          pbVar19[0x11] = 0;
          pbVar19[0x12] = 0;
          pbVar19[0x13] = 0;
          pbVar19[0x14] = 0;
          pbVar19[0x15] = 0;
          pbVar19[0x16] = 0;
          pbVar19[0x17] = 0;
          pbVar19[0x18] = 0;
          pbVar19[0x19] = 0;
          pbVar19[0x1a] = 0;
          pbVar19[0x1b] = 0;
          pbVar19[0x1c] = 0;
          pbVar19[0x1d] = 0;
          pbVar19[0x1e] = 0;
          pbVar19[0x1f] = 0;
          pbVar19[0] = 0;
          pbVar19[1] = 0;
          pbVar19[2] = 0;
          pbVar19[3] = 0;
          pbVar19[4] = 0;
          pbVar19[5] = 0;
          pbVar19[6] = 0;
          pbVar19[7] = 0;
          pbVar19[8] = 0;
          pbVar19[9] = 0;
          pbVar19[10] = 0;
          pbVar19[0xb] = 0;
          pbVar19[0xc] = 0;
          pbVar19[0xd] = 0;
          pbVar19[0xe] = 0;
          pbVar19[0xf] = 0;
          pbVar19[0x20] = 0;
          pbVar19[0x21] = 0;
          pbVar19[0x22] = 0;
          pbVar19[0x23] = 0;
          pbVar19[0x24] = 0;
          pbVar19[0x25] = 0;
          pbVar19[0x26] = 0;
          pbVar19[0x27] = 0;
          *(undefined8 *)(pbVar19 + 0x18) = puVar23[3];
          uVar20 = puVar23[2];
          *(undefined8 *)(pbVar19 + 8) = puVar23[1];
          *(undefined8 *)(pbVar19 + 0x10) = uVar20;
          *(undefined2 *)(puVar23 + 1) = 0;
          *(undefined8 *)pbVar19 = *puVar23;
          uVar20 = puVar23[6];
          *(undefined8 *)(pbVar19 + 0x28) = puVar23[5];
          *(undefined8 *)(pbVar19 + 0x30) = uVar20;
          puVar23[5] = 0;
          puVar23[6] = 0;
          puVar23 = puVar23 + 7;
          pbVar19 = pbVar19 + 0x38;
        } while (puVar23 != puVar3);
        do {
          plVar18 = (long *)puVar32[6];
          if (plVar18 == (long *)0x0) {
LAB_0d09c925:
            bVar2 = *(byte *)(puVar32 + 1);
          }
          else {
            LOCK();
            plVar30 = plVar18 + 1;
            lVar17 = *plVar30;
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (lVar17 != 0) goto LAB_0d09c925;
            (**(code **)(*plVar18 + 0x10))(plVar18);
            func_0x0412c2d0(plVar18);
            bVar2 = *(byte *)(puVar32 + 1);
          }
          if ((bVar2 & 1) != 0) {
            func_0x0412a280(puVar32[3],puVar32[1] & 0xfffffffffffffffe);
          }
          puVar32 = puVar32 + 7;
        } while (puVar32 != puVar3);
        puVar32 = (undefined8 *)*plVar34;
      }
      pbVar28 = pbStack_1c8;
      *(byte **)(puVar15 + 0x22) = pbVar14;
      *(byte **)(puVar15 + 0x24) = pbStack_1c8;
      lVar17 = *(long *)(puVar15 + 0x26);
      *(long **)(puVar15 + 0x26) = plStack_1c0;
      if (puVar32 != (undefined8 *)0x0) {
        func_0x0412a280(puVar32,lVar17 - (long)puVar32);
      }
LAB_0d09c99e:
      plVar34 = plStack_c8;
      *(byte **)(puVar15 + 0x24) = pbVar28;
      uVar5 = *puVar15;
      uVar6 = puVar15[1];
      uVar7 = puVar15[2];
      uVar8 = puVar15[3];
      if (*(long *)(puVar15 + 2) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(puVar15 + 2) + 8);
        *plVar18 = *plVar18 + 1;
        UNLOCK();
      }
      plVar18 = (long *)plVar13[0xf];
      *(undefined4 *)(plVar13 + 0xe) = uVar5;
      *(undefined4 *)((long)plVar13 + 0x74) = uVar6;
      *(undefined4 *)(plVar13 + 0xf) = uVar7;
      *(undefined4 *)((long)plVar13 + 0x7c) = uVar8;
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar30 = plVar18 + 1;
        lVar17 = *plVar30;
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      pbVar14 = pbStack_160;
      *(undefined1 *)(plVar13 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
      LOCK();
      lVar17 = *(long *)pbStack_110;
      *(long *)pbStack_110 = *(long *)pbStack_110 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
        func_0x0412c2d0(pbVar14);
        LOCK();
        lVar17 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar18 = plStack_c0;
      }
      else {
        LOCK();
        lVar17 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar18 = plStack_c0;
      }
      plStack_c0 = plVar18;
      if (lVar17 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
        LOCK();
        lVar17 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar17 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
      }
      if (lVar17 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
      auStack_158[0] = 0;
      auStack_158[1] = 0;
      auStack_158[2] = 0;
      (**(code **)(*plVar34 + 0x10))(plVar34,auStack_158);
      if ((auStack_158[0] & 1) != 0) {
        func_0x0412a280(auStack_158[2],auStack_158[0] & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_188 & 1) != 0) {
        func_0x0412a280(lStack_178,uStack_188 & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar22 = uVar29 - uStack_118;
    uVar29 = (lVar22 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar29) goto LAB_0d09cba5;
    plVar34 = (long *)(lVar17 + 0xb8);
    lVar21 = (long)(*(ulong *)(lVar17 + 200) - uStack_118) >> 3;
    uVar24 = lVar21 * -0x6186186186186186;
    if (uVar29 < uVar24) {
      uVar29 = uVar24;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar29 = 0x186186186186186;
    }
    plStack_1b8 = plVar34;
    if (uVar29 == 0) {
      plVar18 = (long *)0x0;
LAB_0d09c2c1:
      pbStack_1d0 = (byte *)(lVar22 + (long)plVar18);
      plStack_1c0 = plVar18 + uVar29 * 0x15;
      plStack_1d8 = plVar18;
      pbStack_1c8 = pbStack_1d0;
      func_0x0d0cd910(pbStack_1d0);
      pbVar14 = pbStack_1c8 + 0xa8;
      lVar22 = *(long *)(lVar17 + 0xb8);
      lVar21 = *(long *)(lVar17 + 0xc0);
      pbVar26 = pbStack_1d0 + (lVar22 - lVar21);
      if (lVar22 != lVar21) {
        lVar25 = 0;
        do {
          uVar20 = ((undefined8 *)(lVar22 + lVar25))[1];
          *(undefined8 *)(pbVar26 + lVar25) = *(undefined8 *)(lVar22 + lVar25);
          *(undefined8 *)(pbVar26 + lVar25 + 8) = uVar20;
          *(undefined8 *)(lVar22 + lVar25) = 0;
          ((undefined8 *)(lVar22 + lVar25))[1] = 0;
          pbVar28 = pbVar26 + lVar25 + 0x20;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar26 + lVar25 + 0x10;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar26 + lVar25 + 0x30;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined8 *)(pbVar26 + lVar25 + 0x28) = *(undefined8 *)(lVar22 + 0x28 + lVar25);
          puVar15 = (undefined4 *)(lVar22 + 0x18 + lVar25);
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          pbVar28 = pbVar26 + lVar25 + 0x18;
          *(undefined4 *)pbVar28 = *puVar15;
          *(undefined4 *)(pbVar28 + 4) = uVar5;
          *(undefined4 *)(pbVar28 + 8) = uVar6;
          *(undefined4 *)(pbVar28 + 0xc) = uVar7;
          *(undefined2 *)(lVar22 + 0x18 + lVar25) = 0;
          *(undefined8 *)(pbVar26 + lVar25 + 0x10) = *(undefined8 *)(lVar22 + 0x10 + lVar25);
          func_0x04167a20(pbVar26 + lVar25 + 0x38,lVar25 + lVar22 + 0x38);
          puVar32 = (undefined8 *)(lVar22 + 0x40 + lVar25);
          uVar20 = puVar32[1];
          *(undefined8 *)(pbVar26 + lVar25 + 0x40) = *puVar32;
          *(undefined8 *)(pbVar26 + lVar25 + 0x40 + 8) = uVar20;
          puVar32 = (undefined8 *)(lVar22 + 0x50 + lVar25);
          uVar20 = puVar32[1];
          *(undefined8 *)(pbVar26 + lVar25 + 0x50) = *puVar32;
          *(undefined8 *)(pbVar26 + lVar25 + 0x50 + 8) = uVar20;
          puVar32 = (undefined8 *)(lVar22 + 0x60 + lVar25);
          uVar20 = puVar32[1];
          *(undefined8 *)(pbVar26 + lVar25 + 0x60) = *puVar32;
          *(undefined8 *)(pbVar26 + lVar25 + 0x60 + 8) = uVar20;
          puVar32 = (undefined8 *)(lVar22 + 0x60 + lVar25);
          *puVar32 = 0;
          puVar32[1] = 0;
          *(undefined8 *)(pbVar26 + lVar25 + 0x70) = *(undefined8 *)(lVar22 + 0x70 + lVar25);
          puVar32 = (undefined8 *)(lVar22 + 0x78 + lVar25);
          uVar20 = puVar32[1];
          *(undefined8 *)(pbVar26 + lVar25 + 0x78) = *puVar32;
          *(undefined8 *)(pbVar26 + lVar25 + 0x78 + 8) = uVar20;
          pbVar28 = pbVar26 + lVar25 + 0x88;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar26 + lVar25 + 0x98;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          puVar15 = (undefined4 *)(lVar22 + 0x88 + lVar25);
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          pbVar28 = pbVar26 + lVar25 + 0x88;
          *(undefined4 *)pbVar28 = *puVar15;
          *(undefined4 *)(pbVar28 + 4) = uVar5;
          *(undefined4 *)(pbVar28 + 8) = uVar6;
          *(undefined4 *)(pbVar28 + 0xc) = uVar7;
          *(undefined8 *)(pbVar26 + lVar25 + 0x98) = *(undefined8 *)(lVar22 + 0x98 + lVar25);
          puVar32 = (undefined8 *)(lVar22 + 0x88 + lVar25);
          *puVar32 = 0;
          puVar32[1] = 0;
          *(undefined8 *)(lVar22 + 0x98 + lVar25) = 0;
          *(undefined2 *)(pbVar26 + lVar25 + 0xa0) = *(undefined2 *)(lVar22 + 0xa0 + lVar25);
          lVar27 = lVar25 + lVar22;
          lVar25 = lVar25 + 0xa8;
        } while (lVar27 + 0xa8 != lVar21);
        do {
          func_0x0d0cda90(lVar22);
          lVar22 = lVar22 + 0xa8;
        } while (lVar22 != lVar21);
        lVar22 = *plVar34;
      }
      *(byte **)(lVar17 + 0xb8) = pbVar26;
      *(byte **)(lVar17 + 0xc0) = pbVar14;
      lVar21 = *(long *)(lVar17 + 200);
      *(long **)(lVar17 + 200) = plStack_1c0;
      if (lVar22 != 0) {
        func_0x0412a280(lVar22,lVar21 - lVar22);
      }
      goto LAB_0d09c4a1;
    }
    if (uVar29 < 0x186186186186187) {
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0xa8);
      if (plVar18 == (long *)0x0) {
        FUN_0eec74c0(uVar29 * 0xa8,0);
        plVar18 = (long *)0x0;
      }
      goto LAB_0d09c2c1;
    }
LAB_0d09cb9b:
    func_0x04882eb0();
  }
  func_0x0d0cdcb0();
LAB_0d09cba5:
  uVar20 = func_0x0d0cda80();
  if ((*pbVar14 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar28 + 0x18),*(ulong *)(pbVar28 + 8) & 0xfffffffffffffffe);
  }
  func_0x0d0cdbf0(&plStack_1d8);
  pbVar14 = pbStack_160;
  LOCK();
  lVar17 = *(long *)pbStack_110;
  *(long *)pbStack_110 = *(long *)pbStack_110 + -1;
  UNLOCK();
  if (lVar17 == 0) {
    (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
    func_0x0412c2d0(pbVar14);
  }
  func_0x0d0cb720(plVar13);
  func_0x0d0cb750(plVar13);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(lStack_178,uStack_188 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar20);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


