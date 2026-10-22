/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53a10 (ELF vaddr 0x4953a10)
 * Label: caller-of-callee
 * Body:  [[04a53a10, 04a53b09]]
 * Ghidra: FUN_04a53a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a53a10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined *apuStack_48 [4];
  undefined **ppuStack_28;
  
  puStack_50 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_50 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_60 = 0x29;
  uStack_58 = 0x25;
  *(ulong *)((long)puStack_50 + 0x1d) = CONCAT53(_UNK_01e36670,_DAT_01e3666d);
  uVar1 = CONCAT35(_DAT_01e3666d,_UNK_01e36668);
  *(undefined8 *)(puStack_50 + 4) = _DAT_01e36660;
  *(undefined8 *)(puStack_50 + 6) = uVar1;
  uVar4 = _UNK_01e3665c;
  uVar3 = _UNK_01e36658;
  uVar2 = _UNK_01e36654;
  *puStack_50 = _DAT_01e36650;
  puStack_50[1] = uVar2;
  puStack_50[2] = uVar3;
  puStack_50[3] = uVar4;
  *(undefined1 *)((long)puStack_50 + 0x25) = 0;
  lVar5 = func_0x04a78aa0(param_1,&uStack_60);
  apuStack_48[0] = &UNK_0ef53b88;
  ppuStack_28 = apuStack_48;
  func_0x04a78db0(apuStack_48,lVar5 + 0x40);
  if (ppuStack_28 == apuStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto joined_r0x04a53aef;
  }
  (**(code **)(*ppuStack_28 + lVar5))();
joined_r0x04a53aef:
  if ((uStack_60 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e36650  minecraft:multinoise_generation_rules
 * 0x1e36660  oise_generation_rules
 * 0x1e3666d  on_rules
 */
