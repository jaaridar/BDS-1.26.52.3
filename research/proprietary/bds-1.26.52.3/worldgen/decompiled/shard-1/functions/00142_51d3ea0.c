/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52d3ea0 (ELF vaddr 0x51d3ea0)
 * Label: string:minecraft:fancy_oak_tree_feature
 * Body:  [[052d3ea0, 052d409a] [052d7661, 052d7683]]
 * Ghidra: FUN_052d3ea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052d3ea0(undefined8 *param_1,uint param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puStack_a68;
  ulong uStack_a60;
  undefined4 *puStack_a58;
  ulong uStack_a48;
  ulong uStack_a40;
  undefined4 *puStack_a38;
  undefined8 *puStack_a30;
  undefined8 *puStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  long *plStack_9f8;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined2 *)(param_1 + 1) = 0x101;
  *param_1 = &UNK_0efa02e0;
  *(undefined4 *)(param_1 + 2) = 1;
  uStack_a20 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_a18 = &UNK_0f5356d0;
  uStack_38 = 0x100000000000000;
  uStack_a10 = (undefined8 *)0x92900000929;
  uStack_44 = 0;
  uStack_40 = 0;
  uVar10 = 0x929;
  lVar5 = 5;
  while( true ) {
    uVar11 = ((ulong)((uVar10 >> 0x1e ^ uVar10) * 0x6c078965) + lVar5) - 4;
    uVar10 = (uint)uVar11;
    *(uint *)((long)&uStack_a20 + lVar5 * 4 + 4) = uVar10;
    if (lVar5 == 0x191) break;
    uVar10 = (((uint)(uVar11 >> 0x1e) & 3 ^ uVar10) * 0x6c078965 + (int)lVar5) - 3;
    *(uint *)((long)&uStack_a18 + lVar5 * 4) = uVar10;
    lVar5 = lVar5 + 2;
  }
  uStack_4c = 0x18e00000270;
  func_0x0d3430a0(param_1 + 2,&uStack_a18,0);
  puStack_a58 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puStack_a58 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar1 = _UNK_01495768;
  puStack_a68 = (undefined *)0x39;
  uStack_a60 = 0x30;
  *(undefined8 *)(puStack_a58 + 8) = _DAT_01495760;
  *(undefined8 *)(puStack_a58 + 10) = uVar1;
  uVar1 = _UNK_01495758;
  *(undefined8 *)(puStack_a58 + 4) = _DAT_01495750;
  *(undefined8 *)(puStack_a58 + 6) = uVar1;
  uVar4 = _UNK_0149574c;
  uVar3 = _UNK_01495748;
  uVar2 = _UNK_01495744;
  *puStack_a58 = _DAT_01495740;
  puStack_a58[1] = uVar2;
  puStack_a58[2] = uVar3;
  puStack_a58[3] = uVar4;
  *(undefined1 *)(puStack_a58 + 0xc) = 0;
  func_0x0d3a0d80(&uStack_a18,param_3,&puStack_a68);
  if ((char)uStack_a10 == '\x01') {
    param_1[9] = uStack_a08;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_a18;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_a18._4_4_;
    *(undefined4 *)(param_1 + 8) = (undefined4)uStack_a10;
    *(undefined4 *)((long)param_1 + 0x44) = uStack_a10._4_4_;
  }
  else {
    func_0x0d39feb0(param_1 + 7,param_3,&puStack_a68);
  }
  if (((ulong)puStack_a68 & 1) != 0) {
    func_0x0412a280(puStack_a58,(ulong)puStack_a68 & 0xfffffffffffffffe);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  if (0x10 < param_2) {
    return;
  }
  puStack_a28 = param_1 + 0xb;
  puVar8 = param_1 + 0xe;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 10) = 0x41f00000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_011d44d0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x20;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_011d44c8;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_011d44c4;
    uVar3 = _UNK_011d44c0;
    uVar2 = _UNK_011d44bc;
    *puStack_a38 = _UNK_011d44b8;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined1 *)(puStack_a38 + 8) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar1 = _UNK_01222a45;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1d;
    *(ulong *)((long)puVar6 + 0xd) = CONCAT53(_UNK_01222a40,_UNK_01222a3d);
    *(undefined8 *)((long)puVar6 + 0x15) = uVar1;
    uVar4 = _UNK_01222a3c;
    uVar3 = _UNK_01222a38;
    uVar2 = _UNK_01222a34;
    *puVar6 = _UNK_01222a30;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x1d) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_014ae808;
    uStack_a48 = 0x29;
    uStack_a40 = 0x22;
    *(undefined8 *)(puVar6 + 4) = _UNK_014ae800;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_014ae7fc;
    uVar3 = _UNK_014ae7f8;
    uVar2 = _UNK_014ae7f4;
    *puVar6 = _UNK_014ae7f0;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined2 *)(puVar6 + 8) = 0x6572;
    *(undefined1 *)((long)puVar6 + 0x22) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    uVar1 = _UNK_01495768;
    uStack_a48 = 0x39;
    uStack_a40 = 0x30;
    *(undefined8 *)(puVar6 + 8) = _DAT_01495760;
    *(undefined8 *)(puVar6 + 10) = uVar1;
    uVar1 = _UNK_01495758;
    *(undefined8 *)(puVar6 + 4) = _DAT_01495750;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0149574c;
    uVar3 = _UNK_01495748;
    uVar2 = _UNK_01495744;
    *puVar6 = _DAT_01495740;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)(puVar6 + 0xc) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa1d60;
    break;
  case 1:
    *(undefined4 *)(param_1 + 10) = 0x41200000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_013c5591;
    uStack_a48 = 0x29;
    uStack_a40 = 0x23;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_013c5589;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_013c5585;
    uVar3 = _UNK_013c5581;
    uVar2 = _UNK_013c557d;
    *puStack_a38 = _UNK_013c5579;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined4 *)((long)puStack_a38 + 0x1f) = 0x65727574;
    *(undefined1 *)((long)puStack_a38 + 0x23) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar1 = _UNK_0119d104;
    uStack_a48 = 0x31;
    uStack_a40 = 0x29;
    *(ulong *)((long)puVar6 + 0x19) = CONCAT17(UNK_0119d103,_UNK_0119d0fc);
    *(undefined8 *)((long)puVar6 + 0x21) = uVar1;
    uVar1 = CONCAT71(_UNK_0119d0fc,UNK_0119d0fb);
    *(undefined8 *)(puVar6 + 4) = _UNK_0119d0f3;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0119d0ef;
    uVar3 = _UNK_0119d0eb;
    uVar2 = _UNK_0119d0e7;
    *puVar6 = _UNK_0119d0e3;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x29) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa1de0;
    break;
  case 2:
    *(undefined4 *)(param_1 + 10) = 0x41200000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_013c5591;
    uStack_a48 = 0x29;
    uStack_a40 = 0x23;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_013c5589;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_013c5585;
    uVar3 = _UNK_013c5581;
    uVar2 = _UNK_013c557d;
    *puStack_a38 = _UNK_013c5579;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined4 *)((long)puStack_a38 + 0x1f) = 0x65727574;
    *(undefined1 *)((long)puStack_a38 + 0x23) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar1 = _UNK_01222a6f;
    uStack_a48 = 0x31;
    uStack_a40 = 0x29;
    *(ulong *)((long)puVar6 + 0x19) = CONCAT17(UNK_01222a6e,_UNK_01222a67);
    *(undefined8 *)((long)puVar6 + 0x21) = uVar1;
    uVar1 = CONCAT71(_UNK_01222a67,UNK_01222a66);
    *(undefined8 *)(puVar6 + 4) = _UNK_01222a5e;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01222a5a;
    uVar3 = _UNK_01222a56;
    uVar2 = _UNK_01222a52;
    *puVar6 = _UNK_01222a4e;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x29) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa1e60;
    break;
  case 3:
    *(undefined4 *)(param_1 + 10) = 0x40400000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_01447ee0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_01447ed8;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_01447ed4;
    uVar3 = _UNK_01447ed0;
    uVar2 = _UNK_01447ecc;
    *puStack_a38 = _UNK_01447ec8;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    puStack_a38[8] = 0x65727574;
    *(undefined1 *)(puStack_a38 + 9) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_011d44d0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x20;
    *(undefined8 *)(puVar6 + 4) = _UNK_011d44c8;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_011d44c4;
    uVar3 = _UNK_011d44c0;
    uVar2 = _UNK_011d44bc;
    *puVar6 = _UNK_011d44b8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)(puVar6 + 8) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_0135c34f;
    uStack_a48 = 0x29;
    uStack_a40 = 0x21;
    *(undefined8 *)(puVar6 + 4) = _UNK_0135c347;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0135c343;
    uVar3 = _UNK_0135c33f;
    uVar2 = _UNK_0135c33b;
    *puVar6 = _UNK_0135c337;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined2 *)(puVar6 + 8) = 0x65;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa1ee0;
    break;
  case 4:
    *(undefined4 *)(param_1 + 10) = 0x40c00000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_013c5591;
    uStack_a48 = 0x29;
    uStack_a40 = 0x23;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_013c5589;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_013c5585;
    uVar3 = _UNK_013c5581;
    uVar2 = _UNK_013c557d;
    *puStack_a38 = _UNK_013c5579;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined4 *)((long)puStack_a38 + 0x1f) = 0x65727574;
    *(undefined1 *)((long)puStack_a38 + 0x23) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    uVar1 = _UNK_0145f52a;
    uStack_a48 = 0x39;
    uStack_a40 = 0x36;
    *(undefined8 *)(puVar6 + 8) = _UNK_0145f522;
    *(undefined8 *)(puVar6 + 10) = uVar1;
    uVar1 = _UNK_0145f51a;
    *(undefined8 *)(puVar6 + 4) = _UNK_0145f512;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0145f50e;
    uVar3 = _UNK_0145f50a;
    uVar2 = _UNK_0145f506;
    *puVar6 = _UNK_0145f502;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined8 *)((long)puVar6 + 0x2e) = 0x657275746165665f;
    *(undefined1 *)((long)puVar6 + 0x36) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    uVar1 = _UNK_012f1e69;
    uStack_a48 = 0x39;
    uStack_a40 = 0x30;
    *(undefined8 *)(puVar6 + 8) = _UNK_012f1e61;
    *(undefined8 *)(puVar6 + 10) = uVar1;
    uVar1 = _UNK_012f1e59;
    *(undefined8 *)(puVar6 + 4) = _UNK_012f1e51;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_012f1e4d;
    uVar3 = _UNK_012f1e49;
    uVar2 = _UNK_012f1e45;
    *puVar6 = _UNK_012f1e41;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)(puVar6 + 0xc) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa1f60;
    break;
  case 5:
    *(undefined4 *)(param_1 + 10) = 0x3c23d70a;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_012d7587;
    uStack_a48 = 0x31;
    uStack_a40 = 0x2d;
    *(ulong *)((long)puStack_a38 + 0x1d) = CONCAT53(_UNK_012d7582,_UNK_012d757f);
    *(undefined8 *)((long)puStack_a38 + 0x25) = uVar1;
    uVar1 = CONCAT35(_UNK_012d757f,_UNK_012d757a);
    *(undefined8 *)(puStack_a38 + 4) = _UNK_012d7572;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_012d756e;
    uVar3 = _UNK_012d756a;
    uVar2 = _UNK_012d7566;
    *puStack_a38 = _UNK_012d7562;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined1 *)((long)puStack_a38 + 0x2d) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uVar1 = _UNK_0130a8b2;
    uStack_a48 = 0x31;
    uStack_a40 = 0x2f;
    *(ulong *)((long)puVar6 + 0x1f) = CONCAT71(_UNK_0130a8ab,UNK_0130a8aa);
    *(undefined8 *)((long)puVar6 + 0x27) = uVar1;
    uVar1 = CONCAT17(UNK_0130a8aa,_UNK_0130a8a3);
    *(undefined8 *)(puVar6 + 4) = _UNK_0130a89b;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0130a897;
    uVar3 = _UNK_0130a893;
    uVar2 = _UNK_0130a88f;
    *puVar6 = _UNK_0130a88b;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x2f) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa1fe0;
    break;
  case 6:
    *(undefined4 *)(param_1 + 10) = 0x41200000;
    uVar11 = 0x23;
    if (param_4 != 0) {
      uVar11 = 0x34;
    }
    uVar13 = (uVar11 | 7) + 1;
    puStack_a30 = puVar8;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
    if (lVar5 == 0) {
      func_0x0eec74c0(uVar13,0);
    }
    puVar12 = &UNK_013c5579;
    if (param_4 != 0) {
      puVar12 = &UNK_014c98b4;
    }
    uStack_a48 = uVar13 | 1;
    uStack_a40 = uVar11;
    puStack_a38 = (undefined4 *)lVar5;
    func_0x0eee2f00(lVar5,puVar12,uVar11);
    *(undefined1 *)(lVar5 + uVar11) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar8 = (undefined8 *)param_1[0xc];
    if (puVar8 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar8 + 1) = 1;
        *puVar8 = puStack_a68;
        puVar8[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar8 = puVar8 + 3;
    }
    else {
      puVar8 = (undefined8 *)func_0x052e7b30(puStack_a28,&puStack_a68);
    }
    param_1[0xc] = puVar8;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uVar11 = (ulong)param_4 * 8 + 0x38;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
    if (lVar5 == 0) {
      func_0x0eec74c0(uVar11,0);
    }
    uVar13 = (ulong)param_4 * 8 | 0x36;
    puVar12 = &UNK_0145f502;
    if (param_4 != 0) {
      puVar12 = &UNK_013ac9a3;
    }
    uStack_a48 = uVar11 | 1;
    uStack_a40 = uVar13;
    puStack_a38 = (undefined4 *)lVar5;
    func_0x0eee2f00(lVar5,puVar12,uVar13);
    *(undefined1 *)(lVar5 + uVar13) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar8 = (undefined8 *)param_1[0xc];
    if (puVar8 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar8 + 1) = 1;
        *puVar8 = puStack_a68;
        puVar8[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar8 = puVar8 + 3;
    }
    else {
      puVar8 = (undefined8 *)func_0x052e7b30(puStack_a28,&puStack_a68);
    }
    param_1[0xc] = puVar8;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uVar11 = 0x21;
    if (param_4 != 0) {
      uVar11 = 0x32;
    }
    uVar13 = (uVar11 | 7) + 1;
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(uVar13,0);
    }
    puVar12 = &UNK_0135c337;
    if (param_4 != 0) {
      puVar12 = &UNK_01412da9;
    }
    uStack_a48 = uVar13 | 1;
    uStack_a40 = uVar11;
    puStack_a38 = puVar6;
    func_0x0eee2f00(puVar6,puVar12,uVar11);
    puVar8 = puStack_a28;
    puVar7 = puStack_a30;
    *(undefined1 *)((long)puVar6 + uVar11) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar8,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa2060;
    goto code_r0x052d7358;
  case 7:
    *(undefined4 *)(param_1 + 10) = 0x3dcccccd;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_01447ee0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_01447ed8;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_01447ed4;
    uVar3 = _UNK_01447ed0;
    uVar2 = _UNK_01447ecc;
    *puStack_a38 = _UNK_01447ec8;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    puStack_a38[8] = 0x65727574;
    *(undefined1 *)(puStack_a38 + 9) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa20e0;
    break;
  case 8:
    *(undefined4 *)(param_1 + 10) = 0x42480000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_011d44d0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x20;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_011d44c8;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_011d44c4;
    uVar3 = _UNK_011d44c0;
    uVar2 = _UNK_011d44bc;
    *puStack_a38 = _UNK_011d44b8;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined1 *)(puStack_a38 + 8) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar1 = _UNK_01222a45;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1d;
    *(ulong *)((long)puVar6 + 0xd) = CONCAT53(_UNK_01222a40,_UNK_01222a3d);
    *(undefined8 *)((long)puVar6 + 0x15) = uVar1;
    uVar4 = _UNK_01222a3c;
    uVar3 = _UNK_01222a38;
    uVar2 = _UNK_01222a34;
    *puVar6 = _UNK_01222a30;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x1d) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_014ae808;
    uStack_a48 = 0x29;
    uStack_a40 = 0x22;
    *(undefined8 *)(puVar6 + 4) = _UNK_014ae800;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_014ae7fc;
    uVar3 = _UNK_014ae7f8;
    uVar2 = _UNK_014ae7f4;
    *puVar6 = _UNK_014ae7f0;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined2 *)(puVar6 + 8) = 0x6572;
    *(undefined1 *)((long)puVar6 + 0x22) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_01390ecb;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puVar6 + 4) = _UNK_01390ec3;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01390ebf;
    uVar3 = _UNK_01390ebb;
    uVar2 = _UNK_01390eb7;
    *puVar6 = _UNK_01390eb3;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[8] = 0x65727574;
    *(undefined1 *)(puVar6 + 9) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa2160;
    break;
  case 9:
    *(undefined4 *)(param_1 + 10) = 0x40000000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_0145f52a;
    uStack_a48 = 0x39;
    uStack_a40 = 0x36;
    *(undefined8 *)(puStack_a38 + 8) = _UNK_0145f522;
    *(undefined8 *)(puStack_a38 + 10) = uVar1;
    uVar1 = _UNK_0145f51a;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_0145f512;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_0145f50e;
    uVar3 = _UNK_0145f50a;
    uVar2 = _UNK_0145f506;
    *puStack_a38 = _UNK_0145f502;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined8 *)((long)puStack_a38 + 0x2e) = 0x657275746165665f;
    *(undefined1 *)((long)puStack_a38 + 0x36) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar1 = _UNK_01222a45;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1d;
    *(ulong *)((long)puVar6 + 0xd) = CONCAT53(_UNK_01222a40,_UNK_01222a3d);
    *(undefined8 *)((long)puVar6 + 0x15) = uVar1;
    uVar4 = _UNK_01222a3c;
    uVar3 = _UNK_01222a38;
    uVar2 = _UNK_01222a34;
    *puVar6 = _UNK_01222a30;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x1d) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_01390ecb;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puVar6 + 4) = _UNK_01390ec3;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01390ebf;
    uVar3 = _UNK_01390ebb;
    uVar2 = _UNK_01390eb7;
    *puVar6 = _UNK_01390eb3;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[8] = 0x65727574;
    *(undefined1 *)(puVar6 + 9) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa21e0;
    break;
  case 10:
    *(undefined4 *)(param_1 + 10) = 0x40a00000;
    uVar11 = 0x21;
    if (param_4 != 0) {
      uVar11 = 0x32;
    }
    uVar13 = (uVar11 | 7) + 1;
    puStack_a30 = puVar8;
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(uVar13,0);
    }
    puVar12 = &UNK_0135c337;
    if (param_4 != 0) {
      puVar12 = &UNK_01412da9;
    }
    uStack_a48 = uVar13 | 1;
    uStack_a40 = uVar11;
    puStack_a38 = puVar6;
    func_0x0eee2f00(puVar6,puVar12,uVar11);
    puVar8 = puStack_a28;
    puVar7 = puStack_a30;
    *(undefined1 *)((long)puVar6 + uVar11) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar8,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa2260;
    goto code_r0x052d7358;
  case 0xb:
    *(undefined4 *)(param_1 + 10) = 0x3d4ccccd;
    puStack_a30 = puVar8;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar8 = puStack_a28;
    uVar1 = _UNK_0145f52a;
    uStack_a48 = 0x39;
    uStack_a40 = 0x36;
    *(undefined8 *)(puStack_a38 + 8) = _UNK_0145f522;
    *(undefined8 *)(puStack_a38 + 10) = uVar1;
    uVar1 = _UNK_0145f51a;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_0145f512;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_0145f50e;
    uVar3 = _UNK_0145f50a;
    uVar2 = _UNK_0145f506;
    *puStack_a38 = _UNK_0145f502;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined8 *)((long)puStack_a38 + 0x2e) = 0x657275746165665f;
    *(undefined1 *)((long)puStack_a38 + 0x36) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar7 = (undefined8 *)param_1[0xc];
    if (puVar7 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar7 = 0;
      *(undefined1 *)(puVar7 + 1) = 0;
      puVar7[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar7 + 1) = 1;
        *puVar7 = puStack_a68;
        puVar7[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar7 = puVar7 + 3;
    }
    else {
      puVar7 = (undefined8 *)func_0x052e7b30(puVar8,&puStack_a68);
    }
    param_1[0xc] = puVar7;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_0135c34f;
    uStack_a48 = 0x29;
    uStack_a40 = 0x21;
    *(undefined8 *)(puVar6 + 4) = _UNK_0135c347;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0135c343;
    uVar3 = _UNK_0135c33f;
    uVar2 = _UNK_0135c33b;
    *puVar6 = _UNK_0135c337;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined2 *)(puVar6 + 8) = 0x65;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar7 = (undefined8 *)param_1[0xc];
    if (puVar7 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar7 = 0;
      *(undefined1 *)(puVar7 + 1) = 0;
      puVar7[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar7 + 1) = 1;
        *puVar7 = puStack_a68;
        puVar7[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar7 = puVar7 + 3;
    }
    else {
      puVar7 = (undefined8 *)func_0x052e7b30(puVar8,&puStack_a68);
    }
    param_1[0xc] = puVar7;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a30;
    uVar1 = _UNK_01340bb2;
    uStack_a48 = 0x29;
    uStack_a40 = 0x27;
    *(undefined8 *)(puVar6 + 4) = _UNK_01340baa;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01340ba6;
    uVar3 = _UNK_01340ba2;
    uVar2 = _UNK_01340b9e;
    *puVar6 = _UNK_01340b9a;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined8 *)((long)puVar6 + 0x1f) = 0x657275746165665f;
    *(undefined1 *)((long)puVar6 + 0x27) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar8,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa22e0;
