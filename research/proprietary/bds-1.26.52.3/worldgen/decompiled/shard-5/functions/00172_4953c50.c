/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53c50 (ELF vaddr 0x4953c50)
 * Label: string:minecraft:overworld_height
 * Body:  [[04a53c50, 04a53d3e]]
 * Ghidra: FUN_04a53c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a53c50(undefined8 param_1)

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
  uVar4 = _UNK_01e367c2;
  uStack_60 = 0x21;
  uStack_58 = 0x1a;
  *(ulong *)((long)puStack_50 + 10) = CONCAT26(_UNK_01e367c0,CONCAT42(_UNK_01e367bc,_DAT_01e367ba));
  *(undefined8 *)((long)puStack_50 + 0x12) = uVar4;
  uVar3 = _UNK_01e367bc;
  uVar2 = _UNK_01e367b4;
  uVar1 = CONCAT22(_DAT_01e367ba,_UNK_01e367b8);
  *puStack_50 = _DAT_01e367b0;
  puStack_50[1] = uVar2;
  puStack_50[2] = uVar1;
  puStack_50[3] = uVar3;
  *(undefined1 *)((long)puStack_50 + 0x1a) = 0;
  lVar5 = func_0x04a78aa0(param_1,&uStack_60);
  apuStack_48[0] = &UNK_0ef53d28;
  ppuStack_28 = apuStack_48;
  func_0x04a78db0(apuStack_48,lVar5 + 0x40);
  if (ppuStack_28 == apuStack_48) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto joined_r0x04a53d24;
  }
  (**(code **)(*ppuStack_28 + lVar5))();
joined_r0x04a53d24:
  if ((uStack_60 & 1) != 0) {
    FUN_0412a280(puStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1e367b0  minecraft:overworld_height
 * 0x1e367ba  overworld_height
 */
