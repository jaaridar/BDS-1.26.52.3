/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0ab030 (ELF vaddr 0xcfab030)
 * Label: caller-of-callee
 * Body:  [[0d0ab030, 0d0ab9c9] [0d0ab9d0, 0d0aba34] [0d0aba40, 0d0ac165] [0d0ac170, 0d0ac1ae] [0d0ac1b0, 0d0ac43e] [0d0ac718, 0d0ac79e]]
 * Ghidra: FUN_0d0ab030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0ab030(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  byte *pbVar27;
  byte *pbVar28;
  long *plVar29;
  uint *puVar30;
  undefined8 *puVar31;
  long *plVar32;
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
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  ulong uStack_160;
  ulong auStack_158 [4];
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint *puStack_118;
  byte *pbStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar32 = (long *)0xcbf29ce484222325;
  uVar19 = *param_2;
  plStack_108 = (long *)0x0;
  uStack_100 = _DAT_01d8fb40;
  uStack_f8 = _UNK_01d8fb48;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pbVar28 = (byte *)((long)&uStack_100 + 1);
  uVar13 = func_0x0eee2e90(pbVar28);
  if (uVar13 != 0) {
    uVar23 = (ulong)((uint)uVar13 & 7);
    if (7 < uVar13) {
      uVar13 = uVar13 & 0xfffffffffffffff8;
      do {
        plVar32 = (long *)(((((((((long)plVar32 * 0x100000001b3 ^ (ulong)*pbVar28) * 0x100000001b3 ^
                                (ulong)pbVar28[1]) * 0x100000001b3 ^ (ulong)pbVar28[2]) *
                               0x100000001b3 ^ (ulong)pbVar28[3]) * 0x100000001b3 ^
                             (ulong)pbVar28[4]) * 0x100000001b3 ^ (ulong)pbVar28[5]) * 0x100000001b3
                           ^ (ulong)pbVar28[6]) * 0x100000001b3 ^ (ulong)pbVar28[7]);
        pbVar28 = pbVar28 + 8;
        uVar13 = uVar13 - 8;
      } while (uVar13 != 0);
    }
    if (uVar23 != 0) {
      uVar13 = 0;
      do {
        plVar32 = (long *)((long)plVar32 * 0x100000001b3 ^ (ulong)pbVar28[uVar13]);
        uVar13 = uVar13 + 1;
      } while (uVar23 != uVar13);
    }
  }
  plStack_b8 = (long *)&UNK_0f452d58;
  plStack_108 = plVar32;
  uStack_b0 = param_3;
  plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar32 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar32[1] = 0;
  plVar32[2] = 0;
  *plVar32 = (long)&UNK_0f452b70;
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
  plVar32[4] = (long)&UNK_0f2ccd78;
  plVar32[5] = 0;
  plVar32[6] = 0;
  plVar32[7] = 0;
  plVar32[8] = 0;
  plVar32[9] = 0;
  plVar32[10] = 0;
  plVar32[0xb] = 0;
  plVar32[0xc] = 0;
  *(undefined1 *)(plVar32 + 0xd) = 0;
  func_0x04aa75f0(plVar32 + 0xe,&lStack_198,&UNK_01254d89);
  *(undefined1 *)(plVar32 + 0x10) = 0;
  plVar34 = plVar32 + 0x11;
  plVar32[0x11] = 0;
  plVar32[0x12] = 0;
  plVar32[0x13] = 0;
  plVar32[0x14] = 0;
  plVar32[0x15] = 0;
  plVar32[0x16] = 0;
  plVar32[0x17] = 0xffffffff;
  plVar32[0x26] = 0;
  plVar32[0x27] = 0;
  plVar32[0x18] = 0;
  plVar32[0x19] = 0;
  plVar32[0x1a] = 0;
  plVar32[0x1b] = 0;
  plVar32[0x1c] = 0;
  plVar32[0x1d] = 0;
  plVar32[0x1e] = 0;
  plVar32[0x1f] = 0;
  plVar32[4] = (long)&UNK_0f452bc0;
  pplVar1 = (long **)(plVar32 + 0x2e);
  plVar32[0x2e] = 0;
  plVar32[0x2f] = 0;
  *(undefined1 *)(plVar32 + 0x36) = 0;
  if (pplVar1 != &plStack_1d8) {
    if (plStack_1d8 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1d8)(&plStack_1d8,pplVar1);
      plVar17 = plStack_1d8;
    }
    plStack_1d8 = (long *)0x0;
    *pplVar1 = plVar17;
  }
  plVar17 = plVar32 + 4;
  puVar30 = (uint *)(plVar32 + 0x12);
  if (plVar34 != (long *)&DAT_0f552108) {
    if ((*puVar30 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar32[0x14] = _DAT_0f552120;
        uVar7 = uRam000000000f55211c;
        uVar6 = _DAT_0f552118;
        uVar5 = uRam000000000f552114;
        *puVar30 = _DAT_0f552110;
        *(undefined4 *)((long)plVar32 + 0x94) = uVar5;
        *(undefined4 *)(plVar32 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar32 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puVar30,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar35 = (_DAT_0f552110 & 1) != 0;
      lVar16 = 0xf552111;
      if (bVar35) {
        lVar16 = _DAT_0f552120;
      }
      uVar13 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar35) {
        uVar13 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar30,lVar16,uVar13);
    }
  }
  plVar29 = plVar32 + 1;
  plVar32[0x11] = _DAT_0f552108;
  plVar32[0x15] = 0;
  if (plStack_1d8 != (long *)0x0) {
    (*(code *)plStack_1d8[1])(&plStack_1d8);
  }
  LOCK();
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  pbVar28 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar28 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar28 + 8) = 0;
  *(long *)((long)pbVar28 + 0x10) = 0;
  *(undefined **)pbVar28 = &UNK_0f452cb8;
  *(long *)((long)pbVar28 + 0x30) = 0;
  *(long *)((long)pbVar28 + 0x38) = 0;
  *(undefined **)((long)pbVar28 + 0x20) = &UNK_0f452d08;
  *(long **)((long)pbVar28 + 0x70) = plVar17;
  *(long **)((long)pbVar28 + 0x78) = plVar32;
  LOCK();
  plVar32[1] = plVar32[1] + 1;
  UNLOCK();
  plStack_1d8 = (long *)((long)pbVar28 + 0x20);
  pbStack_1d0 = pbVar28;
  puVar14 = (undefined4 *)func_0x0cd30730(uVar19,&plStack_108,0);
  plVar15 = *(long **)(puVar14 + 0x24);
  if (plVar15 < *(long **)(puVar14 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 == plVar34) {
LAB_0d0ab42a:
      *plVar15 = *plVar34;
      plVar15[5] = (long)pbVar28 + 0x20;
      plVar15[6] = (long)pbVar28;
LAB_0d0ab497:
      LOCK();
      *(long *)((long)pbVar28 + 8) = *(long *)((long)pbVar28 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puVar30 & 1) == 0) {
        plVar15[3] = plVar32[0x14];
        lVar16 = plVar32[0x13];
        plVar15[1] = *(long *)puVar30;
        plVar15[2] = lVar16;
        goto LAB_0d0ab42a;
      }
      func_0x04885070(plVar15 + 1,plVar32[0x14],plVar32[0x13]);
      *plVar15 = *plVar34;
      plVar15[5] = (long)plStack_1d8;
      plVar15[6] = (long)pbStack_1d0;
      pbVar28 = pbStack_1d0;
      if (pbStack_1d0 != (byte *)0x0) goto LAB_0d0ab497;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar14 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x0cd33e60(puVar14 + 0x22,plVar34,&plStack_1d8);
  }
  *(long **)(puVar14 + 0x24) = plVar15;
  uVar5 = *puVar14;
  uVar6 = puVar14[1];
  uVar7 = puVar14[2];
  uVar8 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar34 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar34 = *plVar34 + 1;
    UNLOCK();
  }
  plVar34 = (long *)plVar32[0xf];
  *(undefined4 *)(plVar32 + 0xe) = uVar5;
  *(undefined4 *)((long)plVar32 + 0x74) = uVar6;
  *(undefined4 *)(plVar32 + 0xf) = uVar7;
  *(undefined4 *)((long)plVar32 + 0x7c) = uVar8;
  if (plVar34 != (long *)0x0) {
    LOCK();
    plVar15 = plVar34 + 1;
    lVar16 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
      func_0x0412c2d0(plVar34);
    }
  }
  pbVar28 = pbStack_1d0;
  *(undefined1 *)(plVar32 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  if (pbStack_1d0 != (byte *)0x0) {
    LOCK();
    plVar34 = (long *)((long)pbStack_1d0 + 8);
    lVar16 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*(long *)pbStack_1d0 + 0x10))(pbStack_1d0);
      func_0x0412c2d0(pbVar28);
    }
  }
  LOCK();
  lVar16 = *plVar29;
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*plVar32 + 0x10))(plVar32);
    func_0x0412c2d0(plVar32);
    LOCK();
    lVar16 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar16 = *plVar29;
    *plVar29 = *plVar29 + -1;
    UNLOCK();
  }
  if (lVar16 == 0) {
    (**(code **)(*plVar32 + 0x10))(plVar32);
    func_0x0412c2d0(plVar32);
  }
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  lVar16 = (**(code **)(*plVar17 + 0x10))(plVar17,&uStack_138);
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  uStack_188 = 0;
  lStack_180 = 0;
  pbStack_178 = (byte *)0x0;
  uStack_190 = 0x656c6261740a;
  lStack_198 = -0x63b04cd68bfe1db5;
  uStack_70 = 0;
  uStack_100 = 0;
  lStack_78 = 0;
  plStack_108 = (long *)&UNK_0f452d70;
  plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar32 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_1d8 = plStack_108;
  plVar32[1] = 0;
  plVar32[2] = 0;
  *plVar32 = (long)&UNK_0f44ea48;
  pbStack_1d0 = (byte *)0x0;
  plStack_108 = (long *)0x0;
  plVar32[4] = (long)&UNK_0f2ccd78;
  plVar32[5] = 0;
  plVar32[6] = 0;
  plVar32[7] = 0;
  plVar32[8] = 0;
  plVar32[9] = 0;
  plVar32[10] = 0;
  plVar32[0xb] = 0;
  plVar32[0xc] = 0;
  *(undefined1 *)(plVar32 + 0xd) = 0;
  func_0x04aa75f0(plVar32 + 0xe,&uStack_1d9,&UNK_01254d89);
  *(undefined1 *)(plVar32 + 0x10) = 0;
  pbVar18 = (byte *)(plVar32 + 0x11);
  plVar32[0x11] = 0;
  plVar32[0x12] = 0;
  plVar32[0x13] = 0;
  plVar32[0x14] = 0;
  plVar32[0x15] = 0;
  plVar32[0x16] = 0;
  plVar32[0x17] = 0xffffffff;
  plVar32[0x26] = 0;
  plVar32[0x27] = 0;
  plVar32[0x18] = 0;
  plVar32[0x19] = 0;
  plVar32[0x1a] = 0;
  plVar32[0x1b] = 0;
  plVar32[0x1c] = 0;
  plVar32[0x1d] = 0;
  plVar32[0x1e] = 0;
  plVar32[0x1f] = 0;
  plVar32[4] = (long)&UNK_0f44ea98;
  plVar32[0x2e] = 0;
  plVar32[0x2f] = 0;
  plVar32[0x30] = 0;
  plVar32[0x31] = 0;
  plVar32[0x32] = 0;
  plVar32[0x33] = 0;
  plVar32[0x34] = 0;
  *(undefined4 *)(plVar32 + 0x35) = 0x3f800000;
  pbVar28 = (byte *)(plVar32 + 0x36);
  plVar32[0x36] = 0;
  plVar32[0x37] = 0;
  if (plStack_1d8 == (long *)0x0) {
    plVar34 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1d8)(&plStack_1d8,pbVar28);
    plVar34 = plStack_1d8;
  }
  plVar17 = plVar32 + 4;
  plStack_1d8 = (long *)0x0;
  plVar32[0x36] = (long)plVar34;
  *(undefined1 *)(plVar32 + 0x3e) = 0;
  puStack_118 = (uint *)(plVar32 + 0x12);
  if (pbVar18 != &DAT_0f552138) {
    if ((*puStack_118 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar32[0x14] = _DAT_0f552150;
        uVar7 = uRam000000000f55214c;
        uVar6 = _DAT_0f552148;
        uVar5 = uRam000000000f552144;
        *puStack_118 = _DAT_0f552140;
        *(undefined4 *)((long)plVar32 + 0x94) = uVar5;
        *(undefined4 *)(plVar32 + 0x13) = uVar6;
        *(undefined4 *)((long)plVar32 + 0x9c) = uVar7;
      }
      else {
        func_0x04885070(puStack_118,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar35 = (_DAT_0f552140 & 1) != 0;
      lVar21 = 0xf552141;
      if (bVar35) {
        lVar21 = _DAT_0f552150;
      }
      uVar13 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar35) {
        uVar13 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_118,lVar21,uVar13);
    }
  }
  plVar32[0x11] = _DAT_0f552138;
  plVar32[0x15] = 0;
  if (plStack_1d8 != (long *)0x0) {
    (*(code *)plStack_1d8[1])(&plStack_1d8);
  }
  plVar34 = plVar32 + 1;
  if (plStack_108 != (long *)0x0) {
    (*(code *)plStack_108[1])(&plStack_108);
  }
  LOCK();
  *plVar34 = *plVar34 + 1;
  UNLOCK();
  plStack_c0 = plVar34;
  pbStack_170 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbStack_170 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar25 = pbStack_178;
  lVar21 = lStack_198;
  pbStack_170[8] = 0;
  pbStack_170[9] = 0;
  pbStack_170[10] = 0;
  pbStack_170[0xb] = 0;
  pbStack_170[0xc] = 0;
  pbStack_170[0xd] = 0;
  pbStack_170[0xe] = 0;
  pbStack_170[0xf] = 0;
  pbStack_170[0x10] = 0;
  pbStack_170[0x11] = 0;
  pbStack_170[0x12] = 0;
  pbStack_170[0x13] = 0;
  pbStack_170[0x14] = 0;
  pbStack_170[0x15] = 0;
  pbStack_170[0x16] = 0;
  pbStack_170[0x17] = 0;
  *(undefined **)pbStack_170 = &UNK_0f44eb78;
  pbStack_170[0x30] = 0;
  pbStack_170[0x31] = 0;
  pbStack_170[0x32] = 0;
  pbStack_170[0x33] = 0;
  pbStack_170[0x34] = 0;
  pbStack_170[0x35] = 0;
  pbStack_170[0x36] = 0;
  pbStack_170[0x37] = 0;
  pbStack_170[0x38] = 0;
  pbStack_170[0x39] = 0;
  pbStack_170[0x3a] = 0;
  pbStack_170[0x3b] = 0;
  pbStack_170[0x3c] = 0;
  pbStack_170[0x3d] = 0;
  pbStack_170[0x3e] = 0;
  pbStack_170[0x3f] = 0;
  *(undefined **)(pbStack_170 + 0x20) = &UNK_0f44ebc8;
  *(long **)(pbStack_170 + 0x70) = plVar17;
  *(long **)(pbStack_170 + 0x78) = plVar32;
  LOCK();
  plVar32[1] = plVar32[1] + 1;
  UNLOCK();
  pbStack_110 = pbStack_170 + 8;
  uStack_160 = *(ulong *)(lVar16 + 0xb8);
  uVar13 = *(ulong *)(lVar16 + 0xc0);
  pbVar27 = pbStack_170;
  pbStack_168 = pbStack_170;
  plStack_c8 = plVar17;
  if (uStack_160 != uVar13) {
    lVar20 = lStack_180;
    uVar23 = uStack_188;
    if ((uStack_190 & 1) == 0) {
      lVar20 = (long)&uStack_190 + 1;
      uVar23 = uStack_190 >> 1 & 0x7f;
    }
    lVar24 = uStack_160 + 0x19;
    do {
      if (*(long *)(lVar24 + -9) == lVar21) {
        pbVar28 = (byte *)(lVar24 + -9);
        if ((*(long **)(lVar24 + 0x17) == &lStack_198) && (pbVar28 == pbVar25)) {
LAB_0d0abeae:
          puVar14 = (undefined4 *)(lVar24 + -0x19);
          pbVar25 = pbStack_170;
          goto LAB_0d0abebf;
        }
        bVar2 = *(byte *)(lVar24 + -1);
        if ((bVar2 & 1) == 0) {
          uVar33 = (ulong)(bVar2 >> 1);
        }
        else {
          uVar33 = *(ulong *)(lVar24 + 7);
        }
        if (uVar33 == uVar23) {
          lVar26 = lVar24;
          if ((bVar2 & 1) != 0) {
            lVar26 = *(long *)(lVar24 + 0xf);
          }
          iVar12 = func_0x0eee3000(lVar26,lVar20,uVar23);
          if (iVar12 == 0) {
            *(long **)(lVar24 + 0x17) = &lStack_198;
            pbStack_178 = pbVar28;
            goto LAB_0d0abeae;
          }
        }
      }
      *(undefined8 *)(lVar24 + 0x17) = 0;
      uVar33 = lVar24 + 0x8f;
      pbVar27 = pbVar25;
      lVar24 = lVar24 + 0xa8;
    } while (uVar33 != uVar13);
  }
  if (uVar13 < *(ulong *)(lVar16 + 200)) {
    func_0x0d0e91b0(uVar13);
    pbVar28 = (byte *)(uVar13 + 0xa8);
    *(byte **)(lVar16 + 0xc0) = pbVar28;
LAB_0d0abd11:
    *(byte **)(lVar16 + 0xc0) = pbVar28;
    func_0x0b63b6d0(*(undefined8 *)(pbVar28 + -0xa8),&lStack_198);
    lVar21 = *(long *)(lVar16 + 0xc0);
    *(undefined1 *)(lVar21 + -7) = *(undefined1 *)(lVar16 + 0x60);
    if ((long *)(lVar21 + -0x98) != &lStack_198) {
      pbVar28 = (byte *)(lVar21 + -0x90);
      if ((*pbVar28 & 1) == 0) {
        if ((uStack_190 & 1) == 0) {
          *(long *)(lVar21 + -0x80) = lStack_180;
          *(undefined4 *)pbVar28 = (undefined4)uStack_190;
          *(undefined4 *)(lVar21 + -0x8c) = uStack_190._4_4_;
          *(undefined4 *)(lVar21 + -0x88) = (undefined4)uStack_188;
          *(undefined4 *)(lVar21 + -0x84) = uStack_188._4_4_;
        }
        else {
          func_0x04885070(pbVar28,lStack_180,uStack_188);
        }
      }
      else {
        uVar13 = uStack_190 >> 1 & 0x7f;
        lVar20 = (long)&uStack_190 + 1;
        if ((uStack_190 & 1) != 0) {
          uVar13 = uStack_188;
          lVar20 = lStack_180;
        }
        func_0x04885120(pbVar28,lVar20,uVar13);
      }
    }
    *(long *)(lVar21 + -0x98) = lStack_198;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&plStack_1d8,&uStack_190,*(undefined1 *)(lVar16 + 0x60));
    lVar21 = *(long *)(lVar16 + 0xc0);
    func_0x04167a70(lVar21 + -0x70,&plStack_1d8);
    *(byte **)(lVar21 + -0x68) = pbStack_1d0;
    *(byte **)(lVar21 + -0x60) = pbStack_1c8;
    *(long **)(lVar21 + -0x58) = plStack_1c0;
    *(long **)(lVar21 + -0x50) = plStack_1b8;
    uVar5 = (undefined4)uStack_1b0;
    uVar6 = uStack_1b0._4_4_;
    uVar7 = (undefined4)uStack_1a8;
    uVar8 = uStack_1a8._4_4_;
    uStack_1b0 = 0;
    uStack_1a8 = (byte *)0x0;
    plVar34 = *(long **)(lVar21 + -0x40);
    *(undefined4 *)(lVar21 + -0x48) = uVar5;
    *(undefined4 *)(lVar21 + -0x44) = uVar6;
    *(undefined4 *)(lVar21 + -0x40) = uVar7;
    *(undefined4 *)(lVar21 + -0x3c) = uVar8;
    if (plVar34 != (long *)0x0) {
      LOCK();
      plVar17 = plVar34 + 1;
      lVar20 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
        func_0x0412c2d0(plVar34);
      }
    }
    pbVar25 = pbStack_170;
    pbVar28 = uStack_1a8;
    *(undefined8 *)(lVar21 + -0x38) = uStack_1a0;
    if (uStack_1a8 != (byte *)0x0) {
      LOCK();
      pbVar27 = uStack_1a8 + 8;
      lVar21 = *(long *)pbVar27;
      *(long *)pbVar27 = *(long *)pbVar27 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)uStack_1a8 + 0x10))(uStack_1a8);
        func_0x0412c2d0(pbVar28);
      }
    }
    func_0x04167a40(&plStack_1d8);
    lVar16 = *(long *)(lVar16 + 0xc0);
    *(undefined1 *)(lVar16 + -8) = 0;
    puVar14 = (undefined4 *)(lVar16 + -0xa8);
