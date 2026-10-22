/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52d3480 (ELF vaddr 0x51d3480)
 * Label: string:minecraft:scatter_tall_grass_around_tree_feature
 * Body:  [[052d3480, 052d395c]]
 * Ghidra: FUN_052d3480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052d3480(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined *puStack_88;
  ulong uStack_80;
  undefined4 *puStack_78;
  ulong auStack_70 [2];
  undefined4 *puStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined4 *puStack_48;
  undefined **ppuStack_38;
  
  *(undefined2 *)(param_1 + 1) = 0x101;
  param_1[2] = _DAT_0f6b3a90;
  param_1[3] = 0;
  *param_1 = &UNK_0efa02a0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0xffffffffffffffff;
  puStack_78 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_78 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar4 = _UNK_011d3c26;
  puStack_88 = (undefined *)0x21;
  uStack_80 = 0x1a;
  *(ulong *)((long)puStack_78 + 10) = CONCAT26(_UNK_011d3c24,CONCAT42(_UNK_011d3c20,_DAT_011d3c1e));
  *(undefined8 *)((long)puStack_78 + 0x12) = uVar4;
  uVar3 = _UNK_011d3c20;
  uVar2 = _UNK_011d3c18;
  uVar1 = CONCAT22(_DAT_011d3c1e,_UNK_011d3c1c);
  *puStack_78 = _DAT_011d3c14;
  puStack_78[1] = uVar2;
  puStack_78[2] = uVar1;
  puStack_78[3] = uVar3;
  *(undefined1 *)((long)puStack_78 + 0x1a) = 0;
  func_0x0d3a0d80(&puStack_58,param_2,&puStack_88);
  if ((undefined **)(param_1 + 10) != &puStack_58) {
    if (*(char *)(param_1 + 0xb) == '\x01') {
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    param_1[0xc] = 0xffffffffffffffff;
    if ((char)puStack_50 == '\x01') {
      *(undefined1 *)(param_1 + 0xb) = 1;
      param_1[10] = puStack_58;
      param_1[0xc] = puStack_48;
      puStack_50 = (undefined8 *)((ulong)puStack_50 & 0xffffffffffffff00);
    }
    puStack_48 = (undefined4 *)0xffffffffffffffff;
  }
  if (((ulong)puStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,(ulong)puStack_88 & 0xfffffffffffffffe);
  }
  puStack_60 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puStack_60 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x38,0);
  }
  uVar4 = _UNK_01495768;
  auStack_70[0] = 0x39;
  auStack_70[1] = 0x30;
  *(undefined8 *)(puStack_60 + 8) = _DAT_01495760;
  *(undefined8 *)(puStack_60 + 10) = uVar4;
  uVar4 = _UNK_01495758;
  *(undefined8 *)(puStack_60 + 4) = _DAT_01495750;
  *(undefined8 *)(puStack_60 + 6) = uVar4;
  uVar3 = _UNK_0149574c;
  uVar2 = _UNK_01495748;
  uVar1 = _UNK_01495744;
  *puStack_60 = _DAT_01495740;
  puStack_60[1] = uVar1;
  puStack_60[2] = uVar2;
  puStack_60[3] = uVar3;
  *(undefined1 *)(puStack_60 + 0xc) = 0;
  func_0x0d3a0d80(&puStack_58,param_2,auStack_70);
  if ((char)puStack_50 == '\x01') {
    puStack_78 = puStack_48;
    puStack_88 = puStack_58;
    uStack_80 = (ulong)puStack_50;
  }
  else {
    func_0x0d39feb0(&puStack_88,param_2,auStack_70);
  }
  if ((undefined **)(param_1 + 0xd) != &puStack_88) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    param_1[0xf] = 0xffffffffffffffff;
    if ((char)uStack_80 == '\x01') {
      *(undefined1 *)(param_1 + 0xe) = 1;
      param_1[0xd] = puStack_88;
      param_1[0xf] = puStack_78;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
    }
    puStack_78 = (undefined4 *)0xffffffffffffffff;
  }
  if ((auStack_70[0] & 1) != 0) {
    func_0x0412a280(puStack_60,auStack_70[0] & 0xfffffffffffffffe);
  }
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar4 = _UNK_0135ba5b;
  puStack_88 = (undefined *)0x21;
  uStack_80 = 0x1f;
  *(ulong *)((long)puVar5 + 0xf) = CONCAT71(_UNK_0135ba54,DAT_0135ba53);
  *(undefined8 *)((long)puVar5 + 0x17) = uVar4;
  uVar3 = _UNK_0135ba50;
  uVar2 = _UNK_0135ba4c;
  uVar1 = _UNK_0135ba48;
  *puVar5 = _DAT_0135ba44;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)((long)puVar5 + 0x1f) = 0;
  puStack_78 = puVar5;
  func_0x0d3a0d80(&puStack_58,param_2,&puStack_88);
  if ((undefined **)(param_1 + 0x10) != &puStack_58) {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    param_1[0x12] = 0xffffffffffffffff;
    if ((char)puStack_50 == '\x01') {
      *(undefined1 *)(param_1 + 0x11) = 1;
      param_1[0x10] = puStack_58;
      param_1[0x12] = puStack_48;
      puStack_50 = (undefined8 *)((ulong)puStack_50 & 0xffffffffffffff00);
    }
    puStack_48 = (undefined4 *)0xffffffffffffffff;
  }
  if (((ulong)puStack_88 & 1) != 0) {
    func_0x0412a280(puStack_78,(ulong)puStack_88 & 0xfffffffffffffffe);
  }
  puVar5 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013ac99a;
  auStack_70[0] = 0x21;
  auStack_70[1] = 0x1c;
  *(ulong *)(puVar5 + 3) = CONCAT44(_UNK_013ac996,_DAT_013ac992);
  *(undefined8 *)(puVar5 + 5) = uVar4;
  uVar3 = _DAT_013ac992;
  uVar2 = _UNK_013ac98e;
  uVar1 = _UNK_013ac98a;
  *puVar5 = _DAT_013ac986;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined1 *)(puVar5 + 7) = 0;
  puStack_60 = puVar5;
  func_0x0d3a0d80(&puStack_58,param_2,auStack_70);
  if ((char)puStack_50 == '\x01') {
    puStack_78 = puStack_48;
    puStack_88 = puStack_58;
    uStack_80 = (ulong)puStack_50;
  }
  else {
    func_0x0d39feb0(&puStack_88,param_2,auStack_70);
  }
  if ((undefined **)(param_1 + 0x13) != &puStack_88) {
    if (*(char *)(param_1 + 0x14) == '\x01') {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    param_1[0x15] = 0xffffffffffffffff;
    if ((char)uStack_80 == '\x01') {
      *(undefined1 *)(param_1 + 0x14) = 1;
      param_1[0x13] = puStack_88;
      param_1[0x15] = puStack_78;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
    }
    puStack_78 = (undefined4 *)0xffffffffffffffff;
  }
  if ((auStack_70[0] & 1) != 0) {
    func_0x0412a280(puStack_60,auStack_70[0] & 0xfffffffffffffffe);
  }
  puStack_58 = &UNK_0efa1cd0;
  puStack_50 = param_1;
  ppuStack_38 = &puStack_58;
  func_0x052ea370(&puStack_58,param_1 + 4);
  if (ppuStack_38 == &puStack_58) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (ppuStack_38 == (undefined **)0x0) {
      return;
    }
  }
  (**(code **)(*ppuStack_38 + lVar6))();
  return;
}



/* ---- referenced strings ----
 * 0x11d3c14  minecraft:seagrass_feature
 * 0x11d3c1e  seagrass_feature
 * 0x135ba44  minecraft:huge_mushroom_feature
 * 0x135ba53  mushroom_feature
 * 0x13ac986  minecraft:swamp_tree_feature
 * 0x13ac992  amp_tree_feature
 * 0x1495740  minecraft:scatter_tall_grass_around_tree_feature
 * 0x1495750  r_tall_grass_around_tree_feature
 * 0x1495760  und_tree_feature
 */
