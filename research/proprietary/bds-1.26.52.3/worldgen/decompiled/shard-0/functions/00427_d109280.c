/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd209280 (ELF vaddr 0xd109280)
 * Label: caller-of-callee
 * Body:  [[0d209280, 0d20a4fd] [0d20a6e7, 0d20a93f]]
 * Ghidra: FUN_0d209280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d209280(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,
                 byte *param_5,undefined4 param_6,int *param_7,undefined1 param_8,undefined4 param_9
                 )

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  int *piVar8;
  long *plVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 uStack_aa9;
  long *plStack_aa8;
  undefined8 *apuStack_aa0 [3];
  uint uStack_a88;
  undefined4 *puStack_a80;
  undefined4 uStack_a74;
  undefined4 *puStack_a70;
  int *piStack_a68;
  undefined4 *puStack_a60;
  byte *pbStack_a58;
  byte *pbStack_a50;
  byte *pbStack_a48;
  byte *pbStack_a40;
  byte *pbStack_a38;
  byte *pbStack_a30;
  undefined4 *puStack_a28;
  undefined8 uStack_a20;
  undefined1 auStack_a18 [12];
  uint uStack_a0c;
  undefined1 aauStack_a08 [155] [16];
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plStack_aa8 = (long *)CONCAT44(plStack_aa8._4_4_,param_2);
  puStack_a80 = (undefined4 *)CONCAT44(puStack_a80._4_4_,param_1);
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  uVar18 = param_4[0x2a];
  uVar21 = *(undefined1 *)((long)param_4 + 0xa9);
  *(undefined1 (*) [16])(param_3 + 2) = (undefined1  [16])0x0;
  *(undefined1 *)(param_3 + 6) = 0;
  *(undefined1 (*) [16])(param_3 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_3 + 0x39) = (undefined1  [16])0x0;
  uStack_a74 = param_6;
  piStack_a68 = param_7;
  func_0x0d88e390(param_3 + 0x14,param_4 + 0x7a);
  func_0x0d88e390(param_3 + 0x1c,&DAT_0f72b850);
  *(char *)(param_3 + 0x24) = (char)uVar18;
  *(undefined1 *)((long)param_3 + 0x91) = uVar21;
  func_0x0d2009a0(param_3 + 0x26,param_4 + 0x44);
  puStack_a70 = param_3 + 0x4e;
  puStack_a28 = param_3 + 0x26;
  func_0x0491cee0(puStack_a70,param_4 + 0x6c);
  func_0x0491cee0(param_3 + 0x54,param_4 + 0x72);
  *(char *)(param_3 + 0x5a) = (char)param_4[0x78];
  uStack_a20 = param_3 + 0x5c;
  func_0x0bc259a0(uStack_a20,1);
  *(undefined2 *)(param_3 + 0x98) = 0x100;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 (*) [16])(puVar12 + 1) = (undefined1  [16])0x0;
  *puVar12 = &UNK_0f30ccf0;
  puVar12[6] = 0;
  puVar12[4] = puVar12 + 4;
  puVar12[5] = puVar12 + 4;
  puVar12[3] = &UNK_0ef513e0;
  puVar12[7] = &UNK_0ef51410;
  *(undefined8 **)(param_3 + 0x9a) = puVar12 + 3;
  *(undefined8 **)(param_3 + 0x9c) = puVar12;
  pbVar1 = (byte *)(param_3 + 0x9e);
  if ((*param_5 & 1) == 0) {
    *(undefined8 *)(param_3 + 0xa2) = *(undefined8 *)(param_5 + 0x10);
    uVar17 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)pbVar1 = *(undefined8 *)param_5;
    *(undefined8 *)(param_3 + 0xa0) = uVar17;
  }
  else {
    FUN_0412e5e0(pbVar1,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
  }
  param_3[0xa4] = 10;
  param_3[0xaa] = _DAT_0f5a2780;
  uVar17 = uRam000000000f5a2778;
  *(undefined8 *)(param_3 + 0xa6) = _DAT_0f5a2770;
  *(undefined8 *)(param_3 + 0xa8) = uVar17;
  pbStack_a30 = pbVar1;
  if ((DAT_0f5a2788 & 1) == 0) {
    *(undefined8 *)(param_3 + 0xb0) = _DAT_0f5a2798;
    uVar17 = _DAT_0f5a2790;
    *(ulong *)(param_3 + 0xac) = CONCAT71(uRam000000000f5a2789,DAT_0f5a2788);
    *(undefined8 *)(param_3 + 0xae) = uVar17;
  }
  else {
    FUN_0412e5e0(param_3 + 0xac,_DAT_0f5a2798,_DAT_0f5a2790);
  }
  param_3[0xb2] = 0x891;
  *(undefined1 (*) [16])(param_3 + 0xb4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0xb8) = (undefined1  [16])0x0;
  *(undefined1 *)(param_3 + 0xbc) = 0;
  uVar17 = _DAT_01de623c;
  *(undefined8 *)(param_3 + 0xbd) = _DAT_01de623c;
  uVar7 = _DAT_01de6244;
  param_3[0xbf] = _DAT_01de6244;
  param_3[0xc0] = param_4[0x1d];
  *(undefined1 (*) [16])(param_3 + 0xc2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0xc6) = (undefined1  [16])0x0;
  param_3[0xca] = param_4[0x29];
  param_3[0xcb] = puStack_a80._0_4_;
  param_3[0xcc] = 0;
  param_3[0xcd] = plStack_aa8._0_4_;
  *(undefined8 *)(param_3 + 0xce) = 0x800000000;
  func_0x06cfd9a0(param_3 + 0xd0,1,0x1a,0x34,3,0);
  param_3[0xdc] = param_4[4];
  *(char *)(param_3 + 0xdd) = (char)param_4[5];
  *(char *)((long)param_3 + 0x375) = (char)param_4[3];
  *(undefined2 *)((long)param_3 + 0x376) = 0x100;
  *(undefined1 *)(param_3 + 0xde) = *(undefined1 *)((long)param_4 + 0x97);
  puStack_a80 = param_3 + 0xe0;
  func_0x04863480(puStack_a80,param_4 + 8);
  param_3[0xe4] = 0xffffffff;
  *(undefined1 *)(param_3 + 0xe5) = param_8;
  param_3[0xe6] = param_4[0x19];
  *(char *)(param_3 + 0xe7) = (char)param_4[0x1a];
  param_3[0xe8] = param_4[0x1b];
  *(char *)(param_3 + 0xe9) = (char)param_4[0x1c];
  *(undefined1 *)((long)param_3 + 0x3a5) = *(undefined1 *)((long)param_4 + 0x71);
  param_3[0xea] = param_9;
  cVar10 = func_0x0c9448b0(param_4);
  puStack_a60 = param_3 + 0xec;
  if (cVar10 == '\0') {
    *(undefined1 *)puStack_a60 = 0;
    uVar21 = 0;
  }
  else {
    if ((char)param_4[0x10e] == '\0') {
      uVar17 = func_0x048a88b0();
      func_0x041084d6(&DAT_0f776b18);
      func_0x0d2090b0(param_3 + 0x160);
      FUN_05cf9f90(param_3 + 0x15c);
      plVar14 = *(long **)(param_3 + 0x15a);
      *(undefined8 *)(param_3 + 0x15a) = 0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      if ((*(byte *)(param_3 + 0x150) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0x154),
                           *(ulong *)(param_3 + 0x150) & 0xfffffffffffffffe);
      }
      func_0x06cf79c0(param_3 + 0x146);
      func_0x06cf79c0(plStack_aa8);
      if ((*pbStack_a58 & 1) != 0) goto LAB_0d20a880;
      if ((*pbStack_a50 & 1) != 0) goto LAB_0d20a8a5;
LAB_0d20a777:
      if ((*pbStack_a48 & 1) != 0) goto LAB_0d20a8ca;
LAB_0d20a785:
      if ((*pbStack_a40 & 1) != 0) goto LAB_0d20a8ef;
LAB_0d20a793:
      if ((*pbStack_a38 & 1) != 0) goto LAB_0d20a917;
      do {
        cVar10 = *(char *)(param_3 + 0x10c);
        while( true ) {
          if (cVar10 == '\x01') {
            func_0x048f6240(puStack_a60);
          }
          FUN_04863610(puStack_a80);
          if ((*(byte *)(param_3 + 0xd6) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0xda),
                               *(ulong *)(param_3 + 0xd6) & 0xfffffffffffffffe);
          }
          func_0x0c8f4a90(param_3 + 0xc2);
          func_0x0ee386e0(param_3 + 0xb8);
          func_0x0ee386e0(param_3 + 0xb6);
          if ((*(byte *)(param_3 + 0xac) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0xb0),
                               *(ulong *)(param_3 + 0xac) & 0xfffffffffffffffe);
          }
          if ((*pbStack_a30 & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0xa2),
                               *(ulong *)(param_3 + 0x9e) & 0xfffffffffffffffe);
          }
          func_0x048f6210(param_3 + 0x98);
          func_0x048f60c0(puStack_a70);
          func_0x0d200c80(puStack_a28);
          param_3 = param_3 + 2;
          func_0x0d209130(param_3);
          func_0x0eee2d70(uVar17);
LAB_0d20a880:
          thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0x138),
                             *(ulong *)(param_3 + 0x134) & 0xfffffffffffffffe);
          if ((*pbStack_a50 & 1) == 0) goto LAB_0d20a777;
