/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4ed460 (ELF vaddr 0xc3ed460)
 * Label: caller-of-callee
 * Body:  [[0c4ed460, 0c4ed49e] [0c4ed4a0, 0c4ed8e6] [0c4ed8f0, 0c4ed910] [0c4ed920, 0c4edd0d] [0c4edd10, 0c4edf8e] [0c4edf90, 0c4ee43e] [0c4ee440, 0c4ee4db] [0c4ee4e0, 0c4ee7ed] [0c4ee86e, 0c4ee87f] [0c4ee981, 0c4ee99c] [0c4ee9ca, 0c4eea53]]
 * Ghidra: FUN_0c4ed460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_0c4ed460(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined1 (*param_4) [16],
            long param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [8];
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 *puVar24;
  undefined1 auStack_d98 [8];
  undefined8 uStack_d90;
  undefined1 *puStack_d88;
  undefined1 (*pauStack_d78) [16];
  undefined1 auStack_d70 [8];
  ulong uStack_d68;
  undefined8 *puStack_d60;
  undefined1 (*pauStack_d58) [16];
  undefined1 auStack_d50 [16];
  undefined8 uStack_d40;
  ulong uStack_d38;
  undefined8 uStack_d30;
  undefined1 *puStack_d28;
  undefined1 (*pauStack_d20) [16];
  long lStack_d18;
  undefined2 auStack_d10 [4];
  undefined1 auStack_d08 [16];
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined2 uStack_ce8;
  long lStack_ce0;
  ulong uStack_cd8;
  long lStack_cd0;
  byte bStack_cc8;
  undefined7 uStack_cc7;
  undefined8 uStack_cb8;
  long *plStack_ca8;
  long lStack_ca0;
  long lStack_c98;
  long lStack_c90;
  undefined1 auStack_c88 [8];
  ulong uStack_c80;
  ulong uStack_c78;
  char cStack_c62;
  ulong uStack_c60;
  ulong uStack_c58;
  undefined1 (*pauStack_c50) [16];
  undefined8 uStack_c48;
  undefined1 auStack_c40 [8];
  code *pcStack_c38;
  int iStack_c30;
  char cStack_c2c;
  undefined1 auStack_c28 [76];
  byte bStack_bdc;
  undefined1 auStack_bd8 [24];
  ulong auStack_bc0 [2];
  ulong uStack_bb0;
  ulong uStack_ba8;
  ulong uStack_b98;
  ulong uStack_b90;
  byte bStack_b88;
  undefined7 uStack_b87;
  long lStack_b80;
  char *pcStack_b78;
  undefined1 auStack_b70 [96];
  uint uStack_b10;
  undefined1 auStack_b08 [80];
  undefined1 auStack_ab8 [16];
  undefined1 auStack_aa8 [16];
  undefined1 auStack_a98 [16];
  undefined1 auStack_a88 [16];
  undefined1 auStack_a78 [16];
  undefined1 auStack_a68 [16];
  undefined1 auStack_a58 [16];
  undefined1 auStack_a48 [16];
  undefined1 auStack_a38 [16];
  int iStack_a28;
  undefined1 auStack_a20 [16];
  undefined1 auStack_a10 [16];
  undefined4 uStack_a00;
  undefined1 auStack_9f8 [16];
  undefined1 auStack_9e8 [16];
  undefined1 auStack_9d8 [16];
  undefined1 auStack_9c8 [16];
  undefined8 uStack_9b8;
  byte bStack_9a8;
  undefined5 uStack_9a7;
  char cStack_9a2;
  undefined1 uStack_9a1;
  undefined1 uStack_9a0;
  undefined4 uStack_99f;
  undefined1 uStack_99b;
  ushort uStack_99a;
  undefined4 uStack_998;
  uint uStack_994;
  ulong auStack_990 [128];
  long lStack_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [16];
  undefined1 auStack_570 [16];
  undefined1 auStack_560 [16];
  undefined1 auStack_550 [16];
  undefined8 uStack_540;
  undefined1 auStack_538 [216];
  undefined1 auStack_460 [24];
  long lStack_448;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  lVar18 = *(long *)(param_2 + 8);
  lVar19 = *(long *)(param_2 + 0x10);
  while ((lVar18 != lVar19 &&
         (((*(char *)(**(long **)(lVar18 + 0xe8) + 0x88) != '\x01' ||
           (lVar9 = **(long **)(**(long **)(lVar18 + 0xe8) + 8),
           *(long *)(lVar9 + 0x128) != _DAT_0f6e8470)) ||
          (*(long *)(lVar9 + 0x130) != _DAT_0f6e8478))))) {
    lVar18 = lVar18 + 0x110;
  }
  lStack_cd0 = param_5;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar11 = _UNK_01422e4b;
  uStack_998 = SUB84(puVar8,0);
  uStack_994 = (uint)((ulong)puVar8 >> 0x20);
  bStack_9a8 = 0x29;
  uStack_9a7 = 0;
  cStack_9a2 = '\0';
  uStack_9a1 = 0;
  uStack_9a0 = 0x27;
  uStack_99f = 0;
  uStack_99b = 0;
  uStack_99a = 0;
  puVar8[2] = _DAT_01422e43;
  puVar8[3] = uVar11;
  uVar11 = _UNK_01422e3b;
  *puVar8 = _DAT_01422e33;
  puVar8[1] = uVar11;
  *(undefined8 *)((long)puVar8 + 0x1f) = 0x6e6f736a2e676f6c;
  *(undefined1 *)((long)puVar8 + 0x27) = 0;
  if (lVar18 == lVar19) {
    lVar18 = *(long *)(param_2 + 8);
    uVar13 = 0x28;
  }
  else {
    do {
      cVar6 = func_0x0d62c2c0(lVar18,&bStack_9a8);
      lVar9 = lVar18;
      if (cVar6 != '\0') break;
      lVar18 = lVar18 + 0x110;
      lVar9 = lVar19;
    } while (lVar18 != lVar19);
    lVar18 = *(long *)(param_2 + 8);
    if ((bStack_9a8 & 1) == 0) goto LAB_0c4ed5de;
    puVar8 = (undefined8 *)CONCAT44(uStack_994,uStack_998);
    uVar13 = CONCAT17(uStack_9a1,CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8))) &
             0xfffffffffffffffe;
    lVar19 = lVar9;
  }
  thunk_FUN_0ee326a0(puVar8,uVar13);
  lVar9 = lVar19;