LAB_0d0abebf:
    pbVar25 = pbVar25 + 0x20;
    pbVar27 = *(byte **)(puVar14 + 0x24);
    if (pbVar27 < *(byte **)(puVar14 + 0x26)) {
      pbVar27[0x10] = 0;
      pbVar27[0x11] = 0;
      pbVar27[0x12] = 0;
      pbVar27[0x13] = 0;
      pbVar27[0x14] = 0;
      pbVar27[0x15] = 0;
      pbVar27[0x16] = 0;
      pbVar27[0x17] = 0;
      pbVar27[0x18] = 0;
      pbVar27[0x19] = 0;
      pbVar27[0x1a] = 0;
      pbVar27[0x1b] = 0;
      pbVar27[0x1c] = 0;
      pbVar27[0x1d] = 0;
      pbVar27[0x1e] = 0;
      pbVar27[0x1f] = 0;
      pbVar27[0] = 0;
      pbVar27[1] = 0;
      pbVar27[2] = 0;
      pbVar27[3] = 0;
      pbVar27[4] = 0;
      pbVar27[5] = 0;
      pbVar27[6] = 0;
      pbVar27[7] = 0;
      pbVar27[8] = 0;
      pbVar27[9] = 0;
      pbVar27[10] = 0;
      pbVar27[0xb] = 0;
      pbVar27[0xc] = 0;
      pbVar27[0xd] = 0;
      pbVar27[0xe] = 0;
      pbVar27[0xf] = 0;
      pbVar27[0x20] = 0;
      pbVar27[0x21] = 0;
      pbVar27[0x22] = 0;
      pbVar27[0x23] = 0;
      pbVar27[0x24] = 0;
      pbVar27[0x25] = 0;
      pbVar27[0x26] = 0;
      pbVar27[0x27] = 0;
      if (pbVar27 != pbVar18) {
        if ((*puStack_118 & 1) == 0) {
          *(undefined8 *)(pbVar27 + 0x18) = *(undefined8 *)(puStack_118 + 4);
          uVar19 = *(undefined8 *)(puStack_118 + 2);
          *(undefined8 *)(pbVar27 + 8) = *(undefined8 *)puStack_118;
          *(undefined8 *)(pbVar27 + 0x10) = uVar19;
        }
        else {
          func_0x04885070(pbVar27 + 8,plVar32[0x14],plVar32[0x13]);
        }
      }
      *(undefined8 *)pbVar27 = *(undefined8 *)pbVar18;
      *(byte **)(pbVar27 + 0x28) = pbVar25;
      *(byte **)(pbVar27 + 0x30) = pbStack_168;
      LOCK();
      *(long *)(pbStack_168 + 8) = *(long *)(pbStack_168 + 8) + 1;
      UNLOCK();
      pbVar27 = pbVar27 + 0x38;
      *(byte **)(puVar14 + 0x24) = pbVar27;
      goto LAB_0d0ac20e;
    }
    lVar16 = (long)pbVar27 - *(long *)(puVar14 + 0x22);
    uVar13 = (lVar16 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar27 = pbVar18;
    if (uVar13 < 0x492492492492493) {
      lVar21 = (long)*(byte **)(puVar14 + 0x26) - *(long *)(puVar14 + 0x22) >> 3;
      uVar23 = lVar21 * -0x2492492492492492;
      if (uVar13 < uVar23) {
        uVar13 = uVar23;
      }
      plVar34 = (long *)(puVar14 + 0x22);
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar13 = 0x492492492492492;
      }
      plStack_1b8 = plVar34;
      pbStack_170 = pbVar25;
      if (uVar13 == 0) {
        plVar17 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar13) goto LAB_0d0ac405;
        plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0x38);
        if (plVar17 == (long *)0x0) {
          func_0x0eec74c0(uVar13 * 0x38,0);
          plVar17 = (long *)0x0;
        }
      }
      pbVar28 = (byte *)((long)plVar17 + lVar16);
      plStack_1c0 = plVar17 + uVar13 * 7;
      puVar31 = (undefined8 *)((long)plVar17 + lVar16 + 0x10);
      *puVar31 = 0;
      puVar31[1] = 0;
      *(undefined8 *)((long)plVar17 + lVar16) = 0;
      ((undefined8 *)((long)plVar17 + lVar16))[1] = 0;
      *(undefined8 *)((long)plVar17 + lVar16 + 0x20) = 0;
      pbStack_1c8 = pbVar28;
      plStack_1d8 = plVar17;
      pbStack_1d0 = pbVar28;
      if (pbVar28 != pbVar18) {
        puVar30 = (uint *)((long)plVar17 + lVar16 + 8);
        if ((*puStack_118 & 1) == 0) {
          *(undefined8 *)((long)plVar17 + lVar16 + 0x18) = *(undefined8 *)(puStack_118 + 4);
          uVar9 = puStack_118[1];
          uVar10 = puStack_118[2];
          uVar11 = puStack_118[3];
          *puVar30 = *puStack_118;
          *(uint *)((long)plVar17 + lVar16 + 0xc) = uVar9;
          *(uint *)((long)plVar17 + lVar16 + 0x10) = uVar10;
          *(uint *)((long)plVar17 + lVar16 + 0x14) = uVar11;
        }
        else {
          func_0x04885070(puVar30,plVar32[0x14],plVar32[0x13]);
        }
      }
      *(undefined8 *)pbVar28 = *(undefined8 *)pbVar18;
      *(byte **)(pbVar28 + 0x28) = pbStack_170;
      *(byte **)(pbVar28 + 0x30) = pbStack_168;
      LOCK();
      *(long *)(pbStack_168 + 8) = *(long *)(pbStack_168 + 8) + 1;
      UNLOCK();
      pbStack_1c8 = pbStack_1c8 + 0x38;
      puVar31 = *(undefined8 **)(puVar14 + 0x22);
      puVar3 = *(undefined8 **)(puVar14 + 0x24);
      pbVar28 = pbStack_1d0 + ((long)puVar31 - (long)puVar3);
      pbVar18 = pbVar28;
      puVar22 = puVar31;
      if ((long)puVar31 - (long)puVar3 != 0) {
        do {
          pbVar18[0x10] = 0;
          pbVar18[0x11] = 0;
          pbVar18[0x12] = 0;
          pbVar18[0x13] = 0;
          pbVar18[0x14] = 0;
          pbVar18[0x15] = 0;
          pbVar18[0x16] = 0;
          pbVar18[0x17] = 0;
          pbVar18[0x18] = 0;
          pbVar18[0x19] = 0;
          pbVar18[0x1a] = 0;
          pbVar18[0x1b] = 0;
          pbVar18[0x1c] = 0;
          pbVar18[0x1d] = 0;
          pbVar18[0x1e] = 0;
          pbVar18[0x1f] = 0;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          pbVar18[0x20] = 0;
          pbVar18[0x21] = 0;
          pbVar18[0x22] = 0;
          pbVar18[0x23] = 0;
          pbVar18[0x24] = 0;
          pbVar18[0x25] = 0;
          pbVar18[0x26] = 0;
          pbVar18[0x27] = 0;
          *(undefined8 *)(pbVar18 + 0x18) = puVar22[3];
          uVar19 = puVar22[2];
          *(undefined8 *)(pbVar18 + 8) = puVar22[1];
          *(undefined8 *)(pbVar18 + 0x10) = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *(undefined8 *)pbVar18 = *puVar22;
          uVar19 = puVar22[6];
          *(undefined8 *)(pbVar18 + 0x28) = puVar22[5];
          *(undefined8 *)(pbVar18 + 0x30) = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          pbVar18 = pbVar18 + 0x38;
        } while (puVar22 != puVar3);
        do {
          plVar17 = (long *)puVar31[6];
          if (plVar17 == (long *)0x0) {
LAB_0d0ac195:
            bVar2 = *(byte *)(puVar31 + 1);
          }
          else {
            LOCK();
            plVar29 = plVar17 + 1;
            lVar16 = *plVar29;
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (lVar16 != 0) goto LAB_0d0ac195;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
            bVar2 = *(byte *)(puVar31 + 1);
          }
          if ((bVar2 & 1) != 0) {
            func_0x0412a280(puVar31[3],puVar31[1] & 0xfffffffffffffffe);
          }
          puVar31 = puVar31 + 7;
        } while (puVar31 != puVar3);
        puVar31 = (undefined8 *)*plVar34;
      }
      pbVar27 = pbStack_1c8;
      *(byte **)(puVar14 + 0x22) = pbVar28;
      *(byte **)(puVar14 + 0x24) = pbStack_1c8;
      lVar16 = *(long *)(puVar14 + 0x26);
      *(long **)(puVar14 + 0x26) = plStack_1c0;
      if (puVar31 != (undefined8 *)0x0) {
        func_0x0412a280(puVar31,lVar16 - (long)puVar31);
      }
