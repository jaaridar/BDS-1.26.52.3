/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f4d020 (ELF vaddr 0x5e4d020)
 * Label: caller-of-callee
 * Body:  [[05f4d020, 05f4d497] [05f4d4a0, 05f4d507] [05f4d510, 05f4dbed] [05f4dbf0, 05f4dc2c] [05f4dc30, 05f4deec] [05f4dfce, 05f4e008] [05f4e02e, 05f4e09c]]
 * Ghidra: FUN_05f4d020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_05f4d020(undefined4 param_1,long param_2,long *param_3,ulong *param_4,byte *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  byte *pbVar24;
  uint *puVar25;
  long lVar26;
  undefined8 **ppuVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong *puVar31;
  long lVar32;
  long *plVar33;
  bool bVar34;
  undefined1 uStack_1d9;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  byte *pbStack_1b8;
  ulong *puStack_1a8;
  long *plStack_1a0;
  undefined8 *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  undefined8 *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  byte *pbStack_148;
  undefined4 uStack_13c;
  ulong *puStack_138;
  byte *pbStack_130;
  ulong *puStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  undefined8 *puStack_f8;
  ulong *puStack_f0;
  undefined8 *puStack_b8;
  ulong *puStack_b0;
  undefined4 uStack_a8;
  long lStack_78;
  ulong *puStack_70;
  
  if (param_3 != (long *)0x0) {
    LOCK();
    param_3[1] = param_3[1] + 1;
    UNLOCK();
  }
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  pbStack_1b8 = (byte *)0x0;
  plStack_150 = param_3;
  uStack_13c = param_1;
  func_0x04130630(&uStack_1d0,param_5);
  if (*param_5 == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = 0xcbf29ce484222325;
    uVar15 = strlen(param_5);
    if (uVar15 != 0) {
      uVar20 = (ulong)((uint)uVar15 & 7);
      if (7 < uVar15) {
        uVar15 = uVar15 & 0xfffffffffffffff8;
        do {
          uVar30 = (((((((uVar30 * 0x100000001b3 ^ (ulong)*param_5) * 0x100000001b3 ^
                        (ulong)param_5[1]) * 0x100000001b3 ^ (ulong)param_5[2]) * 0x100000001b3 ^
                      (ulong)param_5[3]) * 0x100000001b3 ^ (ulong)param_5[4]) * 0x100000001b3 ^
                    (ulong)param_5[5]) * 0x100000001b3 ^ (ulong)param_5[6]) * 0x100000001b3 ^
                   (ulong)param_5[7];
          param_5 = param_5 + 8;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar20 != 0) {
        uVar15 = 0;
        do {
          uVar30 = uVar30 * 0x100000001b3 ^ (ulong)param_5[uVar15];
          uVar15 = uVar15 + 1;
        } while (uVar20 != uVar15);
      }
    }
  }
  lStack_78 = 0;
  puStack_f8 = (undefined8 *)&UNK_0f015ba0;
  uStack_1d8 = uVar30;
  puStack_f0 = param_4;
  puStack_70 = param_4;
  puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (puVar16 == (ulong *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  puStack_198 = puStack_f8;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = (ulong)&UNK_0f015978;
  puStack_f8 = (undefined8 *)0x0;
  puStack_190 = puStack_f0;
  puVar16[4] = (ulong)&UNK_0f2ccd78;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  *(undefined1 *)(puVar16 + 0xd) = 0;
  func_0x04aa75f0(puVar16 + 0xe,&uStack_1d9,&UNK_01254d89);
  *(undefined1 *)(puVar16 + 0x10) = 0;
  puStack_1a8 = puVar16 + 0x11;
  puVar16[0x11] = 0;
  puVar16[0x12] = 0;
  puVar16[0x13] = 0;
  puVar16[0x14] = 0;
  puVar16[0x15] = 0;
  puVar16[0x16] = 0;
  puVar16[0x17] = 0xffffffff;
  puVar16[0x26] = 0;
  puVar16[0x27] = 0;
  puVar16[0x18] = 0;
  puVar16[0x19] = 0;
  puVar16[0x1a] = 0;
  puVar16[0x1b] = 0;
  puVar16[0x1c] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x1f] = 0;
  puVar16[4] = (ulong)&UNK_0f0159c8;
  puVar16[0x2e] = _DAT_014eae60;
  *(undefined1 *)(puVar16 + 0x2f) = 1;
  puVar16[0x30] = 0;
  puVar16[0x31] = 0;
  if (puStack_198 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_198)(&puStack_198,puVar16 + 0x30);
    puVar17 = puStack_198;
  }
  puVar23 = puVar16 + 4;
  puStack_198 = (undefined8 *)0x0;
  puVar16[0x30] = (ulong)puVar17;
  puStack_138 = puVar16 + 0x12;
  if (puStack_1a8 == (ulong *)&DAT_0f552018) {
    puVar16[0x15] = 0;
  }
  else {
    if ((*puStack_138 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        puVar16[0x14] = _DAT_0f552030;
        uVar9 = uRam000000000f55202c;
        uVar8 = _DAT_0f552028;
        uVar7 = uRam000000000f552024;
        *(uint *)puStack_138 = _DAT_0f552020;
        *(undefined4 *)((long)puVar16 + 0x94) = uVar7;
        *(undefined4 *)(puVar16 + 0x13) = uVar8;
        *(undefined4 *)((long)puVar16 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puStack_138,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar34 = (_DAT_0f552020 & 1) != 0;
      uVar30 = 0xf552021;
      if (bVar34) {
        uVar30 = _DAT_0f552030;
      }
      uVar15 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar34) {
        uVar15 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puStack_138,uVar30,uVar15);
    }
    puVar16[0x11] = _DAT_0f552018;
    puVar16[0x15] = 0;
    if (puStack_198 != (undefined8 *)0x0) {
      (*(code *)puStack_198[1])(&puStack_198);
    }
  }
  puVar31 = puVar16 + 1;
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  LOCK();
  *puVar31 = *puVar31 + 1;
  UNLOCK();
  puStack_128 = param_4;
  puStack_100 = puVar31;
  plStack_1a0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_1a0 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  uVar30 = uStack_1d8;
  plStack_1a0[1] = 0;
  plStack_1a0[2] = 0;
  *plStack_1a0 = (long)&UNK_0f015aa8;
  plStack_1a0[6] = 0;
  plStack_1a0[7] = 0;
  plStack_1a0[4] = (long)&UNK_0f015af8;
  plStack_1a0[0xe] = (long)puVar23;
  plStack_1a0[0xf] = (long)puVar16;
  LOCK();
  puVar16[1] = puVar16[1] + 1;
  UNLOCK();
  plStack_120 = plStack_1a0 + 1;
  pbStack_130 = *(byte **)(param_2 + 0xb8);
  pbVar24 = *(byte **)(param_2 + 0xc0);
  puVar31 = puVar16;
  plStack_158 = plStack_1a0;
  lStack_118 = param_2;
  puStack_108 = puVar23;
  if (pbStack_130 != pbVar24) {
    if ((uStack_1d0 & 1) == 0) {
      lStack_110 = (long)&uStack_1d0 + 1;
      uVar15 = uStack_1d0 >> 1 & 0x7f;
    }
    else {
      lStack_110 = lStack_1c0;
      uVar15 = uStack_1c8;
    }
    pbStack_148 = pbStack_1b8;
    puVar31 = &uStack_1d8;
    pbVar29 = pbStack_130 + 0x19;
    do {
      if (*(ulong *)(pbVar29 + -9) == uVar30) {
        if ((*(ulong **)(pbVar29 + 0x17) == puVar31) && (pbVar29 + -9 == pbStack_148)) {
LAB_05f4d958:
          pbVar29 = pbVar29 + -0x19;
          plVar33 = plStack_158;
          goto LAB_05f4d964;
        }
        bVar6 = pbVar29[-1];
        if ((bVar6 & 1) == 0) {
          uVar20 = (ulong)(bVar6 >> 1);
        }
        else {
          uVar20 = *(ulong *)(pbVar29 + 7);
        }
        if (uVar20 == uVar15) {
          pbVar28 = pbVar29;
          if ((bVar6 & 1) != 0) {
            pbVar28 = *(byte **)(pbVar29 + 0xf);
          }
          iVar14 = func_0x0eee3000(pbVar28,lStack_110,uVar15);
          if (iVar14 == 0) {
            *(ulong **)(pbVar29 + 0x17) = puVar31;
            pbStack_1b8 = pbVar29 + -9;
            goto LAB_05f4d958;
          }
        }
      }
      pbVar29[0x17] = 0;
      pbVar29[0x18] = 0;
      pbVar29[0x19] = 0;
      pbVar29[0x1a] = 0;
      pbVar29[0x1b] = 0;
      pbVar29[0x1c] = 0;
      pbVar29[0x1d] = 0;
      pbVar29[0x1e] = 0;
      pbVar28 = pbVar29 + 0x8f;
      pbVar29 = pbVar29 + 0xa8;
    } while (pbVar28 != pbVar24);
  }
  lVar26 = lStack_118;
  if (pbVar24 < *(byte **)(lStack_118 + 200)) {
    func_0x05f6f740(pbVar24);
    puVar23 = (ulong *)(pbVar24 + 0xa8);
    *(ulong **)(lVar26 + 0xc0) = puVar23;
LAB_05f4d7d1:
    *(ulong **)(lVar26 + 0xc0) = puVar23;
    func_0x0b63b6d0(puVar23[-0x15],&uStack_1d8);
    lVar21 = *(long *)(lVar26 + 0xc0);
    *(undefined1 *)(lVar21 + -7) = *(undefined1 *)(lVar26 + 0x60);
    if ((ulong *)(lVar21 + -0x98) != &uStack_1d8) {
      pbVar24 = (byte *)(lVar21 + -0x90);
      if ((*pbVar24 & 1) == 0) {
        if ((uStack_1d0 & 1) == 0) {
          *(long *)(lVar21 + -0x80) = lStack_1c0;
          *(undefined4 *)pbVar24 = (undefined4)uStack_1d0;
          *(undefined4 *)(lVar21 + -0x8c) = uStack_1d0._4_4_;
          *(undefined4 *)(lVar21 + -0x88) = (undefined4)uStack_1c8;
          *(undefined4 *)(lVar21 + -0x84) = uStack_1c8._4_4_;
        }
        else {
          FUN_04885070(pbVar24,lStack_1c0,uStack_1c8);
        }
      }
      else {
        uVar30 = uStack_1d0 >> 1 & 0x7f;
        lVar32 = (long)&uStack_1d0 + 1;
        if ((uStack_1d0 & 1) != 0) {
          uVar30 = uStack_1c8;
          lVar32 = lStack_1c0;
        }
        func_0x04885120(pbVar24,lVar32,uVar30);
      }
    }
    *(ulong *)(lVar21 + -0x98) = uStack_1d8;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&puStack_198,&uStack_1d0,*(undefined1 *)(lVar26 + 0x60));
    lVar21 = *(long *)(lVar26 + 0xc0);
    func_0x04167a70(lVar21 + -0x70,&puStack_198);
    *(ulong **)(lVar21 + -0x68) = puStack_190;
    *(ulong **)(lVar21 + -0x60) = puStack_188;
    *(undefined8 **)(lVar21 + -0x58) = puStack_180;
    *(byte **)(lVar21 + -0x50) = pbStack_178;
    uVar7 = (undefined4)uStack_170;
    uVar8 = uStack_170._4_4_;
    uVar9 = (undefined4)uStack_168;
    uVar12 = uStack_168._4_4_;
    uStack_170 = 0;
    uStack_168 = (byte *)0x0;
    plVar33 = *(long **)(lVar21 + -0x40);
    *(undefined4 *)(lVar21 + -0x48) = uVar7;
    *(undefined4 *)(lVar21 + -0x44) = uVar8;
    *(undefined4 *)(lVar21 + -0x40) = uVar9;
    *(undefined4 *)(lVar21 + -0x3c) = uVar12;
    if (plVar33 != (long *)0x0) {
      LOCK();
      plVar1 = plVar33 + 1;
      lVar32 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar32 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
        func_0x0412c2d0(plVar33);
      }
    }
    plVar33 = plStack_158;
    pbVar24 = uStack_168;
    *(undefined8 *)(lVar21 + -0x38) = uStack_160;
    if (uStack_168 != (byte *)0x0) {
      LOCK();
      pbVar29 = uStack_168 + 8;
      lVar21 = *(long *)pbVar29;
      *(long *)pbVar29 = *(long *)pbVar29 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)uStack_168 + 0x10))(uStack_168);
        func_0x0412c2d0(pbVar24);
      }
    }
    func_0x04167a40(&puStack_198);
    lVar26 = *(long *)(lVar26 + 0xc0);
    *(undefined1 *)(lVar26 + -8) = 0;
    pbVar29 = (byte *)(lVar26 + -0xa8);