LAB_0c4ed5de:
  puStack_d60 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_d60 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar11 = _UNK_01422e4b;
  auStack_d70 = (undefined1  [8])0x29;
  uStack_d68 = 0x27;
  puStack_d60[2] = _DAT_01422e43;
  puStack_d60[3] = uVar11;
  uVar11 = _UNK_01422e3b;
  *puStack_d60 = _DAT_01422e33;
  puStack_d60[1] = uVar11;
  *(undefined8 *)((long)puStack_d60 + 0x1f) = 0x6e6f736a2e676f6c;
  *(undefined1 *)((long)puStack_d60 + 0x27) = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  auStack_d08._0_8_ = *(undefined8 *)*param_4;
  auStack_d08._8_8_ = *(undefined8 *)(*param_4 + 8);
  auStack_d50 = *param_4;
  if ((long *)auStack_d08._8_8_ == (long *)0x0) {
    uStack_d40 = *(undefined8 *)param_4[1];
  }
  else {
    LOCK();
    *(long *)(auStack_d08._8_8_ + 8) = *(long *)(auStack_d08._8_8_ + 8) + 1;
    UNLOCK();
    uStack_d40 = *(undefined8 *)param_4[1];
    LOCK();
    *(long *)(auStack_d08._8_8_ + 8) = *(long *)(auStack_d08._8_8_ + 8) + 1;
    UNLOCK();
  }
  auStack_d10[0] = 0xd;
  uStack_cf0 = 0;
  uStack_ce8 = 0x100;
  uStack_cf8 = uStack_d40;
  func_0x0c4eea60(auStack_538,param_3,auStack_d10,0);
  uVar11 = auStack_d08._8_8_;
  auStack_d08 = (undefined1  [16])0x0;
  if ((long *)uVar11 == (long *)0x0) {
    uStack_cf8 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(uVar11 + 8);
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)uVar11 + 0x10))(uVar11);
      func_0x0412c2d0(uVar11);
    }
    uVar11 = auStack_d08._8_8_;
    uStack_cf8 = 0;
    if ((long *)auStack_d08._8_8_ != (long *)0x0) {
      LOCK();
      plVar1 = (long *)(auStack_d08._8_8_ + 8);
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_d08._8_8_ + 0x10))(auStack_d08._8_8_);
        func_0x0412c2d0(uVar11);
      }
    }
  }
  uVar11 = auStack_d50._8_8_;
  auStack_d50 = (undefined1  [16])0x0;
  if ((long *)uVar11 == (long *)0x0) {
    uStack_d40 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(uVar11 + 8);
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*(long *)uVar11 + 0x10))(uVar11);
      func_0x0412c2d0(uVar11);
    }
    uVar11 = auStack_d50._8_8_;
    uStack_d40 = 0;
    if ((long *)auStack_d50._8_8_ != (long *)0x0) {
      LOCK();
      plVar1 = (long *)(auStack_d50._8_8_ + 8);
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)auStack_d50._8_8_ + 0x10))(auStack_d50._8_8_);
        func_0x0412c2d0(uVar11);
      }
    }
  }
  if ((ulong)(lVar9 - lVar18) < (ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8))) {
    uVar17 = (int)(lVar9 - lVar18 >> 4) * -0xf0f0f0f;
    _auStack_d98 = (undefined1  [16])0x0;
    puStack_d88 = (undefined1 *)0x0;
    auStack_a10 = (undefined1  [16])0x0;
    auStack_a20 = (undefined1  [16])0x0;
    auStack_ab8 = (undefined1  [16])0x0;
    auStack_aa8 = (undefined1  [16])0x0;
    auStack_a98 = (undefined1  [16])0x0;
    auStack_a88 = (undefined1  [16])0x0;
    auStack_a78 = (undefined1  [16])0x0;
    auStack_a68 = (undefined1  [16])0x0;
    auStack_a58 = (undefined1  [16])0x0;
    auStack_a48 = (undefined1  [16])0x0;
    auStack_a38 = (undefined1  [16])0x0;
    iStack_a28 = 0;
    uStack_a00 = 0x3f800000;
    auStack_9f8 = (undefined1  [16])0x0;
    auStack_9e8 = (undefined1  [16])0x0;
    auStack_9d8 = (undefined1  [16])0x0;
    auStack_9c8 = (undefined1  [16])0x0;
    uStack_9b8 = 0;
    if (-1 < (int)uVar17) {
      uVar13 = (ulong)(uVar17 & 0x7fffffff);
      do {
        if ((auStack_d98[0] & 1) == 0) {
          auVar4._14_2_ = 0;
          auVar4._0_14_ = stack0xfffffffffffff26a;
          _auStack_d98 = auVar4 << 0x10;
        }
        else {
          *puStack_d88 = 0;
          uStack_d90 = 0;
        }
        lVar18 = *(long *)(param_2 + 8);
        lVar19 = uVar13 * 0x110;
        bStack_9a8 = 0x18;
        uStack_9a7 = 0x5f6d657469;
        cStack_9a2 = 'c';
        uStack_9a1 = 0x61;
        uStack_9a0 = 0x74;
        uStack_99f = 0x676f6c61;
        uStack_99b = 0;
        func_0x0d62b830(&bStack_cc8,*(undefined8 *)(lVar18 + 0xe8 + lVar19),&bStack_9a8,
                        *(undefined4 *)(lVar18 + 0x108 + lVar19));
        if ((bStack_9a8 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT44(uStack_994,uStack_998),
                             CONCAT17(uStack_9a1,
                                      CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8))) &
                             0xfffffffffffffffe);
        }
        lVar18 = lVar18 + lVar19;
        cVar6 = func_0x0d62a0d0(*(undefined8 *)(lVar18 + 0xe8),auStack_d70,auStack_d98,
                                *(undefined4 *)(lVar18 + 0x108));
        if (cVar6 != '\0') {
          lVar9 = (**(code **)(**(long **)(*(long *)(**(long **)(lVar18 + 0xe8) + 8) + 8) + 0x18))()
          ;
          puVar24 = auStack_438;
          bVar21 = (*(byte *)(lVar9 + 8) & 1) != 0;
          lVar19 = lVar9 + 9;
          if (bVar21) {
            lVar19 = *(long *)(lVar9 + 0x18);
          }
          uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
          if (bVar21) {
            uVar16 = *(ulong *)(lVar9 + 0x10);
          }
          bStack_9a8 = (byte)lVar19;
          uStack_9a7 = (undefined5)((ulong)lVar19 >> 8);
          cStack_9a2 = (char)((ulong)lVar19 >> 0x30);
          uStack_9a1 = (undefined1)((ulong)lVar19 >> 0x38);
          uStack_9a0 = (undefined1)uVar16;
          uStack_99f = (undefined4)(uVar16 >> 8);
          uStack_99b = (undefined1)(uVar16 >> 0x28);
          uStack_99a = (ushort)(uVar16 >> 0x30);
          puVar8 = puStack_d60;
          auStack_990[0] = uStack_d68;
          if (((ulong)auStack_d70 & 1) == 0) {
            puVar8 = (undefined8 *)(auStack_d70 + 1);
            auStack_990[0] = (ulong)auStack_d70 >> 1 & 0x7f;
          }
          uStack_998 = SUB84(puVar8,0);
          uStack_994 = (uint)((ulong)puVar8 >> 0x20);
          func_0x049151c0(puVar24,&bStack_9a8,2,0x2f);
          bStack_9a8 = (byte)puVar24;
          uStack_9a7 = (undefined5)((ulong)puVar24 >> 8);
          cStack_9a2 = (char)((ulong)puVar24 >> 0x30);
          uStack_9a1 = (undefined1)((ulong)puVar24 >> 0x38);
          uStack_9a0 = (undefined1)lStack_38;
          uStack_99f = (undefined4)((ulong)lStack_38 >> 8);
          uStack_99b = (undefined1)((ulong)lStack_38 >> 0x28);
          uStack_99a = (ushort)((ulong)lStack_38 >> 0x30);
          uStack_998 = CONCAT31(uStack_998._1_3_,1);
          auStack_bc0[0] = 0;
          uVar11 = CONCAT44(uStack_994,uStack_998);
          lVar19 = lStack_38;
          func_0x0eeb79f0(auStack_bd8,auStack_bc0);
          if ((auStack_bc0[0] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(auStack_bc0[0] & 0xff00ffffffffffff) - 8);
          }
          uStack_d38 = (ulong)auStack_d98;
          uStack_d30 = uStack_d90;
          puStack_d28 = puStack_d88;
          _auStack_d98 = (undefined1  [16])0x0;
          puStack_d88 = (undefined1 *)0x0;
          func_0x0d686f30(auStack_bc0,&UNK_0143e950,0x20,auStack_460,&uStack_d38,param_6,puVar24,
                          lVar19,uVar11);
          if ((uStack_d38 & 1) != 0) {
            thunk_FUN_0ee326a0(puStack_d28,uStack_d38 & 0xfffffffffffffffe);
          }
          func_0x0d6892a0(&bStack_9a8,auStack_bc0);
          if (cStack_9a2 == '\x01') {
            func_0x0d6892a0(auStack_c88,auStack_bc0);
            cVar6 = func_0x04fa7a10(auStack_c88,auStack_460);
            if ((uStack_c78 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_c78 & 0xff00ffffffffffff) - 8);
            }
            uStack_c78 = 0;
            if ((uStack_c80 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_c80 & 0xff00ffffffffffff) - 8);
            }
            if ((uStack_994 & 0x800000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(CONCAT44(uStack_994,uStack_998) & 0xff00ffffffffffff) - 8);
            }
            uStack_998 = 0;
            uStack_994 = 0;
            if ((uStack_99a & 0x80) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,
                         (CONCAT26(uStack_99a,CONCAT15(uStack_99b,CONCAT41(uStack_99f,uStack_9a0)))
                         & 0xff00ffffffffffff) - 8);
            }
            if (cVar6 != '\0') goto LAB_0c4edd7a;
            if ((((bStack_b88 & 1) == 0) || (lStack_b80 != 0x20)) ||
               (auVar22[0] = -(*pcStack_b78 == DAT_014e5f90),
               auVar22[1] = -(pcStack_b78[1] == UNK_014e5f91),
               auVar22[2] = -(pcStack_b78[2] == UNK_014e5f92),
               auVar22[3] = -(pcStack_b78[3] == UNK_014e5f93),
               auVar22[4] = -(pcStack_b78[4] == UNK_014e5f94),
               auVar22[5] = -(pcStack_b78[5] == UNK_014e5f95),
               auVar22[6] = -(pcStack_b78[6] == UNK_014e5f96),
               auVar22[7] = -(pcStack_b78[7] == UNK_014e5f97),
               auVar22[8] = -(pcStack_b78[8] == UNK_014e5f98),
               auVar22[9] = -(pcStack_b78[9] == UNK_014e5f99),
               auVar22[10] = -(pcStack_b78[10] == UNK_014e5f9a),
               auVar22[0xb] = -(pcStack_b78[0xb] == UNK_014e5f9b),
               auVar22[0xc] = -(pcStack_b78[0xc] == UNK_014e5f9c),
               auVar22[0xd] = -(pcStack_b78[0xd] == UNK_014e5f9d),
               auVar22[0xe] = -(pcStack_b78[0xe] == UNK_014e5f9e),
               auVar22[0xf] = -(pcStack_b78[0xf] == UNK_014e5f9f),
               auVar23[0] = -(pcStack_b78[0x10] == DAT_014e5f80),
               auVar23[1] = -(pcStack_b78[0x11] == UNK_014e5f81),
               auVar23[2] = -(pcStack_b78[0x12] == UNK_014e5f82),
               auVar23[3] = -(pcStack_b78[0x13] == UNK_014e5f83),
               auVar23[4] = -(pcStack_b78[0x14] == UNK_014e5f84),
               auVar23[5] = -(pcStack_b78[0x15] == UNK_014e5f85),
               auVar23[6] = -(pcStack_b78[0x16] == UNK_014e5f86),
               auVar23[7] = -(pcStack_b78[0x17] == UNK_014e5f87),
               auVar23[8] = -(pcStack_b78[0x18] == UNK_014e5f88),
               auVar23[9] = -(pcStack_b78[0x19] == UNK_014e5f89),
               auVar23[10] = -(pcStack_b78[0x1a] == UNK_014e5f8a),
               auVar23[0xb] = -(pcStack_b78[0x1b] == UNK_014e5f8b),
               auVar23[0xc] = -(pcStack_b78[0x1c] == UNK_014e5f8c),
               auVar23[0xd] = -(pcStack_b78[0x1d] == UNK_014e5f8d),
               auVar23[0xe] = -(pcStack_b78[0x1e] == UNK_014e5f8e),
               auVar23[0xf] = -(pcStack_b78[0x1f] == UNK_014e5f8f), auVar23 = auVar23 & auVar22,
               (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) != 0xffff)) {
              func_0x0b62cfa0(1,3,0x10,&UNK_0124ecfc);
            }
            else {
              bStack_9a8 = 0;
              uStack_9a7 = 0;
              cStack_9a2 = '\0';
              uStack_9a1 = 0;
              uStack_9a0 = 0;
              uStack_99f = 0;
              uStack_99b = 0;
              uStack_99a = 0;
              uStack_998 = 0;
              uStack_994 = 0;
              func_0x0c508eb0(auStack_c88,auStack_538,auStack_bc0,&bStack_9a8,1);
              if ((uStack_994 & 0x800000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(CONCAT44(uStack_994,uStack_998) & 0xff00ffffffffffff) - 8)
                ;
              }
              uStack_998 = 0;
              uStack_994 = 0;
              if ((uStack_99a & 0x80) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,
                           (CONCAT26(uStack_99a,CONCAT15(uStack_99b,CONCAT41(uStack_99f,uStack_9a0))
                                    ) & 0xff00ffffffffffff) - 8);
              }
              func_0x0d6b1c60(auStack_ab8,auStack_c88);
              if ((cStack_c62 == '\x01') && ((bStack_bdc & 1) == 0)) {
                uVar11 = **(undefined8 **)(**(long **)(lVar18 + 0xe8) + 8);
                if ((DAT_0f5ea4a0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5ea4a0), iVar7 != 0))
                {
                  func_0x08b670e0(&DAT_0f5ea138);
                  func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
                  func_0x0410844d(&DAT_0f5ea4a0);
                }
                func_0x0d5f7010(&bStack_9a8,uVar11,&DAT_0f5ea138);
                func_0x0646d5a0(auStack_a20,&bStack_9a8,&bStack_9a8);
                if ((bStack_9a8 & 1) != 0) {
                  thunk_FUN_0ee326a0(CONCAT44(uStack_994,uStack_998),
                                     CONCAT17(uStack_9a1,
                                              CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8)))
                                     & 0xfffffffffffffffe);
                }
              }
              uStack_588 = 0xffffffff;
              auStack_550 = (undefined1  [16])0x0;
              auStack_560 = (undefined1  [16])0x0;
              auStack_570 = (undefined1  [16])0x0;
              auStack_580 = (undefined1  [16])0x0;
              uStack_540 = 0;
              cVar6 = func_0x0d5cf650(auStack_c88,0x10,&uStack_588);
              func_0x05f43a40(&uStack_588);
              if (cVar6 != '\0') {
                pauVar12 = pauStack_c50 + 1;
                puVar8 = (undefined8 *)(*pauStack_c50 + 8);
                pauVar10 = pauStack_c50;
                if (cStack_c2c == '\x02') {
                  pauVar12 = (undefined1 (*) [16])auStack_c40;
                  puVar8 = &uStack_c48;
                  pauVar10 = (undefined1 (*) [16])&pauStack_c50;
                }
                bVar21 = iStack_c30 != -0x25200a5f;
                if (bVar21) {
                  pauVar10 = (undefined1 (*) [16])0x0;
                }
                uVar11 = *(undefined8 *)*pauVar10;
                bStack_9a8 = (byte)uVar11;
                uStack_9a7 = (undefined5)((ulong)uVar11 >> 8);
                cStack_9a2 = (char)((ulong)uVar11 >> 0x30);
                uStack_9a1 = (undefined1)((ulong)uVar11 >> 0x38);
                if (bVar21) {
                  puVar8 = (undefined8 *)0x8;
                }
                uVar11 = *puVar8;
                uStack_9a0 = (undefined1)uVar11;
                uStack_99f = (undefined4)((ulong)uVar11 >> 8);
                uStack_99b = (undefined1)((ulong)uVar11 >> 0x28);
                uStack_99a = (ushort)((ulong)uVar11 >> 0x30);
                if (bVar21) {
                  pauVar12 = (undefined1 (*) [16])0x10;
                }
                uStack_998 = (undefined4)*(undefined8 *)*pauVar12;
                uStack_994 = (uint)((ulong)*(undefined8 *)*pauVar12 >> 0x20);
                *pauVar10 = (undefined1  [16])0x0;
                *(undefined8 *)pauVar10[1] = 0;
                func_0x0eee2dd0(auStack_990,0,0x400);
                lVar18 = lStack_38;
                if (lStack_38 != -1) {
                  func_0x0eee2f00(auStack_990,auStack_438);
                }
                lStack_590 = lVar18;
                pauStack_d78 = *(undefined1 (**) [16])(*param_1 + 8);
                pauVar10 = *(undefined1 (**) [16])param_1[1];
                if (pauStack_d78 < pauVar10) {
                  *pauStack_d78 = (undefined1  [16])0x0;
                  *(undefined8 *)pauStack_d78[1] = 0;
                  *(ulong *)*pauStack_d78 =
                       CONCAT17(uStack_9a1,CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8)));
                  *(ulong *)(*pauStack_d78 + 8) =
                       CONCAT26(uStack_99a,CONCAT15(uStack_99b,CONCAT41(uStack_99f,uStack_9a0)));
                  *(ulong *)pauStack_d78[1] = CONCAT44(uStack_994,uStack_998);
                  pauVar10 = pauStack_d78 + 1;
                  func_0x0eee2dd0(*pauVar10 + 8,0,0x408);
                  lVar18 = lStack_590;
                  if (lStack_590 != -1) {
                    func_0x0eee2ee0(*pauVar10 + 8,auStack_990);
                  }
                  *(long *)(pauStack_d78[0x41] + 8) = lVar18;
                  *(undefined1 (**) [16])(*param_1 + 8) = pauStack_d78 + 0x42;
                }
                else {
                  pauVar12 = *(undefined1 (**) [16])*param_1;
                  lVar18 = (long)pauStack_d78 - (long)pauVar12;
                  uVar16 = (lVar18 >> 5) * 0xf83e0f83e0f83e1 + 1;
                  if (0x3e0f83e0f83e0f < uVar16) {
                    func_0x0c4fddd0();
LAB_0c4ee7d5:
                    uVar11 = func_0x04882eb0();
                    func_0x041084d6(&DAT_0f5ea4a0);
                    func_0x05ebba90(auStack_c88);
                    func_0x05d59d60(auStack_bc0);
                    func_0x0eeb81b0(auStack_bd8);
                    func_0x0d686e00(&bStack_cc8);
                    func_0x05f43b50(auStack_ab8);
                    if ((auStack_d98[0] & 1) != 0) {
                      thunk_FUN_0ee326a0(puStack_d88,(ulong)auStack_d98 & 0xfffffffffffffffe);
                    }
                    func_0x0c4ef040(auStack_538);
                    func_0x0c3eda70(param_1);
                    auVar15 = auStack_d70;
                    puVar8 = puStack_d60;
                    if (((ulong)auStack_d70 & 1) == 0) goto LAB_0c4eea2d;
                    do {
                      thunk_FUN_0ee326a0(puVar8,(ulong)auVar15 & 0xfffffffffffffffe);
LAB_0c4eea2d:
                      do {
                        uVar11 = func_0x0eee2d70(uVar11);
                      } while ((bStack_9a8 & 1) == 0);
                      auVar15 = (undefined1  [8])
                                CONCAT17(uStack_9a1,
                                         CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8)));
                      puVar8 = (undefined8 *)CONCAT44(uStack_994,uStack_998);
                    } while( true );
                  }
                  lVar19 = (long)pauVar10 - (long)pauVar12 >> 5;
                  uVar3 = lVar19 * 0x1f07c1f07c1f07c2;
                  uStack_cd8 = uVar16;
                  if (uVar16 < uVar3) {
                    uStack_cd8 = uVar3;
                  }
                  if (0x1f07c1f07c1f06 < (ulong)(lVar19 * 0xf83e0f83e0f83e1)) {
                    uStack_cd8 = 0x3e0f83e0f83e0f;
                  }
                  pauStack_d58 = pauVar10;
                  if (uStack_cd8 == 0) {
                    lVar19 = 0;
                  }
                  else {
                    if (0x3e0f83e0f83e0f < uStack_cd8) goto LAB_0c4ee7d5;
                    lVar9 = uStack_cd8 * 0x420;
                    lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
                    if (lVar19 == 0) {
                      func_0x0eec74c0(lVar9,0);
                      lVar19 = 0;
                    }
                  }
                  *(undefined8 *)(lVar19 + lVar18) =
                       CONCAT17(uStack_9a1,CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8)));
                  ((undefined8 *)(lVar19 + lVar18))[1] =
                       CONCAT26(uStack_99a,CONCAT15(uStack_99b,CONCAT41(uStack_99f,uStack_9a0)));
                  *(ulong *)(lVar19 + 0x10 + lVar18) = CONCAT44(uStack_994,uStack_998);
                  bStack_9a8 = 0;
                  uStack_9a7 = 0;
                  cStack_9a2 = '\0';
                  uStack_9a1 = 0;
                  uStack_9a0 = 0;
                  uStack_99f = 0;
                  uStack_99b = 0;
                  uStack_99a = 0;
                  uStack_998 = 0;
                  uStack_994 = 0;
                  lVar9 = lVar19 + lVar18 + 0x18;
                  pauStack_d20 = param_1;
                  lStack_d18 = lVar19;
                  func_0x0eee2dd0(lVar9,0,0x400);
                  lVar19 = lStack_590;
                  if (lStack_590 != -1) {
                    func_0x0eee2f00(lVar9,auStack_990);
                  }
                  lStack_ce0 = lStack_d18 + lVar18;
                  *(long *)(lStack_ce0 + 0x418) = lVar19;
                  auStack_990[0] = auStack_990[0] & 0xffffffffffffff00;
                  lStack_590 = 0;
                  pauVar10 = (undefined1 (*) [16])(lStack_ce0 - lVar18);
                  pauVar14 = pauStack_d58;
                  param_1 = pauStack_d20;
                  pauVar20 = pauVar12;
                  pauVar5 = pauVar10;
                  if (pauVar12 != pauStack_d78) {
                    do {
                      pauStack_d58 = pauVar5;
                      uVar11 = *(undefined8 *)(*pauVar20 + 8);
                      *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar20;
                      *(undefined8 *)(*pauVar10 + 8) = uVar11;
                      *(undefined8 *)pauVar10[1] = *(undefined8 *)pauVar20[1];
                      *pauVar20 = (undefined1  [16])0x0;
                      *(undefined8 *)pauVar20[1] = 0;
                      func_0x0eee2dd0(pauVar10[1] + 8,0,0x408);
                      lVar18 = *(long *)(pauVar20[0x41] + 8);
                      if (lVar18 != -1) {
                        func_0x0eee2ee0(pauVar10[1] + 8);
                      }
                      param_1 = pauStack_d20;
                      pauVar14 = pauStack_d78;
                      *(long *)(pauVar10[0x41] + 8) = lVar18;
                      pauVar20[1][8] = 0;
                      *(undefined8 *)(pauVar20[0x41] + 8) = 0;
                      pauVar20 = pauVar20 + 0x42;
                      pauVar10 = pauVar10 + 0x42;
                      pauVar5 = pauStack_d58;
                    } while (pauVar20 != pauStack_d78);
                    do {
                      if (*(long *)*pauVar12 != 0) {
                        func_0x0c408580(pauVar12);
                        thunk_FUN_0ee326a0(*(long *)*pauVar12,
                                           *(long *)pauVar12[1] - *(long *)*pauVar12);
                      }
                      pauVar12 = pauVar12 + 0x42;
                    } while (pauVar12 != pauVar14);
                    pauVar12 = *(undefined1 (**) [16])*param_1;
                    pauVar10 = pauStack_d58;
                    pauVar14 = *(undefined1 (**) [16])param_1[1];
                  }
                  *(undefined1 (**) [16])*param_1 = pauVar10;
                  *(ulong *)param_1[1] = lStack_d18 + uStack_cd8 * 0x420;
                  if (pauVar12 != (undefined1 (*) [16])0x0) {
                    thunk_FUN_0ee326a0(pauVar12,(long)pauVar14 - (long)pauVar12);
                  }
                  *(long *)(*param_1 + 8) = lStack_ce0 + 0x420;
                  if (CONCAT17(uStack_9a1,CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8))) != 0
                     ) {
                    func_0x0c408580(&bStack_9a8);
                    lVar18 = CONCAT17(uStack_9a1,
                                      CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8)));
                    thunk_FUN_0ee326a0(lVar18,CONCAT44(uStack_994,uStack_998) - lVar18);
                  }
                }
              }
              func_0x05d85c50(auStack_c28);
              if (pcStack_c38 != (code *)0x0) {
                (*pcStack_c38)(&pauStack_c50);
              }
              if ((uStack_c58 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_c58 & 0xff00ffffffffffff) - 8);
              }
              uStack_c58 = 0;
              if ((uStack_c60 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,(uStack_c60 & 0xff00ffffffffffff) - 8);
              }
            }
          }
          else {
            if ((uStack_994 & 0x800000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(CONCAT44(uStack_994,uStack_998) & 0xff00ffffffffffff) - 8);
            }
            uStack_998 = 0;
            uStack_994 = 0;
            if ((uStack_99a & 0x80) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,
                         (CONCAT26(uStack_99a,CONCAT15(uStack_99b,CONCAT41(uStack_99f,uStack_9a0)))
                         & 0xff00ffffffffffff) - 8);
            }
