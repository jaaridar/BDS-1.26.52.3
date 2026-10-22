/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5358b90 (ELF vaddr 0x5258b90)
 * Label: SurfaceBuilderBiomeComponentGlue::vslot0
 * Body:  [[05358b90, 05358c00] [05358c10, 05358cae]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_SurfaceBuilderBiomeComponentGlue__vslot0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = &UNK_0efa54a8;
  *param_1 = &UNK_0efa54a8;
  lVar1 = param_1[0x1c];
  if (lVar1 != 0) {
    param_1[0x1d] = lVar1;
    puVar2 = (undefined *)thunk_FUN_0ee326a0(lVar1,param_1[0x1e] - lVar1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    puVar2 = (undefined *)thunk_FUN_0ee326a0(param_1[0x1a],param_1[0x18] & 0xfffffffffffffffe);
  }
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    lVar4 = param_1[0x16];
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar4 + -0x20),
                             *(ulong *)(lVar4 + -0x30) & 0xfffffffffffffffe);
        }
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != lVar1);
      lVar3 = param_1[0x15];
    }
    param_1[0x16] = lVar1;
    puVar2 = (undefined *)thunk_FUN_0ee326a0(lVar3,param_1[0x17] - lVar3);
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    param_1[0x13] = lVar1;
    puVar2 = (undefined *)thunk_FUN_0ee326a0(lVar1,param_1[0x14] - lVar1);
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
    puVar2 = (undefined *)thunk_FUN_0ee326a0(lVar1,param_1[0xc] - lVar1);
  }
  lVar1 = param_1[7];
  if (lVar1 == 0) {
    return puVar2;
  }
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
  }
  return puVar2;
}


