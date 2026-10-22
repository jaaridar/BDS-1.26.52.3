/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53e90 (ELF vaddr 0x4953e90)
 * Label: string:minecraft:surface_builder
 * Body:  [[04a53e90, 04a53f7e]]
 * Ghidra: FUN_04a53e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a53e90(undefined8 param_1)

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
  
  puStack_50 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_50 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar4 = _UNK_01df4741;
  uStack_60 = 0x21;
  uStack_58 = 0x19;
  *(ulong *)((long)puStack_50 + 9) = CONCAT17(UNK_01df4740,CONCAT43(_UNK_01df473c,_DAT_01df4739));
  *(undefined8 *)((long)puStack_50 + 0x11) = uVar4;
  uVar3 = _UNK_01df473c;
  uVar2 = _UNK_01df4738;
  uVar1 = _UNK_01df4734;
  *puStack_50 = _DAT_01df4730;
  puStack_50[1] = uVar1;
  puStack_50[2] = uVar2;
  puStack_50[3] = uVar3;
  *(undefined1 *)((long)puStack_50 + 0x19) = 0;
  lVar5 = func_0x04a78aa0(param_1,&uStack_60);
  apuStack_48[0] = &UNK_0ef53ec8;
  ppuStack_28 = apuStack_48;
  func_0x04a78db0(apuStack_48,lVar5 + 0x40);
  if (ppuStack_28 == apuStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto joined_r0x04a53f64;
  }
  (**(code **)(*ppuStack_28 + lVar5))();
joined_r0x04a53f64:
  if ((uStack_60 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1df4730  minecraft:surface_builder
 * 0x1df4739  :surface_builder
 */