code_r0x052d7358:
    uStack_a10 = param_1;
    plStack_9f8 = &uStack_a18;
    func_0x052ea370(&uStack_a18,puVar7);
    if (plStack_9f8 == &uStack_a18) goto code_r0x052d7380;
    goto code_r0x052d7651;
  case 0xc:
    *(undefined4 *)(param_1 + 10) = 0x3f800000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_014792f9;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1e;
    *(ulong *)((long)puStack_a38 + 0xe) = CONCAT62(_UNK_014792f3,_UNK_014792f1);
    *(undefined8 *)((long)puStack_a38 + 0x16) = uVar1;
    uVar4 = _UNK_014792eb;
    uVar3 = _UNK_014792e7;
    uVar2 = CONCAT22(_UNK_014792f1,_UNK_014792ef);
    *puStack_a38 = _UNK_014792e3;
    puStack_a38[1] = uVar3;
    puStack_a38[2] = uVar4;
    puStack_a38[3] = uVar2;
    *(undefined1 *)((long)puStack_a38 + 0x1e) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_0135c34f;
    uStack_a48 = 0x29;
    uStack_a40 = 0x21;
    *(undefined8 *)(puVar6 + 4) = _UNK_0135c347;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0135c343;
    uVar3 = _UNK_0135c33f;
    uVar2 = _UNK_0135c33b;
    *puVar6 = _UNK_0135c337;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined2 *)(puVar6 + 8) = 0x65;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa2360;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 10) = 0x40000000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_014792f9;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1e;
    *(ulong *)((long)puStack_a38 + 0xe) = CONCAT62(_UNK_014792f3,_UNK_014792f1);
    *(undefined8 *)((long)puStack_a38 + 0x16) = uVar1;
    uVar4 = _UNK_014792eb;
    uVar3 = _UNK_014792e7;
    uVar2 = CONCAT22(_UNK_014792f1,_UNK_014792ef);
    *puStack_a38 = _UNK_014792e3;
    puStack_a38[1] = uVar3;
    puStack_a38[2] = uVar4;
    puStack_a38[3] = uVar2;
    *(undefined1 *)((long)puStack_a38 + 0x1e) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_0135c34f;
    uStack_a48 = 0x29;
    uStack_a40 = 0x21;
    *(undefined8 *)(puVar6 + 4) = _UNK_0135c347;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_0135c343;
    uVar3 = _UNK_0135c33f;
    uVar2 = _UNK_0135c33b;
    *puVar6 = _UNK_0135c337;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined2 *)(puVar6 + 8) = 0x65;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa23e0;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 10) = 0x41200000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_013c5437;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1b;
    *(ulong *)((long)puStack_a38 + 0xb) =
         CONCAT35(_UNK_013c5434,CONCAT41(_UNK_013c5430,UNK_013c542f));
    *(undefined8 *)((long)puStack_a38 + 0x13) = uVar1;
    uVar4 = _UNK_013c5430;
    uVar3 = _UNK_013c542c;
    uVar2 = _UNK_013c5428;
    *puStack_a38 = _UNK_013c5424;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined1 *)((long)puStack_a38 + 0x1b) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_01447ee0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puVar6 + 4) = _UNK_01447ed8;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01447ed4;
    uVar3 = _UNK_01447ed0;
    uVar2 = _UNK_01447ecc;
    *puVar6 = _UNK_01447ec8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[8] = 0x65727574;
    *(undefined1 *)(puVar6 + 9) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa2460;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 10) = 0x41200000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_0135c453;
    uStack_a48 = 0x29;
    uStack_a40 = 0x22;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_0135c44b;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_0135c447;
    uVar3 = _UNK_0135c443;
    uVar2 = _UNK_0135c43f;
    *puStack_a38 = _UNK_0135c43b;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined2 *)(puStack_a38 + 8) = 0x6572;
    *(undefined1 *)((long)puStack_a38 + 0x22) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_014ae82b;
    uStack_a48 = 0x29;
    uStack_a40 = 0x20;
    *(undefined8 *)(puVar6 + 4) = _UNK_014ae823;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_014ae81f;
    uVar3 = _UNK_014ae81b;
    uVar2 = _UNK_014ae817;
    *puVar6 = _UNK_014ae813;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)(puVar6 + 8) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar1 = _UNK_013c5437;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1b;
    *(ulong *)((long)puVar6 + 0xb) = CONCAT35(_UNK_013c5434,CONCAT41(_UNK_013c5430,UNK_013c542f));
    *(undefined8 *)((long)puVar6 + 0x13) = uVar1;
    uVar4 = _UNK_013c5430;
    uVar3 = _UNK_013c542c;
    uVar2 = _UNK_013c5428;
    *puVar6 = _UNK_013c5424;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x1b) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_01447ee0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puVar6 + 4) = _UNK_01447ed8;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01447ed4;
    uVar3 = _UNK_01447ed0;
    uVar2 = _UNK_01447ecc;
    *puVar6 = _UNK_01447ec8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[8] = 0x65727574;
    *(undefined1 *)(puVar6 + 9) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa24e0;
    break;
  case 0x10:
    *(undefined4 *)(param_1 + 10) = 0x41200000;
    puStack_a38 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_a38 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar7 = puStack_a28;
    uVar1 = _UNK_0135c453;
    uStack_a48 = 0x29;
    uStack_a40 = 0x22;
    *(undefined8 *)(puStack_a38 + 4) = _UNK_0135c44b;
    *(undefined8 *)(puStack_a38 + 6) = uVar1;
    uVar4 = _UNK_0135c447;
    uVar3 = _UNK_0135c443;
    uVar2 = _UNK_0135c43f;
    *puStack_a38 = _UNK_0135c43b;
    puStack_a38[1] = uVar2;
    puStack_a38[2] = uVar3;
    puStack_a38[3] = uVar4;
    *(undefined2 *)(puStack_a38 + 8) = 0x6572;
    *(undefined1 *)((long)puStack_a38 + 0x22) = 0;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar1 = _UNK_013c5437;
    uStack_a48 = 0x21;
    uStack_a40 = 0x1b;
    *(ulong *)((long)puVar6 + 0xb) = CONCAT35(_UNK_013c5434,CONCAT41(_UNK_013c5430,UNK_013c542f));
    *(undefined8 *)((long)puVar6 + 0x13) = uVar1;
    uVar4 = _UNK_013c5430;
    uVar3 = _UNK_013c542c;
    uVar2 = _UNK_013c5428;
    *puVar6 = _UNK_013c5424;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined1 *)((long)puVar6 + 0x1b) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar1 = _UNK_01447ee0;
    uStack_a48 = 0x29;
    uStack_a40 = 0x24;
    *(undefined8 *)(puVar6 + 4) = _UNK_01447ed8;
    *(undefined8 *)(puVar6 + 6) = uVar1;
    uVar4 = _UNK_01447ed4;
    uVar3 = _UNK_01447ed0;
    uVar2 = _UNK_01447ecc;
    *puVar6 = _UNK_01447ec8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[8] = 0x65727574;
    *(undefined1 *)(puVar6 + 9) = 0;
    puStack_a38 = puVar6;
    func_0x0d3a0d80(&uStack_a18,param_3,&uStack_a48);
    if ((char)uStack_a10 == '\x01') {
      puStack_a58 = uStack_a08;
      puStack_a68 = uStack_a18;
      uStack_a60 = (ulong)uStack_a10;
    }
    else {
      func_0x0d39feb0(&puStack_a68,param_3,&uStack_a48);
    }
    puVar9 = (undefined8 *)param_1[0xc];
    if (puVar9 < (undefined8 *)param_1[0xd]) {
      *(undefined1 *)puVar9 = 0;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[2] = 0xffffffffffffffff;
      if ((char)uStack_a60 == '\x01') {
        *(undefined1 *)(puVar9 + 1) = 1;
        *puVar9 = puStack_a68;
        puVar9[2] = puStack_a58;
      }
      if ((uStack_a60 & 1) != 0) {
        uStack_a60 = uStack_a60 & 0xffffffffffffff00;
      }
      puStack_a58 = (undefined4 *)0xffffffffffffffff;
      puVar9 = puVar9 + 3;
    }
    else {
      puVar9 = (undefined8 *)func_0x052e7b30(puVar7,&puStack_a68);
    }
    param_1[0xc] = puVar9;
    if ((uStack_a48 & 1) != 0) {
      func_0x0412a280(puStack_a38,uStack_a48 & 0xfffffffffffffffe);
    }
    uStack_a18 = &UNK_0efa2560;
  }
  uStack_a10 = param_1;
  plStack_9f8 = &uStack_a18;
  func_0x052ea370(&uStack_a18,puVar8);
  if (plStack_9f8 == &uStack_a18) {
code_r0x052d7380:
    lVar5 = 0x20;
  }
  else {
code_r0x052d7651:
    lVar5 = 0x28;
    if (plStack_9f8 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plStack_9f8 + lVar5))();
  return;
}



/* ---- referenced strings ----
 * 0x1495740  minecraft:scatter_tall_grass_around_tree_feature
 * 0x1495750  r_tall_grass_around_tree_feature
 * 0x1495760  und_tree_feature
 */