LAB_0c4edd7a:
            func_0x05890e00(1,3,0x10,&UNK_012b4539);
          }
          func_0x05d85c50(auStack_b08);
          if ((ulong)uStack_b10 != 0xffffffff) {
            (**(code **)(&UNK_0f37b980 + (ulong)uStack_b10 * 8))(&bStack_9a8,auStack_b70);
          }
          uStack_b10 = 0xffffffff;
          if ((bStack_b88 & 1) != 0) {
            thunk_FUN_0ee326a0(pcStack_b78,CONCAT71(uStack_b87,bStack_b88) & 0xfffffffffffffffe);
          }
          if ((uStack_b90 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b90 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_b90 = 0;
          if ((uStack_b98 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_b98 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_b98 = 0;
          if ((uStack_ba8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_ba8 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_ba8 = 0;
          if ((uStack_bb0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_bb0 & 0xff00ffffffffffff) - 8)
            ;
          }
          func_0x0eeb81b0(auStack_bd8);
        }
        lVar19 = lStack_ca0;
        lVar18 = lStack_c98;
        if (lStack_ca0 != 0) {
          while (lVar19 != lVar18) {
            func_0x0d697f30(lVar18 + -0x40);
            lVar18 = lVar18 + -0x40;
          }
          lStack_c98 = lVar19;
          thunk_FUN_0ee326a0(lStack_ca0,lStack_c90 - lStack_ca0);
        }
        plVar1 = plStack_ca8;
        if (plStack_ca8 != (long *)0x0) {
          LOCK();
          plVar2 = plStack_ca8 + 1;
          lVar18 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plStack_ca8 + 0x10))(plStack_ca8);
            func_0x0412c2d0(plVar1);
          }
        }
        if ((bStack_cc8 & 1) != 0) {
          thunk_FUN_0ee326a0(uStack_cb8,CONCAT71(uStack_cc7,bStack_cc8) & 0xfffffffffffffffe);
        }
        bVar21 = 0 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar21);
      if (0 < iStack_a28) {
        bStack_9a8 = 0x26;
        uStack_9a7 = (undefined5)_DAT_012cd7ff;
        cStack_9a2 = (char)((ulong)_DAT_012cd7ff >> 0x28);
        uStack_9a1 = (undefined1)((ulong)_DAT_012cd7ff >> 0x30);
        uStack_9a0 = (undefined1)((ulong)_DAT_012cd7ff >> 0x38);
        uStack_99f = (undefined4)_UNK_012cd807;
        uStack_99b = (undefined1)((ulong)_UNK_012cd807 >> 0x20);
        uStack_99a = (ushort)((ulong)_UNK_012cd807 >> 0x28);
        uStack_998 = 0x676f6c61;
        uStack_994 = uStack_994 & 0xffffff00;
        (**(code **)(*(long *)(lStack_cd0 + 0x40) + 0x10))
                  (lStack_cd0 + 0x40,&bStack_9a8,auStack_ab8);
        if ((bStack_9a8 & 1) != 0) {
          thunk_FUN_0ee326a0(CONCAT44(uStack_994,uStack_998),
                             CONCAT17(uStack_9a1,
                                      CONCAT16(cStack_9a2,CONCAT51(uStack_9a7,bStack_9a8))) &
                             0xfffffffffffffffe);
        }
      }
    }
    func_0x05f43b50(auStack_ab8);
    if ((auStack_d98[0] & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_d88,(ulong)auStack_d98 & 0xfffffffffffffffe);
    }
  }
  lVar18 = lStack_448;
  lStack_448 = 0;
  if (lVar18 != 0) {
    thunk_FUN_0ee326a0(lVar18,1);
  }
  func_0x04908bd0(auStack_538);
  if (((ulong)auStack_d70 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_d60,(ulong)auStack_d70 & 0xfffffffffffffffe);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x12cd7ff  CraftingItemCatalog
 * 0x1422e33  item_catalog/crafting_item_catalog.json
 * 0x1422e43  fting_item_catalog.json
 * 0x14e5f80  ng_items_catalogminecraft:crafti
 * 0x14e5f90  minecraft:crafti
 */