LAB_05f4d964:
    puVar31 = (ulong *)(plVar33 + 4);
    puVar23 = *(ulong **)(pbVar29 + 0x90);
    if (puVar23 < *(ulong **)(pbVar29 + 0x98)) {
      puVar23[2] = 0;
      puVar23[3] = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[4] = 0;
      if (puVar23 != puStack_1a8) {
        if ((*puStack_138 & 1) == 0) {
          puVar23[3] = puStack_138[2];
          uVar30 = puStack_138[1];
          puVar23[1] = *puStack_138;
          puVar23[2] = uVar30;
        }
        else {
          FUN_04885070(puVar23 + 1,puVar16[0x14],puVar16[0x13]);
        }
      }
      *puVar23 = *puStack_1a8;
      puVar23[5] = (ulong)puVar31;
      puVar23[6] = (ulong)plStack_1a0;
      LOCK();
      plStack_1a0[1] = plStack_1a0[1] + 1;
      UNLOCK();
      puVar23 = puVar23 + 7;
      *(ulong **)(pbVar29 + 0x90) = puVar23;
      goto LAB_05f4dc82;
    }
    lVar26 = (long)puVar23 - *(long *)(pbVar29 + 0x88);
    uVar30 = (lVar26 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar30 < 0x492492492492493) {
      lVar21 = (long)*(ulong **)(pbVar29 + 0x98) - *(long *)(pbVar29 + 0x88) >> 3;
      uVar15 = lVar21 * -0x2492492492492492;
      if (uVar30 < uVar15) {
        uVar30 = uVar15;
      }
      pbStack_178 = pbVar29 + 0x88;
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar30 = 0x492492492492492;
      }
      pbStack_148 = pbStack_178;
      if (uVar30 == 0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar30) goto LAB_05f4deb6;
        puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          FUN_0eec74c0(uVar30 * 0x38,0);
          puVar17 = (undefined8 *)0x0;
        }
      }
      puVar23 = (ulong *)((long)puVar17 + lVar26);
      puStack_180 = puVar17 + uVar30 * 7;
      puVar5 = (undefined8 *)((long)puVar17 + lVar26 + 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar26) = 0;
      ((undefined8 *)((long)puVar17 + lVar26))[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar26 + 0x20) = 0;
      puStack_188 = puVar23;
      puStack_198 = puVar17;
      puStack_190 = puVar23;
      if (puVar23 != puStack_1a8) {
        puVar25 = (uint *)((long)puVar17 + lVar26 + 8);
        if ((*puStack_138 & 1) == 0) {
          *(ulong *)((long)puVar17 + lVar26 + 0x18) = puStack_138[2];
          uVar10 = *(uint *)((long)puStack_138 + 4);
          uVar30 = puStack_138[1];
          uVar11 = *(uint *)((long)puStack_138 + 0xc);
          *puVar25 = (uint)*puStack_138;
          *(uint *)((long)puVar17 + lVar26 + 0xc) = uVar10;
          *(uint *)((long)puVar17 + lVar26 + 0x10) = (uint)uVar30;
          *(uint *)((long)puVar17 + lVar26 + 0x14) = uVar11;
        }
        else {
          FUN_04885070(puVar25,puVar16[0x14],puVar16[0x13]);
        }
      }
      pbVar28 = pbStack_148;
      *puVar23 = *puStack_1a8;
      puVar23[5] = (ulong)puVar31;
      puVar23[6] = (ulong)plStack_1a0;
      LOCK();
      plStack_1a0[1] = plStack_1a0[1] + 1;
      UNLOCK();
      puStack_188 = puStack_188 + 7;
      puVar17 = *(undefined8 **)(pbVar29 + 0x88);
      puVar5 = *(undefined8 **)(pbVar29 + 0x90);
      pbVar24 = (byte *)((long)puStack_190 + ((long)puVar17 - (long)puVar5));
      pbVar18 = pbVar24;
      puVar22 = puVar17;
      if ((long)puVar17 - (long)puVar5 != 0) {
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
        } while (puVar22 != puVar5);
        do {
          plVar33 = (long *)puVar17[6];
          if (plVar33 == (long *)0x0) {
LAB_05f4dc14:
            bVar6 = *(byte *)(puVar17 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar33 + 1;
            lVar26 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar26 != 0) goto LAB_05f4dc14;
            (**(code **)(*plVar33 + 0x10))(plVar33);
            func_0x0412c2d0(plVar33);
            bVar6 = *(byte *)(puVar17 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
          }
          puVar17 = puVar17 + 7;
        } while (puVar17 != puVar5);
        puVar17 = *(undefined8 **)pbVar28;
      }
      puVar23 = puStack_188;
      *(byte **)(pbVar29 + 0x88) = pbVar24;
      *(ulong **)(pbVar29 + 0x90) = puStack_188;
      lVar26 = *(long *)(pbVar29 + 0x98);
      *(undefined8 **)(pbVar29 + 0x98) = puStack_180;
      if (puVar17 != (undefined8 *)0x0) {
        func_0x0412a280(puVar17,lVar26 - (long)puVar17);
      }
