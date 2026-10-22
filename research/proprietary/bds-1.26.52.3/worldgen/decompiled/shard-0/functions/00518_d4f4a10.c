/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5f4a10 (ELF vaddr 0xd4f4a10)
 * Label: caller-of-callee
 * Body:  [[0d5f4a10, 0d5f51a9] [0d5f51b0, 0d5f51f0] [0d5f5200, 0d5f5347] [0d5f5350, 0d5f5387] [0d5f5390, 0d5f5596] [0d5f55a0, 0d5f562a] [0d5f5630, 0d5f5665] [0d5f5670, 0d5f56f8] [0d5f5700, 0d5f5741] [0d5f5750, 0d5f57b4] [0d5f57c0, 0d5f57f7] [0d5f5800, 0d5f5867] [0d5f5870, 0d5f5a38] [0d5f5a40, 0d5f5aa3] [0d5f5ab0, 0d5f5c97] [0d5f5ca0, 0d5f5ced] [0d5f5cf0, 0d5f5df0] [0d5f5e00, 0d5f5e15] [0d5f5e20, 0d5f5e6e] [0d5f5e70, 0d5f621c] [0d5f63a3, 0d5f63e3] [0d5f640c, 0d5f6439] [0d5f6493, 0d5f666a]]
 * Ghidra: FUN_0d5f4a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d5f4a10(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 **ppuVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  byte *unaff_R13;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined4 **ppuStack_e0;
  undefined4 **ppuStack_d8;
  undefined1 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined8 *puStack_40;
  undefined4 *puStack_38;
  
  *param_1 = &UNK_0f534768;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef44a60;
  *(undefined1 *)(puVar11 + 3) = 1;
  param_1[1] = puVar11 + 3;
  param_1[2] = puVar11;
  *param_1 = &UNK_0f47b6a0;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  pbVar23 = (byte *)(param_1 + 5);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    param_1[7] = param_2[7];
    uVar18 = param_2[6];
    *(undefined8 *)pbVar23 = param_2[5];
    param_1[6] = uVar18;
  }
  else {
    FUN_0412e5e0(pbVar23,param_2[7],param_2[6]);
  }
  uVar6 = *(undefined4 *)((long)param_2 + 0x44);
  uVar7 = *(undefined4 *)(param_2 + 9);
  uVar8 = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x44) = uVar6;
  *(undefined4 *)(param_1 + 9) = uVar7;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar8;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  pbStack_50 = (byte *)(param_1 + 0xb);
  pbStack_48 = pbVar23;
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    param_1[0xd] = param_2[0xd];
    uVar18 = param_2[0xc];
    *(undefined8 *)pbStack_50 = param_2[0xb];
    param_1[0xc] = uVar18;
  }
  else {
    FUN_0412e5e0(pbStack_50,param_2[0xd],param_2[0xc]);
  }
  uVar18 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar18;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar18 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar18;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  uVar18 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar18;
  uVar6 = *(undefined4 *)((long)param_2 + 0xb4);
  uVar7 = *(undefined4 *)(param_2 + 0x17);
  uVar8 = *(undefined4 *)((long)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((long)param_1 + 0xb4) = uVar6;
  *(undefined4 *)(param_1 + 0x17) = uVar7;
  *(undefined4 *)((long)param_1 + 0xbc) = uVar8;
  pbStack_58 = (byte *)(param_1 + 0x18);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    param_1[0x1a] = param_2[0x1a];
    uVar18 = param_2[0x19];
    *(undefined8 *)pbStack_58 = param_2[0x18];
    param_1[0x19] = uVar18;
  }
  else {
    FUN_0412e5e0(pbStack_58,param_2[0x1a],param_2[0x19]);
  }
  puStack_60 = param_1 + 0x1b;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  func_0x0488f040();
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)((long)param_2 + 0xf2);
  pbStack_68 = (byte *)(param_1 + 0x1f);
  if ((*(byte *)(param_2 + 0x1f) & 1) == 0) {
    param_1[0x21] = param_2[0x21];
    uVar6 = *(undefined4 *)((long)param_2 + 0xfc);
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    uVar8 = *(undefined4 *)((long)param_2 + 0x104);
    *(undefined4 *)pbStack_68 = *(undefined4 *)(param_2 + 0x1f);
    *(undefined4 *)((long)param_1 + 0xfc) = uVar6;
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    *(undefined4 *)((long)param_1 + 0x104) = uVar8;
  }
  else {
    FUN_0412e5e0(pbStack_68,param_2[0x21],param_2[0x20]);
  }
  pbStack_70 = (byte *)(param_1 + 0x22);
  if ((*(byte *)(param_2 + 0x22) & 1) == 0) {
    param_1[0x24] = param_2[0x24];
    uVar18 = param_2[0x23];
    *(undefined8 *)pbStack_70 = param_2[0x22];
    param_1[0x23] = uVar18;
  }
  else {
    FUN_0412e5e0(pbStack_70,param_2[0x24],param_2[0x23]);
  }
  uVar6 = *(undefined4 *)((long)param_2 + 300);
  uVar7 = *(undefined4 *)(param_2 + 0x26);
  uVar8 = *(undefined4 *)((long)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((long)param_1 + 300) = uVar6;
  *(undefined4 *)(param_1 + 0x26) = uVar7;
  *(undefined4 *)((long)param_1 + 0x134) = uVar8;
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = 0;
  pbVar23 = (byte *)param_2[0x28];
  if (((ulong)pbVar23 >> 0x37 & 1) != 0) {
    lVar26 = *(long *)(((ulong)pbVar23 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar26 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (lVar30 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar30,8);
    }
    *plVar12 = lVar26;
    func_0x0eee2f00(plVar12 + 1,(ulong)pbVar23 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar12 + lVar26 + 8) = 0;
    unaff_R13 = (byte *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pbVar23 = unaff_R13;
  }
  puStack_a0 = param_1 + 0x28;
  param_1[0x28] = pbVar23;
  param_1[0x29] = 0;
  pbVar23 = (byte *)param_2[0x29];
  if (((ulong)pbVar23 & 0x80000000000000) != 0) {
    lVar26 = *(long *)(((ulong)pbVar23 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar26 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (lVar30 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar30,8);
    }
    *plVar12 = lVar26;
    func_0x0eee2f00(plVar12 + 1,(ulong)pbVar23 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar12 + lVar26 + 8) = 0;
    unaff_R13 = (byte *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pbVar23 = unaff_R13;
  }
  param_1[0x29] = pbVar23;
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(param_2 + 0x2b);
  func_0x0d88e390(param_1 + 0x2c,param_2 + 0x2c);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = 0;
  pbVar23 = (byte *)param_2[0x31];
  if (((ulong)pbVar23 & 0x80000000000000) != 0) {
    lVar26 = *(long *)(((ulong)pbVar23 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar26 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (lVar30 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar30,8);
    }
    *plVar12 = lVar26;
    func_0x0eee2f00(plVar12 + 1,(ulong)pbVar23 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar12 + lVar26 + 8) = 0;
    unaff_R13 = (byte *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pbVar23 = unaff_R13;
  }
  puStack_a8 = param_1 + 0x31;
  param_1[0x31] = pbVar23;
  param_1[0x32] = 0;
  pbVar23 = (byte *)param_2[0x32];
  if (((ulong)pbVar23 & 0x80000000000000) != 0) {
    lVar26 = *(long *)(((ulong)pbVar23 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar26 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (lVar30 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar30,8);
    }
    *plVar12 = lVar26;
    func_0x0eee2f00(plVar12 + 1,(ulong)pbVar23 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar12 + lVar26 + 8) = 0;
    unaff_R13 = (byte *)((ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    pbVar23 = unaff_R13;
  }
  param_1[0x32] = pbVar23;
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined2 *)((long)param_1 + 0x19c) = *(undefined2 *)((long)param_2 + 0x19c);
  uVar18 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar18;
  *(undefined4 *)((long)param_1 + 0x1af) = *(undefined4 *)((long)param_2 + 0x1af);
  puStack_b0 = param_1 + 0x37;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  lVar30 = param_2[0x37];
  lVar26 = param_2[0x38];
  lVar29 = lVar26 - lVar30;
  if (lVar29 != 0) {
    if ((ulong)((lVar29 >> 3) * -0x1111111111111111) < 0x222222222222223) {
      lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar29);
      if (lVar13 == 0) {
        func_0x0eec74c0(lVar29,0);
      }
      param_1[0x37] = lVar13;
      param_1[0x38] = lVar13;
      param_1[0x39] = lVar29 + lVar13;
      lVar29 = 0;
      do {
        func_0x0d6125d0(lVar13 + lVar29,lVar30 + lVar29);
        lVar2 = lVar30 + lVar29;
        lVar29 = lVar29 + 0x78;
      } while (lVar2 + 0x78 != lVar26);
      param_1[0x38] = lVar13 + lVar29;
      goto LAB_0d5f50e0;
    }
    func_0x0d6317f0();
LAB_0d5f61fa:
    func_0x0d631990();
    puVar11 = param_2;
LAB_0d5f61ff:
    uVar18 = func_0x0d631ad0();
    if ((*pbStack_90 & 1) == 0) {
      bVar3 = *pbStack_88;
    }
    else {
      thunk_FUN_0ee326a0(param_1[0x54],param_1[0x52] & 0xfffffffffffffffe);
      bVar3 = *pbStack_88;
    }
    if ((bVar3 & 1) != 0) {
      thunk_FUN_0ee326a0(param_1[0x51],param_1[0x4f] & 0xfffffffffffffffe);
    }
    func_0x04886070(puStack_b8);
    func_0x0d5f4740(uStack_110);
    func_0x0d5f47c0(puStack_80);
    func_0x0d5f4860(plStack_c8);
    func_0x09a92700(puStack_78);
    func_0x0d5f4910(plStack_c0);
    func_0x0d5f49c0(puStack_b0);
    do {
      func_0x0ee386e0(param_1 + 0x32);
      func_0x0ee386e0(puStack_a8);
      func_0x0ee386e0(param_1 + 0x2e);
      func_0x0ee386e0(param_1 + 0x2d);
      func_0x0ee386e0(param_1 + 0x29);
      func_0x0ee386e0(puStack_a0);
      if ((*pbStack_70 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[0x24],param_1[0x22] & 0xfffffffffffffffe);
      }
      if ((*pbStack_68 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[0x21],param_1[0x1f] & 0xfffffffffffffffe);
      }
      func_0x04886070(puStack_60);
      if ((*pbStack_58 & 1) != 0) goto LAB_0d5f65b1;
      if ((*pbStack_50 & 1) != 0) goto LAB_0d5f65d9;
      while ((*pbStack_48 & 1) == 0) {
        while( true ) {
          func_0x0ee13f50(param_1);
          func_0x0eee2d70(uVar18);
LAB_0d5f65b1:
          thunk_FUN_0ee326a0(param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe);
          if ((*pbStack_50 & 1) == 0) break;
LAB_0d5f65d9:
          thunk_FUN_0ee326a0(param_1[0xd],param_1[0xb] & 0xfffffffffffffffe);
          if ((*pbStack_48 & 1) != 0) goto LAB_0d5f65fb;
        }
      }
LAB_0d5f65fb:
      thunk_FUN_0ee326a0(param_1[7],param_1[5] & 0xfffffffffffffffe);
      func_0x0ee13f50(param_1);
      uVar18 = func_0x0eee2d70(uVar18);
      uVar18 = FUN_04882e20(uVar18);
      if (unaff_R13 != (byte *)0x0) {
        do {
          func_0x0d631800((byte *)((long)(puVar11 + -0xf) + (long)unaff_R13));
          unaff_R13 = unaff_R13 + -0x78;
        } while (unaff_R13 != (byte *)0x0);
      }
      param_1[0x38] = puVar11;
      func_0x0d631780(puStack_b0,0);
    } while( true );
  }
LAB_0d5f50e0:
  plStack_c0 = param_1 + 0x3a;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  pbVar23 = (byte *)param_2[0x3a];
  unaff_R13 = (byte *)param_2[0x3b];
  lVar30 = (long)unaff_R13 - (long)pbVar23;
  if (lVar30 != 0) {
    if (0x555555555555555 < (ulong)((lVar30 >> 4) * -0x5555555555555555)) goto LAB_0d5f61fa;
    puVar14 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar30);
    if (puVar14 == (undefined4 *)0x0) {
      func_0x0eec74c0(lVar30,0);
    }
    param_1[0x3a] = puVar14;
    param_1[0x3b] = puVar14;
    param_1[0x3c] = lVar30 + (long)puVar14;
    plStack_e8 = plStack_c0;
    ppuStack_e0 = &puStack_100;
    ppuStack_d8 = &puStack_f8;
    uStack_d0 = 0;
    puStack_100 = puVar14;
    do {
      puStack_f8 = puVar14;
      if ((*pbVar23 & 1) == 0) {
        *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(pbVar23 + 0x10);
        uVar6 = *(undefined4 *)(pbVar23 + 4);
        uVar7 = *(undefined4 *)(pbVar23 + 8);
        uVar8 = *(undefined4 *)(pbVar23 + 0xc);
        *puVar14 = *(undefined4 *)pbVar23;
        puVar14[1] = uVar6;
        puVar14[2] = uVar7;
        puVar14[3] = uVar8;
      }
      else {
        FUN_0412e5e0(puVar14,*(undefined8 *)(pbVar23 + 0x10),*(undefined8 *)(pbVar23 + 8));
      }
      if ((pbVar23[0x18] & 1) == 0) {
        *(undefined8 *)(puVar14 + 10) = *(undefined8 *)(pbVar23 + 0x28);
        uVar6 = *(undefined4 *)(pbVar23 + 0x1c);
        uVar7 = *(undefined4 *)(pbVar23 + 0x20);
        uVar8 = *(undefined4 *)(pbVar23 + 0x24);
        puVar14[6] = *(undefined4 *)(pbVar23 + 0x18);
        puVar14[7] = uVar6;
        puVar14[8] = uVar7;
        puVar14[9] = uVar8;
      }
      else {
        FUN_0412e5e0(puVar14 + 6,*(undefined8 *)(pbVar23 + 0x28),*(undefined8 *)(pbVar23 + 0x20));
      }
      pbVar23 = pbVar23 + 0x30;
      puVar14 = puStack_f8 + 0xc;
    } while (pbVar23 != unaff_R13);
    param_1[0x3b] = puVar14;
    puStack_f8 = puVar14;
  }
  puStack_78 = param_1 + 0x3d;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  func_0x09b7fe90();
  plStack_c8 = param_1 + 0x40;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  pbVar23 = (byte *)param_2[0x40];
  pbVar5 = (byte *)param_2[0x41];
  lVar30 = (long)pbVar5 - (long)pbVar23;
  if (lVar30 != 0) {
    puVar11 = param_1;
    if (lVar30 < 0) goto LAB_0d5f61ff;
    puStack_118 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar30);
    if (puStack_118 == (undefined4 *)0x0) {
      func_0x0eec74c0(lVar30,0);
    }
    param_1[0x40] = puStack_118;
    param_1[0x41] = puStack_118;
    param_1[0x42] = lVar30 + (long)puStack_118;
    plStack_e8 = plStack_c8;
    ppuStack_e0 = &puStack_38;
    ppuStack_d8 = &puStack_100;
    uStack_d0 = 0;
    puVar14 = puStack_118;
    puStack_38 = puStack_118;
    do {
      puStack_100 = puVar14;
      if ((*pbVar23 & 1) == 0) {
        *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(pbVar23 + 0x10);
        uVar6 = *(undefined4 *)(pbVar23 + 4);
        uVar7 = *(undefined4 *)(pbVar23 + 8);
        uVar8 = *(undefined4 *)(pbVar23 + 0xc);
        *puVar14 = *(undefined4 *)pbVar23;
        puVar14[1] = uVar6;
        puVar14[2] = uVar7;
        puVar14[3] = uVar8;
      }
      else {
        FUN_0412e5e0(puVar14,*(undefined8 *)(pbVar23 + 0x10),*(undefined8 *)(pbVar23 + 8));
      }
      *(undefined1 *)(puVar14 + 6) = 0;
      puVar14[0xc] = 0xffffffff;
      uVar4 = *(uint *)(pbVar23 + 0x30);
      if ((ulong)uVar4 != 0xffffffff) {
        puStack_f8 = puVar14 + 6;
        (**(code **)(&UNK_0f47ba80 + (ulong)uVar4 * 8))(&puStack_f8,pbVar23 + 0x18);
        puVar14[0xc] = uVar4;
      }
      *(byte *)(puVar14 + 0xe) = pbVar23[0x38];
      pbVar23 = pbVar23 + 0x40;
      puVar14 = puStack_100 + 0x10;
    } while (pbVar23 != pbVar5);
    param_1[0x41] = puVar14;
    puStack_100 = puVar14;
  }
  puStack_80 = param_1 + 0x43;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *puStack_80 = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    func_0x0d631dc0(puStack_80,param_2[0x43],param_2[0x44],
                    ((long)(param_2[0x44] - param_2[0x43]) >> 4) * 0x6db6db6db6db6db7);
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  ppuVar1 = (undefined4 **)(param_1 + 0x47);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(param_2 + 0x4b);
  uVar20 = param_2[0x48];
  uVar27 = 2;
  if (uVar20 != 1) {
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar17 = 0;
      bVar32 = false;
      uVar27 = uVar20;
      if (uVar20 == 0) {
LAB_0d5f602a:
        if (!bVar32) goto LAB_0d5f54cb;
        fVar33 = (float)ceilf((float)(ulong)param_1[0x4a] / *(float *)(param_1 + 0x4b));
        uVar20 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
        if ((uVar17 < 3) ||
           (uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
           uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
           1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar20 = func_0x0412c3f0(uVar20);
          if (uVar20 < uVar27) {
            uVar20 = uVar27;
          }
        }
        else {
          if (1 < uVar20) {
            lVar30 = 0x3f;
            if (uVar20 - 1 != 0) {
              for (; uVar20 - 1 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            uVar20 = 1L << (-((byte)lVar30 ^ 0x3f) & 0x3f);
          }
          if (uVar20 < uVar27) {
            uVar20 = uVar27;
          }
        }
        uVar27 = uVar20;
        if (uVar17 <= uVar20) goto LAB_0d5f54cb;
      }
    }
    else {
      uVar27 = func_0x0412c3f0(uVar20,2);
      uVar17 = param_1[0x48];
      bVar32 = uVar27 < uVar17;
      if (uVar27 <= uVar17) goto LAB_0d5f602a;
    }
  }
  func_0x0d6489a0(ppuVar1,uVar27);
LAB_0d5f54cb:
  plVar12 = (long *)param_2[0x49];
  if (plVar12 != (long *)0x0) {
    plStack_f0 = param_1 + 0x49;
LAB_0d5f54f0:
    do {
      lVar30 = (long)plVar12 + 0x11;
      bVar32 = (*(byte *)(plVar12 + 2) & 1) == 0;
      lVar26 = plVar12[4];
      if (bVar32) {
        lVar26 = lVar30;
      }
      uVar20 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
      if (!bVar32) {
        uVar20 = plVar12[3];
      }
      puVar15 = (undefined4 *)func_0x04883620(&plStack_e8,lVar26,uVar20);
      puVar14 = (undefined4 *)param_1[0x48];
      if (puVar14 != (undefined4 *)0x0) {
        uVar20 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
        uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar20 >> 0x38 < 2) {
          puStack_118 = (undefined4 *)((long)puVar14 - 1U & (ulong)puVar15);
        }
        else {
          puStack_118 = puVar15;
          if (puVar14 <= puVar15) {
            if (((ulong)puVar15 | (ulong)puVar14) >> 0x20 == 0) {
              puStack_118 = (undefined4 *)
                            (((ulong)puVar15 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff));
            }
            else {
              puStack_118 = (undefined4 *)((ulong)puVar15 % (ulong)puVar14);
            }
          }
        }
        if ((*(long **)(*ppuVar1 + (long)puStack_118 * 2) != (long *)0x0) &&
           (plVar16 = (long *)**(long **)(*ppuVar1 + (long)puStack_118 * 2), plVar16 != (long *)0x0)
           ) {
          if ((*(byte *)(plVar12 + 2) & 1) == 0) {
            uVar27 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
          }
          else {
            uVar27 = plVar12[3];
            lVar30 = plVar12[4];
          }
          if ((byte)(uVar20 >> 0x38) < 2) {
            do {
              if ((undefined4 *)plVar16[1] == puVar15) {
                bVar3 = *(byte *)(plVar16 + 2);
                if ((bVar3 & 1) == 0) {
                  uVar20 = (ulong)(bVar3 >> 1);
                }
                else {
                  uVar20 = plVar16[3];
                }
                if (uVar20 == uVar27) {
                  if ((bVar3 & 1) == 0) {
                    lVar26 = (long)plVar16 + 0x11;
                  }
                  else {
                    lVar26 = plVar16[4];
                  }
                  iVar10 = func_0x0eee3000(lVar26,lVar30,uVar27);
                  if (iVar10 == 0) goto LAB_0d5f5730;
                }
              }
              else if ((undefined4 *)((ulong)plVar16[1] & (long)puVar14 - 1U) != puStack_118) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              puVar22 = (undefined4 *)plVar16[1];
              if (puVar22 == puVar15) {
                bVar3 = *(byte *)(plVar16 + 2);
                if ((bVar3 & 1) == 0) {
                  uVar20 = (ulong)(bVar3 >> 1);
                }
                else {
                  uVar20 = plVar16[3];
                }
                if (uVar20 == uVar27) {
                  if ((bVar3 & 1) == 0) {
                    lVar26 = (long)plVar16 + 0x11;
                  }
                  else {
                    lVar26 = plVar16[4];
                  }
                  iVar10 = func_0x0eee3000(lVar26,lVar30,uVar27);
                  if (iVar10 == 0) goto LAB_0d5f5730;
                }
              }
              else {
                if (puVar14 <= puVar22) {
                  if (((ulong)puVar22 | (ulong)puVar14) >> 0x20 == 0) {
                    puVar22 = (undefined4 *)
                              (((ulong)puVar22 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff));
                  }
                  else {
                    puVar22 = (undefined4 *)((ulong)puVar22 % (ulong)puVar14);
                  }
                }
                if (puVar22 != puStack_118) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
      }
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      ppuStack_d8 = (undefined4 **)0x0;
      *plVar16 = 0;
      plVar16[1] = (long)puVar15;
      plStack_e8 = plVar16;
      ppuStack_e0 = ppuVar1;
      if ((*(byte *)(plVar12 + 2) & 1) == 0) {
        plVar16[4] = plVar12[4];
        lVar30 = plVar12[3];
        plVar16[2] = plVar12[2];
        plVar16[3] = lVar30;
      }
      else {
        FUN_0412e5e0(plVar16 + 2,plVar12[4],plVar12[3]);
      }
      *(int *)(plVar16 + 5) = (int)plVar12[5];
      ppuStack_d8 = (undefined4 **)CONCAT71(ppuStack_d8._1_7_,1);
      if ((long)puVar14 < 0) {
        fVar34 = (float)puVar14;
        fVar33 = *(float *)(param_1 + 0x4b);
        if (puVar14 != (undefined4 *)0x0) goto LAB_0d5f5857;
LAB_0d5f5870:
        uVar20 = 1;
        if ((undefined4 *)0x2 < puVar14) {
          uVar20 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
        }
        uVar20 = (long)puVar14 * 2 | uVar20;
        fVar33 = (float)ceilf((float)(param_1[0x4a] + 1) / fVar33);
        uVar27 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
        if (uVar27 < uVar20) {
          uVar27 = uVar20;
        }
        uVar20 = 2;
        if ((uVar27 == 1) || (uVar20 = uVar27, (uVar27 & uVar27 - 1) == 0)) {
          uVar27 = param_1[0x48];
          bVar32 = uVar20 < uVar27;
          if (uVar20 <= uVar27) goto LAB_0d5f590e;
LAB_0d5f58e4:
          func_0x0d6489a0(ppuVar1,uVar20);
        }
        else {
          uVar20 = func_0x0412c3f0();
          uVar27 = param_1[0x48];
          bVar32 = uVar20 < uVar27;
          if (uVar27 < uVar20) goto LAB_0d5f58e4;
LAB_0d5f590e:
          if (bVar32) {
            fVar33 = (float)ceilf((float)(ulong)param_1[0x4a] / *(float *)(param_1 + 0x4b));
            uVar17 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
            if ((uVar27 < 3) ||
               (uVar21 = uVar27 - (uVar27 >> 1 & 0x5555555555555555),
               uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
               1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar17 = func_0x0412c3f0(uVar17);
            }
            else if (1 < uVar17) {
              lVar30 = 0x3f;
              if (uVar17 - 1 != 0) {
                for (; uVar17 - 1 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              uVar17 = 1L << (-((byte)lVar30 ^ 0x3f) & 0x3f);
            }
            if (uVar20 <= uVar17) {
              uVar20 = uVar17;
            }
            if (uVar20 < uVar27) goto LAB_0d5f58e4;
          }
        }
        puVar14 = (undefined4 *)param_1[0x48];
        if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
          puVar22 = (undefined4 *)((ulong)puVar15 & (long)puVar14 - 1U);
        }
        else {
          puVar22 = puVar15;
          if (puVar14 <= puVar15) {
            if (((ulong)puVar15 | (ulong)puVar14) >> 0x20 == 0) {
              puVar22 = (undefined4 *)
                        (((ulong)puVar15 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff));
            }
            else {
              puVar22 = (undefined4 *)((ulong)puVar15 % (ulong)puVar14);
            }
          }
        }
      }
      else {
        fVar34 = (float)(long)puVar14;
        fVar33 = *(float *)(param_1 + 0x4b);
        if (puVar14 == (undefined4 *)0x0) goto LAB_0d5f5870;
LAB_0d5f5857:
        puVar22 = puStack_118;
        if (fVar34 * fVar33 < (float)(param_1[0x4a] + 1)) goto LAB_0d5f5870;
      }
      puVar15 = *ppuVar1;
      plVar31 = *(long **)(puVar15 + (long)puVar22 * 2);
      if (plVar31 == (long *)0x0) {
        *plVar16 = *plStack_f0;
        *plStack_f0 = (long)plVar16;
        *(long **)(puVar15 + (long)puVar22 * 2) = plStack_f0;
        if (*plVar16 != 0) {
          puVar22 = *(undefined4 **)(*plVar16 + 8);
          if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
            *(long **)(puVar15 + ((ulong)puVar22 & (long)puVar14 - 1U) * 2) = plVar16;
          }
          else {
            if (puVar14 <= puVar22) {
              if (((ulong)puVar22 | (ulong)puVar14) >> 0x20 == 0) {
                *(long **)(puVar15 +
                          (((ulong)puVar22 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff)) * 2) =
                     plVar16;
                goto LAB_0d5f5a8a;
              }
              puVar22 = (undefined4 *)((ulong)puVar22 % (ulong)puVar14);
            }
            *(long **)(puVar15 + (long)puVar22 * 2) = plVar16;
          }
        }
      }
      else {
        *plVar16 = *plVar31;
        *plVar31 = (long)plVar16;
      }
LAB_0d5f5a8a:
      param_1[0x4a] = param_1[0x4a] + 1;
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
LAB_0d5f5b1f:
  puVar11 = param_1 + 0x4c;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  func_0x0488f040(puVar11,param_2[0x4c],param_2[0x4d],
                  ((long)(param_2[0x4d] - param_2[0x4c]) >> 3) * -0x5555555555555555);
  pbStack_88 = (byte *)(param_1 + 0x4f);
  puStack_b8 = puVar11;
  if ((*(byte *)(param_2 + 0x4f) & 1) == 0) {
    param_1[0x51] = param_2[0x51];
    uVar6 = *(undefined4 *)((long)param_2 + 0x27c);
    uVar7 = *(undefined4 *)(param_2 + 0x50);
    uVar8 = *(undefined4 *)((long)param_2 + 0x284);
    *(undefined4 *)pbStack_88 = *(undefined4 *)(param_2 + 0x4f);
    *(undefined4 *)((long)param_1 + 0x27c) = uVar6;
    *(undefined4 *)(param_1 + 0x50) = uVar7;
    *(undefined4 *)((long)param_1 + 0x284) = uVar8;
  }
  else {
    FUN_0412e5e0(pbStack_88,param_2[0x51],param_2[0x50]);
  }
  puVar11 = param_1 + 0x52;
  if ((*(byte *)(param_2 + 0x52) & 1) == 0) {
    param_1[0x54] = param_2[0x54];
    uVar6 = *(undefined4 *)((long)param_2 + 0x294);
    uVar7 = *(undefined4 *)(param_2 + 0x53);
    uVar8 = *(undefined4 *)((long)param_2 + 0x29c);
    *(undefined4 *)puVar11 = *(undefined4 *)(param_2 + 0x52);
    *(undefined4 *)((long)param_1 + 0x294) = uVar6;
    *(undefined4 *)(param_1 + 0x53) = uVar7;
    *(undefined4 *)((long)param_1 + 0x29c) = uVar8;
  }
  else {
    FUN_0412e5e0(puVar11,param_2[0x54],param_2[0x53]);
  }
  puStack_98 = param_1 + 0x55;
  pbStack_90 = (byte *)puVar11;
  if ((*(byte *)(param_2 + 0x55) & 1) == 0) {
    param_1[0x57] = param_2[0x57];
    uVar18 = param_2[0x56];
    *puStack_98 = param_2[0x55];
    param_1[0x56] = uVar18;
  }
  else {
    FUN_0412e5e0(puStack_98,param_2[0x57],param_2[0x56]);
  }
  plVar12 = param_1 + 0x59;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = plVar12;
  puVar11 = (undefined8 *)param_2[0x58];
  puStack_40 = param_2 + 0x59;
  if (puVar11 != puStack_40) {
    plStack_f0 = param_1 + 0x58;
    do {
      plVar31 = (long *)*plVar12;
      plVar16 = plVar12;
      plVar24 = plVar12;
      if (plVar12 != (long *)*plStack_f0) {
        plVar28 = plVar31;
        plVar19 = plVar12;
        if (plVar31 == (long *)0x0) {
          do {
            plVar16 = (long *)plVar19[2];
            bVar32 = plVar19 == (long *)*plVar16;
            plVar19 = plVar16;
          } while (bVar32);
        }
        else {
          do {
            plVar16 = plVar28;
            plVar28 = (long *)plVar16[1];
          } while ((long *)plVar16[1] != (long *)0x0);
        }
        bVar32 = (*(byte *)(plVar16 + 4) & 1) != 0;
        lVar30 = (long)plVar16 + 0x21;
        if (bVar32) {
          lVar30 = plVar16[6];
        }
        uVar20 = (ulong)(*(byte *)(plVar16 + 4) >> 1);
        if (bVar32) {
          uVar20 = plVar16[5];
        }
        bVar32 = (*(byte *)(puVar11 + 4) & 1) != 0;
        lVar26 = (long)puVar11 + 0x21;
        if (bVar32) {
          lVar26 = puVar11[6];
        }
        uVar27 = (ulong)(*(byte *)(puVar11 + 4) >> 1);
        if (bVar32) {
          uVar27 = puVar11[5];
        }
        uVar17 = uVar20;
        if (uVar27 < uVar20) {
          uVar17 = uVar27;
        }
        iVar10 = func_0x0eee2ff0(lVar30,lVar26,uVar17);
        if (iVar10 == 0) {
          if (uVar27 <= uVar20) goto LAB_0d5f5e26;
        }
        else if (-1 < iVar10) {
LAB_0d5f5e26:
          plVar28 = plVar24;
          if (plVar31 != (long *)0x0) {
            do {
              plVar24 = plVar31;
              bVar32 = (*(byte *)(plVar24 + 4) & 1) != 0;
              lVar30 = (long)plVar24 + 0x21;
              if (bVar32) {
                lVar30 = plVar24[6];
              }
              uVar20 = (ulong)(*(byte *)(plVar24 + 4) >> 1);
              if (bVar32) {
                uVar20 = plVar24[5];
              }
              uVar17 = uVar27;
              if (uVar20 < uVar27) {
                uVar17 = uVar20;
              }
              iVar10 = func_0x0eee2ff0(lVar26,lVar30,uVar17);
              if (iVar10 == 0) {
                if (uVar27 < uVar20) goto LAB_0d5f5e20;
              }
              else if (iVar10 < 0) goto LAB_0d5f5e20;
              iVar10 = func_0x0eee2ff0(lVar30,lVar26,uVar17);
              if (iVar10 == 0) {
                if (uVar27 <= uVar20) goto LAB_0d5f5dbb;
              }
              else if (-1 < iVar10) goto LAB_0d5f5dbb;
              plVar31 = (long *)plVar24[1];
              if ((long *)plVar24[1] == (long *)0x0) {
                plVar28 = plVar24 + 1;
                break;
              }
            } while( true );
          }
          goto LAB_0d5f5d6d;
        }
      }
      plVar28 = plVar16 + 1;
      plVar24 = plVar16;
      if (plVar31 == (long *)0x0) {
        plVar28 = plVar12;
        plVar24 = plVar12;
      }
      if (*plVar28 == 0) {
LAB_0d5f5d6d:
        plVar16 = plStack_f0;
        func_0x0d632c50(&plStack_e8,plStack_f0,puVar11 + 4);
        *plStack_e8 = 0;
        plStack_e8[1] = 0;
        plStack_e8[2] = (long)plVar24;
        *plVar28 = (long)plStack_e8;
        lVar30 = *(long *)*plVar16;
        if (lVar30 != 0) {
          *plVar16 = lVar30;
        }
        func_0x048bed00(param_1[0x59]);
        param_1[0x5a] = param_1[0x5a] + 1;
      }
LAB_0d5f5dbb:
      puVar9 = (undefined8 *)puVar11[1];
      puVar25 = puVar11;
      if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar25[2];
          bVar32 = puVar25 != (undefined8 *)*puVar11;
          puVar25 = puVar11;
        } while (bVar32);
      }
      else {
        do {
          puVar11 = puVar9;
          puVar9 = (undefined8 *)*puVar11;
        } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
      }
    } while (puVar11 != puStack_40);
  }
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = 0;
  uVar20 = param_2[0x5c];
  if ((uVar20 & 0x80000000000000) != 0) {
    lVar26 = *(long *)((uVar20 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar26 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (lVar30 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar30,8);
    }
    *plVar12 = lVar26;
    func_0x0eee2f00(plVar12 + 1,uVar20 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar12 + lVar26 + 8) = 0;
    uVar20 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  param_1[0x5c] = uVar20;
  param_1[0x5d] = 0;
  uVar20 = param_2[0x5d];
  if ((uVar20 & 0x80000000000000) != 0) {
    lVar26 = *(long *)((uVar20 & 0xff00ffffffffffff) - 8);
    lVar30 = lVar26 + 9;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar30,8);
    if (lVar30 != 0 && plVar12 == (long *)0x0) {
      func_0x0eec74c0(lVar30,8);
    }
    *plVar12 = lVar26;
    func_0x0eee2f00(plVar12 + 1,uVar20 & 0xff00ffffffffffff,lVar26);
    *(undefined1 *)((long)plVar12 + lVar26 + 8) = 0;
    uVar20 = (ulong)(plVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  param_1[0x5d] = uVar20;
  return;
LAB_0d5f5730:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto LAB_0d5f5b1f;
  goto LAB_0d5f54f0;
LAB_0d5f5e20:
  plVar31 = (long *)*plVar24;
  goto LAB_0d5f5e26;
}


