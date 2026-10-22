/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53b30 (ELF vaddr 0x4953b30)
 * Label: string:minecraft:overworld_generation_rules
 * Body:  [[04a53b30, 04a53c27]]
 * Ghidra: FUN_04a53b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a53b30(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined *apuStack_48 [4];
  undefined **ppuStack_28;
  
  puStack_50 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_50 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  uStack_60 = 0x29;
  uStack_58 = 0x24;
  puStack_50[8] = _DAT_01e36700;
  uVar4 = _UNK_01e366f8;
  *(undefined8 *)(puStack_50 + 4) = _DAT_01e366f0;
  *(undefined8 *)(puStack_50 + 6) = uVar4;
  uVar3 = _UNK_01e366ec;
  uVar2 = _UNK_01e366e8;
  uVar1 = _UNK_01e366e4;
  *puStack_50 = _DAT_01e366e0;
  puStack_50[1] = uVar1;
  puStack_50[2] = uVar2;
  puStack_50[3] = uVar3;
  *(undefined1 *)(puStack_50 + 9) = 0;
  lVar5 = func_0x04a78aa0(param_1,&uStack_60);
  apuStack_48[0] = &UNK_0ef53c58;
  ppuStack_28 = apuStack_48;
  func_0x04a78db0(apuStack_48,lVar5 + 0x40);
  if (ppuStack_28 == apuStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto joined_r0x04a53c0d;
  }
  (**(code **)(*ppuStack_28 + lVar5))();
joined_r0x04a53c0d:
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(puStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e366e0  minecraft:overworld_generation_rules
 * 0x1e366f0  rld_generation_rules
 * 0x1e36700  ules
 */