LAB_0d0ac20e:
      plVar34 = plStack_c8;
      *(byte **)(puVar14 + 0x24) = pbVar27;
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      if (*(long *)(puVar14 + 2) != 0) {
        LOCK();
        plVar17 = (long *)(*(long *)(puVar14 + 2) + 8);
        *plVar17 = *plVar17 + 1;
        UNLOCK();
      }
      plVar17 = (long *)plVar32[0xf];
      *(undefined4 *)(plVar32 + 0xe) = uVar5;
      *(undefined4 *)((long)plVar32 + 0x74) = uVar6;
      *(undefined4 *)(plVar32 + 0xf) = uVar7;
      *(undefined4 *)((long)plVar32 + 0x7c) = uVar8;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar29 = plVar17 + 1;
        lVar16 = *plVar29;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      pbVar28 = pbStack_168;
      *(undefined1 *)(plVar32 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
      LOCK();
      lVar16 = *(long *)pbStack_110;
      *(long *)pbStack_110 = *(long *)pbStack_110 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*(long *)pbStack_168 + 0x10))(pbStack_168);
        func_0x0412c2d0(pbVar28);
        LOCK();
        lVar16 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar17 = plStack_c0;
      }
      else {
        LOCK();
        lVar16 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar17 = plStack_c0;
      }
      plStack_c0 = plVar17;
      if (lVar16 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
        LOCK();
        lVar16 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar16 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
      }
      if (lVar16 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
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
      if ((uStack_190 & 1) != 0) {
        func_0x0412a280(lStack_180,uStack_190 & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar21 = uVar13 - uStack_160;
    uVar13 = (lVar21 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar13) goto LAB_0d0ac40f;
    plVar34 = (long *)(lVar16 + 0xb8);
    lVar20 = (long)(*(ulong *)(lVar16 + 200) - uStack_160) >> 3;
    uVar23 = lVar20 * -0x6186186186186186;
    if (uVar13 < uVar23) {
      uVar13 = uVar23;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
      uVar13 = 0x186186186186186;
    }
    plStack_1b8 = plVar34;
    if (uVar13 == 0) {
      plVar17 = (long *)0x0;
LAB_0d0abb31:
      pbStack_1d0 = (byte *)(lVar21 + (long)plVar17);
      plStack_1c0 = plVar17 + uVar13 * 0x15;
      plStack_1d8 = plVar17;
      pbStack_1c8 = pbStack_1d0;
      func_0x0d0e91b0(pbStack_1d0);
      pbVar28 = pbStack_1c8 + 0xa8;
      lVar21 = *(long *)(lVar16 + 0xb8);
      lVar20 = *(long *)(lVar16 + 0xc0);
      pbVar25 = pbStack_1d0 + (lVar21 - lVar20);
      if (lVar21 != lVar20) {
        lVar24 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar21 + lVar24))[1];
          *(undefined8 *)(pbVar25 + lVar24) = *(undefined8 *)(lVar21 + lVar24);
          *(undefined8 *)(pbVar25 + lVar24 + 8) = uVar19;
          *(undefined8 *)(lVar21 + lVar24) = 0;
          ((undefined8 *)(lVar21 + lVar24))[1] = 0;
          pbVar27 = pbVar25 + lVar24 + 0x20;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          pbVar27[8] = 0;
          pbVar27[9] = 0;
          pbVar27[10] = 0;
          pbVar27[0xb] = 0;
          pbVar27[0xc] = 0;
          pbVar27[0xd] = 0;
          pbVar27[0xe] = 0;
          pbVar27[0xf] = 0;
          pbVar27 = pbVar25 + lVar24 + 0x10;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          pbVar27[8] = 0;
          pbVar27[9] = 0;
          pbVar27[10] = 0;
          pbVar27[0xb] = 0;
          pbVar27[0xc] = 0;
          pbVar27[0xd] = 0;
          pbVar27[0xe] = 0;
          pbVar27[0xf] = 0;
          pbVar27 = pbVar25 + lVar24 + 0x30;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          *(undefined8 *)(pbVar25 + lVar24 + 0x28) = *(undefined8 *)(lVar21 + 0x28 + lVar24);
          puVar14 = (undefined4 *)(lVar21 + 0x18 + lVar24);
          uVar5 = puVar14[1];
          uVar6 = puVar14[2];
          uVar7 = puVar14[3];
          pbVar27 = pbVar25 + lVar24 + 0x18;
          *(undefined4 *)pbVar27 = *puVar14;
          *(undefined4 *)(pbVar27 + 4) = uVar5;
          *(undefined4 *)(pbVar27 + 8) = uVar6;
          *(undefined4 *)(pbVar27 + 0xc) = uVar7;
          *(undefined2 *)(lVar21 + 0x18 + lVar24) = 0;
          *(undefined8 *)(pbVar25 + lVar24 + 0x10) = *(undefined8 *)(lVar21 + 0x10 + lVar24);
          func_0x04167a20(pbVar25 + lVar24 + 0x38,lVar24 + lVar21 + 0x38);
          puVar31 = (undefined8 *)(lVar21 + 0x40 + lVar24);
          uVar19 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar24 + 0x40) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar24 + 0x40 + 8) = uVar19;
          puVar31 = (undefined8 *)(lVar21 + 0x50 + lVar24);
          uVar19 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar24 + 0x50) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar24 + 0x50 + 8) = uVar19;
          puVar31 = (undefined8 *)(lVar21 + 0x60 + lVar24);
          uVar19 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar24 + 0x60) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar24 + 0x60 + 8) = uVar19;
          puVar31 = (undefined8 *)(lVar21 + 0x60 + lVar24);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(pbVar25 + lVar24 + 0x70) = *(undefined8 *)(lVar21 + 0x70 + lVar24);
          puVar31 = (undefined8 *)(lVar21 + 0x78 + lVar24);
          uVar19 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar24 + 0x78) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar24 + 0x78 + 8) = uVar19;
          pbVar27 = pbVar25 + lVar24 + 0x88;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          pbVar27[8] = 0;
          pbVar27[9] = 0;
          pbVar27[10] = 0;
          pbVar27[0xb] = 0;
          pbVar27[0xc] = 0;
          pbVar27[0xd] = 0;
          pbVar27[0xe] = 0;
          pbVar27[0xf] = 0;
          pbVar27 = pbVar25 + lVar24 + 0x98;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          puVar14 = (undefined4 *)(lVar21 + 0x88 + lVar24);
          uVar5 = puVar14[1];
          uVar6 = puVar14[2];
          uVar7 = puVar14[3];
          pbVar27 = pbVar25 + lVar24 + 0x88;
          *(undefined4 *)pbVar27 = *puVar14;
          *(undefined4 *)(pbVar27 + 4) = uVar5;
          *(undefined4 *)(pbVar27 + 8) = uVar6;
          *(undefined4 *)(pbVar27 + 0xc) = uVar7;
          *(undefined8 *)(pbVar25 + lVar24 + 0x98) = *(undefined8 *)(lVar21 + 0x98 + lVar24);
          puVar31 = (undefined8 *)(lVar21 + 0x88 + lVar24);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar24) = 0;
          *(undefined2 *)(pbVar25 + lVar24 + 0xa0) = *(undefined2 *)(lVar21 + 0xa0 + lVar24);
          lVar26 = lVar24 + lVar21;
          lVar24 = lVar24 + 0xa8;
        } while (lVar26 + 0xa8 != lVar20);
        do {
          func_0x0d0e9330(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar20);
        lVar21 = *plVar34;
      }
      *(byte **)(lVar16 + 0xb8) = pbVar25;
      *(byte **)(lVar16 + 0xc0) = pbVar28;
      lVar20 = *(long *)(lVar16 + 200);
      *(long **)(lVar16 + 200) = plStack_1c0;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar20 - lVar21);
      }
      goto LAB_0d0abd11;
    }
    if (uVar13 < 0x186186186186187) {
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0xa8);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(uVar13 * 0xa8,0);
        plVar17 = (long *)0x0;
      }
      goto LAB_0d0abb31;
    }
LAB_0d0ac405:
    func_0x04882eb0();
  }
  func_0x0d0e9550();
LAB_0d0ac40f:
  uVar19 = func_0x0d0e9320();
  if ((*pbVar28 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar27 + 0x18),*(ulong *)(pbVar27 + 8) & 0xfffffffffffffffe);
  }
  func_0x0d0e9490(&plStack_1d8);
  pbVar28 = pbStack_168;
  LOCK();
  lVar16 = *(long *)pbStack_110;
  *(long *)pbStack_110 = *(long *)pbStack_110 + -1;
  UNLOCK();
  if (lVar16 == 0) {
    (**(code **)(*(long *)pbStack_168 + 0x10))(pbStack_168);
    func_0x0412c2d0(pbVar28);
  }
  func_0x0d0e6fc0(plVar32);
  func_0x0d0e6ff0(plVar32);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_190 & 1) != 0) {
    func_0x0412a280(lStack_180,uStack_190 & 0xfffffffffffffffe);
  }
  _Unwind_Resume(uVar19);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


