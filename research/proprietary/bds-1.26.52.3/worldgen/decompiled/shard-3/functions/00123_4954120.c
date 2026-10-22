/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a54120 (ELF vaddr 0x4954120)
 * Label: string:minecraft:surface_builder
 * Body:  [[04a54120, 04a5420e]]
 * Ghidra: FUN_04a54120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a54120(undefined8 param_1)

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
  uVar4 = _UNK_01e44cf1;
  uStack_60 = 0x21;
  uStack_58 = 0x19;
  *(ulong *)((long)puStack_50 + 9) = CONCAT17(UNK_01e44cf0,CONCAT43(_UNK_01e44cec,_DAT_01e44ce9));
  *(undefined8 *)((long)puStack_50 + 0x11) = uVar4;
  uVar3 = _UNK_01e44cec;
  uVar2 = _UNK_01e44ce8;
  uVar1 = _UNK_01e44ce4;
  *puStack_50 = _DAT_01e44ce0;
  puStack_50[1] = uVar1;
  puStack_50[2] = uVar2;
  puStack_50[3] = uVar3;
  *(undefined1 *)((long)puStack_50 + 0x19) = 0;
  lVar5 = func_0x04a78aa0(param_1,&uStack_60);
  apuStack_48[0] = &UNK_0ef54018;
  ppuStack_28 = apuStack_48;
  func_0x04a78db0(apuStack_48,lVar5 + 0x40);
  if (ppuStack_28 == apuStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto joined_r0x04a541f4;
  }
  (**(code **)(*ppuStack_28 + lVar5))();
joined_r0x04a541f4:
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(puStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e44ce0  minecraft:surface_builder
 * 0x1e44ce9  :surface_builder
 */
