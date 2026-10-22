/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc852060 (ELF vaddr 0xc752060)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot2
 * Body:  [[0c852060, 0c8521fb]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot2(long param_1,uint param_2)

{
  long lVar1;
  undefined8 in_RAX;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uStack_a24;
  undefined *puStack_a20;
  undefined *puStack_a18;
  uint uStack_a10;
  uint uStack_a0c;
  uint auStack_a08 [623];
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined **ppuStack_28;
  
  *(uint *)(param_1 + 8) = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar2 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    puStack_a20 = &UNK_0f147b18;
    ppuStack_28 = &puStack_a18;
    puStack_a18 = &UNK_0f5356d0;
    uStack_38 = 0x100000000000000;
    uStack_44 = 0;
    uStack_40 = 0;
    lVar3 = 7;
    uVar5 = param_2;
    while( true ) {
      uVar4 = ((ulong)((uVar5 >> 0x1e ^ uVar5) * 0x6c078965) + lVar3) - 6;
      uVar5 = (uint)uVar4;
      (&uStack_a24)[lVar3] = uVar5;
      if (lVar3 == 0x193) break;
      uVar5 = ((int)lVar3 + ((uint)(uVar4 >> 0x1e) & 3 ^ uVar5) * 0x6c078965) - 5;
      *(uint *)((long)&puStack_a20 + lVar3 * 4) = uVar5;
      lVar3 = lVar3 + 2;
    }
    uStack_4c = 0x18e00000270;
    uStack_30 = 1;
    uStack_a10 = param_2;
    uStack_a0c = param_2;
    in_RAX = func_0x0d341b00(puVar2,&puStack_a20,0,0);
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar2;
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 8);
      if (lVar1 != 0) {
        *(long *)(lVar3 + 0x10) = lVar1;
        in_RAX = thunk_FUN_0ee326a0(lVar1,*(long *)(lVar3 + 0x18) - lVar1);
      }
      if (lVar3 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar3);
      }
      return in_RAX;
    }
  }
  return in_RAX;
}


