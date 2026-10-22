/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc859560 (ELF vaddr 0xc759560)
 * Label: string:minecraft:azalea_tree_feature
 * Body:  [[0c859560, 0c85991a]]
 * Ghidra: FUN_0c859560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0c859560(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4,char param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  float extraout_XMM0_Da;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 uStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  long *plStack_2c8;
  ulong *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  char cStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  long alStack_278 [4];
  long *plStack_258;
  undefined8 uStack_248;
  undefined1 uStack_238;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined4 *puStack_218;
  long lStack_200;
  long alStack_168 [4];
  long *plStack_148;
  undefined1 auStack_100 [64];
  uint uStack_c0;
  undefined1 auStack_a8 [64];
  uint uStack_68;
  
  plVar10 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  lVar12 = *plVar10;
  plVar10 = (long *)(**(code **)(lVar12 + 0xa70))(plVar10);
  bVar13 = (byte)lVar12;
  if ((param_4 == 0) || (*(char *)(param_4 + 0x251) != '\0')) {
LAB_0c859601:
    (**(code **)(*plVar10 + 0x30))(plVar10);
    if (_DAT_01198bd0 <= extraout_XMM0_Da) {
      return 1;
    }
  }
  else {
    iVar8 = func_0x0bbfe2d0(param_4 + 8);
    if (iVar8 != -1) {
      iVar9 = (**(code **)(**(long **)(param_4 + 0x1d0) + 0x468))();
      bVar13 = iVar8 == 1 || iVar9 == 1 && iVar8 == 5;
    }
    if ((param_5 != '\x01') && ((iVar8 != -1 & bVar13) == 0)) goto LAB_0c859601;
  }
  plVar11 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  cVar7 = (**(code **)(*plVar11 + 0x9f0))(plVar11);
  if (cVar7 != '\0') {
    return 1;
  }
  lVar12 = (**(code **)(*param_2 + 0x150))(param_2);
  uVar1 = *(undefined8 *)(lVar12 + 0x348);
  puStack_218 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_218 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_01271a68;
  uStack_228 = 0x21;
  uStack_220 = 0x1d;
  *(ulong *)((long)puStack_218 + 0xd) = CONCAT53(_UNK_01271a63,_DAT_01271a60);
  *(undefined8 *)((long)puStack_218 + 0x15) = uVar5;
  uVar4 = _UNK_01271a5f;
  uVar3 = _UNK_01271a5b;
  uVar2 = _UNK_01271a57;
  *puStack_218 = _DAT_01271a53;
  puStack_218[1] = uVar2;
  puStack_218[2] = uVar3;
  puStack_218[3] = uVar4;
  *(undefined1 *)((long)puStack_218 + 0x1d) = 0;
  func_0x0d3a0d80(&lStack_2b0,uVar1,&uStack_228);
  if ((uStack_228 & 1) != 0) {
    FUN_0412a280(puStack_218,uStack_228 & 0xfffffffffffffffe);
  }
  if (cStack_2a8 != '\x01') {
    return 1;
  }
  if (*(long *)(*(long *)(lStack_2b0 + 0x18) + lStack_2a0 * 8) == 0) {
    return 1;
  }
  puStack_298 = &UNK_0f3e3a00;
  uStack_288 = 0;
  plStack_258 = (long *)0x0;
  uStack_248 = 0;
  uStack_238 = 1;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_2e8 = 0;
  plStack_290 = param_2;
  func_0x0d3d5ac0(&uStack_228,param_2,param_3,&lStack_318);
  plVar11 = *(long **)(*(long *)(lStack_2b0 + 0x18) + lStack_2a0 * 8);
  ppuStack_2e0 = &puStack_298;
  uStack_2d8 = *param_3;
  uStack_2d0 = *(undefined4 *)(param_3 + 1);
  uStack_2b8 = 0;
  plStack_2c8 = plVar10;
  puStack_2c0 = &uStack_228;
  (**(code **)(*plVar11 + 0x10))(plVar11,&ppuStack_2e0);
  if ((ulong)uStack_68 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_68 * 8))(&ppuStack_2e0,auStack_a8);
  }
  uStack_68 = 0xffffffff;
  if ((ulong)uStack_c0 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_c0 * 8))(&ppuStack_2e0,auStack_100);
  }
  uStack_c0 = 0xffffffff;
  if (plStack_148 == alStack_168) {
    lVar12 = 0x20;
  }
  else {
    lVar12 = 0x28;
    if (plStack_148 == (long *)0x0) goto LAB_0c859843;
  }
  (**(code **)(*plStack_148 + lVar12))();
LAB_0c859843:
  if (lStack_200 != 0) {
    FUN_0412c2d0();
  }
  lVar6 = lStack_300;
  lVar12 = lStack_2f8;
  if (lStack_300 != 0) {
    while (lVar6 != lVar12) {
      func_0x0b62f250(lVar12 + -8,0);
      lVar12 = lVar12 + -8;
    }
    lStack_2f8 = lVar6;
    FUN_0412a280(lStack_300,lStack_2f0 - lStack_300);
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    FUN_0412a280(lStack_318,lStack_308 - lStack_318);
  }
  puStack_298 = &UNK_0f3e3a00;
  if (plStack_258 == alStack_278) {
    lVar12 = 0x20;
  }
  else {
    lVar12 = 0x28;
    if (plStack_258 == (long *)0x0) {
      return 1;
    }
  }
  (**(code **)(*plStack_258 + lVar12))();
  return 1;
}



/* ---- referenced strings ----
 * 0x1271a53  minecraft:azalea_tree_feature
 * 0x1271a60  lea_tree_feature
 */