LAB_0d20a8a5:
          thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 300),
                             *(ulong *)(param_3 + 0x128) & 0xfffffffffffffffe);
          if ((*pbStack_a48 & 1) == 0) goto LAB_0d20a785;
LAB_0d20a8ca:
          thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0x126),
                             *(ulong *)(param_3 + 0x122) & 0xfffffffffffffffe);
          if ((*pbStack_a40 & 1) == 0) goto LAB_0d20a793;
LAB_0d20a8ef:
          thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0x120),
                             *(ulong *)(param_3 + 0x11c) & 0xfffffffffffffffe);
          if ((*pbStack_a38 & 1) == 0) break;
LAB_0d20a917:
          thunk_FUN_0ee326a0(*(undefined8 *)(param_3 + 0x11a),
                             *(ulong *)(param_3 + 0x116) & 0xfffffffffffffffe);
          cVar10 = *(char *)(param_3 + 0x10c);
        }
      } while( true );
    }
    uVar21 = 1;
    func_0x0491d030(puStack_a60,param_4 + 0xee);
  }
  *(undefined1 *)(param_3 + 0x10c) = uVar21;
  *(char *)(param_3 + 0x10e) = (char)param_4[0x1f];
  *(undefined1 *)((long)param_3 + 0x439) = 0;
  *(char *)((long)param_3 + 0x43a) = (char)param_4[0x22];
  uVar21 = *(undefined1 *)((long)param_4 + 0x89);
  *(undefined1 *)((long)param_3 + 0x43b) = uVar21;
  *(undefined1 *)(param_3 + 0x10f) = uVar21;
  uVar21 = *(undefined1 *)((long)param_4 + 0x8a);
  *(undefined1 *)((long)param_3 + 0x43d) = uVar21;
  *(undefined1 *)((long)param_3 + 0x43e) = uVar21;
  uVar22 = (undefined4)*(undefined8 *)(param_4 + 0x23);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x23) >> 0x20);
  param_3[0x110] = uVar22;
  param_3[0x111] = uVar22;
  param_3[0x112] = uVar23;
  param_3[0x113] = uVar23;
  *(undefined1 *)(param_3 + 0x114) = *(undefined1 *)((long)param_4 + 0x96);
  *(uint *)((long)param_3 + 0x451) = param_4[0x26];
  *(char *)((long)param_3 + 0x455) = (char)param_4[0x27];
  *(undefined1 *)((long)param_3 + 0x456) = *(undefined1 *)((long)param_4 + 0x9d);
  pbStack_a38 = (byte *)(param_3 + 0x116);
  if ((param_4[0x82] & 1) == 0) {
    *(undefined8 *)(param_3 + 0x11a) = *(undefined8 *)(param_4 + 0x86);
    uVar5 = *(undefined8 *)(param_4 + 0x84);
    *(undefined8 *)pbStack_a38 = *(undefined8 *)(param_4 + 0x82);
    *(undefined8 *)(param_3 + 0x118) = uVar5;
  }
  else {
    FUN_0412e5e0(pbStack_a38,*(undefined8 *)(param_4 + 0x86),*(undefined8 *)(param_4 + 0x84));
  }
  pbStack_a40 = (byte *)(param_3 + 0x11c);
  if ((param_4[0x88] & 1) == 0) {
    *(undefined8 *)(param_3 + 0x120) = *(undefined8 *)(param_4 + 0x8c);
    uVar5 = *(undefined8 *)(param_4 + 0x8a);
    *(undefined8 *)pbStack_a40 = *(undefined8 *)(param_4 + 0x88);
    *(undefined8 *)(param_3 + 0x11e) = uVar5;
  }
  else {
    FUN_0412e5e0(pbStack_a40,*(undefined8 *)(param_4 + 0x8c),*(undefined8 *)(param_4 + 0x8a));
  }
  pbStack_a48 = (byte *)(param_3 + 0x122);
  if ((param_4[0x8e] & 1) == 0) {
    *(undefined8 *)(param_3 + 0x126) = *(undefined8 *)(param_4 + 0x92);
    uVar5 = *(undefined8 *)(param_4 + 0x90);
    *(undefined8 *)pbStack_a48 = *(undefined8 *)(param_4 + 0x8e);
    *(undefined8 *)(param_3 + 0x124) = uVar5;
  }
  else {
    FUN_0412e5e0(pbStack_a48,*(undefined8 *)(param_4 + 0x92),*(undefined8 *)(param_4 + 0x90));
  }
  pbStack_a50 = (byte *)(param_3 + 0x128);
  if ((param_4[0x94] & 1) == 0) {
    *(undefined8 *)(param_3 + 300) = *(undefined8 *)(param_4 + 0x98);
    uVar5 = *(undefined8 *)(param_4 + 0x96);
    *(undefined8 *)pbStack_a50 = *(undefined8 *)(param_4 + 0x94);
    *(undefined8 *)(param_3 + 0x12a) = uVar5;
  }
  else {
    FUN_0412e5e0(pbStack_a50,*(undefined8 *)(param_4 + 0x98),*(undefined8 *)(param_4 + 0x96));
  }
  *(undefined1 *)(param_3 + 0x12e) = *(undefined1 *)((long)param_4 + 0x9e);
  *(char *)((long)param_3 + 0x4b9) = (char)param_4[0x28];
  *(undefined1 *)((long)param_3 + 0x4ba) = 0;
  *(undefined1 *)((long)param_3 + 0x4bb) = *(undefined1 *)((long)param_4 + 0xa1);
  *(undefined2 *)(param_3 + 0x12f) = 0;
  *(undefined4 *)((long)param_3 + 0x4be) = *(undefined4 *)((long)param_4 + 0xaa);
  *(undefined1 *)((long)param_3 + 0x4c2) = 0;
  *(undefined1 *)((long)param_3 + 0x4c3) = *(undefined1 *)((long)param_4 + 0x31);
  *(short *)(param_3 + 0x132) = (short)param_4[0xe];
  pbStack_a58 = (byte *)(param_3 + 0x134);
  if ((param_4[0x10] & 1) == 0) {
    *(undefined8 *)(param_3 + 0x138) = *(undefined8 *)(param_4 + 0x14);
    uVar5 = *(undefined8 *)(param_4 + 0x12);
    *(undefined8 *)pbStack_a58 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_3 + 0x136) = uVar5;
  }
  else {
    FUN_0412e5e0(pbStack_a58,*(undefined8 *)(param_4 + 0x14),*(undefined8 *)(param_4 + 0x12));
  }
  param_3[0x13a] = param_4[0x16];
  plStack_aa8 = (long *)(param_3 + 0x13c);
  *(undefined1 (*) [16])(param_3 + 0x13c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x140) = (undefined1  [16])0x0;
  param_3[0x144] = 0x3f800000;
  *(undefined1 (*) [16])(param_3 + 0x146) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x14a) = (undefined1  [16])0x0;
  param_3[0x14e] = 0x3f800000;
  *(undefined1 *)(param_3 + 0x157) = 0;
  *(undefined1 (*) [16])(param_3 + 0x150) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_3 + 0x549) = (undefined1  [16])0x0;
  *(char *)(param_3 + 0x158) = (char)param_4[0xac];
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
  puVar12[1] = puVar12 + 1;
  puVar12[2] = puVar12 + 1;
  *puVar12 = &UNK_0f02e910;
  puVar12[4] = &UNK_0f02e940;
  *(undefined8 **)(param_3 + 0x15a) = puVar12;
  *(undefined1 (*) [16])(param_3 + 0x15c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x164) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_3 + 0x168) = (undefined1  [16])0x0;
  param_3[0x16c] = 0;
  func_0x0d208450(param_3);
  func_0x0d20a940(param_3,param_4 + 0x9a);
  func_0x0d208b60(param_3,*(undefined8 *)param_4);
  auStack_a18._8_4_ = uVar7;
  auStack_a18._0_8_ = uVar17;
  aauStack_a08[0]._8_4_ = 6;
  apuStack_aa0[0] = (undefined8 *)0xf71d600;
  lVar13 = func_0x09be9cc0(plStack_aa8,0xf71d600,&UNK_01563a4f,apuStack_aa0,&uStack_aa9);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (aauStack_a08[0]._8_4_ != 0xffffffff) goto LAB_0d209a1a;
  }
  else {
    if (aauStack_a08[0]._8_4_ == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(apuStack_aa0);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209a1a:
      apuStack_aa0[0] = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,(undefined8 *)(lVar13 + 0x38),auStack_a18);
    }
    if ((ulong)(uint)aauStack_a08[0]._8_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,auStack_a18);
    }
  }
  auStack_a18._0_4_ = param_4[0x2c];
  aauStack_a08[0]._8_4_ = 0;
  apuStack_aa0[0] = (undefined8 *)0xf71d748;
  lVar13 = func_0x09be9cc0(plStack_aa8,0xf71d748,&UNK_01563a4f,apuStack_aa0,&uStack_aa9);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (aauStack_a08[0]._8_4_ != 0xffffffff) goto LAB_0d209adf;
  }
  else {
    if (aauStack_a08[0]._8_4_ == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(apuStack_aa0);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209adf:
      apuStack_aa0[0] = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,(undefined8 *)(lVar13 + 0x38),auStack_a18);
    }
    if ((ulong)(uint)aauStack_a08[0]._8_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,auStack_a18);
    }
  }
  auStack_a18._0_4_ = param_4[0x2d];
  aauStack_a08[0]._8_4_ = 0;
  apuStack_aa0[0] = (undefined8 *)0xf71d770;
  lVar13 = func_0x09be9cc0(plStack_aa8,0xf71d770,&UNK_01563a4f,apuStack_aa0,&uStack_aa9);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (aauStack_a08[0]._8_4_ != 0xffffffff) goto LAB_0d209ba4;
  }
  else {
    if (aauStack_a08[0]._8_4_ == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(apuStack_aa0);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209ba4:
      apuStack_aa0[0] = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,(undefined8 *)(lVar13 + 0x38),auStack_a18);
    }
    if ((ulong)(uint)aauStack_a08[0]._8_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,auStack_a18);
    }
  }
  auStack_a18[0] = (char)param_4[0x25];
  aauStack_a08[0]._8_4_ = 9;
  apuStack_aa0[0] = (undefined8 *)0xf71d560;
  lVar13 = func_0x09be9cc0(plStack_aa8,0xf71d560,&UNK_01563a4f,apuStack_aa0,&uStack_aa9);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (aauStack_a08[0]._8_4_ != 0xffffffff) goto LAB_0d209c6a;
  }
  else {
    if (aauStack_a08[0]._8_4_ == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(apuStack_aa0);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209c6a:
      apuStack_aa0[0] = (undefined8 *)(lVar13 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,(undefined8 *)(lVar13 + 0x38),auStack_a18);
    }
    if ((ulong)(uint)aauStack_a08[0]._8_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)aauStack_a08[0]._8_4_ * 8))
                (apuStack_aa0,auStack_a18);
    }
  }
  func_0x0d208ea0(param_3,param_4[2]);
  func_0x0d208c60(param_3,uStack_a74);
  func_0x0d208dd0(param_3,(char)param_4[0xc]);
  _auStack_a18 = (undefined1  [16])0x0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = aauStack_a08[0]._8_8_;
  aauStack_a08[0] = auVar6 << 0x40;
  func_0x0d208fa0(param_3,auStack_a18);
  aauStack_a08[0] = (undefined1  [16])0x0;
  auStack_a18._0_8_ = &UNK_0f47e0b0;
  unique0x1000174e = aauStack_a08;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *puVar12 = &UNK_0f47e0b0;
  puVar12[1] = stack0xfffffffffffff5f0;
  puVar12[2] = aauStack_a08[0]._0_8_;
  puVar12[3] = aauStack_a08[0]._8_8_;
  if (aauStack_a08[0]._8_8_ == 0) {
    puVar12[1] = puVar12 + 2;
  }
  else {
    *(undefined8 **)(aauStack_a08[0]._0_8_ + 0x10) = puVar12 + 2;
    aauStack_a08[0] = (undefined1  [16])0x0;
    aauStack_a08[0]._0_8_ = 0;
    unique0x1000173e = aauStack_a08;
  }
  auStack_a18._0_8_ = &UNK_0f47e0b0;
  func_0x0d6c9500(auStack_a18 + 8,aauStack_a08[0]._0_8_);
  uStack_a88 = 8;
  auStack_a18._0_8_ = 0xf71d5d8;
  apuStack_aa0[0] = puVar12;
  lVar13 = func_0x09be9cc0(plStack_aa8,0xf71d5d8,&UNK_01563a4f,auStack_a18,&uStack_aa9);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (uStack_a88 != 0xffffffff) goto LAB_0d209e2e;
  }
  else {
    if (uStack_a88 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(auStack_a18);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209e2e:
      auStack_a18._0_8_ = lVar13 + 0x38;
      (**(code **)(&UNK_0f45a900 + (ulong)uStack_a88 * 8))(auStack_a18,lVar13 + 0x38,apuStack_aa0);
    }
    if ((ulong)uStack_a88 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)uStack_a88 * 8))(auStack_a18,apuStack_aa0);
    }
  }
  aauStack_a08[0] = (undefined1  [16])0x0;
  auStack_a18._0_8_ = &UNK_0f47e0b0;
  unique0x10001776 = aauStack_a08;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  piVar8 = piStack_a68;
  *puVar12 = &UNK_0f47e0b0;
  puVar12[1] = stack0xfffffffffffff5f0;
  puVar12[2] = aauStack_a08[0]._0_8_;
  puVar12[3] = aauStack_a08[0]._8_8_;
  if (aauStack_a08[0]._8_8_ == 0) {
    puVar12[1] = puVar12 + 2;
  }
  else {
    *(undefined8 **)(aauStack_a08[0]._0_8_ + 0x10) = puVar12 + 2;
    aauStack_a08[0] = (undefined1  [16])0x0;
    aauStack_a08[0]._0_8_ = 0;
    unique0x10001766 = aauStack_a08;
  }
  auStack_a18._0_8_ = &UNK_0f47e0b0;
  func_0x0d6c9500(auStack_a18 + 8,aauStack_a08[0]._0_8_);
  uStack_a88 = 8;
  auStack_a18._0_8_ = 0xf71d628;
  apuStack_aa0[0] = puVar12;
  lVar13 = func_0x09be9cc0(plStack_aa8,0xf71d628,&UNK_01563a4f,auStack_a18,&uStack_aa9);
  if ((ulong)*(uint *)(lVar13 + 0x50) == 0xffffffff) {
    if (uStack_a88 != 0xffffffff) goto LAB_0d209f9a;
  }
  else {
    if (uStack_a88 == 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar13 + 0x50) * 8))(auStack_a18);
      *(undefined4 *)(lVar13 + 0x50) = 0xffffffff;
    }
    else {
LAB_0d209f9a:
      auStack_a18._0_8_ = lVar13 + 0x38;
      (**(code **)(&UNK_0f45a900 + (ulong)uStack_a88 * 8))(auStack_a18,lVar13 + 0x38,apuStack_aa0);
    }
    if ((ulong)uStack_a88 != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)uStack_a88 * 8))(auStack_a18,apuStack_aa0);
    }
  }
  func_0x0d20aaa0(param_3,param_4 + 0xa0);
  cVar10 = func_0x04864260(puStack_a80);
  if (cVar10 == '\0') goto LAB_0d20a24b;
  func_0x0d3a5d30(auStack_a18,param_3);
  plVar14 = (long *)func_0x0d227700(plStack_aa8,0xf71d5b0);
  if (plVar14 != (long *)0x0) {
    lVar13 = *plVar14;
    uVar19 = plVar14[1];
    uVar2 = *(ulong *)(param_3 + 0x13e);
    uVar15 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
    uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar15 >> 0x38 < 2) {
      uVar19 = uVar19 & uVar2 - 1;
    }
    else if (uVar2 <= uVar19) {
      if ((uVar19 | uVar2) >> 0x20 == 0) {
        uVar19 = (uVar19 & 0xffffffff) % (uVar2 & 0xffffffff);
      }
      else {
        uVar19 = uVar19 % uVar2;
      }
    }
    lVar3 = *plStack_aa8;
    plVar9 = *(long **)(lVar3 + uVar19 * 8);
    do {
      plVar16 = plVar9;
      plVar9 = (long *)*plVar16;
    } while ((long *)*plVar16 != plVar14);
    bVar4 = (byte)(uVar15 >> 0x38);
    if (plVar16 == (long *)(param_3 + 0x140)) {
LAB_0d20a131:
      if (lVar13 == 0) {
LAB_0d20a173:
        *(undefined8 *)(lVar3 + uVar19 * 8) = 0;
        lVar13 = *plVar14;
        goto LAB_0d20a17e;
      }
      uVar15 = *(ulong *)(lVar13 + 8);
      if (bVar4 < 2) {
        uVar20 = uVar2 - 1 & uVar15;
      }
      else {
        uVar20 = uVar15;
        if (uVar2 <= uVar15) {
          if ((uVar15 | uVar2) >> 0x20 == 0) {
            uVar20 = (uVar15 & 0xffffffff) % (uVar2 & 0xffffffff);
          }
          else {
            uVar20 = uVar15 % uVar2;
          }
        }
      }
      if (uVar20 != uVar19) goto LAB_0d20a173;
LAB_0d20a187:
      if (bVar4 < 2) {
        uVar15 = uVar15 & uVar2 - 1;
      }
      else if (uVar2 <= uVar15) {
        if ((uVar15 | uVar2) >> 0x20 == 0) {
          uVar15 = (uVar15 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 % uVar2;
        }
      }
      if (uVar15 != uVar19) {
        *(long **)(lVar3 + uVar15 * 8) = plVar16;
        lVar13 = *plVar14;
      }
    }
    else {
      uVar15 = plVar16[1];
      if (bVar4 < 2) {
        uVar15 = uVar15 & uVar2 - 1;
      }
      else if (uVar2 <= uVar15) {
        if ((uVar15 | uVar2) >> 0x20 == 0) {
          uVar15 = (uVar15 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar15 = uVar15 % uVar2;
        }
      }
      if (uVar15 != uVar19) goto LAB_0d20a131;
LAB_0d20a17e:
      if (lVar13 != 0) {
        uVar15 = *(ulong *)(lVar13 + 8);
        goto LAB_0d20a187;
      }
      lVar13 = 0;
    }
    *plVar16 = lVar13;
    *plVar14 = 0;
    *(long *)(param_3 + 0x142) = *(long *)(param_3 + 0x142) + -1;
    if ((ulong)*(uint *)(plVar14 + 10) != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(plVar14 + 10) * 8))(apuStack_aa0,plVar14 + 7);
    }
    *(undefined4 *)(plVar14 + 10) = 0xffffffff;
    if ((*(byte *)(plVar14 + 3) & 1) != 0) {
      thunk_FUN_0ee326a0(plVar14[5],plVar14[3] & 0xfffffffffffffffe);
    }
    thunk_FUN_0ee326a0(plVar14,0x58);
  }
  func_0x04863740(puStack_a80,auStack_a18);
  FUN_04863610(auStack_a18);
