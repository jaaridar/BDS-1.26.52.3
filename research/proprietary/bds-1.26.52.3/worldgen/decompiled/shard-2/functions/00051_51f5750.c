/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f5750 (ELF vaddr 0x51f5750)
 * Label: VanillaSurfaceBuilders::SwampSurfaceBuilder::vslot2
 * Body:  [[052f5750, 052f58b5]]
 * Ghidra: wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot2(long param_1,uint param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uStack_a20;
  undefined *puStack_a18;
  undefined *puStack_a10;
  uint uStack_a08;
  uint uStack_a04;
  uint auStack_a00 [623];
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined **ppuStack_20;
  
  puStack_a18 = &UNK_0f147b18;
  ppuStack_20 = &puStack_a10;
  puStack_a10 = &UNK_0f5356d0;
  uStack_30 = 0x100000000000000;
  uStack_3c = 0;
  uStack_38 = 0;
  lVar3 = 7;
  uVar5 = param_2;
  while( true ) {
    uVar4 = ((ulong)((uVar5 >> 0x1e ^ uVar5) * 0x6c078965) + lVar3) - 6;
    uVar5 = (uint)uVar4;
    *(uint *)((long)&uStack_a20 + lVar3 * 4 + 4) = uVar5;
    if (lVar3 == 0x193) break;
    uVar5 = ((int)lVar3 + ((uint)(uVar4 >> 0x1e) & 3 ^ uVar5) * 0x6c078965) - 5;
    *(uint *)((long)&puStack_a18 + lVar3 * 4) = uVar5;
    lVar3 = lVar3 + 2;
  }
  uStack_44 = 0x18e00000270;
  uStack_28 = 1;
  uStack_a20 = 0x52f5835;
  uStack_a08 = param_2;
  uStack_a04 = param_2;
  puVar2 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_a20 = 0x52f58b4;
    func_0x0eec74c0(0x28,0);
  }
  *puVar2 = 2;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  uStack_a20 = 0x52f5868;
  func_0x0d3430a0(puVar2,&puStack_a18,0);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 8);
    if (lVar1 != 0) {
      *(long *)(lVar3 + 0x10) = lVar1;
      uStack_a20 = 0x52f588e;
      thunk_FUN_0ee326a0(lVar1,*(long *)(lVar3 + 0x18) - lVar1);
    }
    uStack_a20 = 0x52f589b;
    thunk_FUN_0ee326a0(lVar3,0x28);
  }
  return;
}