LAB_05f4dc82:
      puVar31 = puStack_128;
      plVar33 = plStack_150;
      *(ulong **)(pbVar29 + 0x90) = puVar23;
      uVar7 = *(undefined4 *)pbVar29;
      uVar8 = *(undefined4 *)(pbVar29 + 4);
      uVar9 = *(undefined4 *)(pbVar29 + 8);
      uVar12 = *(undefined4 *)(pbVar29 + 0xc);
      if (*(long *)(pbVar29 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(pbVar29 + 8) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = (long *)puVar16[0xf];
      *(undefined4 *)(puVar16 + 0xe) = uVar7;
      *(undefined4 *)((long)puVar16 + 0x74) = uVar8;
      *(undefined4 *)(puVar16 + 0xf) = uVar9;
      *(undefined4 *)((long)puVar16 + 0x7c) = uVar12;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar26 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
        }
      }
      plVar1 = plStack_1a0;
      *(byte *)(puVar16 + 0x10) = pbVar29[0xa1];
      LOCK();
      lVar26 = *plStack_120;
      *plStack_120 = *plStack_120 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        func_0x0412c2d0(plVar1);
      }
      puVar13 = puStack_100;
      puVar23 = puStack_108;
      LOCK();
      uVar30 = *puStack_100;
      *puStack_100 = *puStack_100 - 1;
      UNLOCK();
      if (uVar30 == 0) {
        (**(code **)(*puVar16 + 0x10))(puVar16);
        func_0x0412c2d0(puVar16);
        LOCK();
        uVar30 = *puVar13;
        *puVar13 = *puVar13 - 1;
        UNLOCK();
      }
      else {
        LOCK();
        uVar30 = *puStack_100;
        *puStack_100 = *puStack_100 - 1;
        UNLOCK();
      }
      if (uVar30 == 0) {
        (**(code **)(*puVar16 + 0x10))(puVar16);
        func_0x0412c2d0(puVar16);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_1d0 & 1) != 0) {
        func_0x0412a280(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
      }
      ppuVar27 = (undefined8 **)(puVar16 + 0x26);
      if (plVar33 != (long *)0x0) {
        LOCK();
        plVar1 = plVar33 + 1;
        lVar26 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          func_0x0412c2d0(plVar33);
        }
      }
      puStack_b8 = (undefined8 *)&UNK_0f015bb8;
      puStack_b0 = puVar31;
      uStack_a8 = uStack_13c;
      if (ppuVar27 != &puStack_b8) {
        if ((*ppuVar27 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar27)[1])(ppuVar27), puStack_b8 != (undefined8 *)0x0)) {
          (*(code *)*puStack_b8)(&puStack_b8,ppuVar27);
        }
        else {
          puStack_b8 = (undefined8 *)0x0;
        }
        *ppuVar27 = puStack_b8;
      }
      return puVar23;
    }
  }
  else {
    pbVar24 = pbVar24 + -(long)pbStack_130;
    uVar30 = ((long)pbVar24 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar30) goto LAB_05f4dec0;
    lVar21 = (long)*(byte **)(lStack_118 + 200) - (long)pbStack_130 >> 3;
    uVar15 = lVar21 * -0x6186186186186186;
    if (uVar30 < uVar15) {
      uVar30 = uVar15;
    }
    pbVar29 = (byte *)(lStack_118 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar30 = 0x186186186186186;
    }
    pbStack_178 = pbVar29;
    if (uVar30 == 0) {
      puVar17 = (undefined8 *)0x0;
LAB_05f4d5ff:
      puStack_190 = (ulong *)(pbVar24 + (long)puVar17);
      puStack_180 = puVar17 + uVar30 * 0x15;
      puStack_198 = puVar17;
      puStack_188 = puStack_190;
      func_0x05f6f740(puStack_190);
      puVar23 = puStack_188 + 0x15;
      lVar21 = *(long *)(lVar26 + 0xb8);
      lVar26 = *(long *)(lVar26 + 0xc0);
      pbVar24 = (byte *)((long)puStack_190 + (lVar21 - lVar26));
      if (lVar21 != lVar26) {
        lVar32 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar21 + lVar32))[1];
          *(undefined8 *)(pbVar24 + lVar32) = *(undefined8 *)(lVar21 + lVar32);
          *(undefined8 *)(pbVar24 + lVar32 + 8) = uVar19;
          *(undefined8 *)(lVar21 + lVar32) = 0;
          ((undefined8 *)(lVar21 + lVar32))[1] = 0;
          pbVar28 = pbVar24 + lVar32 + 0x20;
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
          pbVar28 = pbVar24 + lVar32 + 0x10;
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
          pbVar28 = pbVar24 + lVar32 + 0x30;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined8 *)(pbVar24 + lVar32 + 0x28) = *(undefined8 *)(lVar21 + 0x28 + lVar32);
          puVar4 = (undefined4 *)(lVar21 + 0x18 + lVar32);
          uVar7 = puVar4[1];
          uVar8 = puVar4[2];
          uVar9 = puVar4[3];
          pbVar28 = pbVar24 + lVar32 + 0x18;
          *(undefined4 *)pbVar28 = *puVar4;
          *(undefined4 *)(pbVar28 + 4) = uVar7;
          *(undefined4 *)(pbVar28 + 8) = uVar8;
          *(undefined4 *)(pbVar28 + 0xc) = uVar9;
          *(undefined2 *)(lVar21 + 0x18 + lVar32) = 0;
          *(undefined8 *)(pbVar24 + lVar32 + 0x10) = *(undefined8 *)(lVar21 + 0x10 + lVar32);
          func_0x04167a20(pbVar24 + lVar32 + 0x38,lVar21 + lVar32 + 0x38);
          puVar17 = (undefined8 *)(lVar21 + 0x40 + lVar32);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar24 + lVar32 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar24 + lVar32 + 0x40 + 8) = uVar19;
          puVar17 = (undefined8 *)(lVar21 + 0x50 + lVar32);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar24 + lVar32 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar24 + lVar32 + 0x50 + 8) = uVar19;
          puVar17 = (undefined8 *)(lVar21 + 0x60 + lVar32);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar24 + lVar32 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar24 + lVar32 + 0x60 + 8) = uVar19;
          puVar17 = (undefined8 *)(lVar21 + 0x60 + lVar32);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar24 + lVar32 + 0x70) = *(undefined8 *)(lVar21 + 0x70 + lVar32);
          puVar17 = (undefined8 *)(lVar21 + 0x78 + lVar32);
          uVar19 = puVar17[1];
          *(undefined8 *)(pbVar24 + lVar32 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar24 + lVar32 + 0x78 + 8) = uVar19;
          pbVar28 = pbVar24 + lVar32 + 0x88;
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
          pbVar28 = pbVar24 + lVar32 + 0x98;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          puVar4 = (undefined4 *)(lVar21 + 0x88 + lVar32);
          uVar7 = puVar4[1];
          uVar8 = puVar4[2];
          uVar9 = puVar4[3];
          pbVar28 = pbVar24 + lVar32 + 0x88;
          *(undefined4 *)pbVar28 = *puVar4;
          *(undefined4 *)(pbVar28 + 4) = uVar7;
          *(undefined4 *)(pbVar28 + 8) = uVar8;
          *(undefined4 *)(pbVar28 + 0xc) = uVar9;
          *(undefined8 *)(pbVar24 + lVar32 + 0x98) = *(undefined8 *)(lVar21 + 0x98 + lVar32);
          puVar17 = (undefined8 *)(lVar21 + 0x88 + lVar32);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar32) = 0;
          *(undefined2 *)(pbVar24 + lVar32 + 0xa0) = *(undefined2 *)(lVar21 + 0xa0 + lVar32);
          lVar3 = lVar21 + lVar32;
          lVar32 = lVar32 + 0xa8;
        } while (lVar3 + 0xa8 != lVar26);
        do {
          func_0x05f6f8c0(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar26);
        lVar21 = *(long *)pbVar29;
      }
      lVar26 = lStack_118;
      *(byte **)(lStack_118 + 0xb8) = pbVar24;
      *(ulong **)(lStack_118 + 0xc0) = puVar23;
      lVar32 = *(long *)(lStack_118 + 200);
      *(undefined8 **)(lStack_118 + 200) = puStack_180;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar32 - lVar21);
      }
      goto LAB_05f4d7d1;
    }
    if (uVar30 < 0x186186186186187) {
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0xa8);
      if (puVar17 == (undefined8 *)0x0) {
        FUN_0eec74c0(uVar30 * 0xa8,0);
        puVar17 = (undefined8 *)0x0;
      }
      goto LAB_05f4d5ff;
    }
LAB_05f4deb6:
    func_0x04882eb0();
  }
  func_0x05f6fae0();
LAB_05f4dec0:
  uVar19 = func_0x05f6f8b0();
  if ((*pbVar24 & 1) != 0) {
    func_0x0412a280(puVar31[3],puVar31[1] & 0xfffffffffffffffe);
  }
  func_0x05f6fa20(&puStack_198);
  plVar33 = plStack_1a0;
  LOCK();
  lVar26 = *plStack_120;
  *plStack_120 = *plStack_120 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
    func_0x0412c2d0(plVar33);
  }
  func_0x05f6e010(puVar16);
  func_0x05f6e040(puVar16);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_1d0 & 1) != 0) goto LAB_05f4dfd5;
  do {
    do {
      func_0x05f4e0a0(plStack_150);
      uVar19 = func_0x0eee2d70(uVar19);
    } while ((uStack_1d0 & 1) == 0);
LAB_05f4dfd5:
    func_0x0412a280(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
  } while( true );
}


