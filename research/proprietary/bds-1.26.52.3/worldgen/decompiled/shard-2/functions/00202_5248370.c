/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5348370 (ELF vaddr 0x5248370)
 * Label: NoiseGradientBiomeSurfaceComponent::vslot0
 * Body:  [[05348370, 0534840d] [05348410, 0534846a]]
 * Ghidra: wg_NoiseGradientBiomeSurfaceComponent__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_NoiseGradientBiomeSurfaceComponent__vslot0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[3];
    if (lVar2 != 0) {
      plVar1[4] = lVar2;
      thunk_FUN_0ee326a0(lVar2,plVar1[5] - lVar2);
    }
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      plVar1[1] = lVar2;
      thunk_FUN_0ee326a0(lVar2,plVar1[2] - lVar2);
    }
    in_RAX = thunk_FUN_0ee326a0(plVar1,0x38);
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x60) = lVar2;
    in_RAX = thunk_FUN_0ee326a0(lVar2,*(long *)(param_1 + 0x68) - lVar2);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    in_RAX = thunk_FUN_0ee326a0(*(undefined8 *)(param_1 + 0x48),
                                *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffe);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = lVar2;
    if (lVar2 != lVar4) {
      do {
        if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar4 + -0x20),
                             *(ulong *)(lVar4 + -0x30) & 0xfffffffffffffffe);
        }
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != lVar2);
      lVar3 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0x28) = lVar2;
    in_RAX = thunk_FUN_0ee326a0(lVar3,*(long *)(param_1 + 0x30) - lVar3);
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return in_RAX;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return in_RAX;
}