LAB_0d20a24b:
  if (param_3[0xea] != 0) {
    *(undefined1 *)((long)param_3 + 0x452) = 1;
  }
  if (((!SBORROW4(0,*piVar8)) || (!SBORROW4(0,piVar8[1]))) || (!SBORROW4(0,piVar8[2]))) {
    func_0x0d20ac00(param_3,piVar8);
  }
  uVar18 = *param_4;
  uStack_38 = 0x100000000000000;
  auStack_a18._8_4_ = uVar18;
  auStack_a18._0_8_ = &UNK_0f5356d0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_a0c = uVar18;
  lVar13 = 5;
  while( true ) {
    uVar19 = ((ulong)((uVar18 >> 0x1e ^ uVar18) * 0x6c078965) + lVar13) - 4;
    uVar18 = (uint)uVar19;
    *(uint *)(auStack_a18 + lVar13 * 4 + -4) = uVar18;
    if (lVar13 == 0x191) break;
    uVar18 = (((uint)(uVar19 >> 0x1e) & 3 ^ uVar18) * 0x6c078965 + (int)lVar13) - 3;
    *(uint *)(auStack_a18 + lVar13 * 4) = uVar18;
    lVar13 = lVar13 + 2;
  }
  uStack_4c = 0x18e00000270;
  iVar11 = func_0x0ee4a260(auStack_a18,0x29040);
  param_3[0xcc] = iVar11 + 12000;
  iVar11 = (**(code **)(auStack_a18._0_8_ + 0x18))(auStack_a18,0x29040);
  param_3[0xce] = iVar11 + 12000;
  *(short *)(param_3 + 0x98) = (short)param_4[0x2e];
  uVar17 = *(undefined8 *)(param_4 + 0x30);
  uVar5 = *(undefined8 *)(param_4 + 0x32);
  if (*(long *)(param_4 + 0x32) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(param_4 + 0x32) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = *(long **)(param_3 + 0x9c);
  *(undefined8 *)(param_3 + 0x9a) = uVar17;
  *(undefined8 *)(param_3 + 0x9c) = uVar5;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar9 = plVar14 + 1;
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x0bc26b90(uStack_a20,(int)*(char *)((long)param_3 + 0x261));
  *(undefined1 *)((long)param_3 + 2) = *(undefined1 *)((long)param_4 + 0x7d);
  if ((DAT_0f776b18 == '\0') && (iVar11 = func_0x04108328(&DAT_0f776b18), iVar11 != 0)) {
    func_0x0edf5500(0xf776968);
    func_0x0eee2f40(&SUB_0edf6010,0xf776968,0xf53dab8);
    func_0x0410844d(&DAT_0f776b18);
  }
  func_0x0ee32f20(0xf7769b0,param_3 + 0xb4,1);
  return;
}


