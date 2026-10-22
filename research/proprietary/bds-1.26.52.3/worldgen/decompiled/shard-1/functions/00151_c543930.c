/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc643930 (ELF vaddr 0xc543930)
 * Label: string:minecraft:mangrove_tree_feature
 * Body:  [[0c643930, 0c643e88]]
 * Ghidra: FUN_0c643930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c643930(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_RDX;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined **ppuStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  long *plStack_2d0;
  long lStack_2c8;
  long alStack_2b8 [4];
  long *plStack_298;
  undefined8 uStack_288;
  undefined1 uStack_278;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  char cStack_220;
  long lStack_218;
  long lStack_200;
  long alStack_168 [4];
  long *plStack_148;
  undefined1 auStack_100 [64];
  uint uStack_c0;
  undefined1 auStack_a8 [64];
  uint uStack_68;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x150))();
  cVar1 = (**(code **)(*plVar2 + 0x9f0))(plVar2);
  if (cVar1 != '\0') {
    return;
  }
  uStack_230 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  uVar4 = *(undefined8 *)(param_1[5] + 0x348);
  fVar10 = (float)(**(code **)(*param_3 + 0x30))(param_3);
  fVar11 = (float)(**(code **)(*param_3 + 0x30))(param_3);
  if (_DAT_01198670 <= fVar10) {
    puVar5 = &UNK_013402d5;
    if (fVar11 < _DAT_0119884c) {
      puVar5 = &UNK_013402f5;
    }
    uVar7 = 0x1f;
    if (fVar11 < _DAT_0119884c) {
      uVar7 = 0x2c;
    }
    uVar6 = (uVar7 | 7) + 1;
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar3 == 0) {
      func_0x0eec74c0(uVar6,0);
    }
    puStack_2d8 = (undefined *)(uVar6 | 1);
    plStack_2d0 = (long *)uVar7;
    lStack_2c8 = lVar3;
    func_0x0eee2f00(lVar3,puVar5,uVar7);
    *(undefined1 *)(lVar3 + uVar7) = 0;
    func_0x0d3a0d80(&lStack_228,uVar4,&puStack_2d8);
  }
  else {
    puVar5 = &UNK_0119c677;
    if (fVar11 < _DAT_0119884c) {
      puVar5 = &UNK_013df261;
    }
    uVar7 = 0x24;
    if (fVar11 < _DAT_0119884c) {
      uVar7 = 0x31;
    }
    uVar6 = (uVar7 | 7) + 1;
    lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6);
    if (lVar3 == 0) {
      func_0x0eec74c0(uVar6,0);
    }
    puStack_2d8 = (undefined *)(uVar6 | 1);
    plStack_2d0 = (long *)uVar7;
    lStack_2c8 = lVar3;
    func_0x0eee2f00(lVar3,puVar5,uVar7);
    *(undefined1 *)(lVar3 + uVar7) = 0;
    func_0x0d3a0d80(&lStack_228,uVar4,&puStack_2d8);
  }
  bVar9 = cStack_220 != '\x01';
  if (bVar9) {
    lVar3 = -1;
    lVar8 = 0;
  }
  else {
    cStack_220 = '\0';
    lVar3 = lStack_218;
    lVar8 = lStack_228;
  }
  lStack_218 = 0xffffffffffffffff;
  if (((ulong)puStack_2d8 & 1) != 0) {
    lStack_218 = 0xffffffffffffffff;
    func_0x0412a280(lStack_2c8,(ulong)puStack_2d8 & 0xfffffffffffffffe);
  }
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  uStack_238 = 0;
  func_0x0d3d5ac0(&lStack_228,param_1,param_2,&lStack_268);
  if ((bVar9) || (*(long *)(*(long *)(lVar8 + 0x18) + lVar3 * 8) == 0)) {
    lVar3 = 0;
    bVar9 = false;
    lVar8 = 0;
  }
  else {
    bVar9 = true;
  }
  puStack_2d8 = &UNK_0f3e3a00;
  lStack_2c8 = 0;
  plStack_298 = (long *)0x0;
  uStack_288 = 0;
  uStack_278 = 1;
  plStack_2d0 = param_1;
  uVar4 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
  uStack_2f8 = 0;
  plStack_2f0 = (long *)0x0;
  ppuStack_308 = (undefined **)0x0;
  uStack_300 = 0;
  plStack_2e8 = (long *)0x1;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,uVar4,3,0,&ppuStack_308);
  if (bVar9) {
    plVar2 = *(long **)(*(long *)(lVar8 + 0x18) + lVar3 * 8);
    ppuStack_308 = &puStack_2d8;
    uStack_300 = *param_2;
    uStack_2f8 = CONCAT44(uStack_2f8._4_4_,*(undefined4 *)(param_2 + 1));
    uStack_2e0 = 0;
    plStack_2f0 = param_3;
    plStack_2e8 = &lStack_228;
    (**(code **)(*plVar2 + 0x10))(plVar2,&ppuStack_308);
    if ((extraout_RDX >> 0x20 & 1) == 0) goto LAB_0c643c9a;
  }
  else {
LAB_0c643c9a:
    uStack_2f8 = 0;
    plStack_2f0 = (long *)0x0;
    ppuStack_308 = (undefined **)0x0;
    uStack_300 = 0;
    plStack_2e8 = (long *)0x1;
    (**(code **)(*param_1 + 0xf8))(param_1,param_2,uStack_230,3,0,&ppuStack_308);
  }
  puStack_2d8 = &UNK_0f3e3a00;
  if (plStack_298 == alStack_2b8) {
    lVar3 = 0x20;
LAB_0c643d19:
    (**(code **)(*plStack_298 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (plStack_298 != (long *)0x0) goto LAB_0c643d19;
  }
  if ((ulong)uStack_68 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_68 * 8))(&puStack_2d8,auStack_a8);
  }
  uStack_68 = 0xffffffff;
  if ((ulong)uStack_c0 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_c0 * 8))(&puStack_2d8,auStack_100);
  }
  uStack_c0 = 0xffffffff;
  if (plStack_148 == alStack_168) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plStack_148 == (long *)0x0) goto joined_r0x0c643e60;
  }
  (**(code **)(*plStack_148 + lVar3))();
joined_r0x0c643e60:
  if (lStack_200 != 0) {
    func_0x0412c2d0();
  }
  lVar8 = lStack_250;
  lVar3 = lStack_248;
  if (lStack_250 != 0) {
    while (lVar8 != lVar3) {
      func_0x0b62f250(lVar3 + -8,0);
      lVar3 = lVar3 + -8;
    }
    lStack_248 = lVar8;
    func_0x0412a280(lStack_250,lStack_240 - lStack_250);
  }
  if (lStack_268 != 0) {
    lStack_260 = lStack_268;
    func_0x0412a280(lStack_268,lStack_258 - lStack_268);
  }
  return;
}


